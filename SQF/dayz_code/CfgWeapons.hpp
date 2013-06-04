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
		displayName = Crafting Book (Camp);
		model = "\ca\misc\SmallObj_spukayev_docs_WPN.p3d";
		picture = "\ca\misc\Data\icons\picture_spukayev_docs_ca.paa";
		descriptionShort = Crafting Book;
		
		class ItemActions {
			class Build {
				text = Build Crate;
				script = "spawn player_buildBoxStorage;";
			};
			class Build2 {
				text = Build GunRack;
				script = "spawn player_buildGunrack_DZ;";
			};
			class Build3 {
				text = Build Bench;
				script = "spawn player_buildBench_DZ;";
			};
			class Build4 {
				text = Build RazorWire;
				script = "spawn player_buildFort_RazorWire_DZ;";
			};
		};
	};
	
	class ItemCraftingBook2 : ItemCore {
		scope = 2;
		displayName = Crafting Book (Small Fortifications);
		model = "\ca\misc\SmallObj_moscow_docs_WPN.p3d";
		picture = "\ca\misc\Data\icons\picture_moscow_docs_ca.paa";
		descriptionShort = Crafting Book (Small Fortifications);
		
		class ItemActions {
			class Build {
				text = Build Long Bag Fence;
				script = "spawn player_buildBagFenceLong_DZ;";
			};
			class Build2 {
				text = Build Long Bag Fence (Corner);
				script = "spawn player_buildBagFenceLongCorner_DZ;";
			};
			class Build3 {
				text = Build Long Bag Fence (Round);
				script = "spawn player_buildBagFenceLongRound_DZ;";
			};
		};
	};
	
	class ItemCraftingBook3 : ItemCore {
		scope = 2;
		displayName = Crafting Book (Huge Fortifications);
		model = "\ca\misc\SmallObj_File_photos_WPN.p3d";
		picture = "\ca\misc\Data\icons\picture_photo_folder_ca.paa";
		descriptionShort = Crafting Book (Huge Fortifications);
		
		class ItemActions {
			class Build {
				text = Build Fortified Nest;
				script = "spawn player_buildFortified_nest_DZ;";
			};
			class Build2 {
				text = Build Tower;
				script = "spawn player_buildCampWoodTower_DZ;";
			};
			class Build3 {
				text = Build Gate;
				script = "spawn player_buildBarb_Gate_DZ;";
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
	class M107;
	class M107_DZ : M107 {
		type = "1";
		canlock = 0;
		cursor = "RifleCursor";
		cursoraim = "Foresight";
	};
	class ksvk;
	class ksvk_DZ	: ksvk {
		type = "1";
		canlock = 0;
		cursor = "RifleCursor";
	};
	
	class FakeWeapon;
	class BAF_AS50_scoped : FakeWeapon {};
	class M107 : FakeWeapon {};
	class ksvk : FakeWeapon {};
	
	class Crossbow;
	class Crossbow_DZ : Crossbow {
		magazines[] =
		{
			"Quiver",
			"WoodenArrow"
		};
	};
	class MeleeWeapon;
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
};