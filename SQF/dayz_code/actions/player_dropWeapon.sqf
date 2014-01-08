private["_item"];
_item = 	_this;
_config =	configFile >> "CfgWeapons" >> _item;

_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

call gear_ui_init;

_consume = 	([] + getArray (_config >> "magazines")) select 0;

_meleeNum = ({_x == _consume} count magazines player);
for "_i" from 1 to _meleeNum do {
	player removeMagazine _consume;
};

player removeWeapon _item;
if (_item == "MeleeHatchet") then {_item = "ItemHatchet";};
if (_item == "MeleeCrowbar") then {_item = "ItemCrowbar";};
if (_item == "MeleeMachete") then {_item = "ItemMachete";};
if (_item == "MeleeBaseball_Bat") then {_item = "ItemBaseball_Bat";};
if (_item == "MeleeBaseball_Bat_Barbed") then {_item = "ItemBaseball_Bat_Barbed";};
if (_item == "MeleeBaseball_Bat_Nailed") then {_item = "ItemBaseball_Bat_Nailed";};
if (_item == "MeleeShovel") then {_item = "ItemShovel";};
_bag = createVehicle [format["WeaponHolder_%1",_item],getPosATL player,[], 0, "CAN_COLLIDE"];
_bag setdir (getDir player);
player reveal _bag;
