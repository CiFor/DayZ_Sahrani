private["_position","_tent","_location","_isOk","_backpack","_tentType","_trg","_key","_locationPlayer","_objectTemp","_timer"];
//check if can pitch here
call gear_ui_init;
_item = _this;
_hasSandBag = {_x == "ItemSandbag"} count magazines player;
_location = player modeltoworld [0,2.5,0];
_location set [2,0];
_building = nearestObject [(vehicle player), "HouseBase"];
_isOk = [(vehicle player),_building] call fnc_isInsideBuilding;
_hasEtool = 	"ItemEtool" in items player;
_hasToolBox = 	"ItemToolbox" in items player;
//_isOk = true;

diag_log ("Build Crate: " + str(_isok) );

_config = configFile >> "CfgMagazines" >> _item;
_text = getText (_config >> "displayName");

if (!_hasToolBox) exitWith {cutText ["You need a toolbox !","PLAIN DOWN"]};
if (!_hasEtool) exitWith {cutText ["You need an Entreching Tool !","PLAIN DOWN"]};
if (_hasSandBag < 3) exitWith {cutText ["You need 3 Sand Bags !","PLAIN DOWN"]};


//allowed
if (["forest",dayz_surfaceType] call fnc_inString) then { _isOk = false; diag_log ("surface forest"); };
//if (["grass",dayz_surfaceType] call fnc_inString) then { _isOk = false; diag_log ("surface grass"); };

//blocked
if (["concrete",dayz_surfaceType] call fnc_inString) then { _isOk = true; diag_log ("surface concrete"); };
//if (["wood",dayz_surfaceType] call fnc_inString) then { _isOk = true; diag_log ("surface concrete"); };

diag_log ("Build Crate surface: " + str(_isok) );

if (!_isOk) then {
	_objectTemp = createVehicle ["BagFenceLongRound_DZ", _location, [], 0, "CAN_COLLIDE"];
	_objectTemp setDir _dir;
	_objectTemp setpos [(getposATL _objectTemp select 0),(getposATL _objectTemp select 1), 0];
	_objectTemp attachTo [player,[0,2.5,0]];
	_timer = 10;
	_locationPlayer = player modeltoworld [0,0,0];
	while {_timer != 0} do {
	if(player distance _locationPlayer > 0.1) then {_timer = 10;};
	sleep 1;
	cutText [format["Building in %1 seconds",_timer],"PLAIN DOWN"];
	_timer=_timer-1;
	_locationPlayer = player modeltoworld [0,0,0];
	};
	deleteVehicle _objectTemp;
	_location = player modeltoworld [0,2.5,0];
	_dir = round(direction player);	
	
	//wait a bit
	player playActionNow "Medic";
	sleep 1;
	player removeMagazine "ItemSandbag";
	player removeMagazine "ItemSandbag";
	player removeMagazine "ItemSandbag";
	[player,"tentunpack",0,false] call dayz_zombieSpeak;
	
	_id = [player,50,true,(getPosATL player)] spawn player_alertZombies;
	
	sleep 5;
	//place tent (local)
	_tent = createVehicle ["BagFenceLongRound_DZ", _location, [], 0, "CAN_COLLIDE"];
	_tent setdir _dir;
	_tent setpos _location;
	player reveal _tent;
	_location = getPosATL _tent;

	_tent setVariable ["characterID",dayz_characterID,true];

	dayzPublishObj = [dayz_characterID,_tent,[_dir,_location],"BagFenceLongRound_DZ"];
	publicVariable "dayzPublishObj";
	if (isServer) then {
		dayzPublishObj call server_publishObj;
	};
	
	cutText ["A Bag Fence Long (Round) has been built !", "PLAIN DOWN"];
} else {
	cutText ["You cannot build here !", "PLAIN DOWN"];
};