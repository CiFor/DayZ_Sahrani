private["_location","_dir","_object"];
_array = 	_this select 3;
_objectTemp = _array select 0;
_classname = _array select 1;

{player removeAction _x} forEach s_player_craftActions;s_player_craftActions = [];
deleteVehicle _objectTemp;