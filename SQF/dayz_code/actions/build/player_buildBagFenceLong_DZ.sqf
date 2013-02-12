private["_position","_tent","_location","_isOk","_backpack","_tentType","_trg","_key","_locationPlayer","_locationPlayerTemp","_objectTemp","_timer"];
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
_classname = "BagFenceLong_DZ";

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
	_objectTemp = createVehicle [_classname, _location, [], 0, "CAN_COLLIDE"];
	_action_menu = player addAction ["Start Building", "\z\addons\dayz_code\actions\build\drop.sqf",[_objectTemp,_classname,_action_menu], 5, true, true];
	_objectTemp attachTo [player,[getPosATL player select 0, (getPosATL player select 1) + 2.5,(getPosATL player select 2) + 0.25]];
} else {
	cutText ["You cannot build here !", "PLAIN DOWN"];
};

