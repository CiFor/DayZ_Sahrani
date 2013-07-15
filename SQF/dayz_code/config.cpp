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

#include "basicdefines.hpp"

class CfgPatches {
	class dayz_code {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"dayz_equip","dayz_weapons","CAMisc3","CABuildingParts","CABuildingParts_Signs","CAStructuresHouse","CAStructuresLand_Ind_Stack_Big","CAStructures_Misc_Powerlines","CAStructures","CABuildings","CABuildings2","Ind_MalyKomin","CAStructures_A_CraneCon","CAStructures_Mil","CAStructures_Nav","CAStructures_Rail","A_Crane_02","A_TVTower","CAStructures_Railway","CAStructuresHouse","CAStructuresHouse_HouseBT"};
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
		picture = "z\addons\dayz_code\gui\dayz_logo_ca.paa";
		hidePicture = 0;
		hideName = 0;
		action = "";
		version = "0.2.2-20130604";
		hiveVersion = 0.96; //0.93
	};
	class DZ_InitWorld
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"Chernarus"};
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
        initWorld = "Chernarus";
        demoWorld = "Chernarus";
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
			list[] = {"dayz_code","dayz","dayz_equip","dayz_weapons"};
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

class CfgInGameUI {
	imageCornerElement = "\ca\ui\data\igui_hud_corner.paa";
	xboxStyle = 0;
	colorBackground[] = {1, 1, 1, 0};
	colorBackgroundCommand[] = {1, 1, 1, 1};
	colorBackgroundHelp[] = {1, 1, 1, 1};
	colorText[] = {0.95, 0.95, 0.95, 1};
	
	class SideColors {
		colorFriendly[] = {0.95, 0.95, 0.95, 1};
		colorEnemy[] = {0.706, 0.0745, 0.0196, 1};
		colorNeutral[] = {0.606, 0.606, 0.606, 1};
		colorCivilian[] = {0.606, 0.606, 0.606, 1};
		colorUnknown[] = {0.863, 0.584, 0.0, 1};
	};
	
	class IslandMap {
		colorFriendly[] = {0, 0.5, 0, 1};
		colorEnemy[] = {0.5, 0, 0, 1};
		colorNeutral[] = {1.0, 0.5, 0, 1};
		colorCivilian[] = {0, 0, 1, 1};
		colorUnknown[] = {1.0, 0.5, 0, 0.8};
		shadow = 2;
		iconPlayer = "\ca\ui\data\map_player_ca.paa";
		iconPlayerDirection = "\ca\ui\data\map_dir_ca.paa";
		iconCheckpoint = "\ca\ui\data\map_target_ca.paa";
		iconCamera = "\ca\ui\data\map_camera_ca.paa";
		iconSelect = "\ca\ui\data\map_select_ca.paa";
		iconSensor = "\ca\ui\data\map_trigger_ca.paa";
		sizeLeader = 24;
		size = 26;
		sizePlayer = 26;
		colorTracks[] = {0.2, 0.13, 0, 1};
		colorRoads[] = {0.2, 0.13, 0, 1};
		colorMainRoads[] = {0, 0, 0, 1};
		colorTracksFill[] = {0, 0, 0, 0};
		colorRoadsFill[] = {1, 0.88, 0.65, 1};
		colorMainRoadsFill[] = {0.94, 0.69, 0.2, 1};
		cursorLineWidth = 1;
		colorGrid[] = {0.05, 0.1, 0, 0.6};
		colorGridMap[] = {0.05, 0.1, 0, 0.4};
	};
	
	class MPTable
	{
		color[] = {0,0,0,0}; //{0.7,0.7,0.7,1};
		colorTitleBg[] = {0,0,0,0}; //{0.1,0.15,0.15,1};
		colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.9};
		colorSelected[] = {0,0,0,0}; //{0.7,0.7,0.7,0.4};
		colorWest[] = {0,0,0,0}; //{0.7,0.95,0.7,1};
		colorEast[] = {0,0,0,0}; //{0.95,0.7,0.7,1};
		colorCiv[] = {0,0,0,0}; //{0.8,0.8,0.8,1};
		colorRes[] = {0,0,0,0}; //{0.7,0.7,0.95,1};
		font = "EtelkaNarrowMediumPro";
		size = "0"; //"( 21 / 408 )";
		class Columns
		{
			class Order
			{
				width = 0; //0.046;
				colorBg[] = {0,0,0,0}; //{0.1,0.27,0.1,0.8};
				doubleLine = 0;
			};
			class Player
			{
				width = 0; //0.25;
				colorBg[] = {0,0,0,0}; //{0.1,0.23,0.1,0.8};
				doubleLine = 0;
			};
			class KillsInfantry
			{
				width = 0; //0.11;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_infantry_ca.paa";
			};
			class KillsSoft
			{
				width = 0; //0.1;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_soft_ca.paa";
			};
			class KillsArmor
			{
				width = 0; //0.11;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_armored_ca.paa";
			};
			class KillsAir
			{
				width = 0; //0.1;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_air_ca.paa";
			};
			class Killed
			{
				width = 0; //0.1;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_killed_ca.paa";
			};
			class KillsTotal
			{
				width = 0; //0.1;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.35,0.1,0.9};
				picture = ""; //"\ca\ui\data\stats_total_ca.paa";
			};
		};
	};
	
	class TankDirection {
		left = -10;
		top = -10;
		width = 0.235294;
		height = 0.313726;
		color[] = {0.95, 0.95, 0.95, 1};
		colorHalfDammage[] = {0.863, 0.584, 0.0, 1};
		colorFullDammage[] = {0.706, 0.0745, 0.0196, 1};
		imageTower = "\ca\ui\data\igui_Tower_gs.paa";
		imageTurret = "\ca\ui\data\igui_Turret_gs.paa";
		imageGun = "\ca\ui\data\igui_Gun_gs.paa";
		imageObsTurret = "\ca\ui\data\igui_ObsTurret_gs.paa";
		imageLTrack = "\ca\ui\data\igui_LTrack_gs.paa";
		imageRTrack = "\ca\ui\data\igui_RTrack_gs.paa";
		imageHull = "\ca\ui\data\igui_Hull_gs.paa";
		imageEngine = "\ca\ui\data\igui_Engine_gs.paa";
		imageMoveStop = "#(argb,8,8,3)color(0,0,0,0)";
		imageMoveBack = "#(argb,8,8,3)color(0,0,0,0)";
		imageMoveForward = "#(argb,8,8,3)color(0,0,0,0)";
		imageMoveFast = "#(argb,8,8,3)color(0,0,0,0)";
		imageMoveLeft = "#(argb,8,8,3)color(0,0,0,0)";
		imageMoveRight = "#(argb,8,8,3)color(0,0,0,0)";
		imageMoveAuto = "#(argb,8,8,3)color(0,0,0,0)";
	};
	
	class Picturem {
		imageBusy = "\ca\ui\data\ui_busy_icon_ca.paa";
		imageWaiting = "\ca\ui\data\ui_waiting_icon_ca.paa";
		imageCommand = "\ca\ui\data\ui_command_icon_ca.paa";
	};
	
	class ProgressFont {
		font = "EtelkaNarrowMediumPro";
		size = 0.034;
	};
	
	class CheatXFont {
		font = "EtelkaNarrowMediumPro";
	};
	
	class FadeFont {
		font = "EtelkaNarrowMediumPro";
	};
	
	class DragAndDropFont {
		font = "EtelkaNarrowMediumPro";
		shadow = 2;
		size = 0.034;
		colorEnabled[] = {0, 0, 0, 0.9};
		colorDisabled[] = {0, 0, 0, 0.6};
		hideCursor = 0;
	};
	
	class TooltipFont {
		font = "EtelkaNarrowMediumPro";
		size = 0.034;
		shadow = 2;
	};
	
	class Compass {
		left = 0.273;
		top = "0.058 + SafeZoneY";
		width = 0.473;
		height = 0.0522876;
		shadow = 2;
		color[] = {0.95, 0.95, 0.95, 1};
		dirColor[] = {0.95, 0.95, 0.95, 1};
		texture0 = "ca\ui\data\radar_compass1_ca.paa";
		texture90 = "ca\ui\data\radar_compass2_ca.paa";
		texture180 = "ca\ui\data\radar_compass3_ca.paa";
		texture270 = "ca\ui\data\radar_compass4_ca.paa";
	};
	
	class TacticalDisplay : SideColors {
		left = (0.263);
		top = "0.055 + SafeZoneY";
		width = 0.473;
		height = 0.008;
		targetTexture = "\ca\ui\data\igui_target_ground_gs.paa";
		targetAirTexture = "\ca\ui\data\igui_target_air_gs.paa";
		
		class Cursor {
			width = 0.0196078;
			height = 0.0261438;
			color[] = {1, 1, 1, 1};
		};
		shadow = false;
		colorCamera[] = {1, 1, 1, 0};
	};
	
	class Radar {
		left = "0.078 + SafeZoneX";
		top = "0.012 + SafeZoneY";
		width = "0.161*SafezoneH";
		height = "0.215*SafezoneH";
		radarAirBackgroundTexture = "\ca\ui\data\igui_radar_air_ca.paa";
		radarTankBackgroundTexture = "\ca\ui\data\igui_radar_air_ca.paa";
		radarIncommingMissile = "\ca\ui\data\igui_radar_missle_ca.paa";
		radarAirDangerSector = "\ca\ui\data\igui_radar_danger_ca.paa";
		radarLockDangerColor[] = {0.8, 0.6, 0, 0.75};
		radarIncommingDangerColor[] = {0.7, 0.1, 0, 0.75};
		radarVehicleTarget = "\ca\ui\data\igui_radar_target_ca.paa";
		radarTargetingEnemy = "\ca\ui\data\igui_radar_targeting_ca.paa";
		radarFOV = "\ca\ui\data\igui_radar_viewdir_ca.paa";
		radarFOVPlayer[] = {0.95, 0.95, 0.95, 1};
		radarFOVCrew[] = {0.4, 0.4, 0.4, 1};
		shadow = false;
	};
	
	class GroupDir {
		left = "(SafeZoneW + SafeZoneX) - (1 - 0.890)";
		top = "(SafeZoneH + SafeZoneY) - (1 - 0.708)";
		width = 0.096187;
		height = 0.1274;
		colorBackground[] = {0.95, 0.95, 0.95, 1};
		image = "\ca\ui\data\squad_orientation_ca.paa";
		shadow = 2;
	};
	
	class Hint {
		sound[] = {"\Ca\sounds\sfx\hint.wss", db-10, 1};
	};
	
	class PlayerInfo {
		left = "0 + SafeZoneX";
		top = "0.177 + SafeZoneY";
		width = 0.15;
		colorBackground[] = {1, 0, 1, 1};
		
		class UnitPicture {
			width = 0.55;
			height = 0.56;
		};
	};

	class Menu {
		hide = "HTFade";
		width = 0.45;
		height = 0.4;
		x = "0.012 + SafeZoneX";
		y = 0.83188;
		top = 0.23;
		font = "EtelkaNarrowMediumPro";
		size = 0.034;
		shadow = 2;
		align = 0;
		widthMin = 0.155;
		widthMax = 0.45;
		colorChecked[] = {0.95, 0.95, 0.95, 0.8};//{0.863, 0.584, 0.0, 1};
		colorEnabled[] = {0.95, 0.95, 0.95, 1};//{0.95, 0.95, 0.95, 1};
		colorDisabled[] = {0.95, 0.95, 0.95, 0.5};//{0.606, 0.606, 0.606, 1};
		colorSelected[] = {0.1, 0.1, 0.1, 1};//{0.424, 0.651, 0.247, 1};
		colorSelectedText[] = {0.95, 0.95, 0.95, 1};
		hideTime = 60;
		quickMenuDelay = 0.5;
	};
	
	class Capture {
		colorBackground[] = {0, 0, 0, 0.0};
		colorText[] = {0.95, 0.95, 0.95, 1};
		colorLine[] = {0.8, 0.8, 0.8, 1};
	};
	
	class Bar {
		imageBar = "#(argb,8,8,3)color(1,1,1,1)";
		colorBackground[] = {0, 0, 0, 0.0};
		colorGreen[] = {0.95, 0.95, 0.95, 1};
		colorYellow[] = {0.95, 0.95, 0.95, 1};
		colorRed[] = {0.706, 0.0745, 0.0196, 1};
		colorBlinkOn[] = {0.863, 0.584, 0.0, 1};
		colorBlinkOff[] = {0.706, 0.0745, 0.0196, 1};
		height = 0.01;
	};
	
	class Actions {
		align = 0x00 + 0x08;
		shadow = 2;
		x = "0.012 + SafeZoneX";
		y = 0.411;
		font = "EtelkaNarrowMediumPro";
		size = 0.034;
		rows = "5*SafeZoneH";
		arrowWidth = 0.015;
		arrowHeight = 0.02;
		iconArrowUp = "\ca\ui\data\ui_action_arrow_up_gs.paa";
		iconArrowDown = "\ca\ui\data\ui_action_arrow_down_gs.paa";
		colorBackground[] = {0, 0, 0, 0.0};
		colorText[] = {0.95, 0.95, 0.95, 1};
		colorSelect[] = {0.95, 0.95, 0.95, 1};
		colorBackgroundSelected[] = {0.1, 0.1, 0.1, 1};
		background = "\ca\ui\data\igui_hud_corner.paa";
		underlineSelected = 0;
		/*
		colorText[] = {0.95, 0.95, 0.95, 1};
		colorChecked[] = {0.95, 0.95, 0.95, 0.8};//{0.863, 0.584, 0.0, 1};
		colorEnabled[] = {0.95, 0.95, 0.95, 1};//{0.95, 0.95, 0.95, 1};
		colorDisabled[] = {0.95, 0.95, 0.95, 0.5};//{0.606, 0.606, 0.606, 1};
		colorBackgroundSelected[] = {0.1, 0.1, 0.1, 1};//{0.424, 0.651, 0.247, 1};
		colorSelectedText[] = {0.95, 0.95, 0.95, 1};
		*/
	};
	
	class DefaultAction {
		font = "EtelkaNarrowMediumPro";
		size = 0.034;
		colorText[] = {0.95, 0.95, 0.95, 1};
		shadow = 2;
		showHint = 0;
		showNext = 0;
		showLine = 0;
		relativeToCursor = 1;
		offsetX = -0.043;
		offsetY = 0.07;
		hotspotX = 0.0;
		hotspotY = 0.0;
	};
	
	class GroupInfo {
		class Semaphore {};
		imageDefaultWeapons = "\ca\ui\data\cmdbar_unarmed_ca.paa";
		imageNoWeapons = "\ca\ui\data\cmdbar_unarmed_ca.paa";
	};
	
	class CommandBar {
		left = "-0.032 + SafeZoneX";
		top = "(SafeZoneH + SafeZoneY) - (1 - 0.851)";
		width = 1.06;
		height = 0.08;
		imageDefaultWeapons = "ca\ui\data\cmdbar_clean_ca.paa";
		imageNoWeapons = "ca\ui\data\cmdbar_unit_noweapon_ca.paa";
		imageCommander = "ca\ui\data\cmdbar_commander_ca.paa";
		imageDriver = "ca\ui\data\cmdbar_driver_ca.paa";
		imageGunner = "ca\ui\data\cmdbar_gunner_ca.paa";
		imageCargo = "ca\ui\data\cmdbar_cargo_ca.paa";
		dimm = 0.3;
		colorRedTeam[] = {1.0, 0, 0, 1.0};
		colorBlueTeam[] = {0, 0, 1.0, 1.0};
		colorGreenTeam[] = {0.95, 0.95, 0.95, 1};
		colorYellowTeam[] = {0.8, 0.8, 0, 1.0};
		colorWhiteTeam[] = {0.95, 0.95, 0.95, 1};
		
		class prevPage {
			x = 0.032;
			y = 0.029;
			w = 0.0196078;
			h = 0.104575;
			color[] = {0.95, 0.95, 0.95, 1};
			texture = "ca\ui\data\cmdbar_leftarrow_ca.paa";
		};
		
		class nextPage {
			x = 0.0;
			y = 0.029;
			w = 0.0196078;
			h = 0.104575;
			color[] = {0.95, 0.95, 0.95, 1};
			texture = "ca\ui\data\cmdbar_rightarrow_ca.paa";
		};
		
		class UnitInfo {
			class GroupIcon {
				x = 0.016;
				y = 0.012;
				w = 0.05733;
				h = 0.07623;
			};
			
			class HcGroupText {
				x = 0.045;
				y = 0.083;
				font = "Zeppelin32";
				SizeEx = 0.03921;
			};
			
			class UnitBackground {
				x = 0;
				y = 0;
				w = 0.156863;
				h = 0.20915;
				textureNormal = "ca\ui\data\cmdbar_background_ca.paa";
				textureSelected = "ca\ui\data\cmdbar_selected_ca.paa";
				texturePlayer = "ca\ui\data\cmdbar_player_ca.paa";
				textureFocus = "ca\ui\data\cmdbar_background_ca.paa";
			};
			
			class UnitFocus {
				x = 0;
				y = 0;
				w = 0;
				h = 0;
				color[] = {1.0, 1.0, 1.0, 0};
				texture = "#(argb,8,8,3)color(0,0,0,0)";
			};
			
			class UnitIcon {
				x = 0.0;
				y = 0.0;
				w = 0.091;
				h = 0.121;
				color[] = {0.95, 0.95, 0.95, 1};
				colorPlayer[] = {0.95, 0.95, 0.95, 1};
				colorNoAmmo[] = {0.8, 0.4, 0.0, 1};
				colorWounded[] = {0.8, 0, 0, 1};
				colorWoundedFade[] = {0, 0, 0, 1};
				colorNoFuel[] = {0.8, 0.7, 0, 1};
			};
			
			class Semaphore {
				x = 0;
				y = 0;
				w = 0.156863;
				h = 0.20915;
				color[] = {0.8, 0, 0, 1};
				texture = "ca\ui\data\cmdbar_donotfire_ca.paa";
			};
			
			class CommandBackground {
				x = 0;
				y = 0;
				w = 0.156863;
				h = 0.0522876;
				color[] = {1.0, 1.0, 1.0, 1};
				texture = "ca\ui\data\cmdbar_order_background_ca.paa";
			};
			
			class CommandText {
				x = 0.045;
				y = 0;
				w = 0.091;
				h = 0.033;
				color[] = {1.0, 1.0, 1.0, 1};
				font = "Zeppelin32";
				SizeEx = 0.03921;
			};
			
			class UnitSpecialRole {
				x = 0.053;
				y = 0.033;
				w = 0.0392157;
				h = 0.0522876;
				color[] = {0.95, 0.95, 0.95, 1};
			};
			
			class VehicleNumberBackground {
				x = -0.002;
				y = 0.072;
				w = 0.0392157;
				h = 0.0522876;
				color[] = {0.023529, 0, 0.0313725, 1};
				texture = "ca\ui\data\cmdbar_commander_number_ca.paa";
			};
			
			class VehicleNumberText {
				x = 0.017;
				y = 0.08;
				w = 0.022;
				h = 0.029;
				colorText[] = {0.023529, 0, 0.0313725, 1};
				font = "Zeppelin32";
				SizeEx = 0.03921;
			};
			
			class UnitRole {
				x = 0.026;
				y = 0.072;
				w = 0.0392157;
				h = 0.0522876;
				color[] = {0.023529, 0, 0.0313725, 1};
			};
			
			class UnitNumberBackground {
				x = 0.061;
				y = 0.08;
				w = 0.0392157;
				h = 0.0522876;
				color[] = {0.023529, 0, 0.0313725, 1};
				texture = "ca\ui\data\cmdbar_unitnumberbackground_ca.paa";
			};
			
			class UnitNumberText {
				x = 0.077;
				y = 0.083;
				w = 0.022;
				h = 0.029;
				colorText[] = {0.023529, 0, 0.0313725, 1};
				font = "Zeppelin32";
				SizeEx = 0.03921;
			};
			
			class CombatMode {
				x = 0.064;
				y = 0.005;
				w = 0.0392157*0.6;
				h = 0.0522876*0.6;
				textureMCareless = "ca\ui\data\icon_combatmode_careless_ca.paa";
				textureMSafe = "ca\ui\data\icon_combatmode_safe_ca.paa";
				textureMAware = "ca\ui\data\icon_combatmode_aware_ca.paa";
				textureMCombat = "ca\ui\data\icon_combatmode_combat_ca.paa";
				textureMStealth = "ca\ui\data\icon_combatmode_stealth_ca.paa";
			};
		};
	};
	
	class ConnectionLost {
		font = "EtelkaNarrowMediumPro";
		size = 0.034;
		color[] = {0.8, 0, 0, 1.0};
	};
	
	class Cursor {
		font = "EtelkaNarrowMediumPro";
		size = 0.034;
		activeWidth = 0.0392157;
		activeHeight = 0.0522876;
		activeMinimum = 1.1;
		activeMaximum = 1.1;
		aim = "\ca\ui\data\cursor_aim_ca.paa";
		weapon = "\ca\ui\data\cursor_w_airMG_gs.paa";
		outArrow = "\ca\ui\data\icon_offarrow_ca.paa";
		select_target = "\ca\ui\data\cursor_w_target_gs.paa";
		lock_target = "\ca\ui\data\cursor_w_laserlock_gs.paa";
		gunner_lock = "\ca\ui\data\gunner_lock.paa";
		select = "\ca\ui\data\icon_unit_ca.paa";
		selectOver = "\ca\ui\data\cursor_select_unit_ca.paa";
		me = "\ca\ui\data\cursor_circle_ca.paa";
		leader = "\ca\ui\data\icon_unit_teamleader_ca.paa";
		mission = "\ca\ui\data\icon_task_ca.paa";
		unitUnconscious = "\ca\ui\data\icon_unit_agony_ca.paa";
		assault = "\ca\ui\data\icon_attack_ca.paa";
		board = "\ca\ui\data\icon_task_board_ca.paa";
		customMark = "\ca\ui\data\icon_custom_task_ca.paa";
		iconBoardIn = "\ca\ui\data\icon_board_into_ca.paa";
		iconBoardOut = "\ca\ui\data\icon_board_out_ca.paa";
		iconMove = "\ca\ui\data\icon_mission_move_ca.paa";
		iconJoin = "\ca\ui\data\icon_mission_join_ca.paa";
		iconHealAt = "#(argb,8,8,3)color(0,0,0,0)";
		iconRepairAt = "\ca\ui\data\icon_mission_repair_ca.paa";
		iconRearmAt = "\ca\ui\data\icon_mission_rearm_ca.paa";
		iconRefuelAt = "\ca\ui\data\icon_mission_refuel_ca.paa";
		iconComplex = "ca\ui\data\Cursor_hand_CA.paa";
		iconSupport = "#(argb,8,8,3)color(0,0,0,0)";
		iconInFormation = "#(argb,8,8,3)color(0,0,0,0)";
		iconCursorSupport = "\ca\ui\data\cursor_support_ca.paa";
		iconRepairVehicle = "\ca\ui\data\icon_mission_repair_ca.paa";
		tactical = "\ca\ui\data\cursor_tactical_ca.paa";
		move = "\ca\ui\data\cursor_basic_ca.paa";
		selected = "\ca\ui\data\cursor_selected_ca.paa";
		attack = "\ca\ui\data\cursor_attack_ca.paa";
		getIn = "\ca\ui\data\cursor_getin_ca.paa";
		watch = "\ca\ui\data\cursor_igui_scroll_ca.paa";
		meColor[] = {0, 0, 0, 0.2};
		dimmMe = 0.2;
		dimmMeStartTime = 5;
		dimmMeEndTime = 10;
		dimmCmdStartTime = 5;
		dimmCmdEndTime = 10;
		selectColor[] = {0.95, 0.95, 0.95, 1};
		leaderColor[] = {0.863, 0.584, 0.0, 1};
		missionColor1[] = {0.863, 0.584, 0.0, 1};
		missionColor2[] = {0.863, 0.584, 0.0, 1};
		unitUnconsciousColor[] = {0.196, 0.592, 0.706, 1};
		enemyActiveColor[] = {0.706, 0.0745, 0.0196, 1};
		customMarkColor[] = {0.95, 0.95, 0.95, 1};
		assaultColor[] = {0.706, 0.0745, 0.0196, 1};
		boardColor[] = {0.863, 0.584, 0.0, 1};
		iconMoveColor[] = {0.863, 0.584, 0.0, 1};
		iconJoinColor[] = {0.863, 0.584, 0.0, 1};
		iconHealAtColor[] = {0.863, 0.584, 0.0, 1};
		iconRepairAtColor[] = {0.863, 0.584, 0.0, 1};
		iconRearmAtColor[] = {0.863, 0.584, 0.0, 1};
		iconRefuelAtColor[] = {0.863, 0.584, 0.0, 1};
		iconSupportColor[] = {0.863, 0.584, 0.0, 1};
		iconInFormationColor[] = {0.863, 0.584, 0.0, 1};
		blinkingPeriod = 2.0;
		color[] = {0.95, 0.95, 0.95, 1};
		colorBackground[] = {0, 0, 0, 0.0};
		colorLocked[] = {1, 0, 0, 1};
		dimm = 0.15;
		shadow = 2;
		infoTextShadow = 2;
		
		class Sign {
			height = 2.7;
			widthSector = 2.6;
			widthGroup = 2.5;
			widthUnit = 2.4;
		};
	};
	
	class PeripheralVision {
		cueTexture = "ca\ui\data\tacticaldisplay_target_gs.paa";
		bloodTexture = "ca\ui\data\periph_blood_ca.paa";
		bloodColor[] = {0,0,0,0};
		cueColor[] = {0,0,0,0};
		cueEnemyColor[] = {0,0,0,0};
		cueFriendlyColor[] = {0,0,0,0};
	};
	
	class HitZones {
		shadow = false;
		hitZonesTexture = "ca\ui\data\igui_hitzones_ca.paa";
	};
};

