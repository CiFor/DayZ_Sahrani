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