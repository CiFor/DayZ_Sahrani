	#define _ARMA_				////													////
	#define private 0			////													////
	#define protected 1			////													////
	#define public 2			////													////
	#define true 1				////													////
	#define false 0				////													////
	#define TEast 0				////													////
	#define TWest 1				////													////
	#define TGuerrila 2			////													////
	#define TCivilian 3			////													////
	#define TSideUnknown 4		////													////
	#define TEnemy 5			////													////
	#define TFriendly 6			////													////
	#define TLogic 7			////													////
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
		class smd_sla 
		{
			displayName = "SMD SLA";
			priority = 5;
			side = "TEast";
		};
		class smdz_blops 
		{
			displayName = "SMDZ Black Ops"; 
			priority = 5; 
			side = "TCivilian"; 
		};
		class smdz_racs 
		{
			displayName = "SMDZ RACS"; 
			priority = 5; 
			side = "TCivilian"; 
		};
		class smdz_rspd 
		{
			displayName = "SMDZ RSPD";
			priority = 5;
			side = "TCivilian";
		};
		class smdz_saracivs 
		{
			displayName = "SMDZ Sara Civs";
			priority = 5;
			side = "TCivilian";
		};
	};
class CfgMusic
{
	class smd_backtrack
	{
		name = "";
		sound[] = {"\smd_assets\music\smd_backtrack.ogg", db+0, 1.0};
		duration = 308;
	};
};
	class CfgVehicleClasses
	{
		class smd_vilas_units 
		{ 
			displayName = "SMD UNITS";
		};		
		class Sah_Zed_Shorts 
		{ 
			displayName = "SMDZ SHORTS";
		};
		class Sah_Zed_Pants 
		{ 
			displayName = "SMDZ PANTS";
		};
		class racz_heavy 
		{ 
			displayName = "RACZ HEAVY";
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
		class Citizen1;	// External class referenceclass 
		class GUE_Soldier_Scout;
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
		class SoldierEB: CAManBase
		{ 
			class TalkTopics  : TalkTopics {}; 
		};	
		class SoldierWB: CAManBase 
		{ 
			class TalkTopics  : TalkTopics {}; 
		};		
		class SUV_TK_EP1 ;
		class TK_Soldier_Spotter_EP1;   //external class reference
		class UH1H_TK_EP1;			
		class Survivor2_DZ;///////////////////////////////////////////////////// BEGIN SMD UNIT DEFINITIONS/////////////////////////////////
		
		class SMD_RACS_MP : SoldierWB  //Flat Tan BDU - Black Vest - No Helmet or Knee Pads //Textures by Pliskin
		{
			vehicleClass = "smd_vilas_units";
			scope = 2;
			side=TWest;
			faction = "smd_racs";
			displayName = "RACS M.P.";
			weapons[] = {"G36C", "NVGoggles", "ItemGPS", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
			magazines[] = {"30Rnd_556x45_G36", "30Rnd_556x45_G36", "30Rnd_556x45_G36", "30Rnd_556x45_G36", "30Rnd_556x45_G36", "30Rnd_556x45_G36", "HandGrenade_West", "HandGrenade_West", "HandGrenade_West"};
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
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_cop_bdu_racs_mp_co.paa"};
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
			weapons[] = {"G36_C_SD_Eotech", "NVGoggles", "ItemGPS", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
			magazines[] = {"30Rnd_556x45_G36SD", "30Rnd_556x45_G36SD", "30Rnd_556x45_G36SD", "30Rnd_556x45_G36SD", "30Rnd_556x45_G36SD", "30Rnd_556x45_G36SD", "HandGrenade_West", "HandGrenade_West", "Pipebomb"};
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_bdu_hero_atacs_des_co.paa"};
		};
		class SMD_ATACS_URBAN: SMD_RACS_MP  //PMC Defensive Marksmen with Black Urban ATACS Camo //Textures by Pliskin
		{
			faction = "smd_pmc";
			displayName = "PMC Urban ATACS";
			model = "\Ca\Characters_PMC\Frost\Frost.p3d";
			weapons[] = {"G36_C_SD_Eotech", "NVGoggles", "ItemGPS", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
			magazines[] = {"30Rnd_556x45_G36SD", "30Rnd_556x45_G36SD", "30Rnd_556x45_G36SD", "30Rnd_556x45_G36SD", "30Rnd_556x45_G36SD", "30Rnd_556x45_G36SD", "HandGrenade_West", "HandGrenade_West", "Pipebomb"};
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_bdu_hero_atacs_urban_co.paa"};
		};
		class SMD_RACS_MP_Tan: SMD_RACS_MP //Flat Tan BDU - Blended Vest - No Helmet or Knee Pads //Textures by Pliskin
		{
			faction = "smd_racs";
			displayName = "RACS M.P. (Blended Vest)";
			model = "\vil_police\vil_cop";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_cop_bdu_racs_mp_tan_co.paa"};
		};
		class SMD_RACS_MP_Tan_Digi: SMD_RACS_MP //Tan Digital Camo BDU - Blended Vest - No Helmet or Knee Pads //Textures by Pliskin
		{
			faction = "smd_racs";
			displayName = "RACS M.P. Digital (Blended Vest)";
			model = "\vil_police\vil_cop";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_cop_bdu_racs_mp_tan_digi_co.paa"};
		};
		class SMD_RACS_Soldier: SMD_RACS_MP //Camo Regular BDU - Black Vest - Helmet and Knee Pads //Textures by Pliskin
		{
			faction = "smd_racs";
			displayName = "RACS Infantry";
			model = "\vil_police\vil_swat";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_swat_bdu_racs_regular_co.paa"};
		};
		class SMD_RACS_Soldier_Digi: SMD_RACS_MP //Digital Camo BDU - Black Vest - Helmet and Knee Pads //Textures by Pliskin
		{
			faction = "smd_racs";
			displayName = "RACS Infantry Digital";
			model = "\vil_police\vil_swat";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_swat_bdu_racs_regular_digi_co.paa"};
		};
		class SMD_RSPD_BLACK: SMD_RACS_MP //RSPD Flat Black BDU - Black Vest - Helmet and Knee Pads //Textures by Pliskin
		{ 
			faction = "smd_rspd";
			displayName = "RSPD SWAT";
			model = "\vil_police\vil_swat";
			weapons[] = {"MP5A5", "Throw", "Put", "ItemMap", "ItemWatch", "ItemRadio"};
			magazines[] = {"30Rnd_9x19_MP5", "30Rnd_9x19_MP5", "30Rnd_9x19_MP5", "30Rnd_9x19_MP5", "30Rnd_9x19_MP5", "30Rnd_9x19_MP5"};
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_swat_bdu_rspd_black_co.paa"};
		};
		class SMD_RSPD_BLUE: SMD_RACS_MP //SPD Flat Blue - Black Vest - No Helmet or Knee Pads //Textures by Pliskin
		{
			faction = "smd_rspd";
			displayName = "RSPD Regular";
			model = "\vil_police\vil_cop";
			weapons[] = {"MP5A5", "Throw", "Put", "ItemMap", "ItemWatch", "ItemRadio"};
			magazines[] = {"30Rnd_9x19_MP5", "30Rnd_9x19_MP5", "30Rnd_9x19_MP5", "30Rnd_9x19_MP5", "30Rnd_9x19_MP5", "30Rnd_9x19_MP5"};
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_cop_bdu_rspd_blue_co.paa"};
		};
		class SMD_RSPD_BLUE_DIGI: SMD_RACS_MP //SPD Digital Blue BDU - Black Vest - No Helmet or Knee Pads //Textures by Pliskin
		{
			faction = "smd_rspd";
			displayName = "RSPD Regular Digital";
			model = "\vil_police\vil_cop";
			weapons[] = {"MP5A5", "Throw", "Put", "ItemMap", "ItemWatch", "ItemRadio"};
			magazines[] = {"30Rnd_9x19_MP5", "30Rnd_9x19_MP5", "30Rnd_9x19_MP5", "30Rnd_9x19_MP5", "30Rnd_9x19_MP5", "30Rnd_9x19_MP5"};
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_cop_bdu_rspd_blue_digi_co.paa"};
		};
		class SMD_RSPD_SWAT: SMD_RACS_MP //RSPD Night Camo BDU - Black Vest - Helmet and Knee Pads //Textures by Pliskin
		{
			faction = "smd_rspd";
			displayName = "RSPD SWAT Night Camo";
			model = "\vil_police\vil_swat";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_swat_bdu_rspd_swat_co.paa"};
		};
		class SMD_RSPD_SWAT_DIGI: SMD_RACS_MP //RSPD Digital Black BDU - Black Vest - Helmet and Knee Pads //Textures by Pliskin
		{
			faction = "smd_rspd";
			displayName = "RSPD SWAT Digital Night Camo";
			model = "\vil_police\vil_swat";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_swat_bdu_rspd_swat_digi_co.paa"};
		};
		class SMD_SARA_Sheriff: SMD_RACS_MP //Sherrif //unchanged original Vilas Work
		{
			faction = "smd_rspd";
			displayName = "RSPD Rosco P. Coltrane";
			weapons[] = {"revolver_EP1", "Throw", "Put", "ItemMap", "ItemWatch", "ItemRadio"};
			magazines[] = {"6Rnd_45ACP", "6Rnd_45ACP", "6Rnd_45ACP", "6Rnd_45ACP", "6Rnd_45ACP", "6Rnd_45ACP"};
			model = "\vil_police\vil_cop3";
		};
		class SMD_Sniper_D : BAF_Soldier_SniperH_W   //Desert Ghillie (Coverall) //Textures by Pliskin
		{
			faction = "smd_racs";
			displayName = "RACS Sniper (Overall)";
			weapons[] = {"M24_des_EP1", "Throw", "Put", "ItemMap", "Binocular_Vector", "ItemWatch", "ItemRadio"};
			magazines[] = {"5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24"};
			hiddenSelectionsTextures[] = {"\smd_assets\characters\textures\smd_ghillie_des_coverall_co.paa"};
		};	
		class SMD_Sniper_D_Upper : GUE_Soldier_Scout  //Desert Ghillie (Upper Only) //Textures by Pliskin
		{
			side = "TWest";
			faction = "smd_racs";
			displayName = "RACS Sniper (top)";
			weapons[] = {"M24_des_EP1", "Throw", "Put", "ItemMap", "Binocular_Vector", "ItemWatch", "ItemRadio"};
			magazines[] = {"5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24"};
			primaryLanguage = "EN";
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\smd_assets\characters\textures\smd_ghillie_des_tophalf_co.paa"};
		};		
		class SMD_SLA_MP: SoldierEB  //SLA Autum Camo - Black Vest - No Helmet or Knee Pads //Textures by Pliskin
		{
			vehicleClass = "smd_vilas_units";
			scope = 2;
			side=TEast;
			faction = "smd_sla";
			displayName = "SLA Autumn MP";
			weapons[] = {"AK_74", "NVGoggles", "ItemGPS", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
			magazines[] = {"30Rnd_545x39_AK", "30Rnd_545x39_AK", "30Rnd_545x39_AK", "30Rnd_545x39_AK", "HandGrenade_West", "HandGrenade_West"};
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
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_cop_bdu_sla_autumn_co.paa"};
			class Wounds 
			{ 
				tex[] = {};
				mat[] = {"vil_police\police_body.rvmat", "vil_police\police_body_de.rVmat", "vil_police\police_body_de.rVmat"}; 
			};
		};		
		class SMD_SLA_MP_BLACK: SMD_SLA_MP //SLA Black FLAT - Black Vest - No Helmet and Knee Pads //Textures by Pliskin
		{
			faction = "smd_sla";
			displayName = "SLA Black MP";
			model = "\vil_police\vil_cop";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_cop_bdu_sla_blackops_co.paa"};
		};	
		class SMD_SLA_MP_DESERT: SMD_SLA_MP //SLA Black FLAT - Black Vest - No Helmet and Knee Pads //Textures by Pliskin
		{
			faction = "smd_sla";
			displayName = "SLA Desert MP";
			model = "\vil_police\vil_cop";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_cop_bdu_sla_desert_co.paa"};
		};		
		class SMD_SLA_MP_GREEN: SMD_SLA_MP //SLA Black FLAT - Black Vest - No Helmet and Knee Pads //Textures by Pliskin
		{
			faction = "smd_sla";
			displayName = "SLA Green MP";
			model = "\vil_police\vil_cop";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_cop_bdu_sla_green_co.paa"};
		};
		class SMD_SLA_MP_URBAN: SMD_SLA_MP //SLA Black FLAT - Black Vest - No Helmet and Knee Pads //Textures by Pliskin
		{
			faction = "smd_sla";
			displayName = "SLA Urban MP";
			model = "\vil_police\vil_cop";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_cop_bdu_sla_urban_co.paa"};
		};		
		class SMD_SLA_SWAT: SMD_SLA_MP //SLA Autum Camo - Black Vest - Helmet and Knee Pads //Textures by Pliskin
		{
			faction = "smd_sla";
			displayName = "SLA Autumn SWAT";
			model = "\vil_police\vil_swat";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_swat_bdu_sla_autumn_co.paa"};
		};
		class SMD_SLA_SWAT_BLACK: SMD_SLA_SWAT //SLA Autum Camo - Black Vest - Helmet and Knee Pads //Textures by Pliskin
		{
			faction = "smd_sla";
			displayName = "SLA Black SWAT";
			model = "\vil_police\vil_swat";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_swat_bdu_sla_blackops_co.paa"};
		};		
		class SMD_SLA_SWAT_DESERT: SMD_SLA_SWAT //SLA Autum Camo - Black Vest - Helmet and Knee Pads //Textures by Pliskin
		{
			faction = "smd_sla";
			displayName = "SLA Desert SWAT";
			model = "\vil_police\vil_swat";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_swat_bdu_sla_desert_co.paa"};
		};
		class SMD_SLA_SWAT_GREEN: SMD_SLA_SWAT //SLA Autum Camo - Black Vest - Helmet and Knee Pads //Textures by Pliskin
		{
			faction = "smd_sla";
			displayName = "SLA Green SWAT";
			model = "\vil_police\vil_swat";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_swat_bdu_sla_green_co.paa"};
		};
		class SMD_SLA_SWAT_URBAN: SMD_SLA_SWAT //SLA Autum Camo - Black Vest - Helmet and Knee Pads //Textures by Pliskin
		{
			faction = "smd_sla";
			displayName = "SLA Urban SWAT";
			model = "\vil_police\vil_swat";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_swat_bdu_sla_urban_co.paa"};
		};		
		class SMD_TIGER_CAMO: SMD_RACS_MP //Tiger Camo - Black Vest - Helmet and Knee Pads //Textures by Pliskin
		{
			faction = "smd_pmc";
			displayName = "PMC Tiger Camo";
			model = "\vil_police\vil_swat";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_swat_bdu_tigerstripe_co.paa"};
		};
		class SMD_US_SpecOps: SMD_RACS_MP //US SPEC OPS NO Helmet/Pads //Textures by Pliskin
		{
			faction = "smd_black_ops";
			displayName = "US Black Ops";
			model = "\vil_police\vil_cop";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_cop_bdu_us_blackops_co.paa"};
		};
		class SMD_US_SpecOps_DIGI: SMD_RACS_MP //US SPEC OPS Digi NO Helmet/Pads //Textures by Pliskin
		{ 
			faction = "smd_black_ops";
			displayName = "US Black Ops";
			model = "\vil_police\vil_cop";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_cop_bdu_us_blackops_mp_digi_co.paa"};
		};
		class SMD_US_SpecOps_MP_DIGI: SMD_RACS_MP  //US SPEC OPS Digi BDU - Black Vest - Helmet/Pads //Textures by Pliskin
		{
			faction = "smd_black_ops";
			displayName = "US Black Ops";
			model = "\vil_police\vil_swat";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_swat_bdu_us_blackops_digi_co.paa"};
		};
		class sah_civilian1_pants: Survivor2_DZ
		{
			scope = 2;
			model = "\sara_civilians\civil_1_tshirt.p3d";
			displayName = "S_Civ1_P";
			class Wounds
			{
				tex[] = {};
				mat[] = {"sara_civilians\data\civil_tshirt_body.rvmat","sara_civilians\data\civil_tshirt_body_wound1.rvmat","sara_civilians\data\civil_tshirt_body_wound2.rvmat","ca\characters\heads\male\defaulthead\data\hhl_white.rvmat","sara_civilians\data\civil_1_tshirt_hhl_wound1.rvmat","sara_civilians\data\civil_1_tshirt_hhl_wound2.rvmat"};
			};
		};
		
		class sah_civilian2_pants: sah_civilian1_pants
		{
			model = "\sara_civilians\civil_2_tshirt.p3d";
			displayName = "S_Civ2_P";
		};
		class sah_civilian3_pants: sah_civilian1_pants
		{
			model = "\sara_civilians\civil_3_tshirt.p3d";
			displayName = "S_Civ3_P";
		};
		class sah_civilian4_pants: sah_civilian1_pants
		{
			model = "\sara_civilians\civil_4_tshirt.p3d";
			displayName = "S_Civ4_P";
		};
		class sah_civilian5_pants: sah_civilian1_pants
		{
			model = "\sara_civilians\civil_5_tshirt.p3d";
			displayName = "S_Civ5_P";
		};
		class sah_civilian6_pants: sah_civilian1_pants
		{
			model = "\sara_civilians\civil_6_tshirt.p3d";
			displayName = "S_Civ6_P";
		};
		class sah_civilian7_pants: sah_civilian1_pants
		{
			model = "\sara_civilians\civil_7_tshirt.p3d";
			displayName = "S_Civ7_P";
		};
		class sah_civilian1_shorts: Survivor2_DZ
		{
			scope = 2;
			model = "\sara_civilians\civil_1_tshirt_shorts.p3d";
			displayName = "S_Civ1_S";
			class Wounds
			{
				tex[] = {};
				mat[] = {"sara_civilians\data\civil_tshirt_shorts_body.rvmat","sara_civilians\data\civil_tshirt_shorts_body_wound1.rvmat","sara_civilians\data\civil_tshirt_shorts_body_wound2.rvmat","ca\characters\heads\male\defaulthead\data\hhl_white.rvmat","sara_civilians\data\civil_1_tshirt_hhl_wound1.rvmat","sara_civilians\data\civil_1_tshirt_hhl_wound2.rvmat"};
			};
		};
		class sah_civilian2_shorts: sah_civilian1_shorts
		{
			model = "\sara_civilians\civil_2_tshirt_shorts.p3d";
			displayName = "S_Civ2_S";
		};
		class sah_civilian3_shorts: sah_civilian1_shorts
		{
			model = "\sara_civilians\civil_3_tshirt_shorts.p3d";
			displayName = "S_Civ3_S";
		};
		class sah_civilian4_shorts: sah_civilian1_shorts
		{
			model = "\sara_civilians\civil_4_tshirt_shorts.p3d";
			displayName = "S_Civ4_S";
		};
		class sah_civilian5_shorts: sah_civilian1_shorts
		{
			model = "\sara_civilians\civil_5_tshirt_shorts.p3d";
			displayName = "S_Civ5_S";
		};
		class sah_civilian6_shorts: sah_civilian1_shorts
		{
			model = "\sara_civilians\civil_6_tshirt_shorts.p3d";
			displayName = "S_Civ6_S";
		};
		class sah_civilian7_shorts: sah_civilian1_shorts
		{
			model = "\sara_civilians\civil_7_tshirt_shorts.p3d";
			displayName = "S_Civ7_S";
		};///////////////////////////////////////////////////// BEGIN SMD VEHICLE DEFINITIONS/////////////////////////////////		
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
			displayname = "UH1H (Unmarked)";
			displaynameshort = "UH1H (Unmarked)";	
			hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_uh1_blackops_co.paa", "smd_assets\vehicles\textures\smd_veh_uh1_blackops_in_co.paa", "ca\air_E\UH1H\data\default_co.paa"};
		};
		class UH1H_SMD_BLOPS_DIGI: UH1H_TK_EP1 //Textures by Pliskin
		{
			faction = "smd_racs";
			displayname = "UH1H (Unmarked) Digital";
			displaynameshort = "UH1H (Unmarked) Digital";	
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
		class SUV_SMD_ATACS: SUV_TK_EP1 
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "SUV ATACS";
			HiddenSelections[] = {"camo"};
			HiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_suv_atacs_body_co.paa"};
		};
		class SUV_SMD_BLOPS: SUV_TK_EP1 
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "SUV (Unmarked)";
			hiddenselections[] = {"Camo"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_suv_blackops_body_co.paa"};
		};
		class SUV_SMD_BLOPS_DIGI: SUV_TK_EP1 
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "SUV (Unmarked) Digital";
			hiddenselections[] = {"Camo"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_suv_blackops_digital_body_co.paa"};
		};
		class SUV_SMD_RACS: SUV_TK_EP1 
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "SUV RACS";
			hiddenselections[] = {"Camo"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_suv_racs_body_co.paa"};
		};
		class SUV_SMD_RACS_DIGI: SUV_TK_EP1 
		{
			side=TWest;
			faction = "smd_racs";
			displayname = "SUV RACS Digital";
			hiddenselections[] = {"Camo"};
			hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_suv_racs_digi_body_co.paa"};
		};///////////////////////////////////////////////////// BEGIN SMD VEHICLE DEFINITIONS/////////////////////////////////	
		class zZombie_Base : Citizen1 {
			scope = public;
			glassesEnabled = 0;
			vehicleClass = "Zombie";
			displayName = "Zombie";
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
		};
		class z_sah_civilian1_pants: zZombie_Base
		{
			scope = 2;
			faction = "smdz_saracivs";
			model = "\sara_civilians\civil_1_tshirt.p3d";
			vehicleClass = "Sah_Zed_Shorts";
			displayName = "S_Zombie1_P";
			class Wounds
			{
				tex[] = {};
				mat[] = {"sara_civilians\data\civil_tshirt_body.rvmat","sara_civilians\data\civil_tshirt_body_wound1.rvmat","sara_civilians\data\civil_tshirt_body_wound2.rvmat","ca\characters\heads\male\defaulthead\data\hhl_white.rvmat","sara_civilians\data\civil_1_tshirt_hhl_wound1.rvmat","sara_civilians\data\civil_1_tshirt_hhl_wound2.rvmat"};
			};
		};	
		class z_sah_civilian2_pants: z_sah_civilian1_pants
		{
			model = "\sara_civilians\civil_2_tshirt.p3d";
			displayName = "S_Zombie2_P";
		};
		class z_sah_civilian3_pants: z_sah_civilian1_pants
		{
			model = "\sara_civilians\civil_3_tshirt.p3d";
			displayName = "S_Zombie3_P";
		};
		class z_sah_civilian4_pants: z_sah_civilian1_pants
		{
			model = "\sara_civilians\civil_4_tshirt.p3d";
			displayName = "S_Zombie4_P";
		};
		class z_sah_civilian5_pants: z_sah_civilian1_pants
		{
			model = "\sara_civilians\civil_5_tshirt.p3d";
			displayName = "S_Zombie5_P";
		};
		class z_sah_civilian6_pants: z_sah_civilian1_pants
		{
			model = "\sara_civilians\civil_6_tshirt.p3d";
			displayName = "S_Zombie6_P";
		};
		class z_sah_civilian7_pants: z_sah_civilian1_pants
		{
			model = "\sara_civilians\civil_7_tshirt.p3d";
			displayName = "S_Zombie7_P";
		};
		class z_sah_civilian1_shorts: zZombie_Base
		{
			scope = 2;
			faction = "smdz_saracivs";
			model = "\sara_civilians\civil_1_tshirt_shorts.p3d";
			vehicleClass = "Sah_Zed_Pants";
			displayName = "S_Zombie1_S";
			class Wounds
			{
				tex[] = {};
				mat[] = {"sara_civilians\data\civil_tshirt_shorts_body.rvmat","sara_civilians\data\civil_tshirt_shorts_body_wound1.rvmat","sara_civilians\data\civil_tshirt_shorts_body_wound2.rvmat","ca\characters\heads\male\defaulthead\data\hhl_white.rvmat","sara_civilians\data\civil_1_tshirt_hhl_wound1.rvmat","sara_civilians\data\civil_1_tshirt_hhl_wound2.rvmat"};
			};
		};
		class z_sah_civilian2_shorts: z_sah_civilian1_shorts
		{
			model = "\sara_civilians\civil_2_tshirt_shorts.p3d";
			displayName = "S_Zombie2_S";
		};
		class z_sah_civilian3_shorts: z_sah_civilian1_shorts
		{
			model = "\sara_civilians\civil_3_tshirt_shorts.p3d";
			displayName = "S_Zombie3_S";
		};
		class z_sah_civilian4_shorts: z_sah_civilian1_shorts
		{
			model = "\sara_civilians\civil_4_tshirt_shorts.p3d";
			displayName = "S_Zombie4_S";
		};
		class z_sah_civilian5_shorts: z_sah_civilian1_shorts
		{
			model = "\sara_civilians\civil_5_tshirt_shorts.p3d";
			displayName = "S_Zombie5_S";
		};
		class z_sah_civilian6_shorts: z_sah_civilian1_shorts
		{
			model = "\sara_civilians\civil_6_tshirt_shorts.p3d";
			displayName = "S_Zombie6_S";
		};
		class z_sah_civilian7_shorts: z_sah_civilian1_shorts
		{
			model = "\sara_civilians\civil_7_tshirt_shorts.p3d";
			displayName = "S_Zombie7_S";////////// FACTION - Desc - Head Gear - Color of Vest
		};//////////////////////////////////////// Ex. RACS - Tan Camo - Helmet - Black Vest
		class z_soldier: Citizen1 {
			scope = public;
			glassesEnabled = 0;
			vehicleClass = "Zombie";
			displayName = "Zombie";
			fsmDanger = "";
			fsmFormation = "";
			zombieLoot = "civilian";
			moves = "CfgMovesZombie";
			isMan = false;
			weapons[] = {};
			magazines[] = {};
			sensitivity = 5;	// sensor sensitivity
			sensitivityEar = 3;
			identityTypes[] = {"zombie1", "zombie2"};
			class TalkTopics {};
			languages[] = {};
			
			class Eventhandlers {
			
				class Eventhandlers {
					init = "_this call zombie_initialize;";
					local = "if(_this select 1) then {[(position (_this select 0)),(_this select 0),true] execFSM '\z\AddOns\dayz_code\system\zombie_agent.fsm'};";
				};
				
				class HitPoints {
					class HitHead {
						armor = 0.4;
						material = -1;
						name = "head_hit";
						passThrough = true;
						memoryPoint = "pilot";
					};
					
					class HitBody : HitHead {
						armor = 4;
						name = "body";
						memoryPoint = "aimPoint";
					};
					
					class HitSpine : HitHead {
						armor = 4;
						name = "Spine2";
						memoryPoint = "aimPoint";
					};
					
					class HitHands : HitHead {
						armor = 1;
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
		};
		class z_soldier_heavy: Citizen1 {
			scope = public;
			glassesEnabled = 0;
			vehicleClass = "Zombie";
			displayName = "Zombie";
			fsmDanger = "";
			fsmFormation = "";
			zombieLoot = "civilian";
			moves = "CfgMovesZombie";
			isMan = false;
			weapons[] = {};
			magazines[] = {};
			sensitivity = 3.5;	// sensor sensitivity
			sensitivityEar = 1;
			identityTypes[] = {"zombie1", "zombie2"};
			class TalkTopics {};
			languages[] = {};
			
			class Eventhandlers {
			
				class Eventhandlers {
					init = "_this call zombie_initialize;";
					local = "if(_this select 1) then {[(position (_this select 0)),(_this select 0),true] execFSM '\z\AddOns\dayz_code\system\zombie_agent.fsm'};";
				};
				
				class HitPoints {
					class HitHead {
						armor = 2;
						material = -1;
						name = "head_hit";
						passThrough = true;
						memoryPoint = "pilot";
					};
					
					class HitBody : HitHead {
						armor = 4;
						name = "body";
						memoryPoint = "aimPoint";
					};
					
					class HitSpine : HitHead {
						armor = 4;
						name = "Spine2";
						memoryPoint = "aimPoint";
					};
					
					class HitHands : HitHead {
						armor = 1;
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
		};
		class z_RACSzombie : z_soldier_heavy{	 ///// RACS Tan Camo - Black Helmet - Black Vest
			faction = "smdz_racs";
			vehicleClass = "racz_heavy";
			displayName = "RACZ Regular";
			model = "\vil_police\vil_swat";
			hiddenSelections[] = {"Camo01"};
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_swat_bdu_racs_regular_co.paa"};
			zombieLoot = "military";
			class HitPoints {
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
		class z_RACSzombie2 : zZombie_Base { //RSPD Sherriff
			displayName = "RZPD Sherriff";
			faction = "smdz_rspd";
			model = "\vil_police\vil_cop3";
		};	
		class z_RACSzombie3 : z_soldier_heavy {	 //RSPD Night Camo - Black Helmet - Black Vest
			displayName = "RZPD SWAT";
			faction = "smdz_rspd";
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_swat_bdu_rspd_swat_co.paa"};
		};	
		class z_RACSzombie4 : z_soldier {	 //BLOPS Flat Grey - NO Helmet - Black Vest
			displayName = "BLOPZ Grey";
			faction = "smdz_blops";
			model = "\vil_police\vil_cop";
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_cop_bdu_us_blackops_co.paa"};
		};	
		class z_RACSzombie5 : z_soldier {	 //RACS Flat Tan - NO Helmet - Black Vest
			displayName = "RACZ TAN/Bl MP";
			faction = "smdz_racs";
			model = "\vil_police\vil_cop";
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_cop_bdu_racs_mp_co.paa"};
		};	
		class z_RACSzombie6 : z_soldier {	 //RACS Flat Tan - NO Helmet - Blended Vest
			displayName = "RACZ TAN MP";
			faction = "smdz_racs";
			model = "\vil_police\vil_cop";
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_cop_bdu_racs_mp_tan_co.paa"};
		};	
		class z_RACSzombie7 : z_soldier {	 //RACS Digi Tan Camo - NO Helmet - Blended Vest
			displayName = "RACZ TAN DIGI MP";
			faction = "smdz_racs";
			model = "\vil_police\vil_cop";
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_cop_bdu_racs_mp_tan_digi_co.paa"};
		};	
		class z_RACSzombie8 : z_soldier_heavy {	 //RACS Tan Digi Camo - Black Helmet - Black Vest 
			displayName = "RACZ TAN DIGI Heavy";
			faction = "smdz_racs";
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_swat_bdu_racs_regular_digi_co.paa"};
		};	
		class z_RACSzombie9 : z_soldier {	 //BLOPS Grey Digi Camo - NO Helmet - Blended Vest
			displayName = "BLOPZ Digi MP";
			faction = "smdz_blops";
			model = "\vil_police\vil_cop";
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_cop_bdu_us_blackops_mp_digi_co.paa"};
		};	
		class z_RACSzombie10 : z_soldier_heavy {	 //BLOPS Grey Digi Camo - Black Helmet - Black Vest
			displayName = "BLOPZ DIGI Heavy";
			faction = "smdz_blops";
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_swat_bdu_us_blackops_digi_co.paa"};
		};	
		class z_RACSzombie11 : z_soldier_heavy {	 //RSPD Black Digi Camo - Black Helmet - Black Vest
			displayName = "RZPD BLACK DIGI Heavy";
			faction = "smdz_rspd";
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_swat_bdu_rspd_swat_digi_co.paa"};
		};
		class z_RACSzombie12 : z_soldier {	 //RSPD Blue Digi Camo - NO Helmet - Black Vest
			displayName = "RZPD BLUE MP";
			faction = "smdz_rspd";
			model = "\vil_police\vil_cop";
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_cop_bdu_rspd_blue_digi_co.paa"};
		};
		class z_RACSzombie13 : z_soldier {	 //RSPD Flat Blue - NO Helmet - Black Vest 
			displayName = "RZPD BLUE MP";
			faction = "smdz_rspd";
			model = "\vil_police\vil_cop";
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_cop_bdu_rspd_blue_co.paa"};
		};
		class z_RACSzombie14 : z_soldier_heavy {	 //RSPD Flat Black - Black Helmet - Black Vest
			displayName = "RZPD BLACK Heavy";
			faction = "smdz_rspd";
			hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_swat_bdu_rspd_black_co.paa"};
		};				
	};