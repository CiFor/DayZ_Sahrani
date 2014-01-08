#define VSoft		0
#define VArmor		1
#define VAir		2

#define private		0
#define protected		1
#define public		2

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

#define EAST 0 // (Russian)

#include "config\basicdefines.hpp"

class CfgPatches {
	class dayz_code {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"CAMisc3",
			"CABuildings",
			"CABuildings2",
			"CABuildingParts",
			"CABuildingParts_Signs",
			"CAStructuresHouse",
			"CAStructures_Misc_Powerlines",
			"CAStructures",
			"CAStructures_A_CraneCon",
			"CAStructures_Mil",
			"CAStructures_Nav",
			"CAStructures_Rail",
			"dayz_equip",
			"dayz_weapons",
			"Ind_MalyKomin",
			"A_Crane_02",
			"A_TVTower",
			"CAStructures_Railway",
			"CAStructuresHouse",
			"CAStructuresHouse_HouseBT",
			"smd_assets",
			"smd_roads",
			"smd_sahrani_a2",
			"smd_sahrani_artif_obj",
			"smd_sahrani_rocks",
			"smd_sahrani_veg"
		};
	};
	class DZ_DebriefingRemoved
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAUI"};
	};
};

class CfgMods
{
	class DayZ
	{
		dir = "DayZ_Sahrani";
		name = "DayZ Sahrani";
		picture = "z\addons\dayz_code\gui\dayz_sahrani_logo_ca.paa";
		hidePicture = 0;
		hideName = 0;
		action = "";
		version = "1.0.0";
		hiveVersion = 0.96; //0.93
	};
	class DZ_InitWorld
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"smd_sahrani_a2"};
	};
};


class CfgMissions
{
	 class Cutscenes
	 {
	  class ChernarusIntro1
		  {
			directory = "z\addons\dayz_code\cfgworlds\intro.Chernarus";
		  };
	 };
};

class CfgWorlds
{
        initWorld = "smd_sahrani_a2";
        demoWorld = "smd_sahrani_a2";
};

class CfgAddons
{
	access = 1;
	class PreloadBanks
	{
	};
	class PreloadAddons
	{
		class dayz
		{
			list[] = 
			{
				"CAMisc3",
				"CABuildings",
				"CABuildings2",
				"CABuildingParts",
				"CABuildingParts_Signs",
				"CAStructuresHouse",
				"CAStructures_Misc_Powerlines",
				"CAStructures",
				"CAStructures_A_CraneCon",
				"CAStructures_Mil",
				"CAStructures_Nav",
				"CAStructures_Rail",
				"dayz_equip",
				"dayz_weapons",
				"Ind_MalyKomin",
				"A_Crane_02",
				"A_TVTower",
				"CAStructures_Railway",
				"CAStructuresHouse",
				"CAStructuresHouse_HouseBT",
				"smd_assets",
				"smd_roads",
				"smd_sahrani_a2",
				"smd_sahrani_artif_obj",
				"smd_sahrani_rocks",
				"smd_sahrani_veg"
			};
		};
	};
};

class CfgAISkill {
	aimingaccuracy[] = {0, 0, 1, 1};
	aimingshake[] = {0, 0, 1, 1};
	aimingspeed[] = {0, 0, 1, 1};
	commanding[] = {0, 0, 1, 1};
	courage[] = {0, 1, 1, 1};
	endurance[] = {0, 0, 1, 1};
	general[] = {0, 0, 1, 1};
	reloadspeed[] = {0, 0, 1, 1};
	spotdistance[] = {0, 0, 1, 0.6};
	spottime[] = {0, 0, 1, 1};
};

class CfgActions {
	class None; // External class reference

	class Rearm : None {
		show = 0;
	};
	class Heal : None {
		show = 0;
	};
	class HealSoldier : None {
		show = 0;
	};
	class FirstAid : None {
		show = 0;
	};
	class FireInflame : None {
		show = 0;
	};
	class FirePutDown : None {
		show = 0;
	};
	/*
	//Will Override this soon
	class Eject : None {
		show = 0;
	};
	*/
};

//#include "config\Worlds\CfgWorlds.hpp"
#include "config\Moves\cfgMoves.hpp"
#include "config\GUI\rscTitles.hpp"
#include "config\Vehicles\CfgVehicles.hpp"
#include "config\Weapons\CfgWeapons.hpp"
#include "config\Magazines\CfgMagazines.hpp"
#include "config\Markers\CfgMarkers.hpp"
#include "config\Ammo\CfgAmmo.hpp"
#include "config\Survival\CfgSurvival.hpp"
#include "config\Loot\LootTables.hpp"
#include "config\TownGen\CfgTownGeneratorSara.hpp"