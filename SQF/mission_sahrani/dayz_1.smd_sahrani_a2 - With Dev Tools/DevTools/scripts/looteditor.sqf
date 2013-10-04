
/*
        Created exclusively for ArmA2:OA - DayZMod.
        Please request permission to use/alter/distribute from project leader (R4Z0R49) AND the author (facoptere@gmail.com)
*/

/*
Howto use:

1/ for other map than Chernarus, edit the values plr_initpos, plr_initdir, bld_initpos, bld_sparepos  below.
2/ if you to add some building to edit, add them to bld_list array.
3/ Use dev mission files, open monkey monitor menu, select lootpos editor. It"s an one way trip. To quit the editor, disconnect.
4/ Editor start, you will see the first building in front of you. Each lootpos contains a "glass" vehicle part.
5/ use the keys shown on the hint window in the right.
6/ if a lootpos has been modified, a special log line will be printed in arma2oa.RPT clienside log. 
   format:  [<date>] lootpos   <building type>  lootPos[] = {{x,y,z}...};  
7/ Once you edited all buildings, extract lootpos lines and copy/paste them 
   into dayz_code/Configs/CfgLoot/CfgBuildingPos.hpp     
   Don't forget to change maxRoaming (= max number of Zed) and lootChance
   if Zeds are prone to commit suicide while spawing, because the lootpos is high, or in the roofslope, or has no AI path, you will have to set maxRoaming=0
*/
hintkbd = 'DevTools\scripts\looteditor.paa';
plr_initpos = [2540, 2520, 0]; // where the player (editor) should be
plr_initdir = 7; // direction so that he is facing the building
bld_initpos = [2550, 2565,0]; // where the edited building should be
bld_sparepos = [2559, 2668,0]; // another flat horizontal pos, further than building (must not collide)
bld_list = [ 
//                           Quantity | Isolated
//                      in Chernarus: | Index:
"Land_telek1",                  // 2	100
"Land_smd_ammostore2_open",
"Land_smd_army_hut_int",
"Land_smd_army_hut_storrage",
"Land_smd_army_hut2",
"Land_smd_army_hut2_int",
"Land_smd_army_hut3_long",
"Land_smd_army_hut3_long_int",
"Land_smd_benzina_schnell_open",
"Land_smd_bordel_zidka",
"Land_smd_bouda_plech_open",
"Land_smd_bozi_muka",
"Land_smd_budova3",
"Land_smd_budova4_in",
"Land_smd_cihlovej_dum_mini",
"Land_smd_dum_istan2",
"Land_smd_dum_istan2_01",
"Land_smd_Dum_istan2_01_open",
"Land_smd_dum_istan2_02",
"Land_smd_dum_istan2_03",
"Land_smd_dum_istan2_03a",
"Land_smd_dum_istan2_04a",
"Land_smd_dum_istan2b",
"Land_smd_dum_istan3",
"Land_smd_dum_istan3_hromada",
"Land_smd_dum_istan4",
"Land_smd_dum_istan4_big",
"Land_smd_dum_istan4_big_inverse",
"Land_smd_dum_istan4_chodnik",
"Land_smd_dum_istan4_detaily1",
"Land_smd_dum_istan4_inverse",
"Land_smd_dum_mesto_in_open",
"Land_smd_dum_mesto3_istan",
"Land_smd_dum_olez_istan1_open",
"Land_smd_dum_olez_istan1_open2",
"Land_smd_dum_olez_istan2_open",
"Land_smd_dum_olez_istan2_open2",
"Land_smd_dum_olezlina_open",
"Land_smd_dum02",
"Land_smd_Dumruina",
"Land_smd_fuelstation_army",
"Land_smd_garaz_bez_tanku",
"Land_smd_garaz_mala_open",
"Land_smd_garaz_s_tankem",
"Land_smd_hlaska",
"Land_smd_hospoda_mesto",
"Land_smd_hotel",
"Land_smd_hotel_riviera1",
"Land_smd_hotel_riviera2",
"Land_smd_house_y_open",
"Land_smd_hut01",
"Land_smd_hut02",
"Land_smd_hut03",
"Land_smd_hut04",
"Land_smd_kap02",
"Land_smd_kasarna",
"Land_smd_kasarna_brana",
"Land_smd_kasarna_prujezd",
"Land_smd_kasarna_rohova",
"Land_smd_kostel_mexico",
"Land_smd_kostel_trosky",
"Land_smd_kostel2",
"Land_smd_kostel2_open",
"Land_smd_kostelik",
"Land_smd_letistni_hala",
"Land_smd_majak_v_celku",
"Land_smd_Molo_beton",
"Land_smd_Molo_krychle",
"Land_smd_molo_krychle2",
"Land_smd_nabrezi",
"Land_smd_nabrezi_najezd",
"Land_smd_orlhot",
"Land_smd_Panelak",
"Land_smd_podesta_1_cornl",
"Land_smd_podesta_1_cornp",
"Land_smd_podesta_1_cube",
"Land_smd_podesta_1_cube_long",
"Land_smd_podesta_1_mid",
"Land_smd_podesta_1_mid_cornl",
"Land_smd_podesta_1_mid_cornp",
"Land_smd_podesta_1_stairs",
"Land_smd_podesta_1_stairs2",
"Land_smd_podesta_1_stairs3",
"Land_smd_podesta_1_stairs4",
"Land_smd_podesta_5",
"Land_smd_podesta_10",
"Land_smd_podesta_s5",
"Land_smd_podesta_s10",
"Land_smd_posed",
"Land_smd_sara_stodola2",
"Land_smd_sara_zluty_statek_in",
"Land_smd_shop1",
"Land_smd_shop1_double",
"Land_smd_shop2",
"Land_smd_shop2_double",
"Land_smd_shop3",
"Land_smd_shop3_double",
"Land_smd_shop4",
"Land_smd_shop4_double",
"Land_smd_shop5",
"Land_smd_shop5_double",
"Land_smd_ss_hangard",
"Land_smd_strazni_vez",
"Land_smd_watertower1",
"Land_smd_zastavka_jih",
"Land_smd_zastavka_sever",
"Land_smd_zvonice",
//"Land_A_Castle_Wall1_Corner_2", // 2	91
"Land_ruin_corner_1",           // 4	88
"Land_ruin_walldoor",           // 6	78
"Land_ruin_01",                 // 4	73
"Land_A_Castle_Gate",           // 3	71
//"Land_A_Castle_Wall2_Corner_2", // 3	69
"Land_A_Castle_Stairs_A",       // 3	68
//"Land_A_Castle_Wall2_Corner",   // 3	67
//"Land_A_Castle_Wall1_End",      // 10	67
//"Land_A_Castle_Wall1_20_Turn",  // 4	66
//"Land_A_Castle_Wall1_End_2",    // 7	65
"Land_A_Castle_Bastion",        // 9	65
//"Land_A_Castle_Wall1_20",       // 6	65
"Land_A_Castle_Wall2_End",      // 5	64
"Land_A_Castle_Wall2_End_2",    // 3	63
"Land_A_Castle_WallS_End",      // 6	63
"Land_A_Castle_Wall2_30",       // 5	61
"Land_A_Castle_Donjon",         // 3	58
"Land_A_Castle_WallS_10",       // 7	58
"Land_Mil_Barracks",            // 8	58
"Land_A_Castle_Bergfrit",       // 3	55
"Land_Vysilac_FM",              // 5	51
"Land_Mil_Barracks_i",          // 2	49
"Land_NAV_Lighthouse",          // 4	48
"Land_sara_domek_zluty",        // 3	48
"Land_Mil_Barracks_L",          // 5	48
"Land_Nav_Boathouse_PierL",     // 1	47
//"Land_A_Castle_Wall1_Corner",   // 1	47
"Land_Church_05R", // (ruin)       1	44
"Land_sara_hasic_zbroj",        // 2	44
"Land_Farm_WTower",             // 4	43
"Land_Barn_W_02",               // 3	41
"Land_Church_02",               // 4	40
"Land_Barn_Metal",              // 4	39
"Land_Nav_Boathouse",           // 2	39
"Land_Dam_Conc_20",             // 7	37
"Land_SS_hangar",               // 12	34
"Land_Dam_ConcP_20",            // 3	33
"Land_stodola_open",            // 20	30
"Land_Mil_ControlTower",        // 3	30
"Land_stodola_old_open",        // 21	30
"Land_Ind_Quarry",              // 1	29
"Land_Church_01",               // 6	28
"Land_Rail_House_01",           // 9	28
"Land_HouseV2_05",              // 19	27
"Land_HouseV_3I1",              // 103	27
"Land_HouseV_3I3",              // 116	27
"Land_A_TVTower_Base",          // 1	27
"Land_Farm_Cowshed_c",          // 23	26
"Land_houseV_2T2",              // 61	26
"Land_HouseV_3I2",              // 101	26
"Land_Misc_WaterStation",       // 47	26
"Land_sloup_vn",                // 15	26
"Land_A_FuelStation_Build",     // 15	26
"Land_sloup_vn_drat",           // 115	26
"Land_houseV_2T1",              // 93	25
"Land_HouseV_2L",               // 80	25
"Land_Farm_Cowshed_b",          // 37	25
"Land_HouseV2_04_interier",     // 19	25
"Land_HouseV_1L2",              // 101	25
"Land_Shed_W4",                 // 172	25
"Land_Farm_Cowshed_a",          // 23	25
"Land_Mil_House",               // 5	24
"Land_HouseV_1L1",              // 97	24
"Land_HouseV_1I4",              // 114	23
"Land_HouseV_3I4",              // 103	23
"Land_Shed_W02",                // 160	23
"Land_HouseV_1I2",              // 104	23
"Land_HouseV_1T",               // 90	22
"Land_HouseV_1I1",              // 103	22
"Land_HouseV_1I3",              // 117	22
"Land_hut06",                   // 47	22
"Land_Wall_Gate_Kolchoz",       // 8	22
"Land_HouseV_2I",               // 83	21
"Land_Barn_W_01",               // 31	21
"Land_Ind_Timbers",             // 149	21
"Land_HouseBlock_C2",           // 3	20
"Land_Ind_Workshop01_01",       // 61	20
"Land_plot_rust_vrata",         // 1	20
"Land_sloup_vn_dratZ",          // 38	20
"Land_Ind_Shed_02_end",         // 92	19
"Land_Ind_Workshop01_02",       // 42	19
"Land_HouseV2_02_Interier",     // 18	19
"Land_HouseV2_03B",             // 11	18
"Land_nav_pier_m_2",            // 5	18
"land_nav_pier_m_end",          // 4	18
"Land_HouseV2_01B",             // 20	18
"Land_vez",                     // 2	18
"Land_A_GeneralStore_01a",      // 8	18
"Land_Ind_IlluminantTower",     // 8	18
"Land_Misc_Cargo2D",            // 15	18
"Land_A_FuelStation_Shed",      // 7	18
"Land_Ind_Workshop01_04",       // 37	18
"Land_Church_02a",              // 3	17
"Land_Church_03",               // 5	17
"Land_repair_center",           // 7	16
"Land_rails_bridge_40",         // 4	16
"Land_Hlidac_budka",            // 35	16
"Land_Ind_Workshop01_03",       // 31	16
"Land_sloup_vn_drat_d",         // 5	16
"Land_Misc_Cargo1C",            // 23	16
"Land_Ind_Garage01",            // 28	16
"Land_Ind_SawMill",             // 5	15
"Land_Ind_Workshop01_L",        // 33	15
"Land_Ind_Shed_02_main",        // 283	15
"Land_Tovarna2",                // 4	15
"Land_HouseBlock_A1_1",         // 11	15
"Land_IndPipe2_SmallBuild1_L",  // 1	14
"land_nav_pier_c_big",          // 2	14
"Land_Nasypka",                 // 31	14
"Land_Ind_SawMillPen",          // 5	14
"Land_trafostanica_velka",      // 16	14
"Land_Misc_Cargo1D",            // 24	14
"land_nav_pier_m_1",            // 6	14
"Land_HouseV2_03",              // 8	13
"land_nav_pier_M_fuel",         // 3	13
"Land_HouseV2_01A",             // 26	13
"Land_Misc_PowerStation",       // 11	13
"Land_Shed_Ind02",              // 13	13
"Land_Ind_Shed_01_end",         // 266	13
"Land_a_stationhouse",          // 4	13
"Land_Misc_Cargo2B",            // 19	13
"Land_Mil_Guardhouse",          // 18	12
"Land_Hangar_2",                // 19	12
"Land_Misc_Cargo2E",            // 28	12
"Land_A_Office01",              // 3	12
"Land_HouseBlock_C4",           // 20	12
"Land_Ind_TankBig",             // 21	12
"Land_HouseBlock_A3",           // 11	12
"land_nav_pier_c2_end",         // 5	12
"Land_Misc_Cargo2C",            // 33	12
"Land_HouseBlock_B1",           // 5	11
"Land_Misc_Cargo1Bo",           // 2	11
"Land_HouseBlock_C3",           // 3	11
"Land_Misc_Cargo1B",            // 34	11
"Land_A_Crane_02a",             // 6	11
"land_nav_pier_c_90",           // 11	11
"Land_IndPipe2_Small_9",        // 142	11
"Land_Misc_Scaffolding",        // 4	11
"Land_A_BuildingWIP",           // 2	11
"Land_rail_station_big",        // 3	11
"Land_HouseBlock_A2",           // 3	11
"Land_Panelak2",                // 5	10
"Land_Wall_Gate_Ind2Rail_R",    // 2	10
"Land_HouseBlock_A1",           // 3	10
"Land_HouseBlock_D2",           // 2	10
"Land_HouseBlock_B2",           // 7	10
"Land_komin",                   // 4	10
"Land_HouseBlock_B3",           // 18	10
"Land_ind_silomale",            // 4	10
"Land_Ind_MalyKomin",           // 8	10
"Land_Ind_SiloVelke_02",        // 2	10
"Land_IndPipe2_bigBuild1_R",    // 3	10
"Land_Misc_Cargo1Ao",           // 2	10
"Land_Vez_Silo",                // 2	10
"Land_Panelak",                 // 6	10
"Land_IndPipe2_T_L",            // 4	10
"Land_IndPipe2_bigL_R",         // 14	10
"Land_A_statue01",              // 3	10
"Land_IndPipe2_bigBuild2_L",    // 2	10
"Land_Ind_Pec_03a",             // 5	9
"Land_IndPipe2_SmallBuild2_R",  // 3	9
"Land_IndPipe2_big_18ladder",   // 8	9
"Land_IndPipe2_big_ground1",    // 8	9
"Land_Ind_Vysypka",             // 2	9
"Land_IndPipe2_T_R",            // 8	9
"Land_HouseBlock_B4",           // 10	9
"Land_HouseBlock_C5",           // 7	9
"Land_IndPipe2_big_18",         // 32	9
"Land_Ind_Expedice_3",          // 6	9
"Land_Ind_Stack_Big",           // 2	9
"Land_IndPipe2_bigL_L",         // 9	9
"Land_trafostanica_velka_draty",// 9	9
"Land_A_Office02",              // 3	9
"Land_A_GeneralStore_01",       // 2	9
"Land_Ind_Expedice_2",          // 5	9
"Land_A_CraneCon",              // 1	9
"Land_IndPipe2_big_9",          // 28	9
"Land_HouseBlock_B5",           // 19	9
"Land_Ind_Pec_03b",             // 7	8
"Land_HouseBlock_B6",           // 11	8
"Land_A_Pub_01",                // 8	8
"Land_Shed_wooden",             // 4	8
"Land_Ind_Expedice_1",          // 5	8
"Land_Wall_Gate_Ind2Rail_L",    // 1	7
"Land_Ind_Pec_02",              // 5	7
"Land_HouseBlock_A2_1",         // 7	7
"Land_HouseBlock_A1_2",         // 4	7
"Land_A_Hospital",              // 4	7
"Land_IndPipe2_SmallBuild1_R",  // 1	7
"Land_HouseBlock_D1",           // 1	6
"Land_Ind_Mlyn_04",             // 1	6
"Land_Ind_Mlyn_03",             // 1	6
"Land_Ind_Mlyn_01",             // 1	6
"Land_Vez_Pec",                 // 1	6
"Land_HouseB_Tenement",         // 1	6
"Land_Ind_Mlyn_02",             // 1	6
"Land_Ind_SiloVelke_01",        // 1	6
"Land_D_VSilo_Pec",             // 1	6
"Land_Ind_Pec_01",              // 1	6
"Land_A_statue02",              // 2	6
"Land_NAV_Lighthouse2",         // 1	6
"Camp",
"CampEast_EP1",
"CampEast",
"Land_A_Crane_02b",
"Land_A_MunicipalOffice",
"Land_BoatSmall_2b",
"Land_GuardShed",
"Land_HouseBlock_C1",
"Land_KBud",
"Land_kulna",
"Land_Misc_Cargo1Eo_EP1",
"Land_Misc_deerstand",
"Land_Misc_GContainer_Big",
"Land_psi_bouda",
"Land_Shed_M02",
"Land_Shed_W01",
"Land_Shed_W03",
"Land_tent_east",
"Land_wagon_box",
"MASH_EP1",
"MASH",
"RU_WarfareBFieldhHospital",
"RU_WarfareBBarracks",
"USMC_WarfareBFieldhHospital",
"Grave",
"GraveCross1",
"GraveCross2",
"GraveCrossHelmet",
"Land_Toilet",
"FarmRoaming",
"HouseRoaming",
"Land_Misc_Rubble_EP1",
"Fort_Barricade",
"Land_Misc_Garb_Heap_EP1",
"Rubbish5",
"Misc_TyreHeap",
"datsun01Wreck",
"SKODAWreck",
"UralWreck",
"LADAWreck",
"Mi8Wreck_DZ",
"UH1Wreck_DZ",
"UH60Wreck_DZ"
];

