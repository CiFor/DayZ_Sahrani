/*
Split into Groups:

ClassNameX have no drink, food or trash items
they are called at buildings ONLY

ClassnameXZed includeds food, drink and trash items
they are called by zeds for inventory items

Zed Item Group Comments: include trash 
			//AllAmmo
			//CivAmmo
			//UltraRareAmmo
			//RareAmmo
			//RUSAmmo
			//UNAmmo
			//USAmmo
			//drink
			//food
			//medical
			//supplies
			//trash
*/
class CfgLoot {
	civilian[] = {
		{			
			//ammo
			"Quiver",
			"WoodenArrow",
			"8Rnd_9x18_Makarov",
			"8Rnd_9x18_MakarovSD",
			"7Rnd_45ACP_1911",
			"2Rnd_shotgun_74Slug",
			"2Rnd_shotgun_74Pellets",
			"15Rnd_W1866_Slug",
			//medical
			"ItemBandage",
			"ItemPainkiller",
			"ItemAntibiotic",
			//supplies
			"ItemFloppyWire",
			"ItemScrapElectronics",
			"ItemBrick",
			"ItemTape",
			"ItemSandbag",
			"ItemNails"
		},
		{
			//ammo
			0.05, //Quiver
			0.04, //WoodenArrow
			0.07, //8Rnd_9x18_Makarov
			0.01, //8Rnd_9x18_MakarovSD
			0.05, //7Rnd_45ACP_1911
			0.03, //2Rnd_shotgun_74Slug
			0.02, //2Rnd_shotgun_74Pellets
			0.08, //15Rnd_W1866_Slug
			//medical
			0.06, //ItemBandage
			0.06, //ItemPainkiller
			0.01, //ItemAntibiotic
			//suplies
			0.04, //ItemFloppyWire
			0.02, //ItemScrapElectronics
			0.04, //ItemBrick
			0.08, //ItemTape
			0.04, //ItemSandbag
			0.04 //ItemNails
		}
	};
	civilianZed[] = {
		{
			//trash
			"TrashTinCan",
			"TrashJackDaniels",
			"ItemSodaEmpty",
			//drink
			"ItemSodaCoke",
			"ItemSodaPepsi",
			//food
			"FoodCanBakedBeans",
			"FoodCanSardines",
			"FoodCanFrankBeans",
			"FoodCanPasta",
			//ammo
			"Quiver",
			"WoodenArrow",
			"8Rnd_9x18_Makarov",
			"8Rnd_9x18_MakarovSD",
			"7Rnd_45ACP_1911",
			"2Rnd_shotgun_74Slug",
			"2Rnd_shotgun_74Pellets",
			//medical
			"ItemBandage",
			"ItemPainkiller",
			"ItemAntibiotic",
			//supplies
			"ItemFloppyWire",
			"ItemScrapElectronics",
			"ItemBrick",
			"ItemTape",
			"ItemSandbag",
			"ItemNails"
		},
		{
			//trash
			0.09, //TrashTinCan
			0.09, //TrashJackDaniels
			0.09, //ItemSodaEmpty
			//drink
			0.12, //ItemSodaCoke
			0.09, //ItemSodaPepsi
			//food
			0.05, //FoodCanBakedBeans
			0.05, //FoodCanSardines
			0.05, //FoodCanFrankBeans
			0.05, //FoodCanPasta
			//ammo
			0.05, //Quiver
			0.04, //WoodenArrow
			0.07, //8Rnd_9x18_Makarov
			0.01, //8Rnd_9x18_MakarovSD
			0.05, //7Rnd_45ACP_1911
			0.05, //2Rnd_shotgun_74Slug
			0.05, //2Rnd_shotgun_74Pellets
			//medical
			0.06, //ItemBandage
			0.06, //ItemPainkiller
			0.01, //ItemAntibiotic
			//suplies
			0.04, //ItemFloppyWire
			0.02, //ItemScrapElectronics
			0.04, //ItemBrick
			0.08, //ItemTape
			0.04, //ItemSandbag
			0.04 //ItemNails
		}
	};
		farm[] = {
		{
			//ammo
			"2Rnd_shotgun_74Slug",
			"2Rnd_shotgun_74Pellets",
			"17Rnd_9x19_glock17",
			"15Rnd_9x19_M9",
			"7Rnd_45ACP_1911",
			"6Rnd_45ACP",
			"15Rnd_W1866_Slug",
			//"8Rnd_B_Beneli_74Slug",
			//medical
			"ItemBandage",
			//supplies
			"ItemSandbag",
			"ItemWire",
			"HandRoadFlare"
		},
		{
			//ammo
			0.4, //"2Rnd_shotgun_74Slug",
			0.4, //"2Rnd_shotgun_74Pellets",
			0.05, //17Rnd_9x19_glock17
			0.02, //15Rnd_9x19_M9			
			0.25, //7Rnd_45ACP_1911
			0.3, //6Rnd_45ACP
			0.3, //15Rnd_W1866_Slug
			//0.5, //8Rnd_B_Beneli_74Slug
			//medical
			1, //ItemBandage
			//supplies
			0.04, //ItemSandbag
			0.04, //ItemWire			
			0.3 //HandRoadFlare
		}
	};
		farmZed[] = {
		{	
			//trash
			"EvMoney",
			//"ItemCards",
			//SMD Crafting Components + Community Mod Dev Team Junk Loot
			"ItemNails",
			"ItemTape",
			"ItemTrashRazor",
			"ItemTrashToiletpaper",
			//OG Official Mod Trash
			"ItemSodaCokeEmpty",
			"ItemSodaEmpty",
			"ItemSodaMdewEmpty",
			"TrashJackDaniels",
			"TrashTinCan",	
			//ammo
			"2Rnd_shotgun_74Slug",
			"2Rnd_shotgun_74Pellets",
			"17Rnd_9x19_glock17",
			"15Rnd_9x19_M9",
			"7Rnd_45ACP_1911",
			"6Rnd_45ACP",
			"15Rnd_W1866_Slug",
			//"8Rnd_B_Beneli_74Slug",
			//medical
			"ItemBandage",
			//supplies
			"ItemSandbag",
			"ItemWire",
			"HandRoadFlare"
		},
		{
			//trash
			0.05, //"EvMoney",
			//0.05, ItemCards",
			//SMD Crafting Components + Community Mod Dev Team Junk Loot
			0.05, //"ItemNails",
			0.05, //"ItemTape",
			0.05, //"ItemTrashRazor",
			0.05, //"ItemTrashToiletpaper",
			0.05, //"ItemSodaCokeEmpty",
			0.05, //"ItemSodaEmpty",
			0.05, //"ItemSodaMdewEmpty",
			0.05, //"TrashJackDaniels",
			0.05, //"TrashTinCan",
			//ammo
			0.4, //"2Rnd_shotgun_74Slug",
			0.4, //"2Rnd_shotgun_74Pellets",
			0.05, //17Rnd_9x19_glock17
			0.02, //15Rnd_9x19_M9			
			0.25, //7Rnd_45ACP_1911
			0.3, //6Rnd_45ACP
			0.3, //15Rnd_W1866_Slug
			//0.5, //8Rnd_B_Beneli_74Slug
			//medical
			1, //ItemBandage
			//supplies
			0.04, //ItemSandbag
			0.04, //ItemWire			
			0.3 //HandRoadFlare
		}
	};
	food[] = {
		{
			//food
			"FoodCanBadguy",
			"FoodCanBakedBeans",
			"FoodCanBoneboy",
			"FoodCanCorn",
			"FoodCanCurgon",
			"FoodCanDemon",
			"FoodCanDerpy",
			"FoodCandyAnders",
			"FoodCandyLegacys",
			"FoodCandyMintception",
			"FoodCanFraggleos",
			"FoodCanFrankBeans",
			"FoodCanHerpy",
			"FoodCanOrlok",
			"FoodCanPasta",
			"FoodCanPowell",
			/*"FoodCanRusCorn",
			"FoodCanRusMilk",
			"FoodCanRusPeas",
			"FoodCanRusPork",
			"FoodCanRusStew",
			"FoodCanRusUnlabeled",*/
			"FoodCanSardines",
			"FoodCanTylers",
			"FoodCanUnlabeled",
			//"FoodChipsMysticales",
			//"FoodChipsSulahoops",
			"FoodNutmix",
			"FoodPistachio",
			//drink
			"ItemSodaClays",
			"ItemSodaCoke",
			"ItemSodaDrwaste",
			"ItemSodaLemonade",
			"ItemSodaLvg",
			"ItemSodaMtngreen",
			"ItemSodaMzly",
			"ItemSodaPepsi",
			"ItemSodaR4z0r",
			"ItemSodaRabbit",
			"ItemSodaSmasht"
		},
		{
			//food
			0.04, //FoodCanBadguy
			0.2, //FoodCanBakedBeans
			0.04, //FoodCanBoneboy
			0.2, //FoodCanCorn
			0.04, //FoodCanCurgon
			0.04, //FoodCanDemon
			0.04, //FoodCanDerpy
			0.04, //FoodCandyAnders
			0.04, //FoodCandyLegacys
			0.04, //FoodCandyMintception
			0.04, //FoodCanFraggleos
			0.2, //FoodCanFrankBeans
			0.04, //FoodCanHerpy
			0.04, //FoodCanOrlok
			0.2, //FoodCanPasta
			0.04, //FoodCanPowell
			/*0.04, //FoodCanRusCorn
			0.04, //FoodCanRusMilk
			0.04, //FoodCanRusPeas
			0.04, //FoodCanRusPork
			0.04, //FoodCanRusStew
			0.2, //FoodCanRusUnlabeled*/
			0.04, //FoodCanSardines
			0.04, //FoodCanTylers
			0.6, //FoodCanUnlabeled
			//0.04, //FoodChipsMysticales
			//0.04, //FoodChipsSulahoops
			0.6, //FoodNutmix
			0.3, //FoodPistachio
			//drink
			0.04, //ItemSodaClays
			0.04, //ItemSodaCoke
			0.04, //ItemSodaDrwaste 
			0.3, //ItemSodaLemonade 
			0.04, //ItemSodaLvg 
			0.2, //ItemSodaMtngreen
			0.04, //ItemSodaMzly 
			0.1, //ItemSodaPepsi
			0.04, //ItemSodaR4z0r
			0.04, //ItemSodaRabbit
			0.04 //ItemSodaSmasht 
		}
	};
	generic[] = {
		{
			//ammo
			"7Rnd_45ACP_1911",
			"5x_22_LR_17_HMR",
			"10x_303",
			"6Rnd_45ACP",
			"2Rnd_shotgun_74Slug",
			"2Rnd_shotgun_74Pellets",
			"8Rnd_9x18_Makarov",
			"15Rnd_W1866_Slug",
			"WoodenArrow",
			//medical
			"ItemBandage",
			"ItemPainkiller",
			"ItemHeatPack",
			//supplies
			"ItemNails",
			"ItemBrick",
			"ItemTape",
			"ItemSandbag",
			"ItemWire",
			"ItemWaterbottleUnfilled",
			"HandRoadFlare",
			"HandChemGreen",
			"HandChemBlue",
			"HandChemRed"			
		},
		{
			//ammo
			0.03, //7Rnd_45ACP_1911
			0.01, //5x_22_LR_17_HMR
			0.04, //10x_303
			0.04, //6Rnd_45ACP
			0.05, //2Rnd_shotgun_74Slug
			0.05, //2Rnd_shotgun_74Pellets
			0.09, //8Rnd_9x18_Makarov
			0.02, //15Rnd_W1866_Slug			
			0.04, //WoodenArrow
			//medical
			0.11, //ItemBandage
			0.02, //ItemPainkiller
			0.04, //ItemHeatPack
			//supplies
			0.09, //ItemNails
			0.04, //ItemBrick
			0.04, //ItemTape
			0.04, //ItemSandbag
			0.04, //ItemWire
			0.01, //ItemWaterbottleUnfilled
			0.07, //HandRoadFlare
			0.01, //HandChemGreen
			0.03, //HandChemBlue
			0.03 //HandChemRed
		}
	};
	genericZed[] = {
		{
			//trash
			"TrashTinCan",
			"ItemSodaEmpty",
			"TrashJackDaniels",
			//drink
			"ItemSodaCoke",
			"ItemSodaPepsi",
			"ItemWaterbottle",
			//food
			"FoodCanBakedBeans",
			"FoodCanSardines",
			"FoodCanFrankBeans",
			"FoodCanPasta",
			//ammo
			"7Rnd_45ACP_1911",
			"5x_22_LR_17_HMR",
			"10x_303",
			"6Rnd_45ACP",
			"2Rnd_shotgun_74Slug",
			"2Rnd_shotgun_74Pellets",
			"8Rnd_9x18_Makarov",
			"15Rnd_W1866_Slug",
			"WoodenArrow",
			//medical
			"ItemBandage",
			"ItemPainkiller",
			"ItemHeatPack",
			//supplies
			"ItemNails",
			"ItemBrick",
			"ItemTape",
			"ItemSandbag",
			"ItemWire",
			"ItemWaterbottleUnfilled",
			"HandRoadFlare",
			"HandChemGreen",
			"HandChemBlue",
			"HandChemRed"
			
		},
		{
			//trash
			0.06, //TrashTinCan
			0.06, //ItemSodaEmpty
			0.04, //TrashJackDaniels
			//drink
			0.06, //ItemSodaCoke
			0.04, //ItemSodaPepsi
			0.01, //ItemWaterbottle
			//food
			0.01, //FoodCanBakedBeans
			0.01, //FoodCanSardines
			0.01, //FoodCanFrankBeans
			0.01, //FoodCanPasta
			//ammo
			0.03, //7Rnd_45ACP_1911
			0.01, //5x_22_LR_17_HMR
			0.04, //10x_303
			0.04, //6Rnd_45ACP
			0.05, //2Rnd_shotgun_74Slug
			0.05, //2Rnd_shotgun_74Pellets
			0.09, //8Rnd_9x18_Makarov
			0.02, //15Rnd_W1866_Slug			
			0.04, //WoodenArrow
			//medical
			0.11, //ItemBandage
			0.02, //ItemPainkiller
			0.04, //ItemHeatPack
			//supplies
			0.09, //ItemNails
			0.04, //ItemBrick
			0.04, //ItemTape
			0.04, //ItemSandbag
			0.04, //ItemWire
			0.01, //ItemWaterbottleUnfilled
			0.07, //HandRoadFlare
			0.01, //HandChemGreen
			0.03, //HandChemBlue
			0.03 //HandChemRed
		}
	};
	hospital[] = {
		{
			"ItemBandage",
			"ItemPainkiller",
			"ItemMorphine",
			"ItemEpinephrine",
			"ItemBloodbag",
			"ItemAntibiotic"
		},
		{
			0.33, //ItemBandage
			0.17, //ItemPainkiller
			0.13, //ItemMorphine
			0.09, //ItemEpinephrine
			0.17, //ItemBloodbag
			0.12 //ItemAntibiotic
		}
	};
	hunter[] = {
		{
			//food
			"FoodMRE",
			"FoodNutmix",
			//ammo
			"5x_22_LR_17_HMR", //cz550
			"7Rnd_45ACP_1911",
			"10x_303",
			"Quiver",
			"WoodenArrow",
			//medical
			"ItemHeatPack",
			"ItemBandage",
			//supplies
			"ItemNails",
			"ItemTape",
			"ItemSandbag",
			"ItemWire",
			"ItemWaterbottleUnfilled"			
		},
		{
			//food
			0.04, //FoodMRE
			0.1, //FoodNutmix
			//ammo
			0.5, //5x_22_LR_17_HMR
			0.2, //7Rnd_45ACP_1911
			0.5, //10x_303
			0.01, //Quiver
			1, //WoodenArrow
			//medical
			0.2, //ItemHeatPack
			1, //ItemBandage
			//supplies
			0.4, //ItemNails
			0.6, //ItemTape
			0.04, //ItemSandbag
			0.04, //ItemWire
			0.2 //ItemWaterbottleUnfilled			
		}
	};	
	hunterZed[] = {
		{
			//trash
			"TrashTinCan",
			"ItemSodaEmpty",
			"TrashJackDaniels",
			//food
			"FoodMRE",
			"FoodNutmix",
			//ammo
			"5x_22_LR_17_HMR", //cz550
			"7Rnd_45ACP_1911",
			"10x_303",
			"Quiver",
			"WoodenArrow",
			//medical
			"ItemHeatPack",
			"ItemBandage",
			//supplies
			"ItemNails",
			"ItemTape",
			"ItemSandbag",
			"ItemWire",
			"ItemWaterbottleUnfilled"			
		},
		{
			//trash
			0.06, //TrashTinCan
			0.06, //ItemSodaEmpty
			0.04, //TrashJackDaniels
			//food
			0.04, //FoodMRE
			0.1, //FoodNutmix
			//ammo
			0.5, //5x_22_LR_17_HMR
			0.2, //7Rnd_45ACP_1911
			0.5, //10x_303
			0.01, //Quiver
			1, //WoodenArrow
			//medical
			0.2, //ItemHeatPack
			1, //ItemBandage
			//supplies
			0.4, //ItemNails
			0.6, //ItemTape
			0.04, //ItemSandbag
			0.04, //ItemWire
			0.2 //ItemWaterbottleUnfilled			
		}
	};	
	medical[] = {
		{
			"ItemBandage",
			"ItemPainkiller",
			"ItemMorphine",
			"ItemEpinephrine",
			"ItemAntibiotic",
			"ItemHeatPack"
		},
		{
			0.8, //ItemBandage
			0.5, //ItemPainkiller
			0.5, //ItemMorphine
			0.2, //ItemEpinephrine
			0.3, //ItemAntibiotic
			0.1 //ItemHeatPack
		}
	};
	medicalZed[] = {
		{
			//trash
			"TrashTinCan",
			"ItemSodaEmpty",
			"TrashJackDaniels",
			//medical
			"ItemBandage",
			"ItemPainkiller",
			"ItemMorphine",
			"ItemEpinephrine",
			"ItemAntibiotic",
			"ItemHeatPack"
		},
		{
			//trash
			0.06, //TrashTinCan
			0.06, //ItemSodaEmpty
			0.04, //TrashJackDaniels
			//medical
			0.8, //ItemBandage
			0.5, //ItemPainkiller
			0.5, //ItemMorphine
			0.2, //ItemEpinephrine
			0.3, //ItemAntibiotic
			0.1 //ItemHeatPack
		}
	};
	military[] = {
		{
			//food
			"FoodMRE",
			//drink
			"ItemWaterbottle",
			"ItemWaterbottleUnfilled",
			//ammo
			"20Rnd_556x45_Stanag",
			"30Rnd_556x45_G36",
			"20Rnd_762x51_DMR",
			"20Rnd_762x51_FNFAL",
			"20Rnd_762x51_B_SCAR",
			"20Rnd_762x51_SB_SCAR",
			"17Rnd_9x19_glock17",
			"15Rnd_9x19_M9SD",
			"15Rnd_9x19_M9",
			"30Rnd_762x39_AK47",
			"30Rnd_545x39_AK",
			"5Rnd_762x51_M24",
			"10Rnd_127x99_m107",
			//"8Rnd_B_Beneli_74Slug",
			"1Rnd_HE_M203",
			"FlareWhite_M203",
			"FlareGreen_M203",
			"1Rnd_Smoke_M203",		
			"200Rnd_556x45_M249",
			"HandGrenade_west",
			"SmokeShell",
			"SmokeShellPurple",
			"SmokeShellBlue",
			"SmokeShellOrange",
			"SmokeShellRed",
			"SmokeShellGreen",
			//"8Rnd_B_Beneli_Pellets",
			"30Rnd_556x45_G36SD",
			"30Rnd_9x19_MP5",
			"30Rnd_9x19_MP5SD",
			"100Rnd_762x51_M240",
			"10Rnd_9x39_SP5_VSS",
			"20Rnd_9x39_SP5_VSS",
			//"8Rnd_B_Saiga12_74Slug",
			"5Rnd_127x108_KSVK",
			"5Rnd_86x70_L115A1",
			"10Rnd_B_765x17_Ball",
			"20Rnd_B_765x17_Ball",
			"20Rnd_762x51_B_SCAR",
			"75Rnd_545x39_RPK",
			//medical
			"ItemBandage",
			"ItemAntibiotic",
			"ItemPainkiller",
			"ItemMorphine",
			"ItemHeatPack",
			//supplies
			"ItemNails",
			"ItemScrapElectronics",
			"ItemTape",
			"ItemSandbag",
			"ItemWire",
			"HandChemGreen",
			"HandChemBlue",
			"HandChemRed"			
		},
		{
			//food
			0.04, //FoodMRE
			//drink
			0.02, //ItemWaterbottle
			0.04, //ItemWaterbottleUnfilled
			//ammo
			0.01, //20Rnd_556x45_Stanag
			0.04, //30Rnd_556x45_G36
			0.01, //20Rnd_762x51_DMR
			0.04, //20Rnd_762x51_FNFAL
			0.04, //20Rnd_762x51_B_SCAR",
			0.01, //20Rnd_762x51_SB_SCAR",
			0.05, //17Rnd_9x19_glock17
			0.01, //15Rnd_9x19_M9SD
			0.02, //15Rnd_9x19_M9
			0.04, //30Rnd_762x39_AK47
			0.04, //30Rnd_545x39_AK
			0.01, //5Rnd_762x51_M24
			0.01, //10Rnd_127x99_m107
			//0.04, //8Rnd_B_Beneli_74Slug
			0.01, //1Rnd_HE_M203
			0.01, //FlareWhite_M203
			0.01, //FlareGreen_M203
			0.01, //1Rnd_Smoke_M203
			0.01, //200Rnd_556x45_M249
			0.01, //HandGrenade_west
			0.04, //SmokeShell
			0.01, //SmokeShellPurple
			0.01, //SmokeShellBlue
			0.01, //SmokeShellOrange
			0.02, //SmokeShellRed
			0.02, //SmokeShellGreen
			//0.04, //8Rnd_B_Beneli_Pellets
			0.01, //30Rnd_556x45_G36SD
			0.02, //30Rnd_9x19_MP5
			0.01, //30Rnd_9x19_MP5SD
			0.01, //100Rnd_762x51_M240
			0.04, //10Rnd_9x39_SP5_VSS
			0.01, //20Rnd_9x39_SP5_VSS
			//0.02, //8Rnd_B_Saiga12_74Slug
			0.01, //5Rnd_127x108_KSVK
			0.01, //5Rnd_86x70_L115A1
			0.02, //10Rnd_B_765x17_Ball
			0.02, //20Rnd_B_765x17_Ball
			0.01, //20Rnd_762x51_B_SCAR
			0.01, //75Rnd_545x39_RPK
			//medical
			0.04, //ItemBandage
			0.04, //ItemAntibiotic
			0.04, //ItemPainkiller
			0.01, //ItemMorphine
			0.04, //ItemHeatPack
			//supplies
			0.08, //ItemNails
			0.04, //ItemScrapElectronics
			0.03, //ItemTape
			0.04, //ItemSandbag
			0.04, //ItemWire
			0.02, //HandChemGreen
			0.02, //HandChemBlue
			0.02 //HandChemRed			
		}
	};
	militaryZed[] = {
		{
			//trash
			"TrashTinCan",
			"ItemSodaEmpty",
			//drink
			"ItemWaterbottle",
			"ItemWaterbottleUnfilled",
			//food
			"FoodMRE",
			//ammo
			"20Rnd_556x45_Stanag",
			"30Rnd_556x45_G36",
			"20Rnd_762x51_DMR",
			"17Rnd_9x19_glock17",
			"15Rnd_9x19_M9SD",
			"15Rnd_9x19_M9",
			"30Rnd_762x39_AK47",
			"30Rnd_545x39_AK",
			"5Rnd_762x51_M24",
			"10Rnd_127x99_m107",
			//"8Rnd_B_Beneli_74Slug",
			"1Rnd_HE_M203",
			"FlareWhite_M203",
			"FlareGreen_M203",
			"1Rnd_Smoke_M203",		
			"200Rnd_556x45_M249",
			"HandGrenade_west",
			"SmokeShell",
			"SmokeShellRed",
			"SmokeShellGreen",
			//"8Rnd_B_Beneli_Pellets",
			"30Rnd_556x45_G36SD",
			"30Rnd_9x19_MP5",
			"30Rnd_9x19_MP5SD",
			"100Rnd_762x51_M240",
			"10Rnd_9x39_SP5_VSS",
			"20Rnd_9x39_SP5_VSS",
			//"8Rnd_B_Saiga12_74Slug",
			"5Rnd_127x108_KSVK",
			"5Rnd_86x70_L115A1",
			"10Rnd_B_765x17_Ball",
			"20Rnd_B_765x17_Ball",
			"20Rnd_762x51_B_SCAR",
			"75Rnd_545x39_RPK",
			//medical
			"ItemBandage",
			"ItemAntibiotic",
			"ItemPainkiller",
			"ItemMorphine",
			"ItemHeatPack",
			//supplies
			"ItemNails",
			"ItemScrapElectronics",
			"ItemTape",
			"ItemSandbag",
			"ItemWire",
			"HandChemGreen",
			"HandChemBlue",
			"HandChemRed"			
		},
		{
			//trash
			0.18, //TrashTinCan
			0.09, //ItemSodaEmpty
			//drink
			0.01, //ItemWaterbottle
			0.01, //ItemWaterbottleUnfilled
			//food
			0.01, //FoodMRE
			//ammo
			0.04, //20Rnd_556x45_Stanag
			0.04, //30Rnd_556x45_G36
			0.04, //20Rnd_762x51_DMR
			0.05, //17Rnd_9x19_glock17
			0.01, //15Rnd_9x19_M9SD
			0.02, //15Rnd_9x19_M9
			0.04, //30Rnd_762x39_AK47
			0.04, //30Rnd_545x39_AK
			0.01, //5Rnd_762x51_M24
			0.01, //10Rnd_127x99_m107
			//0.04, //8Rnd_B_Beneli_74Slug
			0.01, //1Rnd_HE_M203
			0.01, //FlareWhite_M203
			0.01, //FlareGreen_M203
			0.01, //1Rnd_Smoke_M203
			0.01, //200Rnd_556x45_M249
			0.01, //HandGrenade_west
			0.04, //SmokeShell
			0.02, //SmokeShellRed
			0.02, //SmokeShellGreen
			//0.04, //8Rnd_B_Beneli_Pellets
			0.01, //30Rnd_556x45_G36SD
			0.02, //30Rnd_9x19_MP5
			0.01, //30Rnd_9x19_MP5SD
			0.01, //100Rnd_762x51_M240
			0.04, //10Rnd_9x39_SP5_VSS
			0.01, //20Rnd_9x39_SP5_VSS
			//0.02, //8Rnd_B_Saiga12_74Slug
			0.01, //5Rnd_127x108_KSVK
			0.01, //5Rnd_86x70_L115A1
			0.02, //10Rnd_B_765x17_Ball
			0.02, //20Rnd_B_765x17_Ball
			0.01, //20Rnd_762x51_B_SCAR
			0.01, //75Rnd_545x39_RPK
			//medical
			0.04, //ItemBandage
			0.04, //ItemAntibiotic
			0.04, //ItemPainkiller
			0.01, //ItemMorphine
			0.04, //ItemHeatPack
			//supplies
			0.08, //ItemNails
			0.04, //ItemScrapElectronics
			0.03, //ItemTape
			0.04, //ItemSandbag
			0.04, //ItemWire
			0.02, //HandChemGreen
			0.02, //HandChemBlue
			0.02 //HandChemRed			
		}
	};
	policemanZed[] = {
		{
			//ammo
			"17Rnd_9x19_glock17",
			"15Rnd_9x19_M9",
			"7Rnd_45ACP_1911",
			"6Rnd_45ACP",
			"15Rnd_W1866_Slug",
			//"8Rnd_B_Beneli_74Slug",
			//medical
			"ItemBandage",
			//supplies
			"ItemSandbag",
			"ItemWire",
			"HandRoadFlare"
		},
		{
			//ammo
			0.05, //17Rnd_9x19_glock17
			0.02, //15Rnd_9x19_M9			
			0.8, //7Rnd_45ACP_1911
			0.3, //6Rnd_45ACP
			0.3, //15Rnd_W1866_Slug
			//0.5, //8Rnd_B_Beneli_74Slug
			//medical
			1, //ItemBandage
			//supplies
			0.04, //ItemSandbag
			0.04, //ItemWire			
			0.3 //HandRoadFlare
		}
	};
	trash[] = {
		{
			//New Community Mod Dev Team Junk Loot
			"FoodCanBadguyEmpty",
			"FoodCanBoneboyEmpty",
			"FoodCanCornEmpty",
			"FoodCanCurgonEmpty",
			"FoodCanDemonEmpty",
			"FoodCanFraggleosEmpty",
			"FoodCanGriffEmpty",
			"FoodCanHerpyEmpty",
			"FoodCanOrlokEmpty",
			"FoodCanPowellEmpty",
			/*"FoodCanRusCornEmpty",
			"FoodCanRusMilkEmpty",
			"FoodCanRusPeasEmpty",
			"FoodCanRusPorkEmpty",
			"FoodCanRusStewEmpty",
			"FoodCanRusUnlabeledEmpty",*/
			"FoodCanTylersEmpty",
			"FoodCanUnlabeledEmpty",
			//SMD Crafting Components + Community Mod Dev Team Junk Loot
			"ItemBrick",
			//"ItemCards",
			"ItemFloppyWire",
			"ItemNails",
			"ItemScrapElectronics",
			//New Community Mod Dev Team Soda Cans Junk Loot
			"ItemSodaClaysEmpty",
			"ItemSodaCokeEmpty",
			"ItemSodaEmpty",
			"ItemSodaMdewEmpty",
			"ItemSodaMtngreenEmpty",
			"ItemSodaPepsiEmpty",
			"ItemSodaR4z0rEmpty",
			//SMD Crafting Components + Community Mod Dev Team Junk Loot
			"ItemTape",
			"ItemTrashRazor",
			"ItemTrashToiletpaper",
			//OG Official Mod Trash
			"TrashJackDaniels",
			"TrashTinCan"
		},
		{
			//New Community Mod Dev Team Junk Loot
			0.2, //FoodCanBadguyEmpty
			0.2, //FoodCanBoneboyEmpty
			0.2, //FoodCanCornEmpty
			0.2, //FoodCanCurgonEmpty
			0.2, //FoodCanDemonEmpty
			0.2, //FoodCanFraggleosEmpty
			0.2, //FoodCanGriffEmpty
			0.2, //FoodCanHerpyEmpty
			0.2, //FoodCanOrlokEmpty
			0.2, //FoodCanPowellEmpty
			0.2, //FoodCanRusCornEmpty
			0.2, //FoodCanRusMilkEmpty
			0.2, //FoodCanRusPeasEmpty
			0.2, //FoodCanRusPorkEmpty
			0.2, //FoodCanRusStewEmpty
			0.2, //FoodCanRusUnlabeledEmpty
			0.2, //FoodCanTylersEmpty
			0.2, //FoodCanUnlabeledEmpty
			//SMD Crafting Components + Community Mod Dev Team Junk Loot
			0.2, //ItemBrick
			0.2, //ItemCards
			0.2, //ItemFloppyWire
			0.2, //ItemNails
			0.2, //ItemScrapElectronics
			//New Community Mod Dev Team Soda Cans Junk Loot
			0.2, //ItemSodaClaysEmpty
			0.2, //ItemSodaCokeEmpty
			0.2, //temSodaEmpty
			0.2, //Empty
			0.2, //ItemSodaMtngreenEmpty
			0.2, //ItemSodaPepsiEmpty
			0.2, //ItemSodaR4z0rEmpty
			//SMD Crafting Components + Community Mod Dev Team Junk Loot
			0.2, //ItemTape
			0.2, //ItemTrashRazor
			0.2, //ItemTrashToiletpaper
			//OG Official Mod Trash
			0.2, //TrashJackDaniels
			0.2 //TrashTinCan
		}
	};
};

