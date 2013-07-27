//Animated Helicrashs for DayZ 1.7.6.1
//Version 0.3
//Release Date: 27. Juli 2013
//Author: Grafzahl
//Thread-URL: http://opendayz.net/threads/animated-helicrashs-0-1-release.9084/

private["_sosDistance","_spawnOnStart","_maxHelis","_sendSOS","_heliSpawned","_useStatic","_crashDamage","_lootRadius","_preWaypoints","_preWaypointPos","_endTime","_startTime","_safetyPoint","_heliStart","_deadBody","_exploRange","_heliModel","_lootPos","_list","_craters","_dummy","_wp2","_wp3","_landingzone","_aigroup","_wp","_helipilot","_crash","_crashwreck","_smokerand","_staticcoords","_pos","_dir","_position","_num","_config","_itemType","_itemChance","_weights","_index","_iArray","_crashModel","_lootTable","_guaranteedLoot","_randomizedLoot","_frequency","_variance","_spawnChance","_spawnMarker","_spawnRadius","_spawnFire","_permanentFire","_crashName"];

//_crashModel	= _this select 0;
//_lootTable	= _this select 1;
_guaranteedLoot = _this select 0;
_randomizedLoot = _this select 1;
_frequency	= _this select 2;
_variance	= _this select 3;
_spawnChance	= _this select 4;
_spawnMarker	= _this select 5;
_spawnRadius	= _this select 6;
_spawnFire	= _this select 7;
_fadeFire	= _this select 8;

if(count _this > 9) then { _useStatic = _this select 9; } else { _useStatic = false; };
if(count _this > 10) then { _preWaypoints = _this select 10; } else { _preWaypoints = 1; };
if(count _this > 11) then { _crashDamage = _this select 11; } else { _crashDamage = 1; };
//NEW
if(count _this > 12) then	{ _spawnOnStart = _this select 12; } else { _spawnOnStart = true; };
if(count _this > 13) then { _maxHelis = _this select 13; } else { _maxHelis = 999; };
if(count _this > 14) then { _sendSOS = _this select 14; } else { _sendSOS = 0; };
if(count _this > 15) then { _sosDistance = _this select 14; } else { _sosDistance = 99999; };
_spawnedHelis = 0;

diag_log(format["CRASHSPAWNER: Starting spawn logic for animated helicrashs - written by Grafzahl [SC:%1||PW:%2||CD:%3]", str(_useStatic), str(_preWaypoints), _crashDamage]);

