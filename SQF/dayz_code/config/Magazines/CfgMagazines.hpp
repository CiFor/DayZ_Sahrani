class CfgMagazines {																				//Original DayZ Content DayZ Dev Team
	class CA_Magazine;	// External class reference										
	class ItemSandbag : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_21;
		model = "\dayz_equip\models\sandbags.p3d";
		picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_21;
		
		class ItemActions {
			class Build {
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require = "ItemEtool";
				create = "Sandbag1_DZ";
			};
		};
	};
	class ItemTankTrap : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_22;
		model = "\dayz_equip\models\tank_trap_kit.p3d";
		picture = "\dayz_equip\textures\equip_tanktrap_kit_CA.paa";
		descriptionShort = $STR_EQUIP_DESC_22;
		
		class ItemActions {
			class Build {
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require = "ItemToolbox";
				create = "Hedgehog_DZ";
			};
		};
	};
	class ItemTent : CA_Magazine {
		scope = public;
		count = 1;
		type = (256 * 3);
		displayName = $STR_EQUIP_NAME_20;
		model = "\dayz_equip\models\tentbag_gear.p3d";
		picture = "\dayz_equip\textures\equip_tentbag_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_20;
		
		class ItemActions {
			class Pitch {
				text = $STR_PITCH_TENT;
				script = "spawn player_tentPitch;";
			};
		};
	};
	class ItemWire : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_23;
		model = "\dayz_equip\models\Fence_wire_kit.p3d";
		picture = "\dayz_equip\textures\equip_fencewire_kit_CA.paa";
		descriptionShort = $STR_EQUIP_DESC_23;
		
		class ItemActions {
			class Build {
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require = "ItemToolbox";
				create = "Wire_cat1";
			};
		};
	};
	class PartWoodPile: CA_Magazine {
		scope=2;
		count=1;
		type="(256 * 2)";
		displayName="$STR_EQUIP_NAME_40";
		model="\dayz_equip\models\woodPile.p3d";
		picture="\dayz_equip\textures\equip_woodPile_ca.paa";
		descriptionShort="$STR_EQUIP_DESC_40";
		class ItemActions
		{
			class Use
			{
				text="$STR_ACTIONS_LIGHTFIRE";
				script="spawn player_makeFire;";
				use[]=
				{
					"PartWoodPile"
				};
			};
			class Craft0
			{
				text="Make Wooden Splint";
				script="spawn player_Craft;";
				use[]=
				{
					{"PartWoodPile",1},
					{"ItemTape",1}
				};
				output[]=
				{
					{"ItemWoodenSplint","magazine",1}
				};
				crafting = 1;
			};
		};
	};
	class TrapBear : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = "Bear Trap";
		model = "\dayz_equip\models\bear_trap_gear.p3d";
		picture = "\dayz_equip\textures\equip_bear_trap_ca.paa";
		descriptionShort = "Place to add a bear trap";
		
		class ItemActions {
			class Build {
				text = "Place Trap";
				script = "spawn player_setTrap;";
				require = "ItemToolbox";
				create = "BearTrap_DZ";
			};
		};
	};
	class ItemSodaEmpty; //External class reference													//drinks
	class ItemSodaCoke; //External class reference	
	class ItemSodaCokeEmpty : ItemSodaEmpty{
		model = "\dayz_equip\models\soda_coke_e.p3d";
		picture = "\dayz_equip\textures\equip_soda_empty_ca.paa";
	};
	class ItemSodaPepsiEmpty : ItemSodaEmpty{
		model = "\dayz_equip\models\soda_pepsi_e.p3d";
		picture = "\dayz_equip\textures\equip_soda_empty_ca.paa";
	};
	class ItemSodaMdewEmpty : ItemSodaEmpty{
		model = "\dayz_equip\models\soda_mdew_e.p3d";
		picture = "\dayz_equip\textures\equip_soda_empty_ca.paa";
	};																								//Below Begins DayZ Community MOD Dev Team Community Assets
	class 8Rnd_B_Beneli_74Slug;	// External class reference											//ammo
	class 8Rnd_B_Beneli_Pellets; // External class reference
	class 15Rnd_W1866_Slug;	// External class reference
	class 2Rnd_shotgun_74Slug : 8Rnd_B_Beneli_74Slug {
		displayName="2Rnd. Slug";
		count=2;
		descriptionShort="2 Rounds 12 gauge Shotgun Shells<br/>Shot Load: Slug<br/>Used in: Double Barrel Shotgun</br>Can be comined for use in other Shotguns and Winchester";
		model = "\z\addons\dayz_communityassets\models\2shells_slugshot.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_2shells_slugshot_CA.paa";
		class ItemActions
		{
			class ReloadMag
			{
				text="Convert for m1014";
				script="spawn player_reloadMag;";
				use[]=
				{
					"2Rnd_shotgun_74Slug",
					"2Rnd_shotgun_74Slug",
					"2Rnd_shotgun_74Slug",
					"2Rnd_shotgun_74Slug"
				};
				output[]=
				{
					"8Rnd_B_Beneli_74Slug"
				};
			};
			class Craft0
			{
				text="Convert for 1866";
				script="spawn player_Craft;";
				use[]=
				{
					{"2Rnd_shotgun_74Slug",7}
				};
				output[]=
				{
					{"15Rnd_W1866_Slug","magazine",1}
				};
				crafting = 1;
			};
		};
	};
	class 2Rnd_shotgun_74Pellets: 8Rnd_B_Beneli_Pellets {
		displayName="2Rnd. Pellets";
		count=2;
		descriptionShort="2 Rounds 12 gauge Shotgun Shells<br/>Shot Load: Pellets<br/>Used in: Double Barrel Shotgun</br>Can be comined for use in other Shotguns and Winchester";
		model = "\z\addons\dayz_communityassets\models\2shells_pellet.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_2shells_pellet_CA.paa";
		class ItemActions
		{
			class ReloadMag
			{
				text="Combine to 8 rounds";
				script="spawn player_reloadMag;";
				use[]=
				{
					"2Rnd_shotgun_74Pellets",
					"2Rnd_shotgun_74Pellets",
					"2Rnd_shotgun_74Pellets",
					"2Rnd_shotgun_74Pellets"
				};
				output[]=
				{
					"8Rnd_B_Beneli_Pellets"
				};
			};
		};
	};	
	class Quiver : CA_Magazine {
		scope = public;
		ammo = "WoodenArrow";
		count = 20;
		descriptionshort = "Quiver used with the Crossbow, Max arrows 20.";
		displayname = "Quiver";
		initSpeed = 150;
		model = "\z\addons\dayz_communityassets\models\quiver";
		picture = "\z\addons\dayz_communityassets\pictures\equip_quiver_ca.paa";
	};	
	class WoodenArrow : CA_Magazine {
		scope = public;
		displayName = "Arrow"; //$STR_MAG_NAME_3;
		model = "\dayz_weapons\models\bolt_gear";
		picture = "\z\addons\dayz_communityassets\pictures\equip_warrow_ca.paa";
		ammo = "WoodenArrow";
		count = 1;
		initSpeed = 150;
		descriptionShort = "Arrow made out of wood, used with the Crossbow."; //$STR_MAG_DESC_3;
		
		class ItemActions {
			class ReloadMag {
				text = "Combine into Quiver";
				script = "spawn player_reloadMag;";
				use[] = {"WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow"};
				output[] = {"Quiver"};
			};
		};
	};	
	class FoodDrink; // External class reference													//drink
	class ItemWaterbottle : FoodDrink {
		scope=2;
		refillable=1;
		sfx="drink";
		displayName="$STR_EQUIP_NAME_12";
		model="\dayz_equip\models\waterbottle_gear.p3d";
		picture="\dayz_equip\textures\equip_waterbottle_ca.paa";
		descriptionShort="$STR_EQUIP_DESC_12";
		class ItemActions {
			class Drink	{
				text="$STR_ACTIONS_DRINK";
				script="spawn player_drink;";
			}; //SMD Addition
			class Craft0 {
				text="Drug Water";
				script="spawn player_Craft;";
				use[]= {
					{"ItemWaterbottle",1},
					{"ItemPainkiller",1}
				};
				output[]= {
					{"ItemWaterbottleDrugged","magazine",1}
				};
				crafting = 1;
			}; //end SMD Addition
		};
		
	};	
	class ItemWaterbottleBoiled : ItemWaterbottle {
		displayName = $STR_ITEMWATERBOTTLEBOILED_CODE_NAME;
		descriptionShort = $STR_ITEMWATERBOTTLEBOILED_CODE_DESC;
	};
	class ItemSodaClays : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_2;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_2;
		model = "z\addons\dayz_communityassets\models\soda_clays_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_clays_clean_full_ca.paa";
	};	
	class ItemSodaClaysEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_clays_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_clays_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};	
	class ItemSodaClaysDirty : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_2;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_2;
		model = "z\addons\dayz_communityassets\models\soda_clays_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_clays_clean_full_ca.paa";
	};	
	class ItemSodaClaysDirtyEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_clays_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_clays_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaClaysRusted : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_2;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_2;
		model = "z\addons\dayz_communityassets\models\soda_clays_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_clays_clean_full_ca.paa";
	};	
	class ItemSodaClaysRustedEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_clays_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_clays_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaDrwaste : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_4;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_4;
		model = "z\addons\dayz_communityassets\models\soda_drwaste_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_drwaste_clean_full_ca.paa";
	};
	class ItemSodaDrwasteEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_drwaste_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_drwaste_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaDrwasteDirty : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_4;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_4;
		model = "z\addons\dayz_communityassets\models\soda_drwaste_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_drwaste_clean_full_ca.paa";
	};
	class ItemSodaDrwasteDirtyEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_drwaste_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_drwaste_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaDrwasteRusted : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_4;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_4;
		model = "z\addons\dayz_communityassets\models\soda_drwaste_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_drwaste_clean_full_ca.paa";
	};
	class ItemSodaDrwasteRustedEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_drwaste_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_drwaste_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaFranka : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_5;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_5;
		model = "z\addons\dayz_communityassets\models\soda_franka_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_franka_clean_full_ca.paa";
	};
	class ItemSodaFrankaEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_franka_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_franka_clean_empty_ca";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaFrankaDirty : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_5;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_5;
		model = "z\addons\dayz_communityassets\models\soda_franka_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_franka_clean_full_ca.paa";
	};
	class ItemSodaFrankaDirtyEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_franka_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_franka_clean_empty_ca";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaFrankaRusted : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_5;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_5;
		model = "z\addons\dayz_communityassets\models\soda_franka_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_franka_clean_full_ca.paa";
	};
	class ItemSodaFrankaRustedEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_franka_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_franka_clean_empty_ca";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaLirik : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_7;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_7;
		model = "z\addons\dayz_communityassets\models\soda_lirik_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lirik_clean_full_ca.paa";
	};
	class ItemSodaLirikEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_lirik_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lirik_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaLirikDirty : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_7;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_7;
		model = "z\addons\dayz_communityassets\models\soda_lirik_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lirik_clean_full_ca.paa";
	};
	class ItemSodaLirikDirtyEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_lirik_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lirik_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaLirikRusted : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_7;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_7;
		model = "z\addons\dayz_communityassets\models\soda_lirik_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lirik_clean_full_ca.paa";
	};
	class ItemSodaLirikRustedEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_lirik_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lirik_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};	
	class ItemSodaLemonade : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_6;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_6;
		model = "z\addons\dayz_communityassets\models\soda_lemonade_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lemonade_clean_full_ca.paa";
	};	
	class ItemSodaLemonadeEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_lemonade_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lemonade_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};	
	class ItemSodaLemonadeDirty : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_6;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_6;
		model = "z\addons\dayz_communityassets\models\soda_lemonade_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lemonade_clean_full_ca.paa";
	};	
	class ItemSodaLemonadeDirtyEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_lemonade_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lemonade_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};		
	class ItemSodaLemonadeRusted : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_6;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_6;
		model = "z\addons\dayz_communityassets\models\soda_lemonade_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lemonade_clean_full_ca.paa";
	};	
	class ItemSodaLemonadeRustedEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_lemonade_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lemonade_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};		
	class ItemSodaLvg : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_8;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_8;
		model = "z\addons\dayz_communityassets\models\soda_lvg_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lvg_clean_full_ca.paa";
	};	
	class ItemSodaLvgEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_lvg_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lvg_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};		
	class ItemSodaLvgDirty : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_8;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_8;
		model = "z\addons\dayz_communityassets\models\soda_lvg_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lvg_clean_full_ca.paa";
	};	
	class ItemSodaLvgDirtyEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_lvg_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lvg_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};		
	class ItemSodaLvgRusted : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_8;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_8;
		model = "z\addons\dayz_communityassets\models\soda_lvg_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lvg_clean_full_ca.paa";
	};	
	class ItemSodaRustedLvgEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_lvg_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lvg_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaMtngreen : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_0;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_0;
		model = "z\addons\dayz_communityassets\models\soda_mtngreen_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_mtngreen_clean_full_ca.paa";
	};
	class ItemSodaMtngreenEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_mtngreen_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_mtngreen_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaMtngreenDirty : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_0;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_0;
		model = "z\addons\dayz_communityassets\models\soda_mtngreen_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_mtngreen_clean_full_ca.paa";
	};
	class ItemSodaMtngreenDirtyEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_mtngreen_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_mtngreen_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaMtngreenRusted : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_0;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_0;
		model = "z\addons\dayz_communityassets\models\soda_mtngreen_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_mtngreen_clean_full_ca.paa";
	};
	class ItemSodaMtngreenRustedEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_mtngreen_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_mtngreen_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaMzly : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_9;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_9;
		model = "z\addons\dayz_communityassets\models\soda_mzly_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_mzly_clean_full_ca.paa";
	};
	class ItemSodaMzlyEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_mzly_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_mzly_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaMzlyDirty : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_9;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_9;
		model = "z\addons\dayz_communityassets\models\soda_mzly_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_mzly_clean_full_ca.paa";
	};
	class ItemSodaMzlyDirtyEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_mzly_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_mzly_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaMzlyRusted : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_9;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_9;
		model = "z\addons\dayz_communityassets\models\soda_mzly_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_mzly_clean_full_ca.paa";
	};
	class ItemSodaMzlyRustedEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_mzly_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_mzly_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaPeppsy : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_10;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_10;
		model = "z\addons\dayz_communityassets\models\soda_peppsy_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_peppsy_clean_full_ca.paa";
	};
	class ItemSodaPeppsyEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_peppsy_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_peppsy_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaPeppsyDirty : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_10;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_10;
		model = "z\addons\dayz_communityassets\models\soda_peppsy_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_peppsy_clean_full_ca.paa";
	};
	class ItemSodaPeppsyDirtyEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_peppsy_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_peppsy_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaPeppsyRusted : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_10;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_10;
		model = "z\addons\dayz_communityassets\models\soda_peppsy_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_peppsy_clean_full_ca.paa";
	};
	class ItemSodaPeppsyRustedEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_peppsy_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_peppsy_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaR4z0r : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_1;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_1;
		model = "z\addons\dayz_communityassets\models\soda_r4z0r_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_r4z0r_clean_full_ca.paa";
	};
	class ItemSodaR4z0rEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_r4z0r_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_r4z0r_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaR4z0rDirty : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_1;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_1;
		model = "z\addons\dayz_communityassets\models\soda_r4z0r_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_r4z0r_clean_full_ca.paa";
	};
	class ItemSodaR4z0rDirtyEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_r4z0r_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_r4z0r_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaR4z0rRusted : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_1;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_1;
		model = "z\addons\dayz_communityassets\models\soda_r4z0r_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_r4z0r_clean_full_ca.paa";
	};
	class ItemSodaR4z0rRustedEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_r4z0r_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_r4z0r_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaRabbit : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_11;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_11;
		model = "z\addons\dayz_communityassets\models\soda_rabbit_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_rabbit_clean_full_ca.paa";
	};
	class ItemSodaRabbitEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_rabbit_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_rabbit_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaRabbitDirty : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_11;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_11;
		model = "z\addons\dayz_communityassets\models\soda_rabbit_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_rabbit_clean_full_ca.paa";
	};
	class ItemSodaRabbitDirtyEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_rabbit_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_rabbit_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaRabbitRusted : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_11;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_11;
		model = "z\addons\dayz_communityassets\models\soda_rabbit_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_rabbit_clean_full_ca.paa";
	};
	class ItemSodaRabbitRustedEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_rabbit_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_rabbit_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaRocket : ItemSodaCoke {//model error my docs texture reference + Rocket said No thanks to Joe Originally
		displayName = "Rocket Soda";
		descriptionShort = "Soda Made from Rockets";
		model = "z\addons\dayz_communityassets\models\soda_rocket_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_rocket_clean_full_ca.paa";
	};
	class ItemSodaRocketEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_rocket_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_rocket_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaSacrite : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_12;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_12;
		model = "z\addons\dayz_communityassets\models\soda_sacrite_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_sacrite_clean_full_ca.paa";
	};
	class ItemSodaSacriteEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_sacrite_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_sacrite_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaSacriteDirty : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_12;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_12;
		model = "z\addons\dayz_communityassets\models\soda_sacrite_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_sacrite_clean_full_ca.paa";
	};
	class ItemSodaSacriteDirtyEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_sacrite_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_sacrite_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaSacriteRusted : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_12;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_12;
		model = "z\addons\dayz_communityassets\models\soda_sacrite_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_sacrite_clean_full_ca.paa";
	};
	class ItemSodaSacriteRustedEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_sacrite_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_sacrite_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaSmasht : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_3;
		descriptionShort = "Grape Drink? - Great Drink!";
		model = "z\addons\dayz_communityassets\models\soda_smasht_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_smasht_clean_full_ca.paa";
	};
	class ItemSodaSmashtEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_smasht_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_smasht_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaSmashtDirty : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_3;
		descriptionShort = "Grape Drink? - Great Drink!";
		model = "z\addons\dayz_communityassets\models\soda_smasht_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_smasht_clean_full_ca.paa";
	};
	class ItemSodaSmashtDirtyEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_smasht_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_smasht_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class ItemSodaSmashtRusted : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_3;
		descriptionShort = "Grape Drink? - Great Drink!";
		model = "z\addons\dayz_communityassets\models\soda_smasht_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_smasht_clean_full_ca.paa";
	};
	class ItemSodaSmashtRustedEmpty : ItemSodaEmpty {
		model = "z\addons\dayz_communityassets\models\soda_smasht_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_smasht_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
	class FoodEdible; // External class reference													//food
	class FoodmeatRaw : FoodEdible {																//food - raw
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_FOOD_EQIP_CODE_NAME_0;
		model = "\dayz_equip\models\food_steak_gear.p3d";
		picture = "\dayz_equip\textures\equip_steak_ca.paa";
		descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_0;
		bloodRegen = 100;
	};
	class FoodbaconRaw : FoodmeatRaw {
		displayName = $STR_FOOD_EQIP_CODE_NAME_4;
		model = "z\addons\dayz_communityassets\models\bacon_raw.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_bacon_raw_CA.paa";
		descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_4;
		bloodRegen = 150;
	};
	class FoodbeefRaw : FoodmeatRaw {
		displayName = $STR_FOOD_EQIP_CODE_NAME_6;
		descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_6;
		bloodRegen = 100;
	};
	class FoodchickenRaw : FoodmeatRaw {
		displayName = $STR_FOOD_EQIP_CODE_NAME_2;
		descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_2;
		bloodRegen = 100;
	};
	class FoodmuttonRaw : FoodmeatRaw {
		displayName = $STR_FOOD_EQIP_CODE_NAME_1;
		descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_1;
		bloodRegen = 100;
	};
	class FoodrabbitRaw : FoodmeatRaw {
		displayName = $STR_FOOD_EQIP_CODE_NAME_3;
		descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_3;
		bloodRegen = 400;
	};
	class FoodmeatCooked : FoodEdible {																//food - cooked
		scope = public;
		count = 1;
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_0;
		model = "\dayz_equip\models\food_steak_cooked_gear.p3d";
		picture = "\dayz_equip\textures\equip_steak_cooked_ca.paa";
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_0;
		bloodRegen = 600; //800
	};
	class FoodmuttonCooked : FoodmeatCooked {
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_1;
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_1;
		bloodRegen = 500; //400
	};
	class FoodchickenCooked : FoodmeatCooked {
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_2;
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_2;
		bloodRegen = 400;
	};
	class FoodbaconCooked : FoodmeatCooked {
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_4;
		model = "z\addons\dayz_communityassets\models\bacon_fried.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_bacon_fried_CA.paa";
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_4;
		bloodRegen = 800; //400
	};
	class FoodrabbitCooked : FoodmeatCooked {
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_3;
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_3;
		bloodRegen = 1200; //1600
	};
	class FoodbeefCooked : FoodmeatCooked {
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_6;
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_6;
		bloodRegen = 600;
	};	
	/*class AngelCookies : FoodEdible {																//food - packaged
		scope = public;
		count = 1;
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_5;
		model = "z\addons\dayz_communityassets\models\buiscits_box.p3d";
		picture = "z\addons\dayz_communityassets\pictures\i_buiscit_ca.paa";
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_5;
		bloodRegen = 100;
	};*/
	class FoodCanBadguy : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_BADGUY;
		descriptionShort = $STR_FOOD_DESC_CAN_BADGUY;
		model = "z\addons\dayz_communityassets\models\can_badguy_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_badguy_clean_full_ca.paa";
	};
	class FoodCanBadguyDirty : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_BADGUY;
		descriptionShort = $STR_FOOD_DESC_CAN_BADGUY;
		model = "z\addons\dayz_communityassets\models\can_badguy_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_badguy_clean_full_ca.paa";
	};
	class FoodCanBadguyRusted : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_BADGUY;
		descriptionShort = $STR_FOOD_DESC_CAN_BADGUY;
		model = "z\addons\dayz_communityassets\models\can_badguy_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_badguy_clean_full_ca.paa";
	};
	class FoodCanBoneboy : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_BONEBOY;
		descriptionShort = $STR_FOOD_DESC_CAN_BONEBOY;
		model = "z\addons\dayz_communityassets\models\can_boneboy_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_boneboy_clean_full_ca.paa";
	};
	class FoodCanBoneboyDirty : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_BONEBOY;
		descriptionShort = $STR_FOOD_DESC_CAN_BONEBOY;
		model = "z\addons\dayz_communityassets\models\can_boneboy_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_boneboy_clean_full_ca.paa";
	};
	class FoodCanBoneboyRusted : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_BONEBOY;
		descriptionShort = $STR_FOOD_DESC_CAN_BONEBOY;
		model = "z\addons\dayz_communityassets\models\can_boneboy_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_boneboy_clean_full_ca.paa";
	};
	class FoodCanCorn : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_CORN;
		descriptionShort = $STR_FOOD_DESC_CAN_CORN;
		model = "z\addons\dayz_communityassets\models\can_corn_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_corn_clean_full_ca.paa";
	};
	class FoodCanCornDirty : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_CORN;
		descriptionShort = $STR_FOOD_DESC_CAN_CORN;
		model = "z\addons\dayz_communityassets\models\can_corn_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_corn_clean_full_ca.paa";
	};
	class FoodCanCornRusted : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_CORN;
		descriptionShort = $STR_FOOD_DESC_CAN_CORN;
		model = "z\addons\dayz_communityassets\models\can_corn_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_corn_clean_full_ca.paa";
	};
	class FoodCanCurgon : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_CURGON;
		descriptionShort = $STR_FOOD_DESC_CAN_CURGON;
		model = "z\addons\dayz_communityassets\models\can_curgon_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_curgon_clean_full_ca.paa";
	};
	class FoodCanCurgonDirty : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_CURGON;
		descriptionShort = $STR_FOOD_DESC_CAN_CURGON;
		model = "z\addons\dayz_communityassets\models\can_curgon_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_curgon_clean_full_ca.paa";
	};
	class FoodCanCurgonRusted : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_CURGON;
		descriptionShort = $STR_FOOD_DESC_CAN_CURGON;
		model = "z\addons\dayz_communityassets\models\can_curgon_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_curgon_clean_full_ca.paa";
	};
	class FoodCanDemon : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_DEMON;
		descriptionShort = $STR_FOOD_DESC_CAN_DEMON;
		model = "z\addons\dayz_communityassets\models\can_demon_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_demon_clean_full_ca.paa";
	};
	class FoodCanDemonDirty : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_DEMON;
		descriptionShort = $STR_FOOD_DESC_CAN_DEMON;
		model = "z\addons\dayz_communityassets\models\can_demon_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_demon_clean_full_ca.paa";
	};
	class FoodCanDemonRusted : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_DEMON;
		descriptionShort = $STR_FOOD_DESC_CAN_DEMON;
		model = "z\addons\dayz_communityassets\models\can_demon_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_demon_clean_full_ca.paa";
	};
	class FoodCanDerpy : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_DERPY;
		descriptionShort = $STR_FOOD_DESC_CAN_DERPY;
		model = "z\addons\dayz_communityassets\models\can_derpy_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_derpy_clean_full_ca.paa";
	};
	class FoodCanDerpyDirty : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_DERPY;
		descriptionShort = $STR_FOOD_DESC_CAN_DERPY;
		model = "z\addons\dayz_communityassets\models\can_derpy_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_derpy_clean_full_ca.paa";
	};
	class FoodCanDerpyRusted : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_DERPY;
		descriptionShort = $STR_FOOD_DESC_CAN_DERPY;
		model = "z\addons\dayz_communityassets\models\can_derpy_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_derpy_clean_full_ca.paa";
	};
	class FoodCanFraggleos : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_FRAGGLEOS;
		descriptionShort = $STR_FOOD_DESC_CAN_FRAGGLEOS;
		model = "z\addons\dayz_communityassets\models\can_fraggleos_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_fraggleos_clean_full_ca.paa";
	};
	class FoodCanFraggleosDirty : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_FRAGGLEOS;
		descriptionShort = $STR_FOOD_DESC_CAN_FRAGGLEOS;
		model = "z\addons\dayz_communityassets\models\can_fraggleos_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_fraggleos_clean_full_ca.paa";
	};	
	class FoodCanFraggleosRusted : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_FRAGGLEOS;
		descriptionShort = $STR_FOOD_DESC_CAN_FRAGGLEOS;
		model = "z\addons\dayz_communityassets\models\can_fraggleos_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_fraggleos_clean_full_ca.paa";
	};		
	class FoodCanGriff : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_GRIFF;
		descriptionShort = $STR_FOOD_DESC_CAN_GRIFF;
		model = "z\addons\dayz_communityassets\models\can_griff_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_griff_clean_full_ca.paa";
	};		
	class FoodCanGriffDirty : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_GRIFF;
		descriptionShort = $STR_FOOD_DESC_CAN_GRIFF;
		model = "z\addons\dayz_communityassets\models\can_griff_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_griff_clean_full_ca.paa";
	};		
	class FoodCanGriffRusted : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_GRIFF;
		descriptionShort = $STR_FOOD_DESC_CAN_GRIFF;
		model = "z\addons\dayz_communityassets\models\can_griff_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_griff_clean_full_ca.paa";
	};
	class FoodCanHerpy : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_HERPY;
		descriptionShort = $STR_FOOD_DESC_CAN_HERPY;
		model = "z\addons\dayz_communityassets\models\can_herpy_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_herpy_clean_full_ca.paa";
	};
	class FoodCanHerpyDirty : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_HERPY;
		descriptionShort = $STR_FOOD_DESC_CAN_HERPY;
		model = "z\addons\dayz_communityassets\models\can_herpy_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_herpy_clean_full_ca.paa";
	};
	class FoodCanHerpyRusted : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_HERPY;
		descriptionShort = $STR_FOOD_DESC_CAN_HERPY;
		model = "z\addons\dayz_communityassets\models\can_herpy_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_herpy_clean_full_ca.paa";
	};
	class FoodCanOrlok : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_ORLOK;
		descriptionShort = $STR_FOOD_DESC_CAN_ORLOK;
		model = "z\addons\dayz_communityassets\models\can_orlok_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_orlok_clean_full_ca.paa";
	};
	class FoodCanOrlokDirty : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_ORLOK;
		descriptionShort = $STR_FOOD_DESC_CAN_ORLOK;
		model = "z\addons\dayz_communityassets\models\can_orlok_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_orlok_clean_full_ca.paa";
	};
	class FoodCanOrlokRusted : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_ORLOK;
		descriptionShort = $STR_FOOD_DESC_CAN_ORLOK;
		model = "z\addons\dayz_communityassets\models\can_orlok_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_orlok_clean_full_ca.paa";
	};
	class FoodCanPowell : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_POWELL;
		descriptionShort = $STR_FOOD_DESC_CAN_POWELL;
		model = "z\addons\dayz_communityassets\models\can_powell_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_powell_clean_full_ca.paa";
	};
	class FoodCanPowellDirty : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_POWELL;
		descriptionShort = $STR_FOOD_DESC_CAN_POWELL;
		model = "z\addons\dayz_communityassets\models\can_powell_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_powell_dirty_full_ca.paa";
	};
	class FoodCanPowellRusted : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_POWELL;
		descriptionShort = $STR_FOOD_DESC_CAN_POWELL;
		model = "z\addons\dayz_communityassets\models\can_powell_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_powell_rusted_full_ca.paa";
	};
	class FoodCanTylers : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_TYLERS;
		descriptionShort = $STR_FOOD_DESC_CAN_TYLERS;
		model = "z\addons\dayz_communityassets\models\can_tylers_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_tylers_clean_full_ca.paa";
	};
	class FoodCanTylersDirty : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_TYLERS;
		descriptionShort = $STR_FOOD_DESC_CAN_TYLERS;
		model = "z\addons\dayz_communityassets\models\can_tylers_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_tylers_clean_full_ca.paa";
	};
	class FoodCanTylersRusted : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_TYLERS;
		descriptionShort = $STR_FOOD_DESC_CAN_TYLERS;
		model = "z\addons\dayz_communityassets\models\can_tylers_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_tylers_clean_full_ca.paa";
	};
	class FoodCanUnlabeled : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_UNLABELED;
		descriptionShort = $STR_FOOD_DESC_CAN_UNLABELED;
		model = "z\addons\dayz_communityassets\models\can_unlabeled_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_unlabeled_clean_full_ca.paa";
	};
	class FoodCanUnlabeledDirty : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_UNLABELED;
		descriptionShort = $STR_FOOD_DESC_CAN_UNLABELED;
		model = "z\addons\dayz_communityassets\models\can_unlabeled_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_unlabeled_clean_full_ca.paa";
	};
	class FoodCanUnlabeledRusted : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_UNLABELED;
		descriptionShort = $STR_FOOD_DESC_CAN_UNLABELED;
		model = "z\addons\dayz_communityassets\models\can_unlabeled_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_unlabeled_clean_full_ca.paa";
	};
	class TrashTinCan;//external class 
	class FoodCanBadguyEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_BADGUY_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_BADGUY_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_badguy_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_badguy_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanBadguyDirtyEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_BADGUY_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_BADGUY_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_badguy_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_badguy_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanBadguyRustedEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_BADGUY_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_BADGUY_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_badguy_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_badguy_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanBoneboyEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_BONEBOY_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_BONEBOY_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_boneboy_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_boneboy_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanBoneboyDirtyEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_BONEBOY_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_BONEBOY_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_boneboy_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_boneboy_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanBoneboyRustedEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_BONEBOY_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_BONEBOY_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_boneboy_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_boneboy_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanCornEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_CORN_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_CORN_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_corn_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_corn_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanCornDirtyEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_CORN_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_CORN_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_corn_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_corn_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanCornRustedEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_CORN_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_CORN_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_corn_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_corn_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanCurgonEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_CURGON_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_CURGON_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_curgon_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_curgon_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanCurgonDirtyEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_CURGON_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_CURGON_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_curgon_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_curgon_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanCurgonRustedEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_CURGON_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_CURGON_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_curgon_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_curgon_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanDemonEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_DEMON_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_DEMON_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_demon_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_demon_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanDemonDirtyEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_DEMON_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_DEMON_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_demon_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_demon_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanDemonRustedEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_DEMON_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_DEMON_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_demon_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_demon_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanDerpyEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = "Can (Stew)";
		descriptionShort = "Can of Donty Hooves - canned Beef Stew";
		model = "z\addons\dayz_communityassets\models\can_derpy_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_derpy_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanDerpyDirtyEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = "Can (Stew)";
		descriptionShort = "Can of Donty Hooves - canned Beef Stew";
		model = "z\addons\dayz_communityassets\models\can_derpy_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_derpy_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanDerpyRustedEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = "Can (Stew)";
		descriptionShort = "Can of Donty Hooves - canned Beef Stew";
		model = "z\addons\dayz_communityassets\models\can_derpy_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_derpy_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanFraggleosEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_FRAGGLEOS_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_FRAGGLEOS_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_fraggleos_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_fraggleos_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanFraggleosDirtyEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_FRAGGLEOS_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_FRAGGLEOS_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_fraggleos_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_fraggleos_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanFraggleosRustedEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_FRAGGLEOS_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_FRAGGLEOS_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_fraggleos_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_fraggleos_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanGriffEmpty : TrashTinCan {
		scope = public;
		count = 1;
		model = "z\addons\dayz_communityassets\models\can_griff_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_griff_clean_empty_ca.paa";
		displayName = $STR_FOOD_NAME_CAN_GRIFF_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_GRIFF_EMPTY;
		ammo = "TinCan";
	};
	class FoodCanGriffDirtyEmpty : TrashTinCan {
		scope = public;
		count = 1;
		model = "z\addons\dayz_communityassets\models\can_griff_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_griff_clean_empty_ca.paa";
		displayName = $STR_FOOD_NAME_CAN_GRIFF_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_GRIFF_EMPTY;
		ammo = "TinCan";
	};
	class FoodCanGriffRustedEmpty : TrashTinCan {
		scope = public;
		count = 1;
		model = "z\addons\dayz_communityassets\models\can_griff_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_griff_clean_empty_ca.paa";
		displayName = $STR_FOOD_NAME_CAN_GRIFF_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_GRIFF_EMPTY;
		ammo = "TinCan";
	};
	class FoodCanHerpyEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_HERPY_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_HERPY_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_herpy_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_herpy_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanHerpyDirtyEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_HERPY_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_HERPY_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_herpy_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_herpy_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanHerpyRustedEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_HERPY_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_HERPY_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_herpy_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_herpy_clean_empty_ca.paa";
		ammo = "TinCan";
	};/*No Model - Not even in extra Source from joeslucky22
	class FoodCanLongSprats : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 150;
		displayName = $STR_FOOD_NAME_CAN_LONG_SPRATS;
		descriptionShort = $STR_FOOD_DESC_CAN_LONG_SPRATS;
		model = "z\addons\dayz_communityassets\models\can_long_sprat_clean_full_co.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_long_sprat_clean_full_ca.paa";
	};*/
	class FoodCanOrlokEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_ORLOK_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_ORLOK_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_orlok_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_orlok_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanOrlokDirtyEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_ORLOK_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_ORLOK_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_orlok_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_orlok_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanOrlokRustedEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_ORLOK_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_ORLOK_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_orlok_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_orlok_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanPowellEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_POWELL_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_POWELL_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_powell_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_powell_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanPowellDirtyEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_POWELL_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_POWELL_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_powell_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_powell_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanPowellRustedEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_POWELL_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_POWELL_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_powell_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_powell_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanRusCorn : FoodEdible { //added for sake of good order, Russian Cans not added to Sahrani Loot Tables NO ENTRIES IN STRING TABLES
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_RUS_CORN;
		descriptionShort = $STR_FOOD_DESC_CAN_RUS_CORN;
		model = "z\addons\dayz_communityassets\models\can_small_rus_corn_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_small_rus_corn_clean_full_ca.paa";
	};
	class FoodCanRusCornDirty : FoodEdible { //added for sake of good order, Russian Cans not added to Sahrani Loot Tables NO ENTRIES IN STRING TABLES
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_RUS_CORN;
		descriptionShort = $STR_FOOD_DESC_CAN_RUS_CORN;
		model = "z\addons\dayz_communityassets\models\can_small_rus_corn_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_small_rus_corn_clean_full_ca.paa";
	};
	class FoodCanRusCornRusted : FoodEdible { //added for sake of good order, Russian Cans not added to Sahrani Loot Tables NO ENTRIES IN STRING TABLES
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_RUS_CORN;
		descriptionShort = $STR_FOOD_DESC_CAN_RUS_CORN;
		model = "z\addons\dayz_communityassets\models\can_small_rus_corn_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_small_rus_corn_clean_full_ca.paa";
	};
	class FoodCanRusMilk : FoodEdible { //added for sake of good order, Russian Cans not added to Sahrani Loot Tables
		scope = public;
		count = 1;
		bloodRegen = 100;
		displayName = $STR_FOOD_NAME_CAN_RUS_MILK;
		descriptionShort = $STR_FOOD_DESC_CAN_RUS_MILK;
		model = "z\addons\dayz_communityassets\models\can_small_rus_milk_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_small_rus_milk_clean_full_ca.paa";
	};
	class FoodCanRusMilkDirty : FoodEdible { //added for sake of good order, Russian Cans not added to Sahrani Loot Tables
		scope = public;
		count = 1;
		bloodRegen = 100;
		displayName = $STR_FOOD_NAME_CAN_RUS_MILK;
		descriptionShort = $STR_FOOD_DESC_CAN_RUS_MILK;
		model = "z\addons\dayz_communityassets\models\can_small_rus_milk_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_small_rus_milk_clean_full_ca.paa";
	};
	class FoodCanRusMilkRusted : FoodEdible { //added for sake of good order, Russian Cans not added to Sahrani Loot Tables
		scope = public;
		count = 1;
		bloodRegen = 100;
		displayName = $STR_FOOD_NAME_CAN_RUS_MILK;
		descriptionShort = $STR_FOOD_DESC_CAN_RUS_MILK;
		model = "z\addons\dayz_communityassets\models\can_small_rus_milk_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_small_rus_milk_clean_full_ca.paa";
	};
	class FoodCanRusPeas : FoodEdible { //added for sake of good order, Russian Cans not added to Sahrani Loot Tables
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_RUS_PEAS;
		descriptionShort = $STR_FOOD_DESC_CAN_RUS_PEAS;
		model = "z\addons\dayz_communityassets\models\can_small_rus_peas_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_small_rus_peas_clean_full_ca.paa";
	};
	class FoodCanRusPeasDirty : FoodEdible { //added for sake of good order, Russian Cans not added to Sahrani Loot Tables
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_RUS_PEAS;
		descriptionShort = $STR_FOOD_DESC_CAN_RUS_PEAS;
		model = "z\addons\dayz_communityassets\models\can_small_rus_peas_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_small_rus_peas_clean_full_ca.paa";
	};
	class FoodCanRusPeasRusted : FoodEdible { //added for sake of good order, Russian Cans not added to Sahrani Loot Tables
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_RUS_PEAS;
		descriptionShort = $STR_FOOD_DESC_CAN_RUS_PEAS;
		model = "z\addons\dayz_communityassets\models\can_small_rus_peas_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_small_rus_peas_clean_full_ca.paa";
	};
	class FoodCanRusPork : FoodEdible { //added for sake of good order, Russian Cans not added to Sahrani Loot Tables
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_RUS_PORK;
		descriptionShort = $STR_FOOD_DESC_CAN_RUS_PORK;
		model = "z\addons\dayz_communityassets\models\can_small_rus_pork_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_small_rus_pork_clean_full_ca.paa";
	};
	class FoodCanRusPorkDirty : FoodEdible { //added for sake of good order, Russian Cans not added to Sahrani Loot Tables
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_RUS_PORK;
		descriptionShort = $STR_FOOD_DESC_CAN_RUS_PORK;
		model = "z\addons\dayz_communityassets\models\can_small_rus_pork_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_small_rus_pork_clean_full_ca.paa";
	};
	class FoodCanRusPorkRusted : FoodEdible { //added for sake of good order, Russian Cans not added to Sahrani Loot Tables
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_RUS_PORK;
		descriptionShort = $STR_FOOD_DESC_CAN_RUS_PORK;
		model = "z\addons\dayz_communityassets\models\can_small_rus_pork_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_small_rus_pork_clean_full_ca.paa";
	};
	class FoodCanRusStew : FoodEdible { //added for sake of good order, Russian Cans not added to Sahrani Loot Tables
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_RUS_STEW;
		descriptionShort = $STR_FOOD_DESC_CAN_RUS_STEW;
		model = "z\addons\dayz_communityassets\models\can_small_rus_stew_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_small_rus_stew_clean_full_ca.paa";
	};
	class FoodCanRusStewDirty : FoodEdible { //added for sake of good order, Russian Cans not added to Sahrani Loot Tables
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_RUS_STEW;
		descriptionShort = $STR_FOOD_DESC_CAN_RUS_STEW;
		model = "z\addons\dayz_communityassets\models\can_small_rus_stew_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_small_rus_stew_clean_full_ca.paa";
	};
	class FoodCanRusStewRusted : FoodEdible { //added for sake of good order, Russian Cans not added to Sahrani Loot Tables
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_RUS_STEW;
		descriptionShort = $STR_FOOD_DESC_CAN_RUS_STEW;
		model = "z\addons\dayz_communityassets\models\can_small_rus_stew_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_small_rus_stew_clean_full_ca.paa";
	};
	class FoodCanRusUnlabeled : FoodEdible { //added for sake of good order, Russian Cans not added to Sahrani Loot Tables
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_UNLABELED;
		descriptionShort = $STR_FOOD_DESC_CAN_UNLABELED;
		model = "z\addons\dayz_communityassets\models\can_small_unlabeled_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_small_rus_unlabeled_clean_full_ca.paa";
	};
	class FoodCanRusUnlabeledDirty : FoodEdible { //added for sake of good order, Russian Cans not added to Sahrani Loot Tables
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_UNLABELED;
		descriptionShort = $STR_FOOD_DESC_CAN_UNLABELED;
		model = "z\addons\dayz_communityassets\models\can_small_unlabeled_dirty_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_small_rus_unlabeled_clean_full_ca.paa";
	};
	class FoodCanRusUnlabeledRusted : FoodEdible { //added for sake of good order, Russian Cans not added to Sahrani Loot Tables
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_UNLABELED;
		descriptionShort = $STR_FOOD_DESC_CAN_UNLABELED;
		model = "z\addons\dayz_communityassets\models\can_small_unlabeled_rusted_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_small_rus_unlabeled_clean_full_ca.paa";
	};
	class FoodCanTylersEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_TYLERS_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_TYLERS_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_tylers_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_tylers_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanTylersDirtyEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_TYLERS_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_TYLERS_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_tylers_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_tylers_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanTylersRustedEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_TYLERS_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_TYLERS_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_tylers_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_tylers_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanUnlabeledEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_UNLABELED_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_UNLABELED_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_unlabeled_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_unlabeled_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanUnlabeledDirtyEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_UNLABELED_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_UNLABELED_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_unlabeled_dirty_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_unlabeled_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanUnlabeledRustedEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_UNLABELED_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_UNLABELED_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_unlabeled_rusted_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_unlabeled_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCandyAnders : FoodEdible {
		scope = public;
		count = 1;
		//sfx = "eat_chips";
		bloodRegen = 80;
		displayName = "Candy (Chocolate)";
		descriptionShort = "Ander's Joy - Some times you feel like a nut";
		model = "z\addons\dayz_communityassets\models\candybar_anders_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_candybar_anders_ca.paa";
	};
	class FoodCandyChubby : FoodEdible {
		scope = public;
		count = 1;
		//sfx = "eat_chips";
		bloodRegen = 80;
		displayName = "Candy (Chocolate)";
		descriptionShort = "Papa's Choclate Chubby Bar - It's Love, in bar form";
		model = "z\addons\dayz_communityassets\models\candybar_chubby_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_candybar_chubby_full_ca.paa";
	};
	class FoodCandyLegacys : FoodEdible {
		scope = public;
		count = 1;
		//sfx = "eat_chips";
		bloodRegen = 80;
		displayName = "Candybar (Chocolate)";
		descriptionShort = "Legacy's Bar - Chocolate, Carmel, and Peanut Candy Bar";
		model = "z\addons\dayz_communityassets\models\candybar_legacys_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_candybar_legacys_ca.paa";
	};
	class FoodCandyMintception : FoodEdible {
		scope = public;
		count = 1;
		//sfx = "eat_chips";
		bloodRegen = 80;
		displayName = "Candybar (Mint)";
		descriptionShort = "Mintception Candybar - Mint and Coconut Dipped in Chocolate";
		model = "z\addons\dayz_communityassets\models\candybar_mintception_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_candybar_mintception_ca.paa";
	};
	class FoodChipsChocolate : FoodEdible {
		scope = public;
		count = 1;
		sfx = "eat_chips";
		bloodRegen = 120;
		displayName = "Snack (Chips)";
		descriptionShort = "Bag of Papa's Chocolate Yummy Snacks";
		model = "z\addons\dayz_communityassets\models\bag_chips_small_chocolate_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_bag_chips_small_chocolate_full_ca.paa";
	};
	class FoodChipsMysticales : FoodEdible {
		scope = public;
		count = 1;
		sfx = "eat_chips";
		bloodRegen = 120;
		displayName = "Snack (Chips)";
		descriptionShort = "Bag of Miss Mystical's Jalepeno Chips";
		model = "z\addons\dayz_communityassets\models\bag_chips_small_mysticales_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_bag_chips_small_mysticales_full_ca.paa";
	};
	class FoodChipsSulahoops : FoodEdible {
		scope = public;
		count = 1;
		sfx = "eat_chips";
		bloodRegen = 120;
		displayName = "Snack (Rinds)";
		descriptionShort = "Bag of SulaHoops Pork Rinds";
		model = "z\addons\dayz_communityassets\models\bag_chips_small_sulahoops_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_bag_chips_small_sulahoops_full_ca.paa";
	};
	class FoodMRE : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 800;
		displayName = $STR_FOOD_NAME_MRE;
		descriptionShort = $STR_FOOD_DESC_MRE;
		model = "z\addons\dayz_communityassets\models\mre.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_mre_CA.paa";
	};
	class FoodNutmix : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 100;
		displayName = $STR_FOOD_NAME_NUTMIX;
		descriptionShort = $STR_FOOD_DESC_NUTMIX;
		model = "z\addons\dayz_communityassets\models\nutmix.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_nutmix_CA.paa";
	};
	class FoodPistachio : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 100;
		displayName = $STR_FOOD_NAME_PISTACHIO;
		descriptionShort = $STR_FOOD_DESC_PISTACHIO;
		model = "z\addons\dayz_communityassets\models\pistachio.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_pistachios_CA.paa";
	};
	class FoodTwinkie : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 100;
		displayName = "Snack - Twinkie";
		descriptionShort = "Only God knows";
		model = "z\addons\dayz_communityassets\models\twinkie.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_bag_twinkie_clean_ca.paa";
	};	
	class FoodTwinkieDirty : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 100;
		displayName = "Snack - Twinkie";
		descriptionShort = "Only God knows";
		model = "z\addons\dayz_communityassets\models\twinkie_dirty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_bag_twinkie_dirty_ca.paa";
	};
	class ItemTrashCards : CA_Magazine {
		scope = public;
		count = 1;
		displayName = "Playing Cards";
		descriptionShort = "Pack of Playing Cards";
		model = "z\addons\dayz_communityassets\models\cards.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_cards_ca.paa";
		type = 256;
	};
	class ItemTrashRazor : CA_Magazine {
		scope = public;
		count = 1;
		displayName = $STR_JUNK_NAME_RAZOR;
		descriptionShort = $STR_JUNK_DESC_RAZOR;
		model = "z\addons\dayz_communityassets\models\razor.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_razor_CA.paa";
		type = 256;
	};
	class ItemTrashToiletpaper : CA_Magazine {
		scope = public;
		count = 1;
		displayName = $STR_JUNK_NAME_TOILETPAPER;
		descriptionShort = $STR_JUNK_DESC_TOILETPAPER;
		model = "z\addons\dayz_communityassets\models\toiletpaper.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_toiletpaper_CA.paa";
		type = 256;
		class ItemActions {
			class Craft0 {
				text="Make Bandage";
				script="spawn player_Craft;";
				use[]= {
					{"ItemTape",1},
					{"ItemTrashToiletpaper",1}
				};
				output[]= {
					{"ItemBandage","magazine",1}
				};
				crafting = 1;
			};
		};
	};
	class Hatchet_Swing;//External class reference													//weapon
	 class Machete_Swing : Hatchet_Swing {
		displayName = "Machete";
		displayNameMagazine = "Machete";
		shortNameMagazine = "Machete";
		ammo = "Machete_Swing_Ammo";
	};						//Begin SMD assets by smd_dev team SMD Equipment Fixes and Additions Original and Community DayZ Content
	class 15Rnd_9x19_M9 {
	class ItemActions {
		class Craft0 
		{
			text="Convert for Bizon";
			script="spawn player_Craft;";
			use[]= {
			{"15Rnd_9x19_M9",4}
			};
			output[]= {
			{"64Rnd_9x19_Bizon","magazine",1}
			};
			crafting = 1;
			};
			class Craft1 {
			text="Convert for G17";
			script="spawn player_Craft;";
			use[]= {
			{"15Rnd_9x19_M9",1}
			};
			output[]= {
			{"17Rnd_9x19_glock17","magazine",1}
			};
			crafting = 1;
			};
			class Craft2 {
			text="Convert for MP5";
			script="spawn player_Craft;";
			use[]= {
			{"15Rnd_9x19_M9",2}
			};
			output[]= {
			{"30Rnd_9x19_MP5","magazine",1}
			};
			crafting = 1;
			};
			class Craft3 {
			text="Convert for PDW";
			script="spawn player_Craft;";
			use[]= {
			{"15Rnd_9x19_M9",2}
			};
			output[]= {
			{"30Rnd_9x19_UZI","magazine",1}
			};
			crafting = 1;
			};
		};
	};
	class 15Rnd_9x19_M9SD {
	class ItemActions {
		class Craft0 
		{
			text="Convert for BizonSD";
			script="spawn player_Craft;";
			use[]= {
			{"15Rnd_9x19_M9SD",4}
			};
			output[]= {
			{"64Rnd_9x19_SD_Bizon","magazine",1}
			};
			crafting = 1;
			};
			class Craft1 {
			text="Convert for MP5SD";
			script="spawn player_Craft;";
			use[]= {
			{"15Rnd_9x19_M9SD",2}
			};
			output[]= {
			{"30Rnd_9x19_MP5SD","magazine",1}
			};
			crafting = 1;
			};
			class Craft2 {
			text="Convert for PDWSD";
			script="spawn player_Craft;";
			use[]= {
			{"15Rnd_9x19_M9SD",2}
			};
			output[]= {
			{"30Rnd_9x19_UZI_SD","magazine",1}
			};
			crafting = 1;
			};
		};
	};
	class 17Rnd_9x19_glock17 {
	class ItemActions {
		class Craft0 
		{
			text="Convert for Bizon";
			script="spawn player_Craft;";
			use[]= {
			{"17Rnd_9x19_glock17",4}
			};
			output[]= {
			{"64Rnd_9x19_Bizon","magazine",1}
			};
			crafting = 1;
			};
			class Craft1 {
			text="Convert for M9";
			script="spawn player_Craft;";
			use[]= {
			{"17Rnd_9x19_glock17",1}
			};
			output[]= {
			{"15Rnd_9x19_M9","magazine",1}
			};
			crafting = 1;
			};
			class Craft2 {
			text="Convert for MP5";
			script="spawn player_Craft;";
			use[]= {
			{"17Rnd_9x19_glock17",2}
			};
			output[]= {
			{"30Rnd_9x19_MP5","magazine",1}
			};
			crafting = 1;
			};
			class Craft3 {
			text="Convert for PDW";
			script="spawn player_Craft;";
			use[]= {
			{"17Rnd_9x19_glock17",2}
			};
			output[]= {
			{"30Rnd_9x19_UZI","magazine",1}
			};
			crafting = 1;
			};
		};
	};
	class 20Rnd_762x51_B_SCAR {
	class ItemActions {
		class Craft0 
		{
			text="Convert for DMR";
			script="spawn player_Craft;";
			use[]= {
			{"20Rnd_762x51_B_SCAR",1}
			};
			output[]= {
			{"20Rnd_762x51_DMR","magazine",1}
			};
			crafting = 1;
			};
			class Craft1 {
			text="Convert for FN FAL";
			script="spawn player_Craft;";
			use[]= {
			{"20Rnd_762x51_B_SCAR",1}
			};
			output[]= {
			{"20Rnd_762x51_FNFAL","magazine",1}
			};
			crafting = 1;
			};
		};
	};
	class 20Rnd_762x51_DMR {
	class ItemActions {
		class Craft0 {
			text="Convert for FN FAL";
			script="spawn player_Craft;";
			use[]= {
			{"20Rnd_762x51_DMR",1}
			};
			output[]= {
			{"20Rnd_762x51_FNFAL","magazine",1}
			};
			crafting = 1;
			};
			class Craft1 {
			text="Convert for SCAR";
			script="spawn player_Craft;";
			use[]= {
			{"20Rnd_762x51_DMR",1}
			};
			output[]= {
			{"20Rnd_762x51_B_SCAR","magazine",1}
			};
			crafting = 1;
			};
		};
	};
	class 20Rnd_762x51_FNFAL {
	class ItemActions {
		class Craft0 {
			text="Convert for DMR";
			script="spawn player_Craft;";
			use[]= {
			{"20Rnd_762x51_FNFAL",1}
			};
			output[]= {
			{"20Rnd_762x51_DMR","magazine",1}
			};
			crafting = 1;
			};
			class Craft1 {
			text="Convert for SCAR";
			script="spawn player_Craft;";
			use[]= {
			{"20Rnd_762x51_FNFAL",1}
			};
			output[]= {
			{"20Rnd_762x51_B_SCAR","magazine",1}
			};
			crafting = 1;
			};
		};
	};
	class 30Rnd_9x19_MP5 {
	class ItemActions {
		class Craft0 
		{
			text="Convert for Bizon";
			script="spawn player_Craft;";
			use[]= {
			{"30Rnd_9x19_MP5",2}
			};
			output[]= {
			{"64Rnd_9x19_Bizon","magazine",1}
			};
			crafting = 1;
			};
			class Craft1 {
			text="Convert for G17";
			script="spawn player_Craft;";
			use[]= {
			{"30Rnd_9x19_MP5",1}
			};
			output[]= {
			{"17Rnd_9x19_glock17","magazine",2}
			};
			crafting = 1;
			};
			class Craft2 {
			text="Convert for MP5";
			script="spawn player_Craft;";
			use[]= {
			{"30Rnd_9x19_MP5",1}
			};
			output[]= {
			{"30Rnd_9x19_MP5","magazine",1}
			};
			crafting = 1;
			};
			class Craft3 {
			text="Convert for PDW";
			script="spawn player_Craft;";
			use[]= {
			{"30Rnd_9x19_MP5",1}
			};
			output[]= {
			{"30Rnd_9x19_UZI","magazine",2}
			};
			crafting = 1;
			};
		};
	};
	class 30Rnd_9x19_MP5SD {
	class ItemActions {
		class Craft0 
		{
			text="Convert for BizonSD";
			script="spawn player_Craft;";
			use[]= {
			{"30Rnd_9x19_MP5SD",2}
			};
			output[]= {
			{"64Rnd_9x19_SD_Bizon","magazine",1}
			};
			crafting = 1;
			};
			class Craft1 {
			text="Convert for M9SD";
			script="spawn player_Craft;";
			use[]= {
			{"30Rnd_9x19_MP5SD",1}
			};
			output[]= {
			{"15Rnd_9x19_M9SD","magazine",2}
			};
			crafting = 1;
			};
			class Craft2 {
			text="Convert for PDWSD";
			script="spawn player_Craft;";
			use[]= {
			{"30Rnd_9x19_MP5SD",2}
			};
			output[]= {
			{"30Rnd_9x19_UZI_SD","magazine",1}
			};
			crafting = 1;
			};
		};
	};
	class 30Rnd_9x19_UZI {
	class ItemActions {
		class Craft0 
		{
			text="Convert for Bizon";
			script="spawn player_Craft;";
			use[]= {
			{"30Rnd_9x19_UZI",2}
			};
			output[]= {
			{"64Rnd_9x19_Bizon","magazine",1}
			};
			crafting = 1;
			};
			class Craft1 {
			text="Convert for G17";
			script="spawn player_Craft;";
			use[]= {
			{"30Rnd_9x19_UZI",1}
			};
			output[]= {
			{"17Rnd_9x19_glock17","magazine",2}
			};
			crafting = 1;
			};
			class Craft2 {
			text="Convert for M9";
			script="spawn player_Craft;";
			use[]= {
			{"30Rnd_9x19_UZI",1}
			};
			output[]= {
			{"15Rnd_9x19_M9","magazine",2}
			};
			crafting = 1;
			};
			class Craft3 {
			text="Convert for MP5";
			script="spawn player_Craft;";
			use[]= {
			{"30Rnd_9x19_UZI",1}
			};
			output[]= {
			{"30Rnd_9x19_UZI","magazine",1}
			};
			crafting = 1;
			};
		};
	};
	class 30Rnd_9x19_UZI_SD {
	class ItemActions {
		class Craft0 
		{
			text="Convert for BizonSD";
			script="spawn player_Craft;";
			use[]= {
			{"30Rnd_9x19_UZI_SD",2}
			};
			output[]= {
			{"64Rnd_9x19_SD_Bizon","magazine",1}
			};
			crafting = 1;
			};
			class Craft1 {
			text="Convert for M9";
			script="spawn player_Craft;";
			use[]= {
			{"30Rnd_9x19_UZI_SD",1}
			};
			output[]= {
			{"15Rnd_9x19_M9SD","magazine",2}
			};
			crafting = 1;
			};
			class Craft2 {
			text="Convert for M9SD";
			script="spawn player_Craft;";
			use[]= {
			{"30Rnd_9x19_UZI_SD",1}
			};
			output[]= {
			{"15Rnd_9x19_M9SD","magazine",2}
			};
			crafting = 1;
			};
		};
	};
	class 64Rnd_9x19_Bizon {
	class ItemActions {
		class Craft0 
		{
			text="Convert for G17";
			script="spawn player_Craft;";
			use[]= {
			{"64Rnd_9x19_Bizon",1}
			};
			output[]= {
			{"17Rnd_9x19_glock17","magazine",4}
			};
			crafting = 1;
			};
			class Craft1 {
			text="Convert for M9";
			script="spawn player_Craft;";
			use[]= {
			{"64Rnd_9x19_Bizon",1}
			};
			output[]= {
			{"15Rnd_9x19_M9",4}
			};
			crafting = 1;
			};
			class Craft2 {
			text="Convert for MP5";
			script="spawn player_Craft;";
			use[]= {
			{"64Rnd_9x19_Bizon",1}
			};
			output[]= {
			{"30Rnd_9x19_MP5","magazine",2}
			};
			crafting = 1;
			};
			class Craft3 {
			text="Convert for PDW";
			script="spawn player_Craft;";
			use[]= {
			{"64Rnd_9x19_Bizon",1}
			};
			output[]= {
			{"30Rnd_9x19_UZI","magazine",2}
			};
			crafting = 1;
			};
		};
	};
	class 64Rnd_9x19_SD_Bizon {
	class ItemActions {
		class Craft0 
		{
			text="Convert for M9SD";
			script="spawn player_Craft;";
			use[]= {
			{"64Rnd_9x19_SD_Bizon",1}
			};
			output[]= {
			{"15Rnd_9x19_M9SD","magazine",4}
			};
			crafting = 1;
			};
			class Craft1 {
			text="Convert for MP5SD";
			script="spawn player_Craft;";
			use[]= {
			{"64Rnd_9x19_SD_Bizon",1}
			};
			output[]= {
			{"30Rnd_9x19_MP5SD","magazine",2}
			};
			crafting = 1;
			};
			class Craft2 {
			text="Convert for PDWSD";
			script="spawn player_Craft;";
			use[]= {
			{"64Rnd_9x19_SD_Bizon",1}
			};
			output[]= {
			{"30Rnd_9x19_UZI_SD","magazine",2}
			};
			crafting = 1;
			};
		};
	};
	class SkinBase;	//external class reference						begin loot-able skin packages
	class Skin_BanditSkin_DZ : SkinBase {
		scope = public;
		displayName = $STR_EQUIP_NAME_BANDIT;
		descriptionShort = $STR_EQUIP_NAME_BANDIT;
	};
	class Skin_Rocket_DZ : SkinBase {
		scope = public;
		displayName = "BAF Officer BDU";
		descriptionShort = "Standard Battle Dress Uniform of the British Armed Forces with officer's beret (Officer)";
	};
	class Skin_SMD_RACS_MP : SkinBase {
		scope = public;
		displayName = "RACS M.P. BDU";
		descriptionShort = "Standard Battle Dress Uniform of the Royal Army Corps of Sahrani MP's (Military Police)";
	};
	class Skin_SMD_RACS_MP_Tan : SkinBase {
		scope = public;
		displayName = "RACS M.P. BDU2";
		descriptionShort = "Special Battle Dress Uniform of the Royal Army Corps of Sahrani MP's (Military Police) (Desert Blended Vest)";
	};
	class Skin_SMD_RACS_MP_TanDigi : SkinBase {
		scope = public;
		displayName = "RACS M.P. BDU (Digital)";
		descriptionShort = "Special Battle Dress Uniform of the Royal Army Corps of Sahrani MP's (Military Police) (Digital Camo Blended Vest)";
	};	
	class Skin_SMD_RACS_Soldier : SkinBase {
		scope = public;
		displayName = "RACS Soldier BDU";
		descriptionShort = "Standard Battle Dress Uniform of the Royal Army Corps of Sahrani (Regular Infantry)";
	};	
	class Skin_SMD_RACS_Soldier_Digi : SkinBase {
		scope = public;
		displayName = "RACS Soldier BDU (Digital)";
		descriptionShort = "Special Battle Dress Uniform of the Royal Army Corps of Sahrani (Regular Infantry)(Digital Camo)";
	};	
	class Skin_SMD_RACS_SWAT : SkinBase {
		scope = public;
		displayName = "RACS SWAT BDU";
		descriptionShort = "Standard Battle Dress Uniform of the Royal Army Corps of Sahrani MP's (SWAT)";
	};	
	class Skin_SMD_SARA_Sheriff : SkinBase {
		scope = public;
		displayName = "Sahrani Sheriff";
		descriptionShort = "Standard Deputy Sheriff Dress Uniform of United Sahrani Police Department";
	};
	class Skin_SMD_US_SpecOps : SkinBase {
		scope = public;
		displayName = "U.S. Spec Ops BDU";
		descriptionShort = "Special Battle Dress Uniform of the United States Armed Forces (Special Operations)";
	};
	class Soldier1_DZ : SkinBase {
		scope = public;
		displayName = "BAF Regular BDU";
		descriptionShort = "Standard Battle Dress Uniform of the British Armed Forces (Regular Infantry)";
	};
	class Skin_SniperLight_DZ : SkinBase {
		scope = public;
		displayName = "Grass Ghillie Suit";
		descriptionShort = "Specialized camouflage clothing designed to resemble Grass Terrain (Sniper)";
	};
	class Skin_SniperD_DZ : SkinBase {
		scope = public;
		displayName = "Desert Ghillie Suit";
		descriptionShort = "Specialized camouflage clothing designed to resemble Desert Terrain (Sniper)";
	};
	class ItemBrick : TrashTinCan {															//trash
		scope = public;
		count = 1;
		type = 256;
		displayName = "Brick";
		model = "\SMD\assets\objects\brick";
		picture = "\SMD\assets\objects\icons\brick.paa";
		descriptionShort = "Can be Thrown and used for crafting various items";
		ammo = "Brick";
	};
	class ItemFloppyWire : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = "Electronic Wire";
		model = "\SMD\assets\objects\floppywire";
		picture = "\SMD\assets\objects\icons\floppywire.paa";
		descriptionShort = "Scrap Electronic Wire";
	};
	class ItemNails : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = "Box of Nails";
		model = "z\addons\dayz_communityassets\models\nails.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_nails_ca.paa";
		descriptionShort = "4 inch nails used for crafting various items";
	};	
	class ItemPropane : CA_Magazine {
		scope = public;
		count = 1;
		type = "(256*2)";
		displayName = "Propane Tank";
		model = "\SMD\assets\objects\propane";
		picture = "\SMD\assets\objects\icons\propane.paa";
		descriptionShort = "Propane Tank";
	};
	class ItemScrapElectronics : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = "Scrap Electronics";
		model = "\SMD\assets\objects\scrapelectronics";
		picture = "\SMD\assets\objects\icons\scrapelectronics.paa";
		descriptionShort = "Electronic circuit board used for crafting various items";
	};	
	class ItemTape : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = "Duct Tape";
		model = "\SMD\assets\objects\tape";
		picture = "\SMD\assets\objects\icons\tape.paa";
		descriptionShort = "Duct Tape used for crafting various items";
	};
	class ItemCarBomb : CA_Magazine {
		scope = public;
		count = 1;
		type = (2*256);
		displayName = "Car Bomb";
		model = "\ca\weapons\explosive.p3d";
		picture = "\SMD\assets\objects\icons\carbomb.paa";
		descriptionShort = "Can be attached to a vehicles engine and then automaticly explode when the engine is turned on!";
	};	
	class ItemWoodenSplint : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = "Splint & Duct Tape";
		model = "\SMD\assets\objects\woodensplint";
		picture = "\SMD\assets\objects\icons\woodensplint.paa";
		descriptionShort = "Two wooden sticks and duct tape. Combined these two objects are great for mending broken legs.";
		class ItemActions
		{
			class Use
			{
				text="Mend Leg";
				script="spawn player_useMeds;";
			};
		};
	};																								//SMD Equipment Fixes and Additions Original and Community DayZ Content - By Seven of EHDGaming.co.uk	
	class ItemBloodbag: CA_Magazine {
		scope=2;
		count=1;
		type=256;
		displayName="$STR_EQUIP_NAME_16";
		model="\dayz_equip\models\bloodbag.p3d";
		picture="\dayz_equip\textures\equip_bloodbag_ca.paa";
		descriptionShort="$STR_EQUIP_DESC_16";
		class ItemActions {
			class Use
			{
				text="Administer Bloodbag";
				script="spawn player_selfBloodBag;";
				use[]=
				{
					"ItemBloodbag"
				};
			};
		};
	};	
	class ItemWaterbottleDrugged : ItemWaterbottle {
		class ItemActions
		{
			class Drink
			{
				text="$STR_ACTIONS_DRINK";
				script="spawn player_drink;";
			};
		};
	};
};