_init = {
	// 65 lootable buildings
	_bld = bld_list;

	cutText [ format ["    P L E A S E   W A I T ...\nSpawning %1 buildings in limbo", count _bld], "PLAIN DOWN"];
	curhouse = 0;
	myhouses = [];
	{
		_loot=[] + getArray(configFile >> "CfgBuildingLoot" >> _x >> "lootPos");
		//if (count _loot > 0) then {
			_o = _x createVehicleLocal [0,0,100];sleep 0.01;
			_o setVectorDirAndUp [[0,0,1],[0,0,1]];
			myhouses set [count myhouses, _o ];
			_o setVariable [ "loot", _loot ];
		//};
	} forEach _bld;
	diag_log(format["init done %1", count myhouses]);
};

lted_settle = {
	private ["_o", "_a", "_p", "_orig"];
	_o = myhouses select curhouse;
	_orig = +(bld_initpos);
	_orig set [2, 0.01];
	if (typeOf _o == "Land_A_Castle_Bergfrit") then { 
		_orig set [2, -10];
	};
	if (typeOf _o == "Land_A_Crane_02b") then { 
		_orig set [2, -10.4];
	};
	if (typeOf _o == "Land_A_Castle_Donjon") then { 
		_orig set [2, -21.5];
	};
	if (typeOf _o == "Land_Dam_Conc_20") then { 
		_orig set [2, -17];
	};
	if (typeOf _o == "Land_Dam_ConcP_20") then { 
		_orig set [2, -17];
	};
	
	
	
	_o setPos _orig;
//	if (typeOf _o == "Land_HouseB_Tenement") then { _o setPos [4194, 10864, -39.5]; };
//	if (typeOf _o == "Land_A_Hospital") then { _o setPos [4194, 10864, -10.5]; };
	
	_a = [];
	_o setVariable [ "edited", false ];
	{
		_dot = if (count _x > 3) then { (_x select 3) createVehicleLocal [0,0,0] } else { (types select curType) createVehicleLocal [0,0,0] };
		_dot setPos bld_initpos;
		if (count _x > 4) then { _dot setDir ((getDir _o)+(_x select 4)); };
		//diag_log(format["lted_settle %1 %2 %3", getDir _o, _x select 4, getDir _dot]);
		_p = +(_x);
		_p resize 3;
		_dot setPosATL (_o modelToWorld _p);
		_p = getPosATL _dot;
		if (_p select 2 < 0.01) then {
			if (abs((_p select 2) - 0.01) > 0.01) then { _o setVariable [ "edited", true ]; };
			_p set [2, 0.01];
			_dot setPosATL _p;
		};
		_a set [count _a, _dot];
	} forEach (_o getVariable ["loot", []]);
	_o setVariable [ "dots", _a];
	diag_log("lted_settle done");
};

