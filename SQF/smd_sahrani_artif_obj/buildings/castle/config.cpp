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
class CfgVehicleClasses
{
 class helfenburk
 {
  displayName = "Castle";
 };
 class helfenburk_brana: helfenburk{};
 class helfenburk_budova2: helfenburk{};
 class helfenburk_cimburi: helfenburk{};
 class helfenburk_zed: helfenburk{};
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
 class Land_helfenburk: House
 {
  scope = 1;
  model = "\smd_sahrani_artif_obj\buildings\castle\helfenburk.p3d";
  destrType = "DestructNo";
  displayName = "Castle";
 };
 class Land_helfenburk_brana: Land_helfenburk
 {
  model = "\smd_sahrani_artif_obj\buildings\castle\helfenburk_brana.p3d";
 };
 class Land_helfenburk_budova2: Land_helfenburk
 {
  model = "\smd_sahrani_artif_obj\buildings\castle\helfenburk_budova2.p3d";
 };
 class Land_helfenburk_cimburi: Land_helfenburk
 {
  model = "\smd_sahrani_artif_obj\buildings\castle\helfenburk_cimburi.p3d";
 };
 class Land_helfenburk_zed: Land_helfenburk
 {
  model = "\smd_sahrani_artif_obj\buildings\castle\helfenburk_zed.p3d";
 };
};
//};
