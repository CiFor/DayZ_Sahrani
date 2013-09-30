private["_item","_config","_onLadder","_create","_isOk","_config2","_consume"];
_item = 	_this;
_config =	configFile >> "cfgWeapons" >> _item;

_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

_hastoolweapon = _this in weapons player;
_text = getText (_config >> "displayName");
if (!_hastoolweapon) exitWith {cutText [format[(localize "str_player_30"),_text] , "PLAIN DOWN"]};

call gear_ui_init;

//Add new item
_create = 	getArray (_config >> "ItemActions" >> "Toolbelt" >> "output") select 0;
_config2 = 	configFile >> "cfgWeapons" >> _create;

//Remove magazines if needed
if (_item in ["MeleeBaseball_Bat","MeleeBaseball_Bat_Barbed","MeleeBaseball_Bat_Nailed","MeleeCrowbar","MeleeHatchet","MeleeMachete","MeleeShovel"]) then {
	_magType = 	([] + getArray (configFile >> "cfgWeapons" >> _item >> "magazines")) select 0;
	_meleeNum = ({_x == _magType} count magazines player);
	for "_i" from 1 to _meleeNum do {
		player removeMagazine _magType;
	};
};

if (_item in ["MeleeBaseball_Bat","MeleeBaseball_Bat_Barbed","MeleeBaseball_Bat_Nailed","MeleeCrowbar","MeleeHatchet","MeleeMachete","MeleeShovel"]) then {
	switch (primaryWeapon player) do
	{
		case "MeleeBaseBall_Bat": { "MeleeBaseball_Bat" call player_addToolbelt };
		case "MeleeBaseball_Bat_Barbed": { "MeleeBaseball_Bat_Barbed" call player_addToolbelt };
		case "MeleeBaseball_Bat_Nailed": { "MeleeBaseball_Bat_Nailed" call player_addToolbelt };
		case "MeleeCrowbar": { "MeleeCrowbar" call player_addToolbelt };
		case "MeleeHatchet": { "MeleeHatchet" call player_addToolbelt };
		case "MeleeMachete": { "MeleeMachete" call player_addToolbelt };
		case "MeleeShovel": { "MeleeShovel" call player_addToolbelt };
	};
};

_isOk = [player,_config2] call BIS_fnc_invAdd;

if (_isOk) then {
	//Remove item
	player removeWeapon _item;
	
	//Add magazines if needed
	if (_create in ["MeleeBaseball_Bat","MeleeBaseball_Bat_Barbed","MeleeBaseball_Bat_Nailed","MeleeCrowbar","MeleeHatchet","MeleeMachete","MeleeShovel"]) then {
		if (_create == "MeleeBaseball_Bat") then {
				player addMagazine 'baseball_bat_swing';
		};
		if (_create == "MeleeBaseball_Bat_Barbed") then {
				player addMagazine 'baseball_bat_barbed_swing';
		};
		if (_create == "MeleeBaseball_Bat_Nailed") then {
				player addMagazine 'baseball_bat_nailed_swing';
		};
		if (_create == "MeleeCrowbar") then {
			player addMagazine 'crowbar_swing';
		};
		if (_create == "MeleeHatchet") then {
				player addMagazine 'hatchet_swing';
		};
		if (_create == "MeleeMachete") then {
				player addMagazine 'Machete_swing';
		};
		if (_create == "MeleeShovel") then {
				player addMagazine 'shovel_swing';
		};
		if (_type == "cfgWeapons") then {
			_muzzles = getArray(configFile >> "cfgWeapons" >> _create >> "muzzles");
			_wtype = ((weapons player) select 0);
			if (count _muzzles > 1) then {
				player selectWeapon (_muzzles select 0);
			} else {
				player selectWeapon _wtype;
			};
		};
	};		
} else {
	cutText [localize "STR_DAYZ_CODE_2", "PLAIN DOWN"];
	
	//Add magazines back
	if (_item in ["MeleeBaseball_Bat","MeleeBaseball_Bat_Barbed","MeleeBaseball_Bat_Nailed","MeleeCrowbar","MeleeHatchet","MeleeMachete","MeleeShovel"]) then {
		if (_item == "MeleeBaseball_Bat") then {
			player addMagazine 'baseball_bat_swing';
		};
		if (_item == "MeleeBaseball_Bat_Barbed") then {
			player addMagazine 'baseball_bat_barbed_swing';
		};
		if (_item == "MeleeBaseball_Bat_Nailed") then {
			player addMagazine 'baseball_bat_nailed_swing';
		};
		if (_item == "MeleeCrowbar") then {
			player addMagazine 'crowbar_swing';
		};
		if (_item == "MeleeHatchet") then {
				player addMagazine 'hatchet_swing';
		};
		if (_item == "MeleeMachete") then {
				player addMagazine 'Machete_swing';
		};
		if (_item == "MeleeShovel") then {
			player addMagazine 'shovel_swing';
	};	
};
