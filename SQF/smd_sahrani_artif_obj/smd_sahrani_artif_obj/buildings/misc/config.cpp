////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 3.52
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class smd_sahrani_artif_obj : buildings\misc\config.bin{
class CfgPatches
{
 class buildings_misc
 {
  units[] = {"gate"};
  weapons[] = {};
  requiredVersion = 0.1;
  requiredAddons[] = {};
 };
};
class CfgNonAIVehicles
{
 class StreetLamp;
 class Land_lampa_vysoka: StreetLamp
 {
  scope = 1;
  model = "smd_sahrani_artif_obj\misc\lampa_vysoka.p3d";
 };
};
class CfgVehicleClasses
{
 class gate
 {
  displayName = "Gate";
 };
};
class CfgDestroy
{
 access = 1;
 class BuildingHit
 {
  sound[] = {};
 };
};
class CfgVehicles
{
 class Thing;
 class Building;
 class Strategic;
 class NonStrategic: Building
 {
  class DestructionEffects;
 };
 class House;
 class Ruins;
 class Church: NonStrategic
 {
  class DestructionEffects;
 };
 class Land_smd_gate: House
 {
  scope = 2;
  model = "\smd_sahrani_artif_obj\buildings\misc\smd_gate.p3d";
  displayName = "Gate";
  vehicleClass = "gate";
  icon = "\ca\data\data\Unknown_object";
  nameSound = "";
  accuracy = 0.2;
  cost = 0;
  armor = 150;
  mapSize = 7.5;
  class AnimationSources
  {
   class Door
   {
    source = "user";
    animPeriod = 3;
    initPhase = 0;
   };
  };
  class UserActions
  {
   class OpenDoor
   {
    displayName = "Open Gate";
    position = "Door_Button";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door"" > 0.5";
    statement = "this animate [""Door"", 0]";
   };
   class CloseDoor: OpenDoor
   {
    displayName = "Close Gate";
    condition = "this animationPhase ""Door"" <= 0.5";
    statement = "this animate [""Door"", 1]";
   };
  };
 };
 class Land_zidka03: House
 {
  armor = 100;
  model = "ca\buildings\misc\zidka03.p3d";
 };
 class Land_zidka_branka: House
 {
  armor = 300;
  model = "ca\buildings\misc\zidka_branka.p3d";
 };
};
//};
