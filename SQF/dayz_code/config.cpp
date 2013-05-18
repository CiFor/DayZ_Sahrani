#define VSoft		0
#define VArmor		1
#define VAir		2

#define private		0
#define protected		1
#define public		2

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

#define EAST 0 // (Russian)

#include "basicdefines.hpp"

class CfgPatches {
	class dayz_code {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"dayz_equip","dayz_weapons","CAMisc3","CABuildingParts","CABuildingParts_Signs","CAStructuresHouse","CAStructuresLand_Ind_Stack_Big","CAStructures_Misc_Powerlines","CAStructures","CABuildings","CABuildings2","Ind_MalyKomin","CAStructures_A_CraneCon","CAStructures_Mil","CAStructures_Nav","CAStructures_Rail","A_Crane_02","A_TVTower","CAStructures_Railway","CAStructuresHouse","CAStructuresHouse_HouseBT"};
	};
};

class CfgMods
{
	class DayZ
	{
		dir = "DayZ_Sahrani";
		name = "DayZ Sahrani";
		picture = "z\addons\dayz_code\gui\dayz_logo_ca.paa";
		hidePicture = 0;
		hideName = 0;
		action = "";
		version = "0.2.1-20130517";
		hiveVersion = 0.96; //0.93
	};
};

class CfgAddons
{
	access = 1;
	class PreloadBanks
	{
	};
	class PreloadAddons
	{
		class dayz
		{
			list[] = {"dayz_code","dayz","dayz_equip","dayz_weapons"};
		};
	};
};

class CfgAISkill {
	aimingaccuracy[] = {0, 0, 1, 1};
	aimingshake[] = {0, 0, 1, 1};
	aimingspeed[] = {0, 0, 1, 1};
	commanding[] = {0, 0, 1, 1};
	courage[] = {0, 1, 1, 1};
	endurance[] = {0, 0, 1, 1};
	general[] = {0, 0, 1, 1};
	reloadspeed[] = {0, 0, 1, 1};
	spotdistance[] = {0, 0, 1, 0.6};
	spottime[] = {0, 0, 1, 1};
};

class CfgInGameUI
{
    class PeripheralVision
    {
        cueColor[] = {0,0,0,0};
    };
	
	class MPTable
	{
		color[] = {0,0,0,0}; //{0.7,0.7,0.7,1};
		colorTitleBg[] = {0,0,0,0}; //{0.1,0.15,0.15,1};
		colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.9};
		colorSelected[] = {0,0,0,0}; //{0.7,0.7,0.7,0.4};
		colorWest[] = {0,0,0,0}; //{0.7,0.95,0.7,1};
		colorEast[] = {0,0,0,0}; //{0.95,0.7,0.7,1};
		colorCiv[] = {0,0,0,0}; //{0.8,0.8,0.8,1};
		colorRes[] = {0,0,0,0}; //{0.7,0.7,0.95,1};
		font = "EtelkaNarrowMediumPro";
		size = "0"; //"( 21 / 408 )";
		class Columns
		{
			class Order
			{
				width = 0; //0.046;
				colorBg[] = {0,0,0,0}; //{0.1,0.27,0.1,0.8};
				doubleLine = 0;
			};
			class Player
			{
				width = 0; //0.25;
				colorBg[] = {0,0,0,0}; //{0.1,0.23,0.1,0.8};
				doubleLine = 0;
			};
			class KillsInfantry
			{
				width = 0; //0.11;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_infantry_ca.paa";
			};
			class KillsSoft
			{
				width = 0; //0.1;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_soft_ca.paa";
			};
			class KillsArmor
			{
				width = 0; //0.11;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_armored_ca.paa";
			};
			class KillsAir
			{
				width = 0; //0.1;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_air_ca.paa";
			};
			class Killed
			{
				width = 0; //0.1;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_killed_ca.paa";
			};
			class KillsTotal
			{
				width = 0; //0.1;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.35,0.1,0.9};
				picture = ""; //"\ca\ui\data\stats_total_ca.paa";
			};
		};
	};
};

class RscPictureGUI
{
	access = 0;
	type = 0;
	idc = -1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0.38,0.63,0.26,0.75};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	style = "0x30 + 0x100";
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};
class RscStructuredText {
	class Attributes;
};
class RscStructuredTextGUI: RscStructuredText
{
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	class Attributes: Attributes
	{
		align = "center";
		valign = "middle";
	};
};
//#include "CfgWorlds.hpp"
#include "cfgMoves.hpp"
#include "rscTitles.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "cfgLoot.hpp"
#include "CfgMarkers.hpp"

class CfgSurvival {
	class Inventory {
		class Default {
			//weapons[] = {"Makarov"};
			magazines[] = {"ItemBandage","ItemPainkiller"};
			weapons[] = {"ItemFlashlight"};
			backpackWeapon = "";
			backpack = "DZ_Patrol_Pack_EP1";
		};
	};
	class Meat {
		class Default {
			yield = 2;
			rawfoodtype = "FoodmeatRaw";
		};
		class Cow: Default {
			yield = 6;
			rawfoodtype = "FoodbeefRaw";
		};
		class Cow01: Cow {};
		class Cow02: Cow {};
		class Cow03: Cow {};
		class Cow04: Cow {};
		class Goat: Default {
			yield = 4;
			rawfoodtype = "FoodmuttonRaw";
		};
		class Sheep: Default {
			yield = 4;
			rawfoodtype = "FoodmuttonRaw";
		};
		class WildBoar: Default {
			yield = 4;
			rawfoodtype = "FoodbaconRaw";
		};
		class Hen: Default {
			yield = 2;
			rawfoodtype = "FoodchickenRaw";
		};
		class Rabbit: Default {
			yield = 1;
			rawfoodtype = "FoodrabbitRaw";
		};
	};
};

