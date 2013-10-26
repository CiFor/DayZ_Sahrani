	class Crossbow;
	class Crossbow_DZ : Crossbow {
		displayname = "Crossbow";
		
		class Single : Mode_SemiAuto {
			reloadTime = 0.8;
		};
		magazines[] = 
		{
			"Quiver",
			"WoodenArrow"
		};
	};
	
	class ItemBaseball_Bat: ItemCore	{
		scope=2;
		displayName="Baseball_Bat";
		model="\z\addons\dayz_communityassets\models\baseball_bat.p3d";
		picture="\z\addons\dayz_communityassets\pictures\equip_baseball_bat_CA.paa";
		descriptionShort="Sporting Equipment can be used as a weapon, the Baseball Bat may be less versatile than the common hatchet, but it packs a punch.";
		class ItemActions
		{
			class Toolbelt
			{
				text="Remove from Toolbelt";
				script="spawn player_addToolbelt;";
				use[]=
				{
					"ItemBaseball_Bat"
				};
				output[]=
				{
					"MeleeBaseball_Bat"
				};
			};
		};
	};
	
	class ItemBaseball_Bat_Barbed: ItemCore	{
		scope=2;
		displayName="Baseball_Bat_Barbed";
		model="\z\addons\dayz_communityassets\models\baseball_bat_barbed.p3d";
		picture="\z\addons\dayz_communityassets\pictures\equip_baseball_bat_barbed_CA.paa";
		descriptionShort="Sporting Equipment turned into a vicous weapon, the Baseball Bat may be less versatile than the common hatchet, but it packs a punch.";
		class ItemActions
		{
			class Toolbelt
			{
				text="Remove from Toolbelt";
				script="spawn player_addToolbelt;";
				use[]=
				{
					"ItemBaseball_Bat_Barbed"
				};
				output[]=
				{
					"MeleeBaseball_Bat_Barbed"
				};
			};
		};
	};
	
	class ItemBaseball_Bat_Nailed: ItemCore	{
		scope=2;
		displayName="Baseball_Bat_Nailed";
		model="\z\addons\dayz_communityassets\models\baseball_bat_nails.p3d";
		picture="\z\addons\dayz_communityassets\pictures\equip_baseball_bat_nails_CA.paa";
		descriptionShort="Sporting Equipment turned into a devastating weapon, the Baseball Bat may be less versatile than the common hatchet, but it packs a punch.";
		class ItemActions
		{
			class Toolbelt
			{
				text="Remove from Toolbelt";
				script="spawn player_addToolbelt;";
				use[]=
				{
					"ItemBaseball_Bat_Nailed"
				};
				output[]=
				{
					"MeleeBaseball_Bat_Nailed"
				};
			};
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

	class ItemMachete: ItemCore	{
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
	
	class ItemShovel: ItemCore	{
		scope=2;
		displayName="Shovel";
		model="\z\addons\dayz_communityassets\models\shovel.p3d";
		picture="\z\addons\dayz_communityassets\pictures\equip_shovel_ca.paa";
		descriptionShort="Farm Equipment turned into a weapon, the Shovel may be used to dig, but it also packs a punch.";
		class ItemActions
		{
			class Toolbelt
			{
				text="Remove from Toolbelt";
				script="spawn player_addToolbelt;";
				use[]=
				{
					"ItemShovel"
				};
				output[]=
				{
					"MeleeShovel"
				};
			};
		};
	};

	class GrenadeLauncher;	// External class reference

	class Flare : GrenadeLauncher {
		scope = public;
		autoAimEnabled = false;
		cursor = "Vehicle_Grenade_W";
		cursoraim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		value = 0;
		type = VSoft;
		displayName = $STR_MAG_ACTION2_4;
		canDrop = false;
		muzzles[] = {"RoadFlareMuzzle", "ChemLightMuzzle", "MolotovCocktailMuzzle"};

		class ThrowMuzzle : GrenadeLauncher {
			cursor = "Air_Dot";
			cursoraim = "Vehicle_Grenade_W";
			cursorSize = 1;
			sound[] = {"", 0.000316228, 1};
			reloadSound[] = {"", 0.000316228, 1};
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
			reloadTime = 0;
			magazineReloadTime = 0;
			enableAttack = false;
			showEmpty = 0;
			autoReload = true;
			modelOptics = "";
			minRange = 30;
			minRangeProbab = 0.5;
			midRange = 45;
			midRangeProbab = 0.2;
			maxRange = 60;
			maxRangeProbab = 0.03;
			};

		class RoadFlareMuzzle : ThrowMuzzle {
			displayName = $STR_MAG_ACTION_4;
			magazines[] = {"HandRoadFlare"};
			cursor = "Vehicle_Grenade_W";
			cursorAim = "\ca\Weapons\Data\clear_empty";
			begin1[] = {"dayz_weapons\sounds\roadflare_start", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
		};

		class ChemLightMuzzle : ThrowMuzzle {
			displayName = $STR_MAG_ACTION_5;
			magazines[] = {"HandChemGreen", "HandChemRed", "HandChemBlue"};
			cursor = "Vehicle_Grenade_W";
			cursorAim = "\ca\Weapons\Data\clear_empty";
		};

		class MolotovCocktailMuzzle : ThrowMuzzle {
			displayName = "Throw";
			cursor = "Vehicle_Grenade_W";
			cursorAim = "\ca\Weapons\Data\clear_empty";
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
				"ItemSodaRabbitEmpty",
				"ItemBrick"
			};
		};
	};
		
	class MeleeHatchet;
	
	class MeleeBaseball_Bat: MeleeHatchet
	{
		scope=2;
		model="\z\addons\dayz_communityassets\models\baseball_bat_weaponized";
		picture="\z\addons\dayz_communityassets\pictures\equip_baseball_bat_CA.paa";
		displayName="Baseball_Bat";
		magazines[]=
		{
			"baseball_bat_swing"
		};
		class ItemActions
		{
			class Toolbelt
			{
				text="Add to Toolbelt";
				script="spawn player_addToolbelt;";
				use[]=
				{
					"MeleeBaseball_Bat"
				};
				output[]=
				{
					"ItemBaseball_Bat"
				};
			};
			class Drop
			{
				text="Drop Baseball_Bat";
				script="spawn player_dropWeapon;";
				use[]=
				{
					"baseball_bat_swing"
				};
			};
		};
		class Library
		{
			libTextDesc="Sporting Equipment can be used as a weapon, the Baseball Bat may be less versatile than the common hatchet, but it packs a punch.";
		};
		descriptionShort="Sporting Equipment can be used as a weapon, the Baseball Bat may be less versatile than the common hatchet, but it packs a punch.";
	};
	
	class MeleeBaseball_Bat_Barbed: MeleeHatchet
	{
		scope=2;
		model="\z\addons\dayz_communityassets\models\baseball_bat_barbed_weaponized";
		picture="\z\addons\dayz_communityassets\pictures\equip_baseball_bat_barbed_CA.paa";
		displayName="Baseball_Bat_Barbed";
		magazines[]=
		{
			"baseball_bat_barbed_swing"
		};
		class ItemActions
		{
			class Toolbelt
			{
				text="Add to Toolbelt";
				script="spawn player_addToolbelt;";
				use[]=
				{
					"MeleeBaseball_Bat_Barbed"
				};
				output[]=
				{
					"ItemBaseball_Bat_Barbed"
				};
			};
			class Drop
			{
				text="Drop Baseball_Bat_Barbed";
				script="spawn player_dropWeapon;";
				use[]=
				{
					"baseball_bat_barbed_swing"
				};
			};
		};
		class Library
		{
			libTextDesc="Sporting Equipment turned into a vicious weapon, the Baseball Bat may be less versatile than the common hatchet, but it packs a punch.";
		};
		descriptionShort="Sporting Equipment turned into a vicious weapon, the Baseball Bat may be less versatile than the common hatchet, but it packs a punch.";
	};
	
	class MeleeBaseball_Bat_Nailed: MeleeHatchet
	{
		scope=2;
		model="\z\addons\dayz_communityassets\models\baseball_bat_nails_weaponized";
		picture="\z\addons\dayz_communityassets\pictures\equip_baseball_bat_nails_CA.paa";
		displayName="Baseball_Bat_Nailed";
		magazines[]=
		{
			"baseball_bat_nailed_swing"
		};
		class ItemActions
		{
			class Toolbelt
			{
				text="Add to Toolbelt";
				script="spawn player_addToolbelt;";
				use[]=
				{
					"MeleeBaseball_Bat_Nailed"
				};
				output[]=
				{
					"ItemBaseball_Bat_Nailed"
				};
			};
			class Drop
			{
				text="Drop Baseball_Bat_Nailed";
				script="spawn player_dropWeapon;";
				use[]=
				{
					"baseball_bat_nailed_swing"
				};
			};
		};
		class Library
		{
			libTextDesc="Sporting Equipment turned into a devastating weapon, the Baseball Bat may be less versatile than the common hatchet, but it packs a punch.";
		};
		descriptionShort="Sporting Equipment turned into a devastating weapon, the Baseball Bat may be less versatile than the common hatchet, but it packs a punch.";
	};
	
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
		handAnim[] = {"OFP2_ManSkeleton", "\dayz_weapons\anim\melee_hatchet_holding.rtm"};
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
	
	class MeleeMachete: MeleeHatchet
	{
		scope=2;
		model="\z\addons\dayz_communityassets\models\machete_weaponized";
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
			libTextDesc="An agricultural tool turned into a weapon, the Machete may be less versatile than the common hatchet, but it packs a punch.";
		};
		descriptionShort="An agricultural tool turned into a weapon, the Machete may be less versatile than the common hatchet, but it packs a punch.";
	};
	
	class MeleeShovel: MeleeHatchet
	{
		scope=2;
		model="\z\addons\dayz_communityassets\models\shovel_weaponized";
		picture="\z\addons\dayz_communityassets\pictures\equip_shovel_ca.paa";
		displayName="Shovel";
		magazines[]=
		{
			"shovel_swing"
		};
		class ItemActions
		{
			class Toolbelt
			{
				text="Add to Toolbelt";
				script="spawn player_addToolbelt;";
				use[]=
				{
					"MeleeShovel"
				};
				output[]=
				{
					"ItemShovel"
				};
			};
			class Drop
			{
				text="Drop Shovel";
				script="spawn player_dropWeapon;";
				use[]=
				{
					"shovel_swing"
				};
			};
		};
		class Library
		{
			libTextDesc="Farm Equipment turned into a weapon, the Shovel may be used to dig, but it also packs a punch.";
		};
		descriptionShort="Farm Equipment turned into a weapon, the Shovel may be used to dig, but it also packs a punch.";
	};