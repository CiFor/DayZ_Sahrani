////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 3.52
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

enum {
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone= 0
};

//Class wheeled_e : SUV\config.bin{
class CfgPatches
{
 class CAWheeled_E_SUV
 {
  units[] = {"SUV_EP1"};
  weapons[] = {};
  requiredVersion = 1.02;
  requiredAddons[] = {"CAWheeled_E"};
 };
};
class CfgVehicles
{
 class Land;
 class LandVehicle: Land
 {
  class HitPoints;
 };
 class Car: LandVehicle
 {
  class HitPoints
  {
   class HitLFWheel;
   class HitLBWheel;
   class HitRFWheel;
   class HitRBWheel;
   class HitGlass1;
   class HitGlass2;
   class HitGlass3;
   class HitGlass4;
  };
 };
 class ArmoredSUV_Base_PMC: Car
 {
  brakeDistance = 19;
 };
 class SUV_Base_EP1: Car
 {
  brakeDistance = 19;
  expansion = 1;
  htMin = 60;
  htMax = 1800;
  afMax = 200;
  mfMax = 100;
  mFact = 0;
  tBody = 0;
  scope = 0;
  displayName = "$STR_EP1_DN_SUV_Base_EP1";
  class Library
  {
   libTextDesc = "$STR_EP1_LIB_SUV";
  };
  model = "\ca\wheeled_e\SUV\SUV.p3d";
  armor = 25;
  damageResistance = 0.00635;
  transportSoldier = 5;
  Icon = "\CA\wheeled_e\Data\UI\Icon_suv_CA.paa";
  Picture = "\CA\wheeled_e\Data\UI\Picture_suv_CA.paa";
  MapSize = 7;
  fuelCapacity = 130;
  class Turrets{};
  weapons[] = {"MiniCarHorn"};
  enableGPS = 1;
  magazines[] = {};
  maxSpeed = 230;
  driverAction = "SUV_Driver_EP1";
  cargoAction[] = {"SUV_Cargo_EP1","SUV_Cargo02_EP1","SUV_Cargo01_EP1","SUV_Cargo02_EP1","SUV_Cargo01_EP1"};
  outsideSoundFilter = 1;
  insideSoundCoef = 0.8;
  soundGear[] = {"",5.6234134e-005,1};
  soundGetIn[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",0.56234133,1};
  soundGetOut[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",0.56234133,1,20};
  soundEngineOnInt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_start",0.17782794,1.0};
  soundEngineOnExt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_start",0.17782794,1.0,100};
  soundEngineOffInt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_stop",0.17782794,1.0};
  soundEngineOffExt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_stop",0.17782794,1.0,100};
  buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01",0.70794576,1,200};
  buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02",0.70794576,1,200};
  buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03",0.70794576,1,200};
  buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04",0.70794576,1,200};
  soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
  WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01",0.70794576,1,200};
  WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02",0.70794576,1,200};
  WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03",0.70794576,1,200};
  WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04",0.70794576,1,200};
  WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05",0.70794576,1,200};
  WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06",0.70794576,1,200};
  soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
  ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01",0.70794576,1,200};
  ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02",0.70794576,1,200};
  ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03",0.70794576,1,200};
  ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04",0.70794576,1,200};
  soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
  class SoundEvents
  {
   class AccelerationIn
   {
    sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_accelerate_3_x",0.56234133,1.0};
    limit = "0.4";
    expression = "(engineOn*(1-camPos))*gmeterZ";
   };
   class AccelerationOut
   {
    sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_accelerate_3",0.56234133,1.0,200};
    limit = "0.4";
    expression = "(engineOn*camPos)*gmeterZ";
   };
  };
  class Sounds
  {
   class Engine
   {
    sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_low",0.17782794,1.4,100};
    frequency = "(randomizer*0.05+0.95)*rpm";
    volume = "camPos*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
   };
   class EngineHighOut
   {
    sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_high",1.0,0.8,300};
    frequency = "(randomizer*0.05+0.95)*rpm";
    volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
   };
   class IdleOut
   {
    sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_idle",0.56234133,1.0,100};
    frequency = "1";
    volume = "engineOn*camPos*(rpm factor[0.4, 0])";
   };
   class TiresRockOut
   {
    sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.31622776,1.0,30};
    frequency = "1";
    volume = "camPos*rock*(speed factor[2, 20])";
   };
   class TiresSandOut
   {
    sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.31622776,1.0,30};
    frequency = "1";
    volume = "camPos*sand*(speed factor[2, 20])";
   };
   class TiresGrassOut
   {
    sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2",0.31622776,1.0,30};
    frequency = "1";
    volume = "camPos*grass*(speed factor[2, 20])";
   };
   class TiresMudOut
   {
    sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.31622776,1.0,30};
    frequency = "1";
    volume = "camPos*mud*(speed factor[2, 20])";
   };
   class TiresGravelOut
   {
    sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.31622776,1.0,30};
    frequency = "1";
    volume = "camPos*gravel*(speed factor[2, 20])";
   };
   class TiresAsphaltOut
   {
    sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.31622776,1.0,30};
    frequency = "1";
    volume = "camPos*asphalt*(speed factor[2, 20])";
   };
   class NoiseOut
   {
    sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.1,1.0,30};
    frequency = "1";
    volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
   };
   class EngineLowIn
   {
    sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_low_x",0.31622776,1.4};
    frequency = "(randomizer*0.05+0.95)*rpm";
    volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.45]))";
   };
   class EngineHighIn
   {
    sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_high_x",1.0,0.8};
    frequency = "(randomizer*0.05+0.95)*rpm";
    volume = "(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";
   };
   class IdleIn
   {
    sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_idle_x",0.31622776,1.0};
    frequency = "1";
    volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
   };
   class TiresRockIn
   {
    sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",0.31622776,1.0};
    frequency = "1";
    volume = "(1-camPos)*rock*(speed factor[2, 20])";
   };
   class TiresSandIn
   {
    sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",0.31622776,1.0};
    frequency = "1";
    volume = "(1-camPos)*sand*(speed factor[2, 20])";
   };
   class TiresGrassIn
   {
    sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass2",0.31622776,1.0};
    frequency = "1";
    volume = "(1-camPos)*grass*(speed factor[2, 20])";
   };
   class TiresMudIn
   {
    sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",0.31622776,1.0};
    frequency = "1";
    volume = "(1-camPos)*mud*(speed factor[2, 20])";
   };
   class TiresGravelIn
   {
    sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",0.31622776,1.0};
    frequency = "1";
    volume = "(1-camPos)*gravel*(speed factor[2, 20])";
   };
   class TiresAsphaltIn
   {
    sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",0.31622776,1.0};
    frequency = "1";
    volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
   };
   class NoiseIn
   {
    sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2",0.17782794,1.0};
    frequency = "1";
    volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
   };
   class Movement
   {
    sound = "soundEnviron";
    frequency = "1";
    volume = "0";
   };
  };
  class HitPoints: HitPoints
  {
   class HitLFWheel: HitLFWheel
   {
    armor = 0.15;
   };
   class HitLBWheel: HitLBWheel
   {
    armor = 0.15;
   };
   class HitRFWheel: HitRFWheel
   {
    armor = 0.15;
   };
   class HitRBWheel: HitRBWheel
   {
    armor = 0.15;
   };
   class HitFuel
   {
    armor = 0.14;
    material = -1;
    name = "palivo";
    visual = "";
    passThrough = 1;
   };
   class HitEngine
   {
    armor = 0.5;
    material = -1;
    name = "motor";
    visual = "";
    passThrough = 1;
   };
   class HitGlass1: HitGlass1
   {
    armor = 1;
   };
   class HitGlass2: HitGlass2
   {
    armor = 1;
   };
   class HitGlass3: HitGlass3
   {
    armor = 1;
   };
   class HitGlass4: HitGlass4
   {
    armor = 1;
   };
  };
  class Damage
  {
   tex[] = {};
   mat[] = {"Ca\wheeled_E\SUV\data\SUV_body.rvmat","Ca\wheeled_E\SUV\data\SUV_body_damage.rvmat","Ca\wheeled_E\SUV\data\SUV_body_destruct.rvmat","Ca\wheeled_E\SUV\data\SUV_chrom.rvmat","Ca\wheeled_E\SUV\data\SUV_chrom_damage.rvmat","Ca\wheeled_E\SUV\data\SUV_chrom_destruct.rvmat","Ca\wheeled_E\SUV\data\SUV_glass.rvmat","Ca\wheeled_E\SUV\data\SUV_glass_damage.rvmat","Ca\wheeled_E\SUV\data\SUV_glass_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
  };
  HiddenSelections[] = {"camo"};
  HiddenSelectionsTextures[] = {"ca\wheeled_e\suv\data\suv_body_co.paa"};
 };
 class SUV_TK_CIV_EP1: SUV_Base_EP1
 {
  scope = 2;
  crew = "TK_CIV_Takistani01_EP1";
  typicalCargo[] = {"TK_CIV_Takistani01_EP1","TK_CIV_Takistani01_EP1","TK_CIV_Takistani01_EP1","TK_CIV_Takistani01_EP1","TK_CIV_Takistani01_EP1"};
  rarityUrban = 0.8;
  faction = "BIS_TK_CIV";
  side = 3;
 };
 class SUV_TK_EP1: SUV_Base_EP1
 {
  scope = 2;
  rarityUrban = 0.8;
  side = 0;
  faction = "BIS_TK";
  crew = "TK_Soldier_EP1";
  typicalCargo[] = {"TK_Soldier_EP1","TK_Soldier_EP1","TK_Soldier_EP1","TK_Soldier_EP1","TK_Soldier_EP1"};
 };
 class SUV_UN_EP1: SUV_Base_EP1
 {
  scope = 2;
  rarityUrban = 0.8;
  side = 2;
  faction = "BIS_UN";
  crew = "UN_CDF_Soldier_EP1";
  typicalCargo[] = {"UN_CDF_Soldier_EP1","UN_CDF_Soldier_EP1","UN_CDF_Soldier_EP1","UN_CDF_Soldier_EP1","UN_CDF_Soldier_EP1"};
 };
};
//};
