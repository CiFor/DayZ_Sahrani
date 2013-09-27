////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 3.52
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class smd_objects : config.bin{
class CfgPatches
{
 class CAMisc
 {
  units[] = {};
  weapons[] = {};
  requiredVersion = 1.6;
  requiredAddons[] = {"CAData","CABuildings","CAMisc"};
  version = 1.0;
 };
};
class CfgVehicleClasses
{
 class smd_objects
 {
  displayName = "SMD Objects";
 };
};
class cfgVehicles
{
 class Thing;
 class Strategic;
 class NonStrategic;
 class House;
 class SMD_podlejzacka: Strategic
 {
  accuracy = 0.3;
  animated = 0;
  armor = 20;
  coefInside = 0.5;
  coefInsideHeur = 0.8;
  cost = 0;
  destrType = "DestructTent";
  displayName = "$STR_DN_CRAWLING";
  icon = "\ca\data\data\Unknown_object.paa";
  irTarget = 0;
  mapSize = 0.7;
  model = "\ca\misc\podlejzacka.p3d";
  nameSound = "obstacle";
  scope = 2;
  transportAmmo = 0;
  transportFuel = 0;
  transportRepair = 0;
  typicalCargo[] = {};
  vehicleClass = "smd_objects";
 };
 class SMD_prolejzacka: SMD_podlejzacka
 {
  destrType = "DestructTree";
  displayName = "$STR_DN_TRAINING_2";
  model = "\ca\misc\prolejzacka.p3d";
 };
 class SMD_prebehlavka: SMD_podlejzacka
 {
  displayName = "$STR_DN_TRAINING_3";
  model = "\ca\misc\prebehlavka.p3d";
 };
 class SMD_obihacka: SMD_podlejzacka
 {
  displayName = "$STR_DN_TRAINING_4";
  model = "\ca\misc\obihacka.p3d";
 };
 class SMD_kolotoc: SMD_podlejzacka
 {
  displayName = "$STR_DN_CAROUSEL";
  model = "\ca\misc\kolotoc.p3d";
 };
 class SMD_maly_kolotoc: SMD_podlejzacka
 {
  displayName = "$STR_DN_CAROUSEL_SMALL";
  model = "\smd_objects\maly_kolotoc.p3d";
 };
 class SMD_houpacka: SMD_podlejzacka
 {
  displayName = "$STR_DN_SWING";
  model = "\ca\misc\houpacka.p3d";
 };
 class SMD_kulata_prolezacka: SMD_podlejzacka
 {
  displayName = "$STR_DN_PROLEZACKA";
  model = "\smd_objects\kulata_prolezacka.p3d";
 };
 class SMD_piskoviste: SMD_podlejzacka
 {
  displayName = "$STR_DN_SANDPIT";
  model = "\ca\misc\piskoviste.p3d";
 };
 class SMD_fuel_tank_small: Strategic
 {
  accuracy = 0.5;
  animated = 0;
  armor = 50;
  destrType = "DestructEngine";
  displayName = "Fuel tank (small)";
  icon = "\Ca\misc\data\icons\i_fuel_CA.paa";
  model = "\ca\misc\fuel_tank_small.p3d";
  scope = 2;
  transportFuel = 0;
  vehicleClass = "smd_objects";
 };
 class SMD_Fuel_tank_big: Strategic
 {
  accuracy = 0.5;
  animated = 0;
  armor = 50;
  destrType = "DestructEngine";
  displayName = "Fuel tank (big)";
  icon = "\Ca\misc\data\icons\i_fuel_CA.paa";
  model = "\ca\misc\Fuel_tank_big.p3d";
  nameSound = "fuelstation";
  scope = 2;
  transportFuel = 50000;
  vehicleClass = "smd_objects";
 };
 class SMD_Fuel_tank_stairs: SMD_Fuel_tank_big
 {
  displayName = "Fuel tank (stairs)";
  ladders[] = {
   { "start","end" }};
  model = "\ca\misc\Fuel_tank_stairs.p3d";
 };
 class BarrelBase;
 class SMD_Barrels: BarrelBase
 {
  displayName = "$STR_DN_BARRELS";
  icon = "\Ca\misc\data\icons\i_beczki_CA.paa";
  model = "\ca\misc\Barels.p3d";
  scope = 2;
  supplyRadius = 2.2;
  transportFuel = 400;
  vehicleClass = "smd_objects";
 };
 class SMD_Barrel1: BarrelBase
 {
  displayName = "$STR_DN_BARREL_RED";
  icon = "\Ca\misc\data\icons\i_beczka_CA.paa";
  model = "\ca\misc\Barel1.p3d";
  scope = 2;
  vehicleClass = "smd_objects";
 };
 class SMD_Barrel2: SMD_Barrel1
 {
  displayName = "$STR_DN_BARREL_BROWN";
  model = "\smd_objects\barel2.p3d";
 };
 class SMD_Barrel3: SMD_Barrel1
 {
  displayName = "$STR_DN_BARREL_YELLOW";
  model = "\ca\misc\barel3.p3d";
 };
 class SMD_Barrel4: SMD_Barrel1
 {
  displayName = "$STR_DN_BARREL_BLACK";
  model = "\ca\misc\barel4.p3d";
 };
 class SMD_Barrel5: SMD_Barrel1
 {
  displayName = "$STR_DN_BARREL_GREEN";
  model = "\ca\misc\barel5.p3d";
 };
 class SMD_Barrel6: SMD_Barrel1
 {
  displayName = "$STR_DN_BARREL_PURPLE";
  model = "\ca\misc\barel6.p3d";
 };
 class SMD_RoadCone: Thing
 {
  accuracy = 0.2;
  animated = 0;
  displayName = "$STR_DN_ROADCONE";
  icon = "\ca\data\library\data\icons\road_cone_ca.paa";
  mapSize = 0.1;
  model = "\ca\data\library\road_cone.p3d";
  nameSound = "";
  scope = 2;
  simulation = "thing";
  vehicleClass = "smd_objects";
  class DestructionEffects{};
 };
 class SMD_Camera1: Thing
 {
  accuracy = 0.2;
  armor = 20;
  cost = 0;
  displayName = "$STR_DN_CAMERA";
  icon = "\ca\data\data\unknown_object";
  mapSize = 0.7;
  model = "\smd_objects\betacam.p3d";
  nameSound = "";
  scope = 2;
  simulation = "thing";
  transportFuel = 0;
  vehicleClass = "smd_objects";
  class DestructionEffects{};
 };
 class SMD_Computer: SMD_Camera1
 {
  armor = 5;
  displayName = "$STR_DN_COMPUTER";
  model = "\smd_objects\pc.p3d";
 };
 class SMD_TVStudio: SMD_Camera1
 {
  accuracy = 10000;
  destrType = "DestructNo";
  displayName = "TV Studio";
  mapSize = 5;
  model = "\smd_objects\tvstudio.p3d";
 };
 class SMD_Radio: SMD_Camera1
 {
  armor = 5;
  displayName = "$STR_DN_RADIO";
  model = "\ca\misc\radio.p3d";
 };
 class SMD_WallMap: SMD_Camera1
 {
  access = 2;
  displayName = "$STR_DN_OUT_WALLMAP";
  icon = "\ca\data\data\Unknown_object.paa";
  model = "\ca\misc\nastenkax";
 };
 class BarrelHelper;
 class PaletaHelper: BarrelHelper
 {
  accuracy = 0.2;
  displayName = "$STR_DN_PALLET";
  icon = "\ca\data\data\Unknown_object.paa";
  irTarget = 0;
  mapSize = 0.7;
  nameSound = "pallet";
  transportFuel = 0;
 };
 class PaletaBase: PaletaHelper
 {
  accuracy = 1000;
  cost = 0;
  destrType = "DestructNo";
  class DestructionEffects{};
 };
 class SMD_Paleta1: PaletaBase
 {
  displayName = "$STR_DN_PALLET_A";
  model = "\ca\misc\PaletaA.p3d";
  scope = 2;
  vehicleClass = "smd_objects";
 };
 class SMD_Paleta2: PaletaBase
 {
  displayName = "$STR_DN_PALLETS_C";
  model = "\ca\misc\PaletyC.p3d";
  scope = 2;
  vehicleClass = "smd_objects";
 };
 class SMD_JeepWreck1: Strategic
 {
  accuracy = 0.3;
  animated = 0;
  armor = 20;
  cost = 10000;
  destrType = "DestructNo";
  displayName = "$STR_DN_SMD_JEEP_WRECK_1";
  icon = "\ca\misc\data\icons\i_jeep_w_ca.paa";
  irTarget = 0;
  mapSize = 7;
  model = "\smd_objects\jeept.p3d";
  nameSound = "wreck";
  scope = 2;
  transportAmmo = 0;
  transportFuel = 0;
  transportRepair = 0;
  typicalCargo[] = {};
  vehicleClass = "smd_objects";
 };
 class SMD_JeepWreck2: SMD_JeepWreck1
 {
  displayName = "$STR_DN_SMD_JEEP_WRECK_2";
  model = "\smd_objects\jeept_horeznacky.p3d";
 };
 class SMD_JeepWreck3: SMD_JeepWreck1
 {
  displayName = "$STR_DN_SMD_JEEP_WRECK_3";
  model = "\smd_objects\jeept_tanker.p3d";
 };
 class SMD_BMP2Wreck: SMD_JeepWreck1
 {
  displayName = "$STR_DN_BMP2_WRECK";
  icon = "\ca\misc\data\icons\i_bmp2_w_ca.paa";
  mapSize = 8;
  model = "\ca\misc\bmp2_wrecked.p3d";
 };
 class SMD_M113Wreck: SMD_JeepWreck1
 {
  displayName = "$STR_DN_SMD_M113_WRECK";
  icon = "\ca\misc\data\icons\i_m113_w_ca.paa";
  mapSize = 8;
  model = "\smd_objects\m113t.p3d";
 };
 class SMD_UralWreck: SMD_JeepWreck1
 {
  displayName = "$STR_DN_URAL_WRECK";
  icon = "\ca\misc\data\icons\i_ural_w_ca.paa";
  mapSize = 12;
  model = "\ca\misc\ural_wrecked.p3d";
 };
 class SMD_BlackhawkWreck: SMD_JeepWreck1
 {
  displayName = "$STR_DN_SMD_UH60_WRECK";
  icon = "\ca\misc\data\icons\i_uh60_w_ca.paa";
  mapSize = 14;
  model = "\smd_objects\uh60_crashed.p3d";
 };
 class SMD_Body: SMD_JeepWreck1
 {
  displayName = "$STR_DN_SMD_BODY_US";
  icon = "\ca\data\data\unknown_object";
  model = "\smd_objects\mrtvola_army1.p3d";
  nameSound = "body";
 };
 class SMD_Body_SLA: SMD_Body
 {
  displayName = "$STR_DN_SMD_BODY_SLA";
  model = "\smd_objects\mrtvola_army2.p3d";
 };
 class SMD_Body_RACS: SMD_Body
 {
  displayName = "$STR_DN_SMD_BODY_RACS";
  model = "\smd_objects\mrtvola_army3.p3d";
 };
 class SMD_Datsun01Wreck: SMD_JeepWreck1
 {
  displayName = "$STR_DN_DATSUN01_WRECK";
  icon = "\ca\misc\data\icons\i_datsun_w_ca.paa";
  mapSize = 7;
  model = "\ca\misc\datsun01t.p3d";
 };
 class SMD_Datsun02Wreck: SMD_JeepWreck1
 {
  displayName = "$STR_DN_DATSUN02_WRECK";
  icon = "\ca\misc\data\icons\i_datsun_w_ca.paa";
  mapSize = 7;
  model = "\ca\misc\datsun02t.p3d";
 };
 class SMD_HiluxWreck: SMD_JeepWreck1
 {
  displayName = "$STR_DN_HILUX_WRECK";
  icon = "\ca\misc\data\icons\i_hilux_w_ca.paa";
  mapSize = 7;
  model = "\ca\misc\hiluxt.p3d";
 };
 class SMD_Vysilacka: SMD_JeepWreck1
 {
  access = 2;
  displayName = "$STR_DN_OUT_RADIO";
  icon = "\ca\data\data\unknown_object.paa";
  model = "\ca\misc\mutt_vysilacka";
 };
 class SMD_Misc01: NonStrategic
 {
  accuracy = 0.2;
  animated = 0;
  cost = 0;
  displayName = "$STR_DN_OUT_BLACK";
  icon = "\ca\data\data\unknown_object.paa";
  ladders[] = {};
  model = "\smd_objects\carnakrychle";
  nameSound = "house";
  scope = 2;
  vehicleClass = "smd_objects";
 };
 class SMD_Hayroll: SMD_Misc01
 {
  displayName = "Hay Roll";
  icon = "\ca\data\data\Unknown_object.paa";
  model = "\ca\Misc\seno_balik";
  scope = 2;
 };
 class FlagCarrier;
 class SMD_FlagCarrierWest: FlagCarrier
 {
  accuracy = 1000;
  displayName = "$STR_DN_SMD_FLAG_USA";
  nameSound = "flag";
  scope = 2;
  class EventHandlers
  {
   init = "(_this select 0) setFlagTexture ""\smd_objects\data\flag_usa.paa""";
  };
 };
 class SMD_FlagCarrierSouth: SMD_FlagCarrierWest
 {
  displayName = "$STR_DN_SMD_FLAG_RACS";
  class EventHandlers
  {
   init = "(_this select 0) setFlagTexture ""\smd_objects\data\flag_racs.paa""";
  };
 };
 class SMD_FlagCarrierNorth: SMD_FlagCarrierWest
 {
  displayName = "$STR_DN_SMD_FLAG_SLA";
  class EventHandlers
  {
   init = "(_this select 0) setFlagTexture ""\smd_objects\data\flag_sla.paa""";
  };
 };
 class SMD_Danger: FlagCarrier
 {
  accuracy = 0.2;
  destrType = "DestructNo";
  displayName = "$STR_DN_DANGER";
  icon = "\ca\misc\data\icons\i_danger_ca.paa";
  mapSize = 0.7;
  model = "\ca\misc\danger!.p3d";
  scope = 2;
 };
 class SMD_DangerWest: FlagCarrier
 {
  accuracy = 0.2;
  destrType = "DestructNo";
  displayName = "$STR_XBOX_DANGER_WEST";
  icon = "\ca\misc\data\icons\i_danger_ca.paa";
  mapSize = 0.7;
  model = "\smd_objects\danger_us.p3d";
  scope = 2;
 };
 class SMD_DangerEAST: SMD_DangerWest
 {
  displayName = "$STR_XBOX_DANGER_EAST";
  model = "\smd_objects\danger_rus.p3d";
 };
 class SMD_DangerGUE: SMD_DangerWest
 {
  displayName = "$STR_XBOX_DANGER_GUER";
  model = "\smd_objects\danger_res.p3d";
 };
 class SMD_Fence: NonStrategic
 {
  accuracy = 0.2;
  animated = 0;
  armor = 800;
  cost = 0;
  displayName = "$STR_DN_FENCE";
  icon = "\ca\misc\data\icons\i_pytle_bsl_ca.paa";
  mapSize = 3.3;
  model = "\smd_objects\pytle_bsl.p3d";
  nameSound = "fence";
  scope = 2;
  transportAmmo = 0;
  transportFuel = 0;
  transportRepair = 0;
  typicalCargo[] = {};
  vehicleClass = "smd_objects";
 };
 class SMD_FenceWood: SMD_Fence
 {
  accuracy = 1000;
  displayName = "$STR_DN_FENCE_WOOD";
  icon = "\ca\misc\data\icons\i_pytle_ca.paa";
  mapSize = 2.4;
  model = "\smd_objects\pytle.p3d";
 };
 class SMD_FenceWoodPalet: SMD_FenceWood
 {
  displayName = "$STR_DN_FENCE_WOOD_PALET";
  model = "\smd_objects\pytle_palet.p3d";
 };
 class SMD_Wire: SMD_Fence
 {
  accuracy = 0.3;
  destrType = "DestructNo";
  displayName = "$STR_DN_WIRE";
  icon = "\ca\misc\data\icons\i_drutkolczasty_ca.paa";
  mapSize = 5.5;
  model = "\ca\misc\barbedwire.p3d";
  scope = 2;
 };
 class Land_Fire;
 class SMD_Fire: Land_Fire
 {
  vehicleClass = "smd_objects";
 };
 class Land_Fire_burning;
 class SMD_FireLit: Land_Fire_burning
 {
  vehicleClass = "smd_objects";
 };
 class SMD_HeliH: NonStrategic
 {
  accuracy = 0.2;
  animated = 0;
  cost = 0;
  destrType = "DestructNo";
  displayName = "$STR_DN_HELI_H";
  icon = "\ca\misc\data\icons\i_h_ca.paa";
  mapSize = 9.8;
  model = "\ca\misc\heli_h_army";
  nameSound = "helipad";
  scope = 2;
  transportAmmo = 0;
  transportFuel = 0;
  transportRepair = 0;
  typicalCargo[] = {};
  vehicleClass = "smd_objects";
 };
 class SMD_HeliHEmpty: SMD_HeliH
 {
  displayName = "$STR_DN_HELI_H_EMPTY";
  model = "\ca\misc\empty";
  nameSound = "";
 };
 class SMD_Heli_H_Civil: SMD_HeliH
 {
  displayName = "$STR_DN_HELI_H_CIVIL";
  model = "\ca\misc\heli_h_civil";
 };
 class SMD_Heli_H_Rescue: SMD_HeliH
 {
  displayName = "$STR_DN_HELI_H_RESCUE";
  model = "\ca\misc\heli_h_rescue";
 };
 class SMD_water_tank: House
 {
  armor = 500;
  destrType = "DestructTree";
  displayName = "Water Tank";
  icon = "\ca\data\data\Unknown_object.paa";
  ladders[] = {
   { "start","end" }};
  model = "\ca\misc\water_tank.p3d";
  scope = 2;
  vehicleClass = "smd_objects";
 };
 class SMD_Target: Strategic
 {
  accuracy = 0.2;
  armor = 10;
  cost = 0;
  destrType = "DestructTree";
  icon = "\ca\misc\data\icons\i_terc_ca.paa";
  mapSize = 2;
  model = "\ca\misc\terc";
  nameSound = "target";
  scope = 1;
  side = 3;
 };
 class SMD_TargetE: SMD_Target
 {
  accuracy = 1000;
  displayName = "$STR_DN_TARGET_EAST";
  mapSize = 0.8;
  scope = 2;
  vehicleClass = "smd_objects";
 };
 class SMD_TargetTraining: NonStrategic
 {
  accuracy = 0.25;
  armor = 15;
  cost = 0;
  displayName = "$STR_DN_TARGET";
  icon = "\ca\misc\data\icons\i_terc_ca.paa";
  mapSize = 2;
  memoryPointSupply = "";
  model = "\ca\misc\terc";
  nameSound = "target2";
  scope = 2;
  side = 3;
  vehicleClass = "smd_objects";
  class DestructionEffects;
 };
 class SMD_TargetGrenade: SMD_TargetTraining
 {
  accuracy = 1000;
  alwaysTarget = 1;
  animated = 0;
  armor = 60;
  cost = 0;
  destrType = 6;
  displayName = "$STR_DN_ARMORED_TARGET";
  icon = "\ca\misc\data\icons\i_drewtank_ca.paa";
  irTarget = 1;
  mapSize = 10;
  model = "\ca\misc\drevtank";
  nameSound = "armoredtarget";
  scope = 2;
  side = 0;
  transportFuel = 300;
  vehicleClass = "smd_objects";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    intensity = 1;
    interval = 1;
    lifeTime = 1;
    position = "";
    simulation = "ruin";
    type = "\ca\misc\drevtank_ruin.p3d";
   };
  };
 };
 class Ruins;
 class Land_drevtank_ruin: Ruins
 {
  model = "\ca\misc\drevtank_ruin";
 };
 class TargetEpopup;
 class SMD_TargetEpopup: TargetEpopup
 {
  vehicleClass = "smd_objects";
 };
 class SMD_Ladder: House
 {
  armor = 50;
  displayName = "$STR_DN_LADDER";
  icon = "\ca\misc\data\icons\i_ladder_ca.paa";
  ladders[] = {
   { "start","end" }};
  mapSize = 0.6;
  model = "\ca\misc\ladder.p3d";
  scope = 2;
  vehicleClass = "smd_objects";
 };
 class SMD_Ladder_half: House
 {
  armor = 50;
  displayName = "Ladder Half";
  icon = "\Ca\misc\data\icons\i_ladder_CA.paa";
  ladders[] = {
   { "start","end" }};
  mapSize = 0.6;
  model = "\ca\misc\ladder_half.p3d";
  scope = 2;
  vehicleClass = "smd_objects";
 };
 class SMD_ClutterCutter: Thing
 {
  accuracy = 0.2;
  armor = 200000;
  cost = 0;
  displayName = "$STR_DN_CLUTTERCUTTER";
  icon = "\ca\data\data\unknown_object.paa";
  mapSize = 0.7;
  model = "\smd_objects\cluttercutter.p3d";
  nameSound = "";
  scope = 2;
  simulation = "thing";
  transportFuel = 0;
  vehicleClass = "smd_objects";
 };
 class SMD_Wall: Strategic
 {
  accuracy = 0.2;
  animated = 0;
  armor = 500;
  cost = 0;
  destrType = "DestructTree";
  icon = "\ca\buildings\icons\i_wall_ca.paa";
  mapSize = 2.684;
  nameSound = "wall";
  scope = 1;
  transportAmmo = 0;
  transportFuel = 0;
  transportRepair = 0;
  typicalCargo[] = {};
  vehicleClass = "smd_objects";
 };
 class SMD_Wall1: SMD_Wall
 {
  displayName = "$STR_DN_WALL";
  model = "\ca\buildings\misc\zidka01.p3d";
  scope = 2;
 };
 class SMD_zidka_branka: SMD_Wall
 {
  displayName = "$STR_DN_WALL_DOOR";
  icon = "\ca\buildings\icons\i_walld_ca.paa";
  model = "\ca\buildings\misc\zidka_branka.p3d";
  scope = 1;
 };
 class SMD_WallDoor: SMD_zidka_branka
 {
  scope = 2;
 };
 class SMD_Wallend: SMD_Wall
 {
  displayName = "$STR_DN_WALL_END";
  model = "\ca\buildings\misc\zidka04.p3d";
  scope = 2;
 };
 class SMD_zidka03: SMD_Wall
 {
  displayName = "$STR_DN_WALL_HOLE";
  icon = "\ca\buildings\icons\i_walld_ca.paa";
  model = "\ca\buildings\misc\zidka03.p3d";
  scope = 1;
 };
 class SMD_WallHole: SMD_zidka03
 {
  scope = 2;
 };
 class SMD_Camp: Strategic
 {
  accuracy = 0.2;
  animated = 0;
  armor = 20;
  cost = 0;
  destrType = "DestructTent";
  displayName = "$STR_DN_TENT";
  icon = "\ca\buildings\icons\i_stan_ca.paa";
  irTarget = 0;
  mapSize = 6.4;
  model = "\ca\buildings\tents\stan";
  scope = 2;
  transportAmmo = 0;
  transportFuel = 0;
  transportRepair = 0;
  typicalCargo[] = {};
  vehicleClass = "smd_objects";
 };
 class SMD_CampEmpty: SMD_Camp
 {
  accuracy = 1000;
  displayName = "$STR_DN_TENT_OPEN";
  model = "\ca\buildings\tents\stan";
  scope = 2;
 };
 class SMD_CampEast: SMD_Camp
 {
  accuracy = 1000;
  displayName = "$STR_DN_TENT_EAST";
  icon = "\ca\buildings\icons\i_stan_east_ca.paa";
  model = "\ca\buildings\tents\stan_east";
  scope = 2;
 };
 class SMD_CampEastC: SMD_CampEast
 {
  displayName = "$STR_DN_TENT_EAST_C";
  scope = 2;
 };
 class SMD_ACamp: SMD_Camp
 {
  accuracy = 1000;
  displayName = "$STR_DN_TENT_A";
  icon = "\ca\buildings\icons\i_astan_ca.paa";
  mapSize = 2.6;
  model = "\ca\buildings\tents\astan";
  scope = 2;
 };
 class SMD_MASH: SMD_Camp
 {
  accuracy = 0.3;
  attendant = 1;
  displayName = "$STR_DN_MASH";
  icon = "\ca\buildings\icons\i_mash_ca.paa";
  mapSize = 6.4;
  model = "\ca\buildings\tents\mash";
  nameSound = "fieldhospital";
  scope = 2;
  supplyRadius = 9.3;
 };
 class SMD_Shed: Strategic
 {
  accuracy = 0.2;
  animated = 0;
  armor = 200;
  cost = 0;
  displayName = "$STR_DN_SHED";
  icon = "\ca\buildings\icons\i_camo_ca.paa";
  mapSize = 8.1;
  model = "\ca\buildings\tents\pristresek";
  nameSound = "tent";
  scope = 2;
  transportAmmo = 0;
  transportFuel = 0;
  transportRepair = 0;
  typicalCargo[] = {};
  vehicleClass = "smd_objects";
 };
 class SMD_ShedSmall: SMD_Shed
 {
  accuracy = 1000;
  displayName = "$STR_DN_SHED_SMALL";
  icon = "\ca\buildings\icons\i_camosmall_ca.paa";
  mapSize = 4.3;
  model = "\ca\buildings\tents\pristresek_mensi";
 };
 class SMD_ShedBig: SMD_Shed
 {
  accuracy = 1000;
  displayName = "$STR_DN_SHED_BIG";
  mapSize = 9.8;
  model = "\ca\buildings\tents\camo_box";
 };
 class SMD_Fortress1: Strategic
 {
  accuracy = 0.2;
  animated = 0;
  armor = 800;
  cost = 0;
  destrType = "DestructBuilding";
  displayName = "$STR_DN_FORTRESS_1";
  icon = "\ca\buildings\icons\i_camosmall_ca.paa";
  mapSize = 11;
  model = "\ca\buildings\tents\fortress_01";
  nameSound = "bunker";
  scope = 2;
  transportAmmo = 0;
  transportFuel = 0;
  transportRepair = 0;
  typicalCargo[] = {};
  vehicleClass = "smd_objects";
 };
 class SMD_Fortress2: SMD_Fortress1
 {
  displayName = "$STR_DN_FORTRESS_2";
  icon = "\ca\buildings\icons\i_fortress_02_ca.paa";
  model = "\ca\buildings\tents\fortress_02";
 };
 class SMD_ZavoraAnim: NonStrategic
 {
  accuracy = 1000;
  actionBegin1 = "OpenGate";
  actionEnd1 = "OpenGate";
  animated = 1;
  armor = 150;
  cost = 0;
  displayName = "$STR_DN_BARGATEANIM";
  icon = "\ca\data\data\unknown_object";
  mapSize = 7.5;
  model = "\smd_objects\zavora.p3d";
  nameSound = "";
  scope = 2;
  simulation = "house";
  vehicleClass = "smd_objects";
  class AnimationSources
  {
   class BarGate
   {
    animPeriod = 6;
   };
  };
  class UserActions
  {
   class OpenGate
   {
    condition = "this animationPhase ""Bargate"" > = 0.5";
    displayName = "$STR_DN_OUT_O_GATE";
    displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
    onlyForPlayer = 1;
    position = "osa_zavora";
    radius = 3;
    statement = "this animate [""Bargate"",0]";
   };
   class CloseGate
   {
    condition = "this animationPhase ""Bargate"" < 0.5";
    displayName = "$STR_DN_OUT_C_GATE";
    displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
    onlyForPlayer = 1;
    position = "osa_zavora";
    radius = 3;
    statement = "this animate [""Bargate"",1]";
   };
  };
 };
 class SMD_WireFence: NonStrategic
 {
  accuracy = 0.3;
  animated = 0;
  armor = 200;
  cost = 0;
  displayName = "$STR_DN_FENCE_WIRE";
  icon = "\ca\buildings\icons\i_fence_ca.paa";
  mapSize = 5.5;
  model = "\ca\buildings\misc\plot_provizorni.p3d";
  nameSound = "fence";
  scope = 2;
  transportAmmo = 0;
  transportFuel = 0;
  transportRepair = 0;
  typicalCargo[] = {};
  vehicleClass = "smd_objects";
 };
 class SMD_HumpsDirt: NonStrategic
 {
  accuracy = 0.2;
  animated = 0;
  armor = 1000;
  destrType = "DestructBuilding";
  displayName = "$STR_DN_HMPSDRT";
  icon = "\ca\data\library\data\icons\humps_dirt_ca.paa";
  model = "\ca\data\library\humps_dirt.p3d";
  nameSound = "";
  scope = 2;
  transportAmmo = 0;
  transportFuel = 0;
  transportRepair = 0;
  typicalCargo[] = {};
  vehicleClass = "smd_objects";
 };
 class SMD_RoadBarrier_light: NonStrategic
 {
  accuracy = 0.2;
  animated = 0;
  armor = 200;
  cost = 0;
  destrType = "DestructTree";
  displayName = "$STR_DN_RDBARRIERSML";
  icon = "\ca\data\library\data\icons\roadbarrier_light_ca.paa";
  mapSize = 0.1;
  model = "\ca\data\library\roadbarrier_light.p3d";
  nameSound = "fence";
  scope = 2;
  transportAmmo = 0;
  transportFuel = 0;
  transportRepair = 0;
  typicalCargo[] = {};
  vehicleClass = "smd_objects";
  class DestructionEffects{};
  class MarkerLights
  {
   class YellowBlinking
   {
    ambient[] = {0.099,0.069,0.017,1.0};
    blinking = 1;
    brightness = 0.01;
    color[] = {0.99,0.69,0.17,1.0};
    name = "zluty pozicni blik";
   };
  };
 };
 class SMD_RoadBarrier_long: SMD_RoadBarrier_light
 {
  displayName = "$STR_DN_RDBARRIER";
  icon = "\ca\data\library\data\icons\roadbarrier_long_ca.paa";
  mapSize = 0.2;
  model = "\ca\data\library\roadbarrier_long.p3d";
 };
 class SMD_RampConcrete: NonStrategic
 {
  accuracy = 0.2;
  animated = 0;
  armor = 1000;
  destrType = "DestructBuilding";
  displayName = "$STR_DN_RAMPCNCRT";
  icon = "\ca\data\library\data\icons\ramp_concrete_ca.paa";
  model = "\ca\data\library\ramp_concrete.p3d";
  nameSound = "";
  scope = 2;
  transportAmmo = 0;
  transportFuel = 0;
  transportRepair = 0;
  typicalCargo[] = {};
  vehicleClass = "smd_objects";
 };
 class SMD_Obstacle_saddle: NonStrategic
 {
  accuracy = 0.2;
  animated = 0;
  displayName = "$STR_DN_OBSTACLE2";
  icon = "\ca\data\library\data\icons\obstacle_saddle_ca.paa";
  model = "\ca\data\library\obstacle_saddle.p3d";
  nameSound = "";
  scope = 2;
  transportAmmo = 0;
  transportFuel = 0;
  transportRepair = 0;
  typicalCargo[] = {};
  vehicleClass = "smd_objects";
  class DestructionEffects{};
 };
 class Ship;
 class SMD_BuoySmall: Ship
 {
  accuracy = 0.2;
  armor = 50;
  audible = 0.001;
  camouflage = 0.001;
  cost = 100;
  displayName = "$STR_DN_BOUYSML";
  fuelCapacity = 0;
  hasCommander = 0;
  hasDriver = 0;
  hasGunner = 0;
  icon = "\ca\data\library\data\icons\buoy_small_ca.paa";
  irTarget = 0;
  magazines[] = {};
  mapSize = 0.1;
  maxSpeed = 0;
  model = "\ca\data\library\buoy_small.p3d";
  nameSound = "";
  scope = 2;
  threat[] = {0,0,0};
  vehicleClass = "smd_objects";
  weapons[] = {};
  class DestructionEffects{};
  class turrets{};
 };
 class SMD_BuoyBig: Ship
 {
  accuracy = 0.2;
  armor = 50;
  audible = 0.001;
  camouflage = 0.001;
  cost = 100;
  displayName = "$STR_DN_BUOY";
  fuelCapacity = 0;
  hasCommander = 0;
  hasDriver = 0;
  hasGunner = 0;
  icon = "\ca\data\library\data\icons\buoy_ca.paa";
  irTarget = 0;
  magazines[] = {};
  mapSize = 0.1;
  maxSpeed = 0;
  model = "\ca\data\library\buoy.p3d";
  nameSound = "";
  scope = 2;
  threat[] = {0,0,0};
  vehicleClass = "smd_objects";
  weapons[] = {};
  class DestructionEffects{};
  class MarkerLights
  {
   class WhiteBlinking
   {
    ambient[] = {0.1,0.1,0.1,1};
    blinking = 1;
    brightness = 0.02;
    color[] = {1.0,1.0,1.0,1};
    name = "bily pozicni blik";
   };
  };
  class turrets{};
 };
 class Grave;
 class SMD_Grave: Grave
 {
  vehicleClass = "smd_objects";
 };
 class GraveCross1;
 class SMD_GraveCross1: GraveCross1
 {
  vehicleClass = "smd_objects";
 };
 class GraveCross2;
 class SMD_GraveCross2: GraveCross2
 {
  vehicleClass = "smd_objects";
 };
 class GraveCrossHelmet;
 class SMD_GraveCrossHelmet: GraveCrossHelmet
 {
  vehicleClass = "smd_objects";
 };
 class Land_radar;
 class SMD_Radar: Land_radar
 {
  vehicleClass = "smd_objects";
 };
};
class cfgNonAiVehicles
{
 class Proxy_Radio2
 {
  animated = 0;
  autocenter = 0;
  model = "\smd_objects\radio2.p3d";
  reversed = 0;
  scope = 2;
  simulation = "house";
 };
 class ProxyFlag
 {
  autocenter = 0;
  model = "";
  reversed = 0;
  scope = 2;
  selectionFabric = "latka";
  simulation = "flag";
 };
 class ProxyFlag_Stozar: ProxyFlag
 {
  model = "\ca\misc\flag_stozar";
 };
};
//};
