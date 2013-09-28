/*
_item spawn player_wearClothes;
TODO: female
*/
private["_item","_isFemale","_itemNew","_item","_onLadder","_model","_hasclothesitem","_config","_text","_hasBPVest","_hasHelmet"];
_item = _this;
call gear_ui_init;
_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

_hasclothesitem = _this in magazines player;
_config = configFile >> "CfgMagazines";
_text = getText (_config >> _item >> "displayName");

if (!_hasclothesitem) exitWith {cutText [format[(localize "str_player_31"),_text,"wear"] , "PLAIN DOWN"]};

if (vehicle player != player) exitWith {cutText ["You may not change clothes while in a vehicle", "PLAIN DOWN"]};

_isFemale = (
				(typeOf player == "SurvivorW2_DZ")||
				(typeOf player == "BanditW1_DZ")||
				(typeOf player == "Sniper1W_DZ")||
				(typeOf player == "SniperBanditW_DZ")||
				(typeOf player == "BanditSkinW_DZ")||
				(typeOf player == "SniperLightBanditW_DZ")||
				(typeOf player == "SniperLightW_DZ")||
				(typeOf player == "SniperDW_DZ")||
				(typeOf player == "SniperBanditDW_DZ")
			);
if (_isFemale && (_item == "Skin_Camo1_DZ" || _item == "Skin_Soldier1_DZ" || _item == "Skin_Rocket_DZ") ) exitWith {cutText ["Currently Female Characters cannot change to this skin. This will change in a future update.", "PLAIN DOWN"]};

private["_itemNew","_myModel","_humanity","_isBandit","_isHero"];
_myModel = (typeOf player);
_humanity = player getVariable ["humanity",0];
_isBandit = _humanity < -2000;
_isHero = _humanity > 5000;
_itemNew = "Skin_" + _myModel;

if(_itemNew == "Skin_SurvivorW2_DZ" || _itemNew == "Skin_Bandit1_DZ" || _itemNew == "Skin_BanditW1_DZ") then { _itemNew = "Skin_Survivor2_DZ"; }; //Fix For Woman Skin
if(_itemNew == "Skin_SniperBanditW_DZ" || _itemNew == "Skin_Sniper1W_DZ" || _itemNew == "Skin_SniperBandit_DZ") then { _itemNew = "Skin_Sniper1_DZ"; };
if(_itemNew == "Skin_SniperLightBanditW_DZ" || _itemNew == "Skin_SniperLightW_DZ" || _itemNew == "Skin_SniperLightBandit_DZ") then { _itemNew = "Skin_SniperLight_DZ"; };
if(_itemNew == "Skin_SniperBanditDW_DZ" || _itemNew == "Skin_SniperDW_DZ" || _itemNew == "Skin_SniperBanditD_DZ") then { _itemNew = "Skin_SniperD_DZ"; };
if(_itemNew == "Skin_BanditSkinW_DZ") then { _itemNew = "Skin_BanditSkin_DZ"; };

/*
SniperD_DZ
SniperDW_DZ
SniperBanditD_DZ
SniperBanditDW_DZ
*/

