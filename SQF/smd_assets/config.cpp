	#define _ARMA_
	#define private 0
	#define protected 1
	#define public 2
	#define true 1
	#define false 0
	#define TEast 0
	#define TWest 1
	#define TGuerrila 2
	#define TCivilian 3
	#define TSideUnknown 4
	#define TEnemy 5
	#define TFriendly 6
	#define TLogic 7
	class CfgPatches
	{
		class smd_assets
		{
			units[] = {"SMD_RACS_MP"}; 
			requiredVersion = 1.0; 
			requiredAddons[] = {}; 
		};
	};	
	class CfgFactionClasses 
	{
		class smd_black_ops 
		{
			displayName = "SMD Black Ops"; 
			priority = 5; 
			side = "TWest"; 
		};
		class smd_pmc 
		{
			displayName = "SMD PMC";
			priority = 5;
			side = "TWest";
		};
		class smd_racs 
		{
			displayName = "SMD RACS"; 
			priority = 5; 
			side = "TWest"; 
		};
		class smd_rspd 
		{
			displayName = "SMD RSPD";
			priority = 5;
			side = "TWest";
		};
		class smd_Z_black_ops 
		{
			displayName = "SMDZ Black Ops"; 
			priority = 5; 
			side = "TCivilian"; 
		};
		class smd_Z_racs 
		{
			displayName = "SMDZ RACS"; 
			priority = 5; 
			side = "TCivilian"; 
		};
		class smd_Z_rspd 
		{
			displayName = "SMDZ RSPD";
			priority = 5;
			side = "TCivilian";
		};
	};
	class CfgVehicleClasses
	{
		class smd_vilas_units 
		{ 
			displayName = "SMD UNITS";
		};
	};		
	class CfgVehicles 
	{
		class AllVehicles;   //external class reference
		
		class Air : AllVehicles	{
			class NewTurret;
			class ViewPilot;
			class AnimationSources;
		};
		class AH6_Base_EP1;	
		class AH6J_EP1;		
		class AH6X_EP1;   //external class reference		
		class BAF_Soldier_SniperH_W;   //external class reference		
		class C130J;   //external class reference
		class Citizen1;	// External class referenceclass HMMWV;
		class HMMWV;
		class HMMWV_M2;
		class HMMWV_TOW;
		class HMMWV_MK19;
		class Ikarus_base;			
		class LandRover_CZ_EP1;		
		class Mi17_UN_CDF_EP1;		
		class Man;   //external class reference	
		class CAManBase: Man {
			class TalkTopics; 
			class HitPoints { 
				class HitHead;
				class HitBody; 
			}; 
		};		
		class MH6J_EP1;		
		class SoldierWB: CAManBase 
		{ 
			class TalkTopics  : TalkTopics {}; 
		};		
		class SUV_PMC_BAF;
		class TK_Soldier_Spotter_EP1;   //external class reference
		class UH1H_TK_EP1;
		class SMD_RACS_MP : SoldierWB  //Flat Tan BDU - Black Vest - No Helmet or Knee Pads //Textures by Pliskin
		{
			vehicleClass = "smd_vilas_units";
			scope = 2;
			side=TWest;
			faction = "smd_racs";
			displayName = "RACS M.P.";
			weapons[] = {"MP5A5", "NVGoggles", "ItemGPS", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
			magazines[] = {"30Rnd_9x19_MP5", "30Rnd_9x19_MP5", "30Rnd_9x19_MP5", "30Rnd_9x19_MP5", "30Rnd_9x19_MP5", "30Rnd_9x19_MP5"};
			accuracy = 3.5;
			glassesenabled = 0;
			TextPlural = "$STR_DN_SpecialForces";
			TextSingular = "$STR_DN_SpecialForce";
			nameSound = "veh_SpecialForce";
			canDeactivateMines = true;
			picture = "\Ca\characters\data\Ico\i_SF_CA.paa";
			icon = "\Ca\characters2\data\icon\i_special_CA.paa";
			model = "\vil_police\vil_cop";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_bdu_racs_mp_co.paa"};
			class Wounds 
			{ 
				tex[] = {};
				mat[] = {"vil_police\police_body.rvmat", "vil_police\police_body_de.rVmat", "vil_police\police_body_de.rVmat"}; 
			};
		};
		class SMD_ATACS_DES: SMD_RACS_MP  //PMC Defensive Marksmen with Desert ATACS Camo //Textures by Pliskin
		{
			faction = "smd_pmc";
			displayName = "PMC ATACS Desert ";
			model = "\Ca\Characters_PMC\Frost\Frost.p3d";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_bdu_atacs_des_co.paa"};
		};
		class SMD_ATACS_URBAN: SMD_RACS_MP  //PMC Defensive Marksmen with Black Urban ATACS Camo //Textures by Pliskin
		{
			faction = "smd_pmc";
			displayName = "PMC Urban ATACS";
			model = "\Ca\Characters_PMC\Frost\Frost.p3d";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_bdu_atacs_urban_co.paa"};
		};
		class SMD_RACS_MP_Tan: SMD_RACS_MP //Flat Tan BDU - Blended Vest - No Helmet or Knee Pads //Textures by Pliskin
		{
			faction = "smd_racs";
			displayName = "RACS M.P. (Blended Vest)";
			model = "\vil_police\vil_cop";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_bdu_racs_mp_tan_co.paa"};
		};
		class SMD_RACS_MP_Tan_Digi: SMD_RACS_MP //Tan Digital Camo BDU - Blended Vest - No Helmet or Knee Pads //Textures by Pliskin
		{
			faction = "smd_racs";
			displayName = "RACS M.P. Digital (Blended Vest)";
			model = "\vil_police\vil_cop";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_bdu_racs_mp_tan_digi_co.paa"};
		};
		class SMD_RACS_Soldier: SMD_RACS_MP //Camo Regular BDU - Black Vest - Helmet and Knee Pads //Textures by Pliskin
		{
			faction = "smd_racs";
			displayName = "RACS Infantry";
			model = "\vil_police\vil_swat";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_bdu_racs_regular_co.paa"};
		};
		class SMD_RACS_Soldier_Digi: SMD_RACS_MP //Digital Camo BDU - Black Vest - Helmet and Knee Pads //Textures by Pliskin
		{
			faction = "smd_racs";
			displayName = "RACS Infantry Digital";
			model = "\vil_police\vil_swat";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_bdu_racs_regular_digi_co.paa"};
		};
		class SMD_RSPD_BLACK: SMD_RACS_MP //RSPD Flat Black BDU - Black Vest - Helmet and Knee Pads //Textures by Pliskin
		{ 
			faction = "smd_rspd";
			displayName = "RSPD SWAT";
			model = "\vil_police\vil_swat";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_bdu_rspd_black_co.paa"};
		};
		class SMD_SPD_BLUE: SMD_RACS_MP //SPD Flat Blue - Black Vest - No Helmet or Knee Pads //Textures by Pliskin
		{
			faction = "smd_rspd";
			displayName = "RSPD Regular";
			model = "\vil_police\vil_cop";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_bdu_rspd_blue_co.paa"};
		};
		class SMD_SPD_BLUE_DIGI: SMD_RACS_MP //SPD Digital Blue BDU - Black Vest - No Helmet or Knee Pads //Textures by Pliskin
		{
			faction = "smd_rspd";
			displayName = "RSPD Regular Digital";
			model = "\vil_police\vil_cop";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_bdu_rspd_blue_digi_co.paa"};
		};
		class SMD_RSPD_SWAT: SMD_RACS_MP //RSPD Night Camo BDU - Black Vest - Helmet and Knee Pads //Textures by Pliskin
		{
			faction = "smd_rspd";
			displayName = "RSPD SWAT Night Camo";
			model = "\vil_police\vil_swat";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_bdu_rspd_swat_co.paa"};
		};
		class SMD_SPD_SWAT_DIGI: SMD_RACS_MP //RSPD Digital Black BDU - Black Vest - Helmet and Knee Pads //Textures by Pliskin
		{
			faction = "smd_rspd";
			displayName = "RSPD SWAT Digital Night Camo";
			model = "\vil_police\vil_swat";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_bdu_rspd_swat_digi_co.paa"};
		};
		class SMD_SARA_Sheriff: SMD_RACS_MP //Sherrif //unchanged original Vilas Work
		{
			faction = "smd_rspd";
			displayName = "RSPD Rosco P. Coltrane";
			model = "\vil_police\vil_cop3";
		};
		class SMD_TIGER_CAMO: SMD_RACS_MP //Tiger Camo - Black Vest - Helmet and Knee Pads //Textures by Pliskin
		{
			faction = "smd_pmc";
			displayName = "PMC Tiger Camo";
			model = "\vil_police\vil_swat";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_bdu_tigerstripe_co.paa"};
		};
		class SMD_US_SpecOps: SMD_RACS_MP //US SPEC OPS Helmet/Pads //Textures by Pliskin
		{
			faction = "smd_black_ops";
			displayName = "US Black Ops";
			model = "\vil_police\vil_swat";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_bdu_us_blackops_co.paa"};
		};
		class SMD_US_SpecOps_DIGI: SMD_RACS_MP //US SPEC OPS Digi Helmet/Pads //Textures by Pliskin
		{ 
			faction = "smd_black_ops";
			displayName = "US Black Ops";
			model = "\vil_police\vil_swat";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_bdu_us_blackops_digi_co.paa"};
		};
		class SMD_US_SpecOps_MP_DIGI: SMD_RACS_MP  //US SPEC OPS Digi BDU - Blended Vest - NO Helmet/Pads Blended Vest //Textures by Pliskin
		{
			faction = "smd_black_ops";
			displayName = "US Black Ops";
			model = "\vil_police\vil_cop";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_bdu_us_blackops_mp_digi_co.paa"};
		};
		class SMD_Sniper_D : BAF_Soldier_SniperH_W   //Desert Ghillie (Coverall) //Textures by Pliskin
		{
			faction = "smd_racs";
			displayName = "RACS Sniper (Overall)";
			hiddenSelectionsTextures[] = {"\smd_assets\characters\textures\smd_ghillie_des_coverall_co.paa"};
		};	
		class SMD_Sniper_D_Upper : TK_Soldier_Spotter_EP1  //Desert Ghillie (Upper Only) //Textures by Pliskin
		{
			faction = "smd_racs";
			displayName = "RACS Sniper (top)";
			primaryLanguage = "EN";
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\smd_assets\characters\textures\smd_ghillie_des_tophalf_co.paa"};
		}; //end people begin people eaters
		
		
		class zZombie_Base : Citizen1 {
			scope = public;
			glassesEnabled = 0;
			vehicleClass = "Zombie";
			displayName = "Zombie";
			faction = "smd_Z_racs";
			fsmDanger = "";
			fsmFormation = "";
			zombieLoot = "civilian";
			moves = "CfgMovesZombie";
			isMan = false;
			weapons[] = {};
			magazines[] = {};
			sensitivity = 4;	// sensor sensitivity
			sensitivityEar = 2;
			identityTypes[] = {"zombie1", "zombie2"};
			class TalkTopics {};
			languages[] = {};
			
			class Eventhandlers {
				init = "_this call zombie_initialize;";
				local = "if(_this select 1) then {[(position (_this select 0)),(_this select 0),true] execFSM '\z\AddOns\dayz_code\system\zombie_agent.fsm'};";
			};
			
			class HitPoints {
				class HitHead {
					armor = 0.3;
					material = -1;
					name = "head_hit";
					passThrough = true;
					memoryPoint = "pilot";
				};
				
				class HitBody : HitHead {
					armor = 2;
					name = "body";
					memoryPoint = "aimPoint";
				};
				
				class HitSpine : HitHead {
					armor = 2;
					name = "Spine2";
					memoryPoint = "aimPoint";
				};
				
				class HitHands : HitHead {
					armor = 0.5;
					material = -1;
					name = "hands";
					passThrough = true;
				};
				
				class HitLArm : HitHands {
					name = "LeftArm";
					memoryPoint = "lelbow";
				};
				
				class HitRArm : HitHands {
					name = "RightArm";
					memoryPoint = "relbow";
				};
				
				class HitLForeArm : HitHands {
					name = "LeftForeArm";
					memoryPoint = "lwrist";
				};
				
				class HitRForeArm : HitHands {
					name = "RightForeArm";
					memoryPoint = "rwrist";
				};
				
				class HitLHand : HitHands {
					name = "LeftHand";
					memoryPoint = "LeftHandMiddle1";
				};
				
				class HitRHand : HitHands {
					name = "RightHand";
					memoryPoint = "RightHandMiddle1";
				};
				
				class HitLegs : HitHands {
					name = "legs";
					memoryPoint = "pelvis";
				};
				
				class HitLLeg : HitHands {
					name = "LeftLeg";
					memoryPoint = "lknee";
				};
				
				class HitLLegUp : HitHands {
					name = "LeftUpLeg";
					memoryPoint = "lfemur";
				};
				
				class HitRLeg : HitHands {
					name = "RightLeg";
					memoryPoint = "rknee";
				};
				
				class HitRLegUp : HitHands {
					name = "RightUpLeg";
					memoryPoint = "rfemur";
				};
			};
		};
			
		class z_RACSzombie : zZombie_Base{	 //RACS Tan Camo black Helmet/Pads black vest
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"z\addons\dayz_code\textures\smd_bdu_racs_regular_co.paa"};
			displayName = "Zombie Soldier";
			faction = "smd_Z_racs";
			model = "\vil_police\vil_swat";
			zombieLoot = "military";
			class HitPoints: HitPoints
			{
				class HitHead
				{
					armor = 0.3;
					material = -1;
					name = "head_hit";
					passThrough = 1;
				};
				class HitBody
				{
					armor = 2.4;
					material = -1;
					name = "body";
					passThrough = 1;
				};
				class HitHands
				{
					armor = 1;
					material = -1;
					name = "hands";
					passThrough = 1;
				};
				class HitLegs
				{
					armor = 1;
					material = -1;
					name = "legs";
					passThrough = 1;
				};
			};
			class Wounds
			{
				tex[] = {};
				mat[] = {"ca\characters2\Blufor\data\Soldier.RVmat","ca\characters2\Blufor\data\Soldier_W1.RVmat","ca\characters2\Blufor\data\Soldier_W2.RVmat","ca\characters2\Blufor\data\Soldier_Light.RVmat","ca\characters2\Blufor\data\Soldier_Light_W1.RVmat","ca\characters2\Blufor\data\Soldier_Light_W2.RVmat","ca\characters2\Blufor\data\Soldier_EQUIP_Light.RVmat","ca\characters2\Blufor\data\Soldier_Light_EQUIP_W2.RVmat","ca\characters2\Blufor\data\Soldier_Light_EQUIP_W1.RVmat","ca\characters2\Blufor\data\Soldier_GL.RVmat","ca\characters2\Blufor\data\Soldier_GL_W1.RVmat","ca\characters2\Blufor\data\Soldier_GL_W2.RVmat","ca\characters2\Blufor\data\Soldier_NCO.RVmat","ca\characters2\Blufor\data\Soldier_NCO_W1.RVmat","ca\characters2\Blufor\data\Soldier_NCO_W2.RVmat","ca\characters2\Blufor\data\Soldier_MG.RVmat","ca\characters2\Blufor\data\Soldier_MG_W1.RVmat","ca\characters2\Blufor\data\Soldier_MG_W2.RVmat","ca\characters2\Blufor\data\Soldier_AT.RVmat","ca\characters2\Blufor\data\Soldier_AT_W1.RVmat","ca\characters2\Blufor\data\Soldier_AT_W2.RVmat","ca\characters2\Blufor\data\Soldier_CO.RVmat","ca\characters2\Blufor\data\Soldier_CO_W1.RVmat","ca\characters2\Blufor\data\Soldier_CO_W2.RVmat","ca\characters2\Blufor\data\Soldier_CO_EQUIP.RVmat","ca\characters2\Blufor\data\Soldier_CO_EQUIP_W1.RVmat","ca\characters2\Blufor\data\Soldier_CO_EQUIP_W2.RVmat","ca\characters2\Blufor\data\Soldier_Pilot.RVmat","ca\characters2\Blufor\data\Soldier_Pilot_W1.RVmat","ca\characters2\Blufor\data\Soldier_Pilot_W2.RVmat","ca\characters2\Blufor\data\Soldier_Pilot_EQUIP.RVmat","ca\characters2\Blufor\data\Soldier_Pilot_EQUIP_W1.RVmat","ca\characters2\Blufor\data\Soldier_Pilot_EQUIP_W2.RVmat","ca\characters2\Blufor\data\Soldier_Guard.RVmat","ca\characters2\Blufor\data\Soldier_Guard_W1.RVmat","ca\characters2\Blufor\data\Soldier_Guard_W2.RVmat","ca\characters2\Blufor\data\Soldier_Crew.RVmat","ca\characters2\Blufor\data\Soldier_Crew_W1.RVmat","ca\characters2\Blufor\data\Soldier_Crew_W2.RVmat","ca\characters2\Blufor\data\Soldier_Crew_EQUIP.RVmat","ca\characters2\Blufor\data\Soldier_Crew_EQUIP_W1.RVmat","ca\characters2\Blufor\data\Soldier_Crew_EQUIP_W2.RVmat","ca\characters2\Blufor\data\Soldier_Guard_EQUIP.RVmat","ca\characters2\Blufor\data\Soldier_Guard_EQUIP_W1.RVmat","ca\characters2\Blufor\data\Soldier_Guard_EQUIP_W2.RVmat"};
			};
		};
		
		/*class AH6J_EP1_SMD_ATACS : AH6J_EP1 //Textures by Pliskin
		{
			faction = "smd_racs";
			displayname = "AH6J (ATACS)";
			displaynameshort = "AH6J (ATACS)";
			hiddenselections[] = {"camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_ah6_atacs_co.paa"};
		};*/		
		class AH6J_EP1_SMD_MAGPI : AH6J_EP1 //Textures by Pliskin
		{
			faction = "smd_racs";
			displayname = "AH6J (Magnum P.I.)";
			displaynameshort = "AH6J (Magnum P.I.)";
			hiddenselections[] = {"camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_ah6_magnumpi_co.paa"};
		};		
		/*class AH6J_EP1_SMD_RACS : AH6J_EP1 //Textures by Pliskin
		{
			faction = "smd_racs";
			displayname = "AH6J (RACS)";
			displaynameshort = "AH6J (RACS)";
			hiddenselections[] = {"camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_ah6_racs_co.paa"};
		};		
		class AH6J_EP1_SMD_RACS_DIGI : AH6J_EP1 //Textures by Pliskin
		{
			faction = "smd_racs";
			displayname = "AH6J (RACS) Digital";
			displaynameshort = "AH6J (RACS) Digital";
			hiddenselections[] = {"camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_ah6_racs_digi_co.paa"};
		};*///none of the commented out heli's work, please feel free to fix my config errors and post back!!!			
		class AH6X_SMD_ATACS : AH6X_EP1 //Textures by Pliskin
		{
			faction = "smd_racs";
			displayname = "AH6X (ATACS)";
			displaynameshort = "AH6X (ATACS)";
			hiddenselections[] = {"camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_ah6_atacs_co.paa"};
		};		
		class AH6X_SMD_MAGPI : AH6X_EP1 //Textures by Pliskin
		{
			faction = "smd_racs";
			displayname = "AH6X (Mag P.I.)";
			displaynameshort = "AH6X (Mag P.I.)";
			hiddenselections[] = {"camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_ah6_magnumpi_co.paa"};
		};		
		class AH6X_SMD_RACS : AH6X_EP1 //Textures by Pliskin
		{
			faction = "smd_racs";
			displayname = "AH6X (RACS)";
			displaynameshort = "AH6X (RACS)";
			hiddenselections[] = {"camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_ah6_racs_co.paa"};
		};		
		class AH6X_SMD_RACS_DIGI : AH6X_EP1 //Textures by Pliskin
		{
			faction = "smd_racs";
			displayname = "AH6X (RACS) Digital";
			displaynameshort = "AH6X (RACS) Digital";
			hiddenselections[] = {"camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_ah6_racs_digi_co.paa"};
		};
		class C130_SMD_ATACS: C130J  //Textures by Pliskin
		{
			faction = "smd_racs";
			displayname = "C130J (ATACS)";
			displaynameshort = "C130J (ATACS)";
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_c130j_atacs_body_co.paa","smd_assets\vehicles\textures\smd_veh_c130j_atacs_wings_co.paa"};
		};
		
		class C130_SMD_BLOPS: C130J  //Textures by Pliskin
		{
			faction = "smd_racs";
			displayname = "C130J (Unmarked)";
			displaynameshort = "C130J (Unmarked)";
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_c130j_blackops_body_co.paa","smd_assets\vehicles\textures\smd_veh_c130j_blackops_wings_co.paa"};
		};		
		class C130_SMD_BLOPS_DIGI: C130J  //Textures by Pliskin
		{
			faction = "smd_racs";
			displayname = "C130J (Unmarked) Digital";
			displaynameshort = "C130J (Unmarked) Digital";
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_c130j_blackops_digital_body_co.paa","smd_assets\vehicles\textures\smd_veh_c130j_blackops_digital_wings_co.paa"};
		};		
		class C130_SMD_UN: C130J  //Textures by Pliskin
		{
			faction = "smd_racs";
			displayname = "C130J (U.N.)";
			displaynameshort = "C130J (U.N.)";
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_c130j_UN_body_co.paa","smd_assets\vehicles\textures\smd_veh_c130j_UN_wings_co.paa"};
		};
		class HMMWV_SMD_ATACS: HMMWV
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "HMMWV ATACS";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_hmmwv_atacs_body_us_co.paa"};
		};
		class HMMWV_M2_SMD_ATACS: HMMWV_M2
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "HMMWV M2 ATACS";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_hmmwv_atacs_body_us_co.paa"};
		};
		class HMMWV_TOW_SMD_ATACS: HMMWV_TOW
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "HMMWV TOW ATACS";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_hmmwv_atacs_body_us_co.paa"};
		};
		class HMMWV_MK19_SMD_ATACS: HMMWV_MK19
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "HMMWV MK19 ATACS";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_hmmwv_atacs_body_us_co.paa"};
		};
		class HMMWV_SMD_BLOPS: HMMWV
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "HMMWV (Unmarked)";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_hmmwv_blackops_body_us_co.paa"};
		};
		class HMMWV_M2_SMD_BLOPS: HMMWV_M2
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "HMMWV M2 (Unmarked)";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_hmmwv_blackops_body_us_co.paa"};
		};
		class HMMWV_TOW_SMD_BLOPS: HMMWV_TOW
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "HMMWV TOW (Unmarked)";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_hmmwv_blackops_body_us_co.paa"};
		};
		class HMMWV_MK19_SMD_BLOPS: HMMWV_MK19
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "HMMWV MK19 (Unmarked)";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_hmmwv_blackops_body_us_co.paa"};
		};
		class HMMWV_SMD_BLOPS_DIGI: HMMWV
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "HMMWV (Unmarked) Digital";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_hmmwv_blackops_digital_body_us_co.paa"};
		};
		class HMMWV_M2_SMD_BLOPS_DIGI: HMMWV_M2
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "HMMWV M2 (Unmarked) Digital";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_hmmwv_blackops_digital_body_us_co.paa"};
		};
		class HMMWV_TOW_SMD_BLOPS_DIGI: HMMWV_TOW
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "HMMWV TOW (Unmarked) Digital";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_hmmwv_blackops_digital_body_us_co.paa"};
		};
		class HMMWV_MK19_SMD_BLOPS_DIGI: HMMWV_MK19
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "HMMWV MK19 (Unmarked) Digital";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_hmmwv_blackops_digital_body_us_co.paa"};
		};
		class HMMWV_SMD_RACS: HMMWV
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "HMMWV RACS";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_hmmwv_racs_body_us_co.paa"};
		};
		class HMMWV_M2_SMD_RACS: HMMWV_M2
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "HMMWV M2 RACS";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_hmmwv_racs_body_us_co.paa"};
		};
		class HMMWV_TOW_SMD_RACS: HMMWV_TOW
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "HMMWV TOW RACS";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_hmmwv_racs_body_us_co.paa"};
		};
		class HMMWV_MK19_SMD_RACS: HMMWV_MK19
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "HMMWV MK19 RACS";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_hmmwv_racs_body_us_co.paa"};
		};
		class HMMWV_SMD_RACS_DIGI: HMMWV
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "HMMWV RACS Digital";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_hmmwv_racs_digi_body_us_co.paa"};
		};
		class HMMWV_M2_SMD_RACS_DIGI: HMMWV_M2
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "HMMWV M2 RACS Digital";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_hmmwv_racs_digi_body_us_co.paa"};
		};
		class HMMWV_TOW_SMD_RACS_DIGI: HMMWV_TOW
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "HMMWV TOW RACS Digital";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_hmmwv_racs_digi_body_us_co.paa"};
		};
		class HMMWV_MK19_SMD_RACS_DIGI: HMMWV_MK19
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "HMMWV MK19 RACS Digital";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_hmmwv_racs_digi_body_us_co.paa"};
		};
		class Ikarus_SMD_COKE: Ikarus_base //Textures by ZombieDanceLeader + ShermanFTW
		{
			faction = "smd_racs";
			displayname = "Bus (Coke)";
			displaynameshort = "Bus (Coke)";	
			expansion = 1;
			scope = 2;
			side = 3;
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_ikarus_coke_co"};
			rarityUrban = 0.4;
			crew = "TK_CIV_Takistani01_EP1";
			typicalCargo[] = {"TK_CIV_Takistani01_EP1"};
		};
		class Ikarus_SMD_OPENDAYZ: Ikarus_SMD_COKE //Textures by ZombieDanceLeader + ShermanFTW
		{
			displayname = "Bus (OpenDayZ)";
			displaynameshort = "Bus (OpenDayZ)";	
			hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_ikarus_opendayz_co"};
		};
		class LandRover_SMD_RACS: LandRover_CZ_EP1 //Textures by Pliskin
		{
			faction = "smd_racs";
			displayname = "Landrover (RACS)";
			displaynameshort = "Landrover RACS)";
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_landrover_racs_co.paa"};
		};
		class LandRover_SMD_RACS_DIGI: LandRover_SMD_RACS //Textures by Pliskin
		{
			faction = "smd_racs";
			displayname = "Landrover (RACS) Digital";
			displaynameshort = "Landrover RACS) Digital";
			hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_landrover_racs_digi_co.paa"};
		};		
		/*class MH6J_SMD_ATACS : MH6J_EP1 //Textures by Pliskin
		{
			displayname = "MH6J (ATACS)";
			displaynameshort = "MH6J (ATACS)";
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_ah6_atacs_co.paa","ca\air_e\ah6j\data\default_co.paa"};
			//hiddenselections[] = {"camo1"};
			//hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_ah6_atacs_co.paa"};
		};*/		
		class MH6J_SMD_MAGPI : MH6J_EP1 //Textures by Pliskin
		{
			displayname = "MH6J (Mag P.I.)";
			displaynameshort = "MH6J (Mag P.I.)";
			hiddenselections[] = {"camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_ah6_magnumpi_co.paa"};
		};		
		/*class MH6J_SMD_RACS : MH6J_EP1 //Textures by Pliskin
		{
			faction = "smd_racs";
			displayname = "MH6J (RACS)";
			displaynameshort = "MH6J (RACS)";
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_ah6_racs_co.paa","ca\air_e\ah6j\data\default_co.paa"};
			//hiddenselections[] = {"camo1"};
			//hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_ah6_racs_co.paa"};
		};		
		class MH6J_SMD_RACS_DIGI : MH6J_EP1 //Textures by Pliskin
		{
			faction = "smd_racs";
			displayname = "MH6J (RACS) Digital";
			displaynameshort = "MH6J (RACS) Digital";
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_ah6_racs_digi_co.paa","ca\air_e\ah6j\data\default_co.paa"};
			//hiddenselections[] = {"camo1"};
			//hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_ah6_racs_digi_co.paa"};
		};
		class Mi17_SMD_BLOPS: Mi17_UN_CDF_EP1 //Textures by Pliskin
		{
			faction = "smd_racs";
			displayname = "Mi17 Unmarked";
			displaynameshort = "Mi17 (Unmarked)";	
			scope = 2;
			vehicleClass = "Air";
			side = 3;
			model = "\ca\air\Mi_8AMT";
			weapons[] = {};		
			radartype = 0;
			accuracy = 1000;
			magazines[] = {};
			hasGunner = 0;
			class Turrets{};
			threat[] = {0.0,0.0,0.0};
			hiddenSelectionsTextures[] = {"z\addons\dayz_code\textures\smd_veh_mi17_blackops_body_co.paa","z\addons\dayz_code\textures\smd_veh_mi17_blackops_det_co.paa","z\addons\dayz_code\textures\smd_veh_mi17_blackops_decals2_co.paa"}; //by Textures by Pliskin
		};	*///none of the commented out heli's work, please feel free to fix my config errors and post back!!!
		class UH1H_SMD_ATACS: UH1H_TK_EP1 //Textures by Pliskin
		{
			faction = "smd_racs";
			displayname = "UH1H (ATACS)";
			displaynameshort = "UH1H (ATACS)";	
			hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_uh1_atacs_co.paa", "smd_assets\vehicles\textures\smd_veh_uh1_atacs_in_co.paa", "ca\air_E\UH1H\data\default_co.paa"};
		};
		class UH1H_SMD_BLOPS: UH1H_TK_EP1 //Textures by Pliskin
		{
			faction = "smd_racs";
			displayname = "UH1H Unmarked";
			displaynameshort = "UH1H (Unmarked)";	
			hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_uh1_blackops_co.paa", "smd_assets\vehicles\textures\smd_veh_uh1_blackops_in_co.paa", "ca\air_E\UH1H\data\default_co.paa"};
		};
		class UH1H_SMD_BLOPS_DIGI: UH1H_TK_EP1 //Textures by Pliskin
		{
			faction = "smd_racs";
			displayname = "UH1H (Unmarked)";
			displaynameshort = "UH1H (Unmarked)";	
			hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_uh1_blackops_digital_co.paa", "smd_assets\vehicles\textures\smd_veh_uh1_blackops_digital_in_co.paa", "ca\air_E\UH1H\data\default_co.paa"};
		};
		class UH1H_SMD_RACS: UH1H_TK_EP1 //Textures by Pliskin
		{
			faction = "smd_racs";
			displayname = "UH1H (RACS)";
			displaynameshort = "UH1H (RACS)";	
			hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_uh1_racs_co.paa", "smd_assets\vehicles\textures\smd_veh_uh1_racs_in_co.paa", "ca\air_E\UH1H\data\default_co.paa"};
		};
		class UH1H_SMD_RACS_DIGI: UH1H_TK_EP1 //Textures by Pliskin
		{
			faction = "smd_racs";
			displayname = "UH1H (RACS) Digital";
			displaynameshort = "UH1H (RACS) Digital";	
			hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_uh1_racs_digi_co.paa", "smd_assets\vehicles\textures\smd_veh_uh1_racs_digi_in_co.paa", "ca\air_E\UH1H\data\default_co.paa"};
		};		
		class UH1H_SMD_UN: UH1H_TK_EP1 //Textures by Pliskin
		{
			faction = "smd_racs";
			displayname = "UH1H (U.N.)";
			displaynameshort = "UH1H (U.N.)";	
			hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_uh1_un_co.paa", "smd_assets\vehicles\textures\smd_veh_uh1_un_in_co.paa", "ca\air_E\UH1H\data\default_co.paa"};
		};	
		class SUV_SMD_ATACS: SUV_PMC_BAF
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "SUV ATACS";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_suv_atacs_body_co.paa"};
		};
		class SUV_SMD_BLOPS: SUV_PMC_BAF
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "SUV (Unmarked)";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_suv_blackops_body_co.paa"};
		};
		class SUV_SMD_BLOPS_DIGI: SUV_PMC_BAF
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "SUV (Unmarked) Digital";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_suv_blackops_digital_body_co.paa"};
		};
		class SUV_SMD_RACS: SUV_PMC_BAF
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "SUV RACS";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_suv_racs_body_co.paa"};
		};
		class SUV_SMD_RACS_DIGI: SUV_PMC_BAF
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "SUV RACS Digital";
			hiddenselections[] = {"Camo1"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_suv_racs_digi_body_co.paa"};
		};		
	};