private["_botActive","_int","_newModel","_doLoop","_wait","_hiveVer","_isHiveOk","_playerID","_playerObj","_randomSpot","_publishTo","_primary","_secondary","_key","_result","_charID","_playerObj","_playerName","_finished","_spawnPos","_spawnDir","_items","_counter","_magazines","_weapons","_group","_backpack","_worldspace","_direction","_newUnit","_score","_position","_isNew","_inventory","_backpack","_medical","_survival","_stats","_state"];
//Set Variables

diag_log ("STARTING LOGIN: " + str(_this));

_playerID = _this select 0;
_playerObj = _this select 1;
_playerName = name _playerObj;
_worldspace = [];

if (_playerName == '__SERVER__' || _playerID == '' || local player) exitWith {};

if (count _this > 2) then {
	dayz_players = dayz_players - [_this select 2];
};

//Variables
_inventory =	[];
_backpack = 	[];
_items = 		[];
_magazines = 	[];
_weapons = 		[];
_medicalStats =	[];
_survival =		[0,0,0];
_tent =			[];
_state = 		[];
_direction =	0;
_model =		"";
_newUnit =		objNull;
_botActive = false;

if (_playerID == "") then {
	_playerID = getPlayerUID _playerObj;
};

if ((_playerID == "") or (isNil "_playerID")) exitWith {
	diag_log ("LOGIN FAILED: Player [" + _playerName + "] has no login ID");
};

//??? endLoadingScreen;
diag_log ("LOGIN ATTEMPT: " + str(_playerID) + " " + _playerName);

//Do Connection Attempt
_doLoop = 0;
while {_doLoop < 5} do {
	_key = format["CHILD:101:%1:%2:%3:",_playerID,dayZ_instance,_playerName];
	_primary = _key call server_hiveReadWrite;
	if (count _primary > 0) then {
		if ((_primary select 0) != "ERROR") then {
			_doLoop = 9;
		};
	};
	_doLoop = _doLoop + 1;
};

if (isNull _playerObj or !isPlayer _playerObj) exitWith {
	diag_log ("LOGIN RESULT: Exiting, player object null: " + str(_playerObj));
};

if ((_primary select 0) == "ERROR") exitWith {	
    diag_log format ["LOGIN RESULT: Exiting, failed to load _primary: %1 for player: %2 ",_primary,_playerID];
};

//Process request
_newPlayer = 	_primary select 1;
_isNew = 		count _primary < 6; //_result select 1;
_charID = 		_primary select 2;
_randomSpot = false;

//diag_log ("LOGIN RESULT: " + str(_primary));

/* PROCESS */
_hiveVer = 0;

if (!_isNew) then {
	//RETURNING CHARACTER		
	_inventory = 	_primary select 4;
	_backpack = 	_primary select 5;
	_survival =		_primary select 6;
	_model =		_primary select 7;
	_hiveVer =		_primary select 8;
	
	if (!(_model in [
				"BanditSkin_DZ",
				"BanditSkinW_DZ",
				"SurvivorW2_DZ",
				"Survivor2_DZ",
				"Soldier1_DZ",
				"Camo1_DZ",
				"BanditW1_DZ",
				"Bandit1_DZ",
				"Rocket_DZ",
				"Sniper1_DZ",
				"Sniper1W_DZ",
				"SniperBandit_DZ",
				"SniperBanditW_DZ",
				"SniperBanditD_DZ",
				"SniperBanditDW_DZ",
				"SniperD_DZ",
				"SniperDW_DZ",
				"SniperLightBandit_DZ",
				"SniperLightBanditW_DZ",
				"SniperLight_DZ",
				"SniperLightW_DZ",
				"SMD_ATACS_DES",
				"SMD_ATACS_URBAN",
				"SMD_RACS_MP",
				"SMD_RACS_MP_Tan",
				"SMD_RACS_MP_Tan_Digi",
				"SMD_RACS_Soldier",
				"SMD_RACS_Soldier_Digi",
				"SMD_RACS_SWAT",
				"SMD_SPD_SWAT_BLACK",
				"SMD_SPD_SWAT_BLACK_DIGI",
				"SMD_SPD_BLUE",
				"SMD_SPD_BLUE_DIGI",
				"SMD_RACS_Sheriff",
				"SMD_TIGER_CAMO",
				"SMD_US_SpecOps",
				"SMD_US_SpecOps_DIGI",
				"SMD_US_SpecOps_MP_DIGI"
				])) then {
		_model = "Survivor2_DZ";
	};
	
} else {
	_model =		_primary select 3;
	_hiveVer =		_primary select 4;
	if (isNil "_model") then {
		_model = "Survivor2_DZ";
	} else {
		if (_model == "") then {
			_model = "Survivor2_DZ";
		};
	};

	//Record initial inventory
	_config = (configFile >> "CfgSurvival" >> "Inventory" >> "Default");
	_mags = getArray (_config >> "magazines");
	_wpns = getArray (_config >> "weapons");
	_bcpk = getText (_config >> "backpack");
	_randomSpot = true;
	
	//Wait for HIVE to be free
	_key = format["CHILD:203:%1:%2:%3:",_charID,[_wpns,_mags],[_bcpk,[],[]]];
	_key call server_hiveWrite;
	
};
diag_log ("LOGIN LOADED: " + str(_playerObj) + " Type: " + (typeOf _playerObj));

_isHiveOk = false;	//EDITED
if (_hiveVer >= dayz_hiveVersionNo) then {
	_isHiveOk = true;
};
//diag_log ("SERVER RESULT: " + str("X") + " " + str(dayz_hiveVersionNo));

//Server publishes variable to clients and WAITS
//_playerObj setVariable ["publish",[_charID,_inventory,_backpack,_survival,_isNew,dayz_versionNo,_model,_isHiveOk,_newPlayer],true];

dayzPlayerLogin = [_charID,_inventory,_backpack,_survival,_isNew,dayz_versionNo,_model,_isHiveOk,_newPlayer];
(owner _playerObj) publicVariableClient "dayzPlayerLogin";