while {true} do {
	private["_timeAdjust","_timeToSpawn","_spawnRoll","_crash","_hasAdjustment","_newHeight","_adjustedPos"];
	// Allows the variance to act as +/- from the spawn frequency timer
	_timeAdjust = round(random(_variance * 2) - _variance);
	_timeToSpawn = time + _frequency + _timeAdjust;
	
	//Spawn first Crashsite right after Server-Start
	if(_spawnedHelis < 1 && _spawnOnStart) then {
		_timeToSpawn = 60;
	};

	//Random Heli-Type
	_heliModel = ["UH1H_DZ","Mi17_DZ","UH1H_TK_DZ"] call BIS_fnc_selectRandom;

	//Random-Startpositions, Adjust this for other Maps then Chernarus
	_heliStart = [
									[12008.267,1485.0635,400],
									[2992.7285,12472.498,400],
									[20006.211,8452.7061,400]
							] call BIS_fnc_selectRandom;

	//A Backup Waypoint, if not Chernarus, set some Coordinates far up in the north (behind all possible Crashsites)
	_safetyPoint = [17420.422,18158.953];

	//Settings for the Standard UH1H_DZ
	_crashModel = "UH1Wreck_DZ";
	_exploRange = 195;
	_lootRadius = 0.35;

	//Adjust Wreck and Range of Explosion if its a Mi17_DZ
	if(_heliModel == "Mi17_DZ") then {
		_crashModel = "Mi8Wreck";
		_exploRange = 285;
		_lootRadius = 0.3;
	};

	//Crash loot - just uncomment the one you wish to use by default with 50cals is enabled.
	//Table including 50 cals
	_lootTable = ["HeliCrash"] call BIS_fnc_selectRandom;

	//Table without 50 cals
	//_lootTable = ["Military","HeliCrash_No50s","MilitarySpecial"] call BIS_fnc_selectRandom;

	_crashName	= getText (configFile >> "CfgVehicles" >> _heliModel >> "displayName");

	diag_log(format["CRASHSPAWNER: %1%2 chance to start a crashing %3 with loot table '%4' at %5", _spawnChance, '%', _crashName, _lootTable, _timeToSpawn]);

	// Apprehensive about using one giant long sleep here given server time variances over the life of the server daemon
	while {time < _timeToSpawn} do {
		sleep 5;
	};

	_spawnRoll = random 100;

	// Percentage roll
	if ((_spawnRoll <= _spawnChance) && (_spawnedHelis < _maxHelis)) then {
		_spawnedHelis = _spawnedHelis + 1;
/*
==================================================================================================
		_staticcoords give you the possibility to organize your crashsites!

		Crashsites close to cherno or electro would be possible with that.
		Use the editor for your map, create some vehicles or triggers at points where you
		want your crashside (aprox), save it and extract all coordinates and put them in this
		2D-Array. If you dont know how to do this, dont use _staticcoords.

		I would advise you to create at least 100 positions, otherwise its too easy for your players
		to find the crash-locations after some time of playing on your server.

		!!!!!After you put in the coordinates you have to set _useStatic to true inside
		your server_monitor.sqf, default is false!!!!!
==================================================================================================
*/

		_staticcoords =	[
											[6277.5605,8332.8262],
											[1234.5605,4321.8262],
											[4545.5605,1256.8262]
										];

		if(_useStatic) then {
			_position = _staticcoords call BIS_fnc_selectRandom;
		} else {
			_position = [getMarkerPos _spawnMarker,0,_spawnRadius,10,0,2000,0] call BIS_fnc_findSafePos;
		};
		//DEFAULT: GET COORDS FROM BIS_fnc_findSafePos, COMMENT OUT IF YOU USE _STATICCOORDS

		diag_log(format["CRASHSPAWNER: %1 started flying from %2 to %3 NOW!(TIME:%4||LT:%5)", _crashName,  str(_heliStart), str(_position), round(time), _lootTable]);

		_startTime = time;

		//Only a Woman could crash a Heli this way...
		_aigroup = creategroup civilian;
		_helipilot = _aigroup createUnit ["SurvivorW2_DZ",[0,0,0],[],0,"FORM"];

		//Spawn the AI-Heli flying in the air
		waituntil {alive _helipilot};
		_crashwreck = createVehicle [_heliModel,_heliStart, [], 0, "FLY"];

		_helipilot setPos (getpos _crashwreck);
		_helipilot moveindriver _crashwreck;
		_helipilot assignAsDriver _crashwreck;

		//Make sure its not destroyed by the Hacker-Killing-Cleanup (Thanks to Sarge for the hint)
		_crashwreck setVariable["Sarge",1];

		_crashwreck engineOn true;
		_crashwreck flyInHeight 140;
		_crashwreck forceSpeed 140;
		//_crashwreck setspeedmode "LIMITED";

		//Create an Invisibile Landingpad at the Crashside-Coordinates
		_landingzone = createVehicle ["HeliHEmpty", [_position select 0, _position select 1,0], [], 0, "CAN_COLLIDE"];
		_landingzone setVariable["Sarge",1];

		sleep 0.5;

		if(_preWaypoints > 0) then {
			for "_x" from 1 to _preWaypoints do {
				if(_useStatic) then {
					_preWaypointPos = _staticcoords call BIS_fnc_selectRandom;
				} else {
					_preWaypointPos = [getMarkerPos _spawnMarker,0,_spawnRadius,10,0,2000,0] call BIS_fnc_findSafePos;
				};
				diag_log(format["CRASHSPAWNER: Adding Pre-POC-Waypoint #%1 on %2", _x,str(_preWaypointPos)]);
				_wp = _aigroup addWaypoint [_preWaypointPos, 0];
				_wp setWaypointType "MOVE";
				_wp setWaypointBehaviour "CARELESS";
			};
		};

		_wp2 = _aigroup addWaypoint [position _landingzone, 0];
		_wp2 setWaypointType "MOVE";
		_wp2 setWaypointBehaviour "CARELESS";

		//Even when the Heli flys to high, it will burn when reaching its Waypoint
		_wp2 setWaypointStatements ["true", "_crashwreck setdamage 1;"];

		//Adding a last Waypoint up in the North, so the Heli doesnt Hover at WP1 (OR2)
		//and would also come back to WP1 if somehow it doesnt explode.
		_wp3 = _aigroup addWaypoint [_safetyPoint, 0];
		_wp3 setWaypointType "CYCLE";
		_wp3 setWaypointBehaviour "CARELESS";

		//Get some more Speed when close to the Crashpoint and go on even if Heli died or hit the ground
		waituntil {(_crashwreck distance _position) <= 1000 || not alive _crashwreck || (getPosATL _crashwreck select 2) < 5 || (damage _crashwreck) >= _crashDamage};
			_crashwreck flyInHeight 95;
			_crashwreck forceSpeed 160;
			_crashwreck setspeedmode "NORMAL";

		//BOOOOOOM!
		waituntil {(_crashwreck distance _position) <= _exploRange || not alive _crashwreck || (getPosATL _crashwreck select 2) < 5 || (damage _crashwreck) >= _crashDamage};
			//Taking out the Tailrotor would be more realistic, but makes the POC not controllable
			//_crashwreck setHit ["mala vrtule", 1];
			_crashwreck setdamage 1;
			_crashwreck setfuel 0;
			diag_log(format["CRASHSPAWNER: %1 just exploded at %2(InWater?: %3)!", _crashName, str(getPosATL _crashwreck), str(surfaceIsWater getPos _crashwreck)]);

			//She cant survive this :(
			_helipilot setdamage 1;

			//Giving the crashed Heli some time to find its "Parkingposition"
			sleep 13;

		//Get position of the helis wreck, but make sure its on the ground;
		_pos = [getpos _crashwreck select 0, getpos _crashwreck select 1,0];

		//saving the direction of the wreck(not used right now)
		_dir = getdir _crashwreck; 

		//Send Public Variable so every client can delete the craters around the new Wreck (musst be added in init.sqf)
		if ((_sendSOS >= random 100) && !surfaceIsWater _pos) then {
			dayzSOS = true;
		} else {
			dayzSOS = false;
		};

		heliCrash = [_pos,_heliModel,dayzSOS,_sosDistance];
		publicVariable "heliCrash";

		//Clean Up the Crashsite
		deletevehicle _crashwreck;
		deletevehicle _helipilot;
		deletevehicle _landingzone;
		deleteGroup _aigroup;

		//Animation is done, lets create the actual Crashside
		_crash = createVehicle [_crashModel, _pos, [], 0, "CAN_COLLIDE"];
		_crash setVariable["Sarge",1];

		diag_log(format["CRASHSPAWNER: %1 spawned at %2(InWater?: %3)!", _crashModel, str(_pos), str(surfaceIsWater _pos)]);
		//If you want all Grass around the crashsite to be cutted: Uncomment the next Line (Noobmode)
		//_crashcleaner = createVehicle ["ClutterCutter_EP1", _pos, [], 0, "CAN_COLLIDE"];

		//Setting the Direction would add realism, but it sucks because of the bugged model when not on plane ground.
		//If you want it anyways, just uncomment the next line
		//_crash setDir _dir;

		// I don't think this is needed (you can't get "in" a crash), but it was in the original DayZ Crash logic
		dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_crash];

		_crash setVariable ["ObjectID",1,true];

		//Make it burn (or not)
		if (_spawnFire >= random 100) then {
			dayzFire = [_crash,2,time,false,_fadeFire];
			publicVariable "dayzFire";
			_crash setvariable ["fadeFire",_fadeFire,true];
		};

		_num		= round(random _randomizedLoot) + _guaranteedLoot;
		
		_config = 		configFile >> "CfgBuildingLoot" >> "HeliCrash";
		_itemType = [
			["FN_FAL","weapon"],
			["bizon_silenced","weapon"],
			["bizon","weapon"],
			["M14_EP1","weapon"],
			["FN_FAL_ANPVS4","weapon"],
			["BAF_LRR_scoped","weapon"],
			//["BAF_AS50_scoped_DZ","weapon"],
			["Mk_48_DZ","weapon"],
			["M249_DZ","weapon"],
			//["BAF_L85A2_RIS_SUSAT","weapon"],
			["M4SPR","weapon"],
			["DMR","weapon"],
			["","military"],
			["","medical"],
			["MedBox0","object"],
			["NVGoggles","weapon"],
			["AmmoBoxSmall_556","object"],
			["AmmoBoxSmall_762","object"],
			["Skin_Camo1_DZ","magazine"],
			["Skin_Sniper1_DZ","magazine"],
			["Skin_Rocket_DZ","magazine"],
			["Skin_Soldier_DZ","magazine"],
			["Skin_BanditSkin_DZ","magazine"],
			["G36C","weapon"],
			["G36C_camo","weapon"],
			["G36A_camo","weapon"],
			["G36K_camo","weapon"],
			["100Rnd_762x54_PK","magazine"],
			["M40A3","weapon"],
			["m8_SAW","weapon"],
			["m8_sharpshooter","weapon"],
			["BAF_L85A2_RIS_ACOG","weapon"],
			["VSS_vintorez","weapon"],
			["SCAR_L_CQC","weapon"],
			["SCAR_L_CQC_Holo","weapon"],
			["SCAR_L_STD_Mk4CQT","weapon"],
			["SCAR_L_STD_EGLM_RCO","weapon"],
			["SCAR_H_LNG_Sniper","weapon"],
			["ksvk_DZ","weapon"],
			["SVD","weapon"],
			["SVD_CAMO","weapon"]
		];
	
		_itemChance =
			[
				0.045,		//{"FN_FAL","weapon"},
				0.02,		//{"bizon_silenced","weapon"},
				0.02,		//{"bizon","weapon"},
				0.04,		//{"M14_EP1","weapon"},
				0.02,		//{"FN_FAL_ANPVS4","weapon"},
				0.015,		//{"BAF_LRR_scoped","weapon"},
				//0.01,		//{"BAF_AS50_scoped_DZ","weapon"},
				0.03,		//{"Mk_48_DZ","weapon"},
				0.04,		//{"M249_DZ","weapon"},
				//0.03,		//{"BAF_L85A2_RIS_SUSAT","weapon"},
				0.03,		//{"M4SPR","weapon"},
				0.03,		//{"DMR","weapon"},
				0.12,			//{"","military"},
				0.09,		//{"","medical"},
				0.09,		//{"MedBox0","object"},
				0.02,		//{"NVGoggles","weapon"}
				0.08,	//AmmoBoxSmall_556
				0.08,	//AmmoBoxSmall_762
				0.06,	//Skin_Camo1_DZ
				0.03,	//Skin_Sniper1_DZ
				0.03,	//Skin_Rocket_DZ
				0.03,	//Skin_Soldier_DZ
				0.03,	//Skin_BanditSkin_DZ
				0.03,	//G36C"
				0.05,	//G36C_camo
				0.04,	//G36A_camo
				0.04,	//G36K_camo
				0.01,	//("100Rnd_762x54_PK","magazine"}
				0.01,	//("M40A3","weapon"}
				0.03,	//("m8_SAW","weapon"}
				0.02,	//("m8_sharpshooter","weapon"}
				0.05,	//("BAF_L85A2_RIS_ACOG","weapon"}
				0.01,	//("VSS_vintorez","weapon"}
				0.04,	//("SCAR_L_CQC","weapon"}
				0.03,	//("SCAR_L_CQC_Holo","weapon"}
				0.02,	//("SCAR_L_STD_Mk4CQT","weapon"}
				0.02,	//("SCAR_L_STD_EGLM_RCO","weapon"}
				0.02,	//("SCAR_H_LNG_Sniper","weapon"}
				0.015,	//("ksvk_DZ","weapon"}
				0.015,	//("SVD","weapon"}
				0.01	//("SVD_CAMO","weapon"}
			];

	waituntil {!isnil "fnc_buildWeightedArray"};

	_weights = [];
	_weights = [_itemType,_itemChance] call fnc_buildWeightedArray;

	for "_x" from 1 to _num do {
		_index = _weights call BIS_fnc_selectRandom;
		sleep 0.1;
		
		if (count _itemType > _index) then {
			_iArray = _itemType select _index;
			_lootPos = [_pos, ((random 2) + (sizeOf(_crashModel) * _lootRadius)), random 360] call BIS_fnc_relPos;
			_iArray set [2,_lootPos];
			_iArray set [3,0];
			_iArray call spawn_loot;
			diag_log(format["CRASHSPAWNER: Loot spawn at '%1' with loot table '%2'", _lootPos, sizeOf(_crashModel)]); 
			_nearby = _pos nearObjects ["ReammoBox", sizeOf(_crashModel)];
			{
				_x setVariable ["permaLoot",true];
			} forEach _nearBy;
		};
	};

		//Adding 5 dead soldiers around the wreck, poor guys
		for "_x" from 1 to 5 do {
			_lootPos = [_pos, ((random 4)+3), random 360] call BIS_fnc_relPos;
			_deadBody = createVehicle[["Body1","Body2"] call BIS_fnc_selectRandom,_lootPos,[], 0, "CAN_COLLIDE"];
			_deadBody setDir (random 360);
		};
		_endTime = time - _startTime;
		diag_log(format["CRASHSPAWNER: Crash completed! Wreck at: %2 - Runtime: %1 Seconds || Distance from calculated POC: %3 meters", round(_endTime), str(getPos _crash), round(_position distance _crash)]); 
	};
};