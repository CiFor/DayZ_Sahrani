private["_location","_isOk","_dir","_classname"];
_playerDir = direction player;
_sine = 0.6 * sin _playerDir;
_cosine = 0.6 * cos _playerDir;
_location = getPosATL player;
_location set [0, (_location select 0) + _sine]; 
_location set [1, (_location select 1) + _cosine];

if ((_location select 2) < 0) then {
	_location set [2,0];
};
//_location set [2,0];
_isOk = true; //count (_location isFlatEmpty [0.3,0,0,4,0,false,player]) > 0;
_hasWood = 		"PartWoodPile" in magazines player;

if (_hasWood) then {
	if (_isOk) then {
			player removeMagazine "PartWoodPile";
			_dir = getDir player;
			_classname = "Land_Fire_DZ";
			player playActionNow "Medic";
			sleep 6;
			_fire = createVehicle [_classname, [0,0,0], [], 1, "CAN_COLLIDE"];
			_fire setDir _dir;
			_fire setPosAtl _location;
			player reveal _fire;
			
			_id = _fire spawn player_fireMonitor;
			
			cutText [localize "str_fireplace_01", "PLAIN DOWN"];
	} else {
		cutText [localize "str_fireplace_02", "PLAIN DOWN"];
	};
} else {
	cutText [localize "str_player_22", "PLAIN DOWN"];
};