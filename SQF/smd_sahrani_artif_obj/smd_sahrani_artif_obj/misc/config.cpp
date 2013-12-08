////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 3.52
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class smd_sahrani_artif_obj : misc\config.bin{
class CfgPatches
{
 class misc
 {
  units[] = {};
  weapons[] = {};
  requiredVersion = 0.1;
  requiredAddons[] = {};
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
 class HouseBase;
 class Land_VASICore;
 class House: HouseBase
 {
  class DestructionEffects;
 };
 class Ruins;
 class Church: NonStrategic
 {
  class DestructionEffects;
 };
 class Land_piskoviste: House
 {
  model = "ca\misc\piskoviste.p3d";
 };
 class Land_houpacka: House
 {
  model = "ca\misc\houpacka.p3d";
 };
};
//};
