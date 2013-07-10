/*
	DayZ Sahrani Spawn Logic
	New spawn logic, Spawn around towns.
*/
private["_zones","_zone","_spawn","_origin","_pos","_dir","_return"];

_zones = configFile >> "CfgSaraSpawns";
_zone = _zones select floor(random(count _zones));
_spawn = _zone select floor(random(count _zone));
_origin = [] + getArray(_spawn >> "origin"); 
_origin = [_origin select 0, _origin select 2, 0];
_pos = ([_origin, 50, 160, 12, 0, 120, 0] call BIS_fnc_findSafePos);
_dir = ((_origin select 0) - (_pos select 0)) atan2 ((_origin select 1) - (_pos select 1));
_return = [_pos,_dir];
_return