class CfgWeapons {
	class ItemCore;
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
	
	class ItemMap: ItemCore {
		model="ca\misc\SmallObj_file_map_WPN.p3d";
	};
	
	class ItemCompass: ItemCore {
		model="z\addons\dayz_communityassets\models\compass.p3d";
	};
	
	class ItemCraftingBook : ItemCore {
		scope = 2;
		displayName = "Crafting Book (Camp)";
		model = "\ca\misc\SmallObj_spukayev_docs_WPN.p3d";
		picture = "\ca\misc\Data\icons\picture_spukayev_docs_ca.paa";
		descriptionShort = "CraftBook (Camp)";
		
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
		};
	};
	
	class ItemCraftingBook2 : ItemCore {
		scope = 2;
		displayName = "Crafting Book (Barriers)";
		model = "\ca\misc\SmallObj_moscow_docs_WPN.p3d";
		picture = "\ca\misc\Data\icons\picture_moscow_docs_ca.paa";
		descriptionShort = "CraftBook (Barriers)";
		
		class ItemActions {
			class Build {
				text = "Sandbag Wall (End)";
				script = "spawn player_buildBagFenceLongCorner_DZ;";
			};
			class Build2 {
				text = "SandBag Wall (Lng)";
				script = "spawn player_buildBagFenceLong_DZ;";
			};
			class Build3 {
				text = "Sandbag Wall (Rnd)";
				script = "spawn player_buildBagFenceLongRound_DZ;";
			};
			class Build4 {
				text = "RazorWire Wall (Tri)";
				script = "spawn player_buildFort_RazorWire_DZ;";
			};
		};
	};
	
	class ItemCraftingBook3 : ItemCore {
		scope = 2;
		displayName = "Crafting Book (Forts)";
		model = "\ca\misc\SmallObj_File_photos_WPN.p3d";
		picture = "\ca\misc\Data\icons\picture_photo_folder_ca.paa";
		descriptionShort = "CraftBook (Forts)";
		
		class ItemActions {
			class Build {
				text = "Fortified Nest";
				script = "spawn player_buildFortified_nest_DZ;";
			};
			class Build2 {
				text = "DeerStand";
				script = "spawn player_buildCampWoodTower_DZ;";
			};
			class Build3 {
				text = "Gate";
				script = "spawn player_buildBarb_Gate_DZ;";
			};
			class Build4 {
				text = "Bench";
				script = "spawn player_buildBench_DZ;";
			};
		};
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
	class BAF_AS50_scoped;
	class BAF_AS50_scoped_DZ : BAF_AS50_scoped {
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
	
	class ksvk;
	class ksvk_DZ	: ksvk {
		type = "1";
		canlock = 0;
		cursor = "RifleCursor";
	};
	
	class Crossbow;
	class Crossbow_DZ : Crossbow {
		magazines[] =
		{
			"Quiver",
			"WoodenArrow"
		};
	};
	class Pistol;
	class DZ_SingleMelee;
	class MeleeWeapon: Pistol
	{
		distanceZoomMin=50;
		distanceZoomMax=50;
		canDrop=0;
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		optics=1;
		modelOptics="-";
		modes[]=
		{
			"Single"
		};
		fireLightDuration=0;
		fireLightIntensity=0;
		reloadMagazineSound[]=
		{
			"",
			1
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\dayz_weapons\anim\melee_hatchet_holding.rtm"
		};
		class Single: DZ_SingleMelee
		{
			multiplier=1;
			burst=1;
			displayName="Hack";
			dispersion=0.2;
			optics=1;
			recoil="DZ_Swing";
			autoFire=1;
			aiRateOfFire=0.69999999;
			aiRateOfFireDistance=2.2;
			useAction=0;
			useActionTitle="";
			recoilProne="DZ_Swing";
			swing0[]=
			{
				"dayz_weapons\sounds\swing_0",
				1.77828,
				1,
				30
			};
			swing1[]=
			{
				"dayz_weapons\sounds\swing_1",
				1.77828,
				1,
				30
			};
			soundBegin[]=
			{
				"swing0",
				0.5,
				"swing1",
				0.5
			};
			drySound[]=
			{
				"",
				1
			};
			reloadTime=0;
			reloadMagazineSound[]=
			{
				"",
				1
			};
			showToPlayer=1;
			minRange=0;
			minRangeProbab=0.80000001;
			midRange=0.30000001;
			midRangeProbab=0.80000001;
			maxRange=3;
			maxRangeProbab=0;
			soundContinuous = 0;
		};
		cursor="Vehicle_Grenade_W";
		cursoraim="Vehicle_Grenade_W";
		cursorSize=1;
	};
	
	class MeleeHatchet: MeleeWeapon
	{
		scope=2;
		autoreload=1;
		magazineReloadTime=0;
		model="\dayz_weapons\models\Hatchet_weaponized";
		picture="\dayz_equip\textures\equip_hatchet_CA.paa";
		displayName="$STR_EQUIP_NAME_41";
		magazines[]=
		{
			"Hatchet_Swing"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\dayz_weapons\anim\melee_hatchet_holding.rtm"
		};
		class ItemActions
		{
			class Use
			{
				text="$STR_ACTIONS_CHOPWOOD";
				script="spawn player_chopWood;";
			};
			class Toolbelt
			{
				text="Add to Toolbelt";
				script="spawn player_addToolbelt;";
				use[]=
				{
					"MeleeHatchet"
				};
				output[]=
				{
					"ItemHatchet"
				};
			};
			class Drop
			{
				text="Drop Hatchet";
				script="spawn player_dropWeapon;";
				use[]=
				{
					"Hatchet_Swing"
				};
			};
		};
		class Library
		{
			libTextDesc="$STR_EQUIP_DESC_41";
		};
		descriptionShort="$STR_EQUIP_DESC_41";
	};	
	class MeleeCrowbar: MeleeHatchet
	{
		scope=2;
		autoreload=1;
		magazineReloadTime=0;
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
	class ItemCrowbar: ItemCore
	{
		scope=2;
		displayName="Crowbar";
		model="\dayz_equip\models\crowbar.p3d";
		picture="\dayz_weapons\textures\equip_crowbar_CA.paa";
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
	class MeleeMachete: MeleeHatchet
	{
		scope=2;
		autoreload=1;
		magazineReloadTime=0;
		model="\z\addons\dayz_communityassets\models\machete_weaponized.p3d";
		picture="\z\addons\dayz_communityassets\pictures\equip_machete_CA.paa";
		displayName="Machete";
		magazines[]=
		{
			"Machete_Swing"
		};
		class ItemActions
		{
			class Toolbelt
			{
				text="Add to Toolbelt";
				script="spawn player_addToolbelt;";
				use[]=
				{
					"MeleeMachete"
				};
				output[]=
				{
					"ItemMachete"
				};
			};
			class Drop
			{
				text="Drop Machete";
				script="spawn player_dropWeapon;";
				use[]=
				{
					"Machete_Swing"
				};
			};
		};
		class Library
		{
			libTextDesc="";
		};
		descriptionShort="An agricultural tool turned into a weapon, the Machete may be less versatile than the common hatchet, but it packs a punch.";
	};	
	class ItemMachete: ItemCore
	{
		scope=2;
		displayName="Machete";
		model="\z\addons\dayz_communityassets\models\machete.p3d";
		picture="\z\addons\dayz_communityassets\pictures\equip_machete_CA.paa";
		descriptionShort="An agricultural tool turned into a weapon, the Machete may be less versatile than the common hatchet, but it packs a punch.";
		class ItemActions
		{
			class Toolbelt
			{
				text="Remove from Toolbelt";
				script="spawn player_addToolbelt;";
				use[]=
				{
					"ItemMachete"
				};
				output[]=
				{
					"MeleeMachete"
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
				"ItemSodaRabbitEmpty"
			};          
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
};