class RscPictureGUI
{
	access = 0;
	type = 0;
	idc = -1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0.95 ,0.95 ,0.95 , 0.85};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	style = "0x30 + 0x100";
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};


class RscStructuredText {
	x = 0;
	y = 0;
	h = 0.035;
	w = 0.1;
	text = "";
	size = 0.03921;
	colorText[] = {0.95, 0.95, 0.95, 1};
	shadow = 2;
	
	class Attributes {
		font = "Zeppelin32";
		color = "#e0d8a6";
		align = "center";
		shadow = true;
	};
};
class RscStructuredTextGUI: RscStructuredText
{
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	class Attributes: Attributes
	{
		align = "center";
		valign = "middle";
	};
};
//#include "CfgWorlds.hpp"
#include "cfgMoves.hpp"
#include "rscTitles.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "cfgLoot.hpp"
#include "CfgMarkers.hpp"
#include "CfgAmmo.hpp"

class CfgSurvival {
	class Inventory {
		class Default {
			RandomMagazines = 3;
			GuaranteedMagazines[] = {"ItemBandage"};
			RandomPossibilitieMagazines[] = {"ItemBandage","ItemPainkiller","HandRoadFlare"};
			backpackWeapon = "";
		};
	};
	class Meat {
		class Default {
			yield = 2;
			rawfoodtype = "FoodmeatRaw";
		};
		class Cow: Default {
			yield = 6;
			rawfoodtype = "FoodbeefRaw";
		};
		class Cow01: Cow {};
		class Cow02: Cow {};
		class Cow03: Cow {};
		class Cow04: Cow {};
		class Goat: Default {
			yield = 4;
			rawfoodtype = "FoodmuttonRaw";
		};
		class Sheep: Default {
			yield = 4;
			rawfoodtype = "FoodmuttonRaw";
		};
		class WildBoar: Default {
			yield = 4;
			rawfoodtype = "FoodbaconRaw";
		};
		class Hen: Default {
			yield = 2;
			rawfoodtype = "FoodchickenRaw";
		};
		class Rabbit: Default {
			yield = 1;
			rawfoodtype = "FoodrabbitRaw";
		};
	};
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

class CfgBuildingLoot {
	class Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_suit1","z_suit2","z_worker1","z_worker2","z_worker3","z_villager1","z_villager2","z_villager3"}; //,"z_woman1"
		lootChance = 0;
		lootPos[] = {};
		itemType[] = {};
		itemChance[] = {};
		hangPos[] = {};
		vehPos[] = {};
	};
	class Master {
		weapons[] = {
			"SMAW",
			"Javelin",
			"G36C",
			"Stinger"
		};
	};
	class Residential: Default {
		zombieChance = 0.3;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_villager1","z_villager2","z_villager3"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{
			//backpacks"},
			{"DZ_ALICE_Pack_EP1","object"},
			{"DZ_Assault_Pack_EP1","object"},
			{"DZ_British_ACU","object"},
			{"DZ_Czech_Vest_Puch","object"},
			{"DZ_TK_Assault_Pack_EP1","object"},
			//class loot types"},
			{"","generic"},
			{"","military"},
			{"","trash"},
			{"","food"},
			//headgear"},
			{"Binocular","weapon"},
			//Inventory clothing items"},
			{"Skin_BanditSkin_DZ","magazine"},
			{"Skin_Camo1_DZ","magazine"},
			{"Skin_Rocket_DZ","magazine"},
			{"Skin_Sniper1_DZ","magazine"},
			//inventory crafting items"},
			{"ItemNails","magazine"},
			{"ItemTape","magazine"},
			{"PartWoodPile","magazine"},
			{"WeaponHolder_ItemTent","object"},
			{"WeaponHolder_Propane","object"},
			//inventory drink items"},
			{"ItemSodaMdew","magazine"},
			//inventory food items"},
			//inventory medical items"},
			//inventory trash"},
			//inventory vehicle parts"},
			//primary weapons"},
			{"Crossbow","weapon"},
			{"LeeEnfield","weapon"},
			{"MR43","weapon"},
			{"Winchester1866","weapon"},
			//secondary weapons"},
			{"Colt1911","weapon"},
			{"Makarov","weapon"},
			{"MakarovSD","weapon"},
			{"revolver_EP1","weapon"},
			//toolbelt crafting books"},
			{"ItemCraftingBook","weapon"},
			//toolbelt ONLY items"},
			{"ItemCompass","generic"},
			{"ItemKnife","generic"},
			{"ItemMap","weapon"},
			{"ItemMatchbox","generic"},
			{"ItemWatch","generic"},
			//toolbelt Switchable weapons"},
			{"WeaponHolder_ItemHatchet","object"},
			{"WeaponHolder_ItemMachete","object"}
		};
		itemChance[] =	{
			//
			0.03, //DZ_ALICE_Pack_EP1","object
			0.05, //DZ_Assault_Pack_EP1","object
			0.01, //DZ_British_ACU","object
			0.08, //DZ_Czech_Vest_Puch","object
			0.03, //DZ_TK_Assault_Pack_EP1","object
			//
			0, //,"generic
			0, //",military
			0.8, //,"trash
			0.1, //,"food
			//
			0.02, //Binocular","weapon
			//
			0.01, //Skin_BanditSkin_DZ","magazine
			0.01, //Skin_Camo1_DZ","magazine
			0.01, //Skin_Rocket_DZ","magazine
			0.01, //Skin_Sniper1_DZ","magazine
			//
			0.02, //ItemNails","magazine
			0.01, //ItemTape","magazine
			0.02, //PartWoodPile","magazine
			0.01, //WeaponHolder_ItemTent","object
			0.01, //WeaponHolder_Propane","object
			//
			0.01, //ItemSodaMdew","magazine
			//
			//
			//
			//
			//
			0.4, //Crossbow","weapon
			0.2, //LeeEnfield","weapon
			0.1, //MR43","weapon
			0.3, //Winchester1866","weapon
			//
			0.2, //Colt1911","weapon
			0.4, //Makarov","weapon
			0.01, //MakarovSD","weapon
			0.3, //revolver_EP1","weapon
			//
			0.05, //ItemCraftingBook","weapon
			//
			0.1, //ItemCompass","generic
			0.1, //ItemKnife","generic
			0.1, //ItemMap","weapon
			0.4, //ItemMatchbox","generic
			0.1, //ItemWatch","generic
			//
			0.3, //WeaponHolder_ItemHatchet","object
			0.01 //WeaponHolder_ItemMachete","object
		};		
	};
	class Office: Residential {
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_suit1","z_suit2"};
	};
	class Industrial: Default {
		zombieChance = 0.4;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3"};
		maxRoaming = 2;
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{
			//class loot types
			{"","generic"},
			{"","military"},
			{"","trash"},
			//toolbelt items
			{"ItemCraftingBook2","weapon"},
			{"ItemKnife","military"},
			//inventory items
			{"ItemNails","magazine"},
			{"ItemTankTrap","magazine"},
			{"ItemToolbox","weapon"},
			{"ItemWire","magazine"},
			//weapons
			{"WeaponHolder_ItemHatchet","object"},
			//vehicle parts
			{"WeaponHolder_ItemJerrycan","object"},
			{"WeaponHolder_PartEngine","object"},
			{"WeaponHolder_PartFueltank","object"},
			{"WeaponHolder_PartGeneric","object"},
			{"WeaponHolder_PartGlass","object"},
			{"WeaponHolder_PartVRotor","object"},
			{"WeaponHolder_PartWheel","object"}
		};
		itemChance[] =	{
			//class loot types
			0.3, //,generic
			0.01, //,military
			0.8, //,trash
			//toolbelt items
			0.02, //ItemCraftingBook2","weapon
			0.02, //ItemKnife","military
			//inventory items
			0.01, //ItemNails","magazine
			0.02, //ItemTankTrap","magazine
			0.02, //ItemToolbox","weapon
			0.02, //ItemWire","magazine
			//weapons
			0.01, //WeaponHolder_ItemHatchet","object
			//vehicle parts
			0.01, //WeaponHolder_ItemJerrycan","object
			0.04, //WeaponHolder_PartEngine","object
			0.04, //WeaponHolder_PartFueltank","object
			0.04, //WeaponHolder_PartGeneric","object
			0.04, //WeaponHolder_PartGlass","object
			0.04, //WeaponHolder_PartVRotor","object
			0.04 //WeaponHolder_PartWheel","object
		};
	};
	class Farm: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{
			{"WeaponHolder_ItemJerrycan","object"},
			{"","generic"},
			{"huntingrifle","weapon"},
			{"LeeEnfield","weapon"},
			{"Winchester1866","weapon"},
			{"","trash"},
			{"Crossbow_DZ","weapon"},
			{"PartWoodPile","magazine"},
			{"WeaponHolder_ItemHatchet","object"},
			{"MR43","weapon"},
			{"WeaponHolder_ItemMachete","object"}
		};
		itemChance[] =	{
			0.06,
			0.28,
			0.01,
			0.04,
			0.03,
			0.22,
			0.03,
			0.11,
			0.17,
			0.06,
			0.03
		};
	};
	class Supermarket: Default {
		lootChance = 1;
		minRoaming = 2;
		maxRoaming = 5;
		zombieChance = 0.3;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		itemType[] = {
			{"ItemWatch","generic"},
			{"ItemCompass","generic"},
			{"ItemMap","weapon"},
			{"ItemCraftingBook","weapon"},
			{"Makarov","weapon"},
			{"Colt1911","weapon"},
			{"ItemFlashlight","generic"},
			{"ItemKnife","generic"},
			{"ItemMatchbox","generic"},
			{"","generic"},
			{"LeeEnfield","weapon"},
			{"revolver_EP1","weapon"},
					
			{"DZ_Assault_Pack_EP1","object"}, // 12
			{"DZ_Czech_Vest_Puch","object"}, // 12-0
			{"DZ_ALICE_Pack_EP1","object"}, // 16
			{"DZ_TK_Assault_Pack_EP1","object"}, // 16
			{"DZ_British_ACU","object"}, // 18
			
			{"Winchester1866","weapon"},
			{"WeaponHolder_ItemTent","object"},
			{"","food"},
			{"","trash"},
			{"Crossbow_DZ","weapon"},
			{"Binocular","weapon"},
			{"PartWoodPile","magazine"},
			{"MR43","weapon"}
		};
		itemChance[] =	{
			0.15,
			0.01,
			0.05,
			0.02,
			0.02,
			0.02,
			0.05,
			0.02,
			0.05,
			0.05,
			0.01,
			0.01,
			0.05, //12
			0.04, // 12-0
			0.02, //16
			0.02, //16
			0.01, //18
			0.01,
			0.01,
			0.3,
			0.15,
			0.01,
			0.05,
			0.02,
			0.01
		};
	};
	class HeliCrash: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{		
			{"FN_FAL","weapon"},
			{"bizon_silenced","weapon"},
			{"bizon","weapon"},
			{"M14_EP1","weapon"},
			{"FN_FAL_ANPVS4","weapon"},
			{"M107_DZ","weapon"},
			{"BAF_AS50_scoped_DZ","weapon"},
			{"Mk_48_DZ","weapon"},
			{"M249_DZ","weapon"},
			//{"BAF_L85A2_RIS_CWS","weapon"},
			{"BAF_L85A2_RIS_SUSAT","weapon"},
			{"DMR","weapon"},
			{"","military"},
			{"","medical"},
			{"MedBox0","object"},
			{"NVGoggles","weapon"},
			{"AmmoBoxSmall_556","object"},
			{"AmmoBoxSmall_762","object"},
			{"Skin_Camo1_DZ","magazine"},
			{"Skin_Sniper1_DZ","magazine"},
			{"Skin_Rocket_DZ","magazine"},
			{"Skin_BanditSkin_DZ","magazine"},
			{"G36C","weapon"},
			{"G36C_camo","weapon"},

			{"G36A_camo","weapon"},
			{"G36K_camo","weapon"},
			{"100Rnd_762x54_PK","magazine"},
			{"M40A3","weapon"},
			{"m8_SAW","weapon"},
			{"m8_sharpshooter","weapon"},
			{"BAF_L85A2_RIS_ACOG","weapon"},
			{"VSS_vintorez","weapon"},
			{"SCAR_L_CQC","weapon"},
			{"SCAR_L_CQC_Holo","weapon"},
			{"SCAR_L_STD_Mk4CQT","weapon"},
			{"SCAR_L_STD_EGLM_RCO","weapon"},
			{"SCAR_H_LNG_Sniper","weapon"},
			{"ksvk_DZ","weapon"},
			{"SVD","weapon"},
			{"SVD_CAMO","weapon"}
		};
		itemChance[] =	{
			0.02,		//{"FN_FAL","weapon"},
			0.05,		//{"bizon_silenced","weapon"},
			0.03,		//{"bizon","weapon"},
			0.05,		//{"M14_EP1","weapon"},
			0.02,		//{"FN_FAL_ANPVS4","weapon"},
			0.02,		//{"m107","weapon"},
			0.01,		//{"BAF_AS50_scoped_DZ","weapon"},
			0.03,		//{"Mk_48_DZ","weapon"},
			0.05,		//{"M249_DZ","weapon"},
			0.01,		//{"BAF_L85A2_RIS_CWS","weapon"}, BAF_L85A2_RIS_SUSAT
			0.06,		//{"DMR","weapon"},
			1,			//{"","military"},
			0.5,		//{"","medical"},
			0.1,		//{"MedBox0","object"},
			0.02,		//{"NVGoggles","weapon"}
			0.1,	//AmmoBoxSmall_556
			0.1,	//AmmoBoxSmall_762
			0.08,	//Skin_Camo1_DZ
			0.03,	//Skin_Sniper1_DZ
			0.03,	//Skin_Rocket_DZ
			0.03,	//Skin_BanditSkin_DZ
			0.03,	//G36C"
			0.02,	//G36C_camo

			0.02,	//G36A_camo
			0.02,	//G36K_camo
			0.01,	//("100Rnd_762x54_PK","magazine"}
			0.01,	//("M40A3","weapon"}
			0.01,	//("m8_SAW","weapon"}
			0.01,	//("m8_sharpshooter","weapon"}
			0.01,	//("BAF_L85A2_RIS_ACOG","weapon"}
			0.01,	//("VSS_vintorez","weapon"}
			0.04,	//("SCAR_L_CQC","weapon"}
			0.03,	//("SCAR_L_CQC_Holo","weapon"}
			0.02,	//("SCAR_L_STD_Mk4CQT","weapon"}
			0.01,	//("SCAR_L_STD_EGLM_RCO","weapon"}
			0.01,	//("SCAR_H_LNG_Sniper","weapon"}
			0.01,	//("ksvk_DZ","weapon"}
			0.01,	//("SVD","weapon"}
			0.01	//("SVD_CAMO","weapon"}
		};
	};
	class HeliCrash_No50s: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{		
			{"FN_FAL","weapon"},
			{"bizon_silenced","weapon"},
			{"bizon","weapon"},
			{"M14_EP1","weapon"},
			{"FN_FAL_ANPVS4","weapon"},
			{"Mk_48_DZ","weapon"},
			{"M249_DZ","weapon"},
			{"BAF_L85A2_RIS_SUSAT","weapon"},
			{"DMR","weapon"},
			{"","military"},
			{"","medical"},
			{"MedBox0","object"},
			{"NVGoggles","weapon"},
			{"AmmoBoxSmall_556","object"},
			{"AmmoBoxSmall_762","object"},
			{"Skin_Camo1_DZ","magazine"},
			{"Skin_Sniper1_DZ","magazine"},
			{"Skin_Rocket_DZ","magazine"},
			{"Skin_BanditSkin_DZ","magazine"},
			{"G36C","weapon"},
			{"G36C_camo","weapon"},
			//{"G36_C_SD_camo","weapon"},
			{"G36A_camo","weapon"},
			{"G36K_camo","weapon"},
			{"100Rnd_762x54_PK","magazine"},
			{"M40A3","weapon"},
			{"m8_SAW","weapon"},
			{"m8_sharpshooter","weapon"},
			{"VSS_vintorez","weapon"},
			{"BAF_L85A2_RIS_ACOG","weapon"},
			{"SVD","weapon"},
			{"SVD_CAMO","weapon"}
		};
		itemChance[] =	{
			0.02,		//{"FN_FAL","weapon"},
			0.05,		//{"bizon_silenced","weapon"},
			0.03,		//{"bizon","weapon"},
			0.05,		//{"M14_EP1","weapon"},
			0.02,		//{"FN_FAL_ANPVS4","weapon"},
			0.03,		//{"Mk_48_DZ","weapon"},
			0.05,		//{"M249_DZ","weapon"},
			0.01,		//{"BAF_L85A2_RIS_CWS","weapon"}, BAF_L85A2_RIS_Holo
			0.06,		//{"DMR","weapon"},
			1,			//{"","military"},
			0.5,		//{"","medical"},
			0.1,		//{"MedBox0","object"},
			0.02,		//{"NVGoggles","weapon"}
			0.1,	//AmmoBoxSmall_556
			0.1,	//AmmoBoxSmall_762
			0.05,	//Skin_Camo1_DZ
			0.03,	//Skin_Sniper1_DZ
			0.03,	//Skin_Rocket_DZ
			0.03,	//Skin_BanditSkin_DZ
			0.03,	//G36C"
			0.02,	//G36C_camo
			//0.01,	//G36_C_SD_camo
			0.02,	//G36A_camo
			0.02,	//G36K_camo
			0.01,	//("100Rnd_762x54_PK","magazine"}
			0.01,	//("M40A3","weapon"}
			0.01,	//("m8_SAW","weapon"}
			0.01,	//("m8_sharpshooter","weapon"}
			0.01,	//("BAF_L85A2_RIS_ACOG","weapon"}
			0.01,	//("VSS_vintorez","weapon"}
			0.01,	//("SVD","weapon"}
			0.01	//("SVD_CAMO","weapon"}
		};
	};
	class Hospital: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_doctor","z_doctor","z_doctor"};

		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{
			{"","trash"},
			{"","hospital"},
			{"MedBox0","object"}
		};
		itemChance[] =	{
			0.2,
			1,
			0.2
		};
	};
	class Military: Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{
			{"M9","weapon"},
			{"ItemCraftingBook3","weapon"},
			{"M16A2","weapon"},
			{"M16A2GL","weapon"},
			{"M9SD","weapon"},
			{"AK_74","weapon"},
			{"M4A1_Aim","weapon"},
			{"AKS_74_kobra","weapon"},
			{"AKS_74_U","weapon"},
			{"AK_47_M","weapon"},
			{"M24","weapon"},
			{"M1014","weapon"},
			{"DMR","weapon"},
			{"M4A1","weapon"},
			{"M14_EP1","weapon"},
			{"UZI_EP1","weapon"},
			{"Remington870_lamp","weapon"},
			{"glock17_EP1","weapon"},
			{"MP5A5","weapon"},
			{"MP5SD","weapon"},
			{"M4A3_CCO_EP1","weapon"},
			{"Binocular","weapon"},
			{"ItemFlashlightRed","military"},
			{"ItemKnife","military"},
			{"ItemGPS","weapon"},
			{"ItemMap","military"},
			
			{"DZ_ALICE_Pack_EP1","object"}, // 16
			{"DZ_TK_Assault_Pack_EP1","object"}, // 16
			{"DZ_British_ACU","object"}, // 18
			{"DZ_CivilBackpack_EP1","object"}, // 24
			{"DZ_Backpack_EP1","object"}, // 24
			
			//Normal
			{"","medical"},
			{"","generic"},
			{"","military"},

			{"ItemEtool","weapon"},
			{"ItemSandbag","magazine"},
			{"Sa58P_EP1","weapon"},
			{"Sa58V_EP1","weapon"},

			
			{"MakarovSD","weapon"},
			{"Sa61_EP1","weapon"},
			{"AK_107_pso","weapon"},
			{"AK_107_kobra","weapon"},
			{"AK_107_GL_kobra","weapon"},
			{"AKS_74_pso","weapon"},
			{"RPK_74","weapon"},
			{"m8_carbine","weapon"},
			{"m8_carbineGL","weapon"},
			{"m8_compact","weapon"},
			{"SVD","weapon"}
		};
		itemChance[] =	{
			0.05,
			0.01,
			0.05,
			0.01,
			0.02,
			0.15,
			0.01,
			0.08,
			0.05,
			0.05,
			0.01,
			0.10,
			0.01,
			0.02,
			0.01,
			0.05,
			0.08,
			0.10,
			0.04,
			0.02,
			0.01,
			0.06,
			0.10,
			0.10,
			0.01,
			0.05,
			//Bags
			0.08, //16
			0.08, //16
			0.06, //18
			0.01, //24
			0.01, //DZ_Backpack_EP1 24
			0.10, 
			1.00,
			2.50,

			0.05,
			0.02,
			0.03,
			0.03,
			
			0.03, //MakarovSD
			0.03, //Sa61_EP1
			0.01, //AK_107_pso
			0.03, //AK_107_kobra
			0.03, //AK_107_GL_kobra
			0.01, //AKS_74_pso
			0.01, //RPK_74
			0.04, //m8_carbine
			0.04, //m8_carbineGL
			0.04, //m8_compact
			0.01  //SVD
		};
	};
	class MilitarySpecial: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier_heavy"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{
			{"M16A2","weapon"},
			{"M16A2GL","weapon"},
			{"M249_DZ","weapon"},
			{"M9SD","weapon"},

			{"AK_74","weapon"},
			{"M4A1_Aim","weapon"},
			{"AKS_74_kobra","weapon"},
			{"AKS_74_U","weapon"},
			{"AK_47_M","weapon"},
			{"M24","weapon"},
			{"SVD_CAMO","weapon"},
			{"M1014","weapon"},
			{"M107_DZ","weapon"},
			{"DMR","weapon"},
			{"M4A1","weapon"},
			{"M14_EP1","weapon"},
			{"UZI_EP1","weapon"},
			{"Remington870_lamp","weapon"},
			{"glock17_EP1","weapon"},
			{"M240_DZ","weapon"},
			{"M4A1_AIM_SD_camo","weapon"},
			{"M16A4_ACG","weapon"},
			{"M4A1_HWS_GL_camo","weapon"},
			{"Mk_48_DZ","weapon"},
			{"M4A3_CCO_EP1","weapon"},
			//Ammo
			{"AmmoBoxSmall_556","object"},
			{"AmmoBoxSmall_762","object"},


			{"Binocular","weapon"},
			{"ItemFlashlightRed","military"},
			{"ItemKnife","military"},
			{"ItemGPS","weapon"},
			{"ItemMap","military"},
			{"Binocular_Vector","military"},

			{"DZ_ALICE_Pack_EP1","object"}, // 16
			{"DZ_TK_Assault_Pack_EP1","object"}, // 16
			{"DZ_British_ACU","object"}, // 18
			{"DZ_CivilBackpack_EP1","object"}, // 24
			{"DZ_Backpack_EP1","object"}, // 24		

			{"","medical"},
			{"","generic"},
			{"","military"},

			{"PipeBomb","magazine"},
			{"Sa58V_RCO_EP1","weapon"},
			{"Sa58V_CCO_EP1","weapon"},
			{"G36_C_SD_camo","weapon"},
			{"M40A3","weapon"},
			{"100Rnd_762x54_PK","magazine"},
			
			{"ItemCraftingBook3","weapon"},
			
			{"MakarovSD","weapon"},
			{"Sa61_EP1","weapon"},
			{"AK_107_pso","weapon"},
			{"AK_107_kobra","weapon"},
			{"AK_107_GL_kobra","weapon"},
			{"AKS_74_pso","weapon"},
			{"RPK_74","weapon"},
			{"m8_carbine","weapon"},
			{"m8_carbineGL","weapon"},
			{"m8_compact","weapon"},
			{"SVD","weapon"}
		};
		itemChance[] =	{
			0.10,
			0.05,
			0.01,
			0.02,

			0.10,
			0.02,
			0.10,
			0.10,
			0.10,
			0.01,
			0.01,
			0.20,
			0.01,
			0.02,
			0.10,
			0.03,
			0.20,
			0.10,
			0.20,
			0.01,
			0.04,
			0.05,
			0.02,
			0.01,
			0.08,
			0.04,
			0.02,

			0.10,
			0.05,
			0.15,
			0.01, //ItemGPS
			0.03,
			0.01,
			//Bags
			0.08, //16
			0.08, //16
			0.06, //18
			0.01, //24
			0.01, //DZ_Backpack_EP1 24
			0.30,
			1.00,
			5.00, //military

			0.01, //PipeBomb
			0.01, //Sa58V_RCO_EP1
			0.01, //Sa58V_CCO_EP1
			0.01, //{"G36_C_SD_camo","weapon"},
			0.02, // M40A3
			0.01,  //("100Rnd_762x54_PK","magazine"}
			0.01,
			0.03, //MakarovSD
			0.03, //Sa61_EP1
			0.01, //AK_107_pso
			0.03, //AK_107_kobra
			0.03, //AK_107_GL_kobra
			0.01, //AKS_74_pso
			0.01, //RPK_74
			0.04, //m8_carbine
			0.04, //m8_carbineGL
			0.04, //m8_compact
			0.01  //SVD
		};
	};
	class Hunting: Default {
		zombieChance = 0.4;
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_hunter","z_hunter","z_hunter"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{
			{"ItemMap","weapon"},
			{"ItemFlashlight","generic"},
			{"ItemKnife","generic"},
			{"ItemMatchbox","generic"},
			{"Crossbow_DZ","weapon"},
			{"","military"},
			{"WeaponHolder_ItemMachete","object"},
			{"huntingrifle","weapon"},
			{"","hunter"},
			{"ItemCraftingBook3","weapon"}
		};
		itemChance[] =	{
			0.08,
			0.05,
			0.04,
			0.06,
			0.03,
			2.00,
			0.03,
			0.04,
			3.00,
			0.01
		};
	};	
	class Church: Residential {
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_priest","z_priest","z_priest"};
	};
	
	class Land_army_hut_int : Military {
		lootChance = 1;
		lootPos[] = {{1.64453,-5.52002,-1.33056},{0.53125,1.72607,-1.36391}};
	};
	
	class Land_garaz_s_tankem : Military {
		lootChance = 1;
		lootPos[] = {{-6.38477,3.67871,-2.49103},{3.28027,0.556641,-2.49103}};
	};
	
	class Land_army_hut3_long_int : Military {
		lootChance = 1;
		lootPos[] = {{-1.72803,-0.726563,-1.23617},{-2.26416,-4.87402,-1.23617},{-0.449219,3.71338,-1.23617}};
	};
	
	class Land_army_hut2_int : Military {
		lootChance = 1;
		lootPos[] = {{0.703369,0.560547,-0.948328},{1.6875,-2.17627,-0.948328}};
	};
	
	class Land_army_hut2 : Military {
		lootChance = 1;
		lootPos[] = {{0.703369,0.560547,-0.948328},{1.6875,-2.17627,-0.948328}};
	};
	
	class Land_army_hut_storrage : Industrial { //Military
		lootPos[] = {{0.847168,-2.55713,-1.96141},{0.608887,2.79443,-1.96141}};
	};
	
	class Land_hlaska : Military {
		lootChance = 1;
		lootPos[] = {{0,0.79,3.77}};
	};
	
	class Land_cihlovej_dum_in : Residential {
		lootPos[] = {{1.87744,2.37598,-5.27588},{-1.71484,1.78711,-1.8147},{0.640137,-1.39795,-1.81472}};
	};
	class Land_cihlovej_dum_mini : Residential {
		lootPos[] = {{2.51855,2.12207,-2.86942},{-1.84277,2.04785,-2.86942},{1.23145,-0.335938,-2.86942}};
	};
	
	class Land_dum_mesto_in : Residential {
		lootPos[] = {{-4.72754,-0.462402,-4.23207},{5.52393,-1.52441,-4.21337},{-4.91895,3.55244,-4.27988},{5.21289,2.88672,-1.42627},{5.27441,-1.26953,-1.23014},{-3.92676,4.32178,-1.56758},{-3.1626,-0.688477,-1.22935}};
	};
	
	class Land_sara_Domek_sedy : Residential {
		lootPos[] = {{-1.2832,0.844727,-2.14196},{-3.59521,3.14893,-2.14198},{4.49568,2.21338,-2.14196}};
	};
	
	class Land_hruzdum : Residential {
		lootPos[] = {{1.31641,2.11475,1.59321},{-1.16504,0.639648,1.59321},{0.558594,2.17696,-1.16265},{1.32813,2.17676,-4.73357}};
	};
	
	class Land_tovarna1 : Industrial {
		lootPos[] = {{1.59082,-4.73145,-5.75442},{-6.48047,-0.56543,-5.75442},{-9.13379,4,4.82972},{-5.41699,-6.46045,4.82972},{3.56592,-7.5332,-0.320107},{1.1416,-6.83887,2.17997},{2.71289,1.61426,2.15098},{-9.21143,-6.28223,2.17997}};
	};
	
	class Land_ryb_domek : Residential {
		lootPos[] = {{-0.0595703,-1.03418,-2.015}};
	};
	
	class Land_benzina_schnell : Industrial {
		lootPos[] = {};
	};
	
	class Land_TVstudio : Office {
		lootPos[] = {{15.8428,-9.61719,-6.69002},{9.85352,-0.425781,-6.69002},{-13.7793,0.0605469,-3.48293},{3.36133,14.2383,-6.59001},{4.14648,2.64648,-6.59001},{-8.54004,5.13867,-6.59001},{-11.3779,-11.0996,-6.69002},{-6.23926,-5.50977,-6.59001},{5.48535,-10.3301,-6.59001},{10.2422,-6.38867,-4.74052},{6.65234,-12.4102,-3.09003},{15.1172,-14.7285,-3.19049},{-6.0791,-14.9238,-3.19049},{-6.86133,-7.80664,-3.09003},{-0.39431,-1.9375,-3.09003},{4.05273,7.01367,-3.09003},{-13.8379,0.0234375,0.0170593},{5.71387,10.9277,-1.24002},{-13.4434,0.101563,3.51707},{5.16895,6.68164,0.409988},{-0.827148,-3.25977,0.409988},{5.13672,-8.25195,0.409988},{-8.56445,-7.31445,0.409988},{-3.02539,-9.63086,0.409988},{9.5625,-14.7969,0.30867},{7.84766,-9.53711,3.90999},{-1.17188,-10.7168,3.90999},{-9.95605,4.20508,3.90999},{-5.00195,11.9453,3.90999},{3.52051,8.62891,3.90999},{-13.1572,0.296875,7.01707}};
	};
	
	class Land_deutshe_mini : Residential {
		lootPos[] = {{-1.81348,2.36963,-2.79262},{-2.11768,-0.958008,-2.73062},{3.41357,0.916504,-2.78435},{3.76172,-2.10693,-2.73065}};
	};
	
	class Land_hotel_riviera1 : Residential {
		lootPos[] = {{14.3193,-7.54932,-0.321754},{6.66992,-6.42041,-0.321464},{-1.43945,-6.1167,-0.321464},{-11.0947,-7.84473,-0.322234},{-13.1543,-0.769531,-0.322207},{-7.09668,7.83643,-3.34139},{-0.0673828,8.64453,-3.33423},{5.52344,8.5127,-3.33536},{12.46,7.69141,-3.34103}};
	};
	
	class Land_hotel_riviera2 : Residential {
		lootPos[] = {{3.55566,-6.7644,-0.321464},{-4.01855,-6.93018,-0.321464},{-11.8311,-8.03491,-0.32216},{-10.0293,6.99585,-3.34129},{-2.73242,7.69849,-3.33373},{2.56641,7.83105,-3.33516},{9.49219,6.99854,-3.34114}};
	};
	
	class Land_sara_stodola : Farm {
		lootPos[] = {{-2.94824,-0.0193848,-2.19523},{4.08301,-1.0835,-2.19523}};
	};
	
	class Land_hut01 : Residential {
		lootPos[] = {{0.323242,1.36377,-0.44834}};
	};
	
	class Land_hut02 : Residential {
		lootPos[] = {{-0.162598,1.24707,-0.445763}};
	};
	
	class Land_hospoda_mesto: Residential {
		lootPos[] = {{5.33691,4.18164,-5.149056},{2.87451,-4.98828,-5.17222},{1.55518,-1.5293,-5.17846},{-6.48926,-3.0957,-5.17224},{-0.642578,-4.02344,-5.17224},{-6.15039,-4.04492,-1.22695},{2.83838,-1.31641,-1.24297},{5.75244,3.92773,-1.2485}};
	};
	
	class Land_hut04 : Residential {
		maxRoaming = 2;
		lootPos[] = {{-0.0205078,1.74512,-0.437198}};
	};
	
	class Land_dulni_bs : Residential {
		maxRoaming = 1;
		lootPos[] = {{0.70459,-1.89063,-1.75204},{0.778809,1.64063,-1.75206}};
	};
	
	class Land_bouda2_vnitrek : Farm {
		maxRoaming = 2;
		lootPos[] = {{-1.34631,1.36914,-0.610504},{0.775391,-1.76465,-0.610504}};
	};
	
	class Land_dum_zboreny : Residential {
		maxRoaming = 3;
		lootPos[] = {{3.98828,-2.43848,-2.37674},{-3.51367,3.46289,-2.37674},{6.21875,4.40234,-2.37674},{-0.03125,-2.62207,1.40173},{-2.28125,3.90332,1.40192},{-5.29883,-2.30957,1.414438}};
	};
	
	class Land_dum_zboreny_total : Residential {
		maxRoaming = 3;
		lootPos[] = {};
	};
	
	class Land_zastavka_jih : Residential {
		maxRoaming = 2;
		lootPos[] = {{0.367188,-0.109375,-1.21014}};
	};
	
	class Land_zastavka_sever : Residential {
		maxRoaming = 2;
		lootPos[] = {{1.06641,0.0400391,-0.80307}};
	};
	
	class Land_hut03 : Residential {
		maxRoaming = 2;
		lootPos[] = {};
	};
	
	class Land_hut_old02 : Industrial {
		lootPos[] = {{0.573242,-7.09033,-3.03308},{0.1875,0.723145,-3.03308},{-7.09033,-3.14648,-3.03308},{-7.18457,1.79688,-3.03308}};
	};
	
	class Land_dum_rasovna : Residential {
		lootPos[] = {{1.02197,3.18604,0.272606},{1.36816,1.83447,-2.66958}};
	};
	
	class Land_sara_zluty_statek_in : Residential {
		lootPos[] = {{-8.0752,3.12695,-2.88265},{5.53662,-2.125,-2.91741},{-1.21533,0.908203,-2.88771},{-3.49365,4.92578,-2.87814},{6.77148,0.861328,-2.90053},{2.46338,1.375,-2.89846}};
	};

	class Land_Hotel : Residential {
		lootChance = 1;
		lootPos[] = {{-17.9365,17.6123,-7.74672},{-1.02588,9.09961,-7.74672},{-11.6431,-18.4033,-7.74672},{12.2471,-17.6816,-7.74672},{13.5146,1.42383,-7.7467},{17.5029,17.1855,-7.74672},{4.26514,16.3115,-7.74672},{4.68604,9.61719,-7.74672},{3.53467,5.01074,-7.74672},{2.57471,0.442383,-7.74672},{3.58398,-2.65234,-8.00944},{-0.572266,-1.66309,-4.25943},{-17.1128,-4.73145,-4.25943},{-12.4233,-4.13672,-4.25943},{-12.6733,-16.5645,-4.25943},{-17.5176,-13.5488,-4.25943},{-16.9019,12.5859,-4.25943},{-13.2129,17.668,-4.25943},{-8.53662,16.8477,-4.25943},{-3.86768,13.0488,-4.25943},{12.1084,16.7129,-4.25943},{17.0928,13.1836,-4.25943},{17.7715,8.25977,-4.25943},{12.8745,3.32031,-4.25943},{17.0962,-11.957,-4.25943},{12.9512,-17.2568,-4.25944},{8.30176,-17.5576,-4.25944},{3.29736,-12.5918,-4.25944},{-0.941895,-0.0791016,-0.75906},{-12.166,-16.6973,-0.75906},{-16.7827,-13.0938,-0.75906},{-16.5698,-8.72656,-0.75906},{-11.665,-3.43164,-0.75906},{-17.019,12.2656,-0.75906},{-12.7935,17.5166,-0.75906},{-8.92383,17.0908,-0.75906},{-3.53516,13.6943,-0.75906},{11.9971,17.4902,-0.75906},{17.5825,12.7646,-0.75906},{17.8564,8.1582,-0.75906},{12.6943,3.24414,-0.75906},{17.5063,-12.5947,-0.75906},{12.314,-17.7178,-0.759064},{8.69678,-17.3955,-0.759064},{3.09521,-12.3662,-0.759064},{3.61914,4.39551,-0.75906},{3.5166,4.16699,-4.25943},{-0.753418,-0.841797,2.74081},{-12.2056,-17.457,2.74081},{-17.3398,-12.625,2.74081},{-17.3315,-8.61719,2.74081},{-12.5444,-3.09766,2.74081},{-17.9858,12.7178,2.74081},{-12.1934,17.4053,2.74081},{-8.47217,17.5635,2.74081},{-3.58838,13.0947,2.74081},{12.0166,17.1836,2.74081},{17.3477,12.9678,2.74081},{17.7378,8.63086,2.74081},{12.4536,3.00586,2.74081},{17.3003,-11.9092,2.74081},{12.6323,-17.5693,2.74081},{9.22412,-17.1357,2.74081},{3.8418,-12.7959,2.74081},{3.31885,4.92676,2.74081},{-1.16211,-1.23242,6.24485},{-15.6294,-15.5459,6.24485},{-15.8813,14.96,6.24485},{15.6616,15.9541,6.24485},{16.6475,-15.9473,6.24485}};
	};
	
	class Land_dum_istan2 : Residential {
		lootPos[] = {{ -5.39941,0.694824,3.80019 },{ 5.82715,-4.5752,0.822979 },{ -6.38525,-4.09766,3.80019 },{ 3.71338,-1.09912,0.822979 },{ -0.486328,-2.90381,0.822979 }};
	};
	
	class Land_dum_istan3 : Residential {
		lootPos[] = {{ -7.49463,-1.50439,0.585144 },{ -10.3994,-4.03662,-1.10769 },{ -3.33594,-1.15234,0.585143 },{ 9.63916,-0.274414,0.585144 },{ 4.73975,-4.78345,0.585144 }};
	};
	
	class Land_dum_istan3_pumpa : Residential {
		lootPos[] = {{3.21826,0.550293,1.47485},{-2.80615,0.327637,1.47485}};
	};
	
	class Land_dum_istan3_hromada : Residential {
		maxRoaming = 2;
		lootPos[] = {{ -1.52051,-2.9375,-3.24189 },{ -0.0441895,0.201172,-3.24189 }};
	};
	
	class Land_dum_istan3_hromada2 : Residential {
		lootPos[] = {{-1.50049,4.32764,-1.28517},{-1.12061,-3.42383,-1.28517},{4.62012,-3.88379,2.08801},{6.20166,2.93652,2.08801}};
	};
	
	class Land_fuelstation : Industrial {
		lootPos[] = {};
	};
	
	class Land_chilovej_dum_mini : Residential {
		lootPos[] = {{5.78711,-1.60693,-2.65287},{0.793945,0.2383691,-2.65287}};
	};
	
	class Land_dum_mesto2 : Residential {
		maxRoaming = 2;
		lootPos[] = {{-2.21777,5.00586,-0.944006},{1.03662,6.85107,-0.944006},{-1.46631,-5.90137,-0.944006},{0.757324,-3.8291,-0.944006},{-2.23193,-6.66846,-4.34475},{-1.34229,-2.26807,-4.34475},{2.40283,4.83936,-4.34475},{-1.56201,5.76904,-4.34475}};
	};
	
	//Extra No loot buildings
	class Land_dum_mesto3 : Residential {};
	class Land_sara_domek_kovarna : Residential {};
	class Land_dum02 : Residential {};
	class Land_dum_mesto : Residential {};
	class Land_dum_mesto2l : Residential {};
	class Land_dum_olezlina : Residential {};
	class Land_deutshe : Residential {};
	class Land_dum_istan2_01 : Residential {};
	class Land_dum_istan2_03 : Residential {};
	class Land_dum_olez_istan1 : Residential {};
	class Land_dum_istan2_04a : Residential {};
	class Land_garaz : Residential {};
	class Land_garaz_mala : Residential {};
	class Land_budova5 : Industrial {};
	class Land_bouda3 : Industrial {};
	class Land_Nasypka : Military {};
	
	//Loot added
	class Land_sara_domek_hospoda : Residential {
		lootPos[] = {{-1.60303,-3.84082,-2.72913}};
	};
	class Land_afdum_mesto3 : Residential {
		lootPos[] = {{-0.951172,-0.0791016,-5.74376}};
	};
	class Land_dum_istan4_detaily1 : Residential {
		lootPos[] = {{2.70703,-3.2666,-4.33588},{2.68359,-8.11523,-5.92871},{-4.61719,6.00488,-7.28588},{3.71582,5.9082,-7.28588}};
	};
	class Land_dum_istan4 : Residential {
		lootPos[] = {{2.45923,-2.51367,-4.34236},{2.47852,-7.65332,-5.9352},{-3.98633,6.0459,-7.24409},{3.0813,6.1543,-7.24408}};
	};
	class Land_dum_istan4_inverse : Residential {
		lootPos[] = {{-2.46582,-2.38379,-4.33588},{-2.75195,-7.81934,-5.92871},{4.04785,6.09424,-7.28588},{-2.27246,5.96436,-7.28588}};
	};
	class Land_dum_istan2_02 : Residential {
		lootPos[] = {{-1.55566,-2.97949,-4.21303},{-2.35156,0.222656,1.52753}};
	};
	class Land_Panelak3 : Office {
		lootPos[] = {{6.10254,1.80664,12.3769},{-5.80371,2.35449,12.3769},{-0.628906,-3.7177,12.3769},{5.94629,-6.52246,12.3769}};
	};
	class Land_helfenburk_budova2 : Farm {
		lootPos[] = {{-1.22266,-3.57883,4.24561},{-0.708984,2.26758,4.3073}};
	};
	class Land_helfenburk : Farm {
		lootPos[] = {{1.4773,0.339844,-3.01591},{-2.51465,-4.08691,-3.00483},{-2.55273,-3.90234,0.275558},{-3.22461,-4.74219,4.35992},{0.148438,-0.767578,4.35992},{-1.53613,-2.83594,8.70486},{1.64844,-4.3418,12.1881},{-0.126953,0.276367,12.1881}};
	};
	class Land_afbarabizna : Residential {
		lootPos[] = {{0.226563,4.47656,-4.22117},{5.88086,5.12695,-4.22117},{6.10742,2.00488,-4.22117},{6.1377,-3.36719,-4.22117},{1.35742,2.5625,-2.0235},{-4.54395,2.34863,-0.168119},{0.0703125,4.71973,-0.168262},{5.05273,5.3916,-0.168262},{6.26563,1.90332,-0.168262},{3.75977,-3.90039,-0.168262},{-0.495117,0.371094,-0.168118},{-2.85742,-2.27539,-0.168177}};
	};
	class Land_ZalChata : Residential {
		lootPos[] = {{-1.9707,-2.47266,-0.534128}};
	};
	class Land_house_y : Residential {
		lootPos[] = {{-2.89063,-5.32422,-1.40696}};
	};
	class Land_repair_center : Industrial {
		lootPos[] = {{-2.75781,1.24219,-1.52847}};
	};
	class Land_sara_hasic_zbroj : Residential {
		lootPos[] = {{-2.66113,2.43457,-2.65287},{6.56348,1.97998,-2.65287},{6.97168,-2.06836,-2.65287}};
	};
	class Land_kostel : Residential {
		lootPos[] = {{3.22461,-4.25293,-0.905102},{4.92285,-5.37695,-7.33662}};
	};
	class Land_hut_old02_a1 : Industrial {
		lootPos[] = {{1.75781,-7.79785,-3.0332},{-2.80469,-2.53906,-3.0332},{-7.43555,8.79199,-3.0332},{-5.18359,-1.56348,-3.0332},{5.01953,8.36328,-3.0332},{4.43945,-7.30469,-3.0332}};
	};
	class Land_vez : Military {
		lootChance = 1;
		lootPos[] = {{0.00292969,1.54297,1.36331}};
	};
	/*
	class Land_Example : Residential {
		lootPos[] = {{},{},{},{},{},{},{},{}};
	};
	*/
	
	//Original
	class Land_HouseV_1I4: Residential {
		lootPos[] = {{-0.400146,-3.87695,-2.76879},{-3.67749,-2.52002,-2.76551},{-0.472168,3.19702,-2.72021}};
	};
	class Land_kulna: Residential {
		lootPos[] = {{0.504395,0.218262,-1.11643},{-0.496582,1.93262,-1.12826}};
	};
	class Land_Ind_Workshop01_01: Industrial {
		lootPos[] = {{0.595215,-2.43115,-1.29412},{1.24365,0.463867,-1.295},{-0.663574,-0.50293,-1.29837}};
	};
	class Land_Ind_Garage01: Industrial {
		lootPos[] = {{-0.580078,-1.49707,-1.23483},{-0.834473,2.75781,-1.22563},{2.47754,-1.12891,-1.23714},{1.31934,1.63086,-1.23228}};
	};
	class Land_Ind_Workshop01_02: Industrial {
		lootPos[] = {{1.1543,-0.552246,-1.42943},{-1.18665,-0.178223,-1.42868},{-0.661621,1.104,-1.42682}};
	};
	class Land_Ind_Workshop01_04: Industrial {
		lootPos[] = {{-1.37415,4.18896,-1.53123},{0.695435,4.24561,-1.52934},{-1.06677,2.69531,-1.53062},{0.79248,-4.60742,-1.49341},{-1.84424,-6.1709,-1.44427},{-1.05566,-4.08398,-1.51927},{1.43774,-6.59424,-1.41742}};
		hangPos[] = {{-0.541748,4.01221,-2.03068}};
	};
	class Land_Ind_Workshop01_L: Industrial {
		lootPos[] = {{-3.26172,4.75439,-1.30246},{0.175781,3.91748,-1.30766},{-2.37891,2.35303,-1.30405},{4.10547,-4.10791,-1.31345},{0.727539,-2.61621,-1.31418},{2.54688,-2.17725,-1.31482},{1.52344,-3.79443,-1.31332}};
	};
	class Land_Hangar_2: Industrial {
		lootPos[] = {{10.1245,-6.4873,-2.56317},{11.9387,7.91113,-2.56317},{1.79517,7.12695,-2.56317},{-11.8948,10.5449,-2.56317},{-8.97021,-4.34766,-2.56317},{-0.562744,-7.59375,-2.56317},{5.98804,-2.6123,-2.56317}};
	};
	class Land_hut06: Residential {
		lootPos[] = {{0.328125,2.26953,-1.57786},{-0.552368,-0.0620117,-1.53837}};
	};
	class Land_stodola_old_open: Farm {
		lootPos[] = {{-3.06836,8.63184,-5.08054},{2.52588,10.5261,-5.08051},{4.76758,5.00854,-0.9935},{-2.78467,10.2368,-0.9935},{4.62598,10.4983,-0.993469},{2.09082,10.8425,2.96448},{-0.440918,10.3091,2.96445},{-2.58838,-5.91821,-5.08054},{4.11084,-10.9302,-5.08054},{-2.62842,-6.55518,-1.01584},{2.50537,-10.741,2.96445},{0.0410156,-11.0596,2.96445}};
		hangPos[] = {{-1.50537,5.34473,-5.08813},{0.494141,9.42725,-5.09016},{2.59473,-6.21191,-5.08055},{-1.74854,-2.39844,-1.14301}};
	};
	class Land_A_FuelStation_Build: Industrial {
		lootChance = 1;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		lootPos[] = {{-1.31958,-0.655151,-1.57448},{1.82349,0.769653,-1.57458},{1.67871,-0.918701,-1.57458},{-1.23242,1.26794,-1.57458}};
	};
	class Land_A_GeneralStore_01a: Supermarket {
		lootPos[] = {{-6.93213,1.0708,-1.20155},{-7.2959,-2.68213,-1.20155},{-3.41406,-4.39307,-1.20155},{-1.28809,-2.57861,-1.20155},{0.903809,-4.35986,-1.20155},{3.1377,-3.40771,-1.20155},{7.53418,-2.69971,-1.20154},{13.9653,-4.50342,-1.20155},{10.2617,0.109863,-1.20155},{10.5869,-3.84375,-1.20155},{7.84521,-0.137207,-1.20154},{3.57471,0.0356445,-1.20154},{-0.370605,5.17676,-1.20155},{4.77783,5.57617,-1.20155},{13.0874,4.35645,-1.20155},{12.9932,6.31689,-1.20155},{7.36328,3.00928,-1.20155},{1.93091,2.17236,-1.20154},{-3.82715,5.3335,-1.20155},{-7.55029,8.54199,-1.20154},{-4.42407,8.96631,-1.20154},{3.72705,8.36084,-1.20155},{9.84033,8.3374,-1.20155},{-2.90918,1.32031,-1.20155}};
	};
	class Land_A_GeneralStore_01: Supermarket {
		lootPos[] = {{-9.38965,-3.30371,-1.20155},{-3.77539,-3.86865,-1.20155},{1.31836,1.46631,-1.20155},{9.01367,3.8457,-1.20155},{13.3008,-1.77832,-1.20155},{9.81055,1.43213,-1.20155},{1.65039,5.14355,-1.20155},{0.753906,-3.69531,-1.20155},{13.3125,-7.65137,-1.20155},{11.168,-3.73682,-1.20155},{8.89453,-8.37402,-1.20155},{-2.04492,-7.58105,-1.20155},{-7.84766,-5.73633,-1.20155},{-8.22461,-7.32422,-1.20155},{3.79004,-5.69336,-1.20155},{-9.38379,4.46191,-1.20155},{-3.5752,4.46533,-1.20155},{-3.33789,0.612793,-1.20155},{10.5918,-9.9458,-1.21082},{0.105469,-9.6084,-1.21082},{-4.86035,-10.4209,-1.21082},{-6.80859,-1.23975,-1.20155},{1.12207,-1.58887,-1.20155}};
	};
	class Land_Farm_Cowshed_a: Farm {
		lootPos[] = {{-1.06836,-5.92163,-3.08763},{1.69043,-4.91089,-3.08763},{5.8833,-6.15381,-3.08763},{8.83984,-5.60278,-3.08763},{9.74023,-2.48657,-3.08763},{2.88428,-2.34546,-3.08763},{7.88037,2.94214,-3.08763}};
	};
	class Land_stodola_open: Farm {
		lootPos[] = {{-2.60303,5.31665,-4.12804},{-2.58154,-0.530029,-4.17349},{-0.0478516,-4.88989,-4.136},{0.983398,6.20483,-4.11143}};
		hangPos[] = {{-0.932617,-3.35962,-4.16446},{-2.01563,-0.115112,-4.19492}};
	};
	class Land_Barn_W_01: Farm {
		lootPos[] = {{4.93188,-17.0444,-2.63063},{-3.82813,-18.6699,-2.63036},{-4.46387,16.6665,-2.63651},{5.78711,18.9473,-2.6369},{3.9541,4.88428,-2.63446},{-2.99072,-4.16748,-2.63287}};
	};
	class Land_sara_stodola2: Farm {
		lootPos[] = {{-2.34375,-1.08008,-2.16877},{2.80225,0.824219,-2.16877}};
	};
	class Land_Hlidac_budka: Residential {
		lootPos[] = {{-2.3186,1.5127,-0.78363},{2.02075,0.444336,-0.78363},{-0.460938,1.75879,-0.78363}};
	};
	class Land_HouseV2_02_Interier: Residential {
		lootPos[] = {{7.23096,5.37207,-5.53067},{8.55005,0.754883,-5.53067},{5.20166,-1.54004,-5.53067},{3.34912,1.9707,-5.53067},{-3.62598,3.05371,-5.53067},{-5.4812,-0.0292969,-5.53067},{-5.83325,3.26563,-5.53067},{-5.71045,5.49414,-5.53067}};
	};
	class Land_a_stationhouse: Military {
		lootChance = 1;
		lootPos[] = {{-2.69922,-7.57422,-9.47058},{-0.892578,-5.7168,-9.47058},{-3.2417,-6.61914,-4.6489},{-1.35645,-8.3623,-4.6489},{-1.70801,-7.85449,-0.0437927},{-3.39502,-7.88281,-0.0437927},{-1.396,-7.79883,4.41141},{-1.37939,-5.79102,4.41141},{1.5127,1.96484,-9.47058},{18.9058,-4.06738,-9.47058}};
	};
	class Land_Mil_ControlTower: Military {
		lootChance = 1;
		lootPos[] = {{10.0703,3.76367,-9.62869},{3.89844,3.43457,-5.46368},{1.75195,5.68164,-5.46368},{6.66113,-0.625488,-1.0687},{2.63965,-0.191406,-1.0687},{6.72266,3.23389,-1.0687}};
	};
	class Land_sara_domek_podhradi_1: Residential {
		lootPos[] = {{2.44629,-3.04883,-2.75808},{-4.83398,-3.44531,-2.75808},{-5.2259,1.2666,-2.75808}};
	};
	class Land_Budova4_in: Military {
		lootChance = 1;
		maxRoaming = 3;
		lootPos[] = {{-5.79492,2.49512,-1.88723},{-1.90234,2.25684,-1.88723},{1.76758,2.41406,-1.88723},{5.89063,-2.04785,-1.88723}};
	};
	class Land_SS_hangar: Military {
		lootChance = 1;
		maxRoaming = 3;
		lootPos[] = {{11.7344,-17.165,-5.87253},{-11.7158,-18.9541,-5.87253},{-14.2461,23.0439,-5.87253},{-14.5156,-18.9631,-5.87253}};
	};
	class Land_SS_hangarD: Land_SS_hangar {
		maxRoaming = 3;
	};
	class Land_A_Pub_01: Residential {
		zombieChance = 0.2;
		lootPos[] = {{1.83398,0.393799,-5.7462},{-1.76514,0.334473,-5.74622},{-6.62207,-6.55371,-5.74622},{-4.63623,-0.100586,-5.74622},{-5.75928,-3.05029,-5.74622},{-2.08203,0.922852,-1.76122},{-4.76514,-5.89087,-1.76122},{-6.94385,-1.9375,-1.76122},{-4.05225,-0.779785,-1.76122},{1.39795,-1.73779,-1.76122},{3.13867,-2.78564,-1.76122},{3.58301,-0.591309,-1.76122},{3.03027,-4.04346,-1.76122},{1.94092,3.18799,-1.76122},{-0.0961914,6.22437,-1.76122},{5.30469,7.55957,-1.76122},{6.72559,-2.72705,-1.76122},{2.56885,-4.6001,-5.74621},{4.06738,5.41406,-5.74622},{0.753418,2.2998,-5.74622}};
	};
	class Land_HouseB_Tenement: Office {
		lootPos[] = {{5.40576,9.89551,-20.7845},{5.99023,14.1689,-20.7845},{12.9609,14.0718,-20.7845},{14.6069,8.92383,-20.7845},{-2.75635,-2.08594,-20.7845}};
	};
	class Land_A_Hospital: hospital {
		lootChance = 1;
		lootPos[] = {{0.807129,-1.16333,-7.33966},{-7.23389,-2.63647,-7.33966},{-16.3687,-2.40381,-7.33966},{-12.2847,-3.19604,-7.33966},{4.40674,-3.50513,-7.33966},{-3.2666,-0.925293,-7.33966},{6.85693,-2.75146,-7.33966},{11.0151,-3.95435,-7.33966},{16.8198,-4.71118,-7.33966},{-1.12793,3.78418,-7.44939},{12.7476,0.142822,3.29184},{10.2661,-1.21558,3.29184}};
	};
	class Land_hospital: hospital {
		lootChance = 1;
		lootPos[] = {{2.02051,-4.4375,-1.4419},{2.96973,6.34473,-1.4419},{-3.73828,6.39941,-1.4419}};
	};
	class Land_Panelak: Office {
		lootPos[] = {{-2.76904,-6.26563,0.0714226},{-2.93896,-1.3916,0.0714226},{-5.42065,-3.13184,0.0714226},{-6.81128,-6.15527,0.0714221},{-4.00879,2.53027,0.0714226},{-0.730957,-3.20117,2.77144},{3.979,-7.08936,2.77144},{2.49609,2.93701,2.77144},{6.7373,1.63281,2.77144},{6.38525,-2.3916,2.77144},{6.80615,-5.77295,2.77144},{3.75122,-0.803711,2.77144},{-0.824219,1.86914,1.32865}};
	};
	class Land_Panelak2: Office {
		lootPos[] = {{-0.729492,-3.00635,-2.62859},{-0.764648,1.36279,-1.37137},{-0.30127,3.65039,1.32864},{0.73584,-3.22217,2.71097},{-0.630859,1.84766,4.05244},{3.68921,-7.33545,5.43665},{2.26807,2.94092,5.43665},{6.7002,2.68994,5.43665},{6.87842,-1.45947,5.43665},{6.09619,-5.94824,5.43665},{4.45508,-1.64893,5.43665},{2.76367,0.445801,5.43665}};
	};
	class Land_Shed_Ind02: Industrial {
		lootPos[] = {{-2.28174,-5.67236,-4.62599},{4.54529,9.6665,-4.62599},{4.41223,2.64941,-1.27954},{-0.437866,11.6943,-1.27641},{-3.44482,12.2119,-1.27704}};
	};
	class Land_Shed_wooden: Residential {
		lootPos[] = {{1.26807,-0.361328,-1.29153},{-0.342773,1.0293,-1.29153}};
	};
	class Land_Misc_PowerStation: Industrial {
		lootPos[] = {{4.09888,4.89746,-1.26743},{4.22827,-1.19873,-1.2681}};
	};
	class Land_HouseBlock_A1_1: Residential {
		lootPos[] = {{-3.52881,0.158936,-4.74365},{-3.56152,-2.33484,-4.73106}};
	};
	class Land_Shed_W01: Industrial {
		lootPos[] = {{-1.52637,-0.246094,-1.41129}};
	};
	class Land_HouseV_1I1: Residential {
		lootPos[] = {{0.181641,-1.97314,-2.82275}};
	};
	class Land_Tovarna2: Industrial {
		lootPos[] = {{-11.6309,7.2052,-5.55933},{-12.0674,2.56909,-5.55933},{-4.89355,6.6394,-5.55933},{-3.74121,2.90393,-3.89665},{-12.8672,1.44519,-2.23135},{-12.415,8.1311,-2.23135},{-12.7236,4.11255,-2.23135},{-3.99805,8.9801,-2.23156},{-7.33105,8.44214,-2.23156},{-4.55371,5.22644,-2.23156},{-11.4746,2.92114,1.66661},{-11.0703,8.13818,1.66661},{-4.67578,7.32678,1.62174},{-2.68262,3.44763,3.4243},{-13.1953,-8.95862,3.4243},{-8.80859,-0.443481,0.401226},{-12.1328,-0.149414,0.424298},{-2.03418,6.61414,-5.55933},{0.239258,1.72278,-5.59793},{6.22461,-3.948,-4.61825},{-6.39355,-8.24353,-5.59541},{-10.8496,-6.91211,-5.56572},{-6.77637,-1.73083,-5.56019}};
	};
	class Land_rail_station_big: Office {
		lootPos[] = {{-4.97266,4.55737,-4.98},{0.458496,4.85229,-4.98},{2.4624,2.21851,-4.98},{-1.32373,-2.60571,-4.98},{-3.29443,-0.121826,-4.98},{-1.07764,2.36646,-4.98},{7.46045,-3.41528,-4.98},{8.93408,3.1189,-4.98},{-8.16357,-5.12842,-4.98}};
	};
	class Land_Ind_Vysypka: Industrial {
		lootPos[] = {{0.486084,4.95459,-4.96861},{1.08032,-0.406738,-4.96801},{-0.0354004,-10.8208,-4.96686},{-5.07788,-16.4624,-4.96759},{-6.30298,2.92969,-4.96838},{-6.26685,26.7349,-4.9772},{1.64697,23.4038,-4.97097},{7.14575,3.92529,-4.96972},{4.63599,-12.1621,-4.96971}};
	};
	class Land_A_MunicipalOffice: Residential {
		zombieChance = 0.4;
		minRoaming = 3;
		maxRoaming = 9;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman"};
		lootChance = 1;
		lootPos[] = {{-4.66113,-6.27173,-18.429},{3.31641,-5.77417,-18.429},{-0.20752,-6.48682,-18.429},{-9.72412,-4.88745,-3.78903},{-9.57813,3.55615,-3.78903},{-7.16797,11.0737,-3.78903},{5.07422,11.1838,-3.78903},{9.3208,5.38623,-3.78903},{9.65332,-4.82056,-3.78903},{3.23535,-0.105957,-0.169027},{4.85205,-3.69019,-0.169027},{-0.80127,-7.89087,-0.169027},{-4.4082,-4.91772,-0.169027},{-4.90771,-2.23169,-0.169027}};
	};
	class Land_A_Office01: Office {
		lootPos[] = {{-2.50391,-2.46948,-4.528},{4.23535,-0.336914,-4.528},{4.11133,6.1123,-4.528},{0.242188,6.06299,-4.528},{4.31641,3.74023,-4.528},{5.08887,0.219727,-4.528},{11.6504,-1.5647,-4.528},{14.5811,-4.1123,-4.528},{13.8545,-0.749023,-4.528},{-7.7627,5.59082,-4.528},{1.81152,0.993408,-2.028},{4.93164,4.31982,-2.028},{1.18945,6.07031,-2.028},{2.23145,3.76563,-2.028},{-4.76367,-2.51221,-2.028},{-14.5596,-3.40723,-2.028},{-15.2705,5.92773,-2.028},{-10.9063,6.04175,0.472008},{-6.30762,3.30078,0.472006},{7.6416,6.38696,0.472001},{13.6729,6.5957,0.471999},{13.1924,-2.58691,0.471998},{3.0918,2.4375,6.20491},{-1.45703,-2.28369,6.20491},{-2.12988,4.51587,0.472005},{4.74414,-4.60156,-2.01486},{8.3457,-1.10718,-2.028},{9.94727,-3.74146,-2.028},{7.13867,-2.50732,-2.028},{12.8701,4.70923,-2.028},{15.3721,3.42383,-2.028}};
	};
	class Land_A_Office02: Office {
		lootPos[] = {{4.72266,-5.74121,-8.15108},{0.961426,-5.16943,-8.15076}};
	};
	class Land_A_BuildingWIP: Industrial {
		lootChance = 1;
		lootPos[] = {{-4.62573,4.52344,-6.45268},{-12.6377,0.494141,-6.49242},{-14.6023,-8.62842,-6.49961},{-16.0005,-9.80957,-6.50423},{-15.5627,-5.17725,-6.50523},{0.94458,-2.30371,-6.43043},{7.28125,3.20898,-6.44042},{9.75708,10.1138,-6.40827},{14.771,7.29688,-6.47756},{15.4504,-0.314941,-6.52979},{20.4895,2.31836,-4.52571},{17.3123,-3.1001,-2.53291},{10.707,-6.51611,-2.53255},{2.22534,-9.21582,-2.534},{-8.91943,-7.18896,-2.53313},{-16.3179,-8.35645,-2.53357},{-21.3064,-6.7915,-2.53182},{-21.6018,-1.79541,-2.53182},{-17.5808,6.14746,-2.53182},{-23.198,8.44727,-2.53182},{-17.1973,9.58594,-2.53182},{-4.99023,9.80957,-2.53182},{14.0872,7.44092,-2.52676},{10.5796,-6.84912,1.48116},{-3.19116,-2.49463,1.49403},{-13.8186,3.98975,1.49829},{-15.9502,-6.17383,1.48802},{-20.6997,-16.9761,1.50282},{-15.415,-13.3901,5.46683}};
	};
	class Land_Church_01: Church {
		lootPos[] = {{-6.92102,-0.382813,-4.21339}};
	};
	class Land_Church_03: Church {
		lootPos[] = {{5.15332,-6.96875,-14.3021},{-1.79053,-7.68018,-14.3021},{-0.0263672,-2.98438,-14.3021},{-0.00341797,2.02246,-14.3021},{5.49878,7.20508,-14.3021},{5.38892,3.4043,-14.3021},{3.23657,2.76074,-14.3021},{-1.51001,7.66309,-14.3021},{-7.6416,4.8125,-14.3021},{-6.56592,-4.59131,-14.3021},{9.552,2.22363,-13.7588},{9.93262,-3.85254,-13.7588}};
		hangPos[] = {{1.72168,-8.39771,-0.172569},{2.08838,-14.4236,-0.27536},{-13.7158,-10.4808,-0.795174},{-12.9072,-16.4105,-0.895065}};
	};
	class Land_Church_02: Church {
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Church_02a: Church {
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Church_05R: Church {
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Mil_Barracks_i: MilitarySpecial {
		lootPos[] = {{5.39038,-1.75684,-1.09824},{1.46753,-0.131836,-1.09824},{1.29395,-2.16211,-1.09824},{-1.78394,-0.168945,-1.09824},{-1.80615,-1.97656,-1.09824},{-4.77881,0.0488281,-1.09824},{-5.39258,-2.11816,-1.09824},{-5.47046,2.58105,-1.09824},{-8.32593,-0.144531,-1.09824},{-9.14966,-2.55859,-1.09824},{-1.95288,2.57715,-1.09824},{5.46362,2.57813,-1.09824}};
	};	//Qty: 2
	class Land_A_TVTower_Base: Industrial {
		lootPos[] = {{-0.982422,-1.92627,-2.21573},{-2.01782,-4.2417,-2.21918},{-0.759277,1.42139,-2.21573}};
	};
	class Land_Mil_House: Military {
		lootChance = 1;
		vehPos[] = {{13.439,3.25244,-5.71244,84}};
		lootPos[] = {{12.457,1.4248,-5.81439},{11.0391,4.85278,-5.81439},{13.667,4.42139,-5.81439}};
	};
	class Land_Misc_Cargo1Ao: Industrial {
		lootPos[] = {{0.48877,-1.61377,-1.09224},{0.012207,2.19263,-1.09224},{0.00976563,0.19043,-1.09224}};
	};
	class Land_Misc_Cargo1Bo: Industrial {
		lootPos[] = {{-0.322021,1.68555,-1.09222},{0.548584,-1.96289,-1.09222},{0.223389,-0.580078,-1.09222}};
	};
	class Land_Nav_Boathouse: Industrial {
		lootPos[] = {{5.27588,5.51953,3.9203},{5.49609,0.106445,4.19408},{1.68945,7.5166,3.80288},{-5.03613,6.19141,3.91093},{-5.63037,-1.27246,4.41481},{-6.98779,5.52441,3.9814},{-2.92236,9.2002,3.73014},{6.99463,7.80859,3.80663},{7.00342,-2.07422,4.31929}};
	};
	class Land_ruin_01: Residential {
		lootPos[] = {{-4.31934,-0.115234,-1.45578},{3.41309,0.270508,-1.71365},{3.00293,3.42773,-1.55765},{0.62207,-1.73779,-1.49048}};
	};
	class Land_wagon_box: Industrial {
		lootPos[] = {{0.542969,-3.89453,-0.776679},{0.47998,-0.608398,-0.776638},{0.515381,3.03857,-0.776592}};
	};
	class Land_HouseV2_04_interier: Residential {
		lootPos[] = {{7.49463,5.8374,-5.73902},{7.50989,-0.930176,-5.74176},{1.95532,4.16406,-5.73938},{2.10876,6.60645,-5.7386},{-2.30017,4.22461,-5.73936},{-5.13306,6.74365,-5.73856},{-4.74658,2.68457,-5.73985}};
	};
	class Land_HouseV2_01A: Residential {
		lootPos[] = {{-3.52881,-3.16895,-5.60346},{-1.62988,-3.25439,-5.66887}};
	};
	class Land_psi_bouda: Residential {
		maxRoaming = 4;
		lootPos[] = {{-1.77002,-1.45166,1.95942}};
	}; // Qty: 183
	class Land_KBud: Residential {
		zombieChance = 0.3;
		maxRoaming = 0;
		lootPos[] = {{-0.0170898,0.0114746,-0.66367}};
	}; // Qty: 90
	class Land_A_Castle_Bergfrit: Residential {
		lootPos[] = {{0.0185547,1.91602,-2.8364},{1.19141,-1.43848,-2.8364},{-2.36816,3.32275,-0.628571},{2.36133,3.86768,1.83972},{2.48438,-3.20557,3.85541},{-2.09473,-3.44873,6.31903},{-1.15918,3.13867,8.76691},{1.74707,1.26807,8.76691},{-0.540039,-2.35254,8.76691},{-1.62207,-4.27979,13.4801},{-2.23047,4.82471,16.856},{1.67578,-0.825195,16.8505}};
	}; // Qty: 3
	class Land_A_Castle_Stairs_A: Residential {
		lootPos[] = {{0.697998,-1.79395,0.726929},{8.3938,0.890625,0.875122},{8.17261,1.48926,7.02588}};
	}; // Qty: 3
	class Land_A_Castle_Gate: Residential {
		lootChance = 1;
		lootPos[] = {{0.244141,-4.48486,-3.14362},{-1.25293,2.98779,-3.07028},{4.50684,-3.31152,-2.94885},{4.55176,3.29834,-2.94858},{7.94824,1.4082,-2.91003}};
	}; // Qty: 3
	class Land_Mil_Barracks: Military {
		lootPos[] = {};
	}; // Qty: 8
	class Land_Mil_Barracks_L: Military {
		lootPos[] = {};
	}; // Qty: 5 
	class Land_Barn_W_02: Farm {
		lootPos[] = {{3.16504,5.56543,-2.31409},{3.35938,-0.152344,-2.31305},{2.53613,-5.89453,-2.30957},{-2.94629,-5.01367,-2.31006},{-2.84375,0.212891,-2.31183},{-5.63281,4.8291,-2.31363}};
	}; // Qty: 3
	class Land_sara_domek_zluty: Residential {
		maxRoaming = 1;
		lootPos[] = {{2.95703,3.00732,-2.4337},{7.06738,2.95557,-2.4337},{6.36304,-0.236328,-2.43375},{0.627686,-0.586914,-2.43387},{-0.659912,2.05371,-2.4337},{-2.77515,0.751953,-2.43372},{-5.07666,3.04492,-2.43361},{-6.17139,-2.33691,-2.43382},{-3.75293,-3.54688,-2.43382}};
	}; // Qty: 3
	class Land_HouseV_3I4: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 103
	class Land_Shed_W4: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 172
	class Land_HouseV_3I1: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 103
	class Land_HouseV_1L2: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 101
	class Land_HouseV_1T: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 90
	class Land_telek1: Industrial {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 4
	class Land_Rail_House_01: Industrial {
		lootPos[] = {{2.81152,3.61426,-1.28266},{-1.82178,3.10547,-1.28266},{0.487793,3.38867,-1.28266}};
	}; // Qty: 9
	class Land_HouseV_2I: Default {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 83
	class Land_Misc_deerstand: Military {
		zombieChance = 0.3;
		lootChance = 1;
		maxRoaming = 3;
		lootPos[] = {{-0.923828,-0.808594,1.08539},{0.419922,-0.237305,1.08539}};
	}; // Qty: 56

	class Camp: Military {
		lootChance = 1;
		maxRoaming = 1;
		lootPos[] = {{0.833252,-1.52246,-1.176},{0.38501,0.963867,-1.176}};
	}; // Qty: 1

	class CampEast: Military {
		maxRoaming = 1;
		lootChance = 1;
		lootPos[] = {{-1.05713,-1.80762,-1.31049},{0.627441,1.83398,-1.31049}};
	}; // Qty: 1
	class CampEast_EP1: Military {
		maxRoaming = 1;
		lootChance = 1;
		lootPos[] = {{-0.670898,0.95459,-1.31049},{1.68506,-2.43384,-1.31049},{-1.76318,-1.62646,-1.31049}};
	}; // Qty: 1

	class MASH: Hospital {
		maxRoaming = 1;
		lootChance = 1;
		lootPos[] = {{1.18213,-1.65039,-1.176},{0.24707,0.799316,-1.176}};
	}; // Qty: 1
	class MASH_EP1: MASH {};

	class UH1Wreck_DZ: Military {
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		zombieChance = 0.3;
		lootChance = 1;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
	};
	
	class UH60Wreck_DZ: Military {
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		zombieChance = 0.3;
		lootChance = 1;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
	};

	class USMC_WarfareBFieldhHospital: MASH {
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_soldier","z_soldier_heavy"};
		lootPos[] = {{-3.52246,-5.03931,1.14726},{2.36621,-4.52295,1.14786},{1.39063,-0.423096,1.14746},{1.14258,5.00952,1.1478},{3.7124,1.89795,1.14788}};
	}; // Qty: 1

	class Land_Ind_Shed_02_main: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
	}; // Qty: 283
	class HouseRoaming: Residential {
		lootChance = 1;
		zombieChance = 0.2;
		maxRoaming = 2;
	};
	class FarmRoaming: Farm {
		lootChance = 1;
		zombieChance = 0.4;
		maxRoaming = 2;
	};
	class Land_Shed_W03: HouseRoaming {}; // Qty: 206
	class Land_HouseV_1I3: HouseRoaming {}; // Qty: 117
	class Land_HouseV_1L1: HouseRoaming {}; // Qty: 97
	class Land_HouseV_1I2: HouseRoaming {};
	class Land_HouseV_2L: HouseRoaming {};
	class Land_HouseV_2T1: HouseRoaming {};
	class Land_houseV_2T2: HouseRoaming {};
	class Land_HouseV_3I2: HouseRoaming {};
	class Land_HouseV_3I3: HouseRoaming {};
	class Land_HouseBlock_A1: HouseRoaming {};
	class Land_HouseBlock_A1_2: HouseRoaming {};
	class Land_HouseBlock_A2: HouseRoaming {};
	class Land_HouseBlock_A2_1: HouseRoaming {};
	class Land_HouseBlock_A3: HouseRoaming {};
	class Land_HouseBlock_B1: HouseRoaming {};
	class Land_HouseBlock_B2: HouseRoaming {};
	class Land_HouseBlock_B3: HouseRoaming {};
	class Land_HouseBlock_B4: HouseRoaming {};
	class Land_HouseBlock_B5: HouseRoaming {};
	class Land_HouseBlock_B6: HouseRoaming {};
	class Land_HouseBlock_C1: HouseRoaming {};
	class Land_HouseBlock_C2: HouseRoaming {};
	class Land_HouseBlock_C3: HouseRoaming {};
	class Land_HouseBlock_C4: HouseRoaming {};
	class Land_HouseBlock_C5: HouseRoaming {};
	class Land_HouseV2_01B: HouseRoaming {}; // Qty: 20
	class Land_Misc_Cargo1D: HouseRoaming {}; // Qty: 29
	class Land_HouseV2_03: HouseRoaming {}; // Qty: 8
	class Land_Ind_Shed_01_end: HouseRoaming {}; // Qty: 266
	class Land_A_statue01: HouseRoaming {
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2","z_soldier","z_soldier_heavy","z_policeman"};
		minRoaming = 2;
		maxRoaming = 8;
	}; // Qty: 3
	class Land_Shed_W02: FarmRoaming {}; // Qty: 213
	//allow 
	class Grave: HouseRoaming {
		maxRoaming = 3;
	};
	class GraveCross1: HouseRoaming {	
		maxRoaming = 2;
	};
	class GraveCross2: HouseRoaming {	
		maxRoaming = 2;
	};
	class GraveCrossHelmet: Military {	
		maxRoaming = 4;
	};
};

/*
class Land_Mil_House: Default {}; // Qty: 5
*/

class CfgTownGeneratorSara {
	class EMLZ1 {
		position[] = {9084.665, 15606.263};
		size = 4250;

		class Object0 {
			Type="Land_Mil_Barracks";
			position[] = {8136.9282,17021.492,0.051464468};
			direction = 25.480267;
			SetZUp = 1;
		};
		class Object1 {
			Type="Land_Mil_Barracks_i";
			position[] = {8168.2139,17005.352,0.00034713745};
			direction = 205.83635;
			SetZUp = 1;
		};
		class Object2 {
			Type="Land_Mil_Barracks_L";
			position[] = {8153.1055,17056.426,0.00017166138};
			direction = 26.801596;
			SetZUp = 1;
		};
		class Object3 {
			Type="Land_Mil_Barracks_i";
			position[] = {8119.8521,16981.25,-0.01};
			direction = 385.50812;
			SetZUp = 1;
		};
		class Object4 {
			Type="Land_Mil_Barracks";
			position[] = {8128.2817,17000.977,0.051464468};
			direction = 25.676624;
			SetZUp = 1;
		};
		class Object5 {
			Type="Land_Mil_Barracks";
			position[] = {8150.4414,16966.789,0.051464468};
			direction = 205.51234;
			SetZUp = 1;
		};
		class Object6 {
			Type="Land_Mil_Barracks";
			position[] = {8159.6616,16986.334,0.051464468};
			direction = 205.36;
			SetZUp = 1;
		};
		class Object7 {
			Type="Land_Mil_Barracks";
			position[] = {8145.5571,17039.877,0.051464468};
			direction = 25.595608;
			SetZUp = 1;
		};
		class Object8 {
			Type="Land_Ind_Workshop01_L";
			position[] = {8203.2783,16998.881,0};
			direction = 207.50302;
			SetZUp = 1;
		};
		class Object9 {
			Type="Land_Ind_Workshop01_01";
			position[] = {8177.0244,16941.336,-0.01};
			direction = 27.142403;
			SetZUp = 1;
		};
		class Object10 {
			Type="Land_Hlidac_budka";
			position[] = {8195.9395,17054.516,-0.18657924};
			direction = -67.749222;
			SetZUp = 1;
		};
		class Object11 {
			Type="Land_Church_05R";
			position[] = {11383.008,14389.158,0.071709715};
			direction = 163.41272;
			SetZUp = 1;
		};
		class Object12 {
			Type="Land_dum_mesto2";
			position[] = {7756.0215,15795.915,0.15107772};
			direction = 89.105179;
			SetZUp = 1;
		};
		class Object13 {
			Type="Land_dum_mesto2";
			position[] = {7731.9771,15907.037,0.24343386};
			direction = 86.993599;
			SetZUp = 1;
		};
		class Object14 {
			Type="Land_dum_mesto2";
			position[] = {7578.7363,15651.114,0.19101964};
			direction = 73.088074;
			SetZUp = 1;
		};
		class Object15 {
			Type="Land_A_Pub_01";
			position[] = {12545.523,13417.728,-0.071453176};
			direction = -9.4623184;
			SetZUp = 1;
		};
	};
	//EMLZ1 Total: 16
	class EMLZ2 {
		position[] = {13508.527, 16287.334};
		size = 3000;

		class Object0 {
			Type="Land_Mil_Barracks_i";
			position[] = {12097.747,17527.721,0};
			direction = -91.046577;
			SetZUp = 1;
		};
		class Object1 {
			Type="Land_Mil_Barracks_L";
			position[] = {12146.324,17573.9,-0.12885633};
			direction = 0.01;
			SetZUp = 1;
		};
		class Object2 {
			Type="Land_Mil_Barracks";
			position[] = {12128.015,17572.066,0.018448371};
			direction = 90.346191;
			SetZUp = 1;
		};
		class Object3 {
			Type="Land_Church_05R";
			position[] = {12576.253,14966.313,0};
			direction = 0.01;
			SetZUp = 1;
		};
		class Object4 {
			Type="Land_A_Pub_01";
			position[] = {12599.477,15024.15,-0.094768927};
			direction = -0.22539687;
			SetZUp = 1;
		};
		class Object5 {
			Type="Land_a_stationhouse";
			position[] = {12240.402,17655.639,0.085686944};
			direction = 0.24140808;
			SetZUp = 1;
		};
		class Object6 {
			Type="Land_Misc_deerstand";
			position[] = {12135.249,17607.545,0};
			direction = -0.94769245;
			SetZUp = 1;
		};
		class Object7 {
			Type="Land_Mil_Barracks";
			position[] = {12170.726,17527.301,0.021541674};
			direction = 90.346191;
			SetZUp = 1;
		};
		class Object8 {
			Type="Land_Mil_Barracks";
			position[] = {12114.288,17526.564,0.024708863};
			direction = 90.346191;
			SetZUp = 1;
		};
		class Object9 {
			Type="Land_Mil_Barracks";
			position[] = {12130.278,17526.961,0.036623254};
			direction = 90.346191;
			SetZUp = 1;
		};
		class Object10 {
			Type="Land_Mil_Barracks";
			position[] = {12128.022,17550.482,0.024402335};
			direction = 90.346191;
			SetZUp = 1;
		};
		class Object11 {
			Type="Land_Mil_Barracks";
			position[] = {12168.463,17574.844,0.033299409};
			direction = 90.346191;
			SetZUp = 1;
		};
		class Object12 {
			Type="Land_Mil_Barracks";
			position[] = {12184.073,17574.959,0.018678762};
			direction = 90.346191;
			SetZUp = 1;
		};
		class Object13 {
			Type="Land_Mil_Barracks";
			position[] = {12184.242,17551.633,0.021324076};
			direction = 90.346191;
			SetZUp = 1;
		};
		class Object14 {
			Type="Land_Mil_Barracks_i";
			position[] = {12168.843,17550.996,0.00017166138};
			direction = -91.046577;
			SetZUp = 1;
		};
		class Object15 {
			Type="Land_Mil_Barracks_L";
			position[] = {12102.276,17572.033,-0.058267947};
			direction = 0.01;
			SetZUp = 1;
		};
		class Object16 {
			Type="Land_Mil_Barracks_L";
			position[] = {12148.973,17523.09,-0.058267947};
			direction = -179.67464;
			SetZUp = 1;
		};
		class Object17 {
			Type="Land_dum_mesto_in";
			position[] = {12404.832,17440.396,-0.058267947};
			direction = 180;
			SetZUp = 1;
		};
		class Object18 {
			Type="Land_Misc_deerstand";
			position[] = {12146.906,17607.535,-0.058267947};
			direction = -0.94769245;
			SetZUp = 1;
		};
		class Object19 {
			Type="Land_Mil_Barracks_L";
			position[] = {12175.879,17626.92,0.0001373291};
			direction = 0.01;
			SetZUp = 1;
		};
		class Object20 {
			Type="Land_Mil_Barracks_L";
			position[] = {12176.6,17670.105,-0.058267947};
			direction = 0.01;
			SetZUp = 1;
		};
		class Object21 {
			Type="Land_Mil_Barracks_L";
			position[] = {12247.037,17691.467,0.00022506714};
			direction = 0.01;
			SetZUp = 1;
		};
		class Object22 {
			Type="Land_Mil_Barracks_L";
			position[] = {12250.379,17756.918,-0.058267947};
			direction = 0.5422641;
			SetZUp = 1;
		};
		class Object23 {
			Type="Land_Mil_Barracks";
			position[] = {12176.559,17695.16,-0.058267947};
			direction = 0.55706161;
			SetZUp = 1;
		};
		class Object24 {
			Type="Land_Mil_Barracks";
			position[] = {12176.736,17716.307,-0.058267947};
			direction = 0.55706161;
			SetZUp = 1;
		};
		class Object25 {
			Type="Land_Mil_Barracks";
			position[] = {12177.082,17738.258,-0.058267947};
			direction = 0.55706161;
			SetZUp = 1;
		};
		class Object26 {
			Type="Land_Mil_Barracks";
			position[] = {12177.109,17758.725,-0.058267947};
			direction = 0.55706161;
			SetZUp = 1;
		};
		class Object27 {
			Type="Land_Mil_Barracks";
			position[] = {12212.731,17694.158,-0.058267947};
			direction = 0.55706161;
			SetZUp = 1;
		};
		class Object28 {
			Type="Land_Mil_Barracks";
			position[] = {12249.67,17716.127,-0.058267947};
			direction = 180.73732;
			SetZUp = 1;
		};
		class Object29 {
			Type="Land_Mil_Barracks";
			position[] = {12251.353,17780.057,0.000207901};
			direction = 0.55706161;
			SetZUp = 1;
		};
		class Object30 {
			Type="Land_Mil_Barracks";
			position[] = {12216.349,17780.246,-0.058267947};
			direction = 0.55706161;
			SetZUp = 1;
		};
		class Object31 {
			Type="Land_Mil_Barracks";
			position[] = {12250.265,17738.094,-0.058267947};
			direction = 180.64967;
			SetZUp = 1;
		};
		class Object32 {
			Type="HeliH";
			position[] = {12205.919,17747.469,-0.058267947};
			direction = 0.01;
			SetZUp = 1;
		};
		class Object33 {
			Type="CampEast";
			position[] = {12218.479,17759.818,-0.012296874};
			direction = 0.01;
			SetZUp = 1;
		};
		class Object34 {
			Type="Camp";
			position[] = {12219.451,17744.943,-0.033680286};
			direction = -87.940636;
			SetZUp = 1;
		};
		class Object35 {
			Type="CampEast";
			position[] = {12198.721,17758.707,0.017724983};
			direction = 0.01;
			SetZUp = 1;
		};
		class Object36 {
			Type="Land_Mil_Barracks";
			position[] = {12105.382,17761.873,0.018946506};
			direction = 0.55706161;
			SetZUp = 1;
		};
		class Object37 {
			Type="Land_Mil_Barracks";
			position[] = {12105.048,17743.348,0.01856111};
			direction = 0.55706161;
			SetZUp = 1;
		};
		class Object38 {
			Type="Land_Mil_Barracks_L";
			position[] = {12111.455,17654.377,-0.058267947};
			direction = 0.01;
			SetZUp = 1;
		};
		class Object39 {
			Type="Land_Mil_Barracks";
			position[] = {12112.417,17673.002,0.032361805};
			direction = 1.0278528;
			SetZUp = 1;
		};
		class Object40 {
			Type="Land_Mil_Barracks_L";
			position[] = {12066.741,17671.254,-0.0032323832};
			direction = 0.12843798;
			SetZUp = 1;
		};
		class Object41 {
			Type="Land_Shed_Ind02";
			position[] = {12522.335,17701.549,-0.058267947};
			direction = 89.30056;
			SetZUp = 1;
		};
		class Object42 {
			Type="Land_Shed_Ind02";
			position[] = {12523.563,17739.436,0.013197624};
			direction = 91.920059;
			SetZUp = 1;
		};
		class Object43 {
			Type="Land_Ind_Workshop01_04";
			position[] = {11881.938,15369.988,-0.058267947};
			direction = -78.659843;
			SetZUp = 1;
		};
		class Object44 {
			Type="Land_Ind_Workshop01_02";
			position[] = {11871.147,15433.208,-0.021213137};
			direction = -77.484657;
			SetZUp = 1;
		};
		class Object45 {
			Type="Land_Mil_Barracks";
			position[] = {12153.366,17551.842,0.036696579};
			direction = 90.346191;
			SetZUp = 1;
		};
		class Object46 {
			Type="Land_Mil_Barracks";
			position[] = {11900.317,15406.305,0.0094899554};
			direction = 99.815247;
			SetZUp = 1;
		};
		class Object47 {
			Type="Land_Mil_Barracks_i";
			position[] = {11886.834,15408.376,-0.058267947};
			direction = 460.09265;
			SetZUp = 1;
		};
		class Object48 {
			Type="Land_Mil_Barracks";
			position[] = {11873.992,15411.84,0};
			direction = 100.17564;
			SetZUp = 1;
		};
		class Object49 {
			Type="Land_Mil_Barracks_L";
			position[] = {11882.297,15454.726,-0.058267947};
			direction = -168.94826;
			SetZUp = 1;
		};
		class Object50 {
			Type="Land_Mil_Barracks_L";
			position[] = {11850.465,15375.853,-0.058267947};
			direction = 10.883802;
			SetZUp = 1;
		};
		class Object51 {
			Type="Land_Mil_Barracks";
			position[] = {11954.109,15351.448,0.018874003};
			direction = 190.63617;
			SetZUp = 1;
		};
		class Object52 {
			Type="Land_Mil_Barracks_i";
			position[] = {11950.703,15335.005,0.00012207031};
			direction = 550.55267;
			SetZUp = 1;
		};
		class Object53 {
			Type="Land_Mil_Barracks";
			position[] = {11947.878,15317.584,0.015664864};
			direction = 190.27579;
			SetZUp = 1;
		};
		class Object54 {
			Type="Land_Ind_Workshop01_04";
			position[] = {11956.812,15374.776,-0.058267947};
			direction = -78.659843;
			SetZUp = 1;
		};
		class Object55 {
			Type="Land_Ind_Workshop01_01";
			position[] = {12643.664,15012.067,-0.058020923};
			direction = 23.152876;
			SetZUp = 1;
		};
		class Object56 {
			Type="Land_Ind_Workshop01_L";
			position[] = {12373.518,15002.837,0.0075658699};
			direction = 180.52242;
			SetZUp = 1;
		};
		class Object57 {
			Type="Land_Ind_Workshop01_02";
			position[] = {12354.326,14980.562,0.079838082};
			direction = -90.072746;
			SetZUp = 1;
		};
		class Object58 {
			Type="Land_A_GeneralStore_01";
			position[] = {12505.943,14898.862,-0.11913754};
			direction = 3.1111417;
			SetZUp = 1;
		};
		class Object59 {
			Type="Land_HouseV_1I4";
			position[] = {12392.339,14874.766,0.41723973};
			direction = 119.51625;
			SetZUp = 1;
		};
		class Object60 {
			Type="Land_Barn_W_02";
			position[] = {12267.593,14943.355,0.00019836426};
			direction = 0.65209574;
			SetZUp = 1;
		};
		class Object61 {
			Type="Land_Barn_W_01";
			position[] = {12301.173,14919.947,-0.058267947};
			direction = -0.044560127;
			SetZUp = 1;
		};
		class Object62 {
			Type="Land_a_stationhouse";
			position[] = {12754.386,15012.405,0.18223022};
			direction = -9.2709045;
			SetZUp = 1;
		};
		class Object63 {
			Type="Land_Ind_Workshop01_04";
			position[] = {13990.789,16442.723,-0.058267947};
			direction = -178.7836;
			SetZUp = 1;
		};
		class Object64 {
			Type="Land_Ind_Workshop01_01";
			position[] = {14007.982,16417.313,-0.036741082};
			direction = -170.46751;
			SetZUp = 1;
		};
		class Object65 {
			Type="Land_A_FuelStation_Build";
			position[] = {12572.716,15151.308,0};
			direction = -51.519573;
			SetZUp = 1;
		};
		class Object66 {
			Type="Land_Ind_TankSmall2";
			position[] = {12569.632,15148.051,-0.085158229};
			direction = -141.53276;
			SetZUp = 1;
		};
		class Object67 {
			Type="Land_A_FuelStation_Feed";
			position[] = {12577.834,15151.841,-0.054911073};
			direction = -230.25858;
			SetZUp = 1;
		};
		class Object68 {
			Type="Land_Ind_Workshop01_02";
			position[] = {12730.648,15095.472,0.073698193};
			direction = -150.61859;
			SetZUp = 1;
		};
	};
	//EMLZ2 Total: 69
	class EMLZ3 {
		position[] = {17841.162, 13019.341};
		size = 2750;

		class Object0 {
			Type="Land_A_GeneralStore_01a";
			position[] = {17374.699,14197.158,-0.0001220};
			direction = -1.1227432;
			SetZUp = 1;
		};
		class Object1 {
			Type="Land_A_Hospital";
			position[] = {17105.551,14340.854,-0.19380733};
			direction = -8.8722639;
			SetZUp = 1;
		};
		class Object2 {
			Type="Land_Mil_Barracks_i";
			position[] = {17800.656,12404.806,-0.0001220};
			direction = -179.72816;
			SetZUp = 1;
		};
		class Object3 {
			Type="Land_Mil_Barracks_L";
			position[] = {17774.535,12366.071,-0.0001220};
			direction = 0.001;
			SetZUp = 1;
		};
		class Object4 {
			Type="Land_Mil_Barracks_L";
			position[] = {17820.105,12419.598,-0.0001220};
			direction = 0.001;
			SetZUp = 1;
		};
		class Object5 {
			Type="Land_Mil_Barracks_L";
			position[] = {17774.93,12402.717,-0.0001220};
			direction = 0.001;
			SetZUp = 1;
		};
		class Object6 {
			Type="Land_Mil_Barracks";
			position[] = {17776.217,12386.715,0.023590565};
			direction = 0.55706161;
			SetZUp = 1;
		};
		class Object7 {
			Type="Land_Mil_Barracks";
			position[] = {17799.146,12422.35,0.021566618};
			direction = 180.04794;
			SetZUp = 1;
		};
		class Object8 {
			Type="Land_Mil_Barracks";
			position[] = {17800.506,12368.888,0.033044424};
			direction = 180.51045;
			SetZUp = 1;
		};
		class Object9 {
			Type="Land_Mil_Barracks";
			position[] = {17800.926,12386.839,0.036740869};
			direction = 180.528;
			SetZUp = 1;
		};
		class Object10 {
			Type="Land_Mil_Barracks";
			position[] = {17776.561,12421.918,0.024095722};
			direction = 0.59525597;
			SetZUp = 1;
		};
		class Object11 {
			Type="Land_Mil_Barracks";
			position[] = {17823.809,12405.631,0.021194113};
			direction = 180.05901;
			SetZUp = 1;
		};
		class Object12 {
			Type="Land_Mil_Barracks";
			position[] = {17823.139,12387.69,0.024265077};
			direction = 180.74718;
			SetZUp = 1;
		};
		class Object13 {
			Type="Land_Mil_Barracks";
			position[] = {17823.221,12368.883,0.018495725};
			direction = 179.87558;
			SetZUp = 1;
		};
		class Object14 {
			Type="Land_Mil_ControlTower";
			position[] = {19301.592,13900.779,-0.0001220};
			direction = -138.96796;
			SetZUp = 1;
		};
		class Object15 {
			Type="Land_Mil_Barracks";
			position[] = {19303.412,13982.679,0.015481509};
			direction = 131.23599;
			SetZUp = 1;
		};
		class Object16 {
			Type="Land_Mil_Barracks_i";
			position[] = {19290.621,13995.508,-0.0001220};
			direction = -227.98196;
			SetZUp = 1;
		};
		class Object17 {
			Type="Land_Mil_Barracks";
			position[] = {19323.928,14006.171,-0.00010490417};
			direction = 131.23599;
			SetZUp = 1;
		};
		class Object18 {
			Type="Land_Mil_Barracks";
			position[] = {19307.992,14019.728,0.00017356873};
			direction = 131.23599;
			SetZUp = 1;
		};
		class Object19 {
			Type="Land_Mil_Barracks";
			position[] = {19292.5,14033.305,0.070699908};
			direction = 131.23599;
			SetZUp = 1;
		};
		class Object20 {
			Type="Land_Mil_Barracks";
			position[] = {19256.492,14023.703,0.04523997};
			direction = 131.23599;
			SetZUp = 1;
		};
		class Object21 {
			Type="Land_Mil_Barracks_i";
			position[] = {19159.248,13950.89,-0.027695656};
			direction = -408.3688;
			SetZUp = 1;
		};
		class Object22 {
			Type="Land_Mil_Barracks";
			position[] = {19227.32,14051.441,0.062514454};
			direction = 131.23599;
			SetZUp = 1;
		};
		class Object23 {
			Type="Land_Mil_Barracks";
			position[] = {19277.008,14047.194,0.22022116};
			direction = 131.23599;
			SetZUp = 1;
		};
		class Object24 {
			Type="Land_Mil_Barracks";
			position[] = {19246.428,14072.944,0.090966634};
			direction = 131.23599;
			SetZUp = 1;
		};
		class Object25 {
			Type="Land_Mil_Barracks_L";
			position[] = {19240.336,14036.858,-0.0001220};
			direction = 43.097996;
			SetZUp = 1;
		};
		class Object26 {
			Type="Land_Mil_Barracks_L";
			position[] = {19270.477,14008.193,0.00011253357};
			direction = 43.097996;
			SetZUp = 1;
		};
		class Object27 {
			Type="Land_Mil_Barracks";
			position[] = {19260.592,14061.34,0.11987779};
			direction = 131.23599;
			SetZUp = 1;
		};
		class Object28 {
			Type="Land_Ind_Workshop01_04";
			position[] = {19236.166,13599.637,-0.0001220};
			direction = -178.7836;
			SetZUp = 1;
		};
		class Object29 {
			Type="Land_stodola_open";
			position[] = {17762.678,12142.111,-0.050569069};
			direction = -197.38129;
			SetZUp = 1;
		};
	};
	//EMLZ3 Total: 30
	class EMLZ4 {
		position[] = {16090.729, 9587.1191};
		size = 2000;

		class Object0 {
			Type="Land_Mil_Barracks";
			position[] = {17544.205,9566.8457,0.027192807};
			direction = 449.38632;
			SetZUp = 1;
		};
		class Object1 {
			Type="Land_Mil_Barracks";
			position[] = {17566.342,9568.123,0.039313238};
			direction = 450.23093;
			SetZUp = 1;
		};
		class Object2 {
			Type="Land_Mil_Barracks";
			position[] = {17596.912,9567.7393,0.044327673};
			direction = 450.26733;
			SetZUp = 1;
		};
		class Object3 {
			Type="Land_Mil_Barracks_i";
			position[] = {17582.838,9566.7451,0};
			direction = -269.85599;
			SetZUp = 1;
		};
		class Object4 {
			Type="Land_A_Pub_01";
			position[] = {15607.009,8834.6787,-0.028606441};
			direction = 88.496819;
			SetZUp = 1;
		};
		class Object5 {
			Type="Land_Barn_W_02";
			position[] = {15543.469,9102.4639,-0.25422546};
			direction = 76.286629;
			SetZUp = 1;
		};
		class Object6 {
			Type="Land_Barn_W_01";
			position[] = {15504.23,8880.8193,0.0076356526};
			direction = -41.173008;
			SetZUp = 1;
		};
		class Object7 {
			Type="Land_Barn_W_02";
			position[] = {14252.411,9380.9033,-0.27727792};
			direction = 43.790421;
			SetZUp = 1;
		};
		class Object8 {
			Type="Land_dum_mesto2";
			position[] = {14389.838,9440.582,0.30637202};
			direction = 84.818588;
			SetZUp = 1;
		};
	};
	//EMLZ4 Total: 9
	class EMLZ5 {
		position[] = {12505.881, 10952.824};
		size = 2000;

		class Object0 {
			Type="Land_Ind_Workshop01_01";
			position[] = {13751.567,11507.75,0.00010299683};
			direction = 181.80162;
			SetZUp = 1;
		};
		class Object1 {
			Type="Land_Ind_Workshop01_L";
			position[] = {13780.049,11542.577,-0.01};
			direction = 180.52242;
			SetZUp = 1;
		};
		class Object2 {
			Type="Land_A_FuelStation_Build";
			position[] = {13501.751,11502.97,0.028872779};
			direction = 112.26083;
			SetZUp = 1;
		};
		class Object3 {
			Type="Land_A_FuelStation_Shed";
			position[] = {13492.592,11520.933,-0.01};
			direction = 21.719521;
			SetZUp = 1;
		};
		class Object4 {
			Type="Land_Ind_TankSmall2";
			position[] = {13504.441,11506.611,-0.01};
			direction = 22.400288;
			SetZUp = 1;
		};
		class Object5 {
			Type="Land_A_FuelStation_Feed";
			position[] = {13492.443,11520.922,0.24333251};
			direction = -67.042542;
			SetZUp = 1;
		};
		class Object6 {
			Type="Land_A_FuelStation_Feed";
			position[] = {13486.119,11523.667,0.46025801};
			direction = -66.478195;
			SetZUp = 1;
		};
		class Object7 {
			Type="Land_A_FuelStation_Feed";
			position[] = {13499.003,11518.379,0.044364944};
			direction = -66.478195;
			SetZUp = 1;
		};
		class Object8 {
			Type="Land_Mil_Barracks";
			position[] = {12944.033,11302.412,0.01768269};
			direction = 321.08997;
			SetZUp = 1;
		};
		class Object9 {
			Type="Land_Mil_Barracks";
			position[] = {12953.717,11288.011,0.022969451};
			direction = 320.11044;
			SetZUp = 1;
		};
		class Object10 {
			Type="Land_Mil_Barracks";
			position[] = {12980.921,11328.579,0.02366706};
			direction = 500.07446;
			SetZUp = 1;
		};
		class Object11 {
			Type="Land_Mil_Barracks";
			position[] = {14587.67,10622.658,0.0053548296};
			direction = 129.64299;
			SetZUp = 1;
		};
		class Object12 {
			Type="Land_Mil_Barracks";
			position[] = {14601.24,10614.478,0.018033851};
			direction = 129.75981;
			SetZUp = 1;
		};
		class Object13 {
			Type="Land_Mil_Barracks";
			position[] = {14613.225,10604.556,0.035364479};
			direction = 130.07422;
			SetZUp = 1;
		};
		class Object14 {
			Type="Land_Mil_Barracks";
			position[] = {14625.083,10594.835,-0.11684123};
			direction = 129.80251;
			SetZUp = 1;
		};
		class Object15 {
			Type="Land_dum_mesto2";
			position[] = {14514.636,10794.045,-0.041812684};
			direction = 127.60325;
			SetZUp = 1;
		};
		class Object16 {
			Type="Land_A_Pub_01";
			position[] = {14446.84,10867.439,-0.072935879};
			direction = -149.56293;
			SetZUp = 1;
		};
	};
	//EMLZ5 Total: 17
	class EMLZ6 {
		position[] = {9737.9395, 7844.0952};
		size = 1200;

		class Object0 {
			Type="Land_A_Pub_01";
			position[] = {14111.281,12495.537,-0.11815493};
			direction = -91.763176;
			SetZUp = 1;
		};
		class Object1 {
			Type="Land_Shed_Ind02";
			position[] = {13698.369,12626.954,0.10880119};
			direction = 177.29395;
			SetZUp = 1;
		};
		class Object2 {
			Type="Land_Shed_Ind02";
			position[] = {13718.194,12628.456,0.18947728};
			direction = 176.95952;
			SetZUp = 1;
		};
		class Object3 {
			Type="Land_dum_mesto_in";
			position[] = {13889.361,12473.986,0.040347431};
			direction = -713.91479;
			SetZUp = 1;
		};
		class Object4 {
			Type="Land_dum_mesto2";
			position[] = {14073.06,12473.59,0.0033320296};
			direction = 111.188;
			SetZUp = 1;
		};
		class Object5 {
			Type="Land_dum_mesto2";
			position[] = {14052.706,12466.291,0.0033244151};
			direction = 112.50559;
			SetZUp = 1;
		};
		class Object6 {
			Type="Land_dum_mesto2";
			position[] = {14032.231,12462.116,0.16329072};
			direction = 111.09888;
			SetZUp = 1;
		};
		class Object7 {
			Type="Land_dum_mesto2";
			position[] = {14095.471,12479.883,0.0033740061};
			direction = 111.09888;
			SetZUp = 1;
		};
		class Object8 {
			Type="Land_A_GeneralStore_01a";
			position[] = {14383.14,12589.358,0.051491007};
			direction = 51.201694;
			SetZUp = 1;
		};
		class Object9 {
			Type="Land_a_stationhouse";
			position[] = {14451.107,12585.376,0.055913057};
			direction = -109.08717;
			SetZUp = 1;
		};
		class Object10 {
			Type="Land_rail_station_big";
			position[] = {14107.46,12537.889,-0.044390291};
			direction = -89.815132;
			SetZUp = 1;
		};
		class Object11 {
			Type="Land_dum_mesto2";
			position[] = {14160.312,12534.815,0.00016021729};
			direction = 90.176277;
			SetZUp = 1;
		};
		class Object12 {
			Type="Land_dum_mesto_in";
			position[] = {14154.884,12501.169,0.0058159484};
			direction = 344.83966;
			SetZUp = 1;
		};
		class Object13 {
			Type="HeliH";
			position[] = {14268.603,12716.016,-0.01};
			direction = 0.01;
			SetZUp = 1;
		};
		class Object14 {
			Type="Camp";
			position[] = {14277.733,12731.597,-0.01};
			direction = -101.5187;
			SetZUp = 1;
		};
		class Object15 {
			Type="Camp";
			position[] = {14278.93,12725.351,-0.01};
			direction = -102.18977;
			SetZUp = 1;
		};
		class Object16 {
			Type="Camp";
			position[] = {14280.389,12718.989,-0.01};
			direction = -102.56635;
			SetZUp = 1;
		};
		class Object17 {
			Type="Camp";
			position[] = {14281.788,12712.48,-0.01};
			direction = -102.56635;
			SetZUp = 1;
		};
		class Object18 {
			Type="Camp";
			position[] = {14283.073,12706.212,-0.01};
			direction = -102.56635;
			SetZUp = 1;
		};
		class Object19 {
			Type="CampEast";
			position[] = {14254.024,12729.128,-0.01};
			direction = 259.13318;
			SetZUp = 1;
		};
		class Object20 {
			Type="CampEast";
			position[] = {14260.703,12698.821,-0.01};
			direction = -100.77284;
			SetZUp = 1;
		};
		class Object21 {
			Type="Camp";
			position[] = {14260.153,12707.241,-0.01};
			direction = 78.151505;
			SetZUp = 1;
		};
		class Object22 {
			Type="Camp";
			position[] = {14258.528,12713.731,-0.01};
			direction = 78.151505;
			SetZUp = 1;
		};
		class Object23 {
			Type="Camp";
			position[] = {14257.203,12719.968,-0.01};
			direction = 78.151505;
			SetZUp = 1;
		};
		class Object24 {
			Type="Land_A_Pub_01";
			position[] = {14247.062,12663.457,-0.05721648};
			direction = -261.4249;
			SetZUp = 1;
		};
		class Object25 {
			Type="Land_Ind_Workshop01_L";
			position[] = {13936.005,12611.745,0.0022899311};
			direction = 232.67963;
			SetZUp = 1;
		};
		class Object26 {
			Type="Land_Ind_Workshop01_01";
			position[] = {13923.075,12686.629,0.0068891854};
			direction = -133.58383;
			SetZUp = 1;
		};
		class Object27 {
			Type="Land_A_BuildingWIP";
			position[] = {13813.914,12821.889,0.28120998};
			direction = -264.93076;
			SetZUp = 1;
		};
		class Object28 {
			Type="Land_A_Office01";
			position[] = {14028.728,12605.14,-0.14629401};
			direction = 97.814407;
			SetZUp = 1;
		};
		class Object29 {
			Type="Land_A_Hospital";
			position[] = {14092.694,12442.81,-0.0099999998};
			direction = 153.99374;
			SetZUp = 1;
		};
		class Object30 {
			Type="Land_dum_mesto2";
			position[] = {14326.09,12454.547,0.0002746582};
			direction = 180.20685;
			SetZUp = 1;
		};
		class Object31 {
			Type="Land_A_Pub_01";
			position[] = {14250.317,12637.221,-0.0099999998};
			direction = -169.84204;
			SetZUp = 1;
		};
	};
	//EMLZ6 Total: 32
	class EMLZ7 {
		position[] = {13373.855, 8715.9863};
		size = 1500;

		class Object0 {
			Type="Land_A_FuelStation_Build";
			position[] = {13761.046,9363.1738,0.071678549};
			direction = 129.7719;
			SetZUp = 1;
		};
		class Object1 {
			Type="Land_A_FuelStation_Shed";
			position[] = {13758.384,9381.1289,-0.022305794};
			direction = 39.23053;
			SetZUp = 1;
		};
		class Object2 {
			Type="Land_Ind_TankSmall2";
			position[] = {13764.708,9365.832,-0.085744448};
			direction = 39.911297;
			SetZUp = 1;
		};
		class Object3 {
			Type="Land_A_FuelStation_Feed";
			position[] = {13758.242,9381.1592,0.1973476};
			direction = -49.531528;
			SetZUp = 1;
		};
		class Object4 {
			Type="Land_A_FuelStation_Feed";
			position[] = {13753.038,9385.6846,0.24049598};
			direction = -48.967182;
			SetZUp = 1;
		};
		class Object5 {
			Type="Land_A_FuelStation_Feed";
			position[] = {13763.732,9376.7627,0.27972361};
			direction = -48.967182;
			SetZUp = 1;
		};
		class Object6 {
			Type="Land_A_GeneralStore_01";
			position[] = {13519.101,9206.6807,-0.11402529};
			direction = -136.02129;
			SetZUp = 1;
		};
		class Object7 {
			Type="Land_A_Pub_01";
			position[] = {13544.621,9208.8955,-0.015};
			direction = -15.523249;
			SetZUp = 1;
		};
		class Object8 {
			Type="Land_A_Pub_01";
			position[] = {13499.382,8993.8311,-0.059361249};
			direction = 140.1241;
			SetZUp = 1;
		};
		class Object9 {
			Type="Land_dum_mesto2";
			position[] = {13410.084,9055.4961,-0.01};
			direction = 139.88057;
			SetZUp = 1;
		};
		class Object10 {
			Type="Land_dum_mesto2";
			position[] = {13485.535,8892.9492,-0.01};
			direction = 230.83627;
			SetZUp = 1;
		};
		class Object11 {
			Type="Land_dum_mesto_in";
			position[] = {13688.798,8981.7324,0.04808744};
			direction = 572.72217;
			SetZUp = 1;
		};
		class Object12 {
			Type="Land_Ind_Workshop01_L";
			position[] = {13639.029,9192.3057,-0.067450002};
			direction = 38.940308;
			SetZUp = 1;
		};
		class Object13 {
			Type="Land_Ind_Workshop01_01";
			position[] = {13622.713,9144.2354,0.00012207031};
			direction = 81.517326;
			SetZUp = 1;
		};
		class Object14 {
			Type="Land_Ind_Workshop01_01";
			position[] = {13599.793,9074.0254,0.0001411438};
			direction = 138.82314;
			SetZUp = 1;
		};
		class Object15 {
			Type="Land_Ind_Workshop01_04";
			position[] = {13583.15,9123.3457,-0.01};
			direction = -222.46309;
			SetZUp = 1;
		};
		class Object16 {
			Type="Land_ladderEP1";
			position[] = {13182.618,8898.6982,-0.40864643};
			direction = 0.01;
			SetZUp = 1;
		};
		class Object17 {
			Type="Land_ladderEP1";
			position[] = {13176.354,8909.0195,-0.46033561};
			direction = 179.91095;
			SetZUp = 1;
		};
		class Object18 {
			Type="Land_ladderEP1";
			position[] = {13146.497,8984.6514,-0.13116965};
			direction = 178.64415;
			SetZUp = 1;
		};
		class Object19 {
			Type="Land_ladderEP1";
			position[] = {12962.374,8752.0498,-0.01};
			direction = 30.402079;
			SetZUp = 1;
		};
		class Object20 {
			Type="Land_A_GeneralStore_01";
			position[] = {12990.772,8483.0664,-0.093081169};
			direction = 89.114182;
			SetZUp = 1;
		};
		class Object21 {
			Type="Land_Mil_ControlTower";
			position[] = {12469.941,8511.7705,-0.0099999998};
			direction = -0.047732286;
			SetZUp = 1;
		};
		class Object22 {
			Type="Land_A_Hospital";
			position[] = {12728.689,8089.4097,0.00019454956};
			direction = 290.91562;
			SetZUp = 1;
		};
		class Object23 {
			Type="Land_Ind_Workshop01_L";
			position[] = {12753.248,8075.9043,-0.065661252};
			direction = 22.619411;
			SetZUp = 1;
		};
		class Object24 {
			Type="Land_Ind_Workshop01_01";
			position[] = {12769.159,8072.3403,0};
			direction = -429.39523;
			SetZUp = 1;
		};
		class Object25 {
			Type="Land_ladderEP1";
			position[] = {12970.898,8870.3271,-0.49671781};
			direction = 541.30365;
			SetZUp = 1;
		};
	};
	//EMLZ7 Total: 26
	class WMLZ1 {
		position[] = {7483.5483, 8740.6846};
		size = 2750;

		class Object0 {
			Type="Land_Ind_Workshop01_01";
			position[] = {8113.8984,9312.7178,-0.01};
			direction = -90.368271;
			SetZUp = 1;
		};
		class Object1 {
			Type="Land_Ind_Workshop01_01";
			position[] = {8055.6089,9320.1982,-0.01};
			direction = -4.136138;
			SetZUp = 1;
		};
		class Object2 {
			Type="Land_Ind_Workshop01_01";
			position[] = {8197.1445,9561.4697,0};
			direction = 37.739014;
			SetZUp = 1;
		};
		class Object3 {
			Type="Land_Ind_Workshop01_01";
			position[] = {8238.4873,9510.1123,0.00010585785};
			direction = -39.469994;
			SetZUp = 1;
		};
		class Object4 {
			Type="Land_Ind_Workshop01_01";
			position[] = {8464.4512,9445.4727,0.048190281};
			direction = 24.297029;
			SetZUp = 1;
		};
	};
	//WMLZ1 Total: 5
	class WMLZ2 {
		position[] = {10256.928, 10019.207};
		size = 1850;

		class Object0 {
			Type="Land_Mil_ControlTower";
			position[] = {9903.9619,10080.465,-0.001};
			direction = -0.46591365;
			SetZUp = 1;
		};
		class Object1 {
			Type="Land_Ind_Workshop01_L";
			position[] = {9463.9111,9911.6846,-0.040945131};
			direction = 90.43174;
			SetZUp = 1;
		};
		class Object2 {
			Type="Land_Ind_Workshop01_01";
			position[] = {9461.2178,9838.8652,0.00012207031};
			direction = 92.108932;
			SetZUp = 1;
		};
		class Object3 {
			Type="Land_Ind_Workshop01_L";
			position[] = {9552.2695,9885.9229,-0.043993518};
			direction = 90.43174;
			SetZUp = 1;
		};
		class Object4 {
			Type="Land_Shed_Ind02";
			position[] = {9553.4814,9866.9473,0.12183861};
			direction = 89.769318;
			SetZUp = 1;
		};
		class Object5 {
			Type="Land_Shed_Ind02";
			position[] = {9553.4834,9850.374,0.15376762};
			direction = 90.753822;
			SetZUp = 1;
		};
		class Object6 {
			Type="Land_A_Hospital";
			position[] = {10630.989,9324.4883,-0.001};
			direction = 359.89655;
			SetZUp = 1;
		};
		class Object7 {
			Type="Land_A_GeneralStore_01";
			position[] = {10750.721,9330.2539,0.22309197};
			direction = -563.96234;
			SetZUp = 1;
		};
		class Object8 {
			Type="Land_Ind_Workshop01_L";
			position[] = {10141.276,9372.0039,0.00018310547};
			direction = 0.56901193;
			SetZUp = 1;
		};
		class Object9 {
			Type="Land_Ind_Workshop01_01";
			position[] = {10756.292,9068.9951,-0.001};
			direction = -69.280823;
			SetZUp = 1;
		};
		class Object10 {
			Type="Land_Ind_Workshop01_01";
			position[] = {10614.809,9743.3994,-0.001};
			direction = -137.04869;
			SetZUp = 1;
		};
		class Object11 {
			Type="Land_Ind_Workshop01_01";
			position[] = {10495.926,9690.1719,-0.001};
			direction = -184.29146;
			SetZUp = 1;
		};
		class Object12 {
			Type="Land_Ind_Workshop01_01";
			position[] = {10289.925,9508.9063,-0.001};
			direction = -266.4577;
			SetZUp = 1;
		};
		class Object13 {
			Type="Land_Ind_Workshop01_01";
			position[] = {10378.771,9442.6416,-0.001};
			direction = -270.23721;
			SetZUp = 1;
		};
		class Object14 {
			Type="Land_Ind_Workshop01_01";
			position[] = {10386.929,9499.6748,-0.001};
			direction = -179.45338;
			SetZUp = 1;
		};
		class Object15 {
			Type="Land_Ind_Workshop01_01";
			position[] = {10567.635,9664.4453,-0.001};
			direction = -90.368271;
			SetZUp = 1;
		};
		class Object16 {
			Type="Land_Ind_Workshop01_01";
			position[] = {10658.138,9662.9082,-0.001};
			direction = -172.70374;
			SetZUp = 1;
		};
		class Object17 {
			Type="Land_Ind_Workshop01_01";
			position[] = {10604.515,9262.4912,0};
			direction = -359.81195;
			SetZUp = 1;
		};
		class Object18 {
			Type="Land_Ind_Workshop01_01";
			position[] = {10103.772,9357.8105,-0.001};
			direction = -178.17758;
			SetZUp = 1;
		};
		class Object19 {
			Type="Land_Ind_Workshop01_L";
			position[] = {10709.068,8930.7793,0};
			direction = -89.273499;
			SetZUp = 1;
		};
		class Object20 {
			Type="Land_Ind_Workshop01_L";
			position[] = {10597.076,8931.3652,-0.001};
			direction = -0.27332029;
			SetZUp = 1;
		};
		class Object21 {
			Type="Land_Ind_Workshop01_04";
			position[] = {10686.805,8928.1055,-0.001};
			direction = -270.28156;
			SetZUp = 1;
		};
		class Object22 {
			Type="Land_Ind_Workshop01_04";
			position[] = {10036.982,9411.1621,-0.001};
			direction = -178.7836;
			SetZUp = 1;
		};
		class Object23 {
			Type="Land_Ind_Workshop01_L";
			position[] = {10046.338,9425.0195,0};
			direction = -269.19315;
			SetZUp = 1;
		};
	};
	//WMLZ2 Total: 24
	class WMLZ3 {
		position[] = {12007.973, 6930.9556};
		size = 1800;

		class Object0 {
			Type="Land_A_BuildingWIP";
			position[] = {13339.623,7331.7642,0.32484424};
			direction = -252.44598;
			SetZUp = 1;
		};
		class Object1 {
			Type="Land_A_BuildingWIP";
			position[] = {13372.396,7271.5654,0.47128281};
			direction = -431.48724;
			SetZUp = 1;
		};
		class Object2 {
			Type="Land_A_CraneCon";
			position[] = {13395.852,7310.1274,-0.01};
			direction = -252.41083;
			SetZUp = 1;
		};
		class Object3 {
			Type="Land_A_CraneCon";
			position[] = {13323.892,7295.1602,-0.01};
			direction = -341.93988;
			SetZUp = 1;
		};
		class Object4 {
			Type="land_dum_istan3";
			position[] = {13317.069,6879.2656,-0.01};
			direction = 0.04456012;
			SetZUp = 1;
		};
		class Object5 {
			Type="land_dum_istan3_hromada";
			position[] = {13162.029,6879.5967,0.1351874};
			direction = 0.04456012;
			SetZUp = 1;
		};
		class Object6 {
			Type="land_dum_istan3_Pumpa";
			position[] = {13271.853,6862.9492,-0.01};
			direction = 180.15823;
			SetZUp = 1;
		};
		class Object7 {
			Type="Land_ladderEP1";
			position[] = {13321.189,6921.4307,-0.62517089};
			direction = 183.55273;
			SetZUp = 1;
		};
		class Object8 {
			Type="Land_ladderEP1";
			position[] = {13165.634,6872.6318,-0.32561156};
			direction = 358.79459;
			SetZUp = 1;
		};
		class Object9 {
			Type="Land_ladderEP1";
			position[] = {13207.261,6869.9058,-0.6364274};
			direction = 358.2644;
			SetZUp = 1;
		};
		class Object10 {
			Type="Land_ladderEP1";
			position[] = {13237.074,6894.3999,-0.60852146};
			direction = 358.79459;
			SetZUp = 1;
		};
		class Object11 {
			Type="Land_ladderEP1";
			position[] = {13201.047,6956.3315,-0.65201396};
			direction = 358.79459;
			SetZUp = 1;
		};
		class Object12 {
			Type="Land_A_GeneralStore_01";
			position[] = {12675.729,6814.9468,0.04664503};
			direction = 172.32988;
			SetZUp = 1;
		};
		class Object13 {
			Type="Land_rail_station_big";
			position[] = {12314.656,6824.6787,-0.042358067};
			direction = -259.74973;
			SetZUp = 1;
		};
	};
	//WMLZ3 Total: 14
	class WMLZ4 {
		position[] = {10791.405, 5391.6064};
		size = 1500;

		class Object0 {
			Type="Land_A_GeneralStore_01";
			position[] = {11265.732,5912.0176,-0.2157429};
			direction = -0.8837651;
			SetZUp = 1;
		};
		class Object1 {
			Type="land_dum_istan3_Pumpa";
			position[] = {11340.349,5780.0024,0};
			direction = 329.75522;
			SetZUp = 1;
		};
		class Object2 {
			Type="land_dum_istan3_Pumpa";
			position[] = {11221.264,5148.1104,0.027369408};
			direction = 139.34927;
			SetZUp = 1;
		};
		class Object3 {
			Type="Land_Barn_W_02";
			position[] = {11480.69,5423.3267,0};
			direction = -2.5099843;
			SetZUp = 1;
		};
		class Object4 {
			Type="Land_ladderEP1";
			position[] = {11267.212,5215.478,0.00011110306};
			direction = 178.64415;
			SetZUp = 1;
		};
		class Object5 {
			Type="Land_ladderEP1";
			position[] = {11235.124,5158.8628,0};
			direction = 227.85165;
			SetZUp = 1;
		};
		class Object6 {
			Type="land_dum_istan3_hromada";
			position[] = {11234.513,5162.3623,0.16766134};
			direction = 139.26746;
			SetZUp = 1;
		};
		class Object7 {
			Type="Land_A_GeneralStore_01";
			position[] = {10938.981,5065.6719,0};
			direction = -201.36647;
			SetZUp = 1;
		};
		class Object8 {
			Type="Land_A_BuildingWIP";
			position[] = {10317.612,5281.6479,0.13085327};
			direction = -184.63278;
			SetZUp = 1;
		};
		class Object9 {
			Type="Land_A_CraneCon";
			position[] = {10340.739,5276.4019,0};
			direction = -629.40656;
			SetZUp = 1;
		};
	};
	//WMLZ4 Total: 10
	class WMLZ5 {
		position[] = {8694.2754, 5947.1602};
		size = 1600;

		class Object0 {
			Type="Land_A_FuelStation_Build";
			position[] = {9741.3525,5515.4468,0};
			direction = 53.18969;
			SetZUp = 1;
		};
		class Object1 {
			Type="Land_A_FuelStation_Shed";
			position[] = {9721.2393,5516.8208,-0.063669682};
			direction = -37.351627;
			SetZUp = 1;
		};
		class Object2 {
			Type="Land_Ind_TankSmall2";
			position[] = {9739.6113,5519.6284,0.17583084};
			direction = -36.67086;
			SetZUp = 1;
		};
		class Object3 {
			Type="Land_A_FuelStation_Feed";
			position[] = {9721.1709,5516.689,0.17348246};
			direction = -126.11369;
			SetZUp = 1;
		};
		class Object4 {
			Type="Land_A_FuelStation_Feed";
			position[] = {9715.5664,5512.6758,0.097451709};
			direction = -125.54933;
			SetZUp = 1;
		};
		class Object5 {
			Type="Land_A_FuelStation_Feed";
			position[] = {9726.7246,5521.0107,0.24816656};
			direction = -125.54933;
			SetZUp = 1;
		};
		class Object6 {
			Type="Land_Barn_W_01";
			position[] = {9122.4131,5357.5898,0};
			direction = -41.173008;
			SetZUp = 1;
		};
		class Object7 {
			Type="Land_Barn_W_02";
			position[] = {9210.3223,5462.6504,0};
			direction = -56.383026;
			SetZUp = 1;
		};
		class Object8 {
			Type="Land_Shed_Ind02";
			position[] = {9261.0254,5787.4683,0};
			direction = 89.30056;
			SetZUp = 1;
		};
		class Object9 {
			Type="Land_Shed_Ind02";
			position[] = {9261.0176,5806.3643,0};
			direction = 89.30056;
			SetZUp = 1;
		};
		class Object10 {
			Type="Land_Ind_Workshop01_04";
			position[] = {9228.6318,5802.9434,0};
			direction = -178.7836;
			SetZUp = 1;
		};
		class Object11 {
			Type="Land_Ind_Workshop01_L";
			position[] = {9223.9355,5784.561,0};
			direction = 272.3335;
			SetZUp = 1;
		};
		class Object12 {
			Type="Land_Ind_Workshop01_L";
			position[] = {9259.8174,5829.8062,0};
			direction = 272.3335;
			SetZUp = 1;
		};
		class Object13 {
			Type="Land_Ind_Workshop01_L";
			position[] = {9258.1611,5906.9648,0};
			direction = 178.57326;
			SetZUp = 1;
		};
		class Object14 {
			Type="Land_ladderEP1";
			position[] = {9345.3359,5914.7935,-0.65575278};
			direction = 270.4472;
			SetZUp = 1;
		};
		class Object15 {
			Type="Land_ladderEP1";
			position[] = {9319.1279,5932.6724,-0.53455889};
			direction = 270.4472;
			SetZUp = 1;
		};
		class Object16 {
			Type="Land_ladderEP1";
			position[] = {9324.9346,5799.5762,-0.46985599};
			direction = 270.4472;
			SetZUp = 1;
		};
		class Object17 {
			Type="Land_ladderEP1";
			position[] = {9306.9326,5752.1084,0};
			direction = 270.4472;
			SetZUp = 1;
		};
		class Object18 {
			Type="Land_ladderEP1";
			position[] = {7534.7217,6525.2583,0};
			direction = 285.2179;
			SetZUp = 1;
		};
		class Object19 {
			Type="Land_ladderEP1";
			position[] = {7596.8481,6638.583,-0.50484169};
			direction = 285.2179;
			SetZUp = 1;
		};
		class Object20 {
			Type="Land_A_GeneralStore_01";
			position[] = {7737.9194,6364.021,-0.58005071};
			direction = -360.02121;
			SetZUp = 1;
		};
		class Object21 {
			Type="Land_Ind_Workshop01_L";
			position[] = {8833.0117,6045.4976,0};
			direction = 1.3119901;
			SetZUp = 1;
		};
		class Object22 {
			Type="Land_Ind_Workshop01_L";
			position[] = {8929.4063,5956.3647,0};
			direction = 269.3573;
			SetZUp = 1;
		};
		class Object23 {
			Type="Land_Ind_Workshop01_04";
			position[] = {9071.0273,5960.5181,0};
			direction = -178.7836;
			SetZUp = 1;
		};
		class Object24 {
			Type="Land_Ind_Workshop01_04";
			position[] = {8611.1523,6132.2979,0};
			direction = -180.69658;
			SetZUp = 1;
		};
		class Object25 {
			Type="Land_Ind_Workshop01_04";
			position[] = {8595.0625,6369.9609,0};
			direction = -178.7836;
			SetZUp = 1;
		};
		class Object26 {
			Type="Land_Ind_Workshop01_04";
			position[] = {8775.1299,6120.4834,0};
			direction = -179.09299;
			SetZUp = 1;
		};
		class Object27 {
			Type="Land_Ind_Workshop01_L";
			position[] = {8898.0723,6130.105,0};
			direction = 449.94666;
			SetZUp = 1;
		};
	};
	//WMLZ5 Total: 28
	//Total Buildings: 280
};