lted_dismantle = {
	_rndxyz = {
		[round((_this select 0)*100)/100,round((_this select 1)*100)/100,round((_this select 2)*100)/100];
	};
	private ["_o", "_a", "_onlyloot"];
	_o = myhouses select curhouse;
	_a = [];
	_b = [];
	{
		_pos = _o worldToModel (getPosATL _x);
		if (_pos distance [0,0,0] < (sizeOf(typeOf(_o)))) then {
			_pos = _pos call _rndxyz;
			if ((typeOf _x) IN ["Sign_sphere25cm_EP1","WeaponHolder_PartGlass"] ) then {
				_b set [count _b, +(_pos)];
			};
			_pos set [ count _pos, typeOf _x ];
			//diag_log(format["dismantle %1 %2", getDir _x, getDir _o]);
			_pos set [ count _pos, (round((getDir _x)-(getDir _o)+720)%360)];
			_a set [count _a, _pos];
		}
		else { diag_log(format["Err:%1 %2/%3", _x, _pos distance [0,0,0],(sizeOf(typeOf(_o)))]);};
		deleteVehicle _x;
	} forEach (_o getVariable ["dots", []]);
	if (_o getVariable ["edited", false]) then {
		_tmp = toArray str _b;
		{
			if (_x == 91) then { _tmp set [_forEachIndex, 123 ]; }
			else { if (_x == 93) then { _tmp set [_forEachIndex, 125 ]; }; };
		} forEach _tmp;
		_b = toString _tmp;
		diag_log(format["%1 lootpos       %2   lootPos[] = %3;  " , date, typeOf _o, _b]);
		diag_log(format["%1 antiwallhack  [""%2"", [], %3]  " , date, typeOf _o, _a]);
		_o setVariable [ "loot", _a ];
		cutText [ format ["%1 saved in arma2oa.RPT log !", typeOf _o], "PLAIN DOWN"];
	};
	_o setPosATL [0,0,0];
	diag_log("dismantle done");
};