class CfgBuildingLoot {
	class Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_suit1","z_suit2","z_worker1","z_worker2","z_worker3","z_villager1","z_villager2","z_villager3"};
		lootChance = 0;
		lootPos[] = {};
		itemType[] = {};
		itemChance[] = {};
		hangPos[] = {};
		vehPos[] = {};
	};
	class Master {
		weapons[] = {
			"SMAW",
			"Javelin",
			"G36C",
			"Stinger"
		};
	};
	class Residential: Default {
		zombieChance = 0.3;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] =	{
			{"ItemSodaMdew","magazine"},
			{"ItemWatch","generic"},
			{"ItemCompass","generic"},
			{"ItemCraftingBook","weapon"},
			{"ItemMap","weapon"},
			{"Makarov","weapon"},
			{"MakarovSD","weapon"},
			{"Colt1911","weapon"},
			{"ItemFlashlight","generic"},
			{"ItemKnife","generic"},
			{"ItemMatchbox","generic"},
			{"","generic"},
			{"LeeEnfield","weapon"},
			{"revolver_EP1","weapon"},
			

			{"DZ_Assault_Pack_EP1","object"}, // 12
			{"DZ_Czech_Vest_Puch","object"}, // 12-0
			{"DZ_ALICE_Pack_EP1","object"}, // 16
			{"DZ_TK_Assault_Pack_EP1","object"}, // 16
			{"DZ_British_ACU","object"}, // 18
			
			{"Winchester1866","weapon"},
			{"WeaponHolder_ItemTent","object"},
			{"","military"},
			{"","trash"},
			{"Crossbow","weapon"},
			{"Binocular","weapon"},
			{"PartWoodPile","magazine"},
			{"Skin_Camo1_DZ","magazine"},
			{"Skin_Sniper1_DZ","magazine"},
			{"WeaponHolder_ItemCrowbar","object"},
			{"MR43","weapon"}
		};
		itemChance[] =	{
			0.01,
			0.15,
			0.05,
			0.02,
			0.03,
			0.13,
			0.05,

			0.03,
			0.03,
			0.08,
			0.06,
			2,
			0.06,
			0.04,
			0.05, //12
			0.04, // 12-0

			0.02, //16
			0.02, //16
			0.01, //18
			0.01,
			0.01,
			0.03,
			0.5,
			0.01,
			0.06,
			0.06,
			0.01,
			0.01,
			0.08,
			0.03
		};		
	};
	class Office: Residential {
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_suit1","z_suit2"};
	};
	class Industrial: Default {
		zombieChance = 0.4;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3"};
		maxRoaming = 2;
		lootChance = 0.3;
		lootPos[] = {};
		itemType[] =	{
			{"","generic"},
			{"","trash"},
			{"","military"},
			{"ItemCraftingBook2","weapon"},
			{"WeaponHolder_PartGeneric","object"},
			{"WeaponHolder_PartWheel","object"},
			{"WeaponHolder_PartFueltank","object"},
			{"WeaponHolder_PartEngine","object"},
			{"WeaponHolder_PartGlass","object"},
			{"WeaponHolder_PartVRotor","object"},
			{"WeaponHolder_ItemJerrycan","object"},
			{"WeaponHolder_ItemHatchet","object"},
			{"ItemKnife","military"},
			{"ItemToolbox","weapon"},
			{"ItemWire","magazine"},
			{"ItemNails","magazine"},
			{"ItemTankTrap","magazine"}
		};
		itemChance[] =	{
			0.18,
			0.29,
			0.04,
			0.02,
			0.04,
			0.05,
			0.02,
			0.02,
			0.04,
			0.01,
			0.04,
			0.11,
			0.07,
			0.06,
			0.01,
			0.07,
			0.04
		};
	};
	class Farm: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{
			{"WeaponHolder_ItemJerrycan","object"},
			{"","generic"},
			{"huntingrifle","weapon"},
			{"LeeEnfield","weapon"},
			{"Winchester1866","weapon"},
			{"","trash"},
			{"Crossbow","weapon"},
			{"PartWoodPile","magazine"},
			{"WeaponHolder_ItemHatchet","object"},
			{"MR43","weapon"},
			//{"TrapBear","magazine"}
		};
		itemChance[] =	{
			0.06,
			0.28,
			0.01,
			0.04,
			0.03,
			0.22,
			0.03,
			0.11,
			0.17,
			0.06,
			//0.01
		};
	};
	class Supermarket: Default {
		lootChance = 0.6;
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.3;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		itemType[] = {
			{"ItemWatch","generic"},
			{"ItemCompass","generic"},
			{"ItemMap","weapon"},
			{"ItemCraftingBook","weapon"},
			{"Makarov","weapon"},
			{"Colt1911","weapon"},
			{"ItemFlashlight","generic"},
			{"ItemKnife","generic"},
			{"ItemMatchbox","generic"},
			{"","generic"},
			{"LeeEnfield","weapon"},
			{"revolver_EP1","weapon"},
					

			{"DZ_Assault_Pack_EP1","object"}, // 12
			{"DZ_Czech_Vest_Puch","object"}, // 12-0
			{"DZ_ALICE_Pack_EP1","object"}, // 16
			{"DZ_TK_Assault_Pack_EP1","object"}, // 16
			{"DZ_British_ACU","object"}, // 18
			
			{"Winchester1866","weapon"},
			{"WeaponHolder_ItemTent","object"},
			{"","food"},
			{"","trash"},
			{"Crossbow","weapon"},
			{"Binocular","weapon"},
			{"PartWoodPile","magazine"},
			{"MR43","weapon"}
		};
		itemChance[] =	{
			0.15,
			0.01,
			0.05,
			0.02,
			0.02,
			0.02,
			0.05,
			0.02,
			0.05,
			0.05,
			0.01,
			0.01,
			0.05, //12
			0.04, // 12-0

			0.02, //16
			0.02, //16
			0.01, //18
			0.01,
			0.01,
			0.3,
			0.15,
			0.01,
			0.05,
			0.02,
			0.01
		};
	};
	class HeliCrash: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{		
			{"FN_FAL","weapon"},
			{"bizon_silenced","weapon"},
			{"bizon","weapon"},
			{"M14_EP1","weapon"},
			{"FN_FAL_ANPVS4","weapon"},
			{"M107_DZ","weapon"},
			{"BAF_AS50_scoped","weapon"},
			{"Mk_48_DZ","weapon"},
			{"M249_DZ","weapon"},
			//{"BAF_L85A2_RIS_CWS","weapon"},
			{"BAF_L85A2_RIS_SUSAT","weapon"},
			{"DMR","weapon"},
			{"","military"},
			{"","medical"},
			{"MedBox0","object"},
			{"NVGoggles","weapon"},
			{"AmmoBoxSmall_556","object"},
			{"AmmoBoxSmall_762","object"},
			{"Skin_Camo1_DZ","magazine"},
			{"Skin_Sniper1_DZ","magazine"},
			{"G36C","weapon"},
			{"G36C_camo","weapon"},
			{"G36A_camo","weapon"},
			{"G36K_camo","weapon"},
			{"100Rnd_762x54_PK","magazine"},
			{"M40A3","weapon"},
			{"m8_SAW","weapon"},
			{"m8_sharpshooter","weapon"},
			{"BAF_L85A2_RIS_ACOG","weapon"},
			{"VSS_vintorez","weapon"},
			{"SVD","weapon"},
			{"SVD_CAMO","weapon"}
		};
		itemChance[] =	{
			0.02,		//{"FN_FAL","weapon"},
			0.05,		//{"bizon_silenced","weapon"},
			0.03,		//{"bizon","weapon"},
			0.05,		//{"M14_EP1","weapon"},
			0.02,		//{"FN_FAL_ANPVS4","weapon"},
			0.02,		//{"m107","weapon"},
			0.01,		//{"BAF_AS50_scoped","weapon"},
			0.03,		//{"Mk_48_DZ","weapon"},
			0.05,		//{"M249_DZ","weapon"},
			0.01,		//{"BAF_L85A2_RIS_CWS","weapon"}, BAF_L85A2_RIS_SUSAT
			0.06,		//{"DMR","weapon"},
			1,			//{"","military"},
			0.5,		//{"","medical"},
			0.1,		//{"MedBox0","object"},
			0.02,		//{"NVGoggles","weapon"}
			0.1,	//AmmoBoxSmall_556
			0.1,	//AmmoBoxSmall_762
			0.08,	//Skin_Camo1_DZ
			0.05,	//Skin_Sniper1_DZ
			0.03,	//G36C"
			0.02,	//G36C_camo
			0.02,	//G36A_camo
			0.02,	//G36K_camo
			0.01,	//("100Rnd_762x54_PK","magazine"}
			0.01,	//("M40A3","weapon"}
			0.01,	//("m8_SAW","weapon"}
			0.01,	//("m8_sharpshooter","weapon"}
			0.01,	//("BAF_L85A2_RIS_ACOG","weapon"}
			0.01,	//("VSS_vintorez","weapon"}
			0.01,	//("SVD","weapon"}
			0.01	//("SVD_CAMO","weapon"}
		};
	};
	class HeliCrash_No50s: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{		
			{"FN_FAL","weapon"},
			{"bizon_silenced","weapon"},
			{"bizon","weapon"},
			{"M14_EP1","weapon"},
			{"FN_FAL_ANPVS4","weapon"},
			{"Mk_48_DZ","weapon"},
			{"M249_DZ","weapon"},
			{"BAF_L85A2_RIS_SUSAT","weapon"},
			{"DMR","weapon"},
			{"","military"},
			{"","medical"},
			{"MedBox0","object"},
			{"NVGoggles","weapon"},
			{"AmmoBoxSmall_556","object"},
			{"AmmoBoxSmall_762","object"},
			{"Skin_Camo1_DZ","magazine"},
			{"Skin_Sniper1_DZ","magazine"},
			{"G36C","weapon"},
			{"G36C_camo","weapon"},
			//{"G36_C_SD_camo","weapon"},
			{"G36A_camo","weapon"},
			{"G36K_camo","weapon"},
			{"100Rnd_762x54_PK","magazine"},
			{"M40A3","weapon"},
			{"m8_SAW","weapon"},
			{"m8_sharpshooter","weapon"},
			{"VSS_vintorez","weapon"},
			{"BAF_L85A2_RIS_ACOG","weapon"},
			{"SVD","weapon"},
			{"SVD_CAMO","weapon"}
		};
		itemChance[] =	{
			0.02,		//{"FN_FAL","weapon"},
			0.05,		//{"bizon_silenced","weapon"},
			0.03,		//{"bizon","weapon"},
			0.05,		//{"M14_EP1","weapon"},
			0.02,		//{"FN_FAL_ANPVS4","weapon"},
			0.03,		//{"Mk_48_DZ","weapon"},
			0.05,		//{"M249_DZ","weapon"},
			0.01,		//{"BAF_L85A2_RIS_CWS","weapon"}, BAF_L85A2_RIS_Holo
			0.06,		//{"DMR","weapon"},
			1,			//{"","military"},
			0.5,		//{"","medical"},
			0.1,		//{"MedBox0","object"},
			0.02,		//{"NVGoggles","weapon"}
			0.1,	//AmmoBoxSmall_556
			0.1,	//AmmoBoxSmall_762
			0.08,	//Skin_Camo1_DZ
			0.05,	//Skin_Sniper1_DZ
			0.03,	//G36C"
			0.02,	//G36C_camo
			//0.01,	//G36_C_SD_camo
			0.02,	//G36A_camo
			0.02,	//G36K_camo
			0.01,	//("100Rnd_762x54_PK","magazine"}
			0.01,	//("M40A3","weapon"}
			0.01,	//("m8_SAW","weapon"}
			0.01,	//("m8_sharpshooter","weapon"}
			0.01,	//("BAF_L85A2_RIS_ACOG","weapon"}
			0.01,	//("VSS_vintorez","weapon"}
			0.01,	//("SVD","weapon"}
			0.01	//("SVD_CAMO","weapon"}
		};
	};
	class Hospital: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_doctor","z_doctor","z_doctor"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{
			{"","trash"},
			{"","hospital"},
			{"MedBox0","object"}
		};
		itemChance[] =	{
			0.2,
			1,
			0.2
		};
	};
	class Military: Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] =	{
			{"M9","weapon"},
			{"ItemCraftingBook3","weapon"},
			{"M16A2","weapon"},
			{"M16A2GL","weapon"},
			{"M9SD","weapon"},
			{"AK_74","weapon"},
			{"M4A1_Aim","weapon"},
			{"AKS_74_kobra","weapon"},
			{"AKS_74_U","weapon"},
			{"AK_47_M","weapon"},
			{"M24","weapon"},
			{"M1014","weapon"},
			{"DMR","weapon"},
			{"M4A1","weapon"},
			{"M14_EP1","weapon"},
			{"UZI_EP1","weapon"},
			{"Remington870_lamp","weapon"},
			{"glock17_EP1","weapon"},
			{"MP5A5","weapon"},
			{"MP5SD","weapon"},
			{"M4A3_CCO_EP1","weapon"},
			{"Binocular","weapon"},
			{"ItemFlashlightRed","military"},
			{"ItemKnife","military"},
			{"ItemGPS","weapon"},
			{"ItemMap","military"},
			
			{"DZ_ALICE_Pack_EP1","object"}, // 16
			{"DZ_TK_Assault_Pack_EP1","object"}, // 16
			{"DZ_British_ACU","object"}, // 18
			{"DZ_CivilBackpack_EP1","object"}, // 24
			{"DZ_Backpack_EP1","object"}, // 24
			
			//Normal
			{"","medical"},
			{"","generic"},
			{"","military"},
			{"ItemEtool","weapon"},
			{"ItemSandbag","magazine"},
			{"Sa58P_EP1","weapon"},
			{"Sa58V_EP1","weapon"},
			
			{"MakarovSD","weapon"},
			{"Sa61_EP1","weapon"},
			{"AK_107_pso","weapon"},
			{"AK_107_kobra","weapon"},
			{"AK_107_GL_kobra","weapon"},
			{"AKS_74_pso","weapon"},
			{"RPK_74","weapon"},
			{"m8_carbine","weapon"},
			{"m8_carbineGL","weapon"},
			{"m8_compact","weapon"},
			{"SVD","weapon"}
		};
		itemChance[] =	{
			0.05,
			0.01,
			0.05,
			0.01,
			0.02,
			0.15,
			0.01,
			0.08,
			0.05,
			0.05,
			0.01,
			0.10,
			0.01,
			0.02,
			0.01,
			0.05,
			0.08,
			0.10,
			0.04,
			0.02,
			0.01,
			0.06,
			0.10,
			0.10,
			0.01,
			0.05,
			//Bags
			0.08, //16
			0.08, //16
			0.06, //18
			0.01, //24
			0.01, //DZ_Backpack_EP1 24
			0.10, 
			1.00,
			2.50,
			0.05,
			0.02,
			0.03,
			0.03,
			
			0.03, //MakarovSD
			0.03, //Sa61_EP1
			0.01, //AK_107_pso
			0.03, //AK_107_kobra
			0.03, //AK_107_GL_kobra
			0.01, //AKS_74_pso
			0.01, //RPK_74
			0.04, //m8_carbine
			0.04, //m8_carbineGL
			0.04, //m8_compact
			0.01  //SVD
		};
	};
	class MilitarySpecial: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier_heavy"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] =	{
			{"M16A2","weapon"},
			{"M16A2GL","weapon"},
			{"M249_DZ","weapon"},
			{"M9SD","weapon"},
			{"AK_74","weapon"},
			{"M4A1_Aim","weapon"},
			{"AKS_74_kobra","weapon"},
			{"AKS_74_U","weapon"},
			{"AK_47_M","weapon"},
			{"M24","weapon"},
			{"SVD_CAMO","weapon"},
			{"M1014","weapon"},
			{"M107_DZ","weapon"},
			{"DMR","weapon"},
			{"M4A1","weapon"},
			{"M14_EP1","weapon"},
			{"UZI_EP1","weapon"},
			{"Remington870_lamp","weapon"},
			{"glock17_EP1","weapon"},
			{"M240_DZ","weapon"},
			{"M4A1_AIM_SD_camo","weapon"},
			{"M16A4_ACG","weapon"},
			{"M4A1_HWS_GL_camo","weapon"},
			{"Mk_48_DZ","weapon"},
			{"M4A3_CCO_EP1","weapon"},
			//Ammo
			{"AmmoBoxSmall_556","object"},
			{"AmmoBoxSmall_762","object"},

			{"Binocular","weapon"},
			{"ItemFlashlightRed","military"},
			{"ItemKnife","military"},
			{"ItemGPS","weapon"},
			{"ItemMap","military"},
			{"Binocular_Vector","military"},

			{"DZ_ALICE_Pack_EP1","object"}, // 16
			{"DZ_TK_Assault_Pack_EP1","object"}, // 16
			{"DZ_British_ACU","object"}, // 18
			{"DZ_CivilBackpack_EP1","object"}, // 24
			{"DZ_Backpack_EP1","object"}, // 24		

			{"","medical"},
			{"","generic"},
			{"","military"},
			{"PipeBomb","magazine"},
			{"Sa58V_RCO_EP1","weapon"},
			{"Sa58V_CCO_EP1","weapon"},
			{"G36_C_SD_camo","weapon"},
			{"M40A3","weapon"},
			{"100Rnd_762x54_PK","magazine"},
			
			{"MakarovSD","weapon"},
			{"Sa61_EP1","weapon"},
			{"AK_107_pso","weapon"},
			{"AK_107_kobra","weapon"},
			{"AK_107_GL_kobra","weapon"},
			{"AKS_74_pso","weapon"},
			{"RPK_74","weapon"},
			{"m8_carbine","weapon"},
			{"m8_carbineGL","weapon"},
			{"m8_compact","weapon"},
			{"SVD","weapon"}
		};
		itemChance[] =	{
			0.10,
			0.05,
			0.01,
			0.02,
			0.10,
			0.02,
			0.10,
			0.10,
			0.10,
			0.01,
			0.01,
			0.20,
			0.01,
			0.02,
			0.10,
			0.03,
			0.20,
			0.10,
			0.20,
			0.01,
			0.04,
			0.05,
			0.02,
			0.01,
			0.08,
			0.04,
			0.02,
			0.10,
			0.05,
			0.15,
			0.01, //ItemGPS
			0.03,
			0.01,
			//Bags
			0.08, //16
			0.08, //16
			0.06, //18
			0.01, //24
			0.01, //DZ_Backpack_EP1 24
			0.30,
			1.00,
			5.00, //military
			0.01, //PipeBomb
			0.01, //Sa58V_RCO_EP1
			0.01, //Sa58V_CCO_EP1
			0.01, //{"G36_C_SD_camo","weapon"},
			0.02, // M40A3
			0.01,  //("100Rnd_762x54_PK","magazine"}
			
			0.03, //MakarovSD
			0.03, //Sa61_EP1
			0.01, //AK_107_pso
			0.03, //AK_107_kobra
			0.03, //AK_107_GL_kobra
			0.01, //AKS_74_pso
			0.01, //RPK_74
			0.04, //m8_carbine
			0.04, //m8_carbineGL
			0.04, //m8_compact
			0.01  //SVD
		};
	};
	class Church: Residential {
		zombieClass[] = {"z_priest","z_priest","z_priest"};
	};
	
		class Land_army_hut_int : Military {
		lootPos[] = {{1.64453,-5.52002,-1.33056},{0.53125,1.72607,-1.36391}};
	};
	
	class Land_garaz_s_tankem : Military {
		lootPos[] = {{-6.38477,3.67871,-2.49103},{3.28027,0.556641,-2.49103}};
	};
	
	class Land_army_hut3_long_int : Military {
		lootPos[] = {{-1.72803,-0.726563,-1.23617},{-2.26416,-4.87402,-1.23617},{-0.449219,3.71338,-1.23617}};
	};
	
	class Land_army_hut2_int : Military {
		lootPos[] = {{0.703369,0.560547,-0.948328},{1.6875,-2.17627,-0.948328}};
	};
	
	class Land_army_hut2 : Military {
		lootPos[] = {{0.703369,0.560547,-0.948328},{1.6875,-2.17627,-0.948328}};
	};
	
	class Land_posed : Military {
		lootPos[] = {{0.0810547,0.408203,0.874388}};
	};
	
	class Land_army_hut_storrage : Military {
		lootPos[] = {{0.847168,-2.55713,-1.96141},{0.608887,2.79443,-1.96141}};
	};
	
	class Land_hlaska : Military {
		lootPos[] = {{0.0,0.0,3.8}};
	};
	
	class Land_cihlovej_dum_in : Residential {
		lootPos[] = {{1.87744,2.37598,-5.27588},{-1.71484,1.78711,-1.8147},{0.640137,-1.39795,-1.81472}};
	};
	class Land_cihlovej_dum_mini : Residential {
		lootPos[] = {{2.51855,2.12207,-2.86942},{-1.84277,2.04785,-2.86942},{1.23145,-0.335938,-2.86942}};
	};
	
	class Land_dum_mesto_in : Residential {
		lootPos[] = {{-4.72754,-0.462402,-4.23207},{5.52393,-1.52441,-4.21337},{-4.91895,3.55244,-4.27988},{5.21289,2.88672,-1.42627},{5.27441,-1.26953,-1.23014},{-3.92676,4.32178,-1.56758},{-3.1626,-0.688477,-1.22935}};
	};
	
	class Land_sara_Domek_sedy : Residential {
		lootPos[] = {{-1.2832,0.844727,-2.14196},{-3.59521,3.14893,-2.14198},{4.49568,2.21338,-2.14196}};
	};
	
	class Land_hruzdum : Residential {
		lootPos[] = {{1.31641,2.11475,1.59321},{-1.16504,0.639648,1.59321},{0.558594,2.17696,-1.16265},{1.32813,2.17676,-4.73357}};
	};
	
	class Land_tovarna1 : Industrial {
		lootPos[] = {{1.59082,-4.73145,-5.75442},{-6.48047,-0.56543,-5.75442},{-9.13379,4,4.82972},{-5.41699,-6.46045,4.82972},{3.56592,-7.5332,-0.320107},{1.1416,-6.83887,2.17997},{2.71289,1.61426,2.15098},{-9.21143,-6.28223,2.17997}};
	};
	
	class Land_ryb_domek : Residential {
		lootPos[] = {{-0.0595703,-1.03418,-2.015}};
	};
	
	class Land_benzina_schnell : Industrial {
		lootPos[] = {};
	};
	
	class Land_TVstudio : Office {
		lootPos[] = {{15.8428,-9.61719,-6.69002},{9.85352,-0.425781,-6.69002},{-13.7793,0.0605469,-3.48293},{3.36133,14.2383,-6.59001},{4.14648,2.64648,-6.59001},{-8.54004,5.13867,-6.59001},{-11.3779,-11.0996,-6.69002},{-6.23926,-5.50977,-6.59001},{5.48535,-10.3301,-6.59001},{10.2422,-6.38867,-4.74052},{6.65234,-12.4102,-3.09003},{15.1172,-14.7285,-3.19049},{-6.0791,-14.9238,-3.19049},{-6.86133,-7.80664,-3.09003},{-0.39431,-1.9375,-3.09003},{4.05273,7.01367,-3.09003},{-13.8379,0.0234375,0.0170593},{5.71387,10.9277,-1.24002},{-13.4434,0.101563,3.51707},{5.16895,6.68164,0.409988},{-0.827148,-3.25977,0.409988},{5.13672,-8.25195,0.409988},{-8.56445,-7.31445,0.409988},{-3.02539,-9.63086,0.409988},{9.5625,-14.7969,0.30867},{7.84766,-9.53711,3.90999},{-1.17188,-10.7168,3.90999},{-9.95605,4.20508,3.90999},{-5.00195,11.9453,3.90999},{3.52051,8.62891,3.90999},{-13.1572,0.296875,7.01707}};
	};
	
	class Land_deutshe_mini : Residential {
		lootPos[] = {{-1.81348,2.36963,-2.79262},{-2.11768,-0.958008,-2.73062},{3.41357,0.916504,-2.78435},{3.76172,-2.10693,-2.73065}};
	};
	
	class Land_hotel_riviera1 : Residential {
		lootPos[] = {{6.10645,-5.99854,-0.321464},{-3.08594,-6.40771,-0.321464},{-6.52734,5.13611,-0.358277},{-12.2471,-2.67871,-0.322226},{13.124,7.67676,-3.34035},{-2.03223,8.16943,-3.3383},{-3.36816,-6.23193,-3.33647},{6.81152,-6.18652,-3.33864},{12.333,5.94678,3.28125},{1.16504,-1.51396,3.28125}};
	};
	
	class Land_zalchata : Residential {
		lootPos[] = {{-0.405273,-3.00085,-0.631011}};
	};
	
	class Land_hotel_riviera2 : Residential {
		lootPos[] = {{-6.81641,-8.87415,-0.227416},{-6.94629,2.83325,-0.395831},{-12.4629,4.70825,3.28149},{-0.634766,-1.16333,3.28149},{-8.18359,7.3291,-3.34339},{3.54785,7.59863,-3.3374},{-1.63672,-6.58521,-3.34106},{5.48242,-6.93433,-3.33635},{4.53516,-6.802,-0.321464}};
	};
	
	class Land_sara_stodola : Farm {
		lootPos[] = {{-2.94824,-0.0193848,-2.19523},{4.08301,-1.0835,-2.19523}};
	};
	
	class Land_hut01 : Residential {
		lootPos[] = {{0.323242,1.36377,-0.44834}};
	};
	
	class Land_hut02 : Residential {
		lootPos[] = {{-0.162598,1.24707,-0.445763}};
	};
	
	class Land_hospoda_mesto: Residential {
		lootPos[] = {{5.33691,4.18164,-5.149056},{2.87451,-4.98828,-5.17222},{1.55518,-1.5293,-5.17846},{-6.48926,-3.0957,-5.17224},{-0.642578,-4.02344,-5.17224},{-6.15039,-4.04492,-1.22695},{2.83838,-1.31641,-1.24297},{5.75244,3.92773,-1.2485}};
	};
	
	class Land_hut04 : Residential {
		maxRoaming = 2;
		lootPos[] = {{-0.0205078,1.74512,-0.437198}};
	};
	
	class Land_dulni_bs : Residential {
		maxRoaming = 1;
		lootPos[] = {{0.70459,-1.89063,-1.75204},{0.778809,1.64063,-1.75206}};
	};
	
	class Land_bouda2_vnitrek : Farm {
		maxRoaming = 2;
		lootPos[] = {{-1.34631,1.36914,-0.610504},{0.775391,-1.76465,-0.610504}};
	};
	
	class Land_dum_zboreny : Residential {
		maxRoaming = 3;
		lootPos[] = {{3.98828,-2.43848,-2.37674},{-3.51367,3.46289,-2.37674},{6.21875,4.40234,-2.37674},{-0.03125,-2.62207,1.40173},{-2.28125,3.90332,1.40192},{-5.29883,-2.30957,1.414438}};
	};
	
	class Land_dum_zboreny_total : Residential {
		maxRoaming = 3;
		lootPos[] = {};
	};
	
	class Land_zastavka_jih : Residential {
		maxRoaming = 2;
		lootPos[] = {{0.367188,-0.109375,-1.21014}};
	};
	
	class Land_zastavka_sever : Residential {
		maxRoaming = 2;
		lootPos[] = {{1.06641,0.0400391,-0.80307}};
	};
	
	class Land_hut03 : Residential {
		maxRoaming = 2;
		lootPos[] = {};
	};
	
	class Land_hut_old02 : Industrial {
		lootPos[] = {{0.573242,-7.09033,-3.03308},{0.1875,0.723145,-3.03308},{-7.09033,-3.14648,-3.03308},{-7.18457,1.79688,-3.03308}};
	};
	
	class Land_dum_rasovna : Residential {
		lootPos[] = {{1.02197,3.18604,0.272606},{1.36816,1.83447,-2.66958}};
	};
	
	class Land_sara_zluty_statek_in : Residential {
		lootPos[] = {{-8.0752,3.12695,-2.88265},{5.53662,-2.125,-2.91741},{-1.21533,0.908203,-2.88771},{-3.49365,4.92578,-2.87814},{6.77148,0.861328,-2.90053},{2.46338,1.375,-2.89846}};
	};
	// Third story map up
	class Land_hotel : Residential {
		lootChance = 0.5;
		lootPos[] = {{-12.1133,12.4419,-7.53042},{-18.6973,-2.91846,-7.64675},{-6.98535,7.09436,-7.62252},{-9.23145,-14.5624,-7.69155},{-1.65137,-22.9067,-7.67668},{5.53125,-9.09363,-7.86828},{18.4141,2.01929,-7.9357},{1.40527,22.5328,-7.61164},{-6.51465,13.7125,-7.58348},{1.10156,4.91199,-7.72602},{8.56738,-0.873779,-7.97877},{7.4209,0.354736,-5.95206},{-0.185547,-1.58337,-4.26797},{4.11328,-17.9395,-4.31124},{-1.14551,-23.3689,-4.18952},{-7.72461,-14.7784,-4.21829},{-18.4707,-4.15723,-4.16677},{-20.043,-1.46997,-4.15566},{-17.9609,6.81995,-4.09122},{-13.1279,7.21838,-4.0675},{0.290039,6.35986,-4.22014},{-3.70508,18.1742,-4.09729},{1.52637,20.1591,-4.14155},{21.5801,0.0534668,-4.49635},{-0.462891,-1.63513,-0.764894},{-0.90332,-21.0625,-0.718954},{14.1846,-6.54431,-0.958742},{18.6895,4.2146,-0.936404},{20.874,-1.52063,-0.998734},{1.39063,20.551,-0.637069},{0.426758,7.36646,-0.714541},{-9.5293,1.23804,-0.646017},{7.3584,-0.228271,1.0327},{1.69434,-3.09766,2.70149},{-9.79492,-14.3831,2.80007},{-5.7373,-15.0978,2.76387},{4.50781,-18.5471,2.69182},{-1.4834,-21.1569,2.78841},{13.7695,-9.43396,2.52639},{17.1025,3.14478,2.57377},{5.09277,8.44556,2.74124},{6.38574,18.0823,2.7914},{2.24902,23.494,2.85944},{-2.27344,21.774,2.91127},{0.607422,7.0752,2.7814},{-10.7324,7.24023,2.90718},{-17.8311,-3.34961,2.84166},{-20.7715,1.62964,2.86212},{6.3877,1.60095,4.54189},{0.129883,-1.36096,6.23433},{0.232422,6.25537,6.28407},{-2.66504,-16.9747,6.25621},{-7.40723,-0.0731201,6.3258},{-13.5254,8.42249,6.44309},{1.26855,20.7711,6.36965},{11.7334,3.17261,6.13703}};
	};
	
	class Land_dum_istan2 : Residential {
		lootPos[] = {{ -5.39941,0.694824,3.80019 },{ 5.82715,-4.5752,0.822979 },{ -6.38525,-4.09766,3.80019 },{ 3.71338,-1.09912,0.822979 },{ -0.486328,-2.90381,0.822979 }};
	};
	
	class Land_dum_istan3 : Residential {
		lootPos[] = {{ -7.49463,-1.50439,0.585144 },{ -10.3994,-4.03662,-1.10769 },{ -3.33594,-1.15234,0.585143 },{ 9.63916,-0.274414,0.585144 },{ 4.73975,-4.78345,0.585144 }};
	};
	
	class Land_dum_istan3_pumpa : Residential {
		lootPos[] = {{3.21826,0.550293,1.47485},{-2.80615,0.327637,1.47485}};
	};
	
	class Land_dum_istan3_hromada : Residential {
		maxRoaming = 2;
		lootPos[] = {{ -1.52051,-2.9375,-3.24189 },{ -0.0441895,0.201172,-3.24189 }};
	};
	
	class Land_dum_istan3_hromada2 : Residential {
		lootPos[] = {{-1.50049,4.32764,-1.28517},{-1.12061,-3.42383,-1.28517},{4.62012,-3.88379,2.08801},{6.20166,2.93652,2.08801}};
	};
	
	class Land_fuelstation : Industrial {
		lootPos[] = {};
	};
	
	class Land_chilovej_dum_mini : Residential {
		lootPos[] = {{5.78711,-1.60693,-2.65287},{0.793945,0.2383691,-2.65287}};
	};
	
	class Land_dum_mesto2 : Residential {
		maxRoaming = 2;
		lootPos[] = {{-2.21777,5.00586,-0.944006},{1.03662,6.85107,-0.944006},{-1.46631,-5.90137,-0.944006},{0.757324,-3.8291,-0.944006},{-2.23193,-6.66846,-4.34475},{-1.34229,-2.26807,-4.34475},{2.40283,4.83936,-4.34475},{-1.56201,5.76904,-4.34475}};
	};
	
	//Extra No loot buildings
	class Land_dum_mesto3 : Residential {};
	class Land_sara_domek_kovarna : Residential {};
	class Land_dum02 : Residential {};
	class Land_dum_mesto : Residential {};
	class Land_dum_mesto2l : Residential {};
	class Land_dum_olezlina : Residential {};
	class Land_deutshe : Residential {};
	class Land_dum_istan2_01 : Residential {};
	class Land_dum_istan2_03 : Residential {};
	class Land_dum_olez_istan1 : Residential {};
	class Land_dum_istan2_04a : Residential {};
	class Land_garaz : Residential {};
	class Land_garaz_mala : Residential {};
	class Land_budova5 : Industrial {};
	class Land_bouda3 : Industrial {};
	
	//Loot added
	class Land_sara_domek_hospoda : Residential {
		lootPos[] = {{3.89746,-3.92383,-2.55354},{-0.0595703,-4.04492,-2.49121},{-5.12012,-3.85156,-2.4221}};
	};
	class Land_afdum_mesto3 : Residential {
		lootPos[] = {{-0.3525,0.0459,-5.8567}};
	};
	class Land_dum_istan4_detaily1 : Residential {
		lootPos[] = {{2.70703,-3.2666,-4.33588},{2.68359,-8.11523,-5.92871},{-4.61719,6.00488,-7.28588},{3.71582,5.9082,-7.28588}};
	};
	class Land_dum_istan4 : Residential {
		lootPos[] = {{2.45923,-2.51367,-4.34236},{2.47852,-7.65332,-5.9352},{-3.98633,6.0459,-7.24409},{3.0813,6.1543,-7.24408}};
	};
	class Land_dum_istan4_inverse : Residential {
		lootPos[] = {{-2.46582,-2.38379,-4.33588},{-2.75195,-7.81934,-5.92871},{4.04785,6.09424,-7.28588},{-2.27246,5.96436,-7.28588}};
	};
	class Land_dum_istan2_02 : Residential {
		lootPos[] = {{-1.55566,-2.97949,-4.21303},{-2.35156,0.222656,1.52753}};
	};
	class Land_Panelak3 : Office {
		lootPos[] = {{6.10254,1.80664,12.3769},{-5.80371,2.35449,12.3769},{-0.628906,-3.7177,12.3769},{5.94629,-6.52246,12.3769}};
	};
	class Land_helfenburk_budova2 : Farm {
		lootPos[] = {{-1.22266,-3.57883,4.24561},{-0.708984,2.26758,4.3073}};
	};
	class Land_helfenburk : Farm {
		lootPos[] = {{1.4773,0.339844,-3.01591},{-2.51465,-4.08691,-3.00483},{-2.55273,-3.90234,0.275558},{-3.22461,-4.74219,4.35992},{0.148438,-0.767578,4.35992},{-1.53613,-2.83594,8.70486},{1.64844,-4.3418,12.1881},{-0.126953,0.276367,12.1881}};
	};
	
	//Original
	class Land_HouseV_1I4: Residential {
		lootPos[] = {{-0.400146,-3.87695,-2.76879},{-3.67749,-2.52002,-2.76551},{-0.472168,3.19702,-2.72021}};
	};
	class Land_kulna: Residential {
		lootPos[] = {{0.504395,0.218262,-1.11643},{-0.496582,1.93262,-1.12826}};
	};
	class Land_Ind_Workshop01_01: Industrial {
		lootPos[] = {{0.595215,-2.43115,-1.29412},{1.24365,0.463867,-1.295},{-0.663574,-0.50293,-1.29837}};
	};
	class Land_Ind_Garage01: Industrial {
		lootPos[] = {{-0.580078,-1.49707,-1.23483},{-0.834473,2.75781,-1.22563},{2.47754,-1.12891,-1.23714},{1.31934,1.63086,-1.23228}};
	};
	class Land_Ind_Workshop01_02: Industrial {
		lootPos[] = {{1.1543,-0.552246,-1.42943},{-1.18665,-0.178223,-1.42868},{-0.661621,1.104,-1.42682}};
	};
	class Land_Ind_Workshop01_04: Industrial {
		lootPos[] = {{-1.37415,4.18896,-1.53123},{0.695435,4.24561,-1.52934},{-1.06677,2.69531,-1.53062},{0.79248,-4.60742,-1.49341},{-1.84424,-6.1709,-1.44427},{-1.05566,-4.08398,-1.51927},{1.43774,-6.59424,-1.41742}};
		hangPos[] = {{-0.541748,4.01221,-2.03068}};
	};
	class Land_Ind_Workshop01_L: Industrial {
		lootPos[] = {{-3.26172,4.75439,-1.30246},{0.175781,3.91748,-1.30766},{-2.37891,2.35303,-1.30405},{4.10547,-4.10791,-1.31345},{0.727539,-2.61621,-1.31418},{2.54688,-2.17725,-1.31482},{1.52344,-3.79443,-1.31332}};
	};
	class Land_Hangar_2: Industrial {
		lootPos[] = {{10.1245,-6.4873,-2.56317},{11.9387,7.91113,-2.56317},{1.79517,7.12695,-2.56317},{-11.8948,10.5449,-2.56317},{-8.97021,-4.34766,-2.56317},{-0.562744,-7.59375,-2.56317},{5.98804,-2.6123,-2.56317}};
	};
	class Land_hut06: Residential {
		lootPos[] = {{0.328125,2.26953,-1.57786},{-0.552368,-0.0620117,-1.53837}};
	};
	class Land_stodola_old_open: Farm {
		lootPos[] = {{-3.06836,8.63184,-5.08054},{2.52588,10.5261,-5.08051},{4.76758,5.00854,-0.9935},{-2.78467,10.2368,-0.9935},{4.62598,10.4983,-0.993469},{2.09082,10.8425,2.96448},{-0.440918,10.3091,2.96445},{-2.58838,-5.91821,-5.08054},{4.11084,-10.9302,-5.08054},{-2.62842,-6.55518,-1.01584},{2.50537,-10.741,2.96445},{0.0410156,-11.0596,2.96445}};
		hangPos[] = {{-1.50537,5.34473,-5.08813},{0.494141,9.42725,-5.09016},{2.59473,-6.21191,-5.08055},{-1.74854,-2.39844,-1.14301}};
	};
	class Land_A_FuelStation_Build: Industrial {
		lootChance = 0.5;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		lootPos[] = {{-1.31958,-0.655151,-1.57448},{1.82349,0.769653,-1.57458},{1.67871,-0.918701,-1.57458},{-1.23242,1.26794,-1.57458}};
	};
	class Land_A_GeneralStore_01a: Supermarket {
		lootPos[] = {{-6.93213,1.0708,-1.20155},{-7.2959,-2.68213,-1.20155},{-3.41406,-4.39307,-1.20155},{-1.28809,-2.57861,-1.20155},{0.903809,-4.35986,-1.20155},{3.1377,-3.40771,-1.20155},{7.53418,-2.69971,-1.20154},{13.9653,-4.50342,-1.20155},{10.2617,0.109863,-1.20155},{10.5869,-3.84375,-1.20155},{7.84521,-0.137207,-1.20154},{3.57471,0.0356445,-1.20154},{-0.370605,5.17676,-1.20155},{4.77783,5.57617,-1.20155},{13.0874,4.35645,-1.20155},{12.9932,6.31689,-1.20155},{7.36328,3.00928,-1.20155},{1.93091,2.17236,-1.20154},{-3.82715,5.3335,-1.20155},{-7.55029,8.54199,-1.20154},{-4.42407,8.96631,-1.20154},{3.72705,8.36084,-1.20155},{9.84033,8.3374,-1.20155},{-2.90918,1.32031,-1.20155}};
	};
	class Land_A_GeneralStore_01: Supermarket {
		lootPos[] = {{-9.38965,-3.30371,-1.20155},{-3.77539,-3.86865,-1.20155},{1.31836,1.46631,-1.20155},{9.01367,3.8457,-1.20155},{13.3008,-1.77832,-1.20155},{9.81055,1.43213,-1.20155},{1.65039,5.14355,-1.20155},{0.753906,-3.69531,-1.20155},{13.3125,-7.65137,-1.20155},{11.168,-3.73682,-1.20155},{8.89453,-8.37402,-1.20155},{-2.04492,-7.58105,-1.20155},{-7.84766,-5.73633,-1.20155},{-8.22461,-7.32422,-1.20155},{3.79004,-5.69336,-1.20155},{-9.38379,4.46191,-1.20155},{-3.5752,4.46533,-1.20155},{-3.33789,0.612793,-1.20155},{10.5918,-9.9458,-1.21082},{0.105469,-9.6084,-1.21082},{-4.86035,-10.4209,-1.21082},{-6.80859,-1.23975,-1.20155},{1.12207,-1.58887,-1.20155}};
	};
	class Land_Farm_Cowshed_a: Farm {
		lootPos[] = {{-1.06836,-5.92163,-3.08763},{1.69043,-4.91089,-3.08763},{5.8833,-6.15381,-3.08763},{8.83984,-5.60278,-3.08763},{9.74023,-2.48657,-3.08763},{2.88428,-2.34546,-3.08763},{7.88037,2.94214,-3.08763}};
	};
	class Land_stodola_open: Farm {
		lootPos[] = {{-2.60303,5.31665,-4.12804},{-2.58154,-0.530029,-4.17349},{-0.0478516,-4.88989,-4.136},{0.983398,6.20483,-4.11143}};
		hangPos[] = {{-0.932617,-3.35962,-4.16446},{-2.01563,-0.115112,-4.19492}};
	};
	class Land_Barn_W_01: Farm {
		lootPos[] = {{4.93188,-17.0444,-2.63063},{-3.82813,-18.6699,-2.63036},{-4.46387,16.6665,-2.63651},{5.78711,18.9473,-2.6369},{3.9541,4.88428,-2.63446},{-2.99072,-4.16748,-2.63287}};
	};
	class Land_sara_stodola2: Farm {
		lootPos[] = {{-2.34375,-1.08008,-2.16877},{2.80225,0.824219,-2.16877}};
	};
	class Land_Hlidac_budka: Residential {
		lootPos[] = {{-2.3186,1.5127,-0.78363},{2.02075,0.444336,-0.78363},{-0.460938,1.75879,-0.78363}};
	};
	class Land_HouseV2_02_Interier: Residential {
		lootPos[] = {{7.23096,5.37207,-5.53067},{8.55005,0.754883,-5.53067},{5.20166,-1.54004,-5.53067},{3.34912,1.9707,-5.53067},{-3.62598,3.05371,-5.53067},{-5.4812,-0.0292969,-5.53067},{-5.83325,3.26563,-5.53067},{-5.71045,5.49414,-5.53067}};
	};
	class Land_a_stationhouse: Military {
		lootChance = 0.3;
		lootPos[] = {{-2.69922,-7.57422,-9.47058},{-0.892578,-5.7168,-9.47058},{-3.2417,-6.61914,-4.6489},{-1.35645,-8.3623,-4.6489},{-1.70801,-7.85449,-0.0437927},{-3.39502,-7.88281,-0.0437927},{-1.396,-7.79883,4.41141},{-1.37939,-5.79102,4.41141},{1.5127,1.96484,-9.47058},{18.9058,-4.06738,-9.47058}};
	};
	class Land_Mil_ControlTower: Military {
		lootChance = 0.4;
		lootPos[] = {{10.0703,3.76367,-9.62869},{3.89844,3.43457,-5.46368},{1.75195,5.68164,-5.46368},{6.66113,-0.625488,-1.0687},{2.63965,-0.191406,-1.0687},{6.72266,3.23389,-1.0687}};
	};
	class Land_sara_domek_podhradi_1: Residential {
		lootPos[] = {{2.44629,-3.04883,-2.75808},{-4.83398,-3.44531,-2.75808},{-5.2259,1.2666,-2.75808}};
	};
	class Land_Budova4_in: Military {
		maxRoaming = 3;
		lootPos[] = {{-5.79492,2.49512,-1.88723},{-1.90234,2.25684,-1.88723},{1.76758,2.41406,-1.88723},{5.89063,-2.04785,-1.88723}};
	};
	class Land_SS_hangar: Military {
		maxRoaming = 3;
		lootPos[] = {{11.7344,-17.165,-5.87253},{-11.7158,-18.9541,-5.87253},{-14.2461,23.0439,-5.87253}};
	};
	class Land_SS_hangard: Military {
		maxRoaming = 3;
		lootPos[] = {{11.7344,-17.165,-5.87253},{-11.7158,-18.9541,-5.87253},{-14.2461,23.0439,-5.87253}};
	};
	class Land_A_Pub_01: Residential {
		zombieChance = 0.2;
		lootPos[] = {{1.83398,0.393799,-5.7462},{-1.76514,0.334473,-5.74622},{-6.62207,-6.55371,-5.74622},{-4.63623,-0.100586,-5.74622},{-5.75928,-3.05029,-5.74622},{-2.08203,0.922852,-1.76122},{-4.76514,-5.89087,-1.76122},{-6.94385,-1.9375,-1.76122},{-4.05225,-0.779785,-1.76122},{1.39795,-1.73779,-1.76122},{3.13867,-2.78564,-1.76122},{3.58301,-0.591309,-1.76122},{3.03027,-4.04346,-1.76122},{1.94092,3.18799,-1.76122},{-0.0961914,6.22437,-1.76122},{5.30469,7.55957,-1.76122},{6.72559,-2.72705,-1.76122},{2.56885,-4.6001,-5.74621},{4.06738,5.41406,-5.74622},{0.753418,2.2998,-5.74622}};
	};
	class Land_HouseB_Tenement: Office {
		lootPos[] = {{5.40576,9.89551,-20.7845},{5.99023,14.1689,-20.7845},{12.9609,14.0718,-20.7845},{14.6069,8.92383,-20.7845},{-2.75635,-2.08594,-20.7845}};
	};
	class Land_A_Hospital: hospital {
		lootChance = 0.9;
		lootPos[] = {{0.807129,-1.16333,-7.33966},{-7.23389,-2.63647,-7.33966},{-16.3687,-2.40381,-7.33966},{-12.2847,-3.19604,-7.33966},{4.40674,-3.50513,-7.33966},{-3.2666,-0.925293,-7.33966},{6.85693,-2.75146,-7.33966},{11.0151,-3.95435,-7.33966},{16.8198,-4.71118,-7.33966},{-1.12793,3.78418,-7.44939},{12.7476,0.142822,3.29184},{10.2661,-1.21558,3.29184}};
	};
	class Land_Hospital: hospital {
		lootChance = 1;
		maxRoaming = 0;
		lootPos[] = {{-3.45509,3.39258,-1.44191},{-0.0585938,-1.92139,-1.44191}};
	};
	class Land_Panelak: Office {
		lootPos[] = {{-2.76904,-6.26563,0.0714226},{-2.93896,-1.3916,0.0714226},{-5.42065,-3.13184,0.0714226},{-6.81128,-6.15527,0.0714221},{-4.00879,2.53027,0.0714226},{-0.730957,-3.20117,2.77144},{3.979,-7.08936,2.77144},{2.49609,2.93701,2.77144},{6.7373,1.63281,2.77144},{6.38525,-2.3916,2.77144},{6.80615,-5.77295,2.77144},{3.75122,-0.803711,2.77144},{-0.824219,1.86914,1.32865}};
	};
	class Land_Panelak2: Office {
		lootPos[] = {{-0.729492,-3.00635,-2.62859},{-0.764648,1.36279,-1.37137},{-0.30127,3.65039,1.32864},{0.73584,-3.22217,2.71097},{-0.630859,1.84766,4.05244},{3.68921,-7.33545,5.43665},{2.26807,2.94092,5.43665},{6.7002,2.68994,5.43665},{6.87842,-1.45947,5.43665},{6.09619,-5.94824,5.43665},{4.45508,-1.64893,5.43665},{2.76367,0.445801,5.43665}};
	};
	class Land_Shed_Ind02: Industrial {
		lootPos[] = {{-2.28174,-5.67236,-4.62599},{4.54529,9.6665,-4.62599},{4.41223,2.64941,-1.27954},{-0.437866,11.6943,-1.27641},{-3.44482,12.2119,-1.27704}};
	};
	class Land_Shed_wooden: Residential {
		lootPos[] = {{1.26807,-0.361328,-1.29153},{-0.342773,1.0293,-1.29153}};
	};
	class Land_Misc_PowerStation: Industrial {
		lootPos[] = {{4.09888,4.89746,-1.26743},{4.22827,-1.19873,-1.2681}};
	};
	class Land_HouseBlock_A1_1: Residential {
		lootPos[] = {{-3.52881,0.158936,-4.74365},{-3.56152,-2.33484,-4.73106}};
	};
	class Land_Shed_W01: Industrial {
		lootPos[] = {{-1.52637,-0.246094,-1.41129}};
	};
	class Land_HouseV_1I1: Residential {
		lootPos[] = {{0.181641,-1.97314,-2.82275}};
	};
	class Land_Tovarna2: Industrial {
		lootPos[] = {{-11.6309,7.2052,-5.55933},{-12.0674,2.56909,-5.55933},{-4.89355,6.6394,-5.55933},{-3.74121,2.90393,-3.89665},{-12.8672,1.44519,-2.23135},{-12.415,8.1311,-2.23135},{-12.7236,4.11255,-2.23135},{-3.99805,8.9801,-2.23156},{-7.33105,8.44214,-2.23156},{-4.55371,5.22644,-2.23156},{-11.4746,2.92114,1.66661},{-11.0703,8.13818,1.66661},{-4.67578,7.32678,1.62174},{-2.68262,3.44763,3.4243},{-13.1953,-8.95862,3.4243},{-8.80859,-0.443481,0.401226},{-12.1328,-0.149414,0.424298},{-2.03418,6.61414,-5.55933},{0.239258,1.72278,-5.59793},{6.22461,-3.948,-4.61825},{-6.39355,-8.24353,-5.59541},{-10.8496,-6.91211,-5.56572},{-6.77637,-1.73083,-5.56019}};
	};
	class Land_rail_station_big: Office {
		lootPos[] = {{-4.97266,4.55737,-5.04438},{0.458496,4.85229,-5.04438},{2.4624,2.21851,-5.04438},{-1.32373,-2.60571,-5.04438},{-3.29443,-0.121826,-5.04438},{-1.07764,2.36646,-5.04438},{7.46045,-3.41528,-5.04438},{8.93408,3.1189,-5.04438},{-8.16357,-5.12842,-5.04438}};
	};
	class Land_Ind_Vysypka: Industrial {
		lootPos[] = {{0.486084,4.95459,-4.96861},{1.08032,-0.406738,-4.96801},{-0.0354004,-10.8208,-4.96686},{-5.07788,-16.4624,-4.96759},{-6.30298,2.92969,-4.96838},{-6.26685,26.7349,-4.9772},{1.64697,23.4038,-4.97097},{7.14575,3.92529,-4.96972},{4.63599,-12.1621,-4.96971}};
	};
	class Land_A_MunicipalOffice: Residential {
		zombieChance = 0.4;
		minRoaming = 3;
		maxRoaming = 9;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman"};
		lootChance = 0.4;
		lootPos[] = {{-4.66113,-6.27173,-18.429},{3.31641,-5.77417,-18.429},{-0.20752,-6.48682,-18.429},{-9.72412,-4.88745,-3.78903},{-9.57813,3.55615,-3.78903},{-7.16797,11.0737,-3.78903},{5.07422,11.1838,-3.78903},{9.3208,5.38623,-3.78903},{9.65332,-4.82056,-3.78903},{3.23535,-0.105957,-0.169027},{4.85205,-3.69019,-0.169027},{-0.80127,-7.89087,-0.169027},{-4.4082,-4.91772,-0.169027},{-4.90771,-2.23169,-0.169027}};
	};
	class Land_A_Office01: Office {
		lootPos[] = {{-2.50391,-2.46948,-4.528},{4.23535,-0.336914,-4.528},{4.11133,6.1123,-4.528},{0.242188,6.06299,-4.528},{4.31641,3.74023,-4.528},{5.08887,0.219727,-4.528},{11.6504,-1.5647,-4.528},{14.5811,-4.1123,-4.528},{13.8545,-0.749023,-4.528},{-7.7627,5.59082,-4.528},{1.81152,0.993408,-2.028},{4.93164,4.31982,-2.028},{1.18945,6.07031,-2.028},{2.23145,3.76563,-2.028},{-4.76367,-2.51221,-2.028},{-14.5596,-3.40723,-2.028},{-15.2705,5.92773,-2.028},{-10.9063,6.04175,0.472008},{-6.30762,3.30078,0.472006},{7.6416,6.38696,0.472001},{13.6729,6.5957,0.471999},{13.1924,-2.58691,0.471998},{3.0918,2.4375,6.20491},{-1.45703,-2.28369,6.20491},{-2.12988,4.51587,0.472005},{4.74414,-4.60156,-2.01486},{8.3457,-1.10718,-2.028},{9.94727,-3.74146,-2.028},{7.13867,-2.50732,-2.028},{12.8701,4.70923,-2.028},{15.3721,3.42383,-2.028}};
	};
	class Land_A_Office02: Office {
		lootPos[] = {{4.72266,-5.74121,-8.15108},{0.961426,-5.16943,-8.15076}};
	};
	class Land_A_BuildingWIP: Industrial {
		lootChance = 0.5;
		lootPos[] = {{-4.62573,4.52344,-6.45268},{-12.6377,0.494141,-6.49242},{-14.6023,-8.62842,-6.49961},{-16.0005,-9.80957,-6.50423},{-15.5627,-5.17725,-6.50523},{0.94458,-2.30371,-6.43043},{7.28125,3.20898,-6.44042},{9.75708,10.1138,-6.40827},{14.771,7.29688,-6.47756},{15.4504,-0.314941,-6.52979},{20.4895,2.31836,-4.52571},{17.3123,-3.1001,-2.53291},{10.707,-6.51611,-2.53255},{2.22534,-9.21582,-2.534},{-8.91943,-7.18896,-2.53313},{-16.3179,-8.35645,-2.53357},{-21.3064,-6.7915,-2.53182},{-21.6018,-1.79541,-2.53182},{-17.5808,6.14746,-2.53182},{-23.198,8.44727,-2.53182},{-17.1973,9.58594,-2.53182},{-4.99023,9.80957,-2.53182},{14.0872,7.44092,-2.52676},{10.5796,-6.84912,1.48116},{-3.19116,-2.49463,1.49403},{-13.8186,3.98975,1.49829},{-15.9502,-6.17383,1.48802},{-20.6997,-16.9761,1.50282},{-15.415,-13.3901,5.46683}};
	};
	class Land_Church_01: Church {
		lootPos[] = {{-6.92102,-0.382813,-4.21339}};
	};
	class Land_Church_03: Church {
		lootPos[] = {{5.15332,-6.96875,-14.3021},{-1.79053,-7.68018,-14.3021},{-0.0263672,-2.98438,-14.3021},{-0.00341797,2.02246,-14.3021},{5.49878,7.20508,-14.3021},{5.38892,3.4043,-14.3021},{3.23657,2.76074,-14.3021},{-1.51001,7.66309,-14.3021},{-7.6416,4.8125,-14.3021},{-6.56592,-4.59131,-14.3021},{9.552,2.22363,-13.7588},{9.93262,-3.85254,-13.7588}};
		hangPos[] = {{1.72168,-8.39771,-0.172569},{2.08838,-14.4236,-0.27536},{-13.7158,-10.4808,-0.795174},{-12.9072,-16.4105,-0.895065}};
	};
	class Land_Church_02: Church {
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Church_02a: Church {
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Church_05R: Church {
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Mil_Barracks_i: MilitarySpecial {
		lootPos[] = {{5.39038,-1.75684,-1.09824},{1.46753,-0.131836,-1.09824},{1.29395,-2.16211,-1.09824},{-1.78394,-0.168945,-1.09824},{-1.80615,-1.97656,-1.09824},{-4.77881,0.0488281,-1.09824},{-5.39258,-2.11816,-1.09824},{-5.47046,2.58105,-1.09824},{-8.32593,-0.144531,-1.09824},{-9.14966,-2.55859,-1.09824},{-1.95288,2.57715,-1.09824},{5.46362,2.57813,-1.09824}};
	};	//Qty: 2
	class Land_A_TVTower_Base: Industrial {
		lootPos[] = {{-0.982422,-1.92627,-2.21573},{-2.01782,-4.2417,-2.21918},{-0.759277,1.42139,-2.21573}};
	};
	class Land_Mil_House: Military {
		vehPos[] = {{13.439,3.25244,-5.71244,84}};
		lootPos[] = {{12.457,1.4248,-5.81439},{11.0391,4.85278,-5.81439},{13.667,4.42139,-5.81439}};
	};
	class Land_Misc_Cargo1Ao: Industrial {
		lootPos[] = {{0.48877,-1.61377,-1.09224},{0.012207,2.19263,-1.09224},{0.00976563,0.19043,-1.09224}};
	};
	class Land_Misc_Cargo1Bo: Industrial {
		lootPos[] = {{-0.322021,1.68555,-1.09222},{0.548584,-1.96289,-1.09222},{0.223389,-0.580078,-1.09222}};
	};
	class Land_Nav_Boathouse: Industrial {
		lootPos[] = {{5.27588,5.51953,3.9203},{5.49609,0.106445,4.19408},{1.68945,7.5166,3.80288},{-5.03613,6.19141,3.91093},{-5.63037,-1.27246,4.41481},{-6.98779,5.52441,3.9814},{-2.92236,9.2002,3.73014},{6.99463,7.80859,3.80663},{7.00342,-2.07422,4.31929}};
	};
	class Land_ruin_01: Residential {
		lootPos[] = {{-4.31934,-0.115234,-1.45578},{3.41309,0.270508,-1.71365},{3.00293,3.42773,-1.55765},{0.62207,-1.73779,-1.49048}};
	};
	class Land_wagon_box: Industrial {
		lootPos[] = {{0.542969,-3.89453,-0.776679},{0.47998,-0.608398,-0.776638},{0.515381,3.03857,-0.776592}};
	};
	class Land_HouseV2_04_interier: Residential {
		lootPos[] = {{7.49463,5.8374,-5.73902},{7.50989,-0.930176,-5.74176},{1.95532,4.16406,-5.73938},{2.10876,6.60645,-5.7386},{-2.30017,4.22461,-5.73936},{-5.13306,6.74365,-5.73856},{-4.74658,2.68457,-5.73985}};
	};
	class Land_HouseV2_01A: Residential {
		lootPos[] = {{-3.52881,-3.16895,-5.60346},{-1.62988,-3.25439,-5.66887}};
	};
	class Land_psi_bouda: Residential {
		maxRoaming = 4;
		lootPos[] = {{-1.77002,-1.45166,1.95942}};
	}; // Qty: 183
	class Land_KBud: Residential {
		zombieChance = 0.3;
		maxRoaming = 0;
		lootPos[] = {{-0.0170898,0.0114746,-0.66367}};
	}; // Qty: 90
	class Land_A_Castle_Bergfrit: Residential {
		lootPos[] = {{0.0185547,1.91602,-2.8364},{1.19141,-1.43848,-2.8364},{-2.36816,3.32275,-0.628571},{2.36133,3.86768,1.83972},{2.48438,-3.20557,3.85541},{-2.09473,-3.44873,6.31903},{-1.15918,3.13867,8.76691},{1.74707,1.26807,8.76691},{-0.540039,-2.35254,8.76691},{-1.62207,-4.27979,13.4801},{-2.23047,4.82471,16.856},{1.67578,-0.825195,16.8505}};
	}; // Qty: 3
	class Land_A_Castle_Stairs_A: Residential {
		lootPos[] = {{0.697998,-1.79395,0.726929},{8.3938,0.890625,0.875122},{8.17261,1.48926,7.02588}};
	}; // Qty: 3
	class Land_A_Castle_Gate: Residential {
		lootChance = 0.7;
		lootPos[] = {{0.244141,-4.48486,-3.14362},{-1.25293,2.98779,-3.07028},{4.50684,-3.31152,-2.94885},{4.55176,3.29834,-2.94858},{7.94824,1.4082,-2.91003}};
	}; // Qty: 3
	class Land_Mil_Barracks: Military {
		lootPos[] = {};
	}; // Qty: 8
	class Land_Mil_Barracks_L: Military {
		lootPos[] = {};
	}; // Qty: 5 
	class Land_Barn_W_02: Farm {
		lootPos[] = {{3.16504,5.56543,-2.31409},{3.35938,-0.152344,-2.31305},{2.53613,-5.89453,-2.30957},{-2.94629,-5.01367,-2.31006},{-2.84375,0.212891,-2.31183},{-5.63281,4.8291,-2.31363}};
	}; // Qty: 3
	class Land_sara_domek_zluty: Residential {
		maxRoaming = 1;
		lootPos[] = {{2.95703,3.00732,-2.4337},{7.06738,2.95557,-2.4337},{6.36304,-0.236328,-2.43375},{0.627686,-0.586914,-2.43387},{-0.659912,2.05371,-2.4337},{-2.77515,0.751953,-2.43372},{-5.07666,3.04492,-2.43361},{-6.17139,-2.33691,-2.43382},{-3.75293,-3.54688,-2.43382}};
	}; // Qty: 3
	class Land_HouseV_3I4: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 103
	class Land_Shed_W4: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 172
	class Land_HouseV_3I1: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 103
	class Land_HouseV_1L2: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 101
	class Land_HouseV_1T: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 90
	class Land_telek1: Industrial {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 4
	class Land_Rail_House_01: Industrial {
		lootPos[] = {{2.81152,3.61426,-1.28266},{-1.82178,3.10547,-1.28266},{0.487793,3.38867,-1.28266}};
	}; // Qty: 9
	class Land_HouseV_2I: Default {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 83
	class Land_Misc_deerstand: Military {
		zombieChance = 0.3;
		lootChance = 0.5;
		maxRoaming = 3;
		lootPos[] = {{-0.923828,-0.808594,1.08539},{0.419922,-0.237305,1.08539}};
	}; // Qty: 56

	class Camp: Military {
		maxRoaming = 1;
		lootPos[] = {{0.833252,-1.52246,-1.15955},{0.38501,0.963867,-1.15955}};
	}; // Qty: 1

	class CampEast: Military {
		maxRoaming = 1;
		lootPos[] = {{-1.05713,-1.80762,-1.31049},{0.627441,1.83398,-1.31049}};
	}; // Qty: 1
	class CampEast_EP1: Military {
		maxRoaming = 1;
		lootPos[] = {{-0.670898,0.95459,-1.31049},{1.68506,-2.43384,-1.31049},{-1.76318,-1.62646,-1.31049}};
	}; // Qty: 1

	class MASH: Hospital {
		maxRoaming = 1;
		lootChance = 0.4;
		lootPos[] = {{1.18213,-1.65039,-1.17793},{0.24707,0.799316,-1.17803}};
	}; // Qty: 1
	class MASH_EP1: MASH {};

	class UH1Wreck_DZ: Military {
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		zombieChance = 0.3;
		lootChance = 0.6;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
	};
	
	class UH60Wreck_DZ: Military {
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		zombieChance = 0.3;
		lootChance = 0.6;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
	};

	class USMC_WarfareBFieldhHospital: MASH {
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_soldier","z_soldier_heavy"};
		lootPos[] = {{-3.52246,-5.03931,1.14726},{2.36621,-4.52295,1.14786},{1.39063,-0.423096,1.14746},{1.14258,5.00952,1.1478},{3.7124,1.89795,1.14788}};
	}; // Qty: 1

	class Land_Ind_Shed_02_main: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
	}; // Qty: 283
	class HouseRoaming: Residential {
		lootChance = 0.5;
		zombieChance = 0.2;
		maxRoaming = 2;
	};
	class FarmRoaming: Farm {
		lootChance = 0.3;
		zombieChance = 0.4;
		maxRoaming = 2;
	};
	class Land_Shed_W03: HouseRoaming {}; // Qty: 206
	class Land_HouseV_1I3: HouseRoaming {}; // Qty: 117
	class Land_HouseV_1L1: HouseRoaming {}; // Qty: 97
	class Land_HouseV_1I2: HouseRoaming {};
	class Land_HouseV_2L: HouseRoaming {};
	class Land_HouseV_2T1: HouseRoaming {};
	class Land_houseV_2T2: HouseRoaming {};
	class Land_HouseV_3I2: HouseRoaming {};
	class Land_HouseV_3I3: HouseRoaming {};
	class Land_HouseBlock_A1: HouseRoaming {};
	class Land_HouseBlock_A1_2: HouseRoaming {};
	class Land_HouseBlock_A2: HouseRoaming {};
	class Land_HouseBlock_A2_1: HouseRoaming {};
	class Land_HouseBlock_A3: HouseRoaming {};
	class Land_HouseBlock_B1: HouseRoaming {};
	class Land_HouseBlock_B2: HouseRoaming {};
	class Land_HouseBlock_B3: HouseRoaming {};
	class Land_HouseBlock_B4: HouseRoaming {};
	class Land_HouseBlock_B5: HouseRoaming {};
	class Land_HouseBlock_B6: HouseRoaming {};
	class Land_HouseBlock_C1: HouseRoaming {};
	class Land_HouseBlock_C2: HouseRoaming {};
	class Land_HouseBlock_C3: HouseRoaming {};
	class Land_HouseBlock_C4: HouseRoaming {};
	class Land_HouseBlock_C5: HouseRoaming {};
	class Land_HouseV2_01B: HouseRoaming {}; // Qty: 20
	class Land_Misc_Cargo1D: HouseRoaming {}; // Qty: 29
	class Land_HouseV2_03: HouseRoaming {}; // Qty: 8
	class Land_Ind_Shed_01_end: HouseRoaming {}; // Qty: 266
	class Land_A_statue01: HouseRoaming {
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2","z_soldier","z_soldier_heavy","z_policeman"};
		minRoaming = 2;
		maxRoaming = 8;
	}; // Qty: 3
	class Land_Shed_W02: FarmRoaming {}; // Qty: 213
	//allow 
	class Grave: HouseRoaming {
		maxRoaming = 3;
	};
	class GraveCross1: HouseRoaming {	
		maxRoaming = 2;
	};
	class GraveCross2: HouseRoaming {	
		maxRoaming = 2;
	};
	class GraveCrossHelmet: Military {	
		maxRoaming = 4;
	};
};

/*
class Land_Mil_House: Default {}; // Qty: 5
*/

class CfgTownGeneratorSara {
	class EMLZ1 {
		position[] = {9084.665, 15606.263};
		size = 4250;

		class Object0 {
			Type="Land_Mil_Barracks";
			position[] = {8136.9282,17021.492,0};
			direction = 25.480267;
			SetZUp = 1;
		};
		class Object1 {
			Type="Land_Mil_Barracks_i";
			position[] = {8168.2139,17005.352,0.00034713745};
			direction = 205.83635;
			SetZUp = 1;
		};
		class Object2 {
			Type="Land_Mil_Barracks_L";
			position[] = {8153.1055,17056.426,0.00017166138};
			direction = 26.801596;
			SetZUp = 1;
		};
		class Object3 {
			Type="Land_Mil_Barracks_i";
			position[] = {8119.8521,16981.25,0};
			direction = 385.50812;
			SetZUp = 1;
		};
		class Object4 {
			Type="Land_Mil_Barracks";
			position[] = {8128.2817,17000.977,0};
			direction = 25.676624;
			SetZUp = 1;
		};
		class Object5 {
			Type="Land_Mil_Barracks";
			position[] = {8150.4414,16966.789,0.033765372};
			direction = 205.51234;
			SetZUp = 1;
		};
		class Object6 {
			Type="Land_Mil_Barracks";
			position[] = {8159.6616,16986.334,0};
			direction = 205.36;
			SetZUp = 1;
		};
		class Object7 {
			Type="Land_Mil_Barracks";
			position[] = {8145.5571,17039.877,0};
			direction = 25.595608;
			SetZUp = 1;
		};
		class Object8 {
			Type="Land_Ind_Workshop01_L";
			position[] = {8203.2783,16998.881,0};
			direction = 207.50302;
			SetZUp = 1;
		};
		class Object9 {
			Type="Land_Ind_Workshop01_01";
			position[] = {8177.0244,16941.336,0};
			direction = 27.142403;
			SetZUp = 1;
		};
		class Object10 {
			Type="Land_Hlidac_budka";
			position[] = {8197.2998,17055.521,0};
			direction = -67.749222;
			SetZUp = 1;
		};
		class Object11 {
			Type="Land_Church_05R";
			position[] = {11394.084,14391.469,0.071709715};
			direction = 166.13477;
			SetZUp = 1;
		};
		class Object12 {
			Type="Land_dum_mesto2";
			position[] = {7756.0215,15795.915,0.15107772};
			direction = 89.105179;
			SetZUp = 1;
		};
		class Object13 {
			Type="Land_dum_mesto2";
			position[] = {7731.9771,15907.037,0.24343386};
			direction = 86.993599;
			SetZUp = 1;
		};
		class Object14 {
			Type="Land_dum_mesto2";
			position[] = {7578.7363,15651.114,0.19101964};
			direction = 73.088074;
			SetZUp = 1;
		};
		class Object15 {
			Type="Land_A_Pub_01";
			position[] = {12545.523,13417.728,0};
			direction = -9.4623184;
			SetZUp = 1;
		};
	};
	class EMLZ2 {
		position[] = {13508.527, 16287.334};
		size = 3000;

		class Object0 {
			Type="Land_Mil_Barracks_i";
			position[] = {12097.747,17527.721,0};
			direction = -91.046577;
			SetZUp = 1;
		};
		class Object1 {
			Type="Land_Mil_Barracks";
			position[] = {12128.015,17572.066,0};
			direction = 90.346191;
			SetZUp = 1;
		};
		class Object2 {
			Type="Land_A_Pub_01";
			position[] = {12599.477,15024.15,0};
			direction = -0.22539687;
			SetZUp = 1;
		};
		class Object3 {
			Type="Land_a_stationhouse";
			position[] = {12240.402,17655.639,0.085686944};
			direction = 0.24140808;
			SetZUp = 1;
		};
		class Object4 {
			Type="Land_Misc_deerstand";
			position[] = {12135.249,17607.545,0};
			direction = -0.94769245;
			SetZUp = 1;
		};
		class Object5 {
			Type="Land_Mil_Barracks";
			position[] = {12170.726,17527.301,-0.00015830994};
			direction = 90.346191;
			SetZUp = 1;
		};
		class Object6 {
			Type="Land_Mil_Barracks";
			position[] = {12114.288,17526.564,0.0001411438};
			direction = 90.346191;
			SetZUp = 1;
		};
		class Object7 {
			Type="Land_Mil_Barracks";
			position[] = {12130.278,17526.961,0};
			direction = 90.346191;
			SetZUp = 1;
		};
		class Object8 {
			Type="Land_Mil_Barracks";
			position[] = {12128.022,17550.482,0};
			direction = 90.346191;
			SetZUp = 1;
		};
		class Object9 {
			Type="Land_Mil_Barracks";
			position[] = {12168.463,17574.844,0};
			direction = 90.346191;
			SetZUp = 1;
		};
		class Object10 {
			Type="Land_Mil_Barracks";
			position[] = {12184.073,17574.959,0};
			direction = 90.346191;
			SetZUp = 1;
		};
		class Object11 {
			Type="Land_Mil_Barracks";
			position[] = {12184.242,17551.633,0.00012588501};
			direction = 90.346191;
			SetZUp = 1;
		};
		class Object12 {
			Type="Land_Mil_Barracks_i";
			position[] = {12168.843,17550.996,0.00017166138};
			direction = -91.046577;
			SetZUp = 1;
		};
		class Object13 {
			Type="Land_Mil_Barracks_L";
			position[] = {12148.973,17523.09,0.00017547607};
			direction = -179.67464;
			SetZUp = 1;
		};
		class Object14 {
			Type="Land_dum_mesto_in";
			position[] = {12412.932,17430.512,0};
			direction = -539.61981;
			SetZUp = 1;
		};
		class Object15 {
			Type="Land_Misc_deerstand";
			position[] = {12146.906,17607.535,0};
			direction = -0.94769245;
			SetZUp = 1;
		};
		class Object16 {
			Type="Land_Mil_Barracks";
			position[] = {12176.559,17695.16,0};
			direction = 0.55706161;
			SetZUp = 1;
		};
		class Object17 {
			Type="Land_Mil_Barracks";
			position[] = {12176.736,17716.307,0};
			direction = 0.55706161;
			SetZUp = 1;
		};
		class Object18 {
			Type="Land_Mil_Barracks";
			position[] = {12177.082,17738.258,0};
			direction = 0.55706161;
			SetZUp = 1;
		};
		class Object19 {
			Type="Land_Mil_Barracks";
			position[] = {12177.109,17758.725,0};
			direction = 0.55706161;
			SetZUp = 1;
		};
		class Object20 {
			Type="Land_Mil_Barracks";
			position[] = {12212.731,17694.158,0};
			direction = 0.55706161;
			SetZUp = 1;
		};
		class Object21 {
			Type="Land_Mil_Barracks";
			position[] = {12249.67,17716.127,0};
			direction = 0.55706161;
			SetZUp = 1;
		};
		class Object22 {
			Type="Land_Mil_Barracks";
			position[] = {12249.865,17779.955,0.000207901};
			direction = 0.55706161;
			SetZUp = 1;
		};
		class Object23 {
			Type="Land_Mil_Barracks";
			position[] = {12216.349,17780.246,0};
			direction = 0.55706161;
			SetZUp = 1;
		};
		class Object24 {
			Type="Land_Mil_Barracks";
			position[] = {12251.694,17738.24,0};
			direction = 0.55706161;
			SetZUp = 1;
		};
		class Object25 {
			Type="MASH";
			position[] = {12219.451,17744.943,0};
			direction = -87.940636;
			SetZUp = 1;
		};
		class Object26 {
			Type="Land_Mil_Barracks";
			position[] = {12105.382,17761.873,0};
			direction = 0.55706161;
			SetZUp = 1;
		};
		class Object27 {
			Type="Land_Mil_Barracks";
			position[] = {12105.048,17743.348,0.00011825562};
			direction = 0.55706161;
			SetZUp = 1;
		};
		class Object28 {
			Type="Land_Mil_Barracks";
			position[] = {12112.417,17673.002,0};
			direction = 0.55706161;
			SetZUp = 1;
		};
		class Object29 {
			Type="Land_Mil_Barracks_L";
			position[] = {12066.741,17671.254,-0.0032323832};
			direction = 0.12843798;
			SetZUp = 1;
		};
		class Object30 {
			Type="Land_Shed_Ind02";
			position[] = {12522.335,17701.549,0};
			direction = 89.30056;
			SetZUp = 1;
		};
		class Object31 {
			Type="Land_Shed_Ind02";
			position[] = {12523.563,17739.436,0.013197624};
			direction = 91.920059;
			SetZUp = 1;
		};
		class Object32 {
			Type="Land_Ind_Workshop01_04";
			position[] = {11881.938,15369.988,0};
			direction = -78.659843;
			SetZUp = 1;
		};
		class Object33 {
			Type="Land_Ind_Workshop01_02";
			position[] = {11871.147,15433.208,0};
			direction = -77.484657;
			SetZUp = 1;
		};
		class Object34 {
			Type="Land_Mil_Barracks";
			position[] = {12153.366,17551.842,0};
			direction = 90.346191;
			SetZUp = 1;
		};
		class Object35 {
			Type="Land_Mil_Barracks";
			position[] = {11900.317,15406.305,-0.00010681152};
			direction = 99.815247;
			SetZUp = 1;
		};
		class Object36 {
			Type="Land_Mil_Barracks_i";
			position[] = {11886.834,15408.376,0};
			direction = 460.09265;
			SetZUp = 1;
		};
		class Object37 {
			Type="Land_Mil_Barracks";
			position[] = {11873.992,15411.84,0};
			direction = 100.17564;
			SetZUp = 1;
		};
		class Object38 {
			Type="Land_Mil_Barracks_L";
			position[] = {11882.297,15454.726,0};
			direction = -168.94826;
			SetZUp = 1;
		};
		class Object39 {
			Type="Land_Mil_Barracks_L";
			position[] = {11850.465,15375.853,0};
			direction = 10.883802;
			SetZUp = 1;
		};
		class Object40 {
			Type="Land_Mil_Barracks";
			position[] = {11954.109,15351.448,0.00021362305};
			direction = 190.63617;
			SetZUp = 1;
		};
		class Object41 {
			Type="Land_Mil_Barracks_i";
			position[] = {11950.703,15335.005,0.00012207031};
			direction = 550.55267;
			SetZUp = 1;
		};
		class Object42 {
			Type="Land_Mil_Barracks";
			position[] = {11947.878,15317.584,0.00010681152};
			direction = 190.27579;
			SetZUp = 1;
		};
		class Object43 {
			Type="Land_Ind_Workshop01_04";
			position[] = {11956.812,15374.776,0};
			direction = -78.659843;
			SetZUp = 1;
		};
		class Object44 {
			Type="Land_Ind_Workshop01_01";
			position[] = {12643.664,15012.067,0};
			direction = 23.152876;
			SetZUp = 1;
		};
		class Object45 {
			Type="Land_Ind_Workshop01_L";
			position[] = {12373.518,15002.837,0.0075658699};
			direction = 180.52242;
			SetZUp = 1;
		};
		class Object46 {
			Type="Land_Ind_Workshop01_02";
			position[] = {12354.326,14980.562,0.21815737};
			direction = -90.072746;
			SetZUp = 1;
		};
		class Object47 {
			Type="Land_A_GeneralStore_01";
			position[] = {12505.105,14898.904,-0.24872524};
			direction = 3.1111417;
			SetZUp = 1;
		};
		class Object48 {
			Type="Land_HouseV_1I4";
			position[] = {12392.339,14874.766,0.41723973};
			direction = 119.51625;
			SetZUp = 1;
		};
		class Object49 {
			Type="Land_Barn_W_02";
			position[] = {12267.593,14943.355,0.00019836426};
			direction = 0.65209574;
			SetZUp = 1;
		};
		class Object50 {
			Type="Land_Barn_W_01";
			position[] = {12301.173,14919.947,0};
			direction = -0.044560127;
			SetZUp = 1;
		};
		class Object51 {
			Type="Land_a_stationhouse";
			position[] = {12754.386,15012.405,0.18223022};
			direction = -9.2709045;
			SetZUp = 1;
		};
		class Object52 {
			Type="Land_Ind_Workshop01_04";
			position[] = {13990.789,16442.723,0};
			direction = -178.7836;
			SetZUp = 1;
		};
		class Object53 {
			Type="Land_Ind_Workshop01_01";
			position[] = {14007.982,16417.313,0};
			direction = -170.46751;
			SetZUp = 1;
		};
		class Object54 {
			Type="Land_A_FuelStation_Build";
			position[] = {12572.716,15151.308,0};
			direction = -51.519573;
			SetZUp = 1;
		};
		class Object55 {
			Type="Land_Ind_TankSmall2";
			position[] = {12569.632,15148.051,-0.085158229};
			direction = -141.53276;
			SetZUp = 1;
		};
		class Object56 {
			Type="Land_A_FuelStation_Feed";
			position[] = {12577.834,15151.841,-0.054911073};
			direction = -230.25858;
			SetZUp = 1;
		};
		class Object57 {
			Type="Land_Ind_Workshop01_02";
			position[] = {12730.648,15095.472,0.073698193};
			direction = -150.61859;
			SetZUp = 1;
		};
	};
	class EMLZ3 {
		position[] = {17841.162, 13019.341};
		size = 2750;

		class Object0 {
			Type="Land_A_GeneralStore_01a";
			position[] = {17374.699,14197.158,0};
			direction = -1.1227432;
			SetZUp = 1;
		};
		class Object1 {
			Type="Land_A_Hospital";
			position[] = {17105.551,14340.854,0};
			direction = -8.8722639;
			SetZUp = 1;
		};
		class Object2 {
			Type="Land_Mil_Barracks_i";
			position[] = {17800.656,12404.806,0};
			direction = -179.72816;
			SetZUp = 1;
		};
		class Object3 {
			Type="Land_Mil_Barracks";
			position[] = {17776.217,12386.715,0};
			direction = 0.55706161;
			SetZUp = 1;
		};
		class Object4 {
			Type="Land_Mil_Barracks";
			position[] = {17799.146,12422.35,-0.00012207031};
			direction = 180.04794;
			SetZUp = 1;
		};
		class Object5 {
			Type="Land_Mil_Barracks";
			position[] = {17800.506,12368.888,0};
			direction = 180.51045;
			SetZUp = 1;
		};
		class Object6 {
			Type="Land_Mil_Barracks";
			position[] = {17800.926,12386.839,0};
			direction = 180.528;
			SetZUp = 1;
		};
		class Object7 {
			Type="Land_Mil_Barracks";
			position[] = {17776.561,12421.918,0};
			direction = 0.59525597;
			SetZUp = 1;
		};
		class Object8 {
			Type="Land_Mil_Barracks";
			position[] = {17823.809,12405.631,0};
			direction = 180.05901;
			SetZUp = 1;
		};
		class Object9 {
			Type="Land_Mil_Barracks";
			position[] = {17823.139,12387.69,0};
			direction = 180.74718;
			SetZUp = 1;
		};
		class Object10 {
			Type="Land_Mil_Barracks";
			position[] = {17823.221,12368.883,0};
			direction = 179.87558;
			SetZUp = 1;
		};
		class Object11 {
			Type="Land_Mil_ControlTower";
			position[] = {19301.592,13900.779,0};
			direction = -138.96796;
			SetZUp = 1;
		};
		class Object12 {
			Type="Land_Mil_Barracks";
			position[] = {19303.412,13982.679,0.00011539459};
			direction = 131.23599;
			SetZUp = 1;
		};
		class Object13 {
			Type="Land_Mil_Barracks_i";
			position[] = {19290.621,13995.508,0};
			direction = -227.98196;
			SetZUp = 1;
		};
		class Object14 {
			Type="Land_Mil_Barracks";
			position[] = {19323.928,14006.171,-0.00010490417};
			direction = 131.23599;
			SetZUp = 1;
		};
		class Object15 {
			Type="Land_Mil_Barracks";
			position[] = {19307.992,14019.728,0.00017356873};
			direction = 131.23599;
			SetZUp = 1;
		};
		class Object16 {
			Type="Land_Mil_Barracks";
			position[] = {19292.5,14033.305,-0.00012779236};
			direction = 131.23599;
			SetZUp = 1;
		};
		class Object17 {
			Type="Land_Mil_Barracks";
			position[] = {19256.492,14023.703,0};
			direction = 131.23599;
			SetZUp = 1;
		};
		class Object18 {
			Type="Land_Mil_Barracks_i";
			position[] = {19159.248,13950.89,-0.027695656};
			direction = -408.3688;
			SetZUp = 1;
		};
		class Object19 {
			Type="Land_Mil_Barracks";
			position[] = {19227.32,14051.441,-0.020446777};
			direction = 131.23599;
			SetZUp = 1;
		};
		class Object20 {
			Type="Land_Mil_Barracks";
			position[] = {19277.008,14047.194,0.058236122};
			direction = 131.23599;
			SetZUp = 1;
		};
		class Object21 {
			Type="Land_Mil_Barracks";
			position[] = {19246.428,14072.944,-0.42259026};
			direction = 131.23599;
			SetZUp = 1;
		};
		class Object22 {
			Type="Land_Mil_Barracks_L";
			position[] = {19240.336,14036.858,0};
			direction = 43.097996;
			SetZUp = 1;
		};
		class Object23 {
			Type="Land_Mil_Barracks_L";
			position[] = {19270.477,14008.193,0.00011253357};
			direction = 43.097996;
			SetZUp = 1;
		};
		class Object24 {
			Type="Land_Mil_Barracks";
			position[] = {19260.592,14061.34,0};
			direction = 131.23599;
			SetZUp = 1;
		};
		class Object25 {
			Type="Land_Ind_Workshop01_04";
			position[] = {19236.166,13599.637,0};
			direction = -178.7836;
			SetZUp = 1;
		};
		class Object26 {
			Type="Land_stodola_open";
			position[] = {17762.678,12142.111,0.21676299};
			direction = -197.38129;
			SetZUp = 1;
		};
	};
	class EMLZ4 {
		position[] = {16090.729, 9587.1191};
		size = 2000;

		class Object0 {
			Type="Land_Mil_Barracks";
			position[] = {17544.205,9566.8457,0};
			direction = 449.38632;
			SetZUp = 1;
		};
		class Object1 {
			Type="Land_Mil_Barracks";
			position[] = {17566.342,9568.123,0};
			direction = 450.23093;
			SetZUp = 1;
		};
		class Object2 {
			Type="Land_Mil_Barracks";
			position[] = {17596.912,9567.7393,0};
			direction = 450.26733;
			SetZUp = 1;
		};
		class Object3 {
			Type="Land_Mil_Barracks_i";
			position[] = {17582.838,9566.7451,0};
			direction = -269.85599;
			SetZUp = 1;
		};
		class Object4 {
			Type="Land_A_Pub_01";
			position[] = {15607.009,8834.6787,0};
			direction = 88.496819;
			SetZUp = 1;
		};
		class Object5 {
			Type="Land_Barn_W_02";
			position[] = {15543.469,9102.4639,-0.25422546};
			direction = 76.286629;
			SetZUp = 1;
		};
		class Object6 {
			Type="Land_Barn_W_01";
			position[] = {15504.23,8880.8193,0.069094047};
			direction = -41.173008;
			SetZUp = 1;
		};
		class Object7 {
			Type="Land_Barn_W_02";
			position[] = {14252.411,9380.9033,-0.27727792};
			direction = 43.790421;
			SetZUp = 1;
		};
		class Object8 {
			Type="Land_dum_mesto2";
			position[] = {14389.838,9440.582,0.39492849};
			direction = 84.818588;
			SetZUp = 1;
		};
	};
	class EMLZ5 {
		position[] = {12505.881, 10952.824};
		size = 2000;

		class Object0 {
			Type="Land_Ind_Workshop01_01";
			position[] = {13751.567,11507.75,0.00010299683};
			direction = 181.80162;
			SetZUp = 1;
		};
		class Object1 {
			Type="Land_Ind_Workshop01_L";
			position[] = {13780.049,11542.577,0};
			direction = 180.52242;
			SetZUp = 1;
		};
		class Object2 {
			Type="Land_A_FuelStation_Build";
			position[] = {13501.751,11502.97,-0.011188855};
			direction = 112.26083;
			SetZUp = 1;
		};
		class Object3 {
			Type="Land_A_FuelStation_Shed";
			position[] = {13492.592,11520.933,0};
			direction = 21.719521;
			SetZUp = 1;
		};
		class Object4 {
			Type="Land_Ind_TankSmall2";
			position[] = {13504.441,11506.611,0};
			direction = 22.400288;
			SetZUp = 1;
		};
		class Object5 {
			Type="Land_A_FuelStation_Feed";
			position[] = {13492.443,11520.922,0.24333251};
			direction = -67.042542;
			SetZUp = 1;
		};
		class Object6 {
			Type="Land_A_FuelStation_Feed";
			position[] = {13486.119,11523.667,0.46025801};
			direction = -66.478195;
			SetZUp = 1;
		};
		class Object7 {
			Type="Land_A_FuelStation_Feed";
			position[] = {13499.003,11518.379,0.044364944};
			direction = -66.478195;
			SetZUp = 1;
		};
		class Object8 {
			Type="Land_Mil_Barracks";
			position[] = {12944.033,11302.412,0};
			direction = 321.08997;
			SetZUp = 1;
		};
		class Object9 {
			Type="Land_Mil_Barracks";
			position[] = {12953.717,11288.011,0};
			direction = 320.11044;
			SetZUp = 1;
		};
		class Object10 {
			Type="Land_Mil_Barracks";
			position[] = {12980.921,11328.579,0};
			direction = 500.07446;
			SetZUp = 1;
		};
		class Object11 {
			Type="Land_Mil_Barracks";
			position[] = {14587.67,10622.658,0.2360439};
			direction = 129.64299;
			SetZUp = 1;
		};
		class Object12 {
			Type="Land_Mil_Barracks";
			position[] = {14601.24,10614.478,0};
			direction = 129.75981;
			SetZUp = 1;
		};
		class Object13 {
			Type="Land_Mil_Barracks";
			position[] = {14613.225,10604.556,0};
			direction = 130.07422;
			SetZUp = 1;
		};
		class Object14 {
			Type="Land_Mil_Barracks";
			position[] = {14625.083,10594.835,-0.00011444092};
			direction = 129.80251;
			SetZUp = 1;
		};
		class Object15 {
			Type="Land_dum_mesto2";
			position[] = {14514.636,10794.045,-0.041812684};
			direction = 127.60325;
			SetZUp = 1;
		};
		class Object16 {
			Type="Land_A_Pub_01";
			position[] = {14446.903,10867.791,-0.011516571};
			direction = -149.56293;
			SetZUp = 1;
		};
	};
	class EMLZ6 {
		position[] = {9737.9395, 7844.0952};
		size = 1200;

		class Object0 {
			Type="Land_A_Pub_01";
			position[] = {14111.281,12495.537,0};
			direction = -91.763176;
			SetZUp = 1;
		};
		class Object1 {
			Type="Land_Shed_Ind02";
			position[] = {13698.369,12626.954,0.19447209};
			direction = 177.29395;
			SetZUp = 1;
		};
		class Object2 {
			Type="Land_Shed_Ind02";
			position[] = {13718.194,12628.456,0.57550657};
			direction = 176.95952;
			SetZUp = 1;
		};
		class Object3 {
			Type="Land_dum_mesto_in";
			position[] = {13886.564,12480.166,-0.020936389};
			direction = -713.91479;
			SetZUp = 1;
		};
		class Object4 {
			Type="Land_dum_mesto2";
			position[] = {14073.06,12473.59,0.0033320296};
			direction = 111.188;
			SetZUp = 1;
		};
		class Object5 {
			Type="Land_dum_mesto2";
			position[] = {14052.706,12466.291,0.0033244151};
			direction = 112.50559;
			SetZUp = 1;
		};
		class Object6 {
			Type="Land_dum_mesto2";
			position[] = {14032.231,12462.116,0.16329072};
			direction = 111.09888;
			SetZUp = 1;
		};
		class Object7 {
			Type="Land_dum_mesto2";
			position[] = {14095.471,12479.883,0.0033740061};
			direction = 111.09888;
			SetZUp = 1;
		};
		class Object8 {
			Type="Land_A_GeneralStore_01a";
			position[] = {14383.14,12589.358,0.084598169};
			direction = 51.201694;
			SetZUp = 1;
		};
		class Object9 {
			Type="Land_a_stationhouse";
			position[] = {14451.107,12585.376,0.055913057};
			direction = -109.08717;
			SetZUp = 1;
		};
		class Object10 {
			Type="Land_rail_station_big";
			position[] = {14107.46,12537.889,0};
			direction = -89.815132;
			SetZUp = 1;
		};
		class Object11 {
			Type="Land_dum_mesto2";
			position[] = {14160.312,12534.815,0.00016021729};
			direction = 90.176277;
			SetZUp = 1;
		};
		class Object12 {
			Type="Land_dum_mesto_in";
			position[] = {14153.38,12500.779,0.0058159484};
			direction = 344.83966;
			SetZUp = 1;
		};
		class Object13 {
			Type="MASH";
			position[] = {14277.733,12731.597,0};
			direction = -101.5187;
			SetZUp = 1;
		};
		class Object14 {
			Type="MASH";
			position[] = {14278.93,12725.351,0};
			direction = -102.18977;
			SetZUp = 1;
		};
		class Object15 {
			Type="MASH";
			position[] = {14283.073,12706.212,0};
			direction = -102.56635;
			SetZUp = 1;
		};
		class Object16 {
			Type="CampEast";
			position[] = {14254.024,12729.128,0};
			direction = 259.13318;
			SetZUp = 1;
		};
		class Object17 {
			Type="CampEast";
			position[] = {14260.703,12698.821,0};
			direction = -100.77284;
			SetZUp = 1;
		};
		class Object18 {
			Type="MASH";
			position[] = {14260.153,12707.241,0};
			direction = 78.151505;
			SetZUp = 1;
		};
		class Object19 {
			Type="MASH";
			position[] = {14258.528,12713.731,0};
			direction = 78.151505;
			SetZUp = 1;
		};
		class Object20 {
			Type="MASH";
			position[] = {14257.203,12719.968,0};
			direction = 78.151505;
			SetZUp = 1;
		};
		class Object21 {
			Type="Land_A_Pub_01";
			position[] = {14247.062,12663.457,0};
			direction = -261.4249;
			SetZUp = 1;
		};
		class Object22 {
			Type="Land_Ind_Workshop01_L";
			position[] = {13936.005,12611.745,0};
			direction = 232.67963;
			SetZUp = 1;
		};
		class Object23 {
			Type="Land_Ind_Workshop01_01";
			position[] = {13923.075,12686.629,0.04991281};
			direction = -133.58383;
			SetZUp = 1;
		};
		class Object24 {
			Type="Land_A_BuildingWIP";
			position[] = {13812.506,12853.797,0.37321466};
			direction = -247.28619;
			SetZUp = 1;
		};
		class Object25 {
			Type="Land_A_Office01";
			position[] = {14028.728,12605.14,0};
			direction = 97.814407;
			SetZUp = 1;
		};
		class Object26 {
			Type="Land_A_Hospital";
			position[] = {14088.811,12448.2,0};
			direction = 158.0571;
			SetZUp = 1;
		};
		class Object27 {
			Type="Land_dum_mesto2";
			position[] = {14326.09,12454.547,0.0002746582};
			direction = 180.20685;
			SetZUp = 1;
		};
		class Object28 {
			Type="Land_A_Pub_01";
			position[] = {14250.663,12637.759,0};
			direction = -169.84204;
			SetZUp = 1;
		};
	};
	class EMLZ7 {
		position[] = {13373.855, 8715.9863};
		size = 1500;

		class Object0 {
			Type="Land_A_FuelStation_Build";
			position[] = {13761.046,9363.1738,0.091485769};
			direction = 129.7719;
			SetZUp = 1;
		};
		class Object1 {
			Type="Land_A_FuelStation_Shed";
			position[] = {13758.384,9381.1289,-0.16229248};
			direction = 39.23053;
			SetZUp = 1;
		};
		class Object2 {
			Type="Land_Ind_TankSmall2";
			position[] = {13764.708,9365.832,0.033283927};
			direction = 39.911297;
			SetZUp = 1;
		};
		class Object3 {
			Type="Land_A_FuelStation_Feed";
			position[] = {13758.242,9381.1592,0.07201004};
			direction = -49.531528;
			SetZUp = 1;
		};
		class Object4 {
			Type="Land_A_FuelStation_Feed";
			position[] = {13753.038,9385.6846,-0.032577515};
			direction = -48.967182;
			SetZUp = 1;
		};
		class Object5 {
			Type="Land_A_FuelStation_Feed";
			position[] = {13763.732,9376.7627,0.21588707};
			direction = -48.967182;
			SetZUp = 1;
		};
		class Object6 {
			Type="Land_A_GeneralStore_01";
			position[] = {13520.994,9204.7188,0};
			direction = -136.02129;
			SetZUp = 1;
		};
		class Object7 {
			Type="Land_A_Pub_01";
			position[] = {13544.621,9208.8955,0};
			direction = -15.523249;
			SetZUp = 1;
		};
		class Object8 {
			Type="Land_A_Pub_01";
			position[] = {13499.382,8993.8311,0};
			direction = 140.1241;
			SetZUp = 1;
		};
		class Object9 {
			Type="Land_dum_mesto2";
			position[] = {13410.084,9055.4961,0};
			direction = 139.88057;
			SetZUp = 1;
		};
		class Object10 {
			Type="Land_dum_mesto2";
			position[] = {13485.535,8892.9492,0};
			direction = 230.83627;
			SetZUp = 1;
		};
		class Object11 {
			Type="Land_dum_mesto_in";
			position[] = {13696.521,8972.9268,0};
			direction = 526.40009;
			SetZUp = 1;
		};
		class Object12 {
			Type="Land_Ind_Workshop01_L";
			position[] = {13639.029,9192.3057,0.00013923645};
			direction = 38.940308;
			SetZUp = 1;
		};
		class Object13 {
			Type="Land_Ind_Workshop01_01";
			position[] = {13622.713,9144.2354,0.00012207031};
			direction = 81.517326;
			SetZUp = 1;
		};
		class Object14 {
			Type="Land_Ind_Workshop01_01";
			position[] = {13599.793,9074.0254,0.0001411438};
			direction = 138.82314;
			SetZUp = 1;
		};
		class Object15 {
			Type="Land_Ind_Workshop01_04";
			position[] = {13583.15,9123.3457,0};
			direction = -222.46309;
			SetZUp = 1;
		};
		class Object16 {
			Type="Land_ladderEP1";
			position[] = {13176.354,8909.0195,-0.46033561};
			direction = 179.91095;
			SetZUp = 1;
		};
		class Object17 {
			Type="Land_ladderEP1";
			position[] = {13146.497,8984.6514,-0.13116965};
			direction = 178.64415;
			SetZUp = 1;
		};
		class Object18 {
			Type="Land_ladderEP1";
			position[] = {12962.374,8752.0498,0};
			direction = 30.402079;
			SetZUp = 1;
		};
		class Object19 {
			Type="Land_A_GeneralStore_01";
			position[] = {12990.525,8503.3477,-0.48612612};
			direction = 89.114182;
			SetZUp = 1;
		};
		class Object20 {
			Type="Land_Mil_ControlTower";
			position[] = {12516.867,8516.2188,0};
			direction = -2.9619973;
			SetZUp = 1;
		};
		class Object21 {
			Type="Land_A_Hospital";
			position[] = {12728.689,8089.4097,0.00019454956};
			direction = 290.91562;
			SetZUp = 1;
		};
		class Object22 {
			Type="Land_Ind_Workshop01_L";
			position[] = {12753.248,8075.9043,0};
			direction = 22.619411;
			SetZUp = 1;
		};
		class Object23 {
			Type="Land_Ind_Workshop01_01";
			position[] = {12769.159,8072.3403,0};
			direction = -429.39523;
			SetZUp = 1;
		};
		class Object24 {
			Type="Land_ladderEP1";
			position[] = {12970.866,8870.1895,-0.49671781};
			direction = 541.30365;
			SetZUp = 1;
		};
	};
	class WMLZ1 {
		position[] = {7483.5483, 8740.6846};
		size = 2750;

		class Object0 {
			Type="Land_Ind_Workshop01_01";
			position[] = {8113.8984,9312.7178,0};
			direction = -90.368271;
			SetZUp = 1;
		};
		class Object1 {
			Type="Land_Ind_Workshop01_01";
			position[] = {8055.6089,9320.1982,0};
			direction = -4.136138;
			SetZUp = 1;
		};
		class Object2 {
			Type="Land_Ind_Workshop01_01";
			position[] = {8197.1445,9561.4697,0};
			direction = 37.739014;
			SetZUp = 1;
		};
		class Object3 {
			Type="Land_Ind_Workshop01_01";
			position[] = {8238.4873,9510.1123,0.00010585785};
			direction = -39.469994;
			SetZUp = 1;
		};
		class Object4 {
			Type="Land_Ind_Workshop01_01";
			position[] = {8464.4512,9445.4727,0};
			direction = 31.664022;
			SetZUp = 1;
		};
	};
	class WMLZ2 {
		position[] = {10256.928, 10019.207};
		size = 1850;

		class Object0 {
			Type="Land_Mil_ControlTower";
			position[] = {9903.9619,10080.465,0};
			direction = -0.46591365;
			SetZUp = 1;
		};
		class Object1 {
			Type="Land_Ind_Workshop01_L";
			position[] = {9463.9111,9911.6846,0};
			direction = 90.43174;
			SetZUp = 1;
		};
		class Object2 {
			Type="Land_Ind_Workshop01_01";
			position[] = {9461.2178,9838.8652,0.00012207031};
			direction = 92.108932;
			SetZUp = 1;
		};
		class Object3 {
			Type="Land_Ind_Workshop01_L";
			position[] = {9552.2695,9885.9229,0};
			direction = 90.43174;
			SetZUp = 1;
		};
		class Object4 {
			Type="Land_Shed_Ind02";
			position[] = {9553.4814,9866.9473,0};
			direction = 89.769318;
			SetZUp = 1;
		};
		class Object5 {
			Type="Land_Shed_Ind02";
			position[] = {9553.4834,9850.374,0};
			direction = 90.753822;
			SetZUp = 1;
		};
		class Object6 {
			Type="Land_A_Hospital";
			position[] = {10630.088,9324.2734,0};
			direction = 359.89655;
			SetZUp = 1;
		};
		class Object7 {
			Type="Land_A_GeneralStore_01";
			position[] = {10753.238,9326.7861,0.070243925};
			direction = -563.96234;
			SetZUp = 1;
		};
		class Object8 {
			Type="Land_Ind_Workshop01_L";
			position[] = {10141.276,9372.0039,0.00018310547};
			direction = 0.56901193;
			SetZUp = 1;
		};
		class Object9 {
			Type="Land_Ind_Workshop01_01";
			position[] = {10756.292,9068.9951,0};
			direction = -69.280823;
			SetZUp = 1;
		};
		class Object10 {
			Type="Land_Ind_Workshop01_01";
			position[] = {10614.809,9743.3994,0};
			direction = -137.04869;
			SetZUp = 1;
		};
		class Object11 {
			Type="Land_Ind_Workshop01_01";
			position[] = {10495.926,9690.1719,0};
			direction = -184.29146;
			SetZUp = 1;
		};
		class Object12 {
			Type="Land_Ind_Workshop01_01";
			position[] = {10289.925,9508.9063,0};
			direction = -266.4577;
			SetZUp = 1;
		};
		class Object13 {
			Type="Land_Ind_Workshop01_01";
			position[] = {10378.771,9442.6416,0};
			direction = -270.23721;
			SetZUp = 1;
		};
		class Object14 {
			Type="Land_Ind_Workshop01_01";
			position[] = {10386.929,9499.6748,0};
			direction = -179.45338;
			SetZUp = 1;
		};
		class Object15 {
			Type="Land_Ind_Workshop01_01";
			position[] = {10567.635,9664.4453,0};
			direction = -90.368271;
			SetZUp = 1;
		};
		class Object16 {
			Type="Land_Ind_Workshop01_01";
			position[] = {10658.138,9662.9082,0};
			direction = -172.70374;
			SetZUp = 1;
		};
		class Object17 {
			Type="Land_Ind_Workshop01_01";
			position[] = {10604.515,9262.4912,0};
			direction = -359.81195;
			SetZUp = 1;
		};
		class Object18 {
			Type="Land_Ind_Workshop01_01";
			position[] = {10103.772,9357.8105,0};
			direction = -178.17758;
			SetZUp = 1;
		};
		class Object19 {
			Type="Land_Ind_Workshop01_L";
			position[] = {10709.068,8930.7793,0};
			direction = -89.273499;
			SetZUp = 1;
		};
		class Object20 {
			Type="Land_Ind_Workshop01_L";
			position[] = {10597.076,8931.3652,0};
			direction = -0.27332029;
			SetZUp = 1;
		};
		class Object21 {
			Type="Land_Ind_Workshop01_04";
			position[] = {10686.805,8928.1055,0};
			direction = -270.28156;
			SetZUp = 1;
		};
		class Object22 {
			Type="Land_Ind_Workshop01_04";
			position[] = {10036.982,9411.1621,0};
			direction = -178.7836;
			SetZUp = 1;
		};
		class Object23 {
			Type="Land_Ind_Workshop01_L";
			position[] = {10046.338,9425.0195,0};
			direction = -269.19315;
			SetZUp = 1;
		};
	};
	class WMLZ3 {
		position[] = {12007.973, 6930.9556};
		size = 1800;

		class Object0 {
			Type="Land_A_BuildingWIP";
			position[] = {13342.701,7331.5488,0.32484424};
			direction = -252.44598;
			SetZUp = 1;
		};
		class Object1 {
			Type="Land_A_BuildingWIP";
			position[] = {13372.396,7271.5654,0.45917961};
			direction = -431.48724;
			SetZUp = 1;
		};
		class Object2 {
			Type="Land_A_CraneCon";
			position[] = {13395.852,7310.1274,0};
			direction = -252.41083;
			SetZUp = 1;
		};
		class Object3 {
			Type="Land_dum_istan3_hromada";
			position[] = {13162.029,6879.5967,0.1351874};
			direction = 0.04456012;
			SetZUp = 1;
		};
		class Object4 {
			Type="Land_dum_istan3_Pumpa";
			position[] = {13271.853,6862.9492,0};
			direction = 180.15823;
			SetZUp = 1;
		};
		class Object5 {
			Type="Land_ladderEP1";
			position[] = {13321.189,6921.4307,-0.62517089};
			direction = 183.55273;
			SetZUp = 1;
		};
		class Object6 {
			Type="Land_ladderEP1";
			position[] = {13165.634,6872.6318,-0.32561156};
			direction = 358.79459;
			SetZUp = 1;
		};
		class Object7 {
			Type="Land_ladderEP1";
			position[] = {13207.261,6869.9058,-0.6364274};
			direction = 358.2644;
			SetZUp = 1;
		};
		class Object8 {
			Type="Land_ladderEP1";
			position[] = {13237.074,6894.3999,-0.60852146};
			direction = 358.79459;
			SetZUp = 1;
		};
		class Object9 {
			Type="Land_ladderEP1";
			position[] = {13201.047,6956.3315,-0.65201396};
			direction = 358.79459;
			SetZUp = 1;
		};
		class Object10 {
			Type="Land_A_GeneralStore_01";
			position[] = {12675.729,6814.9468,0.04664503};
			direction = 172.32988;
			SetZUp = 1;
		};
		class Object11 {
			Type="Land_rail_station_big";
			position[] = {12317.244,6824.29,0};
			direction = -259.16739;
			SetZUp = 1;
		};
	};
	class WMLZ4 {
		position[] = {10791.405, 5391.6064};
		size = 1500;

		class Object0 {
			Type="Land_A_GeneralStore_01";
			position[] = {11265.732,5912.0176,-0.2157429};
			direction = -0.8837651;
			SetZUp = 1;
		};
		class Object1 {
			Type="Land_dum_istan3_Pumpa";
			position[] = {11340.349,5780.0024,0};
			direction = 329.75522;
			SetZUp = 1;
		};
		class Object2 {
			Type="Land_dum_istan3_Pumpa";
			position[] = {11221.264,5148.1104,0.027369408};
			direction = 139.34927;
			SetZUp = 1;
		};
		class Object3 {
			Type="Land_Barn_W_02";
			position[] = {11480.69,5423.3267,0};
			direction = -2.5099843;
			SetZUp = 1;
		};
		class Object4 {
			Type="Land_ladderEP1";
			position[] = {11267.212,5215.478,0.00011110306};
			direction = 178.64415;
			SetZUp = 1;
		};
		class Object5 {
			Type="Land_ladderEP1";
			position[] = {11235.124,5158.8628,0};
			direction = 227.85165;
			SetZUp = 1;
		};
		class Object6 {
			Type="Land_dum_istan3_hromada";
			position[] = {11234.513,5162.3623,0.16766134};
			direction = 139.26746;
			SetZUp = 1;
		};
		class Object7 {
			Type="Land_A_GeneralStore_01";
			position[] = {10938.981,5065.6719,0};
			direction = -201.36647;
			SetZUp = 1;
		};
		class Object8 {
			Type="Land_A_BuildingWIP";
			position[] = {10317.612,5281.6479,0.13085327};
			direction = -184.63278;
			SetZUp = 1;
		};
		class Object9 {
			Type="Land_A_CraneCon";
			position[] = {10340.739,5276.4019,0};
			direction = -629.40656;
			SetZUp = 1;
		};
	};
	class WMLZ5 {
		position[] = {8694.2754, 5947.1602};
		size = 1600;

		class Object0 {
			Type="Land_A_FuelStation_Build";
			position[] = {9741.3525,5515.4468,0};
			direction = 53.18969;
			SetZUp = 1;
		};
		class Object1 {
			Type="Land_A_FuelStation_Shed";
			position[] = {9721.2393,5516.8208,-0.063669682};
			direction = -37.351627;
			SetZUp = 1;
		};
		class Object2 {
			Type="Land_Ind_TankSmall2";
			position[] = {9739.6113,5519.6284,0.17583084};
			direction = -36.67086;
			SetZUp = 1;
		};
		class Object3 {
			Type="Land_A_FuelStation_Feed";
			position[] = {9721.1709,5516.689,0.17348246};
			direction = -126.11369;
			SetZUp = 1;
		};
		class Object4 {
			Type="Land_A_FuelStation_Feed";
			position[] = {9715.5664,5512.6758,0.097451709};
			direction = -125.54933;
			SetZUp = 1;
		};
		class Object5 {
			Type="Land_A_FuelStation_Feed";
			position[] = {9726.7246,5521.0107,0.24816656};
			direction = -125.54933;
			SetZUp = 1;
		};
		class Object6 {
			Type="Land_Barn_W_01";
			position[] = {9122.4131,5357.5898,0};
			direction = -41.173008;
			SetZUp = 1;
		};
		class Object7 {
			Type="Land_Barn_W_02";
			position[] = {9210.3223,5462.6504,0};
			direction = -56.383026;
			SetZUp = 1;
		};
		class Object8 {
			Type="Land_Shed_Ind02";
			position[] = {9261.0254,5787.4683,0};
			direction = 89.30056;
			SetZUp = 1;
		};
		class Object9 {
			Type="Land_Shed_Ind02";
			position[] = {9261.0176,5806.3643,0};
			direction = 89.30056;
			SetZUp = 1;
		};
		class Object10 {
			Type="Land_Ind_Workshop01_04";
			position[] = {9228.6318,5802.9434,0};
			direction = -178.7836;
			SetZUp = 1;
		};
		class Object11 {
			Type="Land_Ind_Workshop01_L";
			position[] = {9223.9355,5784.561,0};
			direction = 272.3335;
			SetZUp = 1;
		};
		class Object12 {
			Type="Land_Ind_Workshop01_L";
			position[] = {9259.8174,5829.8062,0};
			direction = 272.3335;
			SetZUp = 1;
		};
		class Object13 {
			Type="Land_Ind_Workshop01_L";
			position[] = {9258.1611,5906.9648,0};
			direction = 178.57326;
			SetZUp = 1;
		};
		class Object14 {
			Type="Land_ladderEP1";
			position[] = {9345.3359,5914.7935,-0.65575278};
			direction = 270.4472;
			SetZUp = 1;
		};
		class Object15 {
			Type="Land_ladderEP1";
			position[] = {9319.1279,5932.6724,-0.53455889};
			direction = 270.4472;
			SetZUp = 1;
		};
		class Object16 {
			Type="Land_ladderEP1";
			position[] = {9324.9346,5799.5762,-0.46985599};
			direction = 270.4472;
			SetZUp = 1;
		};
		class Object17 {
			Type="Land_ladderEP1";
			position[] = {9306.9326,5752.1084,0};
			direction = 270.4472;
			SetZUp = 1;
		};
		class Object18 {
			Type="Land_ladderEP1";
			position[] = {7534.7217,6525.2583,0};
			direction = 285.2179;
			SetZUp = 1;
		};
		class Object19 {
			Type="Land_ladderEP1";
			position[] = {7596.8481,6638.583,-0.50484169};
			direction = 285.2179;
			SetZUp = 1;
		};
		class Object20 {
			Type="Land_A_GeneralStore_01";
			position[] = {7737.9194,6364.021,-0.58005071};
			direction = -360.02121;
			SetZUp = 1;
		};
		class Object21 {
			Type="Land_Ind_Workshop01_L";
			position[] = {8833.0117,6045.4976,0};
			direction = 1.3119901;
			SetZUp = 1;
		};
		class Object22 {
			Type="Land_Ind_Workshop01_L";
			position[] = {8929.4063,5956.3647,0};
			direction = 269.3573;
			SetZUp = 1;
		};
		class Object23 {
			Type="Land_Ind_Workshop01_04";
			position[] = {9071.0273,5960.5181,0};
			direction = -178.7836;
			SetZUp = 1;
		};
		class Object24 {
			Type="Land_Ind_Workshop01_04";
			position[] = {8611.1523,6132.2979,0};
			direction = -180.69658;
			SetZUp = 1;
		};
		class Object25 {
			Type="Land_Ind_Workshop01_04";
			position[] = {8595.0625,6369.9609,0};
			direction = -178.7836;
			SetZUp = 1;
		};
		class Object26 {
			Type="Land_Ind_Workshop01_04";
			position[] = {8775.1299,6120.4834,0};
			direction = -179.09299;
			SetZUp = 1;
		};
		class Object27 {
			Type="Land_Ind_Workshop01_L";
			position[] = {8898.0723,6130.105,0};
			direction = 449.94666;
			SetZUp = 1;
		};
	};
};