for "_i" from 0 to ((count _this) - 1) do 
{
	private ["_config","_type","_position","_dir","_onFire","_object"];
	_config = 	(_this select _i);
	if (isClass(_config)) then {
		_type = 	getText		(_config >> "type");
		_position = [] + getArray	(_config >> "position");
		_dir = 		getNumber	(_config >> "direction");
		_SetZUp = 	getNumber	(_config >> "SetZUp");
		
		_object =  _type createVehicleLocal _position;
		_object setPos _position;
		_object setDir _dir;
		_object allowDamage false;
		
		//diag_log format["CreateObj: %1 / %2",_type,_position];
		if (_SetZUp > 0) then {
			_object setVectorUp [0,0,1];
		};
	};
};
//diag_log ("FILL: " + str(_this));