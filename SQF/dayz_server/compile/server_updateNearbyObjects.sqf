private["_pos"];
_pos = _this select 0;

{
	[_x, "gear"] call server_updateObject;
} forEach nearestObjects [_pos, ["Car", "Helicopter", "Motorcycle", "Ship", "TentStorage", "BoxStorage_DZ", "Gunrack_DZ", "WeaponCache_DZ","Workbench_DZ"], 10];
