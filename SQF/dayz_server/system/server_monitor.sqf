[]execVM "\z\addons\dayz_server\system\s_fps.sqf"; //server monitor FPS (writes each ~181s diag_fps+181s diag_fpsmin*)

dayz_versionNo = 		getText(configFile >> "CfgMods" >> "DayZ" >> "version");
dayz_hiveVersionNo = 	getNumber(configFile >> "CfgMods" >> "DayZ" >> "hiveVersion");
_script = getText(missionConfigFile >> "onPauseScript");

if ((count playableUnits == 0) and !isDedicated) then {
	isSinglePlayer = true;
};

waitUntil{initialized}; //means all the functions are now defined

// Load Custom Buildings
_funcGetBuildings =
{
	diag_log "Buildings: Running Setup";
	for "_i" from 0 to ((count _this) - 1) do 
	{	
		private ["_zone"];
		_zone = (_this select _i);
		for "_j" from 0 to ((count _zone) - 1) do 
		{
			private ["_config","_type","_position","_dir","_SetZUp","_object"];
			_config =  (_zone select _j);
			if (isClass(_config)) then {
				_type = 	getText		(_config >> "type");
				_position = [] + getArray	(_config >> "position");
				_dir = 		getNumber	(_config >> "direction");
				_SetZUp = 	getNumber	(_config >> "SetZUp");
				
				_object =  _type createVehicle _position;
				_object setPos _position;
				_object setDir _dir;
				_object allowDamage true;
				
				//diag_log format["CreateObj: %1 / %2",_type,_position];
				
				if (_SetZUp > 0) then {
					_object setVectorUp [0,0,1];
				};
			};
		};
	};
};
_cfgLocation = configFile >> "CfgTownGeneratorSara";
_cfgLocation call _funcGetBuildings;

diag_log "HIVE: Starting";

if (_script != "") then
{
	diag_log "MISSION: File Updated";
} else {
	while {true} do
	{
		diag_log "MISSION: File Needs Updating";
		sleep 1;
	};
};

	//Stream in objects
	/* STREAM OBJECTS */
		//Send the key
		_key = format["CHILD:302:%1:",dayZ_instance];
		_result = _key call server_hiveReadWrite;

		diag_log "HIVE: Request sent";
		
		//Process result
		_status = _result select 0;
		
		_myArray = [];
		if (_status == "ObjectStreamStart") then {
			_val = _result select 1;
			//Stream Objects
			diag_log ("HIVE: Commence Object Streaming...");
			for "_i" from 1 to _val do {
				_result = _key call server_hiveReadWrite;

				_status = _result select 0;
				_myArray set [count _myArray,_result];
				//diag_log ("HIVE: Loop ");
			};
			//diag_log ("HIVE: Streamed " + str(_val) + " objects");
		};
	
		_countr = 0;		
		{
				
			//Parse Array
			_countr = _countr + 1;
		
			_idKey = 	_x select 1;
			_type =		_x select 2;
			_ownerID = 	_x select 3;
			_worldspace = _x select 4;
			_intentory=	_x select 5;
			_hitPoints=	_x select 6;
			_fuel =		_x select 7;
			_damage = 	_x select 8;

			_dir = 0;
			_pos = [0,0,0];
			_wsDone = false;
			if (count _worldspace >= 2) then
			{
				_dir = _worldspace select 0;
				if (count (_worldspace select 1) == 3) then {
					_pos = _worldspace select 1;
					_wsDone = true;
				}
			};			
			if (!_wsDone) then {
				if (count _worldspace >= 1) then { _dir = _worldspace select 0; };
				_pos = [getMarkerPos "center",0,4000,10,0,2000,0] call BIS_fnc_findSafePos;
				if (count _pos < 3) then { _pos = [_pos select 0,_pos select 1,0]; };
				diag_log ("MOVED OBJ: " + str(_idKey) + " of class " + _type + " to pos: " + str(_pos));
			};
			
			if (_damage < 1) then {
				diag_log format["OBJ: %1 - %2", _idKey,_type];
				
				//Create it
				_object = createVehicle [_type, _pos, [], 0, "CAN_COLLIDE"];
				_object setVariable ["lastUpdate",time];
				_object setVariable ["ObjectID", _idKey, true];
				_object setVariable ["CharacterID", _ownerID, true];
				
				clearWeaponCargoGlobal  _object;
				clearMagazineCargoGlobal  _object;
				
				if (_object isKindOf "TentStorage" || _object isKindOf "BoxStorage_DZ" || _object isKindOf "Gunrack_DZ") then {
					_pos set [2,0];
					_object setpos _pos;
					_object addMPEventHandler ["MPKilled",{_this call vehicle_handleServerKilled;}];
				};
				_object setdir _dir;
				_object setDamage _damage;
				
				if (count _intentory > 0) then {
					//Add weapons
					_objWpnTypes = (_intentory select 0) select 0;
					_objWpnQty = (_intentory select 0) select 1;
					_countr = 0;					
					{
						if (_x == "Crossbow") then { _x = "Crossbow_DZ" }; // Convert Crossbow to Crossbow_DZ
						_isOK = 	isClass(configFile >> "CfgWeapons" >> _x);
						if (_isOK) then {
							_block = 	getNumber(configFile >> "CfgWeapons" >> _x >> "stopThis") == 1;
							if (!_block) then {
								_object addWeaponCargoGlobal [_x,(_objWpnQty select _countr)];
							};
						};
						_countr = _countr + 1;
					} forEach _objWpnTypes; 
					
					//Add Magazines
					_objWpnTypes = (_intentory select 1) select 0;
					_objWpnQty = (_intentory select 1) select 1;
					_countr = 0;
					{
						if (_x == "BoltSteel") then { _x = "WoodenArrow" }; // Convert BoltSteel to WoodenArrow
						_isOK = 	isClass(configFile >> "CfgMagazines" >> _x);
						if (_isOK) then {
							_block = 	getNumber(configFile >> "CfgMagazines" >> _x >> "stopThis") == 1;
							if (!_block) then {
								_object addMagazineCargoGlobal [_x,(_objWpnQty select _countr)];
							};
						};
						_countr = _countr + 1;
					} forEach _objWpnTypes;

					//Add Backpacks
					_objWpnTypes = (_intentory select 2) select 0;
					_objWpnQty = (_intentory select 2) select 1;
					_countr = 0;
					{
						_isOK = 	isClass(configFile >> "CfgVehicles" >> _x);
						if (_isOK) then {
							_block = 	getNumber(configFile >> "CfgVehicles" >> _x >> "stopThis") == 1;
							if (!_block) then {
								_object addBackpackCargoGlobal [_x,(_objWpnQty select _countr)];
							};
						};
						_countr = _countr + 1;
					} forEach _objWpnTypes;
				};	
				
				if (_object isKindOf "AllVehicles" && typeOf _object != "Old_bike_TK_CIV_EP1" && typeOf _object != "Old_bike_TK_INS_EP1") then {
					{
						_selection = _x select 0;
						_dam = _x select 1;
						if (_selection in dayZ_explosiveParts and _dam > 0.8) then {_dam = 0.8};
						[_object,_selection,_dam] call object_setFixServer;
					} forEach _hitpoints;
					_object setvelocity [0,0,1];
					_object setFuel _fuel;
					_object call fnc_vehicleEventHandler;
				};

				//Monitor the object
				//_object enableSimulation false;
				dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_object];
			};
		} forEach _myArray;
		
	// # END OF STREAMING #