_myfunc = {
private ["_h","_o","_p", "_search", "_ret"];
_search = {
	private ["_o"];
	_o = cursorTarget;
	if ((!isNull _o) AND {((typeOf _o) IN types)}) exitWith {_o};
	_o = (nearestObjects [getPosATL player, types, 8]);
	if (count _o == 0) exitWith {objNull};
	_o = _o select 0;
	if (isNull _o) exitWith {_o};
	_p = [player,_o] call BIS_fnc_relativeDirTo;
	if (_p >180) then { _p = _p -360;};
	if ((player distance _o < 40) AND {(abs(_p) <40)}) exitWith{_o};
	objNull
};
_delete = {
	private ["_l"];
	_l = (myhouses select curhouse) getVariable ["dots", []];
	_l = _l - [_this];
	(myhouses select curhouse) setVariable ["dots", _l];
};
_insert = {
	private ["_l"];
	_l = (myhouses select curhouse) getVariable ["dots", []];
	_l set [count _l, _o ];
	(myhouses select curhouse) setVariable ["dots", _l];
};
_ret = false;
_h = "LOOT EDITOR<br/><t size='0.2' color='#00000001'>.<br/></t><t align='left' font='LucidaConsoleB' size='0.7'>";
if (isNil "myhouses") exitWith {_ret};
_o = (myhouses select curhouse);
if (!isNull _o) then {
	_h = format["%1<t color='#6080FF'>Building </t>%2<br/><t color='#6080FF'>NbLoots </t>%3<br/>",
		_h,
		typeOf _o, 
		count (_o getVariable ["dots",[]])
		//,round((getDir player)-(getDir _o)+720)%360
	];
};
// _o = cursorTarget;
// if (_o != objNull) then {
// 	_h = format["%1<br/>Pointing:%2",	_h, typeOf _o];
// };
_o = call _search;
switch (_this select 1) do {
	case 73: { // up
		if (isNull _o) exitWith {_ret};
		_p = getPosASL _o;
		_p set [ 2, (_p select 2 )+mystep];
		_o setPosASL _p;
		_o setVelocity [0,0,0];
		(myhouses select curhouse) setVariable [ "edited", true ];
//		_h = format["%1<br/>%2<br/>%3",_h, "UP",_o];
		_ret = true;
	};
	case 81: { // down
		if (isNull _o) exitWith {_ret};
		_p = getPosATL _o;
		_p set [ 2, (_p select 2 )-mystep];
		_o setPosATL _p;
		_o setVelocity [0,0,0];
		(myhouses select curhouse) setVariable [ "edited", true ];
//		_h = format["%1<br/>%2<br/>%3",_h, "DOWN",_o];
		_ret = true;
	};
	case 72: { // forward
		if (isNull _o) exitWith {_ret};
		_p = player worldToModel (getPosATL _o);
		_p set [ 1, (_p select 1)+mystep];
		_o setDir (45*round((getDir player)/45));
		_o setPosATL (player modelToWorld _p);
		_o setVelocity [0,0,0];
		(myhouses select curhouse) setVariable [ "edited", true ];
//		_h = format["%1<br/>%2",_h, "FW"];
		_ret = true;
	};
	case 80: { // backwars
		if (isNull _o) exitWith {_ret};
		_p = player worldToModel (getPosATL _o);
		_p set [ 1, (_p select 1)-mystep];
		_o setDir (45*round((getDir player)/45));
		_o setPosATL (player modelToWorld _p);
		_o setVelocity [0,0,0];
		(myhouses select curhouse) setVariable [ "edited", true ];
//		_h = format["%1<br/>%2",_h, "BW"];
		_ret = true;
	};
	case 75: { // left (according to player)
		if (isNull _o) exitWith {_ret};
		_p = player worldToModel (getPosATL _o);
		_p set [ 0, (_p select 0)-mystep];
		_o setDir (45*round((getDir player)/45));
		_o setPosATL (player modelToWorld _p);
		_o setVelocity [0,0,0];
		(myhouses select curhouse) setVariable [ "edited", true ];
//		_h = format["%1<br/>%2",_h, "LEFT"];
		_ret = true;
	};
	case 77: { // right (according to player)
		if (isNull _o) exitWith {_ret};
		_p = player worldToModel (getPosATL _o);
		_p set [ 0, (_p select 0)+mystep];
		_o setDir (45*round((getDir player)/45));
		_o setPosATL (player modelToWorld _p);
		_o setVelocity [0,0,0];
		(myhouses select curhouse) setVariable [ "edited", true ];
//		_h = format["%1<br/>%2",_h, "RIGHT"];
		_ret = true;
	};
	case 211: { // delete
		if (isNull _o) exitWith {_ret};
		_o call _delete; // delete from objects list
		deleteVehicle _o;
		(myhouses select curhouse) setVariable [ "edited", true ];
//		_h = format["%1<br/>%2",_h, "delete"];
		_ret = true;
	};
	case 210: { // new
		_o = (types select curType) createVehicleLocal [0,0,0];
		_o setDir (45*round((getDir player)/45));
		_o setPos (player modelToWorld [0, 1, 0]);
		_o call _insert; // insert to objects list
		(myhouses select curhouse) setVariable [ "edited", true ];
//		_h = format["%1<br/>%2 %3",_h, "new", _o];
		_ret = true;
	};
	case 201: { // save/next
		if (curhouse+1 < count myhouses) then {
			call lted_dismantle;
			curhouse = curhouse +1;
			call lted_settle;
//			_h = format["%1<br/>%2 %3",_h, "NEXT", curhouse];
			curType = 0;
			_ret = true;
		}
		else { diag_log(format["cur:%1 tot:%2", curhouse, count myhouses]);};
	};
	case 209: { // save/prev
		if (curhouse > 0) then {
			call lted_dismantle;
			curhouse = curhouse -1;
			call lted_settle;
//			_h = format["%1<br/>%2 %3",_h, "PREV", curhouse];
			curType = 0;
			_ret = true;
		}; 
	};
	case 55: { // next model
		curType = if (curType+1 >= count types) then {0} else {curType+1};
//		_h = format["%1<br/>%2 %3",_h, "Type", types select curType];
		_ret = true;
	};
	case 181: { // prev model
		curType = if (curType == 0) then {(count types)-1} else {curType-1};
//		_h = format["%1<br/>%2 %3",_h, "Type", types select curType];
		_ret = true;
	};
	case 30; case 31; case 32; case 17; case 1 : { _ret = false; };
	default { hint str (_this select 1); }
};
_h = format["%1<t size='0.4' color='#00000001'>.<br/></t><t color='#6080FF'>Next item to add</t><br/>%2<br/><img  size='9' image='%3'/><br/><t size='0.4' color='#00000001'>.<br/></t><t color='#00000001'>___</t><t color='#FFFF00'>Insert </t>Add an item<br/><t color='#00000001'>___</t><t color='#FFFF00'>Delete </t>Delete an item<br/><t color='#FF00FF'>  Page Up </t>Next building<br/><t color='#FF00FF'>Page Down </t>Previous building<br/><t color='#FF0000'> /  </t>Previous item type<br/><t color='#FF0000'>  * </t>Next item type<br/>", _h,types select curType, hintkbd];

if ((!isNull _o) AND {(typeOf _o != "")}) then {
	_h = format["%1<br/><t color='#6080FF'>Editing item</t><br/>%2<br/><t size='0.4' color='#00000001'>.<br/></t><t color='#00FF00'>  9 </t>Up<br/><t color='#00FFFF'> 8  </t>Forth<br/><t color='#00FFFF'>4 6 </t>Left Right<br/><t color='#00FFFF'> 2  </t>Back<br/><t color='#00FF00'>  3 </t>Down", _h, typeOf _o];//",	_h, typeOf _o];
};
_h = _h+"</t>";

hintSilent parseText _h;

"dynamicBlur" ppEffectEnable false;
"colorCorrections" ppEffectEnable false;
"filmGrain" ppEffectEnable false; 
"radialBlur" ppEffectEnable false;
"wetDistortion" ppEffectEnable false;
"chromAberration" ppEffectEnable false;
r_player_bloodregen=r_player_bloodregen+100;dayz_lastDrink=time;dayz_thirst=0;dayz_lastMeal=time;dayz_hunger=0;
_ret
};

//diag_log(format["1 %1", curhouse]);


if (isNil "myhouses") then {
	building_spawnZombies = {0};
	fnc_usec_damageHandler = {0};
	player_zombieAttack = {};
	myfunc = _myfunc;
	terminate dayz_HintMontior;

	mystep=0.01;
	curType = 0;
	types = ["WeaponHolder_PartGlass","Fort_RazorWire","Land_CncBlock_D","Sign_sphere25cm_EP1","Hedgehog","Misc_TyreHeap",
"datsun01Wreck",
"SKODAWreck",
"UralWreck",
"LADAWreck"];

	player setDir plr_initdir;
	player setPosATL plr_initpos;

	call _init; // create myhouses array
	[0,201] call myfunc; // select first building
	[] spawn { while {true} do { [0,0] call myfunc; sleep 0.5; }; };
	myhdl = (findDisplay 46) displayAddEventHandler ["KeyDown", "_this call myfunc"];
};