////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 3.52
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class smd_sahrani_artif_obj : buildings\castle\config.bin{
class CfgPatches
{
 class castle
 {
  units[] = {};
  weapons[] = {};
  requiredVersion = 0.1;
  requiredAddons[] = {};
 };
};
class CfgVehicles
{
 class HouseBase;
 class House: HouseBase
 {
  class DestructionEffects;
 };
 class Strategic;
 class Ruins;
 class Land_smd_helfenburk: House
 {
  scope = 1;
  model = "\smd_sahrani_artif_obj\buildings\castle\smd_helfenburk.p3d";
  destrType = "DestructNo";
  displayName = "Castle";
 };
 class Land_smd_helfenburk_brana: Land_smd_helfenburk
 {
  model = "\smd_sahrani_artif_obj\buildings\castle\smd_helfenburk_brana.p3d";
 };
 class Land_smd_helfenburk_budova2: Land_smd_helfenburk
 {
  model = "\smd_sahrani_artif_obj\buildings\castle\smd_helfenburk_budova2.p3d";
 };
 class Land_smd_helfenburk_cimburi: Land_smd_helfenburk
 {
  model = "\smd_sahrani_artif_obj\buildings\castle\smd_helfenburk_cimburi.p3d";
 };
 class Land_smd_helfenburk_zed: Land_smd_helfenburk
 {
  model = "\smd_sahrani_artif_obj\buildings\castle\smd_helfenburk_zed.p3d";
 };
};
//};
