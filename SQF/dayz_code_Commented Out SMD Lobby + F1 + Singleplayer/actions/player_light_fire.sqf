private["_obj"];
_obj = _this select 3;
if(_obj isKindOf "Land_fire") then {
	_gotWood = false;
	_mags = getMagazineCargo _obj;
	_serial = (_mags select 0) find "PartWoodPile";
	_qty = 0;
	if (_serial >= 0) then {
		_qty = (_mags select 1) select _serial;
	};
	if (_qty > 0) then {_gotWood = true;};
	if(_gotWood) then {
		player playActionNow "Medic";
		sleep 6;
		_obj inflame true;
	} else {
		cutText ["\n\nYou need to add some wood.", "PLAIN DOWN"];
	};
};
player removeAction s_player_light_fire;
s_player_light_fire = -1;