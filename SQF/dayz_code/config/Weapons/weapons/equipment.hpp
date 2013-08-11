//Equipment Item fixes and additions
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