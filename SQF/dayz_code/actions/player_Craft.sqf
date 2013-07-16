private["_item","_class","_input","_output","_type","_obj","_count","_qty_input","_control","_slotItem","_slotend","_slotstart","_input_type"];

disableSerialization;
call gear_ui_init;

_item = _this select 0;
_input = _this select 1;
_output = _this select 2;

_found = true;

_dialog = findDisplay 106;
{
	_obj = _x select 0;
	_count = _x select 1;	
	_qty_input = 0;
	_input_type = getNumber(configFile >> "CfgMagazines" >> _obj >> "type");
	_slotstart = 0;
	_slotend = 0;
	
	if (_input_type == 256) then {
		_slotstart = 109;
		_slotend = 120;
	};
	if (_input_type == 16) then {
		_slotstart = 122;
		_slotend = 129;
	};
	
	for "_i" from _slotstart to _slotend do {
		_control =_dialog displayCtrl _i;
		_slotItem = gearSlotData _control;
		if (_slotItem == _obj) then {
			_qty_input = _qty_input+1;
		};
	};
	
	if(_qty_input < _count) exitWith { _found = false; };
} forEach _input;

if(_found) then {
	player playActionNow "PutDown";
	{
		_obj = _x select 0;
		_count = _x select 1;
		for "_i" from 1 to _count do {
			player removeMagazine _obj;
		};
	} forEach _input;
	{
		_obj = _x select 0;
		_type = _x select 1;
		if(_type == "weapon") then { player addWeapon _obj; };
		if(_type == "magazine") then { player addMagazine _obj; };
	} forEach _output;
} else {
	_requireditems = "";
	{
		_obj = _x select 0;
		_count = _x select 1;
		_objName = getText(configFile >> "CfgMagazines" >> _obj >> "displayName");
		if(_requireditems == "")
		then { _requireditems = Format["%2 %1",_objName,_count]; }
		else { _requireditems = Format["%1, %3 %2",_requireditems,_objName,_count]; };
	} forEach _input;
	_outputname = getText(configFile >> "Cfg" + ((_output select 0) select 1) + "s" >> ((_output select 0) select 0) >> "displayName");
	cutText [Format["You require: %1 to make a %2",_requireditems,_outputname],"PLAIN DOWN"];
};