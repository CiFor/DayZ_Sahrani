/*
=====================================================================================================================
ShowClass - by Cyborg11
Version: 1.2
Date: 12.02.2010
Description: 
	- This script will show you the
		- name
		- type
		- magazines
		- weapons
		- position (coordinates + mapgridposition)
		- items (only infantry)
		- primary and secondary weapon and pistol (only infantry)
		- turrets (only vehicle)
		- cargopositions (only vehicle)
		- driver, gunner and commander position (only vehicle)
		- total amount of seats (only vehicle)
	   of the Target you are aiming at.	
	- Classname of unit will be copied to your clipboard
	- Weapons, magazines, classname, editorname of unit and position will now be displayed in arma2.rpt
	
	arma2.rpt example:
	---------------------------------------------------------------------------------------------------------------------------
	Unit: B 1-1-B:1
	Classname: USMC_SoldierS_Spotter
	Weapons: ["m16a4_acg","NVGoggles","ACE_Rangefinder_OD"]
	Magazines: ["30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", ... ,"ACE_Battery_Rangefinder"]
	Items: ["ItemMap","ItemCompass","ItemWatch","ItemRadio","ACE_Kestrel4500","ACE_SpottingScope"]
	Position: 034015
	Coordinates: [3477.57,3614.35,0.00143814]
	---------------------------------------------------------------------------------------------------------------------------

	If you want that the script updates faster then change the variable _sleep in line 61. 
	Default value is 1 second.
	
Changelog:
	v1.2:	- added pistol to infantry hint
		- infantry hint will display the pictures of the weapons
		- vehicle hint displays the picture of the vehicle now
		- position also displays the mapgridposition
		- getPos -> getPosATL
	
	v1.1:	- added turrets, cargo/gunner/driver/commander position for vehicles
		- weapons, magazines, unitclassname and position will now be displayed in arma2.rpt
		- new colored hint
		
	v1.0:	- first Release

Parameter:  nul = [] execVM "showclass.sqf";
=====================================================================================================================
*/

private	["_seats","_once","_pweap","_sweap","_picture","_sleep","_commander","_gunner","_driver","_icon",
		 "_target","_items","_dispname","_weaps","_mags","_type","_pos","_cweap","_cmag","_ammo","_turrets",
		 "_turretcount","_cargoseats","_turretname","_dispnameturret","_mainturret","_turretarray","_turrethint",
		 "_targetArray","_target","_exit","_weapPicArray","_weapPic","_weap","_weapPicHint","_weapArray",
		 "_pistol","_isPistol","_gridPos","_effcom"
		];

_sleep = 1;
_targetArray = [];
_pistol = "";

// Function for pistol data - by Spooner
isPistol =
{
	_unknownWeaponClass = _this select 0;
	
	_unknownConfig = configFile >> "CfgWeapons" >> _unknownWeaponClass;
	_pistolConfig = configFile >> "CfgWeapons" >> "PistolCore";
	
	_isPistol = false;
	while {isClass _unknownConfig} do
	{
	    if (_unknownConfig == _pistolConfig) exitWith
	    {
	        _isPistol = true;
	    };
	
	    _unknownConfig = inheritsFrom _unknownConfig;
	};
	
	_isPistol; // Return.
};

