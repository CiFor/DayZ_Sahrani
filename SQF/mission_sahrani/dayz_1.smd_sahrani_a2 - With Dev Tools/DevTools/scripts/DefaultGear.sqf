private["_nyan, _plr, _case"];

_plr = _this select 0;

_case = _this select 1;

_class = "";

if (_plr == "") exitwith { Hint "Some how there was an error check your scripts : or You need to select a name in the player list , if you wish to activate it on all players then click all players or select an indevidiual name to perform that action onto. then click EXECUTE.";};

if (_plr == "ALL PLAYERS") then {_plr = "";};
if (_plr == "EVERYONE BUT ME") then {_plr = "FUCKEMGRANDPAIHATEJEWS";};



Switch (_case) do
{
  case "Give Gear":
  {
   _class = "removeAllWeapons player;

    player addWeapon 'vil_SR25SD'; 
    player addMagazine '20Rnd_762x51_SB_SCAR'; 
    player addMagazine '20Rnd_762x51_SB_SCAR'; 
    player addMagazine 'ItemPainkiller'; 
    player addMagazine 'ItemMorphine'; 
    player addMagazine 'ItemMorphine'; 
    player addMagazine 'Skin_SMD_US_SpecOps'; 
    player addMagazine 'Skin_SMD_ATACS_DES'; 
    player addMagazine 'Skin_SniperD_DZ'; 
    player addMagazine 'Skin_SMD_TIGER_CAMO'; 

    player addWeapon 'vil_USP45SD';
    player addMagazine '7Rnd_45ACP_1911'; 
    player addMagazine '7Rnd_45ACP_1911'; 
    player addMagazine 'ItemBandage';
	player addMagazine 'ItemBandage';
	player addMagazine 'ItemBandage';
	player addMagazine 'ItemBandage';
	player addMagazine 'ItemBandage';

    player addWeapon 'Binocular_Vector';
    player addWeapon 'NVGoggles';
    player addWeapon 'ItemGPS';
    player addWeapon 'ItemHatchet';
    player addWeapon 'ItemMap_Debug';
    player addWeapon 'ItemRadio';
    player addWeapon 'ItemCraftingBook';
    player addWeapon 'ItemCraftingBook2';
    player addWeapon 'ItemCraftingBook3';
    player addWeapon 'ItemKnife';
    player addWeapon 'Itemmatchbox';
    player addWeapon 'Itemetool';
    player addWeapon 'Itemtoolbox';
    player addWeapon 'ItemCrowbar';
    player addBackpack 'DZ_Backpack_EP1';
    (Unitbackpack player) addWeaponCargo ['vil_hk416_EOT', 1];
    (Unitbackpack player) addMagazineCargo ['30Rnd_556x45_Stanag', 2];
    (Unitbackpack player) addMagazineCargo ['ItemBloodbag', 2];
    (Unitbackpack player) addMagazineCargo ['ItemEpinephrine', 2];
    (Unitbackpack player) addMagazineCargo ['ItemWaterbottle', 2];
    (Unitbackpack player) addMagazineCargo ['FoodrabbitCooked', 3];"
  };
  Case "Delete Gear":
  {
     _class = "removeAllWeapons player;"
  };
  Case "Break Legs":
  {
    _class = "player setHit ['legs',1];
    player setVariable ['hit_legs',2,true];
    player setVariable['medForceUpdate',true,true];"
  };
  Case "Fix Legs":
  {
    _class = "player setHit ['legs',0];
    player setVariable ['hit_legs',0,false];
    player setVariable['medForceUpdate',true,true];"
  };
  Case "Enable Quit":
  {
    _class = "true spawn sdasdadsasdsaffsdsdfrtretrwe;
    (findDisplay 46) displayremoveallEventHandlers 'KeyDown';"
  };
};

nil = [_plr, 11 ,_class] execVM "DevTools\scripts\Scripts.sqf";
