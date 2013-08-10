
//items
//vehicles
//weapons

class CfgWeapons {
//items
	class ItemCore;

	class ItemMap: ItemCore {
		model="ca\misc\SmallObj_file_map_WPN.p3d";
	};

	class ItemCompass: ItemCore {
		model="z\addons\dayz_communityassets\models\compass.p3d";
	};

	class ItemCraftingBook : ItemCore {
		scope = 2;
		displayName = "Craft Book (Storage)";
		model = "\ca\misc\SmallObj_spukayev_docs_WPN.p3d";
		picture = "\ca\misc\Data\icons\picture_spukayev_docs_ca.paa";
		descriptionShort = "CraftBook (Camp)</br>";
		
		class ItemActions {
			class Build {
				text = "Gun Rack (NO AMMO!)";
				script = "spawn player_buildGunrack_DZ;";
			};
			class Build2 {
				text = "Weapon Cache";
				script = "spawn player_buildWeaponCache_DZ;";
			};
			class Build3 {
				text = "Storage Box";
				script = "spawn player_buildBoxStorage_DZ;";
			};
			class Build4 {
				text = "Work Bench";
				script = "spawn player_buildWorkbench_DZ;";
			};
			
		};
	};
	
	class ItemCraftingBook2 : ItemCore {
		scope = 2;
		displayName = "Craft Book (Barriers)";
		model = "\ca\misc\SmallObj_moscow_docs_WPN.p3d";
		picture = "\ca\misc\Data\icons\picture_moscow_docs_ca.paa";
		descriptionShort = "Crafting Book (Barriers)</br>Build Different sized and shaped Sandbag Fortifications";
		
		class ItemActions {
			class Build {
				text = "Bag Wall (Short)";
				script = "spawn player_buildBagFenceLong_DZ;";//switchback to long wall when we shorten OG Bags
			};
			class Build2 {
				text = "Bag Wall (Corner)";
				script = "spawn player_buildBagFenceLongCorner_DZ;";
			};
			class Build3 {
				text = "Bag Wall (Round)";
				script = "spawn player_buildBagFenceLongRound_DZ;";
			};
			class Build4 {
				text = "RazorWire Wall";
				script = "spawn player_buildFort_RazorWire_DZ;";
			};
		};
	};
	
	class ItemCraftingBook3 : ItemCore {
		scope = 2;
		displayName = "Craft Book (Camp)";
		model = "\ca\misc\SmallObj_File_photos_WPN.p3d";
		picture = "\ca\misc\Data\icons\picture_photo_folder_ca.paa";
		descriptionShort = "Crafting Book (Camp)</br>Build Various Objects for your Camp";
		
		class ItemActions {
			class Build {
				text = "Bench";
				script = "spawn player_buildBoxStorage_DZ;";
			};
			class Build2 {
				text = "Gate";
				script = "spawn player_buildBarb_Gate_DZ;";
			};
			class Build3 {
				text = "DeerStand";
				script = "spawn player_buildCampWoodTower_DZ;";
			};
			class Build4 {
				text = "Fortified Nest";
				script = "spawn player_buildFortified_nest_DZ;";
			};
		};
	};
	
	class ItemMap_Debug: ItemCore {
		descriptionshort = "Debug Map - Admin use only";
		displayname = "Map";
		picture = "\ca\ui\data\gear_picture_map_ca.paa";
		scope = 2;
		simulation = "ItemMap";
		class Library {
			libtextdesc = "Debug Map - Admin use only";
		};
	};
	
	class ItemMatchbox: ItemCore
	{
		scope=2;
		displayName="$STR_EQUIP_NAME_3";
		model="\dayz_equip\models\matchbox_gear.p3d";
		picture="\dayz_equip\textures\equip_matchbox_ca.paa";
		descriptionShort="$STR_EQUIP_DESC_3";
		class ItemActions {
			delete Use;
		};
	};

//vehicles
//weapons

	class BAF_AS50_scoped;
	class BAF_AS50_scoped_DZ : BAF_AS50_scoped {
		type = "1";
		canlock = 0;
		cursor = "RifleCursor";
	};
	
	class Crossbow;
	class Crossbow_DZ : Crossbow {
		reloadTime = 1.8;
		displayname = $STR_DN_CROSSBOW;
		magazines[] =
		{
			"Quiver",
			"WoodenArrow"
		};
	};
	
	class ItemCrowbar: ItemCore	{
		scope=2;
		displayName="Crowbar";
		model="\dayz_equip\models\crowbar.p3d";
		picture="\z\addons\dayz_communityassets\pictures\equip_crowbar_CA.paa";
		descriptionShort="A tool consisting of a metal bar with a single curved end and flattened points, often with a small fissure on one or both ends for removing nails.";
		class ItemActions
		{
			class Toolbelt
			{
				text="Remove from Toolbelt";
				script="spawn player_addToolbelt;";
				use[]=
				{
					"ItemCrowbar"
				};
				output[]=
				{
					"MeleeCrowbar"
				};
			};
		};
	};
	
	class GrenadeLauncher;  // External class reference
	class Flare : GrenadeLauncher {
		class ThrowMuzzle;
		class MolotovCocktailMuzzle : ThrowMuzzle {
			displayName = "$STR_ACTION_THROW";
			magazines[] = {
				"TrashJackDaniels", 
				"ItemSodaEmpty", 
				"TrashTinCan",
				"FoodbaconRaw",
				"FoodbeefRaw",
				"FoodCanGriffEmpty",
				"FoodCanBadguyEmpty",
				"FoodCanBoneboyEmpty",
				"FoodCanCornEmpty",
				"FoodCanCurgonEmpty",
				"FoodCanDemonEmpty",
				"FoodCanFraggleosEmpty",
				"FoodCanHerpyEmpty",
				"FoodCanOrlokEmpty",
				"FoodCanPowellEmpty",
				"FoodCanTylersEmpty",
				"FoodCanUnlabeledEmpty",
				"FoodchickenRaw",
				"FoodmeatRaw",
				"FoodmuttonRaw",
				"FoodrabbitRaw",
				"ItemSodaCokeEmpty",
				"ItemSodaPepsiEmpty",
				"ItemSodaMdewEmpty",
				"ItemSodaMtngreenEmpty",
				"ItemSodaR4z0rEmpty",
				"ItemSodaClaysEmpty",
				"ItemSodaSmashtEmpty", 
				"ItemSodaDrwasteEmpty", 
				"ItemSodaLemonadeEmpty", 
				"ItemSodaLvgEmpty", 
				"ItemSodaMzlyEmpty", 
				"ItemBrick",
				"ItemSodaRabbitEmpty"
			};          
		};
	};
	
	class ksvk;	// External class reference
	class ksvk_DZ	: ksvk {
		type = "1";
		canlock = 0;
		cursor = "RifleCursor";
	};
	
	class RifleCore;	// External class reference
	class M107_DZ : RifleCore {
		irLaserPos = "laser pos";
		irLaserEnd = "laser dir";
		irDistance = 0;
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = public;
		type = 1;
		model = "\ca\weapons\m107\m107";
		picture = "\CA\weapons\data\Equip\W_m107_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
		magazines[] = {"10Rnd_127x99_m107"};
		dexterity = 0.45;
		modelOptics = "\ca\Weapons\2Dscope_MilDot_14";
		opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
		opticsFlare = true;
		opticsDisablePeripherialVision = true;
		opticsZoomInit = 0.0553;
		opticsZoomMin = 0.0178;
		distanceZoomMin = 500;
		opticsZoomMax = 0.0553;
		distanceZoomMax = 200;
		displayname = $STR_DN_M107;
		autoFire = false;
		begin1[] = {"ca\sounds\weapons\rifles\m107", 2.51189, 1, 1300};
		soundBegin[] = {"begin1", 1};
		reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-m16-2", 0.0316228, 1, 20};
		reloadTime = 0.5;
		dispersion = 0.0005;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 1200;
		midRangeProbab = 0.7;
		maxRange = 1800;
		maxRangeProbab = 0.05;
		recoil = "recoil_single_primary_9outof10";
		recoilProne = "recoil_single_primary_prone_7outof10";

		canlock = 0;
		cursor = "RifleCursor";
		cursoraim = "Foresight";
		
		class Library {
			libTextDesc = $STR_LIB_M107;
		};
		descriptionShort = $STR_DSS_M107;
	};
	class Rifle;	// External class reference
	class GrenadeLauncher_EP1: Rifle
	{
		magazines[]=
		{
			"1Rnd_HE_M203",
			"FlareWhite_M203",
			"FlareGreen_M203",
			"FlareRed_M203",
			"FlareYellow_M203",
			"1Rnd_Smoke_M203",
			"1Rnd_SmokeRed_M203",
			"1Rnd_SmokeGreen_M203",
			"1Rnd_SmokeYellow_M203"
		};
		begin1[]=
		{
			"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_1",
			1,
			1,
			200
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		reloadMagazineSound[]=
		{
			"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_reload",
			1,
			1,
			30
		};
		drySound[]=
		{
			"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_dry",
			1.1220185,
			1,
			40
		};
		magazineReloadTime=3;
		reloadTime=1;
		optics=1;
		modelOptics="-";
		cameraDir="GL look";
		memoryPointCamera="GL eye";
		opticsZoomMin=0.30000001;
		opticsZoomMax=1;
		opticsZoomInit=0.5;
		cursor="GLCursor";
		cursorAim="\ca\Weapons\Data\clear_empty";
		cursorSize=4;
		value=3;
		reloadAction="ManActReloadMagazine";
		initSpeed=75;
		canLock=0;
		autoReload=0;
		autoAimEnabled=0;
		ffMagnitude=0.1;
		ffFrequency=1;
		ffCount=1;
		recoil="M240Recoil";
		dispersion=0.0070000002;
		aiDispersionCoefY=6;
		maxLeadSpeed=15;
		muzzlePos="usti granatometu";
		muzzleEnd="konec granatometu";
		cartridgePos="";
		cartridgeVel="";
		minRange=30;
		minRangeProbab=0.1;
		midRange=200;
		midRangeProbab=0.69999999;
		maxRange=400;
		maxRangeProbab=0.050000001;
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	class M32_DZ: GrenadeLauncher_EP1
	{
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=2;
		model="\ca\weapons_E\GrenadeLauncher\M32";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons_E\Data\Anim\M32.rtm"
		};
		picture="\ca\weapons_E\Data\icons\m32_CA.paa";
		displayName="$STR_EP1_DN_M32_EP1";
		class Library
		{
			libTextDesc="$STR_EP1_LIB_M32_EP1";
		};
		descriptionShort="$STR_EP1_DSS_M32_EP1";
		magazines[]=
		{
			"1Rnd_HE_M203",
			"FlareWhite_M203",
			"FlareGreen_M203",
			"FlareRed_M203",
			"FlareYellow_M203",
			"1Rnd_Smoke_M203",
			"1Rnd_SmokeRed_M203",
			"1Rnd_SmokeGreen_M203",
			"1Rnd_SmokeYellow_M203"
		};
		reloadTime=0.5;
	};
	class M79_DZ: GrenadeLauncher_EP1
	{
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=2;
		model="\ca\weapons_E\GrenadeLauncher\M79";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons_E\Data\Anim\M79.rtm"
		};
		picture="\ca\weapons_E\Data\icons\m79_CA.paa";
		displayName="$STR_EP1_DN_M79_EP1";
		class Library
		{
			libTextDesc="$STR_EP1_LIB_M79_EP1";
		};
		descriptionShort="$STR_EP1_DSS_M79_EP1";
	};
	class Mk13_DZ: GrenadeLauncher_EP1
	{
		scope=2;
		model="\ca\weapons_E\GrenadeLauncher\MK13";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons_E\Data\Anim\MK13.rtm"
		};
		picture="\ca\weapons_E\Data\icons\mk13_CA.paa";
		displayName="$STR_EP1_DN_Mk13_EP1";
		class Library
		{
			libTextDesc="$STR_EP1_LIB_Mk13_EP1";
		};
		descriptionShort="$STR_EP1_DSS_Mk13_EP1";
	};	
	
	class Makarov;
	class MakarovSD : Makarov {
		model = "\ca\weapons\makarov_silenced";
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		displayName = $STR_DN_MAKAROVSD;
		picture = "\CA\weapons\data\equip\w_makarovSD_ca.paa";
		begin1[] = {"ca\sounds\weapons\pistols\makarovSD_single1", 0.316228, 1, 200};
		soundBegin[] = {"begin1", 1};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\pistol_reload", 0.0316228, 1, 20};
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 15;
		midRangeProbab = 0.3;
		maxRange = 20;
		maxRangeProbab = 0.04;
		magazines[] = {"8Rnd_9x18_MakarovSD", "8Rnd_9x18_Makarov"};
		
		class Library {
			libTextDesc = $STR_LIB_MAKAROVSD;
		};
		descriptionShort = $STR_DSS_MAKAROVSD;
	};

	class MeleeHatchet;
	class MeleeCrowbar: MeleeHatchet
	{
		scope=2;
		model="\dayz_weapons\models\crowbar_weaponized";
		picture="\dayz_weapons\textures\equip_crowbar_CA.paa";
		displayName="Crowbar";
		magazines[]=
		{
			"Crowbar_Swing"
		};
		class ItemActions
		{
			class Toolbelt
			{
				text="Add to Toolbelt";
				script="spawn player_addToolbelt;";
				use[]=
				{
					"MeleeCrowbar"
				};
				output[]=
				{
					"ItemCrowbar"
				};
			};
			class Drop
			{
				text="Drop Crowbar";
				script="spawn player_dropWeapon;";
				use[]=
				{
					"Crowbar_Swing"
				};
			};
		};
		class Library
		{
			libTextDesc="A tool consisting of a metal bar with a single curved end and flattened points, often with a small fissure on one or both ends for removing nails.";
		};
		descriptionShort="A tool consisting of a metal bar with a single curved end and flattened points, often with a small fissure on one or both ends for removing nails.";
	};
	
	class Default;