switch (_item) do {
	case "Skin_Sniper1_DZ": {
		if (_isBandit && !_isFemale) then {
			_model = "SniperBandit_DZ";
		};
		if (_isBandit && _isFemale) then {
			_model = "SniperBanditW_DZ";
		};
		if (!_isBandit && !_isFemale) then {
			_model = "Sniper1_DZ";
		};
		if (!_isBandit && _isFemale) then {
			_model = "Sniper1W_DZ";
		};
	};
	case "Skin_SniperLight_DZ": {
		if (_isBandit && !_isFemale) then {
			_model = "SniperLightBandit_DZ";
		};
		if (_isBandit && _isFemale) then {
			_model = "SniperLightBanditW_DZ";
		};
		if (!_isBandit && !_isFemale) then {
			_model = "SniperLight_DZ";
		};
		if (!_isBandit && _isFemale) then {
			_model = "SniperLightW_DZ";
		};
	};
	case "Skin_SniperD_DZ": {
		if (_isBandit && !_isFemale) then {
			_model = "SniperBanditD_DZ";
		};
		if (_isBandit && _isFemale) then {
			_model = "SniperBanditDW_DZ";
		};
		if (!_isBandit && !_isFemale) then {
			_model = "SniperD_DZ";
		};
		if (!_isBandit && _isFemale) then {
			_model = "SniperDW_DZ";
		};
	};
	case "Skin_Camo1_DZ": {
		_model = "Camo1_DZ";
	};
	case "Skin_Soldier1_DZ": {
		_model = "Soldier1_DZ";
	};
	case "Skin_SMD_ATACS_DES": {
		_model = "SMD_ATACS_DES";
	};
	case "Skin_SMD_ATACS_URBAN": {
		_model = "SMD_ATACS_URBAN";
	};
	case "Skin_SMD_RACS_MP": {
		_model = "SMD_RACS_MP";
	};
	case "Skin_SMD_RACS_MP_Tan": {
		_model = "SMD_RACS_MP_Tan";
	};
	case "Skin_SMD_RACS_MP_Tan_Digi": {
		_model = "SMD_RACS_MP_Tan_Digi";
	};
	case "Skin_SMD_RACS_Soldier": {
		_model = "SMD_RACS_Soldier";
	};
	case "Skin_SMD_RACS_Soldier_Digi": {
		_model = "SMD_RACS_Soldier_Digi";
	};
	case "Skin_SMD_RACS_SWAT": {
		_model = "SMD_RACS_SWAT";
	};
	case "Skin_SMD_SPD_SWAT_BLACK": {
		_model = "SMD_SPD_SWAT_BLACK";
	};
	case "Skin_SMD_SPD_SWAT_BLACK_DIGI": {
		_model = "SMD_SPD_SWAT_BLACK_DIGI";
	};
	case "Skin_SMD_SPD_BLACK": {
		_model = "SMD_SPD_BLACK";
	};
	case "Skin_SMD_SPD_BLUE": {
		_model = "SMD_SPD_BLUE";
	};
	case "Skin_SMD_SPD_BLUE_DIGI": {
		_model = "SMD_SPD_BLUE_DIGI";
	};
	case "Skin_SMD_RACS_Sheriff": {
		_model = "SMD_RACS_Sheriff";
	};
	case "Skin_SMD_TIGER_CAMO": {
		_model = "SMD_TIGER_CAMO";
	};
	case "Skin_SMD_US_SpecOps": {
		_model = "SMD_US_SpecOps";
	};
	case "Skin_SMD_US_SpecOps_DIGI": {
		_model = "SMD_US_SpecOps_DIGI";
	};
	case "Skin_SMD_US_SpecOps_MP_DIGI": {
		_model = "SMD_US_SpecOps_MP_DIGI";
	};
	case "Skin_Survivor2_DZ": {
		_model = "Survivor2_DZ";
		if (_isBandit) then {
			_model = "Bandit1_DZ";
		};
		if (_isHero) then {
			_model = "Survivor3_DZ";
		};
		if (_isFemale && !_isBandit) then {
			_model = "SurvivorW2_DZ";
		};
		if (_isFemale && _isBandit) then {
			_model = "BanditW1_DZ";
		};
	};
	case "Skin_Rocket_DZ": {
		_model = "Rocket_DZ";
	};
	case "Skin_BanditSkin_DZ": {
		_model = "BanditSkin_DZ";
		if (_isFemale) then {
			_model = "BanditSkinW_DZ";
		};
	};
};

//All Models with visual Helmet
_hasHelmet = _model in
									[
										"Soldier1_DZ",
										"SMD_RACS_Soldier",
										"SMD_RACS_Soldier_Digi",
										"SMD_RACS_SWAT",
										"SMD_SPD_SWAT_BLACK",
										"SMD_SPD_SWAT_BLACK_DIGI",
										"SMD_SPD_BLUE",
										"SMD_SPD_BLUE_DIGI",
										"SMD_TIGER_CAMO",
										"SMD_US_SpecOps",
										"SMD_US_SpecOps_DIGI",
										"SMD_US_SpecOps_MP_DIGI"
									];

//All Models with visual (Bulletproof) Vest
_hasBPVest = _model in
									[
										"Soldier1_DZ",
										"SMD_RACS_Soldier",
										"SMD_RACS_Soldier_Digi",
										"SMD_RACS_SWAT",
										"SMD_SPD_SWAT_BLACK",
										"SMD_SPD_SWAT_BLACK_DIGI",
										"SMD_SPD_BLACK",
										"SMD_SPD_BLUE",
										"SMD_SPD_BLUE_DIGI",
										"SMD_TIGER_CAMO",
										"SMD_US_SpecOps",
										"SMD_US_SpecOps_DIGI",
										"SMD_US_SpecOps_MP_DIGI",
										"Camo1_DZ",
										"Rocket_DZ",
										"SMD_RACS_MP",
										"SMD_RACS_MP_Tan",
										"SMD_RACS_MP_Tan_Digi"
									];

if(_hasBPVest && _hasHelmet) then {
	cutText ["\n\nYour new Clothes lower your Head & Body-Damage by 30%", "PLAIN DOWN"];
};

if(_hasBPVest && !_hasHelmet) then {
	cutText ["\n\nYour new Clothes lower your Body-Damage by 30%", "PLAIN DOWN"];
};

if (_model != _myModel) then {
	player removeMagazine _item;
	player addMagazine _itemNew;
	[dayz_playerUID,dayz_characterID,_model] spawn player_humanityMorph;
};