While {true} do {

	_target = cursorTarget;
	If (_target isKindOf "All") then {
	If (!(isNil ("_target"))) then {

		If (!(isNull _target)) then {_targetArray = _targetArray + [_target]};
			_items = items _target;
			_dispname = getText (configFile >> "cfgVehicles" >> typeof _target >> "displayName");	// different displayname for different languages
			_weaps = (weapons _target) - _items;	
			_mags = magazines _target;				
			_type = typeOf _target;
			_pos = getPosATL _target;
			_gridPos = mapGridPosition _pos;
			_cweap = currentWeapon _target;
			_pweap = primaryWeapon _target;
			If (_pweap == "") then {_pweap = "/"};
			_sweap = secondaryWeapon _target;
			If (_sweap == "") then {_sweap = "/"};
			_cmag = currentMagazine _target;
			_ammo = _target ammo _cweap;
			_weapPicArray = [];
			_weapArray = [];
			_weapPicHint = "";
			_pistol = "";
			_turretarray = [];
			_turrethint = "";
			_exit = false;
			
			If (!(_weaps select 0 == "") && _target isKindOf "Man") then {
				for [{_i = 0}, {_i < count _weaps}, {_i = _i + 1}] do {
					_weap = _weaps select _i;
					_weapPic = getText (configFile >> "cfgWeapons" >> _weap >> "picture");
					_weapPicArray = _weapPicArray + [_weapPic];
					If ([_weap] call isPistol) then {_pistol = _weap};
				};				
				_weapPicHint = 
					switch (count _weapPicArray) do {
						case 1 : {format ["<img size='1.75' image='%1'/><br/>", _weapPicArray select 0]};
						case 2 : {format ["<img size='1.75' image='%1'/> - <img size='1.75' image='%2'/><br/>", _weapPicArray select 0, _weapPicArray select 1]};
						case 3 : {format ["<img size='1.75' image='%1'/> - <img size='1.75' image='%2'/> - <img size='1.75' image ='%3'/><br/>", _weapPicArray select 0, _weapPicArray select 1, _weapPicArray select 2]};
						case 4 : {format ["<img size='1.75' image='%1'/> - <img size='1.75' image='%2'/> - <img size='1.75' image ='%3'/> - <img size='1.75' image='%4'/><br/>", _weapPicArray select 0, _weapPicArray select 1, _weapPicArray select 2, _weapPicArray select 3]};
						case 5 : {format ["<img size='1.75' image='%1'/> - <img size='1.75' image='%2'/> - <img size='1.75' image ='%3'/> - <img size='1.75' image='%4'/> - <img size='1.75' image='%5'/><br/>", _weapPicArray select 0, _weapPicArray select 1, _weapPicArray select 2, _weapPicArray select 3, _weapPicArray select 4]};
				};
			} else {
				_weapPicArray = [];
				_weapPicHint = "";
			};
			If (_pistol == "") then {_pistol = "/"};

			If (!(_target isKindOf "Building")) then {				// buildings doesn't have an icon or a picture
				_icon = getText (configFile >> "cfgVehicles" >> _type >> "icon");		// get icon from config
				_picture = getText (configFile >> "cfgVehicles" >> _type >> "picture");	// get picture from config
				} else {
				_icon = "";
				_picture = "";
			};

			If (_target isKindOf "LandVehicle" || _target isKindOf "Air" || _target isKindOf "Ship") then {	// check if the unit is a vehicle
			_mainturret = false;
				If (isClass (configFile >> "cfgVehicles" >> _type >> "Turrets")) then {				// check if the unit has turrets
					If ((count (configFile >> "cfgVehicles" >> _type >> "Turrets")) > 1) then {
						_turrets = configFile >> "cfgVehicles" >> _type >> "Turrets";
					} else {
						_turrets = configFile >> "cfgVehicles" >> _type >> "Turrets" >> "MainTurret" >> "Turrets";
						_mainturret = true;
					};
				} else {
					_turrets = [];
				};
				_turretcount = 
					If (_mainturret) then {
						(count _turrets) - 1;
					} else {
						count _turrets;
				};

				If (_turretcount >= 2) then {
					for [{_i = 0}, {_i < _turretcount}, {_i = _i + 1}] do {
						_turretarray = _turretarray + [getText (_turrets select _i >> "gunnerName")];
					};
				};
				_turrethint = switch (_turretcount) do {
					case -1 : {""};
					case 1 : {format ["<t color='#CCCC33'>Turret:</t> %1<br/><t color='#CCCC33'>Turretname:</t> %2<br/>", _turretcount, getText (_turrets select 1 >> "gunnerName")]};
					case 2 : {format ["<t color='#CCCC33'>Turrets:</t> %1<br/><t color='#CCCC33'>Turretname 1:</t> %2<br/><t color='#CCCC33'>Turretname 2:</t> %3<br/>",_turretcount, _turretarray select 0, _turretarray select 1]};
					case 3 : {format ["<t color='#CCCC33'>Turrets:</t> %1<br/><t color='#CCCC33'>Turretname 1:</t> %2<br/><t color='#CCCC33'>Turretname 2:</t> %3<br/><t color='#CCCC33'>Turretname 3:</t> %4<br/>",_turretcount, _turretarray select 0, _turretarray select 1, _turretarray select 2]};
					case 4 : {format ["<t color='#CCCC33'>Turrets:</t> %1<br/><t color='#CCCC33'>Turretname 1:</t> %2<br/><t color='#CCCC33'>Turretname 2:</t> %3<br/><t color='#CCCC33'>Turretname 3:</t> %4<br/><t color='#CCCC33'>Turretname 4:</t> %5<br/>",_turretcount, _turretarray select 0, _turretarray select 1, _turretarray select 2, _turretarray select 3]};
					case 5 : {format ["<t color='#CCCC33'>Turrets:</t> %1<br/><t color='#CCCC33'>Turretname 1:</t> %2<br/><t color='#CCCC33'>Turretname 2:</t> %3<br/><t color='#CCCC33'>Turretname 3:</t> %4<br/><t color='#CCCC33'>Turretname 4:</t> %5<br/><t color='#CCCC33'>Turretname 5:</t> %6<br/>",_turretcount, _turretarray select 0, _turretarray select 1, _turretarray select 2, _turretarray select 3, _turretarray select 4]};
				};
				
				_upperclass = configName (inheritsFrom (configFile >> "cfgVehicles" >> _type));
				_cargoseats = getNumber (configFile >> "cfgVehicles" >> _type >> "transportSoldier");
				_driver = getNumber (configFile >> "cfgVehicles" >> _upperclass >> "hasDriver");
				_gunner = _target emptyPositions "Gunner";
				
				If (_gunner == 0) then {							// check if position is not empty (empty = 1)
					_gunner = switch (isNull (gunner _target)) do {	// check if soldier is in gunner position
						case true : {0};
						case false: {1};
					};
				} else {									// if the script goes to the else code then the position is empty
					_gunner = switch (_mainturret) do {		// check if the vehicle have multiple turrets which doesn't use the 
						case false : {0};					// mainturret as base class
						case true : {1};
					};
				};
				
				_commander = _target emptyPositions "commander";
				_effcom = effectiveCommander _target;
				If (_commander == 0) then {						// check if position is not empty (empty = 1)
					If (isNull (commander _target)) then {		// check if soldier is in commander position
						_commander = 0;
					} else {
						_commander = 1;
					};
				};
				
				_seats = If (_turretcount == -1) then {
						_cargoseats + _driver + _gunner + _commander + (_turretcount + 1);
					} else {
						_cargoseats + _driver + _gunner + _commander + _turretcount;
				};
			};

If (_target isKindOf "LandVehicle" || _target isKindOf "Air" || _target isKindOf "Ship") then {
hintSilent parseText format ["
<t color='#330000'>Unit:</t> %1<br/>
<t color='#330000'>Name:</t> %9<br/>
<t color='#330000'>Type:</t> %4<br/>
<t color='#330000'>Position:</t> %14<br/>
<t color='#330000'>Coords:</t> %5<br/>
<t color='#330000'>Picture:</t><br/>
<img size='6' image='%10'/><br/><br/>
<t color='#990000'>Vehicle Informations:</t><br/>
<t color='#CCCC33'>Driver:</t> %8<br/>
<t color='#CCCC33'>Gunner:</t> %11<br/>
<t color='#CCCC33'>Commander:</t> %12<br/>
<t color='#CCCC33'>Cargoseats:</t> %7<br/>
%6
<t color='#CCCC33'>Total amount of seats:</t> %13<br/><br/>
<t color='#0000CC'>Weapons:</t><br/>%2<br/><br/>
<t color='#0000CC'>Magazines:</t><br/>%3<br/>
",
	_target,_weaps,_mags,_type,_pos,
	_turrethint,_cargoseats,_driver,_dispname,_picture,
	_gunner,_commander,_seats,_gridPos
];
} else {
hintSilent parseText format ["
<t color='#330000'>Unit:</t> %1 <img image='%7'/><br/>
<t color='#330000'>Name:</t> %6<br/>
<t color='#330000'>Type:</t> %4<br/>
<t color='#330000'>Position:</t> %13<br/>
<t color='#330000'>Coords:</t> %5<br/><br/>
<t color='#0000CC'>Weapons:</t><br/>%2<br/>
%11
<t color='#CCCC33'>Primary:</t> %9<br/>
<t color='#CCCC33'>Secondary:</t> %10<br/>
<t color='#CCCC33'>Pistol:</t> %12<br/><br/>
<t color='#0000CC'>Magazines:</t><br/>%3<br/><br/>
<t color='#0000CC'>Items:</t><br/>%8
",
	_target,_weaps,_mags,_type,_pos,
	_dispname,_icon,_items,toUpper _pweap,_sweap,
	_weapPicHint,_pistol,_gridPos
];
};

			CopyToClipboard _type;
			If (!(isNull _target)) then {
				
				// Prevent ArmA 2 from writing twice the same unit in arma2.rpt
				for [{_i = 0}, {_i < count _targetArray}, {_i = _i + 1}] do {
					If (_i >= 1) then {
						If ((_targetArray select _i) == (_targetArray select (_i - 1))) then {_targetArray = []; _exit = true};
					};
				};
				If (_exit) exitWith{};
				
				diag_log text format [""];
				diag_log text format ["Unit: %1", _target];
				diag_log text format ["Classname: %1", _type];
				diag_log text format ["Weapons: %1", _weaps];
				diag_log text format ["Magazines: %1", _mags];
				If (_target isKindOf "Man") then {diag_log text format ["Items: %1", _items]};
				diag_log text format ["Position: %1", _gridPos];
				diag_log text format ["Coordinates: %1", _pos];
				diag_log text format [""];
			};
		};
	};
	sleep _sleep;
};