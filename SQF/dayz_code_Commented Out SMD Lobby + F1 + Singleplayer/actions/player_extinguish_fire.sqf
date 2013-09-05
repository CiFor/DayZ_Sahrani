private["_obj"];
_obj = _this select 3;
if(_obj isKindOf "Land_fire" and inflamed _obj) then {
	player playActionNow "PutDown";
	sleep 1;
	_obj inflame false;
};
player removeAction s_player_extinguish_fire;
s_player_extinguish_fire = -1;