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
_hasToolBox = 	"ItemToolbox" in items player;

//_isOk = true;
_classname = "Gunrack_DZ";
diag_log ("Build Crate: " + str(_isok) );

_config = configFile >> "CfgMagazines" >> _item;
_text = getText (_config >> "displayName");

if (!_hasToolBox) exitWith {cutText ["You need a toolbox !","PLAIN DOWN"]};
if (_haswoodpile < 3 || _hasNails < 2) exitWith {cutText ["You need 3 wood piles and 2 bags of nails !","PLAIN DOWN"]};


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
	_action_menu = player addAction ["Start Building", "\z\addons\dayz_code\actions\build\drop.sqf",[_objectTemp,_classname,_action_menu], 5, true, true];
} else {
	cutText ["You cannot build here !", "PLAIN DOWN"];
};

