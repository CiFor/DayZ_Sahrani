class CfgVehicles {
	class Survivor2_DZ;
	class AllVehicles;
	class Air : AllVehicles 
	{
		class NewTurret;
		class ViewPilot;
		class AnimationSources;
	};
	
	class Helicopter : Air 
	{
		class HitPoints; 
		class Turrets
        {
            class MainTurret: NewTurret
            {
                class Turrets;
				class ViewOptics;
            };
        };
	};
	
	class AH6_Base_EP1;
	class AH6X_DZ: AH6_Base_EP1
	{
		displayname = "AH6X Little Bird";
		displaynameshort = "AH6X";
		audible = 6;
		enablemanualfire = 0;
		scope = 2;
		side = 2;
		crew = "";
		typicalCargo[] = {};
		hiddenselections[] = {"camo1"};
		hiddenselectionstextures[] = {"ca\air_e\ah6j\data\ah6_merge1_co.paa"};
		icon = "\ca\air_e\data\UI\Icon_ah6x_CA.paa";
		model = "\ca\air_e\ah6j\ah6x";
		picture = "\ca\air_e\data\UI\Picture_ah6x_CA.paa";
		isuav = 0;
		radartype = 0;
		class TransportMagazines{};
		class TransportWeapons{};
		weapons[] = {};
		magazines[] = {};
		commanderCanSee = 2+16+32;
		gunnerCanSee = 2+16+32;
		driverCanSee = 2+16+32;
		transportMaxWeapons = 10;
		transportMaxMagazines = 30;
        transportmaxbackpacks = 5;
		class Turrets {};
	};
	
	class AH6X_SMD_ATACS : AH6X_DZ
	{
		displayname = "AH6X (ATACS)";
		displaynameshort = "AH6X (ATACS)";
		hiddenselections[] = {"camo1"};
		hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_ah6_atacs_co.paa"};
	};
	
	class AH6X_SMD_MAGPI : AH6X_DZ
	{
		displayname = "AH6X (ATACS)";
		displaynameshort = "AH6X (ATACS)";
		hiddenselections[] = {"camo1"};
		hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_ah6_magnumpi_co.paa"};
	};
	
	class AH6X_SMD_RACS : AH6X_DZ
	{
		displayname = "AH6X (RACS)";
		displaynameshort = "AH6X (RACS)";
		hiddenselections[] = {"camo1"};
		hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_ah6_racs_co.paa"};
	};
	
	class AH6X_SMD_RACS_DIGI : AH6X_DZ
	{
		displayname = "AH6X (RACS) Digital";
		displaynameshort = "AH6X (RACS) Digital";
		hiddenselections[] = {"camo1"};
		hiddenselectionstextures[] = {"smd_assets\vehicles\textures\smd_veh_ah6_racs_digi_co.paa"};
	};
	
	class An2_Base_EP1;
	
	class AN2_DZ: An2_Base_EP1
	{
		displayname = "AN2 Cargo Plane";
		displaynameshort = "AN2";
		scope = 2;
		side = 2;
		crew = "";
		typicalCargo[] = {};
		hiddenSelections[] = {};
		class TransportMagazines{};
		class TransportWeapons{};
		weapons[] = {};
		magazines[] = {};
		gunnerHasFlares = false;
		commanderCanSee = 2+16+32;
		gunnerCanSee = 2+16+32;
		driverCanSee = 2+16+32;
		transportMaxWeapons = 10;
		transportMaxMagazines = 80;
		transportmaxbackpacks = 15;
	};

	class Plane;
	class C130_base: Plane 
	{
		destrType = "DestructWreck";
		scope = 2;
		radartype = 0;
		side = 1;
		cabinOpening = "false";
		displayname = "$STR_DN_C130J";
		class Library
		{
		 libTextDesc = "$STR_LIB_C130J";
		};
		class Damage
		{
		 tex[] = {};
		 mat[] = {"ca\air2\C130J\DATA\c130j_sklo.rvmat","ca\air2\C130J\DATA\c130j_sklo_damage.rvmat","ca\air2\C130J\DATA\c130j_sklo_damage.rvmat","ca\air2\C130J\DATA\c130j_sklo_in.rvmat","ca\air2\C130J\DATA\c130j_sklo_in_damage.rvmat","ca\air2\C130J\DATA\c130j_sklo_in_damage.rvmat","ca\air2\C130J\DATA\c130j_body.rvmat","ca\air2\C130J\DATA\c130j_body_damage.rvmat","ca\air2\C130J\DATA\c130j_body_destruct.rvmat","ca\air2\C130J\DATA\c130j_interior.rvmat","ca\air2\C130J\DATA\c130j_interior_damage.rvmat","ca\air2\C130J\DATA\c130j_interior_destruct.rvmat","ca\air2\C130J\DATA\c130j_wings.rvmat","ca\air2\C130J\DATA\c130j_wings_damage.rvmat","ca\air2\C130J\DATA\c130j_wings_destruct.rvmat"};
		};
		vehicleClass = "Air";
		faction = "USMC";
		model = "\ca\air_E\c130j\c130j.p3d";
		mapSize = 25;
		maxSpeed = 648;
		accuracy = 0.15;
		cost = 20000;
		armor = 70;
		driverAction = "C130_Pilot";
		cargoAction[] = {"C130_Cargo","Mi17_Cargo02"};
		crew = "USMC_Soldier_Pilot";
		typicalCargo[] = {"USMC_Soldier_Pilot","USMC_Soldier"};
		transportSoldier = 25;
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		soundGetIn[] = {"ca\sounds\Air\C130\close",0.31622776,1};
		soundGetOut[] = {"ca\sounds\Air\C130\open",0.31622776,1,40};
		soundDammage[] = {"ca\sounds\Air\C130\int-alarm_loop",0.56234133,1};
		soundEngineOnInt[] = {"ca\sounds\Air\C130\int_start_1",0.39810717,1.0};
		soundEngineOnExt[] = {"ca\sounds\Air\C130\ext_start_1",0.39810717,1.0,700};
		soundEngineOffInt[] = {"ca\sounds\Air\C130\int_stop_1",0.39810717,1.0};
		soundEngineOffExt[] = {"ca\sounds\Air\C130\ext_stop_1",0.39810717,1.0,700};
		class Sounds
		{
		 class EngineLowOut
		 {
				sound[] = {"ca\sounds\Air\C130\ext_engine_low",1.7782794,1,900};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*engineOn*(rpm factor[0.85, 0])";
		 };
		 class EngineHighOut
		 {
				sound[] = {"ca\sounds\Air\C130\ext_engine_hi",1.7782794,1,1100};
				frequency = "1";
				volume = "camPos*engineOn*(rpm factor[0.55, 1.0])";
		 };
		 class ForsageOut
		 {
				sound[] = {"ca\sounds\Air\C130\ext_forsage_1",1.4125376,1,1500};
				frequency = "1";
				volume = "camPos*engineOn*(thrust factor[0.5, 1.0])";
				cone[] = {1.14,3.92,2.0,0.4};
		 };
		 class WindNoiseOut
		 {
				sound[] = {"ca\sounds\Air\C130\ext-wind1",0.001,0.6,150};
				frequency = "(0.1+(1.2*(speed factor[1, 100])))";
				volume = "camPos*(speed factor[1, 100])";
		 };
		 class EngineLowIn
		 {
				sound[] = {"ca\sounds\Air\C130\int_engine_low",1.0,1.0};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.85, 0]))";
		 };
		 class EngineHighIn
		 {
				sound[] = {"ca\sounds\Air\C130\int_engine_hi",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))";
		 };
		 class ForsageIn
		 {
				sound[] = {"ca\sounds\Air\C130\int_forsage_1",1.4125376,1.1};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.5, 1.0]))";
		 };
		 class WindNoiseIn
		 {
				sound[] = {"ca\sounds\Air\C130\int-wind1",0.001,0.6};
				frequency = "(0.1+(1.2*(speed factor[1, 100])))";
				volume = "(1-camPos)*(speed factor[1, 100])";
		 };
		};
		class Reflectors
		{
		 class Left
		 {
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 1.0;
		 };
		 class Right
		 {
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				brightness = 1.0;
		 };
		 class Left2
		 {
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "L2 svetlo";
				direction = "konec L2 svetla";
				hitpoint = "L2 svetlo";
				selection = "L2 svetlo";
				size = 1;
				brightness = 1.0;
		 };
		 class Right2
		 {
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "P2 svetlo";
				direction = "konec P2 svetla";
				hitpoint = "P2 svetlo";
				selection = "P2 svetlo";
				size = 1;
				brightness = 1.0;
		 };
		};
		weapons[] = {};
		magazines[] = {};
		threat[] = {0.1,0.5,0.8};
		ejectSpeed[] = {0,0,0};
		landingAoa = "rad 7";
		landingSpeed = 200;
		extCameraPosition[] = {0,5,-40};
		envelope[] = {0.0,0.1,0.5,1.5,3.1,4.3,4.9,5,4.4,2.8,1.6,0.8,0};
		flapsFrictionCoef = 2;
		wheelSteeringSensitivity = 2.0;
		aileronSensitivity = 1;
		elevatorSensitivity = 1;
		noseDownCoef = 1;
		gearUpTime = 4.5;
		gearDownTime = 3;
		class AnimationSources
		{
		 class door_2_2
		 {
				source = "user";
				animPeriod = 2.5;
		 };
		 class door_2_1: door_2_2{};
		 class door_1: door_2_2{};
		 class ramp_top: door_2_2{};
		 class ramp_bottom: door_2_2{};
		};
		class MFD
		{
		 class AirplaneHUD
		 {
				class Pos10Vector
				{
				 type = "vector";
				 pos0[] = {0.5,0.3};
				 pos10[] = {0.9,0.75};
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0,1,0,0.1};
				class Bones
				{
				 class PlaneW
				 {
						type = "fixed";
						pos[] = {0.5,0.34};
				 };
				 class WeaponAim: Pos10Vector
				 {
						source = "weapon";
				 };
				 class Target: Pos10Vector
				 {
						source = "target";
				 };
				 class Velocity: Pos10Vector
				 {
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,0.3};
						pos10[] = {0.9,0.75};
				 };
				 class ILS_H
				 {
						type = "ils";
						pos0[] = {0.5,0.3};
						pos3[] = {0.62,0.3};
				 };
				 class ILS_W: ILS_H
				 {
						pos3[] = {0.5,0.435};
				 };
				 class Level0: Pos10Vector
				 {
						pos0[] = {0.5,0.34};
						pos10[] = {0.9,0.79};
						type = "horizon";
						angle = 0;
				 };
				 class LevelP5: Level0
				 {
						angle = 5;
				 };
				 class LevelM5: Level0
				 {
						angle = -5;
				 };
				 class LevelP10: Level0
				 {
						angle = 10;
				 };
				 class LevelM10: Level0
				 {
						angle = -10;
				 };
				 class LevelP15: Level0
				 {
						angle = 15;
				 };
				 class LevelM15: Level0
				 {
						angle = -15;
				 };
				 class LevelP20: Level0
				 {
						angle = 20;
				 };
				 class LevelM20: Level0
				 {
						angle = -20;
				 };
				 class LevelP25: Level0
				 {
						angle = 25;
				 };
				 class LevelM25: Level0
				 {
						angle = -25;
				 };
				 class LevelP30: Level0
				 {
						angle = 30;
				 };
				 class LevelM30: Level0
				 {
						angle = -30;
				 };
				 class LevelP35: Level0
				 {
						angle = 35;
				 };
				 class LevelM35: Level0
				 {
						angle = -35;
				 };
				 class LevelP40: Level0
				 {
						angle = 40;
				 };
				 class LevelM40: Level0
				 {
						angle = -40;
				 };
				 class LevelP45: Level0
				 {
						angle = 45;
				 };
				 class LevelM45: Level0
				 {
						angle = -45;
				 };
				 class LevelP50: Level0
				 {
						angle = 50;
				 };
				 class LevelM50: Level0
				 {
						angle = -50;
				 };
				};
				class Draw
				{
				 alpha = 0.4;
				 color[] = {0.0,0.3,0.05};
				 condition = "on";
				 class PlaneW
				 {
						clipTL[] = {0.0,1.0};
						clipBR[] = {1.0,0.0};
						type = "line";
						points[] = {
						 { "PlaneW",
								{ -0.08,0 },1 },
						 { "PlaneW",
								{ -0.03,0 },1 },
						 { "PlaneW",
								{ -0.015,0.03375 },1 },
						 { "PlaneW",
								{ 0.0,0 },1 },
						 { "PlaneW",
								{ 0.015,0.03375 },1 },
						 { "PlaneW",
								{ 0.03,0 },1 },
						 { "PlaneW",
								{ 0.08,0 },1 }};
				 };
				 class PlaneHeading
				 {
						clipTL[] = {0.0,1.0};
						clipBR[] = {1.0,0.0};
						type = "line";
						points[] = {
						 { "Velocity",
								{ 0,-0.0225 },1 },
						 { "Velocity",
								{ 0.014,-0.01575 },1 },
						 { "Velocity",
								{ 0.02,0 },1 },
						 { "Velocity",
								{ 0.014,0.01575 },1 },
						 { "Velocity",
								{ 0,0.0225 },1 },
						 { "Velocity",
								{ -0.014,0.01575 },1 },
						 { "Velocity",
								{ -0.02,0 },1 },
						 { "Velocity",
								{ -0.014,-0.01575 },1 },
						 { "Velocity",
								{ 0,-0.0225 },1 },
						 {		},
						 { "Velocity",
								{ 0.04,0 },1 },
						 { "Velocity",
								{ 0.02,0 },1 },
						 {		},
						 { "Velocity",
								{ -0.04,0 },1 },
						 { "Velocity",
								{ -0.02,0 },1 },
						 {		},
						 { "Velocity",
								{ 0,-0.045 },1 },
						 { "Velocity",
								{ 0,-0.0225 },1 },
						 {		}};
				 };
				 class Static
				 {
						clipTL[] = {0.0,0.1};
						clipBR[] = {1.0,0.0};
						type = "line";
						points[] = {
						 { 
								{ 0.21,0.52 },1 },
						 { 
								{ 0.19,0.5 },1 },
						 { 
								{ 0.21,0.48 },1 },
						 {		},
						 { 
								{ 0.18,0.2 },1 },
						 { 
								{ 0.18,0.85 },1 },
						 {		},
						 { 
								{ 0.79,0.52 },1 },
						 { 
								{ 0.81,0.5 },1 },
						 { 
								{ 0.79,0.48 },1 },
						 {		},
						 { 
								{ 0.82,0.2 },1 },
						 { 
								{ 0.82,0.85 },1 },
						 {		},
						 { 
								{ 0.52,"0.08+0.01" },1 },
						 { 
								{ 0.5,"0.06+0.01" },1 },
						 { 
								{ 0.48,"0.08+0.01" },1 },
						 {		},
						 { 
								{ 0.2,"0.055+0.01" },1 },
						 { 
								{ 0.8,"0.055+0.01" },1 },
						 {		}};
				 };
				 class Horizont
				 {
						clipTL[] = {0.0,0.0};
						clipBR[] = {1.0,1.0};
						class Dimmed
						{
						 class Level0
						 {
								type = "line";
								points[] = {
								 { "Level0",
										{ -0.2,0 },1 },
								 { "Level0",
										{ -0.05,0 },1 },
								 {		},
								 { "Level0",
										{ 0.05,0 },1 },
								 { "Level0",
										{ 0.2,0 },1 }};
						 };
						 class VALM_1_0
						 {
								type = "text";
								source = "static";
								text = 0;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"Level0",
								 { -0.23,-0.025 },1};
								right[] = {"Level0",
								 { -0.13,-0.025 },1};
								down[] = {"Level0",
								 { -0.23,0.025 },1};
						 };
						 class VALM_2_0: VALM_1_0
						 {
								align = "right";
								pos[] = {"Level0",
								 { 0.22,-0.025 },1};
								right[] = {"Level0",
								 { 0.32,-0.025 },1};
								down[] = {"Level0",
								 { 0.22,0.025 },1};
						 };
						 class LevelM5: Level0
						 {
								type = "line";
								points[] = {
								 { "LevelM5",
										{ -0.2,-0.03 },1 },
								 { "LevelM5",
										{ -0.2,0 },1 },
								 { "LevelM5",
										{ -0.15,0 },1 },
								 {		},
								 { "LevelM5",
										{ -0.1,0 },1 },
								 { "LevelM5",
										{ -0.05,0 },1 },
								 {		},
								 { "LevelM5",
										{ 0.05,0 },1 },
								 { "LevelM5",
										{ 0.1,0 },1 },
								 {		},
								 { "LevelM5",
										{ 0.15,0 },1 },
								 { "LevelM5",
										{ 0.2,0 },1 },
								 { "LevelM5",
										{ 0.2,-0.03 },1 }};
						 };
						 class VALM_1_5
						 {
								type = "text";
								source = "static";
								text = -5;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM5",
								 { -0.23,-0.085 },1};
								right[] = {"LevelM5",
								 { -0.13,-0.085 },1};
								down[] = {"LevelM5",
								 { -0.23,-0.035 },1};
						 };
						 class VALM_2_5: VALM_1_5
						 {
								align = "right";
								pos[] = {"LevelM5",
								 { 0.22,-0.085 },1};
								right[] = {"LevelM5",
								 { 0.32,-0.085 },1};
								down[] = {"LevelM5",
								 { 0.22,-0.035 },1};
						 };
						 class LevelP5: Level0
						 {
								type = "line";
								points[] = {
								 { "LevelP5",
										{ -0.2,0.03 },1 },
								 { "LevelP5",
										{ -0.2,0 },1 },
								 { "LevelP5",
										{ -0.05,0 },1 },
								 {		},
								 { "LevelP5",
										{ 0.05,0 },1 },
								 { "LevelP5",
										{ 0.2,0 },1 },
								 { "LevelP5",
										{ 0.2,0.03 },1 }};
						 };
						 class VALP_1_5
						 {
								type = "text";
								source = "static";
								text = "5";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP5",
								 { -0.23,0.035 },1};
								right[] = {"LevelP5",
								 { -0.13,0.035 },1};
								down[] = {"LevelP5",
								 { -0.23,0.085 },1};
						 };
						 class VALP_2_5: VALP_1_5
						 {
								align = "right";
								pos[] = {"LevelP5",
								 { 0.22,0.035 },1};
								right[] = {"LevelP5",
								 { 0.32,0.035 },1};
								down[] = {"LevelP5",
								 { 0.22,0.085 },1};
						 };
						 class LevelM10: Level0
						 {
								type = "line";
								points[] = {
								 { "LevelM10",
										{ -0.2,-0.03 },1 },
								 { "LevelM10",
										{ -0.2,0 },1 },
								 { "LevelM10",
										{ -0.15,0 },1 },
								 {		},
								 { "LevelM10",
										{ -0.1,0 },1 },
								 { "LevelM10",
										{ -0.05,0 },1 },
								 {		},
								 { "LevelM10",
										{ 0.05,0 },1 },
								 { "LevelM10",
										{ 0.1,0 },1 },
								 {		},
								 { "LevelM10",
										{ 0.15,0 },1 },
								 { "LevelM10",
										{ 0.2,0 },1 },
								 { "LevelM10",
										{ 0.2,-0.03 },1 }};
						 };
						 class VALM_1_10
						 {
								type = "text";
								source = "static";
								text = -10;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM10",
								 { -0.23,-0.085 },1};
								right[] = {"LevelM10",
								 { -0.13,-0.085 },1};
								down[] = {"LevelM10",
								 { -0.23,-0.035 },1};
						 };
						 class VALM_2_10: VALM_1_10
						 {
								align = "right";
								pos[] = {"LevelM10",
								 { 0.22,-0.085 },1};
								right[] = {"LevelM10",
								 { 0.32,-0.085 },1};
								down[] = {"LevelM10",
								 { 0.22,-0.035 },1};
						 };
						 class LevelP10: Level0
						 {
								type = "line";
								points[] = {
								 { "LevelP10",
										{ -0.2,0.03 },1 },
								 { "LevelP10",
										{ -0.2,0 },1 },
								 { "LevelP10",
										{ -0.05,0 },1 },
								 {		},
								 { "LevelP10",
										{ 0.05,0 },1 },
								 { "LevelP10",
										{ 0.2,0 },1 },
								 { "LevelP10",
										{ 0.2,0.03 },1 }};
						 };
						 class VALP_1_10
						 {
								type = "text";
								source = "static";
								text = "10";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP10",
								 { -0.23,0.035 },1};
								right[] = {"LevelP10",
								 { -0.13,0.035 },1};
								down[] = {"LevelP10",
								 { -0.23,0.085 },1};
						 };
						 class VALP_2_10: VALP_1_10
						 {
								align = "right";
								pos[] = {"LevelP10",
								 { 0.22,0.035 },1};
								right[] = {"LevelP10",
								 { 0.32,0.035 },1};
								down[] = {"LevelP10",
								 { 0.22,0.085 },1};
						 };
						 class LevelM15: Level0
						 {
								type = "line";
								points[] = {
								 { "LevelM15",
										{ -0.2,-0.03 },1 },
								 { "LevelM15",
										{ -0.2,0 },1 },
								 { "LevelM15",
										{ -0.15,0 },1 },
								 {		},
								 { "LevelM15",
										{ -0.1,0 },1 },
								 { "LevelM15",
										{ -0.05,0 },1 },
								 {		},
								 { "LevelM15",
										{ 0.05,0 },1 },
								 { "LevelM15",
										{ 0.1,0 },1 },
								 {		},
								 { "LevelM15",
										{ 0.15,0 },1 },
								 { "LevelM15",
										{ 0.2,0 },1 },
								 { "LevelM15",
										{ 0.2,-0.03 },1 }};
						 };
						 class VALM_1_15
						 {
								type = "text";
								source = "static";
								text = -15;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM15",
								 { -0.23,-0.085 },1};
								right[] = {"LevelM15",
								 { -0.13,-0.085 },1};
								down[] = {"LevelM15",
								 { -0.23,-0.035 },1};
						 };
						 class VALM_2_15: VALM_1_15
						 {
								align = "right";
								pos[] = {"LevelM15",
								 { 0.22,-0.085 },1};
								right[] = {"LevelM15",
								 { 0.32,-0.085 },1};
								down[] = {"LevelM15",
								 { 0.22,-0.035 },1};
						 };
						 class LevelP15: Level0
						 {
								type = "line";
								points[] = {
								 { "LevelP15",
										{ -0.2,0.03 },1 },
								 { "LevelP15",
										{ -0.2,0 },1 },
								 { "LevelP15",
										{ -0.05,0 },1 },
								 {		},
								 { "LevelP15",
										{ 0.05,0 },1 },
								 { "LevelP15",
										{ 0.2,0 },1 },
								 { "LevelP15",
										{ 0.2,0.03 },1 }};
						 };
						 class VALP_1_15
						 {
								type = "text";
								source = "static";
								text = "15";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP15",
								 { -0.23,0.035 },1};
								right[] = {"LevelP15",
								 { -0.13,0.035 },1};
								down[] = {"LevelP15",
								 { -0.23,0.085 },1};
						 };
						 class VALP_2_15: VALP_1_15
						 {
								align = "right";
								pos[] = {"LevelP15",
								 { 0.22,0.035 },1};
								right[] = {"LevelP15",
								 { 0.32,0.035 },1};
								down[] = {"LevelP15",
								 { 0.22,0.085 },1};
						 };
						 class LevelM20: Level0
						 {
								type = "line";
								points[] = {
								 { "LevelM20",
										{ -0.2,-0.03 },1 },
								 { "LevelM20",
										{ -0.2,0 },1 },
								 { "LevelM20",
										{ -0.15,0 },1 },
								 {		},
								 { "LevelM20",
										{ -0.1,0 },1 },
								 { "LevelM20",
										{ -0.05,0 },1 },
								 {		},
								 { "LevelM20",
										{ 0.05,0 },1 },
								 { "LevelM20",
										{ 0.1,0 },1 },
								 {		},
								 { "LevelM20",
										{ 0.15,0 },1 },
								 { "LevelM20",
										{ 0.2,0 },1 },
								 { "LevelM20",
										{ 0.2,-0.03 },1 }};
						 };
						 class VALM_1_20
						 {
								type = "text";
								source = "static";
								text = -20;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM20",
								 { -0.23,-0.085 },1};
								right[] = {"LevelM20",
								 { -0.13,-0.085 },1};
								down[] = {"LevelM20",
								 { -0.23,-0.035 },1};
						 };
						 class VALM_2_20: VALM_1_20
						 {
								align = "right";
								pos[] = {"LevelM20",
								 { 0.22,-0.085 },1};
								right[] = {"LevelM20",
								 { 0.32,-0.085 },1};
								down[] = {"LevelM20",
								 { 0.22,-0.035 },1};
						 };
						 class LevelP20: Level0
						 {
								type = "line";
								points[] = {
								 { "LevelP20",
										{ -0.2,0.03 },1 },
								 { "LevelP20",
										{ -0.2,0 },1 },
								 { "LevelP20",
										{ -0.05,0 },1 },
								 {		},
								 { "LevelP20",
										{ 0.05,0 },1 },
								 { "LevelP20",
										{ 0.2,0 },1 },
								 { "LevelP20",
										{ 0.2,0.03 },1 }};
						 };
						 class VALP_1_20
						 {
								type = "text";
								source = "static";
								text = "20";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP20",
								 { -0.23,0.035 },1};
								right[] = {"LevelP20",
								 { -0.13,0.035 },1};
								down[] = {"LevelP20",
								 { -0.23,0.085 },1};
						 };
						 class VALP_2_20: VALP_1_20
						 {
								align = "right";
								pos[] = {"LevelP20",
								 { 0.22,0.035 },1};
								right[] = {"LevelP20",
								 { 0.32,0.035 },1};
								down[] = {"LevelP20",
								 { 0.22,0.085 },1};
						 };
						 class LevelM25: Level0
						 {
								type = "line";
								points[] = {
								 { "LevelM25",
										{ -0.2,-0.03 },1 },
								 { "LevelM25",
										{ -0.2,0 },1 },
								 { "LevelM25",
										{ -0.15,0 },1 },
								 {		},
								 { "LevelM25",
										{ -0.1,0 },1 },
								 { "LevelM25",
										{ -0.05,0 },1 },
								 {		},
								 { "LevelM25",
										{ 0.05,0 },1 },
								 { "LevelM25",
										{ 0.1,0 },1 },
								 {		},
								 { "LevelM25",
										{ 0.15,0 },1 },
								 { "LevelM25",
										{ 0.2,0 },1 },
								 { "LevelM25",
										{ 0.2,-0.03 },1 }};
						 };
						 class VALM_1_25
						 {
								type = "text";
								source = "static";
								text = -25;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM25",
								 { -0.23,-0.085 },1};
								right[] = {"LevelM25",
								 { -0.13,-0.085 },1};
								down[] = {"LevelM25",
								 { -0.23,-0.035 },1};
						 };
						 class VALM_2_25: VALM_1_25
						 {
								align = "right";
								pos[] = {"LevelM25",
								 { 0.22,-0.085 },1};
								right[] = {"LevelM25",
								 { 0.32,-0.085 },1};
								down[] = {"LevelM25",
								 { 0.22,-0.035 },1};
						 };
						 class LevelP25: Level0
						 {
								type = "line";
								points[] = {
								 { "LevelP25",
										{ -0.2,0.03 },1 },
								 { "LevelP25",
										{ -0.2,0 },1 },
								 { "LevelP25",
										{ -0.05,0 },1 },
								 {		},
								 { "LevelP25",
										{ 0.05,0 },1 },
								 { "LevelP25",
										{ 0.2,0 },1 },
								 { "LevelP25",
										{ 0.2,0.03 },1 }};
						 };
						 class VALP_1_25
						 {
								type = "text";
								source = "static";
								text = "25";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP25",
								 { -0.23,0.035 },1};
								right[] = {"LevelP25",
								 { -0.13,0.035 },1};
								down[] = {"LevelP25",
								 { -0.23,0.085 },1};
						 };
						 class VALP_2_25: VALP_1_25
						 {
								align = "right";
								pos[] = {"LevelP25",
								 { 0.22,0.035 },1};
								right[] = {"LevelP25",
								 { 0.32,0.035 },1};
								down[] = {"LevelP25",
								 { 0.22,0.085 },1};
						 };
						 class LevelM30: Level0
						 {
								type = "line";
								points[] = {
								 { "LevelM30",
										{ -0.2,-0.03 },1 },
								 { "LevelM30",
										{ -0.2,0 },1 },
								 { "LevelM30",
										{ -0.15,0 },1 },
								 {		},
								 { "LevelM30",
										{ -0.1,0 },1 },
								 { "LevelM30",
										{ -0.05,0 },1 },
								 {		},
								 { "LevelM30",
										{ 0.05,0 },1 },
								 { "LevelM30",
										{ 0.1,0 },1 },
								 {		},
								 { "LevelM30",
										{ 0.15,0 },1 },
								 { "LevelM30",
										{ 0.2,0 },1 },
								 { "LevelM30",
										{ 0.2,-0.03 },1 }};
						 };
						 class VALM_1_30
						 {
								type = "text";
								source = "static";
								text = -30;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM30",
								 { -0.23,-0.085 },1};
								right[] = {"LevelM30",
								 { -0.13,-0.085 },1};
								down[] = {"LevelM30",
								 { -0.23,-0.035 },1};
						 };
						 class VALM_2_30: VALM_1_30
						 {
								align = "right";
								pos[] = {"LevelM30",
								 { 0.22,-0.085 },1};
								right[] = {"LevelM30",
								 { 0.32,-0.085 },1};
								down[] = {"LevelM30",
								 { 0.22,-0.035 },1};
						 };
						 class LevelP30: Level0
						 {
								type = "line";
								points[] = {
								 { "LevelP30",
										{ -0.2,0.03 },1 },
								 { "LevelP30",
										{ -0.2,0 },1 },
								 { "LevelP30",
										{ -0.05,0 },1 },
								 {		},
								 { "LevelP30",
										{ 0.05,0 },1 },
								 { "LevelP30",
										{ 0.2,0 },1 },
								 { "LevelP30",
										{ 0.2,0.03 },1 }};
						 };
						 class VALP_1_30
						 {
								type = "text";
								source = "static";
								text = "30";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP30",
								 { -0.23,0.035 },1};
								right[] = {"LevelP30",
								 { -0.13,0.035 },1};
								down[] = {"LevelP30",
								 { -0.23,0.085 },1};
						 };
						 class VALP_2_30: VALP_1_30
						 {
								align = "right";
								pos[] = {"LevelP30",
								 { 0.22,0.035 },1};
								right[] = {"LevelP30",
								 { 0.32,0.035 },1};
								down[] = {"LevelP30",
								 { 0.22,0.085 },1};
						 };
						 class LevelM35: Level0
						 {
								type = "line";
								points[] = {
								 { "LevelM35",
										{ -0.2,-0.03 },1 },
								 { "LevelM35",
										{ -0.2,0 },1 },
								 { "LevelM35",
										{ -0.15,0 },1 },
								 {		},
								 { "LevelM35",
										{ -0.1,0 },1 },
								 { "LevelM35",
										{ -0.05,0 },1 },
								 {		},
								 { "LevelM35",
										{ 0.05,0 },1 },
								 { "LevelM35",
										{ 0.1,0 },1 },
								 {		},
								 { "LevelM35",
										{ 0.15,0 },1 },
								 { "LevelM35",
										{ 0.2,0 },1 },
								 { "LevelM35",
										{ 0.2,-0.03 },1 }};
						 };
						 class VALM_1_35
						 {
								type = "text";
								source = "static";
								text = -35;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM35",
								 { -0.23,-0.085 },1};
								right[] = {"LevelM35",
								 { -0.13,-0.085 },1};
								down[] = {"LevelM35",
								 { -0.23,-0.035 },1};
						 };
						 class VALM_2_35: VALM_1_35
						 {
								align = "right";
								pos[] = {"LevelM35",
								 { 0.22,-0.085 },1};
								right[] = {"LevelM35",
								 { 0.32,-0.085 },1};
								down[] = {"LevelM35",
								 { 0.22,-0.035 },1};
						 };
						 class LevelP35: Level0
						 {
								type = "line";
								points[] = {
								 { "LevelP35",
										{ -0.2,0.03 },1 },
								 { "LevelP35",
										{ -0.2,0 },1 },
								 { "LevelP35",
										{ -0.05,0 },1 },
								 {		},
								 { "LevelP35",
										{ 0.05,0 },1 },
								 { "LevelP35",
										{ 0.2,0 },1 },
								 { "LevelP35",
										{ 0.2,0.03 },1 }};
						 };
						 class VALP_1_35
						 {
								type = "text";
								source = "static";
								text = "35";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP35",
								 { -0.23,0.035 },1};
								right[] = {"LevelP35",
								 { -0.13,0.035 },1};
								down[] = {"LevelP35",
								 { -0.23,0.085 },1};
						 };
						 class VALP_2_35: VALP_1_35
						 {
								align = "right";
								pos[] = {"LevelP35",
								 { 0.22,0.035 },1};
								right[] = {"LevelP35",
								 { 0.32,0.035 },1};
								down[] = {"LevelP35",
								 { 0.22,0.085 },1};
						 };
						 class LevelM40: Level0
						 {
								type = "line";
								points[] = {
								 { "LevelM40",
										{ -0.2,-0.03 },1 },
								 { "LevelM40",
										{ -0.2,0 },1 },
								 { "LevelM40",
										{ -0.15,0 },1 },
								 {		},
								 { "LevelM40",
										{ -0.1,0 },1 },
								 { "LevelM40",
										{ -0.05,0 },1 },
								 {		},
								 { "LevelM40",
										{ 0.05,0 },1 },
								 { "LevelM40",
										{ 0.1,0 },1 },
								 {		},
								 { "LevelM40",
										{ 0.15,0 },1 },
								 { "LevelM40",
										{ 0.2,0 },1 },
								 { "LevelM40",
										{ 0.2,-0.03 },1 }};
						 };
						 class VALM_1_40
						 {
								type = "text";
								source = "static";
								text = -40;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM40",
								 { -0.23,-0.085 },1};
								right[] = {"LevelM40",
								 { -0.13,-0.085 },1};
								down[] = {"LevelM40",
								 { -0.23,-0.035 },1};
						 };
						 class VALM_2_40: VALM_1_40
						 {
								align = "right";
								pos[] = {"LevelM40",
								 { 0.22,-0.085 },1};
								right[] = {"LevelM40",
								 { 0.32,-0.085 },1};
								down[] = {"LevelM40",
								 { 0.22,-0.035 },1};
						 };
						 class LevelP40: Level0
						 {
								type = "line";
								points[] = {
								 { "LevelP40",
										{ -0.2,0.03 },1 },
								 { "LevelP40",
										{ -0.2,0 },1 },
								 { "LevelP40",
										{ -0.05,0 },1 },
								 {		},
								 { "LevelP40",
										{ 0.05,0 },1 },
								 { "LevelP40",
										{ 0.2,0 },1 },
								 { "LevelP40",
										{ 0.2,0.03 },1 }};
						 };
						 class VALP_1_40
						 {
								type = "text";
								source = "static";
								text = "40";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP40",
								 { -0.23,0.035 },1};
								right[] = {"LevelP40",
								 { -0.13,0.035 },1};
								down[] = {"LevelP40",
								 { -0.23,0.085 },1};
						 };
						 class VALP_2_40: VALP_1_40
						 {
								align = "right";
								pos[] = {"LevelP40",
								 { 0.22,0.035 },1};
								right[] = {"LevelP40",
								 { 0.32,0.035 },1};
								down[] = {"LevelP40",
								 { 0.22,0.085 },1};
						 };
						 class LevelM45: Level0
						 {
								type = "line";
								points[] = {
								 { "LevelM45",
										{ -0.2,-0.03 },1 },
								 { "LevelM45",
										{ -0.2,0 },1 },
								 { "LevelM45",
										{ -0.15,0 },1 },
								 {		},
								 { "LevelM45",
										{ -0.1,0 },1 },
								 { "LevelM45",
										{ -0.05,0 },1 },
								 {		},
								 { "LevelM45",
										{ 0.05,0 },1 },
								 { "LevelM45",
										{ 0.1,0 },1 },
								 {		},
								 { "LevelM45",
										{ 0.15,0 },1 },
								 { "LevelM45",
										{ 0.2,0 },1 },
								 { "LevelM45",
										{ 0.2,-0.03 },1 }};
						 };
						 class VALM_1_45
						 {
								type = "text";
								source = "static";
								text = -45;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM45",
								 { -0.23,-0.085 },1};
								right[] = {"LevelM45",
								 { -0.13,-0.085 },1};
								down[] = {"LevelM45",
								 { -0.23,-0.035 },1};
						 };
						 class VALM_2_45: VALM_1_45
						 {
								align = "right";
								pos[] = {"LevelM45",
								 { 0.22,-0.085 },1};
								right[] = {"LevelM45",
								 { 0.32,-0.085 },1};
								down[] = {"LevelM45",
								 { 0.22,-0.035 },1};
						 };
						 class LevelP45: Level0
						 {
								type = "line";
								points[] = {
								 { "LevelP45",
										{ -0.2,0.03 },1 },
								 { "LevelP45",
										{ -0.2,0 },1 },
								 { "LevelP45",
										{ -0.05,0 },1 },
								 {		},
								 { "LevelP45",
										{ 0.05,0 },1 },
								 { "LevelP45",
										{ 0.2,0 },1 },
								 { "LevelP45",
										{ 0.2,0.03 },1 }};
						 };
						 class VALP_1_45
						 {
								type = "text";
								source = "static";
								text = "45";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP45",
								 { -0.23,0.035 },1};
								right[] = {"LevelP45",
								 { -0.13,0.035 },1};
								down[] = {"LevelP45",
								 { -0.23,0.085 },1};
						 };
						 class VALP_2_45: VALP_1_45
						 {
								align = "right";
								pos[] = {"LevelP45",
								 { 0.22,0.035 },1};
								right[] = {"LevelP45",
								 { 0.32,0.035 },1};
								down[] = {"LevelP45",
								 { 0.22,0.085 },1};
						 };
						 class LevelM50: Level0
						 {
								type = "line";
								points[] = {
								 { "LevelM50",
										{ -0.2,-0.03 },1 },
								 { "LevelM50",
										{ -0.2,0 },1 },
								 { "LevelM50",
										{ -0.15,0 },1 },
								 {		},
								 { "LevelM50",
										{ -0.1,0 },1 },
								 { "LevelM50",
										{ -0.05,0 },1 },
								 {		},
								 { "LevelM50",
										{ 0.05,0 },1 },
								 { "LevelM50",
										{ 0.1,0 },1 },
								 {		},
								 { "LevelM50",
										{ 0.15,0 },1 },
								 { "LevelM50",
										{ 0.2,0 },1 },
								 { "LevelM50",
										{ 0.2,-0.03 },1 }};
						 };
						 class VALM_1_50
						 {
								type = "text";
								source = "static";
								text = -50;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM50",
								 { -0.23,-0.085 },1};
								right[] = {"LevelM50",
								 { -0.13,-0.085 },1};
								down[] = {"LevelM50",
								 { -0.23,-0.035 },1};
						 };
						 class VALM_2_50: VALM_1_50
						 {
								align = "right";
								pos[] = {"LevelM50",
								 { 0.22,-0.085 },1};
								right[] = {"LevelM50",
								 { 0.32,-0.085 },1};
								down[] = {"LevelM50",
								 { 0.22,-0.035 },1};
						 };
						 class LevelP50: Level0
						 {
								type = "line";
								points[] = {
								 { "LevelP50",
										{ -0.2,0.03 },1 },
								 { "LevelP50",
										{ -0.2,0 },1 },
								 { "LevelP50",
										{ -0.05,0 },1 },
								 {		},
								 { "LevelP50",
										{ 0.05,0 },1 },
								 { "LevelP50",
										{ 0.2,0 },1 },
								 { "LevelP50",
										{ 0.2,0.03 },1 }};
						 };
						 class VALP_1_50
						 {
								type = "text";
								source = "static";
								text = "50";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP50",
								 { -0.23,0.035 },1};
								right[] = {"LevelP50",
								 { -0.13,0.035 },1};
								down[] = {"LevelP50",
								 { -0.23,0.085 },1};
						 };
						 class VALP_2_50: VALP_1_50
						 {
								align = "right";
								pos[] = {"LevelP50",
								 { 0.22,0.035 },1};
								right[] = {"LevelP50",
								 { 0.32,0.035 },1};
								down[] = {"LevelP50",
								 { 0.22,0.085 },1};
						 };
						};
				 };
				 class MGun
				 {
						condition = "mgun";
						class Circle
						{
						 type = "line";
						 points[] = {
								{ "WeaponAim",
								 { 0.01,0 },1 },
								{ "WeaponAim",
								 { -0.01,0 },1 },
								{		},
								{ "WeaponAim",
								 { 0,0.01125 },1 },
								{ "WeaponAim",
								 { 0,-0.01125 },1 },
								{		},
								{ "WeaponAim",
								 { 0,-0.07875 },1 },
								{ "WeaponAim",
								 { 0.049,-0.055125 },1 },
								{ "WeaponAim",
								 { 0.07,0 },1 },
								{ "WeaponAim",
								 { 0.049,0.055125 },1 },
								{ "WeaponAim",
								 { 0,0.07875 },1 },
								{ "WeaponAim",
								 { -0.049,0.055125 },1 },
								{ "WeaponAim",
								 { -0.07,0 },1 },
								{ "WeaponAim",
								 { -0.049,-0.055125 },1 },
								{ "WeaponAim",
								 { 0,-0.07875 },1 },
								{		},
								{ "WeaponAim",
								 { 0,-0.1575 },1 },
								{ "WeaponAim",
								 { 0.07,-0.137025 },1 },
								{ "WeaponAim",
								 { 0.1218,-0.07875 },1 },
								{ "WeaponAim",
								 { 0.14,0 },1 },
								{ "WeaponAim",
								 { 0.1218,0.07875 },1 },
								{ "WeaponAim",
								 { 0.07,0.137025 },1 },
								{ "WeaponAim",
								 { 0,0.1575 },1 },
								{ "WeaponAim",
								 { -0.07,0.137025 },1 },
								{ "WeaponAim",
								 { -0.1218,0.07875 },1 },
								{ "WeaponAim",
								 { -0.14,0 },1 },
								{ "WeaponAim",
								 { -0.1218,-0.07875 },1 },
								{ "WeaponAim",
								 { -0.07,-0.137025 },1 },
								{ "WeaponAim",
								 { 0,-0.1575 },1 },
								{		},
								{ "WeaponAim",
								 { 0,-0.1575 },1 },
								{ "WeaponAim",
								 { 0,-0.18 },1 },
								{		},
								{ "WeaponAim",
								 { -0.07,-0.136399 },1 },
								{ "WeaponAim",
								 { -0.08,-0.155885 },1 },
								{		},
								{ "WeaponAim",
								 { -0.121244,-0.07875 },1 },
								{ "WeaponAim",
								 { -0.138564,-0.09 },1 },
								{		},
								{ "WeaponAim",
								 { -0.14,6.88454e-009 },1 },
								{ "WeaponAim",
								 { -0.16,7.86805e-009 },1 },
								{		},
								{ "WeaponAim",
								 { -0.121244,0.07875 },1 },
								{ "WeaponAim",
								 { -0.138564,0.09 },1 },
								{		},
								{ "WeaponAim",
								 { -0.07,0.136399 },1 },
								{ "WeaponAim",
								 { -0.08,0.155885 },1 },
								{		},
								{ "WeaponAim",
								 { 1.22392e-008,0.1575 },1 },
								{ "WeaponAim",
								 { 1.39876e-008,0.18 },1 },
								{		},
								{ "WeaponAim",
								 { 0.07,0.136399 },1 },
								{ "WeaponAim",
								 { 0.08,0.155885 },1 },
								{		},
								{ "WeaponAim",
								 { 0.121244,0.07875 },1 },
								{ "WeaponAim",
								 { 0.138564,0.09 },1 },
								{		},
								{ "WeaponAim",
								 { 0.14,-1.87817e-009 },1 },
								{ "WeaponAim",
								 { 0.16,-2.14648e-009 },1 },
								{		},
								{ "WeaponAim",
								 { 0.121244,-0.07875 },1 },
								{ "WeaponAim",
								 { 0.138564,-0.09 },1 },
								{		},
								{ "WeaponAim",
								 { 0.07,-0.136399 },1 },
								{ "WeaponAim",
								 { 0.08,-0.155885 },1 },
								{		}};
						};
				 };
				 class Bomb
				 {
						condition = "bomb";
						class Circle
						{
						 type = "line";
						 points[] = {
								{ "WeaponAim",
								 { 0,-0.1125 },1 },
								{ "WeaponAim",
								 { 0.05,-0.097875 },1 },
								{ "WeaponAim",
								 { 0.087,-0.05625 },1 },
								{ "WeaponAim",
								 { 0.1,0 },1 },
								{ "WeaponAim",
								 { 0.087,0.05625 },1 },
								{ "WeaponAim",
								 { 0.05,0.097875 },1 },
								{ "WeaponAim",
								 { 0,0.1125 },1 },
								{ "WeaponAim",
								 { -0.05,0.097875 },1 },
								{ "WeaponAim",
								 { -0.087,0.05625 },1 },
								{ "WeaponAim",
								 { -0.1,0 },1 },
								{ "WeaponAim",
								 { -0.087,-0.05625 },1 },
								{ "WeaponAim",
								 { -0.05,-0.097875 },1 },
								{ "WeaponAim",
								 { 0,-0.1125 },1 },
								{		},
								{ "Velocity",0.001,"WeaponAim",
								 { 0.0,0.0 },1 },
								{ "Velocity",
								 { 0.0,0.0 },1 },
								{		},
								{ "Target",
								 { 0,-0.07875 },1 },
								{ "Target",
								 { 0.07,0 },1 },
								{ "Target",
								 { 0,0.07875 },1 },
								{ "Target",
								 { -0.07,0 },1 },
								{ "Target",
								 { 0,-0.07875 },1 }};
						};
				 };
				 class AAMissile
				 {
						condition = "AAmissile";
						class Circle
						{
						 type = "line";
						 points[] = {
								{ "WeaponAim",
								 { 0,-0.28125 },1 },
								{ "WeaponAim",
								 { 0.125,-0.244687 },1 },
								{ "WeaponAim",
								 { 0.2175,-0.140625 },1 },
								{ "WeaponAim",
								 { 0.25,0 },1 },
								{ "WeaponAim",
								 { 0.2175,0.140625 },1 },
								{ "WeaponAim",
								 { 0.125,0.244687 },1 },
								{ "WeaponAim",
								 { 0,0.28125 },1 },
								{ "WeaponAim",
								 { -0.125,0.244687 },1 },
								{ "WeaponAim",
								 { -0.2175,0.140625 },1 },
								{ "WeaponAim",
								 { -0.25,0 },1 },
								{ "WeaponAim",
								 { -0.2175,-0.140625 },1 },
								{ "WeaponAim",
								 { -0.125,-0.244687 },1 },
								{ "WeaponAim",
								 { 0,-0.28125 },1 },
								{		},
								{ "Target",
								 { 0,-0.07875 },1 },
								{ "Target",
								 { 0.07,0 },1 },
								{ "Target",
								 { 0,0.07875 },1 },
								{ "Target",
								 { -0.07,0 },1 },
								{ "Target",
								 { 0,-0.07875 },1 }};
						};
				 };
				 class ATMissile
				 {
						condition = "ATmissile";
						class Circle
						{
						 type = "line";
						 points[] = {
								{ "WeaponAim",
								 { 0,-0.2025 },1 },
								{ "WeaponAim",
								 { 0.09,-0.176175 },1 },
								{ "WeaponAim",
								 { 0.1566,-0.10125 },1 },
								{ "WeaponAim",
								 { 0.18,0 },1 },
								{ "WeaponAim",
								 { 0.1566,0.10125 },1 },
								{ "WeaponAim",
								 { 0.09,0.176175 },1 },
								{ "WeaponAim",
								 { 0,0.2025 },1 },
								{ "WeaponAim",
								 { -0.09,0.176175 },1 },
								{ "WeaponAim",
								 { -0.1566,0.10125 },1 },
								{ "WeaponAim",
								 { -0.18,0 },1 },
								{ "WeaponAim",
								 { -0.1566,-0.10125 },1 },
								{ "WeaponAim",
								 { -0.09,-0.176175 },1 },
								{ "WeaponAim",
								 { 0,-0.2025 },1 },
								{		},
								{ "Target",
								 { 0,-0.07875 },1 },
								{ "Target",
								 { 0.07,0 },1 },
								{ "Target",
								 { 0,0.07875 },1 },
								{ "Target",
								 { -0.07,0 },1 },
								{ "Target",
								 { 0,-0.07875 },1 }};
						};
				 };
				 class Rockets
				 {
						condition = "Rocket";
						class Circle
						{
						 type = "line";
						 points[] = {
								{ "WeaponAim",
								 { 0.01,0 },1 },
								{ "WeaponAim",
								 { -0.01,0 },1 },
								{		},
								{ "WeaponAim",
								 { 0,0.01125 },1 },
								{ "WeaponAim",
								 { 0,-0.01125 },1 },
								{		},
								{ "WeaponAim",
								 { 0,-0.135 },1 },
								{ "WeaponAim",
								 { 0.06,-0.11745 },1 },
								{ "WeaponAim",
								 { 0.1044,-0.0675 },1 },
								{ "WeaponAim",
								 { 0.12,0 },1 },
								{ "WeaponAim",
								 { 0.1044,0.0675 },1 },
								{ "WeaponAim",
								 { 0.06,0.11745 },1 },
								{ "WeaponAim",
								 { 0,0.135 },1 },
								{ "WeaponAim",
								 { -0.06,0.11745 },1 },
								{ "WeaponAim",
								 { -0.1044,0.0675 },1 },
								{ "WeaponAim",
								 { -0.12,0 },1 },
								{ "WeaponAim",
								 { -0.1044,-0.0675 },1 },
								{ "WeaponAim",
								 { -0.06,-0.11745 },1 },
								{ "WeaponAim",
								 { 0,-0.135 },1 },
								{		}};
						};
				 };
				 class AltScale
				 {
						type = "scale";
						scale = 1;
						source = "altitudeASL";
						sourceScale = 1;
						align = "right";
						pos[] = {0.86,0.82};
						right[] = {0.94,0.82};
						down[] = {0.86,0.87};
						lineXleft = 0.825;
						lineYright = 0.835;
						lineXleftMajor = 0.825;
						lineYrightMajor = 0.845;
						bottom = 0.2;
						top = 0.85;
						center = 0.5;
						step = 20;
						StepSize = "(0.85- 0.2)/20";
						horizontal = "false";
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
				 };
				 class SpeedScale
				 {
						type = "scale";
						scale = 1;
						source = "speed";
						sourceScale = 3.6;
						align = "right";
						pos[] = {0.06,"0.82-0.85+0.2"};
						right[] = {0.14,"0.82-0.85+0.2"};
						down[] = {0.06,"0.87-0.85+0.2"};
						lineXleft = "0.18 + 0.82 - 0.825";
						lineYright = "0.18 + 0.82 - 0.835";
						lineXleftMajor = "0.18 + 0.82 - 0.825";
						lineYrightMajor = "0.18 + 0.82 - 0.845";
						bottom = 0.85;
						center = 0.5;
						top = 0.2;
						step = 20;
						StepSize = "(0.85- 0.2)/20";
						horizontal = "false";
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
				 };
				 class Gear
				 {
						condition = "ils";
						class text
						{
						 type = "text";
						 source = "static";
						 text = "GEAR";
						 align = "right";
						 scale = 0.5;
						 sourceScale = 1;
						 pos[] = {
								{ 0.84,0.88 },1};
						 right[] = {
								{ 0.9,0.88 },1};
						 down[] = {
								{ 0.84,0.92 },1};
						};
				 };
				 class Flaps
				 {
						condition = "flaps";
						class text
						{
						 type = "text";
						 source = "static";
						 text = "FLAPS";
						 align = "right";
						 scale = 0.5;
						 sourceScale = 1;
						 pos[] = {
								{ 0.84,0.93 },1};
						 right[] = {
								{ 0.9,0.93 },1};
						 down[] = {
								{ 0.84,0.97 },1};
						};
				 };
				 class weapons
				 {
						type = "text";
						source = "weapon";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {
						 { 0.1,0.88 },1};
						right[] = {
						 { 0.16,0.88 },1};
						down[] = {
						 { 0.1,0.92 },1};
				 };
				 class ammo
				 {
						type = "text";
						source = "ammo";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {
						 { 0.1,0.93 },1};
						right[] = {
						 { 0.16,0.93 },1};
						down[] = {
						 { 0.1,0.97 },1};
				 };
				 class VspeedNumber
				 {
						type = "text";
						align = "right";
						scale = 1;
						source = "vspeed";
						sourceScale = 1;
						pos[] = {
						 { 0.86,"0.52-0.4" },1};
						right[] = {
						 { 0.94,"0.52-0.4" },1};
						down[] = {
						 { 0.86,"0.57-0.4" },1};
				 };
				 class HeadingScale
				 {
						type = "scale";
						scale = 1;
						source = "Heading";
						sourceScale = 1;
						align = "center";
						pos[] = {"0.21-0.01",0.0};
						right[] = {"0.29-0.01",0.0};
						down[] = {"0.21-0.01",0.05};
						lineXleft = 0.06;
						lineYright = 0.05;
						lineXleftMajor = 0.06;
						lineYrightMajor = 0.04;
						bottom = 0.8;
						center = 0.5;
						top = 0.2;
						step = "18/9";
						StepSize = "(0.80- 0.2)/20";
						horizontal = "true";
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
				 };
				 class ILS
				 {
						condition = "ils";
						class Glideslope
						{
						 clipTL[] = {0.0,0.0};
						 clipBR[] = {1.0,1.0};
						 class ILS
						 {
								type = "line";
								points[] = {
								 { "ILS_W",
										{ -0.24,0 },1 },
								 { "ILS_W",
										{ 0.24,0 },1 },
								 {		},
								 { "ILS_W",
										{ 0,0.027 },1 },
								 { "ILS_W",
										{ 0,-0.027 },1 },
								 {		},
								 { "ILS_W",
										{ 0.12,0.027 },1 },
								 { "ILS_W",
										{ 0.12,-0.027 },1 },
								 {		},
								 { "ILS_W",
										{ 0.24,0.027 },1 },
								 { "ILS_W",
										{ 0.24,-0.027 },1 },
								 {		},
								 { "ILS_W",
										{ -0.12,0.027 },1 },
								 { "ILS_W",
										{ -0.12,-0.027 },1 },
								 {		},
								 { "ILS_W",
										{ -0.24,0.027 },1 },
								 { "ILS_W",
										{ -0.24,-0.027 },1 },
								 {		},
								 { "ILS_H",
										{ 0,-0.27 },1 },
								 { "ILS_H",
										{ 0,0.27 },1 },
								 {		},
								 { "ILS_H",
										{ 0.024,0 },1 },
								 { "ILS_H",
										{ -0.024,0 },1 },
								 {		},
								 { "ILS_H",
										{ 0.024,0.135 },1 },
								 { "ILS_H",
										{ -0.024,0.135 },1 },
								 {		},
								 { "ILS_H",
										{ 0.024,0.27 },1 },
								 { "ILS_H",
										{ -0.024,0.27 },1 },
								 {		},
								 { "ILS_H",
										{ 0.024,-0.135 },1 },
								 { "ILS_H",
										{ -0.024,-0.135 },1 },
								 {		},
								 { "ILS_H",
										{ 0.024,-0.27 },1 },
								 { "ILS_H",
										{ -0.024,-0.27 },1 }};
						 };
						};
				 };
				};
		 };
		};
	};
	
	
	class C130_SMD_DZ: C130_base
	{
		model = "\ca\air_E\c130j\c130j.p3d";
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Air_E\C130J\DATA\c130j_sklo.rvmat","Ca\Air_E\C130J\DATA\c130j_sklo_damage.rvmat","Ca\Air_E\C130J\DATA\c130j_sklo_damage.rvmat","Ca\Air_E\C130J\DATA\c130j_sklo_in.rvmat","Ca\Air_E\C130J\DATA\c130j_sklo_in_damage.rvmat","Ca\Air_E\C130J\DATA\c130j_sklo_in_damage.rvmat","Ca\Air_E\C130J\DATA\c130j_body.rvmat","Ca\Air_E\C130J\DATA\c130j_body_damage.rvmat","Ca\Air_E\C130J\DATA\c130j_body_destruct.rvmat","Ca\Air_E\C130J\DATA\c130j_interior.rvmat","Ca\Air_E\C130J\DATA\c130j_interior_damage.rvmat","Ca\Air_E\C130J\DATA\c130j_interior_destruct.rvmat","Ca\Air_E\C130J\DATA\c130j_wings.rvmat","Ca\Air_E\C130J\DATA\c130j_wings_damage.rvmat","Ca\Air_E\C130J\DATA\c130j_wings_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"ca\air2\c130j\data\c130j_body_co.paa","ca\air_e\c130j\data\c130j_wings_co.paa"};
	};
	
	class C130_SMD_ATACS: C130_SMD_DZ 
	{
		displayname = "C130J (ATACS)";
		displaynameshort = "C130J (ATACS)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_c130j_atacs_body_co.paa","smd_assets\vehicles\textures\smd_veh_c130j_atacs_wings_co.paa"};
	};
	
	class C130_SMD_BLOPS: C130_SMD_DZ 
	{
		displayname = "C130J (Unmarked)";
		displaynameshort = "C130J (Unmarked)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_c130j_blackops_body_co.paa","smd_assets\vehicles\textures\smd_veh_c130j_blackops_wings_co.paa"};
	};	
	
	class C130_SMD_BLOPS_DIGI: C130_SMD_DZ 
	{
		displayname = "C130J (Unmarked)";
		displaynameshort = "C130J (Unmarked)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_c130j_blackops_digital_body_co.paa","smd_assets\vehicles\textures\smd_veh_c130j_blackops_digital_wings_co.paa"};
	};
	
	class C130_SMD_UN: C130_SMD_DZ 
	{
		displayname = "C130J (U.N.)";
		displaynameshort = "C130J (U.N.)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_c130j_UN_body_co.paa","smd_assets\vehicles\textures\smd_veh_c130j_UN_wings_co.paa"};
	};
	
	/*class CH47_base_DZ: Helicopter
	{
		expansion = 1;
		scope = 0;
		displayName = "CH-47";
		side = 1;
		accuracy = 0.5;
		mainRotorSpeed = 1;
		backRotorSpeed = 1;
		armor = 30;
		damageResistance = 0.001;
		destrType = "DestructWreck";
		memoryPointsGetInCargo[] = {"pos codriver","pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos codriver dir","pos cargo dir"};
		cargoAction[] = {"CH47_Cargo_EP1","CH47_Cargo01_EP1","CH47_Cargo01_EP1","CH47_Cargo02_EP1","CH47_Cargo03_EP1","CH47_Cargo01_EP1","CH47_Cargo03_EP1","CH47_Cargo02_EP1","CH47_Cargo01_EP1","CH47_Cargo03_EP1","CH47_Cargo02_EP1","CH47_Cargo03_EP1","CH47_Cargo02_EP1","CH47_Cargo03_EP1","CH47_Cargo01_EP1","CH47_Cargo02_EP1","CH47_Cargo01_EP1","CH47_Cargo03_EP1","CH47_Cargo02_EP1","CH47_Cargo01_EP1","CH47_Cargo03_EP1","CH47_Cargo02_EP1","CH47_Cargo01_EP1","CH47_Cargo03_EP1","CH47_Cargo02_EP1"};
		cargoIsCoDriver[] = {1,0};
		transportSoldier = 24;
		transportMaxBackpacks = 10;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"120Rnd_CMFlareMagazine"};
		LockDetectionSystem = 2;
		IncommingMisslieDetectionSystem = 16;
		radarType = 0;
		enableManualFire = 0;
		threat[] = {0.6,0.1,0};
		class HitPoints: HitPoints
		{
			class HitVRotor
			{
				armor = 1;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = 0.5;
			};
			class HitHRotor
			{
				armor = 1;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0.5;
			};
		};
		soundGetIn[] = {"Ca\Sounds_E\Air_E\CH47\close",0.316228,1};
		soundGetOut[] = {"Ca\Sounds_E\Air_E\CH47\open",0.316228,1,40};
		soundDammage[] = {"Ca\Sounds_E\Air_E\CH47\int-alarm_loop",0.562341,1};
		soundEngineOnInt[] = {"Ca\Sounds_E\Air_E\CH47\CH47_start_int",0.1,1};
		soundEngineOnExt[] = {"Ca\Sounds_E\Air_E\CH47\CH47_start_ext",0.562341,1,800};
		soundEngineOffInt[] = {"Ca\Sounds_E\Air_E\CH47\CH47_stop_int",0.1,1};
		soundEngineOffExt[] = {"Ca\Sounds_E\Air_E\CH47\CH47_stop_ext",0.562341,1,800};
		class Sounds
		{
			class Engine
			{
				sound[] = {"Ca\Sounds_E\Air_E\CH47\CH47_engine_high_ext",1,1,800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"Ca\Sounds_E\Air_E\CH47\CH47_rotor_ext",3.16228,1,1500};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.8,3.14,2,0.9};
			};
			class RotorHighOut
			{
				sound[] = {"Ca\Sounds_E\Air_E\CH47\CH47_rotor_forsage_ext",3.16228,1,1800};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.95))";
				cone[] = {1.8,3.14,2,0.9};
			};
			class EngineIn
			{
				sound[] = {"Ca\Sounds_E\Air_E\CH47\CH47_engine_high_int",1.77828,1};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"Ca\Sounds_E\Air_E\CH47\CH47_rotor_int",1.77828,1};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] = {"Ca\Sounds_E\Air_E\CH47\CH47_rotor_forsage_int",1.77828,1};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		class Library
		{
			libTextDesc = "The CH-47 Chinook is a versatile, twin-engine, tandem rotor heavy-lift helicopter. Its top speed of 315 km/h was faster any comparable helicopter in the 1960s and even many of today.<br/>The main use of the CH-47 includes troop movement, artillery emplacement and battlefield resupply.";
		};
		class Reflectors
		{
			class Middle
			{
				color[] = {0.8,0.8,1,1};
				ambient[] = {0.07,0.07,0.07,1};
				position = "svetlo";
				direction = "svetlo konec";
				hitpoint = "svetlo";
				selection = "svetlo";
				size = 1;
				brightness = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Air_E\CH47\data\ch47_1.rvmat","Ca\Air_E\CH47\data\ch47_1_damage.rvmat","Ca\Air_E\CH47\data\ch47_1_destruct.rvmat","Ca\Air_E\CH47\data\ch47_2.rvmat","Ca\Air_E\CH47\data\ch47_2_damage.rvmat","Ca\Air_E\CH47\data\ch47_2_destruct.rvmat","Ca\Air_E\CH47\data\ch47_1_int.rvmat","Ca\Air_E\CH47\data\ch47_1_int.rvmat","Ca\Air_E\CH47\data\ch47_1_int_destruct.rvmat","Ca\Air_E\CH47\data\ch47_2_int.rvmat","Ca\Air_E\CH47\data\ch47_2_int.rvmat","Ca\Air_E\CH47\data\ch47_2_int_destruct.rvmat","Ca\Air_E\CH47\data\ch47_sklo_in.rvmat","Ca\Air_E\CH47\data\ch47_sklo_in_damage.rvmat","Ca\Air_E\CH47\data\ch47_sklo_in_damage.rvmat","Ca\Air_E\CH47\data\ch47_sklo.rvmat","Ca\Air_E\CH47\data\ch47_sklo_damage.rvmat","Ca\Air_E\CH47\data\ch47_sklo_damage.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		irScanRangeMin = 100;
		irScanRangeMax = 1000;
		irScanToEyeFactor = 2;
	};
	
	class CH_47F_DZ: CH47_base_DZ
	{
		accuracy = 1000;
		model = "\ca\air_E\CH47\CH_47F";
		scope = 2;
		maxSpeed = 293;
		displayName = "CH-47F";
		picture = "\ca\air_e\data\UI\Picture_ch47f_CA.paa";
		icon = "\ca\air_e\data\UI\Icon_ch47f_CA.paa";
		mapSize = 24;
		crew = "US_Soldier_Pilot_EP1";
		typicalCargo[] = {"US_Soldier_Pilot_EP1","US_Soldier_Pilot_EP1"};
		driverAction = "CH47_Pilot_EP1";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				minElev = -50;
				maxElev = 30;
				initElev = -30;
				minTurn = -3;
				maxTurn = 173;
				initTurn = 0;
				soundServo[] = {"",0.01,1};
				animationSourceHatch = "";
				stabilizedInAxes = "StabilizedInAxesNone";
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				weapons[] = {"M134"};
				magazines[] = {"2000Rnd_762x51_M134"};
				gunnerName = "crew chief";
				gunnerOpticsModel = "\ca\weapons\optika_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction = "CH47_Gunner_EP1";
				gunnerInAction = "CH47_Gunner_EP1";
				commanding = -2;
				primaryGunner = 0;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
			};
			class RightDoorGun: MainTurret
			{
				body = "Turret2";
				gun = "Gun_2";
				minElev = -60;
				maxElev = 30;
				initElev = -30;
				minTurn = -173;
				maxTurn = 3;
				initTurn = 0;
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				stabilizedInAxes = "StabilizedInAxesNone";
				selectionFireAnim = "zasleh_1";
				proxyIndex = 2;
				gunnerName = "door gunner";
				commanding = -3;
				weapons[] = {"M134_2"};
				gunBeg = "muzzle_2";
				gunEnd = "chamber_2";
				primaryGunner = 0;
				memoryPointGun = "machinegun_2";
				memoryPointGunnerOptics = "gunnerview_2";
			};
			class BackDoorGun: MainTurret
			{
				body = "Turret3";
				gun = "Gun_3";
				minTurn = 130;
				maxTurn = 230;
				initTurn = 180;
				minElev = -50;
				maxElev = 50;
				initElev = 0;
				animationSourceBody = "Turret_3";
				animationSourceGun = "Gun_3";
				stabilizedInAxes = "StabilizedInAxesNone";
				selectionFireAnim = "zasleh_3";
				proxyIndex = 3;
				gunnerName = "rear gunner";
				gunnerOpticsShowCursor = 0;
				commanding = -1;
				gunnerAction = "CH47_Gunner01_EP1";
				gunnerInAction = "CH47_Gunner01_EP1";
				weapons[] = {"M240_veh"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				gunBeg = "muzzle_3";
				gunEnd = "chamber_3";
				primaryGunner = 1;
				memoryPointGun = "machinegun_3";
				memoryPointGunnerOptics = "gunnerview_3";
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "M240_veh";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "M240_veh";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "M240_veh";
			};
			class Gatling_1
			{
				source = "revolving";
				weapon = "M134";
			};
			class Gatling_2
			{
				source = "revolving";
				weapon = "M134_2";
			};
		};
	};	*/
	
	class HMMWV_Base;
	class HMMWV_DZ: HMMWV_Base {
		terrainCoef = 0;
		maxSpeed = 60;
		accuracy = 0.32;
		displayname = "HMMWV";
		hasgunner = 0;
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"\ca\wheeled\hmmwv\data\hmmwv_body_co.paa"};
		icon = "\Ca\wheeled\data\map_ico\icomap_hmwv_CA.paa";
		mapsize = 5;
		model = "ca\wheeled_E\HMMWV\HMMWV";
		picture = "\Ca\wheeled\data\ico\HMMWV_CA.paa";
		scope = 2;
		side = 2;
		crew = "";
		typicalCargo[] = {};
		transportMaxWeapons = 10;
		transportMaxMagazines = 50;
        transportmaxbackpacks = 5;
		class Turrets {};
		class HitPoints {
			class HitEngine {
				armor = 2.4;
				material = -1;
				name = "motor";
				passthrough = 0.2;
				visual = "";
			};
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				passthrough = 1;
				visual = "";
			};
			class HitFuel {
				armor = 1.3;
				material = -1;
				name = "palivo";
				passthrough = 0.5;
				visual = "";
			};
			class HitLFWheel {
				armor = 0.30;
				material = -1;
				name = "wheel_1_1_steering";
				passthrough = 0.3;
				visual = "";
			};
			class HitRFWheel {
				armor = 0.30;
				material = -1;
				name = "wheel_2_1_steering";
				passthrough = 0.3;
				visual = "";
			};
			class HitLBWheel {
				armor = 0.30;
				material = -1;
				name = "wheel_1_2_steering";
				passthrough = 0.3;
				visual = "";
			};
			class HitRBWheel {
				armor = 0.30;
				material = -1;
				name = "wheel_2_2_steering";
				passthrough = 0.3;
				visual = "";
			};
			class HitGlass1 {
				armor = 0.4;
				material = -1;
				name = "glass1";
				passthrough = 0;
				visual = "glass1";
			};
			class HitGlass2 {
				armor = 0.4;
				material = -1;
				name = "glass2";
				passthrough = 0;
				visual = "glass2";
			};
			class HitGlass3 {
				armor = 0.2;
				material = -1;
				name = "glass3";
				passthrough = 0;
				visual = "glass3";
			};
			class HitGlass4 {
				armor = 0.2;
				material = -1;
				name = "glass4";
				passthrough = 0;
				visual = "glass4";
			};
		};
		class Damage {
			mat[] = {"ca\wheeled\hmmwv\data\hmmwv_details.rvmat", "Ca\wheeled\HMMWV\data\hmmwv_details_damage.rvmat", "Ca\wheeled\HMMWV\data\hmmwv_details_destruct.rvmat", "ca\wheeled\hmmwv\data\hmmwv_body.rvmat", "Ca\wheeled\HMMWV\data\hmmwv_body_damage.rvmat", "Ca\wheeled\HMMWV\data\hmmwv_body_destruct.rvmat", "ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat", "ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat", "ca\wheeled\data\hmmwv_clocks_destruct.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_in.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat"};
			tex[] = {};
		};
	};
	
	class HMMWV_D_DZ: HMMWV_DZ {
		displayname = "HMMWV Desert";
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"\ca\wheeled\hmmwv\data\hmmwv_body_co.paa"};
		model = "ca\wheeled_E\HMMWV\HMMWV_DES_EP1";
		picture = "\Ca\wheeled\data\ico\HMMWV_DES_EP1.paa";
	};
	
	class LandRover_CZ_EP1;
	class LandRover_SMD_RACS: LandRover_CZ_EP1
	{
		terrainCoef = 0;
		maxSpeed = 60;
		displayname = "Landrover (RACS)";
		displaynameshort = "Landrover RACS)";
		scope = 2;
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_landrover_racs_co.paa"};
	};

	class LandRover_SMD_RACS_DIGI: LandRover_SMD_RACS
	{
		displayname = "Landrover (RACS) Digital";
		displaynameshort = "Landrover RACS) Digital";
		hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_landrover_racs_digi_co.paa"};
	};

	class MH60S_DZ: Helicopter
	{
		scope = 2;
		displayName = "$STR_DN_MH60S";
		destrType = "DestructWreck";
		vehicleClass = "Air";
		model = "\ca\air\Mh_60mg";
		mapSize = 17;
		picture = "\ca\air\data\ico\MH_60mg_CA.paa";
		Icon = "\ca\air\data\map_ico\icomap_MH60mg_CA.paa";
		radartype = 0;
		side = 1;
		faction = "USMC";
		crew = "USMC_Soldier_Pilot";
		transportMaxBackpacks = 10;
		accuracy = 1.5;
		attendant = 1;
		maxSpeed = 270;
		armor = 35;
		damageResistance = 0.00242;
		cost = 10000000;
		mainRotorSpeed = -1;
		soundGetIn[] = {"\ca\Sounds\Air\Noises\heli_door_01",0.31622776,1};
		soundGetOut[] = {"\ca\Sounds\Air\Noises\heli_door_01",0.31622776,1,30};
		soundEnviron[] = {"",0.031622775,1.0};
		soundDammage[] = {"\ca\Air\Data\Sound\alarm_loop1",0.001,1};
		soundEngineOnInt[] = {"ca\sounds\Air\UH1Y\int\int-start-final",0.1,1.0};
		soundEngineOnExt[] = {"ca\sounds\Air\UH1Y\ext\ext-motor-start",1.0,1.0,800};
		soundEngineOffInt[] = {"ca\sounds\Air\UH1Y\int\int-stop-final",0.1,1.0};
		soundEngineOffExt[] = {"ca\sounds\Air\UH1Y\ext\ext-motor-stop",1.0,1.0,800};
		class Sounds
		{
		 class Engine
		 {
				sound[] = {"ca\sounds\air\uh1y\ext\ext-fly-mode2",2.5118864,1.0,900};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
		 };
		 class RotorLowOut
		 {
				sound[] = {"ca\sounds\air\uh1y\int\int-rotor-single5b",2.5118864,1.0,1400};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.6,3.14,2.0,0.5};
		 };
		 class RotorHighOut
		 {
				sound[] = {"ca\sounds\air\uh1y\int\int-rotor-single5a",2.5118864,1.0,1600};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.9))";
				cone[] = {1.6,3.14,2.0,0.5};
		 };
		 class EngineIn
		 {
				sound[] = {"ca\sounds\air\uh1y\int\int-fly-mode7",3.1622777,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
		 };
		 class RotorLowIn
		 {
				sound[] = {"ca\sounds\air\uh1y\int\int-rotor-single5b",3.1622777,1.0};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
		 };
		 class RotorHighIn
		 {
				sound[] = {"ca\sounds\air\uh1y\int\int-rotor-single5a",3.1622777,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
		 };
		};
		driverInAction = "UH60_Pilot";
		driverAction = "UH60_Pilot";
		cargoAction[] = {"UH60_Cargo01","UH1Y_Cargo02","UH1Y_Cargo01","UH1Y_Cargo01","UH1Y_Cargo01","UH60_Cargo02"};
		transportSoldier = 13;
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment2"};
		enableSweep = 0;
		transportAmmo = 0;
		supplyRadius = 2.5;
		initCargoAngleY = 10;
		minCargoAngleY = -60;
		maxCargoAngleY = 120;
		type = 2;
		threat[] = {0.3,1,0.4};
		typicalCargo[] = {"USMC_Soldier_Pilot","USMC_Soldier_Pilot","USMC_Soldier_Pilot"};
		cargoIsCoDriver[] = {1,0,0};
		weapons[] = {};
		magazines[] = {};
		transportMaxMagazines = 150;
		transportMaxWeapons = 30;
		forceHideDriver = 1;
		castDriverShadow = 1;
		castCargoShadow = 1;
		class AnimationSources: AnimationSources
		{
		 class ReloadAnim
		 {
				source = "reload";
				weapon = "M240_veh";
		 };
		 class ReloadMagazine
		 {
				source = "reloadmagazine";
				weapon = "M240_veh";
		 };
		 class Revolving
		 {
				source = "revolving";
				weapon = "M240_veh";
		 };
		 class ReloadAnim_2
		 {
				source = "reload";
				weapon = "M240_veh_2";
		 };
		 class ReloadMagazine_2
		 {
				source = "reloadmagazine";
				weapon = "M240_veh_2";
		 };
		 class Revolving_2
		 {
				source = "revolving";
				weapon = "M240_veh_2";
		 };
		};
		class Library
		{
		 libTextDesc = "$STR_LIB_MH60S";
		};
		class Damage
		{
		 tex[] = {};
		 mat[] = {"ca\air\Data\uh60_skla.rvmat","ca\air\Data\uh60_skla_damage.rvmat","ca\air\Data\uh60_skla_damage.rvmat","ca\air\Data\uh60_skla_in.rvmat","ca\air\Data\uh60_skla_in_damage.rvmat","ca\air\Data\uh60_skla_in_damage.rvmat","ca\air\Data\materialy\uh60_01.rvmat","ca\air\Data\materialy\uh60_01_damage.rvmat","ca\air\Data\materialy\uh60_01_destruct.rvmat"};
		};
		enableManualFire = 0;
		class Turrets: Turrets
		{
		 class MainTurret: MainTurret
		 {
				body = "mainTurret";
				gun = "mainGun";
				minElev = -80;
				maxElev = 25;
				initElev = -80;
				minTurn = 30;
				maxTurn = 150;
				initTurn = 90;
				soundServo[] = {"",0.01,1.0};
				stabilizedInAxes = "StabilizedInAxesNone";
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				weapons[] = {"M240_veh"};
				magazines[] = {};
				gunnerName = "$STR_POSITION_CREWCHIEF";
				gunnerOpticsModel = "\ca\weapons\optika_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction = "MH60_Gunner";
				gunnerInAction = "MH60_Gunner";
				gunnerCompartments = "Compartment2";
				primaryGunner = 1;
				class ViewOptics
				{
				 initAngleX = 0;
				 minAngleX = -30;
				 maxAngleX = 30;
				 initAngleY = 0;
				 minAngleY = -100;
				 maxAngleY = 100;
				 initFov = 0.7;
				 minFov = 0.25;
				 maxFov = 1.1;
				};
		 };
		 class RightDoorGun: MainTurret
		 {
				body = "Turret_2";
				gun = "Gun_2";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				animationSourceHatch = "";
				selectionFireAnim = "zasleh_1";
				proxyIndex = 2;
				gunnerName = "$STR_POSITION_DOORGUNNER";
				commanding = -2;
				minTurn = -150;
				maxTurn = -30;
				initTurn = -90;
				weapons[] = {"M240_veh_2"};
				stabilizedInAxes = "StabilizedInAxesNone";
				gunBeg = "muzzle_2";
				gunEnd = "chamber_2";
				primaryGunner = 0;
				gunnerCompartments = "Compartment2";
				memoryPointGun = "machinegun_2";
				memoryPointGunnerOptics = "gunnerview_2";
			};
		};
			class Reflectors
			{
			class Left
			{
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 1.0;
			};
			class Right
			{
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				brightness = 1.0;
			};
		};	
	};
		
	class MH6J_DZ: AH6_Base_EP1
	{
		scope = 2;
		side = 2;
		crew = "";
		enablemanualfire = 0;
		typicalCargo[] = {};
		displayname = "MH-6J Little Bird";
		displaynameshort = "MH6J";
		hiddenselections[] = {"camo1", "camo2"};
		transportsoldier = 5;
		hiddenselectionstextures[] = {"ca\air_e\ah6j\data\ah6_merge1_co.paa", "ca\air_e\ah6j\data\default_co.paa"};
		icon = "\ca\air_e\data\UI\Icon_mh6j_CA.paa";
		model = "\ca\air_e\ah6j\mh6j";
		picture = "\ca\air_e\data\UI\Picture_mh6j_CA.paa";
		radartype = 0;
		class TransportMagazines{};
		class TransportWeapons{};
		weapons[] = {};
		magazines[] = {};
		commanderCanSee = 2+16+32;
		gunnerCanSee = 2+16+32;
		driverCanSee = 2+16+32;
		transportMaxWeapons = 5;
		transportMaxMagazines = 30;
        transportmaxbackpacks = 5;
		class Turrets {};
	};	
	
	/*class MH6J_SMD_ATACS : MH6J_DZ Commented out only magnum works
	{
		displayname = "MH6J (ATACS)";
		displaynameshort = "MH6J (ATACS)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_ah6_atacs_co.paa","ca\air_e\ah6j\data\default_co.paa"};
	};*/
	
	class MH6J_SMD_MAGPI : MH6J_DZ
	{
		displayname = "Hughes 500D";
		displaynameshort = "Hughes 500D";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_ah6_magnumpi_co.paa","ca\air_e\ah6j\data\default_co.paa"};
	};
	
	/*class MH6J_SMD_RACS : MH6J_DZ
	{
		displayname = "MH6J (RACS)";
		displaynameshort = "MH6J (RACS)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_ah6_racs_co.paa","ca\air_e\ah6j\data\default_co.paa"};
	};
	
	class MH6J_SMD_RACS_DIGI : MH6J_DZ
	{
		displayname = "MH6J (RACS) Digital";
		displaynameshort = "MH6J (RACS) Digital";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"ca\air_e\ah6j\data\ah6_merge1_co.paa","ca\air_e\ah6j\data\default_co.paa"};
	};*/
	
	class Mi17_base: Helicopter 
	{
		radartype = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics: ViewOptics {};
				class Turrets: Turrets {};
			};
			class BackTurret: MainTurret
			{
				class Turrets: Turrets {};
			};
		};
	};
	
	class Mi17_DZ: Mi17_base	
	{
		displayname = "Mi17";
		displaynameshort = "Mi17";
		radartype = 0;
		scope = 2;
		side = 2;
		crew = "";
		typicalCargo[] = {};
		hiddenSelections[] = {};
		class TransportMagazines{};
		class TransportWeapons{};
		commanderCanSee = 2+16+32;
		gunnerCanSee = 2+16+32;
		driverCanSee = 2+16+32;
		transportMaxWeapons = 10;
		transportMaxMagazines = 50;
        transportmaxbackpacks = 10;
		
		class Turrets : Turrets 
		{
			class MainTurret : MainTurret 
			{
				magazines[] = {};
			};
			class BackTurret : BackTurret
			{
				magazines[] = {};
			};
		};
	};
	
	class Mi17_Civilian_DZ: Mi17_base
	{
		scope = 2;
		vehicleClass = "Air";
		side = 3;
		displayName = "$STR_DN_MI17CIV";
		model = "\ca\air\Mi_8AMT";
		weapons[] = {};
		radartype = 0;
		accuracy = 1000;
		magazines[] = {};
		hasGunner = 0;
		class Turrets{};
		threat[] = {0.0,0.0,0.0};
		hiddenSelectionsTextures[] = {"\CA\air\data\mi8civil_body_g_CO.paa","\CA\air\data\mi8civil_det_g_CO.paa","ca\air\data\clear_empty.paa","ca\air\data\mi8_decals_ca.paa"};
	};
	
	class Mi17_UN_CDF_EP1
	{
		radartype = 0;
	};
	
	class Mi17_SMD_BLOPS: Mi17_UN_CDF_EP1 //Textures by Pliskin
	{
		scope = 2;
		vehicleClass = "Air";
		side = 3;
		displayName = "Mi17 Unmarked";
		model = "\ca\air\Mi_8AMT";
		weapons[] = {};		
		radartype = 0;
		accuracy = 1000;
		magazines[] = {};
		hasGunner = 0;
		class Turrets{};
		threat[] = {0.0,0.0,0.0};
		hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_mi17_blackops_body_co.paa","smd_assets\vehicles\textures\smd_veh_mi17_blackops_det_co.paa","smd_assets\vehicles\textures\smd_veh_mi17_blackops_decals2_co.paa"}; //by Textures by Pliskin
	};	
	
	class MV22_DZ: Plane {
		destrType = "DestructWreck";
		scope = 2;
		side = 1;
		faction = "USMC";
		displayName = "$STR_DN_MV22";
		vehicleClass = "Air";
		model = "\ca\air2\mv22\mv22.p3d";
		picture = "\ca\air2\data\UI\picture_MV22_CA.paa";
		icon = "\ca\air2\data\UI\icon_MV22_CA.paa";
		radartype = 0;
		mapSize = 28;
		crew = "USMC_Soldier_Pilot";
		accuracy = 0.5;
		soundGetIn[] = {"ca\sounds\Air\MV22\close",0.31622776,1};
		soundGetOut[] = {"ca\sounds\Air\MV22\open",0.31622776,1,40};
		soundDammage[] = {"ca\sounds\Air\MV22\int-alarm_loop",0.56234133,1};
		soundEngineOnInt[] = {"ca\sounds\Air\MV22\int_start",0.56234133,1.0};
		soundEngineOnExt[] = {"ca\sounds\Air\MV22\ext_start",0.56234133,1.0,800};
		soundEngineOffInt[] = {"ca\sounds\Air\MV22\int_stop",0.56234133,1.0};
		soundEngineOffExt[] = {"ca\sounds\Air\MV22\ext_stop",0.56234133,1.0,800};
		
		class Sounds {
		
			class EngineLowOut {
				sound[] = {"ca\sounds\Air\MV22\ext_engine_low",1.7782794,1,1000};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*engineOn*(rpm factor[0.85, 0])";
			};
			class EngineHighOut {
				sound[] = {"ca\sounds\Air\MV22\ext_engine_hi",1.7782794,1,1200};
				frequency = "1";
				volume = "camPos*engineOn*(rpm factor[0.55, 1.0])";
			};
			class ForsageOut {
				sound[] = {"ca\sounds\Air\MV22\ext_forsage",1.7782794,1,1800};
				frequency = "1";
				volume = "camPos*engineOn*(thrust factor[0.5, 1.0])";
			};
			class WindNoiseOut
			{
				sound[] = {"ca\sounds\Air\MV22\int-wind1",0.017782794,0.6,100};
				frequency = "(0.1+(1.2*(speed factor[1, 100])))";
				volume = "camPos*(speed factor[1, 100])";
			};
			class EngineLowIn
			{
				sound[] = {"ca\sounds\Air\MV22\int_engine_low",1.0,1.0};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.85, 0]))";
			};
			class EngineHighIn
			{
				sound[] = {"ca\sounds\Air\MV22\int_engine_hi",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))";
			};
			class ForsageIn
			{
				sound[] = {"ca\sounds\Air\MV22\int_forsage",1.4125376,1.1};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.5, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[] = {"ca\sounds\Air\MV22\int-wind1",0.0017782794,0.6};
				frequency = "(0.1+(1.2*(speed factor[1, 100])))";
				volume = "(1-camPos)*(speed factor[1, 100])";
			};
		};
		
		ejectSpeed[] = {0,-2,0};
		cabinOpening = 0;
		gearRetracting = 1;
		driverAction = "MV22_Pilot";
		cargoIsCoDriver[] = {1,0};
		cargoAction[] = {"MV22_Cargo","Mi17_Cargo02"};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment2"};
		maxSpeed = 556;
		transportSoldier = 24;
		vtol = 3;
		supplyRadius = 8;
		armor = 25;
		damageResistance = 0.00172;
		weapons[] = {};
		magazines[] = {};
		selectionRotorStill = "engine_static";
		selectionRotorMove = "engine_blur";
		
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\air2\mv22\data\mv22_sklo.rvmat","ca\air2\mv22\data\mv22_sklo_damage.rvmat","ca\air2\mv22\data\mv22_sklo_damage.rvmat","ca\air2\mv22\data\mv22_sklo_in.rvmat","ca\air2\mv22\data\mv22_sklo_in_damage.rvmat","ca\air2\mv22\data\mv22_sklo_in_damage.rvmat","ca\air2\mv22\data\mv22_01.rvmat","ca\air2\mv22\data\mv22_01_damage.rvmat","ca\air2\mv22\data\mv22_01_destruct.rvmat","ca\air2\mv22\data\mv22_02.rvmat","ca\air2\mv22\data\mv22_02_damage.rvmat","ca\air2\mv22\data\mv22_02_destruct.rvmat"};
		};
		dammageHalf[] = {};
		dammageFull[] = {};
		
		class AnimationSources
		{
			class Door_1_1
			{
				source = "user";
				animPeriod = 0;
			};
			class Ramp
			{
				source = "user";
				animPeriod = 0;
			};
			class pack_engine_1
			{
				source = "user";
				animPeriod = 0;
			};
			class engine_prop_1_1_turn: pack_engine_1{};
			class engine_prop_1_2_turn: pack_engine_1{};
			class engine_prop_1_3_turn: pack_engine_1{};
			class engine_prop_2_1_turn: pack_engine_1{};
			class engine_prop_2_2_turn: pack_engine_1{};
			class engine_prop_2_3_turn: pack_engine_1{};
			class engine_prop_1_1_close: pack_engine_1{};
			class engine_prop_1_3_close: pack_engine_1{};
			class engine_prop_2_1_close: pack_engine_1{};
			class engine_prop_2_2_close: pack_engine_1{};
			class pack_engine_2: pack_engine_1{};
			class turn_wing: pack_engine_1{};
		};
		
		class UserActions{};
		class Reflectors
		{
			class Left
			{
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 1.0;
			};
			class Right
			{
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				brightness = 1.0;
			};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_MV22";
		};
		class MFD
		{
			borderLeft = 0.09;
			borderRight = 0.02;
			borderTop = 0.02;
			borderBottom = 0.1;
			class MFD1
			{
				topLeft = "HUD LH1";
				topRight = "HUD PH1";
				bottomLeft = "HUD LD1";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0,1,0,0.1};
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.5,0.27};
					pos10[] = {"0.5+0.9","0.27+0.7"};
				};
				class Bones{};
				class Draw
				{
					alpha = 0.9;
					color[] = {0,1,0};
					clipTL[] = {0.0,0.0};
					clipBR[] = {1.0,1.0};
					condition = "on";
					class Altitude
					{
						type = "text";
						align = "left";
						scale = 1;
						source = "altitudeASL";
						sourceScale = 1;
						pos[] = {
							{ 0.28,0.042 },1};
						right[] = {
							{ 0.32,0.042 },1};
						down[] = {
							{ 0.28,0.082 },1};
					};
					class Altitude2
					{
						type = "text";
						align = "left";
						scale = 1;
						source = "altitudeAGL";
						sourceScale = 1;
						pos[] = {
							{ 0.45,0.042 },1};
						right[] = {
							{ 0.49,0.042 },1};
						down[] = {
							{ 0.45,0.082 },1};
					};
					class RPM
					{
						type = "text";
						align = "left";
						scale = 1;
						source = "rpm";
						sourceScale = 100;
						pos[] = {
							{ 0.63,0.18 },1};
						right[] = {
							{ 0.67,0.18 },1};
						down[] = {
							{ 0.63,0.22 },1};
					};
					class RPM2
					{
						type = "text";
						align = "left";
						scale = 1;
						source = "rpm";
						sourceScale = 100;
						pos[] = {
							{ 0.802,0.18 },1};
						right[] = {
							{ 0.842,0.18 },1};
						down[] = {
							{ 0.802,0.22 },1};
					};
					class Fuel
					{
						type = "text";
						align = "left";
						scale = 1;
						source = "fuel";
						sourceScale = 100;
						pos[] = {
							{ 0.63,0.425 },1};
						right[] = {
							{ 0.67,0.425 },1};
						down[] = {
							{ 0.63,0.465 },1};
					};
					class Fuel2
					{
						type = "text";
						align = "left";
						scale = 1;
						source = "fuel";
						sourceScale = 100;
						pos[] = {
							{ 0.802,0.425 },1};
						right[] = {
							{ 0.842,0.425 },1};
						down[] = {
							{ 0.802,0.465 },1};
					};
					class Speed
					{
						type = "text";
						align = "left";
						scale = 1;
						source = "speed";
						sourceScale = 2.23694;
						pos[] = {
							{ 0.28,0.225 },1};
						right[] = {
							{ 0.32,0.225 },1};
						down[] = {
							{ 0.28,0.265 },1};
					};
				};
			};
		};
	};
	
	class UH1H_base: Helicopter 
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics: ViewOptics {};
				class Turrets: Turrets {};
			};
			class LeftDoorGun: MainTurret
			{
				class Turrets: Turrets {};
			};
		};
	};
	
	class UH1H_DZ: UH1H_base
	{
		scope = 2;
		side = 2;
		crew = "";
		typicalCargo[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo_mlod"};
		class TransportMagazines{};
		class TransportWeapons{};
		commanderCanSee = 2+16+32;
		gunnerCanSee = 2+16+32;
		driverCanSee = 2+16+32;
		transportMaxWeapons = 5;
		transportMaxMagazines = 25;
        transportmaxbackpacks = 4;
		
		class Turrets : Turrets 
		{
			class MainTurret : MainTurret 
			{
				magazines[] = {};
			};
			class LeftDoorGun : LeftDoorGun
			{
				magazines[] = {};
			};
		};
		hiddenSelectionsTextures[] = {"ca\air_E\UH1H\data\UH1D_CO.paa", "ca\air_E\UH1H\data\UH1D_in_CO.paa", "ca\air_E\UH1H\data\default_co.paa"};
	};

	class UH1H_SMD_ATACS: UH1H_DZ
	{
		displayname = "UH1H (ATACS)";
		displaynameshort = "UH1H (ATACS)";	
		hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_uh1_atacs_co.paa", "smd_assets\vehicles\textures\smd_veh_uh1_atacs_in_co.paa", "ca\air_E\UH1H\data\default_co.paa"};
	};

	class UH1H_SMD_BLOPS: UH1H_DZ
	{
		displayname = "UH1H Unmarked";
		displaynameshort = "UH1H (Unmarked)";	
		hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_uh1_blackops_co.paa", "smd_assets\vehicles\textures\smd_veh_uh1_blackops_in_co.paa", "ca\air_E\UH1H\data\default_co.paa"};
	};

	class UH1H_SMD_BLOPS_DIGI: UH1H_DZ
	{
		displayname = "UH1H Unmarked";
		displaynameshort = "UH1H (Unmarked)";	
		hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_uh1_blackops_digital_co.paa", "smd_assets\vehicles\textures\smd_veh_uh1_blackops_digital_in_co.paa", "ca\air_E\UH1H\data\default_co.paa"};
	};

	class UH1H_SMD_RACS: UH1H_DZ
	{
		displayname = "UH1H (RACS)";
		displaynameshort = "UH1H (RACS)";	
		hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_uh1_racs_co.paa", "smd_assets\vehicles\textures\smd_veh_uh1_racs_in_co.paa", "ca\air_E\UH1H\data\default_co.paa"};
	};	

	class UH1H_SMD_RACS_DIGI: UH1H_DZ
	{
		displayname = "UH1H (RACS) Digital";
		displaynameshort = "UH1H (RACS) Digital";	
		hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_uh1_racs_digi_co.paa", "smd_assets\vehicles\textures\smd_veh_uh1_racs_digi_in_co.paa", "ca\air_E\UH1H\data\default_co.paa"};
	};		

	class UH1H_SMD_UN: UH1H_DZ
	{
		displayname = "UH1H (United Nations)";
		displaynameshort = "UH1H UNITED NATIONS";	
		hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_uh1_un_co.paa", "smd_assets\vehicles\textures\smd_veh_uh1_un_in_co.paa", "ca\air_E\UH1H\data\default_co.paa"};
	};	
	
	class UH1H_TK_DZ: UH1H_DZ { // Camo Huey - Copy UH1H_DZ
		hiddenSelectionsTextures[] = {"ca\air_E\UH1H\data\UH1D_TKA_CO.paa", "ca\air_E\UH1H\data\UH1D_in_TKA_CO.paa", "ca\air_E\UH1H\data\default_TKA_co.paa"};
	};
	
	class RubberBoat;
	class PBX: RubberBoat {
		cargoaction[] = {"PBX_Cargo01", "PBX_Cargo02", "PBX_Cargo03"};
		crew = "";
		displayname = "PBX";
		driveraction = "PBX_Driver";
		extcameraposition[] = {0, 4, -14};
		faction = "RU";
		icon = "\Ca\water\Data\map_ico\icomap_rubber_CA.paa";
		mapsize = 6;
		maxspeed = 90;
		model = "\ca\water\PBX";
		picture = "\ca\water\data\ico\pbx_CA.paa";
		scope = 2;
		side = 0;
		transportsoldier = 3;
		typicalcargo[] = {};
		class TransportMagazines {};
		class Library {
			libtextdesc = "The PBX is a Combat Rubber Craft very similar to the CRRC in design. It is intended to be used for maritime raids and infiltration, as well as river operations.";
		};
		class Damage {
			mat[] = {"ca\water\data\pbx_engine.rvmat", "ca\water\data\pbx_engine.rvmat", "ca\water\data\pbx_engine_destruct.rvmat", "ca\water\data\pbx_01.rvmat", "ca\water\data\pbx_01.rvmat", "ca\water\data\pbx_01_destruct.rvmat", "ca\water\data\pbx_02.rvmat", "ca\water\data\pbx_02.rvmat", "ca\water\data\pbx_02_destruct.rvmat"};
			tex[] = {};
		};
	};
	
	class Zodiac: RubberBoat {
		cargoaction[] = {"Zodiac_Cargo01", "Zodiac_Cargo02", "Zodiac_Cargo03"};
		crew = "";
		displayname = "Zodiac";
		driveraction = "Zodiac_Driver";
		extcameraposition[] = {0, 4, -14};
		faction = "US";
		icon = "\Ca\water\Data\map_ico\icomap_rubber_CA.paa";
		mapsize = 6;
		maxspeed = 90;
		model = "\ca\water\PBX";
		picture = "\ca\water\data\ico\pbx_CA.paa";
		scope = 2;
		side = 0;
		transportsoldier = 3;
		typicalcargo[] = {};
		class TransportMagazines {};
		class Library {
			libtextdesc = "The Zodiac is a Combat Rubber Craft very similar to the PBX in design. It is intended to be used for maritime raids and infiltration, as well as river operations.";
		};
		class Damage {
			mat[] = {"ca\water\data\pbx_engine.rvmat", "ca\water\data\pbx_engine.rvmat", "ca\water\data\pbx_engine_destruct.rvmat", "ca\water\data\pbx_01.rvmat", "ca\water\data\pbx_01.rvmat", "ca\water\data\pbx_01_destruct.rvmat", "ca\water\data\pbx_02.rvmat", "ca\water\data\pbx_02.rvmat", "ca\water\data\pbx_02_destruct.rvmat"};
			tex[] = {};
		};
	};
	
	class Ikarus;
	class Ikarus_base: Ikarus
	{
		terrainCoef = 3;
		maxSpeed = 50;
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {};
	};
	
	class Ikarus_SMD_COKE: Ikarus_base
	{
		displayname = "Ikarus (Coke)";
		displaynameshort = "Ikarus (Coke)";	
		expansion = 1;
		scope = 2;
		side = 3;
		faction = "BIS_TK_CIV";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_ikarus_coke_co"};
		rarityUrban = 0.4;
		crew = "TK_CIV_Takistani01_EP1";
		typicalCargo[] = {"TK_CIV_Takistani01_EP1"};
	};
	
	class Ikarus_SMD_OPENDAYZ: Ikarus_SMD_COKE
	{
		displayname = "Ikarus (OpenDayZ)";
		displaynameshort = "Ikarus (OpenDayZ)";	
		hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_ikarus_opendayz_co"};
	};
	class Ikarus_SMD_DAYZHORROR: Ikarus_SMD_COKE
	{
		displayname = "Ikarus (DayZHorror)";
		displaynameshort = "Ikarus (DayZHorror)";	
		hiddenSelectionsTextures[] = {"smd_assets\vehicles\textures\smd_veh_ikarus_dayzhorror_co"};
	};
	
	class SkodaBase;
	
	class car_hatchback: SkodaBase {
		terrainCoef = 2;
		maxSpeed = 90;
		armorcrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01", 0.707946, 1, 200};
		armorcrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02", 0.707946, 1, 200};
		armorcrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03", 0.707946, 1, 200};
		armorcrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04", 0.707946, 1, 200};
		brakedistance = 10;
		buildcrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01", 0.707946, 1, 200};
		buildcrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02", 0.707946, 1, 200};
		buildcrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03", 0.707946, 1, 200};
		buildcrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04", 0.707946, 1, 200};
		cargoaction[] = {"Hatchback_Cargo01"};
		cargoiscodriver[] = {1, 0};
		crew = "";
		displayname = "Old hatchback";
		driveraction = "Hatchback_Driver";
		faction = "CIV";
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"\ca\wheeled\data\hatchback_co.paa"};
		icon = "\Ca\wheeled\data\map_ico\icomap_skoda_CA.paa";
		mapsize = 6;
		model = "\ca\Wheeled\car_hatchback";
		picture = "\Ca\wheeled\data\ico\car_hatchback_CA.paa";
		rarityurban = 0.6;
		scope = 2;
		soundarmorcrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
		soundbuildingcrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
		soundengineoffext[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-stop-1", 0.398107, 1, 250};
		soundengineoffint[] = {"ca\sounds\vehicles\Wheeled\sedan\int\int-sedan-stop-1", 0.398107, 1};
		soundengineonext[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-start-1", 0.398107, 1, 250};
		soundengineonint[] = {"ca\sounds\vehicles\Wheeled\sedan\int\int-sedan-start-1", 0.398107, 1};
		soundgear[] = {"", "5.62341e-005", 1};
		soundgetin[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-getout-1", 0.316228, 1};
		soundgetout[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-getout-1", 0.316228, 1, 30};
		soundwoodcrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
		typicalcargo[] = {};
		wheelcircumference = 2.148;
		woodcrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01", 0.707946, 1, 200};
		woodcrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02", 0.707946, 1, 200};
		woodcrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03", 0.707946, 1, 200};
		woodcrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04", 0.707946, 1, 200};
		woodcrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05", 0.707946, 1, 200};
		woodcrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06", 0.707946, 1, 200};
		class SoundEvents {
			class AccelerationIn {
				expression = "(engineOn*(1-camPos))*gmeterZ";
				limit = 0.5;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\int\int-sedan-acce-1", 0.398107, 1};
			};
			class AccelerationOut {
				expression = "(engineOn*camPos)*gmeterZ";
				limit = 0.5;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\ext\ext-sedan-acce-1", 0.398107, 1, 250};
			};
		};
		class Sounds {
			class Engine {
				frequency = "(randomizer*0.05+0.95)*rpm";
				sound[] = {"\ca\sounds\Vehicles\Wheeled\sedan\ext\ext-sedan-low-1", 0.398107, 0.9, 300};
				volume = "engineOn*camPos*(rpm factor[0.6, 0.2])";
			};
			class EngineHighOut {
				frequency = "(randomizer*0.05+0.95)*rpm";
				sound[] = {"\ca\sounds\Vehicles\Wheeled\sedan\ext\ext-sedan-high-1", 0.398107, 0.8, 380};
				volume = "engineOn*camPos*(rpm factor[0.45, 0.9])";
			};
			class IdleOut {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\ext\ext-sedan-idle-1", 0.281838, 1, 200};
				volume = "engineOn*camPos*(rpm factor[0.3, 0])";
			};
			class TiresRockOut {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.316228, 1, 30};
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.316228, 1, 30};
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", 0.316228, 1, 30};
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.316228, 1, 30};
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.316228, 1, 30};
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.316228, 1, 30};
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\int-noise3", 0.316228, 1, 30};
				volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
			};
			class EngineLowIn {
				frequency = "(randomizer*0.05+0.95)*rpm";
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\int\int-sedan-low-1", 0.562341, 0.8};
				volume = "((engineOn*thrust) factor[0.65, 0.2])*(1-camPos)";
			};
			class EngineHighIn {
				frequency = "(randomizer*0.05+0.95)*rpm";
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\int\int-sedan-high-1", 0.562341, 0.8};
				volume = "((engineOn*thrust) factor[0.55, 0.95])*(1-camPos)";
			};
			class IdleIn {
				frequency = 1;
				sound[] = {"\ca\sounds\Vehicles\Wheeled\sedan\int\int-sedan-idle-1", 0.316228, 1};
				volume = "engineOn*(rpm factor[0.3, 0])*(1-camPos)";
			};
			class TiresRockIn {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.177828, 1};
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.177828, 1};
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", 0.177828, 1};
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.177828, 1};
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.177828, 1};
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.177828, 1};
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn {
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\BUS\int\noise3", 0.177828, 1};
				volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
			};
			class Movement {
				frequency = 1;
				sound = "soundEnviron";
				volume = 0;
			};
		};
		class Damage {
			mat[] = {"ca\wheeled\data\hatchback.rvmat", "ca\wheeled\data\hatchback.rvmat", "ca\wheeled\data\hatchback_destruct.rvmat", "ca\wheeled\data\hatchback.rvmat", "ca\wheeled\data\hatchback.rvmat", "ca\wheeled\data\hatchback_destruct.rvmat", "ca\wheeled\data\detailmapy\auta_skla.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
			tex[] = {};
		};
		class Library {
			libtextdesc = "Civilian Car";
		};
	};
	
	class SMD_hatchback_rustbucket : car_hatchback {
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"\smd_assets\vehicles\textures\smd_hatchback_rustbucket_co.paa"};
	};
	class SMD_hatchback_bloodied : car_hatchback {
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"\smd_assets\vehicles\textures\smd_hatchback_bloody_co.paa"};
	};
	class Lada1_TK_CIV_EP1;
	class SMD_Lada_bloodied : Lada1_TK_CIV_EP1 {
		terrainCoef = 2;
		maxSpeed = 90;
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\smd_assets\vehicles\textures\smd_lada_bloody_co.paa","\Ca\wheeled_E\Lada\Data\Lada_glass_ECIV1_CA.paa"};
	};
	
	class TT650_Base;
	class TT650_Ins: TT650_Base {
		terrainCoef = 2.5;
		maxSpeed = 75;
		crew = "";
		faction = "INS";
		hiddenselectionstextures[] = {"\ca\wheeled3\tt650\data\Yam650_skin1_CO.paa"};
		scope = 2;
		side = 0;
		typicalcargo[] = {};
	};
	
	class UAZ_Unarmed_Base;
	class UAZ_CDF: UAZ_Unarmed_Base {
		terrainCoef = 0;
		maxSpeed = 70;
		accuracy = 0.3;
		crew = "";
		faction = "CDF";
		hiddenselectionstextures[] = {"\ca\wheeled\data\Uaz_main_002_CO.paa"};
		scope = 2;
		side = 1;
		typicalcargo[] = {};
	};
	class Ural_TK_CIV_EP1;
	class SMD_Ural_Bloody: Ural_TK_CIV_EP1
	{
		terrainCoef = 0;
		maxSpeed = 70;
		hiddenSelectionsTextures[] = {"\smd_assets\vehicles\textures\smd_ural_kabina_bloody_co.paa","\CA\wheeled_E\Ural\Data\Ural_plachta_CIVIL_CO.paa"};
	};
	class V3S_Base_EP1;
	class V3S_Civ: V3S_Base_EP1 {
		terrainCoef = 0;
		maxSpeed = 70;
		crew = "";
		faction = "CIV";
		rarityurban = 0.3;
		scope = 2;
		side = 3;
		typicalcargo[] = {};
		class Library {
			libtextdesc = "The V3S is a Czech-made military 6x6 cargo truck capable of carrying cargo up to 5 tons, or up to 3 tons in rough terrain.<br/>This one is a harmless civilian vehicle.";
		};
	};	
	class SMD_v3s_bloody : V3S_Civ {
		terrainCoef = 0;
		maxSpeed = 70;
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\smd_assets\vehicles\textures\smd_v3s_kabpar_bloody_co.paa","\ca\wheeled2\v3s\data\v3s_intkor_co.paa"};
	};
	class Animal;
	class Pastor;
	class Fin;
	class DZAnimal: Animal
	{
		scope = 0;
		side = 1;
		accuracy = 0.25;
		boneHead = "head";
		bonePrimaryWeapon = "head";
		triggerAnim = "";
		picture = "";
		icon = "\Ca\animals2\data\mapicon_animals_ca.paa";
		mapSize = 10;
		weaponSlots = 0;
		fsmFormation = "";
		fsmDanger = "";
		agentTasks[] = {};
		moves = "CfgMovesAnimal";
		memoryPointHeadAxis = "head_axis";
		woman = 0;
		faceType = "Default";
		boneLEye = "l_eye";
		boneREye = "r_eye";
		boneLEyelidUp = "eye_upl";
		boneREyelidUp = "eye_upr";
		boneLEyelidDown = "eye_lwl";
		boneREyelidDown = "eye_lwr";
		boneLPupil = "l_pupila";
		boneRPupil = "r_pupila";
		memoryPointAim = "aimPoint";
		memoryPointCameraTarget = "camera";
		extCameraPosition[] = {0,0.5,-2.5};
		class EventHandlers{};
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		class VariablesScalar {};
		class VariablesString {};
	};
	class DZ_Pastor : Pastor {
		scope = 2;
		side = 1;
		model = "\ca\animals2\Dogs\Pastor\Pastor";
		displayName = "Alsatian";
		moves = "CfgMovesDogDZ";
		gestures = "CfgGesturesDogDZ";
		fsmDanger = "";
		fsmFormation = "";
		agentTasks[] = {};
		woman = 0;
		class EventHandlers{};
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		class VariablesScalar {};
		class VariablesString {};
	};
	
	class DZ_Fin : Fin {
		scope = 2;
		model = "\ca\animals2\Dogs\Fin\Fin";
		displayName = "Fin";
		moves = "CfgMovesDogDZ";
		gestures = "CfgGesturesDogDZ";
		fsmDanger = "";
		fsmFormation = "";
	};//End Pooch Begine SMD Clothing
	class GER_Soldier_EP1; //Original "Bandit" Clothing (KSK German)
	class Bandit1_DZ : GER_Soldier_EP1 {
		displayName = "$STR_CHAR_2";
		side = 1;
		weapons[] = {"Throw","Put"};
		//model = "\dayz\characters\man_bandit";
		//portrait = "\Ca\characters_E\data\portraits\ger_soldier_CA";
		magazines[] = {};
		backpack = "";
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};	
	class BanditSkin_DZ : Bandit1_DZ {
		displayName = "$STR_CHAR_2";
		side = 1;
		weapons[] = {"Throw","Put"};
		//model = "\dayz\characters\man_bandit";
		//portrait = "\Ca\characters_E\data\portraits\ger_soldier_CA";
		magazines[] = {};
		backpack = "";
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class GER_Soldier_TL_EP1; //external class reference to non-masked bandit skin
	class BanditClothes_DZ : GER_Soldier_TL_EP1 {
		displayName = "$STR_CHAR_2";
		side = 1;
		weapons[] = {"Throw","Put"};
		//model = "\dayz\characters\man_bandit";
		//portrait = "\Ca\characters_E\data\portraits\ger_soldier_CA";
		magazines[] = {};
		backpack = "";
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};	
	class BAF_Soldier_L_W;
	class Camo1_DZ: BAF_Soldier_L_W {
		displayName = "Survivor";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class BAF_Soldier_Officer_W; //"Rocket" Clothing (BAF Officer)
	class Rocket_DZ: BAF_Soldier_Officer_W {
		displayName = "Survivor";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class BAF_Soldier_W; //Original "Soldier" Clothing (BAF Soldier)
	class Soldier1_DZ: BAF_Soldier_W {
		displayName = "Survivor";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class BAF_Soldier_SniperH_W;
	class Sniper1_DZ: BAF_Soldier_SniperH_W {
		displayName = "Survivor";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class BAF_Soldier_SniperH_MTP; //Lighter Green Ghillie
	class SniperLight_DZ: BAF_Soldier_SniperH_MTP {
		displayName = "Survivor";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class SniperBandit_DZ: Sniper1_DZ {
		displayName = "Bandit";
		model = "\ca\characters2\Ghillie_Top";
	};
	class CZ_Soldier_Sniper_EP1;
	class SniperLightBandit_DZ: CZ_Soldier_Sniper_EP1 {
		displayName = "Survivor";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class Sniper1W_DZ : Sniper1_DZ {}; //Woman Ghillie
	class SniperBanditW_DZ : SniperBandit_DZ {}; //Woman Bandit Ghillie
	class SniperLightW_DZ : SniperLight_DZ {}; //Woman Light Ghillie
	class SniperLightBanditW_DZ : SniperLightBandit_DZ {}; //Woman Bandit Light Ghillie	
	
	class SniperD_DZ : Sniper1_DZ {  //Desert Ghillie
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_ghillie_des_coverall_co.paa"};
	};
	class SniperDW_DZ : SniperD_DZ {}; //Woman Desert Ghillie
	
	class SniperBanditD_DZ : SniperBandit_DZ { //Bandit Desert Ghillie
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"smd_assets\characters\textures\smd_ghillie_des_tophalf_co.paa"};
	};
	class SniperBanditDW_DZ : SniperBanditD_DZ {}; //Woman Bandit Desert Ghillie
	class BanditW1_DZ;
	class BanditSkinW_DZ : BanditW1_DZ {};
	
	class Bag_Base_EP1;
	class Bag_Base_BAF;
	class DZ_Patrol_Pack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "Patrol Pack (coyote)";
		picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_COYOTE_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault_Coyote.p3d";
		transportMaxWeapons = 1;
		transportMaxMagazines = 10;
	};
	class DZ_Assault_Pack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "Assault Pack (ACU)";
		picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapSize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault.p3d";
		transportMaxWeapons = 1;
		transportMaxMagazines = 12;
	};

	class DZ_Czech_Vest_Puch: Bag_Base_EP1
	{
		displayname = "Czech Vest Pouch";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_acr_small.p3d";
		picture = "\ca\weapons_e\data\icons\backpack_ACR_small_CA.paa";
		scope = 2;
		transportmaxmagazines = 8;
		transportmaxweapons = 0;
	};

	class DZ_ALICE_Pack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "ALICE Pack";
		picture = "\ca\weapons_e\data\icons\backpack_TK_ALICE_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_tk_alice.p3d";
		transportMaxWeapons = 1;
		transportMaxMagazines = 18;
	};

	class DZ_TK_Assault_Pack_EP1 : Bag_Base_EP1
	{
		scope = 2;
		displayName = "Survival ACU";
		mapSize = 2;
		picture = "\ca\weapons_e\data\icons\backpack_CIVIL_ASSAULT_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		model = "\ca\weapons_e\AmmoBoxes\backpack_civil_assault.p3d";
		transportMaxWeapons = 1;
		transportMaxMagazines = 16;
	};

	class DZ_British_ACU : Bag_Base_EP1
	{
		scope = 2;
		displayName = "British Assault Pack";
		mapSize = 2;
		model = "\ca\weapons_baf\Backpack_Small_BAF";
		picture = "\ca\weapons_baf\data\UI\backpack_BAF_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		transportMaxWeapons = 1;
		transportMaxMagazines = 20;
	};

	class DZ_CivilBackpack_EP1: Bag_Base_EP1    
	{
		scope = 2;
		displayName = "Czech Backpack";
		picture = "\ca\weapons_e\data\icons\backpack_ACR_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_acr.p3d";
		transportMaxWeapons = 1;
		transportMaxMagazines = 22;
	};

	class DZ_Backpack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "Backpack (coyote)";
		picture = "\ca\weapons_e\data\icons\backpack_US_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_us.p3d";
		transportMaxWeapons = 1;
		transportMaxMagazines = 24;
	};

	class House {
		class DestructionEffects;
	};
	
	// This parent class is made to make referring to these objects easier later with allMissionObjects
	class SpawnableWreck : House {};
	class Mi8Wreck_DZ: SpawnableWreck {
		model = "\Ca\air\MI8Wreck.p3d";
        icon = "ca\Misc_E\data\Icons\Icon_uh60_wreck_CA";
        mapSize = 15;
        displayName = $STR_VEH_NAME_MI8_WRECK;
        vehicleClass = "Wrecks";
        heightAdjustment = 1;
        class AnimationSources {};
    };

	class UH1Wreck_DZ: SpawnableWreck
	{
		model = "\ca\air2\UH1Y\UH1Y_Crashed.p3d";
		icon = "\ca\air2\data\UI\icon_UH1Y_CA.paa";
		mapSize = 15;
		displayName = "Crashed UH-1Y";
		vehicleClass = "Wrecks";
        class AnimationSources {};
	};
	class UH60Wreck_DZ: SpawnableWreck
	{
		model = "\Ca\Misc_E\Wreck_UH60_EP1.p3d";
		icon = "ca\Misc_E\data\Icons\Icon_uh60_wreck_CA";
		mapSize = 15;
		displayName = "UH-60 Wreck";
		vehicleClass = "Wrecks";
        class AnimationSources {};
	};
	class HouseDZ: House {
		class MarkerLights
		{
			class RedBlinking
			{
				name = "";
				color[] = {0,0.0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = "false";
			};
		};
		class Reflectors
		{
			class MainLight
			{
				color[] = {0,0.0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				position = "";
				direction = "";
				hitpoint = "";
				selection = "";
				size = 0;
				period[] = {0,1};
			};
		};
	};
	class Strategic;
	class NonStrategic;

	class FuelStation : Strategic {
		icon = "\Ca\buildings\Icons\i_fuel_CA.paa";
		transportFuel = 0; //50000;
		nameSound = "fuelstation";
	};
	class Land_smd_benzina_schnell_open : Strategic {
		icon = "\Ca\buildings\Icons\i_fuel_CA.paa";
		transportFuel = 0; //50000;
		nameSound = "fuelstation";
	};

	class Land_A_FuelStation_Feed: Strategic
	{
		icon = "\Ca\buildings\Icons\i_fuel_CA.paa";
		model = "\ca\structures\House\A_FuelStation\A_FuelStation_Feed";
		transportFuel = 0; //50000;
		nameSound = "fuelstation";
	};
	class Land_Ind_MalyKomin: House
	{
		scope = 1;
		armor = 100;
		featureSize = 40;
		model = "\Ca\buildings2\Ind_CementWorks\Ind_MalyKomin\Ind_MalyKomin";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\Buildings2\Ind_CementWorks\Ind_MalyKomin\Ind_MalyKomin_ruins";
				position = "";
				intensity = 1;
				interval = 0.05;
				lifeTime = 1;
			};
		};
		ladders[] = {{"start","end"}};
		class MarkerLights
		{
			class RedBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
	};
	class Land_Rail_Semafor: House
	{
		scope = 1;
		model = "\CA\Structures\Rail\Rail_Misc\rail_Semafor";
		destrType = "DestructTree";
		class MarkerLights
		{
			class GreenStill
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
	};
	class Land_Rail_Zavora: House
	{
		scope = 1;
		model = "\CA\Structures\Rail\Rail_Misc\rail_Zavora";
		destrType = "DestructTree";
		class MarkerLights
		{
			class WhiteBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
	};
	class Land_majak: House
	{
		scope = 1;
		model = "\ca\buildings\majak";
		displayName = "Lighthouse";
		animated = 1;
		ladders[] = {{"start","end"}};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\buildings\ruins\majak_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		armor = 1000;
		class MarkerLights
		{
			class RedBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
		class Reflectors
		{
			class MainLight
			{
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				position = "";
				direction = "";
				hitpoint = "";
				selection = "";
				size = 0;
				brightness = 0;
				period[] = {0,1};
			};
		};
	};
	class Land_majak2: Land_majak
	{
		model = "\ca\buildings\majak2";
		class Reflectors
		{
			class MainLight
			{
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				position = "";
				direction = "";
				hitpoint = "";
				selection = "";
				size = 0;
				brightness = 0;
				period[] = {0,1};
			};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\buildings\ruins\majak_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_Vysilac_FM: House
	{
		scope = 1;
		armor = 150;
		destrType = "DestructBuilding";
		ladders[] = {{"start","end"}};
		model = "\ca\buildings\Vysilac_FM";
		class MarkerLights
		{
			class RedBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
		class Destruction
		{
			animations[] = {{"ca\buildings\rtm\vysilac_fm.rtm",0.5,3}};
		};
		displayName = "Radio 1";
	};
	class Land_telek1: House
	{
		scope = 1;
		armor = 600;
		destrType = "DestructBuilding";
		model = "\ca\buildings\telek1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\buildings\ruins\telek1_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class MarkerLights
		{
			class RedBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
		displayName = "Telek 1";
		ladders[] = {{"start1","end1"},{"start2","end2"},{"start3","end3"}};
	};
	class Land_komin: House
	{
		ladders[] = {{"start","end"}};
		model = "\ca\buildings\komin";
		armor = 300;
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\buildings\ruins\komin_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class MarkerLights
		{
			class RedBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
	};
	class Land_Stoplight01: House
	{
		scope = 1;
		model = "\ca\buildings\Misc\stoplight01";
		armor = 50;
		class MarkerLights
		{
			class YellowTopBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
			class YellowLowBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
	};
	class Land_Stoplight02: Land_Stoplight01
	{
		model = "\ca\buildings\Misc\stoplight02";
		class MarkerLights
		{
			class YellowTopBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
	};
	class Land_NavigLight: House
	{
		scope = 1;
		displayName = "";
		model = "\ca\buildings\Misc\NavigLight";
		armor = 50;
		class MarkerLights
		{
			class WhiteStill
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
	};
	class Land_runway_edgelight: House
	{
		scope = 1;
		displayName = "";
		model = "\ca\buildings\Misc\runway_edgelight";
		armor = 20;
		class MarkerLights
		{
			class RedStill
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
	};
	class Land_VASICore: NonStrategic
	{
		scope = 1;
		animated = 0;
		reversed = 0;
		vehicleClass = "Objects";
		icon = "";
		model = "";
		displayName = "VASI";
		accuracy = 0.2;
		typicalCargo[] = {};
		destrType = "DestructBuilding";
		irTarget = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		cost = 0;
		armor = 100;
		mapSize = 6.4;
		simulation = "house";
	};
	class Land_HouseB_Tenement: House
	{
		armor = 180;
		model = "\Ca\Structures\House\HouseBT\HouseB_Tenement";
		scope = 1;
		featureSize = 50;
		class HitPoints
		{
			class Hit1
			{
				armor = 0.15;
				material = -1;
				name = "dam 1";
				visual = "damT1";
				passThrough = 0;
				convexComponent = "dam 1";
				class DestructionEffects
				{
					class Dust
					{
						simulation = "particles";
						type = "HousePartDust";
						position = "";
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					class Dust2: Dust
					{
						type = "HousePartDustLong";
					};
					class Walls: Dust
					{
						type = "HousePartWall";
					};
				};
			};
		};
		class MarkerLights
		{
			class RedBlinking
			{
				name = "";
				color[] = {0,0.0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = "false";
			};
		};
		class AnimationSources
		{
			class Lights_1
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class Lights_2: Lights_1
			{
			};
		};
	};
	class Land_Mil_ControlTower: House
	{
		scope = 1;
		armor = 400;
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures\Mil\Mil_ControlTower_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class HitPoints
		{
			class Hit1
			{
				armor = 0.25;
				material = -1;
				name = "dam 1";
				visual = "damT1";
				passThrough = 1;
				convexComponent = "dam 1";
				class DestructionEffects
				{
					class Dust
					{
						simulation = "particles";
						type = "HousePartDust";
						position = "";
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					class Dust2: Dust
					{
						type = "HousePartDustLong";
					};
					class Walls: Dust
					{
						type = "HousePartWall";
					};
				};
			};
			class Hit2
			{
				armor = 0.25;
				material = -1;
				name = "dam 2";
				visual = "damT2";
				passThrough = 1;
				convexComponent = "dam 2";
				class DestructionEffects
				{
					class Dust
					{
						simulation = "particles";
						type = "HousePartDust";
						position = "";
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					class Dust2: Dust
					{
						type = "HousePartDustLong";
					};
					class Walls: Dust
					{
						type = "HousePartWall";
					};
				};
			};
			class Hit3
			{
				armor = 0.25;
				material = -1;
				name = "dam 3";
				visual = "damT3";
				passThrough = 1;
				convexComponent = "dam 3";
				class DestructionEffects
				{
					class Dust
					{
						simulation = "particles";
						type = "HousePartDust";
						position = "";
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					class Dust2: Dust
					{
						type = "HousePartDustLong";
					};
					class Walls: Dust
					{
						type = "HousePartWall";
					};
				};
			};
			class Hit4
			{
				armor = 0.25;
				material = -1;
				name = "dam 4";
				visual = "damT4";
				passThrough = 1;
				convexComponent = "dam 4";
				class DestructionEffects
				{
					class Dust
					{
						simulation = "particles";
						type = "HousePartDust";
						position = "";
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					class Dust2: Dust
					{
						type = "HousePartDustLong";
					};
					class Walls: Dust
					{
						type = "HousePartWall";
					};
				};
			};
			class Hit5
			{
				armor = 0.25;
				material = -1;
				name = "dam 5";
				visual = "damT5";
				passThrough = 1;
				convexComponent = "dam 5";
				class DestructionEffects
				{
					class Dust
					{
						simulation = "particles";
						type = "HousePartDust";
						position = "";
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					class Dust2: Dust
					{
						type = "HousePartDustLong";
					};
					class Walls: Dust
					{
						type = "HousePartWall";
					};
				};
			};
			class Hit6
			{
				armor = 0.25;
				material = -1;
				name = "dam 6";
				visual = "damT6";
				passThrough = 1;
				convexComponent = "dam 6";
				class DestructionEffects
				{
					class Dust
					{
						simulation = "particles";
						type = "HousePartDust";
						position = "";
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					class Dust2: Dust
					{
						type = "HousePartDustLong";
					};
					class Walls: Dust
					{
						type = "HousePartWall";
					};
				};
			};
			class Hitglass
			{
				armor = 0.0005;
				material = -1;
				name = "dam glass";
				visual = "damTglass";
				passThrough = 0;
				convexComponent = "dam glass";
			};
			class Hittower
			{
				armor = 0.0005;
				material = -1;
				name = "dam tower";
				visual = "damTtower";
				passThrough = 0;
				convexComponent = "dam tower";
			};
		};
		replaceDamagedHitpoints[] = {"Hit1","Hit2","Hit3","Hit4","Hit5","Hit6"};
		class Damage
		{
			tex[] = {};
			mat[] = {"CA\Structures\Mil\Data\Mil_ControlTower_windows1.rvmat","CA\Structures\Mil\Data\destruct_half_Mil_ControlTower_windows1.rvmat","CA\Structures\Mil\Data\destruct_full_Mil_ControlTower_windows1.rvmat"};
		};
		model = "\CA\Structures\Mil\Mil_ControlTower";
		ladders[] = {{"start1","end1"},{"start2","end2"}};
		class AnimationSources
		{
			class dvere_spodni_R
			{
				animPeriod = 1;
				initPhase = 0;
				source = "user";
			};
			class dvere_spodni_L
			{
				animPeriod = 1;
				initPhase = 1;
				source = "user";
			};
			class dvere_vrchni
			{
				animPeriod = 1;
				initPhase = 1;
				source = "user";
			};
			class HitTower
			{
				source = "Hit";
				hitpoint = "HitTower";
				raw = 1;
			};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = "<img image='\ca\ui\data\ui_action_open_ca.paa' size='4' />";
				displayName = "Open door";
				position = "Dvere_spodni_R_osa";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere_spodni_R"" < 0.5";
				statement = "this animate [""Dvere_spodni_R"", 1];this animate [""Dvere_spodni_L"", 1]";
			};
			class CloseDoors1: OpenDoors1
			{
				displayNameDefault = "<img image='\ca\ui\data\ui_action_close_ca.paa' size='4' />";
				displayName = "Close door";
				condition = "this animationPhase ""Dvere_spodni_R"" >= 0.5";
				statement = "this animate [""Dvere_spodni_R"", 0];this animate [""Dvere_spodni_L"", 0]";
			};
			class OpenDoors3
			{
				displayNameDefault = "<img image='\ca\ui\data\ui_action_open_ca.paa' size='4' />";
				displayName = "Open door";
				position = "Dvere_Vrchni_osa";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere_vrchni"" < 0.5";
				statement = "this animate [""dvere_vrchni"", 1]";
			};
			class CloseDoors3: OpenDoors3
			{
				displayNameDefault = "<img image='\ca\ui\data\ui_action_close_ca.paa' size='4' />";
				displayName = "Close door";
				condition = "this animationPhase ""dvere_vrchni"" >= 0.5";
				statement = "this animate [""dvere_vrchni"", 0]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors3";
		actionEnd2 = "OpenDoors3";
		class MarkerLights
		{
			class RedBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
		replaceDamaged = "Land_Mil_ControlTower_dam";
	};
	class Land_NAV_Lighthouse: House
	{
		scope = 1;
		armor = 500;
		featureSize = 15;
		model = "\Ca\Structures\NAV\NAV_Lighthouse";
		ladders[] = {{"start1","end1"}};
		class MarkerLights
		{
			class RedBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
		class Reflectors
		{
			class MainLight
			{
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				position = "";
				direction = "";
				hitpoint = "";
				selection = "";
				size = 0;
				brightness = 0;
				period[] = {0,1};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\structures\nav\data\nav_lighthouse_multi.rvmat","ca\structures\nav\data\destruct_half_nav_lighthouse_multi.rvmat","ca\structures\nav\data\destruct_full_nav_lighthouse_multi.rvmat","ca\structures\nav\data\nav_lighthouse_windows.rvmat","ca\structures\nav\data\destruct_half_lighthouse_windows.rvmat","ca\structures\nav\data\destruct_full_lighthouse_windows.rvmat"};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures\Nav\NAV_Lighthouse_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_NAV_Lighthouse2: Land_NAV_Lighthouse
	{
		model = "\Ca\Structures\NAV\NAV_Lighthouse2";
		class Reflectors: Reflectors
		{
			class MainLight: MainLight
			{
				period[] = {0,1};
			};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures\Nav\NAV_Lighthouse_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_A_Crane_02b: House
	{
		scope = 1;
		armor = 110;
		featureSize = 30;
		model = "\ca\buildings2\A_Crane_02\A_Crane_02b";
		destrType = "DestructBuilding";
		ladders[] = {{"start3","end3"},{"start4","end4"},{"start5","end5"},{"start6","end6"}};
		class MarkerLights
		{
			class RedBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
		class Destruction
		{
			animations[] = {{"ca\buildings2\A_Crane_02\data\anim\crane.rtm",0.5,3}};
		};
	};
	class Land_Farm_WTower: House
	{
		scope = 1;
		armor = 100;
		model = "\CA\buildings2\Farm_WTower\Farm_WTower";
		class MarkerLights
		{
			class RedBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\buildings2\Farm_WTower\Farm_WTower_ruins";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_A_TVTower_Mid: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\ca\Structures\A_TVTower\A_TVTower_Mid";
		featureSize = 150;
		class MarkerLights
		{
			class RedStill
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
	};
	class Land_A_TVTower_Top: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\ca\Structures\A_TVTower\A_TVTower_Top";
		featureSize = 150;
		class MarkerLights
		{
			class RedLight
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
	};
	class WeaponHolderBase;
	class WeaponHolder_ItemBaseball_Bat: WeaponHolderBase
	{
		scope=2;
		displayName="Baseball_Bat";
		model="\z\addons\dayz_communityassets\models\baseball_bat.p3d";
		class eventHandlers
		{
			init="[(_this select 0),'cfgWeapons','ItemBaseball_Bat'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};	
	class WeaponHolder_ItemBaseball_Bat_Barbed: WeaponHolderBase
	{
		scope=2;
		displayName="Baseball_Bat_Barbed";
		model="\z\addons\dayz_communityassets\models\baseball_bat_barbed.p3d";
		class eventHandlers
		{
			init="[(_this select 0),'cfgWeapons','ItemBaseball_Bat_Barbed'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemBaseball_Bat_Nailed: WeaponHolderBase
	{
		scope=2;
		displayName="Baseball_Bat_Nailed";
		model="\z\addons\dayz_communityassets\models\baseball_bat_nails.p3d";
		class eventHandlers
		{
			init="[(_this select 0),'cfgWeapons','ItemBaseball_Bat_Nailed'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemCrowbar: WeaponHolderBase
	{
		scope=2;
		displayName="Crowbar";
		model="\dayz_equip\models\crowbar.p3d";
		class eventHandlers
		{
			init="[(_this select 0),'cfgWeapons','ItemCrowbar'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemMachete: WeaponHolderBase
	{
		scope=2;
		displayName="Machete";
		model="\z\addons\dayz_communityassets\models\machete.p3d";
		class eventHandlers
		{
			init="[(_this select 0),'cfgWeapons','ItemMachete'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemShovel: WeaponHolderBase
	{
		scope=2;
		displayName="Shovel";
		model="\z\addons\dayz_communityassets\models\shovel_weaponized.p3d";
		class eventHandlers
		{
			init="[(_this select 0),'cfgWeapons','ItemShovel'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemPropane: WeaponHolderBase
	{
		scope = public;
		displayName="Propane Tank";
		model="\smd_assets\objects\propane.p3d";
		class eventHandlers
		{
			init="[(_this select 0),'cfgMagazines','ItemPropane'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WoodenArrowF : WeaponHolderBase {
		scope = public;
		displayName = "WoodenArrowF";
		model = "\dayz_weapons\models\bolt";
		
		class eventHandlers {
			init = "[(_this select 0),'cfgMagazines','WoodenArrow'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	
	
	class Ship;
	class Boat : Ship {
		precision = 6;
		brakeDistance = 20;	// vehicle movement precision
		class Turrets;
		class NewTurret;
	};
	class RHIB_DZ : Boat {
		scope = 2;
		displayName = $STR_DN_RHIB;
		vehicleClass = "Ship";
		accuracy = 0.5;	// accuracy needed to recognize type of this target
		crew = "";
		faction = "USMC";
		side = 0;
		model = "\ca\water\rhib";
		picture = "\ca\water\data\ico\rhib_CA.paa";
		Icon = "\Ca\water\Data\map_ico\icomap_RHIB_CA.paa";
		mapSize = 8;
		unitInfoType = "UnitInfoShip";
		soundEnviron[] = {"", db-25, 0.9};
		
		class SoundEvents {};
		insideSoundCoef = 1;
		soundEngineOnInt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-start-01", 0.1, 1.0};
		soundEngineOnExt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-start-01", 1.0, 1.0, 150};
		soundEngineOffInt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-stop-01", 0.1, 1.0};
		soundEngineOffExt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-stop-01", 1.0, 1.0, 150};
		
		class Sounds {
			class Engine {
				sound[] = {"ca\sounds\vehicles\water\rhib\ext-boat-engine-low-01", db0, 0.9, 300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*(rpm factor[0.5, 0.1])";
			};
			
			class EngineHighOut {
				sound[] = {"ca\sounds\vehicles\water\rhib\ext-boat-engine-high-01", db0, 0.8, 300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*(rpm factor[0.4, 1.3])";
			};
			
			class IdleOut {
				sound[] = {"ca\sounds\vehicles\water\rhib\ext-boat-engine-idle-03", 0.562341, 1.0, 150};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.3, 0])";
			};
			
			class WaternoiseOutW0 {
				sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-water-noise-nospeed", 0.398107, 1.0, 100};
				frequency = "1";
				volume = "(speed factor[7, 0])";
			};
			
			class WaternoiseOutW1 {
				sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-lospd-noise-02", 0.398107, 1.0, 100};
				frequency = "1";
				volume = "((speed factor[2, 12]) min (speed factor[12, 2]))";
			};
			
			class WaternoiseOutW2 {
				sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-hispd-noise-02", 0.398107, 1.0, 100};
				frequency = "1";
				volume = "(speed factor[9, 18.7])";
			};
		};
		driverAction = "RHIB_Driver";
		cargoAction[] = {"RHIB_Cargo"};
		getInAction = "GetInMedium";
		getOutAction = "GetOutMedium";
		cargoGetInAction[] = {"GetInMedium"};
		cargoGetOutAction[] = {"GetOutMedium"};
		castDriverShadow = true;
		castCargoShadow = true;
		gunnerHasFlares = false;
		maxSpeed = 60;	// max speed on level road, km/h
		enableGPS = 0;
		transportSoldier = 10;
		typicalCargo[] = {};
		supplyRadius = 3;
		
		class Exhausts {
			class Exhaust1 {
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "";
			};
		};
		armor = 30;
		
		class TransportMagazines {};
		
		class AnimationSources {
			class ReloadAnim {
				source = "reload";
				weapon = "M2";
			};
			
			class ReloadMagazine {
				source = "reloadmagazine";
				weapon = "M2";
			};
			
			class Revolving {
				source = "revolving";
				weapon = "M2";
			};
		};
		class Turrets : Turrets {
			class MainTurret : NewTurret {
				class HitPoints {
					class HitTurret {
						armor = 0.8;
						material = 60;
						name = "vez";
						visual = "vez";
						passThrough = true;
					};
					
					class HitGun {
						armor = 0.6;
						material = 60;
						name = "zbran";
						visual = "zbran";
						passThrough = true;
					};
				};
				stabilizedInAxes = 0;
				body = "MainTurret";
				gun = "MainGun";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				gunnerAction = "RHIB_Gunner";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				ejectDeadGunner = true;
				outGunnerMayFire = true;
				inGunnerMayFire = false;
				minElev = -25;
				maxElev = 60;
				initElev = 5;
				minTurn = -135;
				maxTurn = 135;
				initTurn = 0;
				soundServo[] = {"\ca\sounds\vehicles\servos\turret-1", db-45, 1.0};
				gunBeg = "usti hlavne";	// endpoint of the gun
				gunEnd = "konec hlavne";	// chamber of the gun
				weapons[] = {"M2"};
				magazines[] = {};
				gunnerName = $STR_POSITION_FRONTGUNNER;
				gunnerOpticsModel = "\ca\weapons\optika_empty";
				gunnerForceOptics = false;
				startEngine = false;
				commanding = 2;
				primaryGunner = 0;
				primaryObserver = 1;
				
				class ViewOptics {
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				
				class ViewGunner {
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
		};
		
		class Library {
			libTextDesc = $STR_LIB_RHIB;
		};
		extCameraPosition[] = {0, 4.0, -14.0};
		
		class Damage {
			tex[] = {};
			mat[] = {"ca\water\data\rhib.rvmat", "ca\water\data\rhib.rvmat", "ca\water\data\rhib_destruct.rvmat", "ca\water\data\rhib_dash.rvmat", "ca\water\data\rhib_dash.rvmat", "ca\water\data\rhib_dash_destruct.rvmat"};
		};
	};
	/* DayZ Sahrani Buildings */
	class Land_A_tent;
	class BuiltItems : NonStrategic {};
	
	class Sandbag1_DZ : BuiltItems {
		scope = public;
		destrType = "DestructNo";
		cost = 100;
		model = "\ca\misc2\BagFenceShort.p3d";
		icon = "\ca\data\data\Unknown_object.paa";//"\Ca\misc3\data\Icons\icon_fortBagFenceLong_ca.paa"
		mapSize = 2;
		armor = 400;
		displayName = "Bag Fence";
		vehicleClass = "Fortifications";
	};
	
	
	class BoxStorage_DZ : Land_A_tent {
		scope = 2;
		displayName = "Storage Box";
		model = "\ca\misc\drevena_bedna.p3d"; 
		icon = "\ca\data\data\Unknown_object.paa";
		armor = 400; 
		vehicleClass = "Survival";
		transportMaxMagazines = 100;
		transportMaxWeapons = 20;
		transportMaxBackpacks = 10;
	};
	
	class WeaponCache_DZ : Land_A_tent {
		Scope = 2;
		displayName = "Weapon cache";
		model = "\ca\buildings\furniture\ammobednaX.p3d"; 
		icon = "\ca\data\data\Unknown_object.paa";
		armor = 400; 
		vehicleClass = "Survival";
		transportMaxMagazines = 75;
		transportMaxWeapons = 5;
	};

	class Gunrack_DZ : Land_A_tent {
		scope = 2;
		destrType = "DestructTent";
		armor = 400; 
		vehicleClass = "Survival";
		model = "\ca\misc2\Gunrack1.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		displayName = $STR_DN_GUNRACK1;
		transportMaxWeapons = 20;
		transportMaxMagazines = 0;
		
		class AnimationSources {
			class TakeWeapon_hide {
				source = "User";
				animPeriod = 0.0001;
				initPhase = 0;
			};
		};
	};
	
	class Bench_DZ : BuiltItems {
		scope = 2;
		destrType = "DestructTent";
		armor = 400; 
		model = "\ca\buildings\misc\lavicka_3.p3d"; //ca\buildings\misc\lavicka_4.p3d"
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		displayName = "Bench (Wood)";
		vehicleClass = "Fortifications";
	};
	
	class BagFenceLong_DZ : BuiltItems {
		scope = 2;
		destrType = "DestructTent";
		armor = 400; 
		model = "\ca\misc2\BagFenceLong.p3d";
		icon = "\Ca\misc3\data\Icons\icon_fortBagFenceLong_ca.paa";
		mapSize = 2;
		displayName = "Long Bag Fence";
		vehicleClass = "Fortifications";
	};
	
	class BagFenceLongCorner_DZ : BuiltItems {
		scope = 2;
		destrType = "DestructTent";
		armor = 400; 
		model = "\ca\misc2\BagFenceCorner.p3d"; //ca\misc2\BagFenceCorner.p3d
		icon = "\ca\data\data\Unknown_object.paa"; //icon = "\Ca\misc3\data\Icons\icon_fortBagFenceCorner_ca.paa";
		mapSize = 2;
		displayName = "Bag Fence Corner";
		vehicleClass = "Fortifications";
	};
	
	class BagFenceLongRound_DZ : BuiltItems {
		scope = 2;
		destrType = "DestructTent";
		armor = 400; 
		model = "\Ca\misc2\BagFenceRound.p3d"; //fortBagFenceRound_ca
		displayName = "Round Bag Fence";
		icon = "\ca\data\data\Unknown_object.paa"; //icon = "\Ca\misc3\data\Icons\icon_fortBagFenceRound_ca.paa";
		mapSize = 3.2;
		vehicleClass = "Fortifications";
	};
	
	class Fort_RazorWire_DZ : BuiltItems {
		scope = 2;
		destrType = "DestructTent";
		armor = 400; 
		animated = 0;
		model = "\ca\Misc\Barbedwire.p3d"; //\ca\misc\Fort_Razorwire";
		icon = "\ca\data\data\Unknown_object.paa"; //icon = "\Ca\misc\data\icons\I_drutkolczasty_CA.paa";
		accuracy = 0.3;
		mapSize = 5.5;
		displayName = "Razor Wire Fortification";
		vehicleClass = "Fortifications";
	};
	
	class Fortified_nest_DZ : BuiltItems {
		scope = 2;
		destrType = "DestructTent";
		model = "\Ca\misc3\fortified_nest_small";
		displayName = $STR_DN_FORTIFIED_NEST_SMALL;
		icon = "\Ca\misc3\data\Icons\icon_fortNestSmall_ca.paa";
		armor = 500;
		irTarget = 0;
		vehicleClass = "Fortifications";
	};
	
	class CampWoodTower_DZ : BuiltItems {
		scope = 2;
		destrType = "DestructTent";
		armor = 400;
		model = "\ca\structures\Misc\Misc_DeerStand\misc_deerstand";
		ladders[] = {{"start1", "end1"}};
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		displayName = "Tower (Wood)";
		vehicleClass = "Fortifications";
	};
	
	class Barb_Gate_DZ : BuiltItems {
		animated = 1;
		scope = 2;
		model = "\ca\misc2\BarbGate.p3d";
		icon = "\Ca\misc2\data\Icons\icon_barGate2_ca.paa";
		mapSize = 3;
		displayName = $STR_DN_BARGATE2;
		destrType = "DestructTent";
		vehicleClass = "Fortifications";
		
		class AnimationSources {
			class Door01 {
				animPeriod = 1;
				initPhase = 0;
			};
		};
		
		class UserActions {
			class OpenDoors1 {
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_DOOR;
				position = "Door01_axis";
				radius = 3;
				onlyForPlayer = 1;
				condition = "this animationPhase ""Door01"" < 0.5";
				statement = "this animate [""Door01"", 1]";
			};
			
			class CloseDoors1 {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				position = "Door01_axis";
				radius = 3;
				onlyForPlayer = 1;
				condition = "this animationPhase ""Door01"" >= 0.5";
				statement = "this animate [""Door01"", 0]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
	};
	
	class Workbench_DZ : Land_A_tent {
		scope = 2;
		displayName="Workbench";
		model="\smd_assets\objects\workbench.p3d";
		icon = "\smd_assets\objects\icons\workbench.paa";
		armor = 400; 
		vehicleClass = "Survival";
		transportMaxMagazines = 100;
		transportMaxWeapons = 20;
		transportMaxBackpacks = 0;
	};
};

class CfgNonAIVehicles {
	
	access = 0;
	class StreetLamp
	{
		scope = 0;
		model = "";
		destrType = "DestructTree";
		simulation = "thing";
	};
	class Land_lampa_sidl: StreetLamp
	{
		scope = 1;
		model = "\ca\buildings\Misc\lampa_sidl";
	};
	class Land_lampa_sidl_2: StreetLamp
	{
		scope = 1;
		model = "\ca\buildings\Misc\lampa_sidl_2";
	};
	class Land_lampa_sidl_3: StreetLamp
	{
		scope = 1;
		model = "\ca\buildings\Misc\lampa_sidl_3";
	};
	class Land_lampa_ind: StreetLamp
	{
		scope = 1;
		model = "\ca\buildings\Misc\lampa_ind";
	};
	class Land_lampa_ind_zebr: StreetLamp
	{
		scope = 1;
		model = "\ca\buildings\Misc\lampa_ind_zebr";
	};

};