//Set the Time
	//Send request
	_key = "CHILD:307:";
	_result = _key call server_hiveReadWrite;
	_outcome = _result select 0;
	if(_outcome == "PASS") then {
		_date = _result select 1; 
		if(isDedicated) then {
			//["dayzSetDate",_date] call broadcastRpcCallAll;
			setDate _date;
			dayzSetDate = _date;
			publicVariable "dayzSetDate";
		};

		diag_log ("HIVE: Local Time set to " + str(_date));
	};
	
	createCenter civilian;
	if (isDedicated) then {
		endLoadingScreen;
	};	
	
if (isDedicated) then {
	_id = [] execFSM "\z\addons\dayz_server\system\server_cleanup.fsm";
};

allowConnection = true;

//Start Crashspawner-Logic
nul = [
				3,			//Number of the guaranteed Loot-Piles at the Crashside
				3,			//Number of the random Loot-Piles at the Crashside 3+(1,2,3 or 4)
				(20*60),		//Fixed-Time (in seconds) between each start of a new Chopper
				(10*60),		//Random time (in seconds) added between each start of a new Chopper
				80,			//Spawnchance of the Heli (100 will spawn all possible Choppers, 50 only 50% of them)
				'center',		//Center-Marker for the Random-Crashpoints, for Chernarus this is a point near Stary
				6000,			//Radius in Meters from the Center-Marker in which the Choppers can crash and get waypoints
				50,			//Percentage chance of smoke on the crashsite
					false,		//Should the flames & smoke fade after a while (if there is smoke)?
				false,			//Use the Static-Crashpoint-Function? If true, you have to add Coordinates into server_spawnCrashSite.sqf
				1,			//Amount of Random-Waypoints the Heli gets before he flys to his Point-Of-Crash (using Static-Crashpoint-Coordinates if its enabled)
				0.1,			//Amount of Damage the Heli has to get while in-air to explode before the POC. (0.0001 = Insta-Explode when any damage//bullethit, 1 = Only Explode when completly damaged)
				true,			//Spawn the first Heli right on Server-Start?
				6,			//Maximum Number of Crashsites on the Server, after this amount of Crashsites the Server stops spawning new Helicrashs
				60,			//Percentage chance of each helicrash to send the SOS to all players that own a radio
				10000,			//Distance in meters in which all players with Radios will see the SOS-Message
				false,			//Should the Servers actual Player-Count effect the amount of Loot at the Crashsite (Lootbalancing)? Example: 40 Slot Server has only 20 Players Online, Only 50% of the Min/Max-Lootpiles will spawn
					40,		//Maximum Playercount of your Server, only used when Lootbalancing is activated
					2,		//Minimum Lootpiles if Loot-Balancing is active, even if the Playercount is Zero.
				false			//No50-Cal Loottable? If true, the Crashsites will never spawn High-Caliber Rifles like AS50, Lapua Magnum, M107 and KSVK
			] spawn server_spawnCrashSite;
