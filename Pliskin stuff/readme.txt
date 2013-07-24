Weapon pack PBOs and Dayz_code.pbo created with cpbo, so should be good, if not just unpack and re-pbo as needed
Filed modified in dayz_code are:
CfgWeapons.hpp

All pbos need to be bisigned..

I could not figure out a different way to implement the gunpacks in order to get rid of unit and vehicles, cfgaddons defined errors that were included and narrow it all down to only the weapons that were included in the MLOD pack, so if this will not work based on his permissions, adjust as needed

SMK lite animations can be included as is in the addons folder and initiated from the server start up batch file, no other mods needed to support that addon as long as it is included in the main addons folder with the other pbos. Nothing needs to be run from the client start up as it looks to be passive from the server.

Added the bloew with drop chances to all military crash sites, and military based arrays. Guessed at drop chances based on similar items just to get em in there, tweak as needed, added pistols to farm super market and residential with same considerations.

Weapon class names:

Western/Dutch weapons:

"vil_bhp","vil_Glock","vil_Glock_o","vil_USP","vil_USPSD","vil_AG3","vil_AG3EOT","vil_M249_Para","vil_Minimi","vil_m240b","vil_MG4","vil_mg3b","vil_MG4E","vil_HK416_Aim","vil_D_C7","vil_D_C7_AG","vil_D_C8","vil_D_416","vil_D_416de","vil_sr25","vil_sr25sd","vil_m110","vil_m110sd","vil_hk417s","vil_hk416_gl","vil_hk416_aim","vil_hk416_EOT","vil_hk416_edr","vil_hk416_is","vil_fal","vil_fal_para","vil_galil","vil_galil_ARM","vil_hk33","vil_m16a1","vil_m4_eot",
"vil_sg540","vil_sg5421","vil_sg542","vil_aG36a2","vil_aG36","vil_aG36ka4","vil_aG36kv","vil_g36e","vil_g36kskdeses","vil_g36ksk","vil_g36kskdes",
"vil_g36ka4","vil_g36kvz"

Eastern Bloc Weapons:

"vil_zastava_m84","vil_M70","vil_M70B","vil_M64","vil_AK_74P","vil_AK_74m","vil_AK_74M_N","vil_AK_74M_PSO",
"vil_AK_74m_k","vil_AK_74m_EOT","vil_AK_74m_EOT_Alfa","vil_AK_74m_EOT_FSB","vil_AK_74m_EOT_FSB_45","vil_AK_74m_EOT_FSB_60",
"vil_AK_74m_c","vil_AK_74m_p29","vil_AK_74m_gp_29","vil_AK_74m_gp","vil_AK_101","vil_AK_103","vil_AK_105","Vil_AK_105_c",
"vil_AK_107","Vil_AK_107_c","vil_M76","vil_M91","vil_ak12"
