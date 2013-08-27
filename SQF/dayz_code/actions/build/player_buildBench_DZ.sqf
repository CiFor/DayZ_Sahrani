private["_position","_tent","_location","_isOk","_backpack","_tentType","_trg","_key","_locationPlayer","_objectTemp","_timer"];
//check if can pitch here
call gear_ui_init;
_item = _this;
_hasNails = {_x == "ItemNails"} count magazines player;
_haswoodpile = {_x == "PartWoodPile"} count magazines player;
_location = player modeltoworld [0,2.5,0];
_location set [2,0];
_building = nearestObject [(vehicle player), "HouseBase"];
_isOk = [(vehicle player),_building] call fnc_isInsideBuilding;
_hasToolBox = 	"ItemToolbox" in items player;
//_isOk = true;
_classname = "Bench_DZ";
diag_log ("Build Crate: " + str(_isok) );

_config = configFile >> "CfgMagazines" >> _item;
_text = getText (_config >> "displayName");

if (!_hasToolBox) exitWith {cutText ["You need a toolbox !","PLAIN DOWN"]};
if (_haswoodpile < 2 || _hasNails < 3) exitWith {cutText ["You need 2 wood piles and 3 bag of nails !","PLAIN DOWN"]};


//allowed
if (["forest",dayz_surfaceType] call fnc_inString) then { _isOk = false; diag_log ("surface forest"); };
//if (["grass",dayz_surfaceType] call fnc_inString) then { _isOk = false; diag_log ("surface grass"); };

//blocked
if (["concrete",dayz_surfaceType] call fnc_inString) then { _isOk = true; diag_log ("surface concrete"); };
//if (["wood",dayz_surfaceType] call fnc_inString) then { _isOk = true; diag_log ("surface concrete"); };

diag_log ("Build Crate surface: " + str(_isok) );

if (!_isOk) then {
	_objectTemp = createVehicle [_classname, _location, [], 0, "CAN_COLLIDE"];
	_objectTemp attachTo [player,[0,2.5,0.5]];
	_handle = player addAction ["Start Building", "\z\addons\dayz_code\actions\build\drop.sqf",[_objectTemp,_classname], 5, true, true];
	s_player_craftActions set [count s_player_craftActions,_handle];
	_handle = player addAction ["Cancel Building", "\z\addons\dayz_code\actions\build\cancel.sqf",[_objectTemp,_classname], 4, true, true];
	s_player_craftActions set [count s_player_craftActions,_handle];
} else {
	cutText ["You cannot build here !", "PLAIN DOWN"];
};

