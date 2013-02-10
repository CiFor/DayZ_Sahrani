private["_position","_tent","_location","_isOk","_backpack","_tentType","_trg","_key"];
//check if can pitch here
call gear_ui_init;
_item = _this;
_haswoodpile = {_x == "PartWoodPile"} count magazines player;
_hasNails = {_x == "ItemNails"} count magazines player;
_location = player modeltoworld [0,2.5,0];
_location set [2,0];
_building = nearestObject [(vehicle player), "HouseBase"];
_isOk = [(vehicle player),_building] call fnc_isInsideBuilding;
//_isOk = true;

diag_log ("Build Crate: " + str(_isok) );

_config = configFile >> "CfgMagazines" >> _item;
_text = getText (_config >> "displayName");

if (_haswoodpile != 3 || _hasNails != 2) exitWith {cutText ["You need 3 wood piles and 2 bags of nails !","PLAIN DOWN"]};


//allowed
if (["forest",dayz_surfaceType] call fnc_inString) then { _isOk = false; diag_log ("surface forest"); };
//if (["grass",dayz_surfaceType] call fnc_inString) then { _isOk = false; diag_log ("surface grass"); };

//blocked
if (["concrete",dayz_surfaceType] call fnc_inString) then { _isOk = true; diag_log ("surface concrete"); };
//if (["wood",dayz_surfaceType] call fnc_inString) then { _isOk = true; diag_log ("surface concrete"); };

diag_log ("Build Crate surface: " + str(_isok) );

if (!_isOk) then {
	player removeMagazine "PartWoodPile";
	player removeMagazine "PartWoodPile";
	player removeMagazine "PartWoodPile";
	player removeMagazine "ItemNails";
	player removeMagazine "ItemNails";
	_dir = round(direction player);	
	
	//wait a bit
	player playActionNow "Medic";
	sleep 1;
	[player,"tentunpack",0,false] call dayz_zombieSpeak;
	
	_id = [player,50,true,(getPosATL player)] spawn player_alertZombies;
	
	sleep 5;
	//place tent (local)
	_tent = createVehicle ["BoxStorage", _location, [], 0, "CAN_COLLIDE"];
	_tent setdir _dir;
	_tent setpos _location;
	player reveal _tent;
	_location = getPosATL _tent;

	_tent setVariable ["characterID",dayz_characterID,true];

	//player setVariable ["tentUpdate",["Land_A_tent",_dir,_location,[dayz_tentWeapons,dayz_tentMagazines,dayz_tentBackpacks]],true];

	dayzPublishObj = [dayz_characterID,_tent,[_dir,_location],"Crate_DZ"];
	publicVariable "dayzPublishObj";
	if (isServer) then {
		dayzPublishObj call server_publishObj;
	};
	
	cutText ["A crate has been built !", "PLAIN DOWN"];
} else {
	cutText ["You cant build here !", "PLAIN DOWN"];
};

