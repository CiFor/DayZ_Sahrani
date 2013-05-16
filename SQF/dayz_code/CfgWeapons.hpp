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
};