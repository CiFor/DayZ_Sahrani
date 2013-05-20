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
};