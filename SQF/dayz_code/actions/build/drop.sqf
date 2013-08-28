private["_location","_dir","_object"];
_array = 	_this select 3;
_objectTemp = _array select 0;
_classname = _array select 1;

{player removeAction _x} forEach s_player_craftActions;s_player_craftActions = [];
deleteVehicle _objectTemp;

_isOk = [(vehicle player),_building] call fnc_isInsideBuilding;
if (!_isOk) then {
	_location = player modeltoworld [0,2.5,0];
	_location set [2,0];
	_dir = getDir player;
	player playActionNow "Medic";
	sleep 1;
	if (_classname == "BoxStorage_DZ") then {
		player removeMagazine "PartWoodPile";
		player removeMagazine "PartWoodPile";
		player removeMagazine "PartWoodPile";
		player removeMagazine "ItemNails";
		player removeMagazine "ItemNails";
		player removeMagazine "ItemNails";
		player removeMagazine "ItemNails";
		player removeMagazine "ItemNails";
		player removeMagazine "ItemNails";
	};
	if (_classname == "Gunrack_DZ") then {
		player removeMagazine "PartWoodPile";
		player removeMagazine "PartWoodPile";
		player removeMagazine "PartWoodPile";
		player removeMagazine "ItemNails";
		player removeMagazine "ItemNails";
		player removeMagazine "ItemNails";
	};
	if ((_classname == "BagFenceLong_DZ") || (_classname == "BagFenceLongCorner_DZ")) then {
		player removeMagazine "ItemSandbag";
		player removeMagazine "ItemSandbag";
		player removeMagazine "ItemSandbag";
	};
	if (_classname == "BagFenceLongRound_DZ") then {
		player removeMagazine "ItemSandbag";
		player removeMagazine "ItemSandbag";
		player removeMagazine "ItemSandbag";
		player removeMagazine "ItemSandbag";
		player removeMagazine "ItemSandbag";
		player removeMagazine "ItemSandbag";
	};
	if (_classname == "Barb_Gate_DZ") then {
		player removeMagazine "PartGeneric";
		player removeMagazine "PartGeneric";
		player removeMagazine "PartGeneric";
		player removeMagazine "ItemWire";
		player removeMagazine "ItemWire";
	};
	if (_classname == "Bench_DZ") then {
		player removeMagazine "PartWoodPile";
		player removeMagazine "PartWoodPile";
		player removeMagazine "ItemNails";
		player removeMagazine "ItemNails";
		player removeMagazine "ItemNails";
	};
	if (_classname == "CampWoodTower_DZ") then {
		player removeMagazine "PartWoodPile";
		player removeMagazine "PartWoodPile";
		player removeMagazine "PartWoodPile";
		player removeMagazine "PartWoodPile";
		player removeMagazine "ItemNails";
		player removeMagazine "ItemNails";
		player removeMagazine "ItemNails";
	};
	if (_classname == "Fort_RazorWire_DZ") then {
		player removeMagazine "ItemWire";
		player removeMagazine "ItemWire";
		player removeMagazine "ItemWire";
		player removeMagazine "ItemTankTrap";
		player removeMagazine "ItemTankTrap";
	};
	if (_classname == "Fortified_nest_DZ") then {
		player removeMagazine "PartWoodPile";
		player removeMagazine "PartWoodPile";
		player removeMagazine "ItemNails";
		player removeMagazine "ItemNails";
		player removeMagazine "ItemSandbag";
		player removeMagazine "ItemSandbag";
	};
	if ((_classname == "WeaponCache_DZ") || (_classname == "Workbench_DZ")) then {
		player removeMagazine "PartWoodPile";
		player removeMagazine "PartWoodPile";
		player removeMagazine "PartWoodPile";
		player removeMagazine "PartWoodPile";
		player removeMagazine "ItemNails";
		player removeMagazine "ItemNails";
		player removeMagazine "ItemNails";
		player removeMagazine "ItemNails";
	};
	[player,"repair",0,false] call dayz_zombieSpeak;
	_id = [player,50,true,(getPosATL player)] spawn player_alertZombies;
	sleep 5;
	player allowDamage false;
	_object = createVehicle [_classname, _location, [], 0, "CAN_COLLIDE"];
	_object setDir _dir;
	_object setpos _location;
	player reveal _object;
	_location = getPosATL _object;
	
	_object setVariable ["characterID",dayz_characterID,true];

	cutText [format[localize "str_build_01",_classname], "PLAIN DOWN"];

	dayzPublishObj = [dayz_characterID,_object,[_dir,_location],_classname];
	publicVariable "dayzPublishObj";
	//["dayzPublishObj",[dayz_characterID,_object,[_dir,_location],_classname]] call callRpcProcedure;

	sleep 2;
	player allowDamage true;
} else {
	cutText ["You cannot build here !", "PLAIN DOWN"];
};