class Pistol;
class M16A2 ;
class M249_DZ;
class M40a3;	// External class reference	
class Single;
class Burst;
class FullAuto;
class M203Muzzle;
class M16_base;
class M240_DZ;
class manual;
class close;
class short;
class medium;
class far;
class M60A4_EP1 ;
class M14_EP1;
class M4A1 : M16_base {};
class M4A1_Aim : M4A1 {};
class M4A1_RCO_GL : M4A1 {};
class M4A1_HWS_GL : M4A1_RCO_GL {};
class M9;
class M9SD;
class glock17_EP1;
class Colt1911;
	
	class vil_B_HP : M9 {
scope = public;
model = "\vilas_wwp\vil_bhp";
displayName = $STR_VIL_BHP;
magazines[] = {"15_Rnd_9x19_M9"};
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {50, 100, 200, 300, 400, 500};
discreteDistanceInitIndex = 0;
picture = "\vilas_wwp\ico\w_vil_bhp_ca.paa";
begin1[] = {"\vilas_wwp\sounds\bhp_fire1", 0.994328, 1, 700};
reloadMagazineSound[] = {"\vilas_wwp\sounds\bhp_reload", 0.4, 1, 20};
soundBegin[] = {"begin1", 1};
class Library {
	libTextDesc = $STR_VIL_BHP_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_BHP_SHORT;
};

class vil_Glock : glock17_EP1 {
scope = public;
picture = "\vilas_wwp\ico\w_vil_glock17_ca.paa";
model = "\vilas_wwp\vil_glock";
class Armory {
	disabled = 0;
	description = "$STR_EP1_LIB_glock17";
	author = $STR_AUTHOR_VILAS;
};
displayName = $STR_VIL_GLOCK;
magazines[] = {"17Rnd_9x19_glock17", "15Rnd_9x19_M9", "15Rnd_9x19_M9SD"};
descriptionShort = "$STR_EP1_DSS_glock17_EP1";
};

class vil_Glock_o : vil_glock {
scope = public;
model = "\vilas_wwp\vil_glock_o";
picture = "\vilas_wwp\ico\w_vil_glock17_o_ca.paa";
class Armory {
	disabled = 1;
	description = "$STR_EP1_LIB_glock17";
	author = $STR_AUTHOR_VILAS;
};
displayName = $STR_VIL_GLOCK_O;
magazines[] = {"17Rnd_9x19_glock17", "15Rnd_9x19_M9", "15Rnd_9x19_M9SD"};
descriptionShort = "$STR_EP1_DSS_glock17_EP1";
};

class vil_USP : M9 {
scope = public;
model = "\vilas_wwp\vil_usp";
displayName = $STR_VIL_USP;
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {25, 50, 75, 100};
discreteDistanceInitIndex = 1;
picture = "\vilas_wwp\ico\w_vil_usp_ca.paa";
begin1[] = {"\vilas_wwp\sounds\usp9_fire1", 0.684328, 1, 700};
soundBegin[] = {"begin1", 1};
reloadMagazineSound[] = {"\vilas_wwp\sounds\usp_reload", 0.1, 1, 20};
class Library {
	libTextDesc = $STR_VIL_USP_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
//descriptionShort = $STR_VIL_USP_SHORT;
};

class vil_USPSD : M9sd {
scope = public;
model = "\vilas_wwp\vil_uspsd";
displayName = $STR_VIL_USPSD;
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {25, 50, 75, 100};
discreteDistanceInitIndex = 1;
picture = "\vilas_wwp\ico\w_vil_uspsd_ca.paa";
begin1[] = {"\vilas_wwp\sounds\usp9sd_fire1", 0.316228, 1, 200};
soundBegin[] = {"begin1", 1};
reloadMagazineSound[] = {"\vilas_wwp\sounds\usp_reload", 0.1, 1, 20};
class Library {
	libTextDesc = $STR_VIL_USP_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
//descriptionShort = $STR_VIL_USPSD_SHORT;
};

class vil_USP45 : Colt1911 {
scope = public;
model = "\vilas_wwp\vil_usp";
displayName = $STR_VIL_USP45;
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {25, 50, 75, 100};
discreteDistanceInitIndex = 1;
picture = "\vilas_wwp\ico\w_vil_usp45_ca.paa";
magazines[] = {"7Rnd_45ACP_1911"};
begin1[] = {"\vilas_wwp\sounds\usp45_fire1", 0.714328, 1, 700};
soundBegin[] = {"begin1", 1};
reloadMagazineSound[] = {"\vilas_wwp\sounds\usp_reload", 0.1, 1, 20};
class Library {
	libTextDesc = $STR_VIL_USP_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_USP45_SHORT;
};

class vil_USP45SD : M9sd {
scope = public;
fireLightDuration = 0.0;
fireLightIntensity = 0.0;
model = "\vilas_wwp\vil_uspsd";
displayName = $STR_VIL_USP45SD;
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {25, 50, 75, 100};
discreteDistanceInitIndex = 1;
picture = "\vilas_wwp\ico\w_vil_usp45sd_ca.paa";
magazines[] = {"7Rnd_45ACP_1911"};
begin1[] = {"\vilas_wwp\sounds\usp9sd_fire1", 0.316228, 1, 200};
soundBegin[] = {"begin1", 1};
reloadMagazineSound[] = {"\vilas_wwp\sounds\usp_reload", 0.1, 1, 20};
recoil = "recoil_single_pistol_3outof3";
recoilProne = "recoil_single_pistol_prone_3outof3";
class Library {
	libTextDesc = $STR_VIL_USP_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_USP45SD_SHORT;
};


/*********************************************************
	Vilas Western Weapons Submachine guns
**********************************************************/


class MP5A5;
class MP5SD;
class UZI_EP1 : Pistol {};

class UZI_SD_EP1 : UZI_EP1 {};

class vil_MP5_EOTech : MP5A5 {
scope = public;
model = "\vilas_wwp\vil_mp5_eot";
picture = "\vilas_wwp\ico\w_vil_mp5_eot_ca.paa";
displayName = $STR_VIL_MP5_EOT;
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class vil_MP5SD_EOTech : MP5SD {
scope = public;
model = "\vilas_wwp\vil_mp5sd_eot";
picture = "\vilas_wwp\ico\w_vil_mp5sd_eot_ca.paa";
displayName = $STR_VIL_MP5SD_EOT;
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class vil_uzi_c : UZI_EP1 {
scope = public;
model = "\vilas_wwp\vil_uzi";
type = PrimaryWeapon;
picture = "\vilas_wwp\ico\w_vil_uzi_folded_ca.paa";
displayName = $STR_VIL_UZI_FOLDED;
magazines[] = {"30Rnd_9x19_UZI", "30Rnd_9x19_UZI_SD"};
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {100, 200};
discreteDistanceInitIndex = 0;
modes[] = {"Single","FullAuto"};
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\HKMP5.rtm"};

class Single: Single  {
	dispersion = 0.0035;
	minRange = 2;
	minRangeProbab = 0.1;
	midRange = 25;
	midRangeProbab = 0.7;
	maxRange = 90;
	maxRangeProbab = 0.015;
	recoil = "recoil_single_primary_2outof10";
	recoilProne = "recoil_single_primary_prone_2outof10";
};

class FullAuto: Fullauto  {
	reloadTime = 0.1;
	minRange = 0;
	minRangeProbab = 0.2;
	midRange = 20;
	midRangeProbab = 0.7;
	maxRange = 40;
	maxRangeProbab = 0.05;
	recoil = "recoil_single_primary_2outof10";
	recoilProne = "recoil_single_primary_prone_2outof10";
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class vil_uzi : vil_uzi_c {
model = "\vilas_wwp\vil_uzi_rozkl";
picture = "\vilas_wwp\ico\uzi_ico_ca.paa";
displayName = $STR_VIL_UZI_FULL;
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};


class vil_uzi_SD : UZI_SD_EP1 {
scope = public;
type = PrimaryWeapon;
model = "\vilas_wwp\vil_uzi_sd";
picture = "\vilas_wwp\ico\w_vil_uzi_sd_ca.paa";
displayName = $STR_VIL_UZI_SD;
magazines[] = {"30Rnd_9x19_UZI_SD", "30Rnd_9x19_UZI"};
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {100, 200};
discreteDistanceInitIndex = 0;
modes[] = {"Single","FullAuto"};
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\HKMP5.rtm"};

class Single: Single  {
	dispersion = 0.0035;
	minRange = 2;
	minRangeProbab = 0.1;
	midRange = 25;
	midRangeProbab = 0.7;
	maxRange = 70;
	maxRangeProbab = 0.015;
	recoil = "recoil_single_primary_2outof10";
	recoilProne = "recoil_single_primary_prone_2outof10";
};

class FullAuto: FullAuto  {
	reloadTime = 0.09;
	minRange = 2;
	minRangeProbab = 0.1;
	midRange = 15;
	midRangeProbab = 0.7;
	maxRange = 40;
	maxRangeProbab = 0.015;
	recoil = "recoil_auto_primary_2outof10";
	recoilProne = "recoil_auto_primary_prone_2outof10";
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class vil_uzimini : UZI_EP1 {
scope = public;
model = "\vilas_wwp\vil_uzimini";
picture = "\vilas_wwp\ico\muzi_ico_ca.paa";
displayName = $STR_VIL_UZI_MINI;
magazines[] = {"30Rnd_9x19_UZI_SD", "30Rnd_9x19_UZI"};
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\HKMP5.rtm"};
type = PrimaryWeapon;

class Single: Single {
	reloadTime = 0.06316;
};

class FullAuto: FullAuto {
	reloadTime = 0.06316;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
class Library {
	libTextDesc = $STR_VIL_UZI_MINI_LIB;
};
};

class vil_uzimini_SD : UZI_SD_EP1 {
scope = public;
model = "\vilas_wwp\vil_uzimini_sd";
picture = "\vilas_wwp\ico\w_vil_muzi_sd_ca.paa";
displayName = $STR_VIL_UZI_MINI_SD;
magazines[] = {"30Rnd_9x19_UZI", "30Rnd_9x19_UZI_SD"};
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\HKMP5.rtm"};
type = PrimaryWeapon;

class Single: Single {
	reloadTime = 0.06316;
};
class FullAuto: FullAuto  {
	reloadTime = 0.06316;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
class Library {
	libTextDesc = $STR_VIL_UZI_MINI_LIB;
};
};


/*********************************************************
	Vilas Western Weapons G3 variants
**********************************************************/
class FN_FAL;
class vil_G3a3 : FN_FAL {
htMin = 1;
htMax = 420;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
//opticsZoomInit = 0.375;
value = 0;
model = "\vilas_wwp\vil_g3a3";
optics = true;
dexterity = 1.64;
displayName = $STR_VIL_G3A3;
displayNameShort = $STR_VIL_SN_G3A3;
picture = "\vilas_wwp\ico\ico_g3a3.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
magazines[] = {"20Rnd_762x51_DMR","20Rnd_762x51_FNFAL"};
modes[] = {"Single", "FullAuto"};
weaponInfoType = "RscWeaponZeroing";	
discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
discreteDistanceInitIndex = 2;

class M203Muzzle;

class Single: Single  {
	begin1[] = {"\vilas_wwp\sounds\g3_fire1", 1.77828, 1, 1000};
	begin2[] = {"\vilas_wwp\sounds\g3_fire2", 1.77828, 1, 1000};
	soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
	reloadTime = 0.09;
	recoil = "recoil_single_primary_5outof10";
	recoilProne = "recoil_single_primary_prone_5outof10";
	dispersion = 0.0011;
	minRange = 2;
	minRangeProbab = 0.1;
	midRange = 200;
	midRangeProbab = 0.75;
	maxRange = 400;
	maxRangeProbab = 0.05;
};

class FullAuto: FullAuto {
	begin1[] = {"\vilas_wwp\sounds\g3_fire1", 1.77828, 1, 1000};
	begin2[] = {"\vilas_wwp\sounds\g3_fire2", 1.77828, 1, 1000};
	soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
	reloadTime = 0.09;
	recoil = "recoil_auto_primary_6outof10";
	recoilProne = "recoil_auto_primary_prone_5outof10";
	dispersion = 0.004;
	aiRateOfFire = 12;
};

class Library {
	libTextDesc = "$STR_VIL_G3_LIB";
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_G3_SHORT;
};

class vil_G3a2 : Vil_G3a3 {
scope = public;
model = "\vilas_wwp\vil_g3a2";
displayName = $STR_VIL_G3A2;
displayNameShort = $STR_VIL_SN_G3A2;
picture = "\vilas_wwp\ico\ico_g3a2.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class vil_G3a4 : Vil_G3a3 {
scope = public;
model = "\vilas_wwp\vil_g3a4";
displayName = $STR_VIL_G3A4;
displayNameShort = $STR_VIL_SN_G3A4;
class Armory {
	author = $STR_AUTHOR_VILAS;
};
picture = "\vilas_wwp\ico\ico_g3a4.paa";
};

class vil_G3a4b : Vil_G3a3 {
scope = public;
model = "\vilas_wwp\vil_g3a4b";
displayName = $STR_VIL_G3A4_B;
displayNameShort = $STR_VIL_SN_G3A4;
class Armory {
	author = $STR_AUTHOR_VILAS;
};
picture = "\vilas_wwp\ico\w_vil_g3a4_b_ca.paa";
};

class vil_G3an : Vil_G3a3 {
scope = public;
model = "\vilas_wwp\vil_g3n";
displayName = $STR_VIL_G3N;
displayNameShort = $STR_VIL_SN_G3N;
class Armory {
	author = $STR_AUTHOR_VILAS;
};
picture = "\vilas_wwp\ico\ico_g3n.paa";
};

class vil_G3anb : Vil_G3a3 {
scope = public;
model = "\vilas_wwp\vil_g3nb";
displayName = $STR_VIL_G3N_B;
displayNameShort = $STR_VIL_SN_G3N;
picture = "\vilas_wwp\ico\w_vil_g3n_b_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class vil_G3ZF : Vil_G3a3 {
scope = public;
displayName = $STR_VIL_G3ZF;
displayNameShort = $STR_VIL_SN_G3ZF;
picture = "\vilas_wwp\ico\w_vil_g3zf_ca.paa";
model = "\vilas_wwp\vil_g3zf";
visionMode[] = {"Normal"};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
modelOptics = "\vilas_wwp\optk\optika_zfg3";
class OpticsModes {
	class G3Leu {
		opticsID = 1;
		useModelOptics = 1;
		opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
		opticsZoomMin = 0.07;
		opticsZoomMax = 0.07;
		opticsZoomInit = 0.07;
		memoryPointCamera = "Konec hlavne";
		opticsFlare = true;
		opticsDisablePeripherialVision = true;
		distanceZoomMin = 200;
		distanceZoomMax = 200;
		cameraDir = "";
		visionMode[] = {"Normal"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
	};
};
	
descriptionShort = $STR_VIL_G3ZF_SHORT;
};

class vil_G3zfb : Vil_G3zf {
scope = public;
model = "\vilas_wwp\vil_g3zfb";
displayName = $STR_VIL_G3ZF_B;
class Armory {
	author = $STR_AUTHOR_VILAS;
};
displayNameShort = $STR_VIL_SN_G3ZF;
picture = "\vilas_wwp\ico\w_vil_g3zf_b_ca.paa";
};

class vil_G3SG1 : Vil_G3a3 {
scope = public;
model = "\vilas_wwp\vil_g3sg1";
displayName = $STR_VIL_G3SG1;
class Armory {
	author = $STR_AUTHOR_VILAS;
};
picture = "\vilas_wwp\ico\ico_g3sg1.paa";
modelOptics = "\vilas_wwp\optk\optika_zfg3";

class OpticsModes {
	class G3SB {
		opticsID = 1;
		useModelOptics = 1;
		opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
		opticsZoomMin = 0.05;
		opticsZoomMax = 0.1;
		opticsZoomInit = 0.0625;
		memoryPointCamera = "Konec hlavne";
		opticsFlare = true;
		opticsDisablePeripherialVision = true;
		distanceZoomMin = 400;
		distanceZoomMax = 150;
		cameraDir = "";
		visionMode[] = {"Normal"};
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
	};
};

class Single: Single {
	recoil = "recoil_single_primary_5outof10";
	recoilProne = "recoil_single_primary_prone_4outof10";
	dispersion = 0.001;
	minRange = 10;
	minRangeProbab = 0.1;
	midRange = 300;
	midRangeProbab = 0.75;
	maxRange = 500;
	maxRangeProbab = 0.1;
	aiRateOfFire = 10;
};

class FullAuto: FullAuto {
	recoil = "recoil_auto_primary_5outof10";
	recoilProne = "recoil_auto_primary_prone_4outof10";
	aiRateOfFire = 20;
};
};

class vil_G3sg1b : Vil_G3sg1 {
scope = public;
model = "\vilas_wwp\vil_g3sg1b";
displayName = $STR_VIL_G3SG1_B;
displayNameShort = $STR_VIL_SN_G3SG1;
picture = "\vilas_wwp\ico\w_vil_g3sg1_b_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class vil_G3TGS : Vil_G3a3 {
displayName = $STR_VIL_G3TGS;
displayNameShort = $STR_VIL_SN_G3TGS;
model = "\vilas_wwp\vil_g3tgs";
dexterity = 1.46;
picture = "\vilas_wwp\ico\ico_g3tgs.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
muzzles[] = {this, "HK79Muzzle"};

class HK79Muzzle : M203Muzzle {
	displayName = $STR_VIL_HK79;
	begin1[] = {"\vilas_wwp\Sounds\hk79_fire1", 1.77828, 1, 100};
	soundBegin[] = {"begin1", 1};
	reloadMagazineSound[] = {"\vilas_wwp\Sounds\hk79_reload", 0.000316228, 1, 20};
	weaponInfoType = "RscWeaponEmpty";
	//weaponInfoType = "RscWeaponZeroing";
	//discreteDistance[] = {50, 100, 150, 200, 250, 300, 350};
	//discreteDistanceInitIndex = 2;
	opticsZoomMin = 0.25;
	opticsZoomMax = 1.1;
	opticsZoomInit = 0.5;
};

class Library {
	libTextDesc = $STR_VIL_HK79_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_G3TGS_SHORT;
};

class vil_G3TGSb : vil_G3TGS {
scope = public;
model = "\vilas_wwp\vil_g3tgsb";
displayName = $STR_VIL_G3TGS_B;
class Armory {
	author = $STR_AUTHOR_VILAS;
};
displayNameShort = $STR_VIL_SN_G3TGS;
picture = "\vilas_wwp\ico\w_vil_g3tgs_b_ca.paa";
};

class vil_AG3 : Vil_G3a3 {
scope = public;
model = "\vilas_wwp\vil_ag3";
displayName = $STR_VIL_AG3_AIM;
class Armory {
	author = $STR_AUTHOR_VILAS;
};
weaponInfoType = "RscWeaponEmpty";
discreteDistance[] = {100};
discreteDistanceInitIndex = 0;
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
picture = "\vilas_wwp\ico\w_vil_ag3k_aim_ca.paa";
class Library {
	libTextDesc = "$STR_VIL_AG3_LIB";
};
descriptionShort = $STR_VIL_AG3_SHORT;
};

class vil_AG3EOT : vil_AG3 {
scope = public;
model = "\vilas_wwp\vil_ag3eot";
displayName = $STR_VIL_AG3_EOT;
class Armory {
	author = $STR_AUTHOR_VILAS;
};
picture = "\vilas_wwp\ico\w_vil_ag3k_holo_ca.paa";
weaponInfoType = "RscWeaponEmpty";
discreteDistance[] = {300};
discreteDistanceInitIndex = 0;
};

/*********************************************************
	Vilas Western Weapons Machineguns
**********************************************************/

class vil_Mg3 : M249_DZ {
scope = public;
model = "\vilas_wwp\vil_mg3b";
displayName = $STR_VIL_MG3;
picture = "\vilas_wwp\ico\ico_mg3.paa";
UiPicture = "\CA\weapons\data\Ico\i_mg_CA.paa";
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {200, 300, 400, 500, 600, 800, 1000, 1200};
discreteDistanceInitIndex = 1;
reloadMagazineSound[] = {"\vilas_wwp\sounds\mg3_reload", 0.0562341, 1, 25};
magazineReloadTime = 4;
class Library {
	type = 7;
	libTextDesc = $STR_VIL_MG3_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_MG3_SHORT;

class manual  {
	displayName = $STR_VIL_MG3;
	recoil = "recoil_auto_machinegun_8outof10";
	recoilProne = "recoil_auto_machinegun_prone_5outof10";
	dispersion = 0.0012;
	reloadTime = 0.0545;
	begin1[] = {"\vilas_wwp\sounds\mg3_fire1", 1.77828, 1, 1300};
	soundBegin[] = {"begin1", 1};
	maxRange = 10;
	maxRangeProbab = 0.04;
	showToPlayer = true;
};

class close  {
	begin1[] = {"\vilas_wwp\sounds\mg3_fire1", 1.77828, 1, 1300};
	soundBegin[] = {"begin1", 1};
};

class short  {
	begin1[] = {"\vilas_wwp\sounds\mg3_fire1", 1.77828, 1, 1300};
	soundBegin[] = {"begin1", 1};
};

class medium {
	begin1[] = {"\vilas_wwp\sounds\mg3_fire1", 1.77828, 1, 1300};
	soundBegin[] = {"begin1", 1};
};

class far  {
	begin1[] = {"\vilas_wwp\sounds\mg3_fire1", 1.77828, 1, 1300};
	soundBegin[] = {"begin1", 1};
};
};

class vil_M249_Para : M249_DZ {
scope = public;
model = "\vilas_wwp\vil_m249_para";
picture = "\vilas_wwp\ico\saw_ico.paa";
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
discreteDistanceInitIndex = 2;
class Armory {
	type = 7;
	author = $STR_AUTHOR_VILAS;
};
displayName = $STR_VIL_M249_PARA;
};

class vil_Minimi : M249_DZ {
scope = public;
model = "\vilas_wwp\vil_minimi";
displayName = $STR_VIL_MINIMI;
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
discreteDistanceInitIndex = 2;
picture = "\vilas_wwp\ico\w_vil_fnmini_ca.paa";
class Library {
	libTextDesc = $STR_VIL_MINIMI_LIB;
};
class Armory {
	type = 7;
	author = $STR_AUTHOR_VILAS;
};
};



class vil_M240_B : M240_DZ {
scope = public;
model = "\vilas_wwp\vil_m240b";
displayName = $STR_VIL_M240B;
picture = "\CA\weapons\data\equip\w_m240_ca.paa";
UiPicture = "\CA\weapons\data\Ico\i_mg_CA.paa";
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
discreteDistanceInitIndex = 2;
class Library {
	libTextDesc = $STR_VIL_M240B_LIB;
};
class Armory {
	type = 7;
	author = $STR_AUTHOR_VILAS;
};
};

class vil_MG4 : M249_DZ {
scope = public;
model = "\vilas_wwp\vil_mg4";
displayName = $STR_VIL_MG4;
picture = "\vilas_wwp\ico\w_vil_mg4_ca.paa";
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
discreteDistanceInitIndex = 2;
class Library {
	libTextDesc = $STR_VIL_MG4_LIB;
};
class Armory {
	type = 7;
	author = $STR_AUTHOR_VILAS;
};
};

class vil_MG4E : M249_DZ {
scope = public;
model = "\vilas_wwp\vil_mg4e";
modelOptics = "\ca\weapons\G36\G36_optics";
opticsZoomMin = 0.125;
opticsZoomMax = 0.125;
displayName = $STR_VIL_MG4_SCOPE;
weaponInfoType = "RscWeaponEmpty";
discreteDistance[] = {100};
discreteDistanceInitIndex = 0;
distanceZoomMin = 100;
distanceZoomMax = 100;
//discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
//discreteDistanceInitIndex = 2;
picture = "\vilas_wwp\ico\w_vil_mg4e_ca.paa";
class Library {
	libTextDesc = $STR_VIL_MG4_LIB;
};
class Armory {
	type = 7;
	author = $STR_AUTHOR_VILAS;
};
};



/*********************************************************
	Vilas Western Weapons Sniper/Marksman Rifles
**********************************************************/


class vil_DRM_BASE : Riflecore {

weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
discreteDistanceInitIndex = 2;
};

class vil_SR25 : vil_DRM_BASE {
scope = public;
model = "\vilas_wwp\vil_sr25";
displayName = $STR_VIL_SR25;
picture = "\vilas_wwp\ico\w_vil_sr25_ca.paa";
visionMode[] = {"Normal"};
modelOptics = "\ca\weapons\2Dscope_MilDot_9";
class OpticsModes {
	class Leu9X {
		opticsID = 1;
		useModelOptics = 1;
		opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
		opticsZoomInit = 0.083;
		opticsZoomMin = 0.0277;
		opticsZoomMax = 0.083;
		distanceZoomMin = 400;
		distanceZoomMax = 120;
		memoryPointCamera = "Konec hlavne";
		opticsFlare = true;
		opticsDisablePeripherialVision = true;
		cameraDir = "";
		visionMode[] = {"Normal"};
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
	};
};

class Single: Single  {
	begin1[] = {"\vilas_wwp\sounds\sr25_fire1", 1.77828, 1, 1000};
	soundBegin[] = {"begin1", 1.0};
	midRange = 300;
	maxRange = 500;
	aiRateOfFireDistance = 500;
};

class Library {
	libTextDesc = $STR_VIL_SR25_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_SR25_SHORT;
};

class vil_M110 : vil_SR25 {
scope = public;
model = "\vilas_wwp\vil_m110";
displayName = $STR_VIL_M110;
picture = "\vilas_wwp\ico\w_vil_m110_ca.paa";
class Library {
	libTextDesc = $STR_VIL_M110_LIB;
};
class Armory {
	description = $STR_VIL_M110_LIB;
	author = $STR_AUTHOR_VILAS;
};
//descriptionShort = $STR_VIL_M110;
};
class vil_HK417s : vil_SR25 {
scope = public;
model = "\vilas_wwp\vil_hk417s";
displayName = "HK 417S";
picture = "\vilas_wwp\ico\417_ca.paa";
class Library {
	libTextDesc = "HK 417S";
};
class Armory {
	description = "HK 417S";
	author = $STR_AUTHOR_VILAS;
};
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
};
class vil_SR25SD : vil_SR25 {
scope = public;
model = "\vilas_wwp\vil_sr25sd";
displayName = "SR25SD";
picture = "\vilas_wwp\ico\w_vil_sr25_sd_ca.paa";


class Single: Single  {
	begin1[] = {"\vilas_wwp\sounds\sr25_silent", 1.77828, 1, 250};
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class vil_M110sd : vil_SR25sd {
scope = public;
model = "\vilas_wwp\vil_m110sd";
displayName = $STR_VIL_M110_SD;
picture = "\vilas_wwp\ico\w_vil_m110_sd_ca.paa";
class Armory {
	description = $STR_VIL_M110_LIB;
	author = $STR_AUTHOR_VILAS;
};
};

class M24;
class vil_M24b : M24 {
scope = public;
model = "\vilas_wwp\m24_black";
displayName = $STR_VIL_M24_BLACK;
picture = "\vilas_wwp\ico\w_vil_m24b_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};


/*********************************************************
	Vilas Western Weapons Battle Rifles
**********************************************************/



class vil_Fal : FN_FAL {
scope = public;
value = 0;
model = "\vilas_wwp\vil_falb";
optics = true;
displayName = $STR_VIL_FAL;
picture = "\vilas_wwp\ico\ico_fal.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";  
magazines[] = {"20Rnd_762x51_FNFAL"};
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {200, 300, 400, 500, 600};
discreteDistanceInitIndex = 1;
modes[] = {"Single", "FullAuto"};

class Single: Single {
	reloadTime = 0.09;
	//dispersion = 0.0017;
	minRange = 2;
	minRangeProbab = 0.1;
	midRange = 250;
	midRangeProbab = 0.75;
	maxRange = 400;
	maxRangeProbab = 0.05;
};

class FullAuto: FullAuto {
	displayName = $STR_DN_MODE_FULLAUTO;
	autoFire = true;
	reloadTime = 0.09;
	//dispersion = 0.0017;
	recoil = "recoil_auto_primary_6outof10";
	recoilProne = "recoil_auto_primary_prone_5outof10";
	dispersion = 0.005;
	aiRateOfFire = 12;
	minRange = 0;
	minRangeProbab = 0.3;
	midRange = 80;
	midRangeProbab = 0.7;
	maxRange = 200;
	maxRangeProbab = 0.05;
};

class Library {
	libTextDesc = $STR_EP1_LIB_FN_FAL;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class vil_Fal_Para : Vil_Fal {
scope = public;
model = "\vilas_wwp\vil_falpara";
displayName = $STR_VIL_FAL_PARA;
picture = "\vilas_wwp\ico\ico_para.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};




/*********************************************************
	Vilas Western Weapons Assault Rifles
**********************************************************/

class vil_sg540 : Riflecore {
htMin = 1;
htMax = 480;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
value = 0;
model = "\vilas_wwp\vil_sg540";
dexterity = 1.64;
displayName = $STR_VIL_SG540;
picture = "\vilas_wwp\ico\w_vil_sg540_ca.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
modes[] = {"Single", "Burst", "FullAuto"};
magazines[] = {"30Rnd_556x45_G36"};
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {100, 300, 500};
discreteDistanceInitIndex = 1;
class Library {
	libTextDesc = $STR_VIL_SG540_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_SG540_SHORT;
};

class vil_sg542 : vil_sg540 {
scope = public;
model = "\vilas_wwp\vil_sg542";
displayName = $STR_VIL_SG542;
picture = "\vilas_wwp\ico\w_vil_sg542_ca.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
magazines[] = {"20Rnd_762x51_FNFAL"};
discreteDistance[] = {100, 300, 500, 600};

class Library {
	libTextDesc = $STR_VIL_SG542_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_SG542_SHORT;
};

class vil_sg542f : vil_sg542 {
scope = public;
model = "\vilas_wwp\vil_sg541";
displayName = $STR_VIL_SG542_FS;
picture = "\vilas_wwp\ico\w_vil_sg542fs_ca.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class VIL_M4 : M4A1 {
scope = public;
displayName = $STR_VIL_M4;
modes[] = {"Single", "Burst"};
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {25, 50, 75, 100, 150, 175, 200, 250, 300, 400, 500, 600};
discreteDistanceInitIndex = 8;
//picture = "\vilas_wwp\ico\w_vil_m4_ca.paa";
picture = "\ca\weapons\data\equip\w_m4_ca.paa";

class Burst : FullAuto {
	displayName = $STR_DN_MODE_BURST;
	autoFire = false;
	burst = 3;
};
};

class vil_M4_EOT : M4A1_Aim {
displayName = $STR_VIL_M4EOT;
class Armory {
	disabled = 0;
	author = $STR_AUTHOR_VILAS;
};
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
modes[] = {"Single", "Burst"};
model = "\vilas_wwp\vil_m4_eot";
picture = "\vilas_wwp\ico\w_vil_m4_holo_ca.paa";
weaponInfoType = "RscWeaponEmpty";
discreteDistance[] = {300};
discreteDistanceInitIndex = 0;
distanceZoomMin = 300;
distanceZoomMax = 300;
};

class VIL_M4_aim : M4A1_Aim {
displayName = $STR_VIL_M4_AIM;
weaponInfoType = "RscWeaponEmpty";
discreteDistance[] = {100};
discreteDistanceInitIndex = 0;
modes[] = {"Single", "Burst"};

class Burst : FullAuto {
	displayName = $STR_DN_MODE_BURST;
	autoFire = false;
	burst = 3;
};
};

class vil_HK33 : Riflecore {
htMin = 1;
htMax = 480;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
value = 0;
model = "\vilas_wwp\vil_hkg33n";
displayName = $STR_VIL_HK33;
picture = "\vilas_wwp\ico\ico_33.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
modes[] = {"Single", "FullAuto"};
magazines[] = {"30Rnd_556x45_G36"};
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {100, 200, 300, 400};
discreteDistanceInitIndex = 1;

class Single: Single {
	reloadTime = 0.08;
	begin1[] = {"\vilas_wwp\sounds\hk53_fire1", 1.77828, 1, 1000};
	soundBegin[] = {"begin1", 1};
};

class FullAuto: FullAuto {
	reloadTime = 0.08;
	begin1[] = {"\vilas_wwp\sounds\hk53_fire1", 1.77828, 1, 1000};
	soundBegin[] = {"begin1", 1};
};

class Library {
	libTextDesc = $STR_VIL_HK33_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_HK33_SHORT;
};

class vil_Galil : FN_FAL {
htMin = 1;
htMax = 480;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
value = 0;
model = "\vilas_wwp\vil_galil_ar";
displayName = $STR_VIL_GALIL;
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {300, 500};
discreteDistanceInitIndex = 0;
picture = "\vilas_wwp\ico\ico_galil.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
reloadMagazineSound[] = {"\vilas_wwp\sounds\galil_reload",db0, 1, 20};
modes[] = {"Single", "FullAuto"};
magazines[] = {"30Rnd_556x45_G36"};

class Single: Single {
	begin1[] = {"\vilas_wwp\sounds\galil_fire1", 1.04828, 1, 1000};
	soundBegin[] = {"begin1", 1};
};

class FullAuto: FullAuto {
	begin1[] = {"\vilas_wwp\sounds\galil_fire1", 1.04828, 1, 1000};
	soundBegin[] = {"begin1", 1};
};

class Library {
	libTextDesc = $STR_VIL_GALIL_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_GALIL_SHORT;
};

class vil_Galil_arm : vil_Galil {
scope = public;
model = "\vilas_wwp\vil_galil_arm";
displayName = $STR_VIL_GALIL_ARM;
picture = "\vilas_wwp\ico\w_vil_galil_arm_ca.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
magazines[] = {"30Rnd_556x45_G36"};

class Library {
	libTextDesc = $STR_VIL_GALIL_LIB;
};
descriptionShort = $STR_VIL_GALIL_ARM_SHORT;

class Single: Single {
	reloadTime = 0.075;
	dispersion = 0.001;
	minRange = 2;
	minRangeProbab = 0.3;
	midRange = 250;
	midRangeProbab = 0.7;
	maxRange = 500;
	maxRangeProbab = 0.05;
};

class FullAuto: FullAuto {
	reloadTime = 0.0923;
	dispersion = 0.00175;
	minRange = 100;
	minRangeProbab = 0.1;
	midRange = 250;
	midRangeProbab = 0.7;
	maxRange = 300;
	maxRangeProbab = 0.05;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};




/*********************************************************
	Vilas Western Weapons G36 versions
**********************************************************/

class G36C;
class vil_G36KVA4 : G36C {
htMin = 1;
htMax = 480;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
model = "\vilas_wwp\vil_g36kv_is";
displayName = "HK G36 KV (Latvian)";
displayNameShort = $STR_VIL_SN_G36KVA4;
weaponInfoType = "RscWeaponEmpty";
discreteDistance[] = {200};
discreteDistanceInitIndex = 0;
picture = "\vilas_wwp\ico\w_vil_g36ka4_ca.paa";
//descriptionShort = $STR_VIL_G36KVA4_SHORT;
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};
class G36K;
class vil_G36KA4 : G36K {
htMin = 1;
htMax = 480;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
model = "\vilas_wwp\vil_g36k_rail";
displayName = "HK G36 K (ironsight)";
displayNameShort = $STR_VIL_SN_G36KA4;
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {100, 300};
discreteDistanceInitIndex = 0;
picture = "\vilas_wwp\ico\w_vil_g36kv_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};

modes[] = {"Single", "Burst", "Fullauto"};

class Single: Single  {
	dispersion = 0.002;
	minRange = 2;
	minRangeProbab = 0.1;
	midRange = 200;
	midRangeProbab = 0.7;
	maxRange = 400;
	maxRangeProbab = 0.05;
};

class Burst  {
	ffCount = 3;
	recoil = "recoil_auto_primary_3outof10";
	recoilProne = "recoil_auto_primary_prone_2outof10";
	minRange = 1;
	minRangeProbab = 0.1;
	midRange = 60;
	midRangeProbab = 0.7;
	maxRange = 100;
	maxRangeProbab = 0.05;
	dispersion = 0.0016;
};

class FullAuto: FullAuto  {
	recoil = "recoil_auto_primary_4outof10";
	recoilProne = "recoil_auto_primary_prone_3outof10";
	minRange = 0;
	minRangeProbab = 0.1;
	midRange = 20;
	midRangeProbab = 0.7;
	maxRange = 60;
	maxRangeProbab = 0.05;
	dispersion = 0.0016;
};
};
class G36a;
class vil_G36E : G36a {
htMin = 1;
htMax = 480;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
model = "\vilas_wwp\vil_g36e";
displayName = $STR_VIL_G36E;
weaponInfoType = "RscWeaponEmpty";
class MuzzleFar : G36C {
	displayName = $STR_VIL_SN_G36E;
	optics = true;
	opticsDisablePeripherialVision = true;
	opticsZoomMin = 0.166;
	opticsZoomMax = 0.166;
	OpticsZoomInit = 0.166;
	DistanceZoomMin = 200;
	DistanceZoomMax = 200;
	modelOptics = "\ca\weapons\G36\G36_optics";
	opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur2"};
	class OpticsModes {
		class Scope {
			OpticsID = 1;
			UseModelOptics = 1;
			MemoryPointCamera = "Eye";
			optics = true;
			OpticsFlare = false;
			opticsDisablePeripherialVision = true;
			opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur2"};
			opticsZoomMin = 0.166;
			opticsZoomMax = 0.166;
			OpticsZoomInit = 0.166;
			DistanceZoomMin = 200;
			DistanceZoomMax = 200;
			discreteDistance[] = {200};
			discreteDistanceInitIndex = 0;
			VisionMode[] = {"Normal"};
			CameraDir = "";
		};
	};
};

picture = "\vilas_wwp\ico\w_vil_g36e_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class vil_G36a2 : G36a {
htMin = 1;
htMax = 480;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
model = "\vilas_wwp\vil_g36a2";
displayName = $STR_VIL_G36A2;
class MuzzleFar  {
	displayName = $STR_VIL_SN_G36A2;

	class OpticsModes {
		class Scope {
			opticsID = 1;
			useModelOptics = 1;
			opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
			opticsZoomMin = 0.0623;
			opticsZoomMax = 0.0623;
			opticsZoomInit = 0.0623;
			memoryPointCamera = "opticView";
			visionMode[] = {"Normal"};
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			distanceZoomMin = 200;
			distanceZoomMax = 200;
			discreteDistance[] = {200};
			discreteDistanceInitIndex = 0;
			cameraDir = "";
		};
		  
		class Kolimator : Scope {
			opticsID = 2;
			useModelOptics = 0;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.5;
			distanceZoomMin = 300;
			distanceZoomMax = 300;
			discreteDistance[] = {300};
			discreteDistanceInitIndex = 0;
			memoryPointCamera = "opticView";
			visionMode[] = {};
		};
	};
};
weaponInfoType = "RscWeaponEmpty";
picture = "\vilas_wwp\ico\w_vil_g36a2_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class vil_AG36 : G36c {
htMin = 1;
htMax = 480;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
model = "\vilas_wwp\vil_ag36du";
displayName = $STR_VIL_AG36;
weaponInfoType = "RscWeaponEmpty";
handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons2\Data\Anim\XM8GL.rtm"};
picture = "\vilas_wwp\ico\w_vil_ag36_ca.paa";
muzzles[] = {G36aMuzzle, "AG36Muzzle"};

class G36aMuzzle : G36c {
	optics = true;
	displayName = $STR_VIL_G36A;
	weaponInfoType = "RscWeaponEmpty";
	opticsDisablePeripherialVision = true;
	modelOptics = "\ca\weapons\G36\G36_optics";
	opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur2"};

	class OpticsModes {
		class Scope {
			opticsID = 1;
			useModelOptics = 1;
			opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
			opticsZoomMin = 0.0623;
			opticsZoomMax = 0.0623;
			opticsZoomInit = 0.0623;
			memoryPointCamera = "opticView";
			visionMode[] = {"Normal"};
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			distanceZoomMin = 200;
			distanceZoomMax = 200;
			discreteDistance[] = {200};
			discreteDistanceInitIndex = 0;
			cameraDir = "";
		};

		class Kolimator : Scope {
			opticsID = 2;
			useModelOptics = 0;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.5;
			distanceZoomMin = 300;
			distanceZoomMax = 300;
			discreteDistance[] = {300};
			discreteDistanceInitIndex = 0;
			memoryPointCamera = "opticView";
			visionMode[] = {};
		};
	};
};

class AG36Muzzle {
	displayName = $STR_VIL_AG36GL;
	begin1[] = {"\vilas_wwp\Sounds\ag36_fire1", 1.77828, 1, 100};
	soundBegin[] = {"begin1", 1};
	reloadMagazineSound[] = {"\vilas_wwp\Sounds\ag36_reload", 0.000316228, 1, 20};
	weaponInfoType = "RscWeaponEmpty";
	
};
class Library {
	libTextDesc = $STR_VIL_AG36_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_AG36_SHORT;
};

class vil_AG36A2 : G36c {
htMin = 1;
htMax = 480;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
model = "\vilas_wwp\vil_ag36a2";
displayName = $STR_VIL_AG36A2;
weaponInfoType = "RscWeaponEmpty";
handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons2\Data\Anim\XM8GL.rtm"};
picture = "\vilas_wwp\ico\w_vil_g36a2_ag36_ca.paa";
muzzles[] = {G36aMuzzle, "AG36Muzzle"};
  
class G36aMuzzle : G36c {
	optics = true;
	displayName = $STR_VIL_G36A2;
	opticsZoomMin = 0.0623;
	opticsZoomMax = 0.0623;
	weaponInfoType = "RscWeaponEmpty";
	distanceZoomMin = 200;
	distanceZoomMax = 200;
	opticsDisablePeripherialVision = true;
	modelOptics = "\ca\weapons\G36\G36_optics";
	opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur2"};
   
	class OpticsModes {
		class Scope {
			opticsID = 1;
			useModelOptics = 1;
			opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
			opticsZoomMin = 0.0623;
			opticsZoomMax = 0.0623;
			opticsZoomInit = 0.0623;
			memoryPointCamera = "opticView";
			visionMode[] = {"Normal"};
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			distanceZoomMin = 200;
			distanceZoomMax = 200;
			discreteDistance[] = {200};
			discreteDistanceInitIndex = 0;
			cameraDir = "";
		};

		class Kolimator : Scope {
			opticsID = 2;
			useModelOptics = 0;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.5;
			distanceZoomMin = 300;
			distanceZoomMax = 300;
			discreteDistance[] = {300};
			discreteDistanceInitIndex = 0;
			memoryPointCamera = "opticView";
			visionMode[] = {};
		};
	};
};
class AG36Muzzle  {
	displayName = $STR_VIL_AG36GL;
	begin1[] = {"\vilas_wwp\Sounds\ag36_fire1", 1.77828, 1, 100};
	soundBegin[] = {"begin1", 1};
	reloadMagazineSound[] = {"\vilas_wwp\Sounds\ag36_reload", 0.000316228, 1, 20};
	weaponInfoType = "RscWeaponEmpty";
	
};
};
class vil_AG36KV : G36c {
htMin = 1;
htMax = 480;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
model = "\vilas_wwp\vil_ag36kv";
displayName = "HK AG36KV";
weaponInfoType = "RscWeaponEmpty";
handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons2\Data\Anim\XM8GL.rtm"};
picture = "\vilas_wwp\ico\ag36_is_ca.paa";
muzzles[] = {this, "AG36Muzzle"};
  

class AG36Muzzle  {
	displayName = $STR_VIL_AG36GL;
	begin1[] = {"\vilas_wwp\Sounds\ag36_fire1", 1.77828, 1, 100};
	soundBegin[] = {"begin1", 1};
	reloadMagazineSound[] = {"\vilas_wwp\Sounds\ag36_reload", 0.000316228, 1, 20};
	weaponInfoType = "RscWeaponEmpty";
};
class Library {
	libTextDesc = $STR_VIL_AG36_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_AG36_SHORT;
};
class vil_AG36KA4 : G36c {
htMin = 1;
htMax = 480;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
model = "\vilas_wwp\vil_ag36ka4";
displayName = "HK AG36KA4";
weaponInfoType = "RscWeaponEmpty";
handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons2\Data\Anim\XM8GL.rtm"};
picture = "\vilas_wwp\ico\ag36_is_ca.paa";
muzzles[] = {this, "AG36Muzzle"};
  

class AG36Muzzle {
	displayName = $STR_VIL_AG36GL;
	begin1[] = {"\vilas_wwp\Sounds\ag36_fire1", 1.77828, 1, 100};
	soundBegin[] = {"begin1", 1};
	reloadMagazineSound[] = {"\vilas_wwp\Sounds\ag36_reload", 0.000316228, 1, 20};
	weaponInfoType = "RscWeaponEmpty";
};
class Library {
	libTextDesc = $STR_VIL_AG36_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_AG36_SHORT;
};

class vil_G36VA4 : vil_G36KA4 {
scope = public;
model = "\vilas_wwp\vil_g36_lit_5";
displayName = "HK G36 KV (Lithuanian)";
displayNameShort = $STR_VIL_SN_G36KVA4;
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
picture = "\vilas_wwp\ico\w_vil_g36a4_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};
class vil_G36VA4Eot : vil_G36VA4 {
scope = public;
model = "\vilas_wwp\vil_g36_lit_5_eot";
displayName = "HK G36 KV (Eot, Lithuanian)";
displayNameShort = $STR_VIL_SN_G36KVA4;
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
picture = "\vilas_wwp\ico\g36_litwa_eot_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};
class vil_G36KVZ : vil_G36KA4 {
scope = public;
model = "\vilas_wwp\vil_g36k_zeiss";
displayName = "HK G36 K (Zeiss, LLM01)";
displayNameShort = $STR_VIL_SN_G36KVA4;
picture = "\vilas_wwp\ico\w_vil_g36a4_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
class FlashLight { color[] = {0.9, 0.9, 0.7, 0.9}; ambient[] = {0.1, 0.1, 0.1, 1.0};
position = "flash"; direction = "flash dir"; angle = 30; scale[] = {1, 1, 0.5}; brightness = 0.1; };
};
class vil_G36KSK : vil_G36KA4 {
scope = public;
model = "\vilas_wwp\vil_g36ksk_eot";
displayName = "HK G36 KSK (Eot, LLM01)";
displayNameShort = "HK G36 K (Eot, LLM01)";
picture = "\vilas_wwp\ico\g36_ksk_eot_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
class FlashLight { color[] = {0.9, 0.9, 0.7, 0.9}; ambient[] = {0.1, 0.1, 0.1, 1.0};
position = "flash"; direction = "flash dir"; angle = 30; scale[] = {1, 1, 0.5}; brightness = 0.1; };
};
class vil_G36KSKdes : vil_G36KA4 {
scope = public;
model = "\vilas_wwp\vil_g36ksk_eot_des";
displayName = "HK G36 K (Eot, desert)";
displayNameShort = "HK G36 K (Eot)";
picture = "\vilas_wwp\ico\g36_ksk_eot_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
class FlashLight { color[] = {0.9, 0.9, 0.7, 0.9}; ambient[] = {0.1, 0.1, 0.1, 1.0};
position = "flash"; direction = "flash dir"; angle = 30; scale[] = {1, 1, 0.5}; brightness = 0.1; };
};
class vil_G36KSKdesES : vil_G36KA4 {
scope = public;
model = "\vilas_wwp\vil_g36ksk_dr_des";
displayName = "HK G36 K (RAS, Specter, desert)";
displayNameShort = "HK G36 K (RAS, Specter, des)";
picture = "\vilas_wwp\ico\g36_ksk_dr_ca.paa";
modelOptics = "\Ca\weapons_E\SCAR\SpecterDR_556_optic_4x.p3d";
class OpticsModes
{
class Specter
{
opticsID = 1;
useModelOptics = 1;
opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
opticsZoomMin = 0.071945;
opticsZoomInit = 0.071945;
opticsZoomMax = 0.31945;
memoryPointCamera = "opticView";
visionMode[] = {"Normal"};
opticsFlare = 1;
opticsDisablePeripherialVision = 1;
distanceZoomMin = 300;
distanceZoomMax = 300;
cameraDir = "";
};
class Ironsights: Specter
{
opticsID = 2;
useModelOptics = 0;
opticsPPEffects[] = {};
opticsFlare = 0;
opticsDisablePeripherialVision = 0;
opticsZoomMin = 0.25;
opticsZoomMax = 1.1;
opticsZoomInit = 0.5;
memoryPointCamera = "eye";
visionMode[] = {};
};
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
class FlashLight { color[] = {0.9, 0.9, 0.7, 0.9}; ambient[] = {0.1, 0.1, 0.1, 1.0};
position = "flash"; direction = "flash dir"; angle = 30; scale[] = {1, 1, 0.5}; brightness = 0.1; };
};
class vil_G36CC : vil_G36KA4 {
scope = public;
model = "\vilas_wwp\vil_g36_lit_3";
displayName = "HK G36C (customized)";
displayNameShort = "HK G36C (customized)";
picture = "\vilas_wwp\ico\w_vil_g36a4_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};

};
class vil_G36KSKES : vil_G36KSKdesES {
model = "\vilas_wwp\vil_g36ksk_dr";
displayName = "HK G36 K (RAS, Specter)";
};
class vil_G36KES : vil_G36KSKdesES {
model = "\vilas_wwp\vil_g36kg_dr";
picture = "\vilas_wwp\ico\g36_bw_dr_ca.paa";
displayName = "HK G36 K (Specter)";
};


class vil_G36KV3 : vil_G36KA4 {
scope = public;
model = "\vilas_wwp\vil_g36kv_aim";
displayName = "HK G36 KV (Latvian)";
displayNameShort = "HK G36 KV (Latvian)";
picture = "\vilas_wwp\ico\g36_lotwa_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
irLaserPos = "laser pos";
irLaserEnd = "laser dir";
irDistance = 50;
};
class vil_G36KV3Des : vil_G36KV3 {
scope = public;
model = "\vilas_wwp\vil_g36kv_aim_des";
displayName = "HK G36 KV (Latvian, desert)";
};

/*********************************************************
	Vilas Western Weapons HK416 versions
**********************************************************/

class vil_HK416_Aim : M4A1_Aim {
displayName = $STR_VIL_HK416_AIM;
weaponInfoType = "RscWeaponEmpty";
descriptionShort = $STR_VIL_HK416_SHORT;
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
model = "\vilas_wwp\vil_hk416aim";
discreteDistance[] = {100};
discreteDistanceInitIndex = 0;
distanceZoomMin = 100;
distanceZoomMax = 100;
picture = "\vilas_wwp\ico\ico_416.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
class Armory {
	description = $STR_VIL_HK416_LIB;
	author = $STR_AUTHOR_VILAS;
};
modes[] = {"Single", "Burst", "FullAuto"};
};

class vil_HK416_IS : vil_HK416_Aim {
displayName = $STR_VIL_HK416_IS;
descriptionShort = $STR_VIL_HK416_SHORT;
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
model = "\vilas_wwp\vil_hk416is";
distanceZoomMin = 100;
distanceZoomMax = 100;
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {25, 50, 75, 100, 150, 175, 200, 250, 300, 400, 500, 600, 700, 800};
discreteDistanceInitIndex = 8;

picture = "\vilas_wwp\ico\w_vil_hk416_is_ca.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
class Armory {
	description = $STR_VIL_HK416_LIB;
	author = $STR_AUTHOR_VILAS;
};
};

class vil_HK416_EOT : vil_HK416_Aim {
displayName = $STR_VIL_HK416_EOT;
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
model = "\vilas_wwp\vil_hk416cq";
picture = "\vilas_wwp\ico\w_vil_hk416_eot_ca.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
descriptionShort = $STR_VIL_HK416_SHORT;
class Armory {
	description = $STR_VIL_HK416_LIB;
	author = $STR_AUTHOR_VILAS;
};
};

class vil_HK416_GL : vil_HK416_Aim {
displayName = $STR_VIL_HK416_GL;
model = "\vilas_wwp\vil_hk416ag";
picture = "\vilas_wwp\ico\w_vil_hk416_gl_ca.paa";
handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons2\Data\Anim\XM8GL.rtm"};
distanceZoomMin = 200;
distanceZoomMax = 200;
class AGCMuzzle : M203Muzzle {
	displayName = $STR_VIL_AGC;
};
muzzles[] = {this, "AGCMuzzle"};
descriptionShort = $STR_VIL_HK416_GL_SHORT;
class Armory {
	description = $STR_VIL_HK416_LIB;
	author = $STR_AUTHOR_VILAS;
};
};

class VIL_HK416_EDR : vil_HK416_Aim {
displayName = $STR_VIL_HK416_EDR;
model = "\vilas_wwp\VIL_hk416e";
scope = public;
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
modelOptics = "\vilas_wwp\optk\optika_elcan";
opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
opticsDisablePeripherialVision = false;
opticsZoomMin = 0.065;
opticsZoomMax = 0.3;
opticsFlare = true;
descriptionShort = $STR_VIL_HK416_SHORT;
picture = "\vilas_wwp\ico\w_vil_hk416_edr_ca.paa";
class Armory {
	description = $STR_VIL_HK416_LIB;
	author = $STR_AUTHOR_VILAS;
};
};

class vil_D_C7 : M16_base {
picture = "\ca\Weapons\Data\equip\w_m4_ca.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";

displayName = "C7";
scope = 2;		
modes[] = {"Single", "FullAuto"};
model = "\dutch_pack\vil_c7";
weaponInfoType = "RscWeaponEmpty";
discreteDistance[] = {300};
discreteDistanceInitIndex = 0;
opticsZoomMax = 0.0732;
distanceZoomMax = 300;
opticsZoomMin = 0.0732;
distanceZoomMin = 300;
opticsZoomInit = 0.0732;
modelOptics = "\Ca\weapons_E\M249\M145.p3d";
afmax = 0;
htmax = 480;
htmin = 1;
mfact = 1;
mfmax = 0;
tbody = 100;
};
class vil_D_C8 : M16_base {
picture = "\ca\Weapons\Data\equip\w_m4_ca.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";

displayName = "C8";
scope = 2;		
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
modes[] = {"Single", "FullAuto"};
model = "\dutch_pack\vil_c8";
weaponInfoType = "RscWeaponEmpty";
discreteDistance[] = {300};
discreteDistanceInitIndex = 0;
opticsZoomMax = 0.0732;
distanceZoomMax = 300;
opticsZoomMin = 0.0732;
distanceZoomMin = 300;
opticsZoomInit = 0.0732;
modelOptics = "\Ca\weapons_E\M249\M145.p3d";
afmax = 0;
htmax = 480;
htmin = 1;
mfact = 1;
mfmax = 0;
tbody = 100;
};
class vil_D_416 : M16_base {
picture = "\ca\Weapons\Data\equip\w_m4_ca.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";

displayName = "HK 416 (Aimpoint)";
scope = 2;		
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
modes[] = {"Single", "FullAuto"};
model = "\dutch_pack\vil_hk416_aim";
weaponInfoType = "RscWeaponEmpty";
discreteDistance[] = {300};
discreteDistanceInitIndex = 0;

afmax = 0;
htmax = 480;
htmin = 1;
mfact = 1;
mfmax = 0;
tbody = 100;
};
class vil_D_416de : M16_base {
picture = "\ca\Weapons\Data\equip\w_m4_ca.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";

displayName = "HK 416 (Aimpoint, camo)";
scope = 2;		
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
modes[] = {"Single", "FullAuto"};
model = "\dutch_pack\vil_hk416_aim_camo";
weaponInfoType = "RscWeaponEmpty";
discreteDistance[] = {300};
discreteDistanceInitIndex = 0;

afmax = 0;
htmax = 480;
htmin = 1;
mfact = 1;
mfmax = 0;
tbody = 100;
};

class M16A2GL;
class vil_D_C7_AG : M16A2GL {
displayName = "C7 AG";
scope = 2;		
modes[] = {"Single", "FullAuto"};
model = "\dutch_pack\vil_c7_ag";
weaponInfoType = "RscWeaponEmpty";
discreteDistance[] = {300};
discreteDistanceInitIndex = 0;
opticsZoomMax = 0.0732;
distanceZoomMax = 300;
opticsZoomMin = 0.0732;
distanceZoomMin = 300;
opticsZoomInit = 0.0732;
modelOptics = "\Ca\weapons_E\M249\M145.p3d";
afmax = 0;
htmax = 480;
htmin = 1;
mfact = 1;
mfmax = 0;
tbody = 100;
};


	
	class AK_BASE : Rifle {
		class Single;
		class Burst;
		class FullAuto;
		class GP25Muzzle;
	};
	class AKS_BASE : AK_BASE {};
	class AK_47_M : AK_BASE {};
	class AK_107_BASE : AK_BASE {};
	class AK_107_kobra : AK_107_BASE {};
	class AK_74 : AK_BASE {};
	class SVD;
	class AKS_74_U : AKS_BASE {};
	class RPK_74;
	class AK_47_S : AK_47_M {};
	class Launcher;
	
	
	class AK_107_GL_kobra;
	class AKS_74_UN_kobra : AK_BASE {
		class Single;
		class Burst;
		class FullAuto;
		class GP25Muzzle;
	};
	class AK_74_GL;
	class VSS_vintorez : Rifle {
		class Single;
		class Full;
	};
	class PK : Rifle {
		class manual;
		class close;
		class short;
		class medium;
		class far;
	};
	class Pecheneg : PK {};

	
	class vil_AKM_BASE : AK_47_M {
		scope = private;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 1;
		magazines[] = {"30Rnd_762x39_AK47"};
	};
	
	class vil_AK47_BASE : AK_47_M {
		scope = private;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 1;
		magazines[] = {"30Rnd_545x39_AK"};
	};
	
	class vil_AKS_BASE : AK_47_S {
		scope = private;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 1;
		modes[] = {"FullAuto", "Single"};
		magazines[] = {"30Rnd_545x39_AK"};
	};
	
	class vil_NATO_AK : M16_base {
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = private;
		drySound[] = {"ca\sounds\weapons\rifles\dry", 0.000316228, 1, 10};
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\Data\Anim\AK.rtm"};
		magazines[] = {"30Rnd_545x39_AK"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		modes[] = {"FullAuto", "Single"};
		
		class Single : Single {
			begin1[] = {"\vilas_aks\sounds\AK74n", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
			reloadTime = 0.1;
			recoil = "recoil_single_primary_4outof10";
			recoilProne = "recoil_single_primary_prone_4outof10";
			dispersion = 0.00125;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};

		class Burst : Burst {
			begin1[] = {"\vilas_aks\sounds\AK74n", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
			soundBurst = 0;
			reloadTime = 0.1;
			ffCount = 3;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			dispersion = 0.00125;
			minRange = 1;
			minRangeProbab = 0.3;
			midRange = 80;
			midRangeProbab = 0.7;
			maxRange = 120;
			maxRangeProbab = 0.05;
			showToPlayer = false;
		};

		class FullAuto : FullAuto {
			begin1[] = {"\vilas_aks\sounds\AK74n", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
			reloadTime = 0.1;
			ffCount = 30;
			recoil = "recoil_auto_primary_4outof10";
			recoilProne = "recoil_auto_primary_prone_4outof10";
			dispersion = 0.00125;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
			showToPlayer = true;
		};
	};
	
	
	class vil_SKS : AK_BASE {
		scope = public;
		model = "\vilas_aks\vil_sks";
		picture = "\vilas_aks\ico\sks.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"30Rnd_545x39_AK"};
		displayName = $STR_TGW_VIL_SKS;
		dexterity = 1.57;
		reloadMagazineSound[] = {"\vilas_aks\sounds\sks_reload", 0.0562341, 1, 10};
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M24.rtm"};
		modes[] = {"Single"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		class Single : Single {
			displayName = "";
			begin1[] = {"\vilas_aks\sounds\sks_fire1", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
			reloadTime = 0.1;
			recoil = "recoil_single_primary_5outof10";
			recoilProne = "recoil_single_primary_prone_5outof10";
			dispersion = 0.0018;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.05;
			aiRateOfFire = 10;	// delay between shots at given distance
			aiRateOfFireDistance = 500;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		class Library {
			libTextDesc = $STR_TGW_VIL_SKS_LIB;
		};
		descriptionShort = $STR_TGW_VIL_SKS_SHORT;
	};
	
	/*********************************************************
			Vilas Eastern Weapons Handguns
	**********************************************************/
	
	class vil_Tt33 : Makarov {
		scope = public;
		model = "\vilas_aks\vil_tetetka";
		picture = "\vilas_aks\ico\w_vil_tt33_ca.paa";
		displayName = $STR_VIL_TT33;
		dispersion = 0.015;
		magazines[] = {"8Rnd_9x18_Makarov"};
		begin1[] = {"\vilas_aks\sounds\tt33_fire1", 0.794328, 1, 700};
		begin2[] = {"\vilas_aks\sounds\tt33_fire2", 0.794328, 1, 700};
		soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
		reloadMagazineSound[] = {"\vilas_aks\sounds\tt33_reload", 0.1, 1, 20};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		
		class Library {
			libTextDesc = $STR_VIL_TT33_LIB;
		};
		descriptionShort = $STR_VIL_TT33_SHORT;
	};
	
	class vil_APS : Makarov  {
		scope = public;
		model = "\vilas_aks\vil_aps";
		modelOptics = "-";
		picture = "\vilas_aks\ico\w_vil_aps_ca.paa";
		optics = true;
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {25, 50, 100, 200};
		discreteDistanceInitIndex = 1;
		displayName = $STR_TGW_VIL_APS;
		begin1[] = {"\vilas_aks\sounds\APSs", 0.794328, 1, 700};
		reloadMagazineSound[] = {"\vilas_aks\sounds\APSReload", 0.0316228, 1, 20};
		magazines[] = {"8Rnd_9x18_Makarov","8Rnd_9x18_MakarovSD"};
		ffCount = 1;
		aiRateOfFire = 0.1;	// delay between shots at given distance
		aiRateOfFireDistance = 50;
		modes[] = {"Single", "AI_single", "FullAuto"};
		
		class Single  {
			autoFire = false;
			begin1[] = {"\vilas_aks\sounds\APSs", 0.794328, 1, 700};
			soundBegin[] = {"begin1", 1};
			recoil = "recoil_single_pistol_2outof3";
			recoilProne = "recoil_single_pistol_2outof3";
			reloadTime = 0.1;
			dispersion = 0.0025;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.015;
		};

		class AI_Single : Single {
			dispersion = 0.004;
			midRange = 30;
			midRangeProbab = 0.6;
			maxRange = 70;
			maxRangeProbab = 0.001;
			showtoplayer = false;
		};

		class FullAuto  {
			begin1[] = {"\vilas_aks\sounds\APSs", 0.794328, 1, 700};
			soundBegin[] = {"begin1", 1};
			recoil = "subMachineGunBase";
			recoilProne = "subMachineGunBase";
			reloadTime = 0.09;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 20;
			midRangeProbab = 0.1;
			maxRange = 40;
			maxRangeProbab = 0.001;
		};
		
		class Library {
			libTextDesc = $STR_TGW_VIL_APS_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_APS_SHORT;
	};
	
	class vil_apssd : vil_aps {
		model = "\vilas_aks\vil_apssd";
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		displayName = $STR_TGW_VIL_APB;
		magazines[] = {"8Rnd_9x18_Makarov","8Rnd_9x18_MakarovSD"};
		picture = "\vilas_aks\ico\w_vil_apb_ca.paa";
		begin1[] = {"\vilas_aks\sounds\APSsds", 0.316228, 1, 200};
		reloadMagazineSound[] = {"\vilas_aks\sounds\APSReload", 0.0316228, 1, 20};
		modes[] = {"Single", "AI_single", "FullAuto"};
		
		class Single  {
			fireLightDuration = 0.0;
			fireLightIntensity = 0.0;
			begin1[] = {"\vilas_aks\sounds\APSsds", 0.316228, 1, 200};
			soundBegin[] = {"begin1", 1};
		};
		class AI_Single : Single {
			fireLightDuration = 0.0;
			fireLightIntensity = 0.0;
			begin1[] = {"\vilas_aks\sounds\APSsds", 0.316228, 1, 200};
			soundBegin[] = {"begin1", 1};
			showtoplayer = 0;
		};
		class FullAuto  {
			fireLightDuration = 0.0;
			fireLightIntensity = 0.0;
			begin1[] = {"\vilas_aks\sounds\APSsds", 0.316228, 1, 200};
			soundBegin[] = {"begin1", 1};
		};
		
		class Library {
			libTextDesc = $STR_TGW_VIL_APB_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		
		descriptionShort = $STR_TGW_VIL_APB_SHORT;
	};
	
	class Vil_PYA : Makarov {
		scope = public;
		model = "\vilas_aks\vil_pya";
		picture = "\vilas_aks\ico\w_vil_pya_ca.paa";
		midRange = 20;
		maxRangeProbab = 0.01;
		optics = true;
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		displayName = $STR_TGW_VIL_PYA;
		magazines[] = {"15Rnd_9x19_M9", "15Rnd_9x19_M9SD"};
		begin1[] = {"\vilas_aks\sounds\pya_fire1", 0.794328, 1, 700};
		soundBegin[] = {"begin1", 1};
		reloadMagazineSound[] = {"\vilas_aks\sounds\pya_reload", 0.1, 1, 20};
		class Library {
			libTextDesc = $STR_TGW_VIL_PYA_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_PYA_SHORT;
	};
	
	
	
	/*********************************************************
			Vilas Eastern Weapons Machine Guns
	**********************************************************/
	
	
	class vil_PKP : Pecheneg {
		scope = public;
		model = "\vilas_aks\vil_pkp";
		displayName = $STR_VIL_PKP;
		modelOptics = "-";
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.5;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
		discreteDistanceInitIndex = 2;
		picture = "\vilas_aks\ico\w_vil_pkp_mg_ca.paa";
		
		class short : short {
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		
		class far : far {
			maxRange = 1000;
		};
		
		class Library {
			libTextDesc = $STR_LIB_PECHENEG;
		};
		class Armory {
			type = 7;
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_PKP_EOT : vil_PKP {
		scope = public;
		class Armory {
			type = 7;
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_pkp_eot";
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 0;
		displayName = $STR_VIL_PKP_EOT;
		picture = "\vilas_aks\ico\w_vil_pkp_mg_eot_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	
	class vil_PK : PK {
		scope = public;
		model = "\vilas_aks\vil_pk";
		displayName = $STR_TGW_VIL_PK;
		picture = "\vilas_aks\ico\pk.paa";
		weaponInfoType = "RscWeaponZeroing";
		reloadMagazineSound[] = {"\vilas_aks\sounds\PKReload", 0.0562341, 1, 40};
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
		discreteDistanceInitIndex = 2;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Armory {
			type = 7;
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_zastava_m84 : PK {
		scope = public;
		model = "\vilas_aks\vil_m84";
		displayName = $STR_VIL_M84;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		picture = "\vilas_aks\ico\m84_pk.paa";
		class Armory {
			type = 7;
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		class Library {
			libTextDesc = $STR_VIL_M84_LIB;
		};
	};
	
	class vil_PKM_N : PK {
		scope = public;
		model = "\vilas_aks\vil_pkm_n";
		displayName = $STR_TGW_VIL_PKMNSPU;
		picture = "\vilas_aks\ico\w_vil_pknspu_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics = "\vilas_aks\opt\optika_nspu2";
			class OpticsModes {
				class NSPU2 {
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"MLB_NV1gen_grain","MLB_NV1GEN_blur"}; //"OpticsCHAbera2", "OpticsBlur3","dkv_nspu_color", "dkv_nspu_grain","dkv_nspu_blur"	
					opticsZoomInit = 0.0623;
					opticsZoomMin = 0.0623;
					opticsZoomMax = 0.0623;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					memoryPointCamera = "opticView";
					visionMode[] = {"NVG"};
					opticsFlare = true;
					opticsDisablePeripherialVision = true;
					weaponInfoType = "RscWeaponZeroing";
					discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
					discreteDistanceInitIndex = 2;
					cameraDir = "";
					};
			};

		reloadMagazineSound[] = {"\vilas_aks\sounds\PKReload", 0.0562341, 1, 40};
		class Armory {
			type = 7;
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_PKM : vil_PK {
		scope = public;
		model = "\vilas_aks\vil_pkm";
		displayName = $STR_TGW_VIL_PKM;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		reloadMagazineSound[] = {"\vilas_aks\sounds\PKReload", 0.0562341, 1, 40};
		class Armory {
			type = 7;
			disabled = 1;
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_RPK : AK_47_M {
		scope = public;
		model = "\vilas_aks\vil_rpk";
		displayName = $STR_TGW_VIL_RPK47;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		picture = "\vilas_aks\ico\rpk.paa";
		aiDispersionCoefY = 14.0;
		aiDispersionCoefX = 14.0;
		dexterity = 1.21;
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AKSD"};
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\Data\Anim\AK.rtm"};
		modes[] = {"manual", "close", "short", "medium", "Single"};

		class manual : FullAuto {
			begin1[] = {"\vilas_aks\sounds\rpk_fire2", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
			reloadTime = 0.1;
			recoil = "recoil_auto_primary_4outof10";
			recoilProne = "recoil_auto_machinegun_prone_3outof10";
			dispersion = 0.0012;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = true;
		};

		class close : manual {
			burst = 10;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = false;
		};

		class short : close {
			burst = 8;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};

		class medium : close {
			burst = 12;
			aiRateOfFire = 2.5;	// delay between shots at given distance
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};

		class Single : Single {
			begin1[] = {"\vilas_aks\sounds\rpk_fire2", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
			reloadTime = 0.1;
			recoil = "recoil_single_primary_4outof10";
			recoilProne = "recoil_single_primary_prone_4outof10";
			dispersion = 0.00125;
			aiRateOfFireDistance = 400;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.5;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		
		class Library {
			libTextDesc = $STR_TGW_VIL_RPK47_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_RPK47_SHORT;
	};
	
	class vil_RPK75 : vil_RPK {
		scope = public;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		displayName = $STR_TGW_VIL_RPK75;
		model = "\vilas_aks\vil_rpk75";
		picture = "\CA\weapons\AK\data\Equip\w_RPK_74_CA.paa";
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AKSD"};
	};
	
	class vil_RPK75_Romania : vil_RPK {
		scope = public;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		displayName = $STR_VIL_AES10;
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AKSD"};
		picture = "\vilas_aks\ico\rom_rpk.paa";
		model = "\vilas_aks\vil_rpk75rom";
		class Library {
			libTextDesc = $STR_VIL_AES10_LIB;
		};
	};
	
	class vil_RPK75_M72 : vil_RPK {
		scope = public;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		displayName = $STR_VIL_M72;
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AKSD"};
		model = "\vilas_aks\vil_m72";
		picture = "\vilas_aks\ico\m72_rpk.paa";
		class Library {
			libTextDesc = $STR_VIL_M72_LIB;
		};
	};
	
	class vil_RPD : vil_RPK {
		scope = public;
		model = "\vilas_aks\vil_rpd";
		displayName = $STR_VIL_RPD;
		picture = "\vilas_aks\ico\w_vil_rpd_ca.paa";
		reloadMagazineSound[] = {"\vilas_aks\sounds\rpd_reload", 0.0562341, 1, 25};
		magazines[] = { "vil_100Rnd_762x54_PK","30Rnd_545x39_AK","30Rnd_545x39_AKSD"};
		magazineReloadTime = 8;
		modes[] = {"manual", "close", "short", "medium"};

		class manual : manual {
			displayName = "";
			dispersion = 0.00125;
			begin1[] = {"\vilas_aks\sounds\rpd_fire1", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
		};

		class close : manual {
			burst = 10;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = false;
		};

		class short : close {
			burst = 8;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};

		class medium : close {
			burst = 12;
			aiRateOfFire = 2.5;	// delay between shots at given distance
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 620;
			maxRangeProbab = 0.04;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		class Library {
			libTextDesc = $STR_VIL_RPD_LIB;
		};
		descriptionShort = $STR_VIL_RPD_SHORT;
	};
	
	class vil_RPK74 : RPK_74 {
		scope = public;
		model = "\vilas_aks\vil_rpk74";
		displayName = $STR_TGW_VIL_RPK74;
		picture = "\vilas_aks\ico\rpk74.paa";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		modes[] = {"manual", "close", "short", "medium", "Single"};
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AKSD"};

		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};

	class vil_RPK74M_P29 : vil_RPK74 {
		scope = public;
		model = "\vilas_aks\vil_rpk74m_p29";
		picture = "\vilas_aks\ico\w_vil_rpkm_p29_ca.paa";
		displayName = $STR_TGW_VIL_RPK74MP29;
		modelOptics = "\vilas_aks\opt\optika_1p29";
		class OpticsModes {
			class 1P29 {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				opticsZoomInit = 0.0623;
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				weaponInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
				cameraDir = "";
			};
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_RPK74M : vil_RPK74 {
		scope = public;
		model = "\vilas_aks\vil_rpk74m";
		picture = "\vilas_aks\ico\rpk74m.paa";
		displayName = $STR_TGW_VIL_RPK74M;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		class Library {
			libTextDesc = $STR_TGW_VIL_RPK74M_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_RPK74M;
	};
	
	class vil_RPK74M_N : vil_RPK74 {
		scope = public;
		model = "\vilas_aks\vil_rpk74m_pn58";
		displayName = $STR_TGW_VIL_RPK74MN;
		picture = "\vilas_aks\ico\w_vil_rpkm_nspu_ca.paa";
		modelOptics = "\vilas_aks\opt\optika_nspu2";
		class OpticsModes {
			class NSPU2 {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"MLB_NV1gen_grain","MLB_NV1GEN_blur"};
				opticsZoomInit = 0.0623;
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				memoryPointCamera = "opticView";
				visionMode[] = {"NVG"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				weaponInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
				cameraDir = "";
			};
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	
	/*********************************************************
			Vilas Eastern Weapons Special Purpose
	**********************************************************/
	
	
	class vil_VSS_PSO : VSS_vintorez {
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		htMin = 1;
		htMax = 420;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_vss";
		modelOptics = "\vilas_aks\opt\optika_psom";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 1;
		
		class OpticsModes {
			class PSOM {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera3", "OpticsBlur3"};
				opticsZoomInit = 0.0623;
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				weaponInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 1;
				cameraDir = "";
			};
		};
			
		displayName = $STR_TGW_VIL_VSS_PSO;
		modes[] = {"Single","Full"};
		magazines[] = {"10Rnd_9x39_SP5_VSS","20Rnd_9x39_SP5_VSS"};
		
		class Single : Single {
			midRange = 200;
			maxRange = 400;
			maxRangeProbab = 0.01;
		};
		
		class Full : Full {
			maxRange = 100;
			maxRangeProbab = 0.01;
		};
	};
	
	class vil_VSS_N : vil_VSS_PSO {
		scope = public;
		model = "\vilas_aks\vil_vss_n";
		displayName = $STR_TGW_VIL_VSS_NSPU;
		picture = "\vilas_aks\ico\vss_n.paa";
		modelOptics = "\vilas_aks\opt\optika_nspu3";
		
		class OpticsModes :OpticsModes {
			class NSPU3 : PSOM {
				opticsPPEffects[] = {"dkv_nspu_grain","dkv_nspu_blur"};
				visionMode[] = {"NVG"};
				discreteDistance[] = {100, 200, 300, 400, 500, 600};
				discreteDistanceInitIndex = 2;
			};
		};
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
	};
		
	class vil_VAL : vil_VSS_PSO {
		scope = public;
		picture = "\vilas_aks\ico\val.paa";
		model = "\vilas_aks\vil_val";
		displayName = $STR_TGW_VIL_VAL;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics = "-";
		optics = false;
		class OpticsModes :OpticsModes {
			class IronSights : PSOM {
				visionMode[] = {};
				memoryPointCamera = "eye";
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.5;
				discreteDistance[] = {25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400};
				discreteDistanceInitIndex = 7;
				opticsFlare = false;
				opticsDisablePeripherialVision = false;
			};
		};
		modes[] = {"Single","Full"};
		magazines[] = {"10Rnd_9x39_SP5_VSS","20Rnd_9x39_SP5_VSS"};
		class Single : Single {
			dispersion = 0.0018;
			begin1[] = {"\vilas_aks\sounds\vintorez_fire1", db10, 1, 50};
			soundBegin[] = {"begin1", 1.0};
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.01;
		};
		
		class Full : Full {
			dispersion = 0.0018;
			begin1[] = {"\vilas_aks\sounds\vintorez_fire1", db10, 1, 50};
			soundBegin[] = {"begin1", 1.0};
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 60;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
		};
		class Library {
			libTextDesc = $STR_TGW_VIL_VAL_LIB;
		};
		class Armory {
			description = "$STR_TGW_VIL_VAL_LIB";
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_VAL_SHORT;
	};
	
	class vil_VAL_C : vil_VAL {
		scope = public;
		model = "\vilas_aks\vil_val_c";
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 0;
		displayName = $STR_TGW_VIL_VAL_KOBRA;
		picture = "\vilas_aks\ico\w_vil_val_kob_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_VAL_N : vil_VSS_N {
		scope = public;
		model = "\vilas_aks\vil_val_n";
		displayName = $STR_TGW_VIL_VAL_NSPU;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics = "\vilas_aks\opt\optika_nspu3";
		class OpticsModes :OpticsModes {
			class NSPU3 : NSPU3 {
				opticsZoomInit = 0.0623;
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
			};
		};
		picture = "\vilas_aks\ico\w_vil_val_nspu_ca.paa";
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class bizon : Rifle {
		class Single;
		class Burst;
		class FullAuto;
		class M203Muzzle;
	};
	
	class vil_Vikhr : bizon {
		scope = public;
		reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-ak-2ivan", 0.0707946, 1, 20};
		model = "\vilas_aks\vil_vikr";
		displayName = $STR_TGW_VIL_SR3;
		picture = "\vilas_aks\ico\vikhr.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"10Rnd_9x39_SP5_VSS", "20Rnd_9x39_SP5_VSS"};
		descriptionShort = $STR_TGW_VIL_SR3_SHORT;
		dexterity = 1.57;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\Data\Anim\AK.rtm"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200};
		discreteDistanceInitIndex = 0;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		modes[] = {"Single", "FullAuto"};
		
		class Single : Single {
			reloadTime = 0.1;
			recoil = "recoil_single_primary_5outof10";
			recoilProne = "recoil_single_primary_prone_5outof10";
			dispersion = 0.0028;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.05;
		};
		class FullAuto : FullAuto {
			reloadTime = 0.1;
			ffCount = 30;
			recoil = "recoil_auto_primary_5outof10";
			recoilProne = "recoil_auto_primary_prone_5outof10";
			dispersion = 0.003;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
		};
		class Library {
			libTextDesc = $STR_TGW_VIL_SR3_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_9a91 : vil_Vikhr {
		scope = public;
		picture = "\vilas_aks\ico\9a91.paa";
		model = "\vilas_aks\vil_9a91";
		displayName = $STR_TGW_VIL_9A91;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\HKMP5.rtm"};
		class Library {
			libTextDesc = $STR_TGW_VIL_9A91_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_9A91_SHORT;
	};
	
	class vil_9a91_c : vil_9a91 {
		scope = public;
		model = "\vilas_aks\vil_9a91_c";
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 0;
		displayName = $STR_TGW_VIL_9A91_KOBRA;
		picture = "\vilas_aks\ico\w_vil_9a91_kobra_ca.paa";
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_9A91_SHORT;
	};
	
	class vil_9a91_csd : vil_9a91 {
		scope = public;
		picture = "\vilas_aks\ico\w_vil_9a91sd_kobra_ca.paa";
		model = "\vilas_aks\vil_9a91_sd";
		displayName = $STR_TGW_VIL_9A91_SD;
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 0;
		magazines[] = {"10Rnd_9x39_SP5_VSS","20Rnd_9x39_SP5_VSS"};
		descriptionShort = $STR_TGW_VIL_9A91_SHORT;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		
		class Single : Single {
			begin1[] = {"\vilas_aks\sounds\val_fire1", db8, 1, 125};
			soundBegin[] = {"begin1", 1.0};
		};
		class FullAuto : FullAuto {
			begin1[] = {"\vilas_aks\sounds\val_fire1", db8, 1, 125};
			soundBegin[] = {"begin1", 1.0};
		};
};
	
	class vil_vsk94 : vil_VAL {
		scope = public;
		picture = "\vilas_aks\ico\w_vil_vsk94_ca.paa";
		model = "\vilas_aks\vil_vsk94";
		displayName = VSK94;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 1;
		magazines[] = {"10Rnd_9x39_SP5_VSS","20Rnd_9x39_SP5_VSS"};
		descriptionShort = $STR_TGW_VIL_9A91_SHORT;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		modelOptics = "\ca\weapons\AK\pso_optics";
		class OpticsModes {
			class PSO {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera3", "OpticsBlur3"};
				opticsZoomInit = 0.0623;
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				weaponInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 1;
				cameraDir = "";
			};
			class Ironsights {
				OpticsID = 2;
				UseModelOptics = 0;
				MemoryPointCamera = "Eye";
				OpticsPPEffects[] = {};
				OpticsFlare = false;
				OpticsDisablePeripherialVision = false;
				OpticsZoomMin = 0.25;
				OpticsZoomMax = 1.1;
				OpticsZoomInit = 0.5;
				DistanceZoomMin = 200;
				DistanceZoomMax = 200;
				VisionMode[] = {};
				CameraDir = "";
		};
};
};

	class vil_Groza_HG : AKS_BASE {
		scope = public;
		model = "\vilas_aks\vil_groza_hg";
		displayName = $STR_TGW_VIL_OC14;
		picture = "\vilas_aks\ico\oc_base.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"10Rnd_9x39_SP5_VSS","20Rnd_9x39_SP5_VSS"};
		handAnim[] = {"OFP2_ManSkeleton", "\vilas_aks\Anim\groza_hg.rtm"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 1;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		modes[] = {"Single", "FullAuto"};
		
		class Single : Single {
			begin1[] = {"\vilas_aks\sounds\groza_fire1", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
			dispersion = 0.0018;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
		};
		class FullAuto : FullAuto {
			begin1[] = {"\vilas_aks\sounds\groza_fire1", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
			ffCount = 30;
			dispersion = 0.0018;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.05;
		};
		class Library {
			libTextDesc = $STR_TGW_VIL_OC14_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_OC14_SHORT;
	};
	
	class vil_Groza_SC : vil_Groza_HG {
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		scope = public;
		model = "\vilas_aks\vil_groza_sc";
		displayName = $STR_TGW_VIL_OC14_SCOPE;
		picture = "\vilas_aks\ico\oc_sc.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"10Rnd_9x39_SP5_VSS","20Rnd_9x39_SP5_VSS"};
		handAnim[] = {"OFP2_ManSkeleton", "\vilas_aks\Anim\groza_sc.rtm"};
		modelOptics = "\vilas_aks\opt\optika_psom";
		class OpticsModes {
			class PSOM {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera3", "OpticsBlur3"};
				opticsZoomInit = 0.0623;
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				weaponInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 1;
				cameraDir = "";
			};
		};

		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_OC14_SHORT;
		
		class Single : Single {
			begin1[] = {"\vilas_aks\sounds\groza_sd_fire1", db8, 1, 150};
			soundBegin[] = {"begin1", 1.0};
		};
		class FullAuto : FullAuto {
			begin1[] = {"\vilas_aks\sounds\groza_sd_fire1", db8, 1, 150};
			soundBegin[] = {"begin1", 1.0};
		};
	};

	class vil_Groza_GL : vil_Groza_HG {
		scope = public;
		model = "\vilas_aks\vil_groza_gl";
		displayName = $STR_TGW_VIL_OC14_GL;
		picture = "\vilas_aks\ico\oc_gl.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\vilas_aks\Anim\groza_sd.rtm"};
		muzzles[] = {this, "GP25Muzzle"};
		
		class GP25Muzzle : GP25Muzzle {};
		
		dexterity = 1.5;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_OC14_GL_SHORT;
	};
	
	class vil_Groza_SD : vil_Groza_HG {
		scope = public;
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		model = "\vilas_aks\vil_groza_sd";
		displayName = $STR_TGW_VIL_OC14_SD;
		magazines[] = {"10Rnd_9x39_SP5_VSS","20Rnd_9x39_SP5_VSS"};
		handAnim[] = {"OFP2_ManSkeleton", "\vilas_aks\Anim\groza_sd.rtm"};
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		picture = "\vilas_aks\ico\w_vil_oc_sd_ca.paa";
		visionMode[] = {"Normal"};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_OC14_SHORT;
		
		class Single : Single {
			begin1[] = {"\vilas_aks\sounds\groza_sd_fire1", db8, 1, 150};
			soundBegin[] = {"begin1", 1.0};
		};
		
		class FullAuto : FullAuto {
			begin1[] = {"\vilas_aks\sounds\groza_sd_fire1", db8, 1, 150};
			soundBegin[] = {"begin1", 1.0};
		};
	};
	
	
	/*********************************************************
			Vilas Eastern Weapons AK47 variants
	**********************************************************/
	
	class vil_AKS_47 : vil_AKS_BASE {
		scope = public;
		model = "\vilas_aks\ak47s";
		picture = "\vilas_aks\ico\w_vil_ak47s_ca.paa";
		displayName = $STR_TGW_VIL_AKS47;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_AKS47_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AKS47_SHORT;
	};
	
	class vil_AK_47_49 : vil_AK47_BASE {
		scope = public;
		picture = "\vilas_aks\ico\w_vil_ak4749_ca.paa";
		model = "\vilas_aks\vil_ak_4749";
		displayName = $STR_TGW_VIL_AK4749;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_AK4749_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AK4749_SHORT;
	};
	
	class vil_AK_47 : vil_AK47_BASE {
		scope = public;
		model = "\vilas_aks\vil_ak_47";
		picture = "\vilas_aks\ico\w_vil_ak47_ca.paa";
		displayName = $STR_TGW_VIL_AK47;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_AK47_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AK47_SHORT;
	};
	
	class vil_AKMSB : AKS_74_UN_kobra {
		scope = public;
		model = "\vilas_aks\vil_akmsb";
		displayName = $STR_TGW_VIL_AKMSB;
		picture = "\vilas_aks\ico\akmsb.paa";
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AKSD"};
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 1;
		distanceZoomMin = 100;
		distanceZoomMax = 100;

		class Single : Single {
			begin1[] = {"\vilas_aks\sounds\ak47sd_fire1", db10, 1, 150};
			soundBegin[] = {"begin1", 1.0};
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			dispersion = 0.002;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.04;
		};
		class FullAuto : FullAuto {
			begin1[] = {"\vilas_aks\sounds\ak47sd_fire1", db10, 1, 150};
			soundBegin[] = {"begin1", 1.0};
			reloadTime = 0.1;
			recoil = "recoil_auto_primary_4outof10";
			recoilProne = "recoil_auto_primary_prone_4outof10";
			dispersion = 0.0025;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
		};
		class Library {
			libTextDesc = $STR_TGW_VIL_AKMSB_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AKMSB_SHORT;
	};
	
	class vil_AKM : vil_AKM_BASE {
		scope = public;
		model = "\vilas_aks\vil_akm";
		picture = "\vilas_aks\ico\w_vil_akm_ca.paa";
		displayName = $STR_VIL_AKM;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Armory {
			disabled = 1;
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_AKM_GL : vil_AKM_BASE {
		scope = public;
		model = "\vilas_aks\vil_akm_gp";
		displayName = $STR_VIL_AKMGP25;
		picture = "\vilas_aks\ico\w_vil_akmgp25_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
		muzzles[] = {this, "GP25Muzzle"};
		dexterity = 1.5;
		class Library {
			libTextDesc = $STR_VIL_AKMGP25_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_AKMS : vil_AK47_BASE {
		scope = public;
		model = "\vilas_aks\vil_akms";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		displayName = $STR_VIL_AKMS;
		picture = "\vilas_aks\ico\w_vil_akms_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	
	class vil_AKMS_GP25 : vil_AKMS {
		scope = public;
		model = "\vilas_aks\vil_akms_gp";
		displayName = $STR_TGW_VIL_AKMSGL;
		picture = "\vilas_aks\ico\w_vil_akmsgl_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
		muzzles[] = {this, "GP25Muzzle"};
		dexterity = 1.5;
		class Library {
			libTextDesc = $STR_TGW_VIL_AKMSGL_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AKMSGL_SHORT;
	};
	
	
	
	/*********************************************************
			Vilas Eastern Weapons AK-47 knockoffs
	**********************************************************/
	
	
	class vil_AK_47_m1 : vil_AK47_BASE {
		scope = public;
		model = "\vilas_aks\vil_ak_47_m1";
		picture = "\vilas_aks\ico\ak.paa";
		displayName = $STR_TGW_VIL_AK47M1;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_AK47M1_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AK47M1_SHORT;
	};
	
	class vil_AK_nato_m1 : vil_NATO_AK {
		scope = public;
		model = "\vilas_aks\vil_ak_47_m1nato";
		picture = "\vilas_aks\ico\w_vil_arm1_ca.paa";
		displayName = $STR_VIL_ARM1;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_VIL_ARM1_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_VIL_ARM1_SHORT;
	};
	
	class vil_M70 : vil_AKS_BASE {
		scope = public;
		picture = "\vilas_aks\ico\m70.paa";
		model = "\vilas_aks\vil_m70";
		displayName = $STR_TGW_VIL_M70;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_M70_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_M70_SHORT;
	};
	
	class vil_M70B : vil_AKM_BASE  {
		scope = public;
		picture = "\vilas_aks\ico\w_vil_m70b_ca.paa";
		model = "\vilas_aks\vil_m70b";
		displayName = $STR_VIL_M70B;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	//needs pic
	class vil_M64 : vil_AK47_BASE {
		scope = public;
		picture = "\vilas_aks\ico\w_vil_m64_ca.paa";	//placeholder
		model = "\vilas_aks\vil_m64";
		displayName = $STR_VIL_M64;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_VIL_M64_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_M70_SHORT;
	};
	
	class vil_ASH82 : vil_AKM_BASE {
		scope = public;
		model = "\vilas_aks\ash82";
		picture = "\vilas_aks\ico\w_vil_ak47s_ca.paa";
		displayName = $STR_VIL_ASH82;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		class Library {
			libTextDesc = $STR_VIL_ASH82_LIB;
		};
	};
	
	class vil_AMD : vil_AKS_BASE {
		scope = public;
		picture = "\vilas_aks\ico\w_vil_amd65_ca.paa";
		model = "\vilas_aks\vil_amd";
		displayName = $STR_TGW_VIL_AMD;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_AMD_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AMD_SHORT;
	};
	
	class vil_AMD63 : vil_AKM_BASE {
		scope = public;
		picture = "\vilas_aks\ico\w_vil_amd63_ca.paa";
		model = "\vilas_aks\vil_amd63";
		displayName = $STR_VIL_AMD63;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_VIL_AMD63_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AMD_SHORT;
	};

	class vil_PMI : vil_AK47_BASE {
		scope = public;
		model = "\vilas_aks\vil_rakm";
		picture = "\vilas_aks\ico\roman.paa";
		displayName = $STR_TGW_VIL_PMI;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_PMI_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_PMI_SHORT;
	};
	
	class vil_PMIS : vil_AKS_BASE {
		scope = public;
		model = "\vilas_aks\vil_rakms";
		picture = "\vilas_aks\ico\rom_ak.paa";
		displayName = $STR_VIL_PMI65;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_PMI_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_PMI_SHORT;
	};
	
	class vil_MPi : vil_AKS_BASE {
		scope = public;
		model = "\vilas_aks\vil_ddr";
		picture = "\vilas_aks\ico\ddr.paa";
		displayName = $STR_TGW_VIL_MPI;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_MPI_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_MPI_SHORT;
	};

	class vil_AK_nato_m80 : vil_NATO_AK {
		scope = public;
		model = "\vilas_aks\vil_m80";
		picture = "\vilas_aks\ico\w_vil_zastm80_ca.paa";
		displayName = $STR_VIL_ZASTAVA_M80;
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AKSD"};
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_VIL_ZASTAVA_M80_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_VIL_ZASTAVA_M80_SHORT;
	};
	
	
	
	/*********************************************************
			Vilas Eastern Weapons AK-74 versions
	**********************************************************/
	
	class vil_AKs_74_u : AKS_74_U {
		scope = public;
		model = "\vilas_aks\vil_aks_74u";
		displayName = $STR_DN_AKS74_U;
		class Armory {
			disabled = 1;
			author = $STR_AUTHOR_VILAS;
		};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {350, 500};
		discreteDistanceInitIndex = 0;

		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		
		class Single : Single {
			dispersion = 0.00125;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.01;
		};
		class FullAuto : FullAuto {
			ffCount = 30;
			recoil = "recoil_auto_primary_5outof10";
			recoilProne = "recoil_auto_primary_prone_5outof10";
			dispersion = 0.00125;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.05;
		};
	}; 

	class vil_AKs_74_u45 : AKS_74_U {
		scope = public;
		model = "\vilas_aks\vil_aks_74u_45";
		displayName = $STR_DN_AKS74_U;
		class Armory {
			disabled = 1;
			author = $STR_AUTHOR_VILAS;
		};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {350, 500};
		discreteDistanceInitIndex = 0;
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AKSD"};
	  
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	  
		class Single : Single {
			dispersion = 0.00125;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.01;
		};
		class FullAuto : FullAuto {
			ffCount = 30;
			recoil = "recoil_auto_primary_5outof10";
			recoilProne = "recoil_auto_primary_prone_5outof10";
			dispersion = 0.00125;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.05;
		};
	};
	
	class Vil_AKS_74_UN_kobra : AKS_74_UN_kobra {
		model = "\vilas_aks\vil_aks_74u_b";
		displayName = $STR_TGW_VIL_AKS74UN;
		class Armory {
			disabled = 1;
			author = $STR_AUTHOR_VILAS;
		};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {350, 500};
		discreteDistanceInitIndex = 0;
	};
	
	class Vil_AKS_74_UB : AKS_74_UN_kobra {
		model = "\vilas_aks\vil_aks_74u_b";
		displayName = $STR_TGW_VIL_AKS74UB;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {350, 500};
		discreteDistanceInitIndex = 0;
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		class Library {
			libTextDesc = $STR_TGW_VIL_AKS74UB_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AKS74UB_SHORT;
		picture = "\ca\weapons\AK\Data\Equip\w_aks74un_ca.paa";
	};
	
	class vil_AK_74 : AK_74 {
		scope = public;
		model = "\vilas_aks\vil_ak_74";
		displayName = $STR_DN_AK74;
		class Armory {
			disabled = 1;
			author = $STR_AUTHOR_VILAS;
		};
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"30Rnd_545x39_AK", "30Rnd_545x39_AKSD"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		class GP30Muzzle : GP25Muzzle {
			displayName = $STR_TGW_VIL_GP30;
			weaponInfoType = "RscWeaponEmpty";
			//weaponInfoType = "RscWeaponZeroing";
			//discreteDistance[] = {50, 100, 150, 200, 250, 300, 350, 400;
			//discreteDistanceInitIndex = 3;
			begin1[] = {"\vilas_aks\sounds\gp30_fire1", 1.77828, 1, 100};
			soundBegin[] = {"begin1", 1};
		};
	};
	
	class vil_AK_74_gp : vil_AK_74 {
		scope = public;
		class Armory {
			disabled = 1;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_ak_74_gp";
		displayName = $STR_TGW_VIL_AK74_GP25;
		muzzles[] = {"this", "GP25Muzzle"};
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
		descriptionShort = $STR_TGW_VIL_AKS74GP25_SHORT;
	};
	
	class vil_AK_74_N : vil_AK_74 {
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		scope = public;
		model = "\vilas_aks\vil_ak_74_pn58";
		displayName = $STR_TGW_VIL_AK74NSPU;
		picture = "\vilas_aks\ico\ak74_n.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics = "\vilas_aks\opt\optika_nspu2";
		class OpticsModes {
			class NSPU2 {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"MLB_NV1gen_grain","MLB_NV1GEN_blur"};
				opticsZoomInit = 0.0623;
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				memoryPointCamera = "opticView";
				visionMode[] = {"NVG"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				weaponInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
				cameraDir = "";
			};
		};
			
	};
	
	class vil_AKS_74 : vil_AK_74 {
		class Armory {
			disabled = 1;
			author = $STR_AUTHOR_VILAS;
		};
		dexterity = 1.78;
		scope = public;
		model = "\vilas_aks\vil_aks_74";
		picture = "\ca\weapons\AK\Data\Equip\w_aks74_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		displayName = $STR_TGW_VIL_AKS74;
		class Library {
			libTextDesc = $STR_TGW_VIL_AKS74_LIB;
		};
	};
	
	class vil_AKS_74_gp : vil_AKS_74 {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_aks_74_gp";
		picture = "\vilas_aks\ico\w_vil_aks74gp25_ca.paa";
		displayName = $STR_TGW_VIL_AKS74GP25;
		descriptionShort = $STR_TGW_VIL_AKS74GP25_SHORT;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
		muzzles[] = {this, "GP25Muzzle"};
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			disabled = 0;
			libTextDesc = $STR_LIB_AK74_GL;
		};
	};
	
	class vil_AKS_74p : vil_AKS_74 {
		scope = public;
		class Armory {
			disabled = 1;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_aks_74p";
		picture = "\vilas_aks\ico\aksp.paa";
		displayName = $STR_TGW_VIL_AKS74P;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};	 

	class vil_AKS_74p_45 : vil_AKS_74 {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_aks_74p_45";
		picture = "\vilas_aks\ico\aksp.paa";
		displayName = $STR_TGW_VIL_AKS74P;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"30Rnd_545x39_AK", "30Rnd_545x39_AKSD"};
	};	 

	class vil_AK_74P : vil_AK_74 {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_ak_74p";
		picture = "\vilas_aks\ico\w_vil_ak74p_ca.paa";
		displayName = $STR_TGW_VIL_AK74P;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	
	class vil_AKS_74p_gp : vil_AKS_74_gp {
		scope = public;
		model = "\vilas_aks\vil_aks_74p_gp";
		picture = "\vilas_aks\ico\aksp_gl.paa";
		displayName = $STR_TGW_VIL_AKS74PGP25;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
		displayNameShort = $STR_TGW_VIL_SN_AKS74PGP25;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_AK_74m : vil_AK_74 {
		scope = public;
		model = "\vilas_aks\vil_ak_74m";
		picture = "\vilas_aks\ico\ak74m.paa";
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		displayName = $STR_TGW_VIL_AK74M;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	
	class vil_AK_74M_N : vil_AK_74 {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_ak_74m_n";
		picture = "\vilas_aks\ico\w_vil_ak74m_nspu_ca.paa";
		displayName = $STR_TGW_VIL_AK74MNSPU;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics = "\vilas_aks\opt\optika_nspu3";
		class OpticsModes {
			class NSPU3 {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"dkv_nspu_grain","dkv_nspu_blur"};
				opticsZoomInit = 0.0623;
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				memoryPointCamera = "opticView";
				visionMode[] = {"NVG"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				weaponInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
				cameraDir = "";
			};
   				class Ironsigts {
    				opticsID = 2;
    				useModelOptics = 0;
				opticsPPEffects[] = {};
    				opticsFlare = 0;
    				opticsDisablePeripherialVision = 0;
    				opticsZoomMin = 0.3;
    				opticsZoomMax = 0.9;
    				opticsZoomInit = 0.9;
    				memoryPointCamera = "eye";
    				distanceZoomMin = 300;
    				distanceZoomMax = 300;
    				discreteDistance[] = {100};
    				discreteDistanceInitIndex = 0;
    				visionMode[] = {};
			};
		};
};
	
	class vil_AK_74M_PSO : vil_AK_74 {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_ak_74m_pso";
		displayName = $STR_TGW_VIL_AK74M_PSO;
		picture = "\vilas_aks\ico\w_vil_ak74m_pso_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics = "\ca\weapons\AK\pso_optics";
		class OpticsModes {
			class PSO {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera3", "OpticsBlur3"};
				opticsZoomInit = 0.063;
				opticsZoomMin = 0.063;
				opticsZoomMax = 0.063;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				weaponInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
				cameraDir = "";
			};
   				class Ironsigts: PSO
   				{
    				opticsID = 2;
    				opticsPPEffects[] = {};
				useModelOptics = 0;
    				opticsFlare = 0;
    				opticsDisablePeripherialVision = 0;
    				opticsZoomMin = 0.3;
    				opticsZoomMax = 0.9;
    				opticsZoomInit = 0.9;
    				memoryPointCamera = "eye";
    				distanceZoomMin = 300;
    				distanceZoomMax = 300;
    				discreteDistance[] = {100};
    				discreteDistanceInitIndex = 0;
    				visionMode[] = {};
			};
		};
	};
	
	class vil_AK_74m_k : vil_AK_74 {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_ak_74m_k";
		picture = "\vilas_aks\ico\w_vil_ak74m_col_ca.paa";
		displayName = $STR_TGW_VIL_AK74MK;
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {100};
		discreteDistanceInitIndex = 0;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	
	class vil_AK_74m_EOT : vil_AK_74m {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 0;
		model = "\vilas_aks\vil_ak_74m_eot";
		picture = "\vilas_aks\ico\w_vil_ak74m_eot_ca.paa";
		displayName = $STR_VIL_AK74M_EOT;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	
	//needs pic
	class vil_AK_74m_EOT_Alfa : vil_AK_74m {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 0;
		model = "\vilas_aks\vil_ak_74m_eot_Alfa";
		picture = "\vilas_aks\ico\w_vil_ak74m_eot_alfa_ca.paa";
		displayName = $STR_VIL_AK74M_EOT_GRIP;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
		
	};
	
	//needs pic
	class vil_AK_74m_EOT_FSB : vil_AK_74m {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 0;
		model = "\vilas_aks\vil_ak_74m_eot_FSB";
		picture = "\vilas_aks\ico\w_vil_ak74m_eot_ca.paa";
		displayName = $STR_VIL_AK74M_FSB;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
		magazines[] = {"30Rnd_545x39_AK", "30Rnd_545x39_AKSD"};	
		class Library {
			libTextDesc = $STR_VIL_AK74M_FSB_LIB;
		};
	};
	
	//needs pic
	class vil_AK_74m_EOT_FSB_45 : vil_AK_74m_EOT_FSB {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 0;
		model = "\vilas_aks\vil_ak_74m_eot_FSB_45";
		picture = "\vilas_aks\ico\w_vil_ak74m_eot_45_ca.paa";
		displayName = $STR_VIL_AK74M_FSB_RPK;
		magazines[] = {"30Rnd_545x39_AK", "30Rnd_545x39_AKSD"};	
		class Library {
			libTextDesc = $STR_VIL_AK74M_RPK_LIB;
		};
	};
	
	//needs pic
	class vil_AK_74m_EOT_FSB_60 : vil_AK_74m_EOT_FSB {
		scope = public;
		model = "\vilas_aks\vil_ak_74m_eot_FSB_60";
		picture = "\vilas_aks\ico\w_vil_ak74m_eot_60_ca.paa";
		displayName = $STR_VIL_AK74M_FSB_QUAD;
		magazines[] = {"30Rnd_545x39_AK", "30Rnd_545x39_AKSD"};
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 0;
		class Library {
			libTextDesc = $STR_VIL_AK74M_HC_LIB;
		};
	};
	
	class vil_AK_74m_c : vil_AK_74 {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_ak_74m_c";
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {100};
		discreteDistanceInitIndex = 0;
		picture = "\vilas_aks\ico\w_vil_ak74m_kobra_ca.paa";
		displayName = $STR_TGW_VIL_AK74M_KOB;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	
	class vil_AK_74m_p29 : vil_AK_74 {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_ak_74m_p29";
		displayName = $STR_TGW_VIL_AK74M_P29;
		picture = "\vilas_aks\ico\w_vil_ak74m_1p29_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics = "\vilas_aks\opt\optika_1p29";
		class OpticsModes {
			class 1P29 {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				opticsZoomInit = 0.0623;
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				weaponInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
				cameraDir = "";
			};
		};
	};
	
	class vil_AK_74m_gp_29 : vil_AK_74m_p29 {
		scope = public;
		model = "\vilas_aks\vil_ak_74m_gp_p29";
		displayName = $STR_TGW_VIL_AK74M_GL_P29;
		displayNameShort = $STR_TGW_VIL_SN_AK74M_GL_P29;
		muzzles[] = {this, "GP30Muzzle"};
		picture = "\vilas_aks\ico\w_vil_ak74mp29gl_ca.paa";
		descriptionShort = $STR_TGW_VIL_AKS74GP25_SHORT;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_AK_74m_gp : vil_AK_74m {
		scope = public;
		model = "\vilas_aks\vil_ak_74m_gp";
		displayName = $STR_TGW_VIL_AK74MGP30;
		muzzles[] = {this, "GP30Muzzle"};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		picture = "\vilas_aks\ico\ak74mgp30.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
		descriptionShort = $STR_TGW_VIL_AKS74GP25_SHORT;
	};

	
	/*********************************************************
			Vilas Eastern Weapons AK-74 derrivatives
	**********************************************************/
	
	//needs pic
	class vil_type88_1 : vil_AK_74 {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_type_881";
		picture = "\vilas_aks\ico\w_vil_type88_ca.paa";		//placeholder NK AK-74 pic
		displayName = $STR_VIL_NK_TYPE88;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_VIL_NK_TYPE88_LIB;
		};
		descriptionShort = $STR_TGW_VIL_AKS74GP25_SHORT;
	};
	
	class vil_PMI74S : vil_AKS_74 {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_rak74s";
		picture = "\vilas_aks\ico\rom_ak.paa";
		modes[] = {"FullAuto", "Burst", "Single"};
		displayName = $STR_VIL_PMI74S;
		class Burst : Burst {
			reloadTime = 0.0923;
			showToPlayer = true;
		};
		
		class Library {
			libTextDesc = $STR_VIL_PMI74_LIB;
		};
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	
	class vil_Rak74sgl : vil_PMI74S {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_rak74sgl";
		displayName = $STR_VIL_PMI74AG40;
		class AG40Muzzle : GP25Muzzle {
			displayName = $STR_VIL_AG40;
			weaponInfoType = "RscWeaponEmpty";
			//weaponInfoType = "RscWeaponZeroing";
			//discreteDistance[] = {50, 100, 150, 200, 250, 300, 350, 400, 450};
			//discreteDistanceInitIndex = 5;
			magazines[] = {"vil_1Rnd_HE_M203", "FlareWhite_M203", "FlareGreen_M203", "FlareRed_M203", "FlareYellow_M203"};
			reloadMagazineSound[] = {"\vilas_aks\sounds\ag40_reload", 0.0562341, 1, 10};
		};
		muzzles[] = {this, "AG40Muzzle"};
		
		picture = "\vilas_aks\ico\w_vil_pmigl_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		descriptionShort = $STR_DSS_AK74_GL;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
	};

	
	/*********************************************************
			Vilas Eastern Weapons AK-100 series
	**********************************************************/
	
	class vil_AK_101 : vil_NATO_AK {
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = public;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\Data\Anim\AK.rtm"};
		model = "\vilas_aks\vil_ak_101";
		picture = "\vilas_aks\ico\w_vil_ak101_ca.paa";
		displayName = $STR_TGW_VIL_AK101;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		class Library {
			libTextDesc = $STR_TGW_VIL_AK101_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AK101_SHORT;
	};
	
	class vil_AK_103 : AK_47_M {
		scope = public;
		model = "\vilas_aks\vil_ak_103";
		displayName = $STR_TGW_VIL_AK103;
		picture = "\vilas_aks\ico\w_vil_ak103_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AKSD"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;

		class Single : Single {
			dispersion = 0.00125;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.04;
			recoil = "recoil_single_primary_4outof10";
			recoilProne = "recoil_single_primary_prone_4outof10";
		};
		
		class Burst : Burst {
			dispersion = 0.00125;
			minRange = 1;
			minRangeProbab = 0.3;
			midRange = 80;
			midRangeProbab = 0.7;
			maxRange = 120;
			maxRangeProbab = 0.05;
			showToPlayer = false;
		};
		
		class FullAuto : FullAuto {
			recoil = "recoil_auto_primary_4outof10";
			recoilProne = "recoil_auto_primary_prone_4outof10";
			dispersion = 0.00125;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
		};
	};
	
	class vil_AK_105 : AKS_74_U {
		scope = public;
		model = "\vilas_aks\vil_ak_105";
		displayName = $STR_TGW_VIL_AK105;
		picture = "\vilas_aks\ico\ak105.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AKSD"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		
		class Single : Single {
			dispersion = 0.00125;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		class Burst : Burst {
			dispersion = 0.0025;
			minRange = 50;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.05;
			showToPlayer = false;
		};
		class FullAuto : FullAuto {
			dispersion = 0.0025;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.05;
		};
		class Library {
			libTextDesc = $STR_TGW_VIL_AK102104105;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AK105_SHORT;
	};
	
	class Vil_AK_105_c : Vil_AK_105 {
		model = "\vilas_aks\vil_ak_105_c";
		displayName = $STR_TGW_VIL_AK105_KOBRA;
		picture = "\vilas_aks\ico\w_vil_ak105_kobra_ca.paa";
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 0;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_AK_107 : AK_107_kobra {
		scope = public;
		model = "\vilas_aks\vil_ak_107";
		displayName = $STR_TGW_VIL_AK107;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		picture = "\vilas_aks\ico\ak107.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AKSD"};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class Vil_AK_107_c : Vil_AK_107 {
		class Armory {
			disabled = 1;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_ak_107_c";
		displayName = $STR_DN_AK_107_KOBRA;
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 0;
		picture = "\vilas_aks\ico\w_vil_ak107_kob_ca.paa";
	};
	
	
	/*********************************************************
			Vilas Eastern Weapons Marksman and Sniper Rifles
	**********************************************************/
	
	class vil_SVD_BASE : SVD {
		scope = private;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 800;
		maxRangeProbab = 0.01;
		weaponInfoType = "RscWeaponZeroing";
		class OpticsModes {
			class Scope {
				OpticsID = 1;
				UseModelOptics = 1;
				MemoryPointCamera = "opticView";
				opticsPPEffects[] = {"OpticsCHAbera3", "OpticsBlur3"};
				OpticsFlare = true;
				OpticsDisablePeripherialVision = true;
				opticsZoomInit = 0.0623;
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
				VisionMode[] = {"Normal"};
				CameraDir = "";
			};
			
			class Ironsights {
				OpticsID = 2;
				UseModelOptics = 0;
				MemoryPointCamera = "Eye";
				OpticsPPEffects[] = {};
				OpticsFlare = false;
				OpticsDisablePeripherialVision = false;
				OpticsZoomMin = 0.25;
				OpticsZoomMax = 1.1;
				OpticsZoomInit = 0.5;
				DistanceZoomMin = 200;
				DistanceZoomMax = 200;
				VisionMode[] = {};
				CameraDir = "";
			};
		};
		class Library {
			libTextDesc = $STR_LIB_SVD;
		};
	};
	
	
	class vil_SVU_A : vil_SVD_BASE {
		scope = public;
		model = "\vilas_aks\vil_svu";
		picture = "\vilas_aks\ico\svu.paa";
		displayName = $STR_TGW_VIL_SVUA;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Bizon.rtm"};
		modes[] = { "Single", "FullAuto" };
		
		class Single :  SVD {
			displayName = $STR_DN_MODE_SEMIAUTO;
			begin1[] = {"\vilas_aks\sounds\svu_fire1", 1.77828, 1, 1000};
			reloadTime = 0.09;
			recoil = "recoil_single_primary_7outof10";
			recoilProne = "recoil_single_primary_prone_6outof10";
			dispersion = 0.00025;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
		class FullAuto : Single {
			displayName = $STR_DN_MODE_FULLAUTO;
			autoFire=true;
			reloadTime = 0.09;
			ffCount = 30;
			recoil = "recoil_single_primary_7outof10";
			recoilProne = "recoil_single_primary_prone_6outof10";
			dispersion = 0.0005;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 30.0;
			aiRateOfFireDistance = 100;
		};
		class Library {
			libTextDesc = $STR_TGW_VIL_SVU_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_SVUA_SHORT;
	};
	
	class vil_SVU : vil_SVU_A {
		scope = public;
		model = "\vilas_aks\vil_svu";
		picture = "\vilas_aks\ico\svu.paa";
		displayName = $STR_TGW_VIL_SVU;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Bizon.rtm"};
		modes[] = { "Single"};
		class Single :  Single {
			displayName = "";
		};
		
		class Library {
			libTextDesc = $STR_TGW_VIL_SVU_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_SVUA_SHORT;
	};

	class vil_PSL1 : vil_SVD_BASE {
		scope = public;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_psl";
		picture = "\vilas_aks\ico\psl_svd.paa";
		displayName = $STR_VIL_PSL;
		descriptionShort = $STR_VIL_PSL_SHORT;
		magazines[] = {"10Rnd762x54_SVD"};
		class Library {
			libTextDesc = $STR_VIL_PSL_LIB;
		};
	};
	
	class vil_M76 : vil_SVD_BASE {
		scope = public;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_m76";
		displayName = $STR_VIL_M76;
		descriptionShort = $STR_VIL_M76_SHORT;
		picture = "\vilas_aks\ico\m76_svd.paa";
		magazines[] = {"10Rnd762x54_SVD"};
		class Library {
			libTextDesc = $STR_VIL_M76_LIB;
		};
	};
	
	class vil_M91 : vil_SVD_BASE {
		scope = public;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_m76";
		displayName = $STR_VIL_M91;
		descriptionShort = $STR_VIL_M76_SHORT;
		picture = "\vilas_aks\ico\w_vil_m91_ca.paa";
		class Library {
			libTextDesc = $STR_VIL_M91_LIB;
		};
	};
	
	class vil_SVD_63 : vil_SVD_BASE {
		scope = public;
		model = "\vilas_aks\vil_svd";
		displayName = $STR_TGW_VIL_SVD;
		displayNameShort = $STR_TGW_VIL_SN_SVD;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_SVD_N : vil_SVD_BASE {
		scope = public;
		model = "\vilas_aks\vil_svd_pn58";
		displayName = $STR_TGW_VIL_SVD_NSPU;
		displayNameShort = $STR_TGW_VIL_SN_SVD_NSPU;
		modelOptics = "\vilas_aks\opt\optika_nspu2";
		
		class OpticsModes : OpticsModes {
			class NSPU : Scope {
				opticsPPEffects[] = {"MLB_NV1gen_grain","MLB_NV1GEN_blur"};
				visionMode[] = {"NVG"};
				memoryPointCamera = "opticView";
				discreteDistance[] = {100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000};
				discreteDistanceInitIndex = 3;
				opticsZoomInit = 0.1;
				opticsZoomMin = 0.1;
				opticsZoomMax = 0.1;
			};
   			class Ironsigts{
    				opticsID = 2;
				opticsPPEffects[] = {};
    				useModelOptics = 0;
    				opticsFlare = 0;
    				opticsDisablePeripherialVision = 0;
    				opticsZoomMin = 0.3;
    				opticsZoomMax = 0.9;
    				opticsZoomInit = 0.9;
    				memoryPointCamera = "eye";
    				distanceZoomMin = 300;
    				distanceZoomMax = 300;
    				discreteDistance[] = {100};
    				discreteDistanceInitIndex = 0;
    				visionMode[] = {};
			};
		};
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 400;
		midRangeProbab = 0.7;
		maxRange = 600;
		maxRangeProbab = 0.02;
		picture = "\vilas_aks\ico\svd_n.paa";
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_SVD_S : vil_SVD_63 {
		scope = public;
		model = "\vilas_aks\vil_svds";
		displayName = $STR_TGW_VIL_SVD_S;
		picture = "\vilas_aks\ico\svds.paa";
		displayNameShort = $STR_TGW_VIL_SN_SVD_S;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_SVD_M : vil_SVD_63 {
		scope = public;
		model = "\vilas_aks\vil_svdm";
		displayName = $STR_TGW_VIL_SVDM;
		picture = "\vilas_aks\ico\svdm.paa";
		displayNameShort = $STR_TGW_VIL_SN_SVDM;
		class Library {
			libTextDesc = $STR_TGW_VIL_SVDM_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_SVD_P21 : vil_SVD_M {
		scope = public;
		model = "\vilas_aks\vil_svdm_p21";
		displayName = $STR_TGW_VIL_SVDM_P21;
		displayNameShort = $STR_TGW_VIL_SN_SVDM_P21;
		picture = "\vilas_aks\ico\svdm21.paa";
		modelOptics = "\vilas_aks\opt\optika_1p21";
		class OpticsModes : OpticsModes {
			class 1P21 : Scope {
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
				discreteDistanceInitIndex = 2;
				opticsZoomInit = 0.1;
				opticsZoomMin = 0.033;
				opticsZoomMax = 0.1;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
		};
   			class Ironsigts: 1P21
   				{
    				opticsID = 2;
    				useModelOptics = 0;
    				opticsPPEffects[] = {};
				opticsFlare = 0;
    				opticsDisablePeripherialVision = 0;
    				opticsZoomMin = 0.3;
    				opticsZoomMax = 0.9;
    				opticsZoomInit = 0.9;
    				memoryPointCamera = "eye";
    				distanceZoomMin = 300;
    				distanceZoomMax = 300;
    				discreteDistance[] = {100};
    				discreteDistanceInitIndex = 0;
    				visionMode[] = {};
			};
		};
		
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 600;
		midRangeProbab = 0.7;
		maxRange = 1000;
		maxRangeProbab = 0.05;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_SVDK : vil_SVD_BASE {
		scope = public;
		model = "\vilas_aks\vil_svdk";
		displayName = $STR_VIL_SVDK;
		displayNameShort = $STR_VIL_SVDK;
		picture = "\vilas_aks\ico\w_vil_svdk_ca.paa";
		modelOptics = "\vilas_aks\opt\optika_1p69";
		class OpticsModes : OpticsModes {
			class Scope : Scope {
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				discreteDistance[] = {100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000};
				discreteDistanceInitIndex = 3;
				opticsZoomInit = 0.1;
				opticsZoomMin = 0.033;
				opticsZoomMax = 0.1;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
		};
   			class Ironsigts: Scope
   				{
    				opticsID = 2;
    				useModelOptics = 0;
    				opticsPPEffects[] = {};
				opticsFlare = 0;
    				opticsDisablePeripherialVision = 0;
    				opticsZoomMin = 0.3;
    				opticsZoomMax = 0.9;
    				opticsZoomInit = 0.9;
    				memoryPointCamera = "eye";
    				distanceZoomMin = 300;
    				distanceZoomMax = 300;
    				discreteDistance[] = {100};
    				discreteDistanceInitIndex = 0;
    				visionMode[] = {};
			};
		};
		minRange = 10;
		minRangeProbab = 0.1;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 700;
		maxRangeProbab = 0.01;
		begin1[] = {"\vilas_aks\sounds\svdk_fire1", 2.37828, 1.1, 1200};
		magazines[] = {"10Rnd762x54_SVD"};
		class Library {
			libTextDesc = $STR_VIL_SVDK_LIB;
		};
		descriptionShort = $STR_VIL_SVDK_SHORT;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_SV_98 : vil_SVD_BASE {
		scope = public;
		model = "\vilas_aks\vil_sv98";
		displayName = $STR_TGW_VIL_SV98;
		picture = "\vilas_aks\ico\sv98_7.paa";
		modelOptics = "\vilas_aks\opt\optika_sv7";
		class OpticsModes : OpticsModes {
			class PKS7 : Scope {
				opticsDisablePeripherialVision = true;
				opticsZoomInit = 0.03557;
				opticsZoomMin = 0.03557;
				opticsZoomMax = 0.03557;
				distanceZoomMin = 250;
				distanceZoomMax = 250;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				discreteDistance[] = {100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000};
				discreteDistanceInitIndex = 3;	
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
			};
   				class Ironsigts: PKS7
   				{
    				opticsID = 2;
    				useModelOptics = 0;
    				opticsPPEffects[] = {};
				opticsFlare = 0;
    				opticsDisablePeripherialVision = 0;
    				opticsZoomMin = 0.3;
    				opticsZoomMax = 0.9;
    				opticsZoomInit = 0.9;
    				memoryPointCamera = "eye";
    				distanceZoomMin = 300;
    				distanceZoomMax = 300;
    				discreteDistance[] = {100};
    				discreteDistanceInitIndex = 0;
    				visionMode[] = {};
			};
		};
		magazines[] = {"10Rnd762x54_SVD"};
		reloadSound[] = {"\vilas_aks\sounds\SV98_Bolt", db10, 1, 20};	
		begin1[] = {"\vilas_aks\sounds\sv98_fire1", 1.77828, 1, 1000};
		reloadTime = 1.778;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M24.rtm"};
		class Library {
			libTextDesc = $STR_TGW_VIL_SV98_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_SV98_SHORT;
	};
	
	class vil_SV_98_69 : vil_SV_98 {
		scope = public;
		model = "\vilas_aks\vil_sv98_69";
		displayName = $STR_TGW_VIL_SV98_P69;
		descriptionShort = $STR_TGW_VIL_SV98_SHORT;
		picture = "\vilas_aks\ico\sv98_69.paa";
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 1000;
		maxRangeProbab = 0.02;
		modelOptics = "\vilas_aks\opt\optika_1p69";
		class OpticsModes : OpticsModes {
			class 1P69 : PKS7 {
				maxRangeProbab = 0.02;
				opticsZoomInit = 0.083;
				opticsZoomMin = 0.0249;
				opticsZoomMax = 0.083;
				distanceZoomMin = 200;
				distanceZoomMax = 600;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
			};
   			class Ironsigts: 1P69
   				{
    				opticsID = 2;
    				useModelOptics = 0;
    				opticsPPEffects[] = {};
				opticsFlare = 0;
    				opticsDisablePeripherialVision = 0;
    				opticsZoomMin = 0.3;
    				opticsZoomMax = 0.9;
    				opticsZoomInit = 0.9;
    				memoryPointCamera = "eye";
    				distanceZoomMin = 300;
    				distanceZoomMax = 300;
    				discreteDistance[] = {100};
    				discreteDistanceInitIndex = 0;
    				visionMode[] = {};
			};
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_SV_98_SD : vil_SV_98 {
		scope = public;
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		model = "\vilas_aks\vil_sv98sd";
		displayName = $STR_TGW_VIL_SV98_SD;
		minRange = 10;
		minRangeProbab = 0.1;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 500;
		maxRangeProbab = 0.05;
		picture = "\vilas_aks\ico\w_vil_sv98_sd_ca.paa";
		begin1[] = {"\vilas_aks\sounds\sv98_sd_fire1", db18, 1, 250};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_SV98_SHORT;
	};
	
	
	
	/*********************************************************
			Vilas Eastern Weapons new assault rifles
	**********************************************************/
	
	class vil_Abakan : AK_107_kobra {
		scope = public;
		model = "\vilas_aks\vil_abakan";
		displayName = $STR_TGW_VIL_AN94;
		picture = "\vilas_aks\ico\an.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		descriptionShort = $STR_TGW_VIL_AN94_SHORT;
		modes[] = {"FullAuto", "Burst", "Single"};
		magazines[] = {"30Rnd_545x39_AK", "30Rnd_545x39_AKSD"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;

		class Single  {
			begin1[] = {"\vilas_aks\sounds\abakan_shoot1", 1.77828, 1, 1000};
			begin2[] = {"\vilas_aks\sounds\abakan_shoot2", 1.77828, 1, 1000};
			begin3[] = {"\vilas_aks\sounds\abakan_shoot3", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 0.333, "begin2", 0.333, "begin3", 0.333};
			reloadTime = 0.09;
			recoil = "recoil_single_primary_2outof10";
			recoilProne = "recoil_single_primary_prone_2outof10";
			dispersion = 0.001;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};
		
		class Burst  {
			begin1[] = {"\vilas_aks\sounds\abakan_shoot1", 1.77828, 1, 1000};
			begin2[] = {"\vilas_aks\sounds\abakan_shoot2", 1.77828, 1, 1000};
			begin3[] = {"\vilas_aks\sounds\abakan_shoot3", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 0.333, "begin2", 0.333, "begin3", 0.333};
			soundBurst = 0;
			reloadTime = 0.04;
			ffCount = 2;
			burst=2;
			recoil = "recoil_single_primary_2outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.001;
			minRange = 1;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
		};
		
		class FullAuto {
			begin1[] = {"\vilas_aks\sounds\abakan_shoot1", 1.77828, 1, 1000};
			begin2[] = {"\vilas_aks\sounds\abakan_shoot2", 1.77828, 1, 1000};
			begin3[] = {"\vilas_aks\sounds\abakan_shoot3", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 0.333, "begin2", 0.333, "begin3", 0.333};
			reloadTime = 0.09;
			ffCount = 30;
			recoil = "recoil_auto_primary_4outof10";
			recoilProne = "recoil_auto_primary_prone_4outof10";
			dispersion = 0.001;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
		};
		class Library {
			libTextDesc = $STR_TGW_VIL_AN94_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_Abakan_gp : vil_Abakan {
		scope = public;
		model = "\vilas_aks\vil_abakan_gp";
		displayName = $STR_TGW_VIL_AN94_GL;
		picture = "\vilas_aks\ico\an_gl.paa";
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AN94_GL_SHORT;
		muzzles[] = {this, "GP25Muzzle"};
	};
	
	class vil_Abakan_P29 : vil_Abakan {
		scope = public;
		model = "\vilas_aks\vil_abakan_p29";
		displayName = $STR_TGW_VIL_AN94_P29;
		modelOptics = "\vilas_aks\opt\optika_1p29";
		
		class OpticsModes {
			class 1P29 {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				opticsZoomInit = 0.1;
				opticsZoomMin = 0.1;
				opticsZoomMax = 0.1;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				weaponInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
				cameraDir = "";
			};
		};
			
		picture = "\vilas_aks\ico\w_vil_an94_p29_ca.paa";
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	class vil_ak12 : AK_107_kobra{
		scope = 2;
		model = "\vilas_aks\vil_ak12.p3d";
		displayName = "AK-12";
		descriptionShort = $STR_TGW_VIL_AN94_SHORT;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\Mk48.rtm"};
		picture = "\vilas_aks\ico\w_vil_ak12_ca.paa";
		class Library {
			libTextDesc = "The AK-12 has external modifications, most of which are consistent with the modifications favoured by Russia’s specialist, professional military units: Picatinny rails—allowing the attachment of modular accessories, including advanced optical sight combinations, laser illuminators, flashlights, vertical foregrips, bipods and grenade launchers. An improved adjustable telescoping buttstock is also fitted. The rear sight has been moved from the front of the receiver to the rear, the combination selector lever/dust cover on the right side of the receiver has been replaced by a thumb-activated ambidextrous selector lever above both sides of the pistol grip, ambidextrous push-button magazine release, ambidextrous ejection port and reversible cocking handle above vertical foregrip. Firing modes include safe, semi, 3 round burst, and full auto. To improve accuracy, the rifle has a new muzzle brake and the barrel has improved rifling.";
	};
		};
	class vil_ak12_ap : vil_ak12{
	scope = public;
	model = "\vilas_aks\vil_ak12_ap.p3d";
	displayName = "AK-12 Aimpoint";
	picture = "\vilas_aks\ico\w_vil_ak12ap_ca.paa";
	class FlashLight
		{
			color[] = {0.9,0.9,0.7,0.9};
			ambient[] = {0.1,0.1,0.1,1.0};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1,1,0.5};
			brightness = 0.1;
		};
};
	class vil_ak12_gp : vil_ak12{
	scope = public;
	model = "\vilas_aks\vil_ak12_gp.p3d";
	displayName = "AK-12 GL";
	handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
	picture = "\vilas_aks\ico\w_vil_ak12gl_ca.paa";
	descriptionShort = $STR_TGW_VIL_AN94_GL_SHORT;
	muzzles[] = {this, "GP25Muzzle"};
	dexterity = 1.5;
		};

	class vil_AEK1 : AK_107_kobra {
		scope = public;
		model = "\vilas_aks\vil_aek";
		displayName = $STR_TGW_VIL_AEK971_EARLY;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		picture = "\vilas_aks\ico\aek.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modes[] = {"FullAuto", "Single"};

		class Single :  Single {
			reloadTime = 0.07;
			recoil = "recoil_single_primary_2outof10";
			recoilProne = "recoil_single_primary_prone_2outof10";
			dispersion = 0.002;
		};
		class Burst : Burst {
			soundBurst = 0;
			reloadTime = 0.07;
			ffCount = 3;
			recoil = "recoil_auto_primary_1outof10";
			recoilProne = "recoil_auto_primary_prone_1outof10";
			dispersion = 0.002;
		};
		class FullAuto : FullAuto {
			reloadTime = 0.07;
			ffCount = 30;
			recoil = "recoil_auto_primary_2outof10";
			recoilProne = "recoil_auto_primary_prone_1outof10";
			dispersion = 0.002;
		};
		class Library {
			libTextDesc = $STR_TGW_VIL_AEK971_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AEK971_SHORT;
	};
	
	class vil_AEK2 : vil_AEK1 {
		scope = public;
		model = "\vilas_aks\vil_aek2";
		picture = "\vilas_aks\ico\w_vil_aek2_ca.paa";
		displayName = $STR_TGW_VIL_AEK971_LATE;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	
	class vil_AEK_GL : vil_AEK1 {
		scope = public;
		model = "\vilas_aks\vil_aek2_gp";
		displayName = $STR_TGW_VIL_AEK971_GL;
		descriptionShort = $STR_TGW_VIL_AEK971_GL_SHORT;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		class Library {
			libTextDesc = $STR_LIB_AK74_GL;
		};
		picture = "\vilas_aks\ico\aek_gl.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
		muzzles[] = {this, "GP25Muzzle"};
		dexterity = 1.5;
	};
	
	class vil_AeK_3 : vil_AKM_BASE {
		scope = public;
		model = "\vilas_aks\vil_aek973";
		picture = "\vilas_aks\ico\w_vil_aek973_ca.paa";
		displayName = $STR_TGW_VIL_AEK973_EARLY;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		
		class Single :  Single {
			reloadTime = 0.09;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			dispersion = 0.008;
		};
		class Burst : Burst {
			reloadTime = 0.09;
			recoil = "recoil_auto_primary_2outof10";
			recoilProne = "recoil_auto_primary_prone_2outof10";
			dispersion = 0.008;
		};
		class FullAuto : FullAuto {
			reloadTime = 0.09;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_2outof10";
			dispersion = 0.008;
		};
		
		class Library {
			libTextDesc = $STR_TGW_VIL_AEK973_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AEK973_SHORT;
	};
	
	class vil_AeK_23 : vil_AeK_3 {
		scope = public;
		model = "\vilas_aks\vil_aek2973";
		displayName = $STR_TGW_VIL_AEK973_LATE;
		picture = "\vilas_aks\ico\w_vil_aek2973_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_AEK973_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AEK973_SHORT;
	};
	
	class vil_AeK_3_K : vil_AeK_3 {
		scope = public;
		model = "\vilas_aks\vil_aek973_k";
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {100};
		discreteDistanceInitIndex = 0;
		picture = "\vilas_aks\ico\w_vil_aek2_col_ca.paa";
		displayName = $STR_TGW_VIL_AEK973_COL;
		class Library {
			libTextDesc = $STR_TGW_VIL_AEK973_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AEK973_SHORT;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};	

};