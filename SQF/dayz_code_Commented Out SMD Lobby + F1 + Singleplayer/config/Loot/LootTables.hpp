#include "cfgLoot.hpp"
class CfgBuildingLoot {
	class Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"z_sah_civilian1_pants","z_sah_civilian2_pants","z_sah_civilian3_pants","z_sah_civilian4_pants","z_sah_civilian5_pants","z_sah_civilian6_pants","z_sah_civilian7_pants","z_villager1","z_villager2","z_villager3"}; //,"z_woman1"
		lootChance = 0;
		lootPos[] = {};
		itemType[] = {};
		itemChance[] = {};
		hangPos[] = {};
		vehPos[] = {};
	};
	class Master {
		weapons[] = {
			"SMAW",
			"Javelin",
			"G36C",
			"Stinger"
		};
	};
	class Crash1: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_RACSzombie4"}; 
		lootChance = 0.6;
		lootPos[] = {};
		itemType[] =	{
			{"DZ_ALICE_Pack_EP1","object"},
			{"DZ_Assault_Pack_EP1","object"},
			{"DZ_Backpack_EP1","object"},
			{"DZ_British_ACU","object"},
			{"DZ_CivilBackpack_EP1","object"},
			{"DZ_Czech_Vest_Puch","object"},
			{"DZ_TK_Assault_Pack_EP1","object"},
			{"","AmmoUN"},
			{"","AmmoUS"},
			{"","clothing"},
			{"","foodSpecial"},
			{"","medical"},
			{"","military"},
			{"","militarySpecial"},
			{"","trash"},
			{"Binocular","weapon"},
			{"Binocular_Vector","military"},
			{"NVGoggles","weapon"},
			{"BAF_AS50_scoped_DZ","weapon"},
			{"BAF_LRR_scoped","weapon"},
			{"BAF_LRR_scoped_W","weapon"},
			{"DMR","weapon"},
			{"M107_DZ","weapon"},
			{"M14_EP1","weapon"},
			{"M24","weapon"},
			{"M24_des_EP1","weapon"},
			{"M240_DZ","weapon"},
			{"m240_scoped_DZ","weapon"},
			{"M249_DZ","weapon"},
			{"M32_DZ","weapon"},
			{"M40A3","weapon"},
			{"M4A1_Aim","weapon"},
			{"M4A1_Aim_camo","weapon"},
			{"M4A1_AIM_SD_camo","weapon"},
			{"M4A1_HWS_GL","weapon"},
			{"M4A1_HWS_GL_camo","weapon"},
			{"M4A1_HWS_GL_SD_Camo","weapon"},
			{"M4A1_RCO_GL","weapon"},
			{"M4A3_CCO_EP1","weapon"},
			{"M4A3_RCO_GL_EP1","weapon"},
			{"M4SPR","weapon"},
			{"M60A4_DZ","weapon"},
			{"M79_DZ","weapon"},
			{"m8_carbine","weapon"},
			{"m8_carbine_pmc","weapon"},
			{"m8_carbineGL","weapon"},
			{"m8_compact","weapon"},
			{"m8_compact_pmc","weapon"},
			{"m8_holo_sd","weapon"},
			{"m8_SAW_DZ","weapon"},
			{"m8_sharpshooter","weapon"},
			{"MG36_camo_DZ","weapon"},
			{"MG36_DZ","weapon"},
			{"Mk_48_DES_DZ","weapon"},
			{"Mk_48_DZ","weapon"},
			{"Mk13_DZ","weapon"},
			{"MP5A5","weapon"},
			{"MP5SD","weapon"},
			{"SCAR_L_CQC","weapon"},
			{"SCAR_L_CQC_EGLM_Holo","weapon"},
			{"SCAR_L_CQC_Holo","weapon"},
			{"SCAR_L_STD_EGLM_RCO","weapon"},
			{"SCAR_L_STD_HOLO","weapon"},
			{"SCAR_L_STD_Mk4CQT","weapon"},
			{"vil_AG3","weapon"},
			{"vil_aG36","weapon"},
			{"vil_aG36a2","weapon"},
			{"vil_aG36ka4","weapon"},
			{"vil_aG36kv","weapon"},
			{"vil_AG3EOT","weapon"},
			{"vil_D_416","weapon"},
			{"vil_D_416de","weapon"},
			{"vil_hk33","weapon"},
			{"vil_HK416_Aim","weapon"},
			{"vil_hk416_edr","weapon"},
			{"vil_hk416_EOT","weapon"},
			{"vil_hk416_gl","weapon"},
			{"vil_hk416_is","weapon"},
			{"vil_hk417s","weapon"},
			{"vil_m110","weapon"},
			{"vil_m110sd","weapon"},
			{"vil_m240b","weapon"},
			{"vil_M249_Para","weapon"},
			{"vil_m4_eot","weapon"},
			{"vil_M64","weapon"},
			{"vil_M70","weapon"},
			{"vil_M70B","weapon"},
			{"vil_M76","weapon"},
			{"vil_M91","weapon"},
			{"vil_mg3b","weapon"},
			{"vil_MG4","weapon"},
			{"vil_MG4E","weapon"},
			{"vil_Minimi","weapon"},
			{"vil_sg540","weapon"},
			{"vil_sg542","weapon"},
			{"vil_sg5421","weapon"},
			{"vil_sr25","weapon"},
			{"vil_sr25sd","weapon"},
			{"Colt1911","weapon"},
			{"glock17_EP1","weapon"},
			{"M9","weapon"},
			{"M9SD","weapon"},
			{"revolver_EP1","weapon"},
			{"revolver_gold_EP1","weapon"},
			{"UZI_EP1","weapon"},
			{"UZI_SD_EP1","weapon"},
			{"vil_bhp","weapon"},
			{"vil_Glock","weapon"},
			{"vil_Glock_o","weapon"},
			{"vil_USP","weapon"},
			{"vil_USPSD","weapon"},
			{"ItemRadio","weapon"},
			{"PipeBomb","magazine"}
		};
		itemChance[] =	{
			0.3, //DZ_ALICE_Pack_EP1","object
			0, //DZ_Assault_Pack_EP1","object
			0.2, //DZ_Backpack_EP1","object
			0, //DZ_British_ACU","object
			0, //DZ_CivilBackpack_EP1","object
			0, //DZ_Czech_Vest_Puch","object
			0, //DZ_TK_Assault_Pack_EP1","object
			0.4, //"","AmmoUN
			0.8, //"","AmmoUS
			0.1, //","clothing
			0.5, //","foodSpecial
			0.1, //","medical
			0.3, //","military
			0.2, //","militarySpecial
			0.1, //","trash
			0, //Binocular","weapon
			0.02, //Binocular_Vector","military
			0.01, //NVGoggles","weapon
			0.01, //BAF_AS50_scoped_DZ","weapon
			0.01, //BAF_LRR_scoped","weapon
			0.01, //BAF_LRR_scoped_W","weapon
			0.03, //DMR","weapon
			0.01, //M107_DZ","weapon
			0.04, //M14_EP1","weapon
			0.07, //M24","weapon
			0.07, //M24_des_EP1","weapon
			0.02, //M240_DZ","weapon
			0.01, //m240_scoped_DZ","weapon
			0.02, //M249_DZ","weapon
			0.01, //M32_DZ","weapon
			0.07, //M40A3","weapon
			0.04, //M4A1_Aim","weapon
			0.03, //M4A1_Aim_camo","weapon
			0.01, //M4A1_AIM_SD_camo","weapon
			0.02, //M4A1_HWS_GL","weapon
			0.01, //M4A1_HWS_GL_camo","weapon
			0.01, //M4A1_HWS_GL_SD_Camo","weapon
			0.02, //M4A1_RCO_GL","weapon
			0.02, //M4A3_CCO_EP1","weapon
			0.02, //M4A3_RCO_GL_EP1","weapon
			0.03, //M4SPR","weapon
			0.01, //M60A4_DZ","weapon
			0.01, //M79_DZ","weapon
			0.04, //m8_carbine","weapon
			0.04, //m8_carbine_pmc","weapon
			0.01, //m8_carbineGL","weapon
			0.03, //m8_compact","weapon
			0.03, //m8_compact_pmc","weapon
			0.01, //m8_holo_sd","weapon
			0.01, //m8_SAW_DZ","weapon
			0.06, //m8_sharpshooter","weapon
			0.03, //MG36_camo_DZ","weapon
			0.01, //MG36_DZ","weapon
			0.01, //Mk_48_DES_DZ","weapon
			0.01, //Mk_48_DZ","weapon
			0.01, //Mk13_DZ","weapon
			0.06, //MP5A5","weapon
			0.06, //MP5SD","weapon
			0.02, //SCAR_L_CQC","weapon
			0.01, //SCAR_L_CQC_EGLM_Holo","weapon
			0.01, //SCAR_L_CQC_Holo","weapon
			0.01, //SCAR_L_STD_EGLM_RCO","weapon
			0.01, //SCAR_L_STD_HOLO","weapon
			0.01, //SCAR_L_STD_Mk4CQT","weapon
			0.01, //vil_AG3","weapon
			0.08, //vil_aG36","weapon
			0.05, //vil_aG36a2","weapon
			0.03, //vil_aG36ka4","weapon
			0.02, //vil_aG36kv","weapon
			0.01, //vil_AG3EOT","weapon
			0.05, //vil_D_416","weapon
			0.05, //vil_D_416de","weapon
			0.06, //vil_hk33","weapon
			0.07, //vil_HK416_Aim","weapon
			0.05, //vil_hk416_edr","weapon
			0.06, //vil_hk416_EOT","weapon
			0.02, //vil_hk416_gl","weapon
			0.04, //vil_hk416_is","weapon
			0.04, //vil_hk417s","weapon
			0.06, //vil_m110","weapon
			0.01, //vil_m110sd","weapon
			0.01, //vil_m240b","weapon
			0.01, //vil_M249_Para","weapon
			0.06, //vil_m4_eot","weapon
			0.01, //vil_M64","weapon
			0.01, //vil_M70","weapon
			0.01, //vil_M70B","weapon
			0.01, //vil_M76","weapon
			0.01, //vil_M91","weapon
			0.01, //vil_mg3b","weapon
			0.01, //vil_MG4","weapon
			0.01, //vil_MG4E","weapon
			0.01, //vil_Minimi","weapon
			0.06, //vil_sg540","weapon
			0.04, //vil_sg542","weapon
			0.02, //vil_sg5421","weapon
			0.06, //vil_sr25","weapon
			0.01, //vil_sr25sd","weapon
			0.04, //Colt1911","weapon
			0.09, //glock17_EP1","weapon
			0.01, //M9","weapon
			0.01, //M9SD","weapon
			0.01, //revolver_EP1","weapon
			0.01, //revolver_gold_EP1","weapon
			0.02, //UZI_EP1","weapon
			0.01, //UZI_SD_EP1","weapon
			0.04, //vil_bhp","weapon
			0.07, //vil_Glock","weapon
			0.08, //vil_Glock_o","weapon
			0.06, //vil_USP","weapon
			0.04, //vil_USPSD","weapon
			0.01, //ItemRadio","weapon
			0.01, //PipeBomb, magazine
		};
	};
	class Crash1_No50s: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_RACSzombie4"}; 
		lootChance = 0.6;
		lootPos[] = {};
		itemType[] =	{		
			{"DZ_ALICE_Pack_EP1","object"},
			{"DZ_Assault_Pack_EP1","object"},
			{"DZ_Backpack_EP1","object"},
			{"DZ_British_ACU","object"},
			{"DZ_CivilBackpack_EP1","object"},
			{"DZ_Czech_Vest_Puch","object"},
			{"DZ_TK_Assault_Pack_EP1","object"},
			{"","AmmoUN"},
			{"","AmmoUS"},
			{"","clothing"},
			{"","foodSpecial"},
			{"","medical"},
			{"","military"},
			{"","militarySpecial"},
			{"","trash"},
			{"Binocular","weapon"},
			{"Binocular_Vector","military"},
			{"NVGoggles","weapon"},
			//{"BAF_AS50_scoped_DZ","weapon"},
			//{"BAF_LRR_scoped","weapon"},
			//{"BAF_LRR_scoped_W","weapon"},
			{"DMR","weapon"},
			//{"M107_DZ","weapon"},
			{"M14_EP1","weapon"},
			{"M24","weapon"},
			{"M24_des_EP1","weapon"},
			{"M240_DZ","weapon"},
			{"m240_scoped_DZ","weapon"},
			{"M249_DZ","weapon"},
			{"M32_DZ","weapon"},
			{"M40A3","weapon"},
			{"M4A1_Aim","weapon"},
			{"M4A1_Aim_camo","weapon"},
			{"M4A1_AIM_SD_camo","weapon"},
			{"M4A1_HWS_GL","weapon"},
			{"M4A1_HWS_GL_camo","weapon"},
			{"M4A1_HWS_GL_SD_Camo","weapon"},
			{"M4A1_RCO_GL","weapon"},
			{"M4A3_CCO_EP1","weapon"},
			{"M4A3_RCO_GL_EP1","weapon"},
			{"M4SPR","weapon"},
			{"M60A4_DZ","weapon"},
			{"M79_DZ","weapon"},
			{"m8_carbine","weapon"},
			{"m8_carbine_pmc","weapon"},
			{"m8_carbineGL","weapon"},
			{"m8_compact","weapon"},
			{"m8_compact_pmc","weapon"},
			{"m8_holo_sd","weapon"},
			{"m8_SAW_DZ","weapon"},
			{"m8_sharpshooter","weapon"},
			{"MG36_camo_DZ","weapon"},
			{"MG36_DZ","weapon"},
			{"Mk_48_DES_DZ","weapon"},
			{"Mk_48_DZ","weapon"},
			{"Mk13_DZ","weapon"},
			{"MP5A5","weapon"},
			{"MP5SD","weapon"},
			{"SCAR_L_CQC","weapon"},
			{"SCAR_L_CQC_EGLM_Holo","weapon"},
			{"SCAR_L_CQC_Holo","weapon"},
			{"SCAR_L_STD_EGLM_RCO","weapon"},
			{"SCAR_L_STD_HOLO","weapon"},
			{"SCAR_L_STD_Mk4CQT","weapon"},
			{"vil_AG3","weapon"},
			{"vil_aG36","weapon"},
			{"vil_aG36a2","weapon"},
			{"vil_aG36ka4","weapon"},
			{"vil_aG36kv","weapon"},
			{"vil_AG3EOT","weapon"},
			{"vil_D_416","weapon"},
			{"vil_D_416de","weapon"},
			{"vil_hk33","weapon"},
			{"vil_HK416_Aim","weapon"},
			{"vil_hk416_edr","weapon"},
			{"vil_hk416_EOT","weapon"},
			{"vil_hk416_gl","weapon"},
			{"vil_hk416_is","weapon"},
			{"vil_hk417s","weapon"},
			{"vil_m110","weapon"},
			{"vil_m110sd","weapon"},
			{"vil_m240b","weapon"},
			{"vil_M249_Para","weapon"},
			{"vil_m4_eot","weapon"},
			{"vil_M64","weapon"},
			{"vil_M70","weapon"},
			{"vil_M70B","weapon"},
			{"vil_M76","weapon"},
			{"vil_M91","weapon"},
			{"vil_mg3b","weapon"},
			{"vil_MG4","weapon"},
			{"vil_MG4E","weapon"},
			{"vil_Minimi","weapon"},
			{"vil_sg540","weapon"},
			{"vil_sg542","weapon"},
			{"vil_sg5421","weapon"},
			{"vil_sr25","weapon"},
			{"vil_sr25sd","weapon"},
			{"Colt1911","weapon"},
			{"glock17_EP1","weapon"},
			{"M9","weapon"},
			{"M9SD","weapon"},
			{"revolver_EP1","weapon"},
			{"revolver_gold_EP1","weapon"},
			{"UZI_EP1","weapon"},
			{"UZI_SD_EP1","weapon"},
			{"vil_bhp","weapon"},
			{"vil_Glock","weapon"},
			{"vil_Glock_o","weapon"},
			{"vil_USP","weapon"},
			{"vil_USPSD","weapon"},
			{"ItemRadio","weapon"},
			{"PipeBomb","magazine"}
		};
		itemChance[] =	{
			0.3, //DZ_ALICE_Pack_EP1","object
			0, //DZ_Assault_Pack_EP1","object
			0.2, //DZ_Backpack_EP1","object
			0, //DZ_British_ACU","object
			0, //DZ_CivilBackpack_EP1","object
			0, //DZ_Czech_Vest_Puch","object
			0, //DZ_TK_Assault_Pack_EP1","object
			0.4, //"","AmmoUN
			0.8, //"","AmmoUS
			0.1, //","clothing
			0.5, //","foodSpecial
			0.1, //","medical
			0.3, //","military
			0.2, //","militarySpecial
			0.1, //","trash
			0, //Binocular","weapon
			0.02, //Binocular_Vector","military
			0.01, //NVGoggles","weapon
			//0.01, //BAF_AS50_scoped_DZ","weapon
			//0.01, //BAF_LRR_scoped","weapon
			//0.01, //BAF_LRR_scoped_W","weapon
			0.03, //DMR","weapon
			//0.01, //M107_DZ","weapon
			0.04, //M14_EP1","weapon
			0.07, //M24","weapon
			0.07, //M24_des_EP1","weapon
			0.02, //M240_DZ","weapon
			0.01, //m240_scoped_DZ","weapon
			0.02, //M249_DZ","weapon
			0.01, //M32_DZ","weapon
			0.07, //M40A3","weapon
			0.04, //M4A1_Aim","weapon
			0.03, //M4A1_Aim_camo","weapon
			0.01, //M4A1_AIM_SD_camo","weapon
			0.02, //M4A1_HWS_GL","weapon
			0.01, //M4A1_HWS_GL_camo","weapon
			0.01, //M4A1_HWS_GL_SD_Camo","weapon
			0.02, //M4A1_RCO_GL","weapon
			0.02, //M4A3_CCO_EP1","weapon
			0.02, //M4A3_RCO_GL_EP1","weapon
			0.03, //M4SPR","weapon
			0.01, //M60A4_DZ","weapon
			0.01, //M79_DZ","weapon
			0.04, //m8_carbine","weapon
			0.04, //m8_carbine_pmc","weapon
			0.01, //m8_carbineGL","weapon
			0.03, //m8_compact","weapon
			0.03, //m8_compact_pmc","weapon
			0.01, //m8_holo_sd","weapon
			0.01, //m8_SAW_DZ","weapon
			0.06, //m8_sharpshooter","weapon
			0.03, //MG36_camo_DZ","weapon
			0.01, //MG36_DZ","weapon
			0.01, //Mk_48_DES_DZ","weapon
			0.01, //Mk_48_DZ","weapon
			0.01, //Mk13_DZ","weapon
			0.06, //MP5A5","weapon
			0.06, //MP5SD","weapon
			0.02, //SCAR_L_CQC","weapon
			0.01, //SCAR_L_CQC_EGLM_Holo","weapon
			0.01, //SCAR_L_CQC_Holo","weapon
			0.01, //SCAR_L_STD_EGLM_RCO","weapon
			0.01, //SCAR_L_STD_HOLO","weapon
			0.01, //SCAR_L_STD_Mk4CQT","weapon
			0.01, //vil_AG3","weapon
			0.08, //vil_aG36","weapon
			0.05, //vil_aG36a2","weapon
			0.03, //vil_aG36ka4","weapon
			0.02, //vil_aG36kv","weapon
			0.01, //vil_AG3EOT","weapon
			0.05, //vil_D_416","weapon
			0.05, //vil_D_416de","weapon
			0.06, //vil_hk33","weapon
			0.07, //vil_HK416_Aim","weapon
			0.05, //vil_hk416_edr","weapon
			0.06, //vil_hk416_EOT","weapon
			0.02, //vil_hk416_gl","weapon
			0.04, //vil_hk416_is","weapon
			0.04, //vil_hk417s","weapon
			0.06, //vil_m110","weapon
			0.01, //vil_m110sd","weapon
			0.01, //vil_m240b","weapon
			0.01, //vil_M249_Para","weapon
			0.06, //vil_m4_eot","weapon
			0.01, //vil_M64","weapon
			0.01, //vil_M70","weapon
			0.01, //vil_M70B","weapon
			0.01, //vil_M76","weapon
			0.01, //vil_M91","weapon
			0.01, //vil_mg3b","weapon
			0.01, //vil_MG4","weapon
			0.01, //vil_MG4E","weapon
			0.01, //vil_Minimi","weapon
			0.06, //vil_sg540","weapon
			0.04, //vil_sg542","weapon
			0.02, //vil_sg5421","weapon
			0.06, //vil_sr25","weapon
			0.01, //vil_sr25sd","weapon
			0.04, //Colt1911","weapon
			0.09, //glock17_EP1","weapon
			0.01, //M9","weapon
			0.01, //M9SD","weapon
			0.01, //revolver_EP1","weapon
			0.01, //revolver_gold_EP1","weapon
			0.02, //UZI_EP1","weapon
			0.01, //UZI_SD_EP1","weapon
			0.04, //vil_bhp","weapon
			0.07, //vil_Glock","weapon
			0.08, //vil_Glock_o","weapon
			0.06, //vil_USP","weapon
			0.04, //vil_USPSD","weapon
			0.01, //ItemRadio","weapon
			0.01, //PipeBomb, magazine
		};
	};
	class Crash2Mi8: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_soldier_pilot"};
		lootChance = 0.6;
		lootPos[] = {};
		itemType[] =	{		
			{"DZ_ALICE_Pack_EP1","object"},
			{"DZ_Assault_Pack_EP1","object"},
			{"DZ_Backpack_EP1","object"},
			{"DZ_British_ACU","object"},
			{"DZ_CivilBackpack_EP1","object"},
			{"DZ_Czech_Vest_Puch","object"},
			{"DZ_TK_Assault_Pack_EP1","object"},
			{"","AmmoNATO"},
			{"","clothing"},
			{"","foodSpecial"},
			{"","medical"},
			{"","trash"},
			{"Binocular","weapon"},
			{"Binocular_Vector","military"},
			{"NVGoggles","weapon"},
			{"AK_107_GL_kobra","weapon"},
			{"AK_107_GL_pso","weapon"},
			{"AK_107_kobra","weapon"},
			{"AK_107_pso","weapon"},
			{"AK_47_M","weapon"},
			{"AK_47_S","weapon"},
			{"AK_74","weapon"},
			{"AK_74_GL","weapon"},
			{"AK_74_GL_kobra","weapon"},
			{"AKS_74","weapon"},
			{"AKS_74_kobra","weapon"},
			{"AKS_74_NSPU","weapon"},
			{"AKS_74_pso","weapon"},
			{"AKS_74_U","weapon"},
			{"AKS_74_UN_kobra","weapon"},
			{"AKS_GOLD","weapon"},
			{"bizon","weapon"},
			{"FN_FAL","weapon"},
			{"FN_FAL_ANPVS4","weapon"},
			{"ksvk_DZ","weapon"},
			{"Sa58P_EP1","weapon"},
			{"Sa58V_CCO_EP1","weapon"},
			{"Sa58V_EP1","weapon"},
			{"Sa58V_RCO_EP1","weapon"},
			{"SVD","weapon"},
			{"SVD_CAMO","weapon"},
			{"SVD_des_EP1","weapon"},
			{"SVD_NSPU_EP1","weapon"},
			{"vil_AK_101","weapon"},
			{"vil_AK_103","weapon"},
			{"vil_AK_105","weapon"},
			{"Vil_AK_105_c","weapon"},
			{"vil_AK_107","weapon"},
			{"Vil_AK_107_c","weapon"},
			{"vil_AK_74m","weapon"},
			{"vil_AK_74m_c","weapon"},
			{"vil_AK_74m_EOT","weapon"},
			{"vil_AK_74m_EOT_Alfa","weapon"},
			{"vil_AK_74m_EOT_FSB","weapon"},
			{"vil_AK_74m_EOT_FSB_45","weapon"},
			{"vil_AK_74m_EOT_FSB_60","weapon"},
			{"vil_AK_74m_gp","weapon"},
			{"vil_AK_74m_gp_29","weapon"},
			{"vil_AK_74m_k","weapon"},
			{"vil_AK_74M_N","weapon"},
			{"vil_AK_74m_p29","weapon"},
			{"vil_AK_74M_PSO","weapon"},
			{"vil_AK_74P","weapon"},
			{"vil_ak12","weapon"},
			{"vil_fal","weapon"},
			{"vil_fal_para","weapon"},
			{"vil_galil","weapon"},
			{"vil_galil_ARM","weapon"},
			{"vil_zastava_m84","weapon"},
			{"VSS_vintorez","weapon"},
			{"Makarov","weapon"},
			{"MakarovSD","weapon"},
			{"M9","weapon"},
			{"M9SD","weapon"},
			{"Sa61_EP1","weapon"},
			{"UZI_EP1","weapon"},
			{"UZI_SD_EP1","weapon"},
			{"vil_USP","weapon"},
			{"vil_USPSD","weapon"}
		};
		itemChance[] =	{
			0, //DZ_ALICE_Pack_EP1","object
			0.05, //DZ_Assault_Pack_EP1","object
			0, //DZ_Backpack_EP1","object
			0, //DZ_British_ACU","object
			0.01, //DZ_CivilBackpack_EP1","object
			0, //DZ_Czech_Vest_Puch","object
			0, //DZ_TK_Assault_Pack_EP1","object
			0.03, //"","AmmoNATO
			0.01, //","clothing
			0.01, //","foodSpecial
			0.01, //","medical
			0.08, //","trash
			0, //Binocular","weapon
			0.04, //Binocular_Vector","military
			0.01, //NVGoggles","weapon
			0.06, //AK_107_GL_kobra","weapon
			0.04, //AK_107_GL_pso","weapon
			0.02, //AK_107_kobra","weapon
			0.01, //AK_107_pso","weapon
			0.07, //AK_47_M","weapon
			0.04, //AK_47_S","weapon
			0.06, //AK_74","weapon
			0.01, //AK_74_GL","weapon
			0.01, //AK_74_GL_kobra","weapon
			0.06, //AKS_74","weapon
			0.04, //AKS_74_kobra","weapon
			0.01, //AKS_74_NSPU","weapon
			0.01, //AKS_74_pso","weapon
			0.03, //AKS_74_U","weapon
			0.02, //AKS_74_UN_kobra","weapon
			0.01, //AKS_GOLD","weapon
			0.04, //bizon","weapon
			0.07, //FN_FAL","weapon
			0.01, //FN_FAL_ANPVS4","weapon
			0.01, //ksvk_DZ","weapon
			0.06, //Sa58P_EP1","weapon
			0.04, //Sa58V_CCO_EP1","weapon
			0.05, //Sa58V_EP1","weapon
			0.02, //Sa58V_RCO_EP1","weapon
			0.08, //SVD","weapon
			0.04, //SVD_CAMO","weapon
			0.04, //SVD_des_EP1","weapon
			0.01, //SVD_NSPU_EP1","weapon
			0.06, //vil_AK_101","weapon
			0.06, //vil_AK_103","weapon
			0.06, //vil_AK_105","weapon
			0.04, //Vil_AK_105_c","weapon
			0.06, //vil_AK_107","weapon
			0.04, //Vil_AK_107_c","weapon
			0.03, //vil_AK_74m","weapon
			0.02, //vil_AK_74m_c","weapon
			0.01, //vil_AK_74m_EOT","weapon
			0.01, //vil_AK_74m_EOT_Alfa","weapon
			0.01, //vil_AK_74m_EOT_FSB","weapon
			0.01, //vil_AK_74m_EOT_FSB_45","weapon
			0.01, //vil_AK_74m_EOT_FSB_60","weapon
			0.01, //vil_AK_74m_gp","weapon
			0.01, //vil_AK_74m_gp_29","weapon
			0.04, //vil_AK_74m_k","weapon
			0.03, //vil_AK_74M_N","weapon
			0.01, //vil_AK_74m_p29","weapon
			0.01, //vil_AK_74M_PSO","weapon
			0.03, //vil_AK_74P","weapon
			0.04, //vil_ak12","weapon
			0.07, //vil_fal","weapon
			0.03, //vil_fal_para","weapon
			0.07, //vil_galil","weapon
			0.05, //vil_galil_ARM","weapon
			0.04, //vil_zastava_m84","weapon
			0.01, //VSS_vintorez","weapon
			0.01, //Makarov","weapon
			0.05, //MakarovSD","weapon
			0.02, //M9","weapon
			0.03, //M9SD","weapon
			0.02, //Sa61_EP1","weapon
			0.01, //UZI_EP1","weapon
			0.04, //UZI_SD_EP1","weapon
			0.02, //vil_USP","weapon
			0.07 //vil_USPSD","weapon
		};
	};
	class Crash2_Mi8: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_soldier_pilot"};
		lootChance = 0.6;
		lootPos[] = {};
		itemType[] =	{		
			{"DZ_ALICE_Pack_EP1","object"},
			{"DZ_Assault_Pack_EP1","object"},
			{"DZ_Backpack_EP1","object"},
			{"DZ_British_ACU","object"},
			{"DZ_CivilBackpack_EP1","object"},
			{"DZ_Czech_Vest_Puch","object"},
			{"DZ_TK_Assault_Pack_EP1","object"},
			{"","AmmoNATO"},
			{"","clothing"},
			{"","foodSpecial"},
			{"","medical"},
			{"","trash"},
			{"Binocular","weapon"},
			{"Binocular_Vector","military"},
			{"NVGoggles","weapon"},
			{"AK_107_GL_kobra","weapon"},
			{"AK_107_GL_pso","weapon"},
			{"AK_107_kobra","weapon"},
			{"AK_107_pso","weapon"},
			{"AK_47_M","weapon"},
			{"AK_47_S","weapon"},
			{"AK_74","weapon"},
			{"AK_74_GL","weapon"},
			{"AK_74_GL_kobra","weapon"},
			{"AKS_74","weapon"},
			{"AKS_74_kobra","weapon"},
			{"AKS_74_NSPU","weapon"},
			{"AKS_74_pso","weapon"},
			{"AKS_74_U","weapon"},
			{"AKS_74_UN_kobra","weapon"},
			{"AKS_GOLD","weapon"},
			{"bizon","weapon"},
			{"FN_FAL","weapon"},
			{"FN_FAL_ANPVS4","weapon"},
			{"Sa58P_EP1","weapon"},
			{"Sa58V_CCO_EP1","weapon"},
			{"Sa58V_EP1","weapon"},
			{"Sa58V_RCO_EP1","weapon"},
			{"SVD","weapon"},
			{"SVD_CAMO","weapon"},
			{"SVD_des_EP1","weapon"},
			{"SVD_NSPU_EP1","weapon"},
			{"vil_AK_101","weapon"},
			{"vil_AK_103","weapon"},
			{"vil_AK_105","weapon"},
			{"Vil_AK_105_c","weapon"},
			{"vil_AK_107","weapon"},
			{"Vil_AK_107_c","weapon"},
			{"vil_AK_74m","weapon"},
			{"vil_AK_74m_c","weapon"},
			{"vil_AK_74m_EOT","weapon"},
			{"vil_AK_74m_EOT_Alfa","weapon"},
			{"vil_AK_74m_EOT_FSB","weapon"},
			{"vil_AK_74m_EOT_FSB_45","weapon"},
			{"vil_AK_74m_EOT_FSB_60","weapon"},
			{"vil_AK_74m_gp","weapon"},
			{"vil_AK_74m_gp_29","weapon"},
			{"vil_AK_74m_k","weapon"},
			{"vil_AK_74M_N","weapon"},
			{"vil_AK_74m_p29","weapon"},
			{"vil_AK_74M_PSO","weapon"},
			{"vil_AK_74P","weapon"},
			{"vil_ak12","weapon"},
			{"vil_fal","weapon"},
			{"vil_fal_para","weapon"},
			{"vil_galil","weapon"},
			{"vil_galil_ARM","weapon"},
			{"vil_zastava_m84","weapon"},
			{"VSS_vintorez","weapon"},
			{"Makarov","weapon"},
			{"MakarovSD","weapon"},
			{"M9","weapon"},
			{"M9SD","weapon"},
			{"Sa61_EP1","weapon"},
			{"UZI_EP1","weapon"},
			{"UZI_SD_EP1","weapon"},
			{"vil_USP","weapon"},
			{"vil_USPSD","weapon"}
		};
		itemChance[] =	{
			0, //DZ_ALICE_Pack_EP1","object
			0.05, //DZ_Assault_Pack_EP1","object
			0, //DZ_Backpack_EP1","object
			0, //DZ_British_ACU","object
			0.01, //DZ_CivilBackpack_EP1","object
			0, //DZ_Czech_Vest_Puch","object
			0, //DZ_TK_Assault_Pack_EP1","object
			0.03, //"","AmmoNATO
			0.01, //","clothing
			0.01, //","foodSpecial
			0.01, //","medical
			0.08, //","trash
			0, //Binocular","weapon
			0.04, //Binocular_Vector","military
			0.01, //NVGoggles","weapon
			0.06, //AK_107_GL_kobra","weapon
			0.04, //AK_107_GL_pso","weapon
			0.02, //AK_107_kobra","weapon
			0.01, //AK_107_pso","weapon
			0.07, //AK_47_M","weapon
			0.04, //AK_47_S","weapon
			0.06, //AK_74","weapon
			0.01, //AK_74_GL","weapon
			0.01, //AK_74_GL_kobra","weapon
			0.06, //AKS_74","weapon
			0.04, //AKS_74_kobra","weapon
			0.01, //AKS_74_NSPU","weapon
			0.01, //AKS_74_pso","weapon
			0.03, //AKS_74_U","weapon
			0.02, //AKS_74_UN_kobra","weapon
			0.01, //AKS_GOLD","weapon
			0.04, //bizon","weapon
			0.07, //FN_FAL","weapon
			0.01, //FN_FAL_ANPVS4","weapon
			0.06, //Sa58P_EP1","weapon
			0.04, //Sa58V_CCO_EP1","weapon
			0.05, //Sa58V_EP1","weapon
			0.02, //Sa58V_RCO_EP1","weapon
			0.08, //SVD","weapon
			0.04, //SVD_CAMO","weapon
			0.04, //SVD_des_EP1","weapon
			0.01, //SVD_NSPU_EP1","weapon
			0.06, //vil_AK_101","weapon
			0.06, //vil_AK_103","weapon
			0.06, //vil_AK_105","weapon
			0.04, //Vil_AK_105_c","weapon
			0.06, //vil_AK_107","weapon
			0.04, //Vil_AK_107_c","weapon
			0.03, //vil_AK_74m","weapon
			0.02, //vil_AK_74m_c","weapon
			0.01, //vil_AK_74m_EOT","weapon
			0.01, //vil_AK_74m_EOT_Alfa","weapon
			0.01, //vil_AK_74m_EOT_FSB","weapon
			0.01, //vil_AK_74m_EOT_FSB_45","weapon
			0.01, //vil_AK_74m_EOT_FSB_60","weapon
			0.01, //vil_AK_74m_gp","weapon
			0.01, //vil_AK_74m_gp_29","weapon
			0.04, //vil_AK_74m_k","weapon
			0.03, //vil_AK_74M_N","weapon
			0.01, //vil_AK_74m_p29","weapon
			0.01, //vil_AK_74M_PSO","weapon
			0.03, //vil_AK_74P","weapon
			0.04, //vil_ak12","weapon
			0.07, //vil_fal","weapon
			0.03, //vil_fal_para","weapon
			0.07, //vil_galil","weapon
			0.05, //vil_galil_ARM","weapon
			0.04, //vil_zastava_m84","weapon
			0.01, //VSS_vintorez","weapon
			0.01, //Makarov","weapon
			0.05, //MakarovSD","weapon
			0.02, //M9","weapon
			0.03, //M9SD","weapon
			0.02, //Sa61_EP1","weapon
			0.01, //UZI_EP1","weapon
			0.04, //UZI_SD_EP1","weapon
			0.07, //vil_USP","weapon
			0.02 //vil_USPSD","weapon
		};
	};	
/*Crash3C130
	class Crash3C130: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_soldier_pilot"};;
		lootChance = 0.6;
		lootPos[] = {};
		itemType[] =	{
		};
		itemChance[] =	{
		};
	};
//Crash3C130_UnArmed
	class Crash3C130_UnArmed: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_soldier_pilot"};;
		lootChance = 0.6;
		lootPos[] = {};
		itemType[] =	{
		};
		itemChance[] =	{
		};
	};*/
	class Farm: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.6;
		lootPos[] = {};
		itemType[] =	{
			{"DZ_ALICE_Pack_EP1","object"},
			{"DZ_Assault_Pack_EP1","object"},
			{"DZ_British_ACU","object"},
			{"DZ_Czech_Vest_Puch","object"},
			{"DZ_TK_Assault_Pack_EP1","object"},
			{"","farm"},
			{"","foodSpecial"},
			{"","hunter"},
			{"","trash"},
			{"Binocular","weapon"},
			{"WeaponHolder_ItemJerrycan","object"},
			{"WeaponHolder_PartEngine","object"},
			{"WeaponHolder_PartFueltank","object"},
			{"WeaponHolder_PartGeneric","object"},
			{"WeaponHolder_PartWheel","object"},
			{"Crossbow_DZ","weapon"},
			{"huntingrifle","weapon"},
			{"LeeEnfield","weapon"},
			{"MR43","weapon"},
			{"Winchester1866","weapon"},
			{"Colt1911","weapon"},
			{"Makarov","weapon"},
			{"MakarovSD","weapon"},
			{"revolver_EP1","weapon"},
			{"vil_bhp","weapon"},
			{"ItemCraftingBook","weapon"},
			{"ItemCraftingBook2","weapon"},
			{"ItemCompass","generic"},
			{"ItemKnife","generic"},
			{"ItemMap","weapon"},
			{"ItemMatchbox","generic"},
			{"ItemToolbox","weapon"},
			{"ItemWatch","generic"},
			{"WeaponHolder_ItemBaseball_Bat","object"},
			{"WeaponHolder_ItemCrowbar","object"},
			{"WeaponHolder_ItemHatchet","object"},
			{"WeaponHolder_ItemMachete","object"},
			{"WeaponHolder_ItemShovel","object"}
		};
		itemChance[] =	{
			0.05, //DZ_ALICE_Pack_EP1","object
			0.01, //DZ_Assault_Pack_EP1","object
			0.01, //DZ_British_ACU","object
			0.02, //DZ_Czech_Vest_Puch","object
			0.08, //DZ_TK_Assault_Pack_EP1","object
			0.35, //"","farm
			0.25, //"","food
			0.03, //"","hunter
			2, //"","trash
			0.3, //Binocular","weapon
			0.01, //WeaponHolder_ItemJerrycan","object"},
			0.01, //WeaponHolder_PartEngine","object"},
			0.01, //WeaponHolder_PartFueltank","object"},
			0.04, //WeaponHolder_PartGeneric","object"},
			0.04, //WeaponHolder_PartWheel","object"}
			0.01, //Crossbow_DZ","weapon
			0.04, //huntingrifle","weapon
			0.08, //LeeEnfield","weapon
			0.01, //MR43","weapon
			0.04, //Winchester1866","weapon
			0.04, //Colt1911","weapon
			0.08, //Makarov","weapon
			0.01, //MakarovSD","weapon
			0.04, //revolver_EP1","weapon
			0.04,//vil_bhp","weapon
			0.00, //ItemCraftingBook","weapon
			0.04, //ItemCraftingBook2","weapon
			0.01, //ItemCompass","generic
			0.02, //ItemKnife","generic
			0.01, //ItemMap","weapon
			0.05, //ItemMatchbox","generic
			0.08, //ItemToolbox","weapon
			0.02, //ItemWatch","generic
			0.01, //WeaponHolder_ItemBaseball_Bat","object
			0.02, //WeaponHolder_ItemCrowbar","object
			0.04, //WeaponHolder_ItemHatchet","object
			0.01, //WeaponHolder_ItemMachete","object
			0.01 //WeaponHolder_ItemShovel","object
		};
	};
	class Hospital: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_doctor","z_doctor","z_doctor"};

		lootChance = 0.6;
		lootPos[] = {};
		itemType[] =	{
			{"","trash"},
			{"","hospital"},
			{"MedBox0","object"}
		};
		itemChance[] =	{
			2, //trash
			1, //hospital
			0.4 //MedBox0
		};
	};
	class Hunting: Default {
		zombieChance = 0.4;
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_hunter"};
		lootChance = 0.6;
		lootPos[] = {};
		itemType[] =	{
			{"ItemMap","weapon"},
			{"ItemFlashlight","generic"},
			{"ItemKnife","generic"},
			{"ItemMatchbox","generic"},
			{"Crossbow_DZ","weapon"},
			{"","military"},
			{"WeaponHolder_ItemCrowbar","object"},
			{"huntingrifle","weapon"},
			{"","hunter"},
			{"ItemCraftingBook3","weapon"}
		};
		itemChance[] =	{
			0.08, //ItemMap
			0.05, //ItemFlashlight
			0.04, //ItemKnife
			0.06, //ItemMatchbox
			0.03, //Crossbow_DZ
			2.00, //military
			0.03, //WeaponHolder_ItemCrowbar
			0.04, //huntingrifle
			3.00, //hunter
			0.01 //ItemCraftingBook3
		};
	};
	class Industrial: Default {
		zombieChance = 0.4;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3"};
		maxRoaming = 2;
		lootChance = 4;
		lootPos[] = {};
		itemType[] =	{
			{"","trash"},
			{"ItemCraftingBook2","weapon"},
			{"ItemKnife","military"},
			{"ItemNails","magazine"},
			{"ItemTankTrap","magazine"},
			{"ItemToolbox","weapon"},
			{"ItemWire","magazine"},
			{"WeaponHolder_ItemHatchet","object"},
			{"WeaponHolder_ItemJerrycan","object"},
			{"WeaponHolder_ItemPropane","object"},
			{"WeaponHolder_PartEngine","object"},
			{"WeaponHolder_PartFueltank","object"},
			{"WeaponHolder_PartGeneric","object"},
			{"WeaponHolder_PartGlass","object"},
			{"WeaponHolder_PartVRotor","object"},
			{"WeaponHolder_PartWheel","object"}
		};
		itemChance[] =	{
			0, //,trash
			0.02, //ItemCraftingBook2","weapon
			0.02, //ItemKnife","military
			0.01, //ItemNails","magazine
			0.02, //ItemTankTrap","magazine
			0.02, //ItemToolbox","weapon
			0.02, //ItemWire","magazine
			0.01, //WeaponHolder_ItemHatchet","object
			0.01, //WeaponHolder_ItemJerrycan","object
			0, //WeaponHolder_ItemPropane","object
			0.04, //WeaponHolder_PartEngine","object
			0.04, //WeaponHolder_PartFueltank","object
			0.04, //WeaponHolder_PartGeneric","object
			0.04, //WeaponHolder_PartGlass","object
			0.04, //WeaponHolder_PartVRotor","object
			0.04 //WeaponHolder_PartWheel","object
		};
	};
	class Military: Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_RACSzombie","z_RACSzombie5","z_RACSzombie6","z_RACSzombie7"};
		lootChance = 0.6;
		lootPos[] = {};
		itemType[] =	{
			{"DZ_ALICE_Pack_EP1","object"},
			{"DZ_Assault_Pack_EP1","object"},
			{"DZ_Backpack_EP1","object"},
			{"DZ_British_ACU","object"},
			{"DZ_CivilBackpack_EP1","object"},
			{"DZ_Czech_Vest_Puch","object"},
			{"DZ_TK_Assault_Pack_EP1","object"},
			{"","AmmoUN"},
			{"","AmmoNATO"},
			{"","clothing"},
			{"","foodSpecial"},
			{"","medical"},
			{"","military"},
			{"","militarySpecial"},
			{"","trash"},
			{"Binocular","weapon"},
			{"Binocular_Vector","military"},
			{"AK_107_GL_kobra","weapon"},
			{"AK_107_kobra","weapon"},
			{"AK_47_M","weapon"},
			{"AK_47_S","weapon"},
			{"AK_74","weapon"},
			{"AK_74_GL","weapon"},
			{"AK_74_GL_kobra","weapon"},
			{"AKS_74","weapon"},
			{"AKS_74_kobra","weapon"},
			{"AKS_74_U","weapon"},
			{"AKS_74_UN_kobra","weapon"},
			{"bizon","weapon"},
			{"FN_FAL","weapon"},
			{"Sa58P_EP1","weapon"},
			{"Sa58V_CCO_EP1","weapon"},
			{"Sa58V_EP1","weapon"},
			{"SVD","weapon"},
			{"SVD_des_EP1","weapon"},
			{"vil_AK_101","weapon"},
			{"vil_AK_103","weapon"},
			{"vil_AK_105","weapon"},
			{"vil_AK_107","weapon"},
			{"vil_AK_74m","weapon"},
			{"vil_AK_74m_EOT","weapon"},
			{"vil_AK_74m_gp","weapon"},
			{"vil_AK_74m_k","weapon"},
			{"vil_AK_74M_N","weapon"},
			{"vil_AK_74m_p29","weapon"},
			{"vil_AK_74P","weapon"},
			{"vil_ak12","weapon"},
			{"vil_fal","weapon"},
			{"vil_fal_para","weapon"},
			{"vil_galil","weapon"},
			{"vil_galil_ARM","weapon"},
			{"vil_uzi","weapon"},
			{"vil_uzi_c","weapon"},
			{"vil_uzi_SD","weapon"},
			{"vil_uzimini","weapon"},
			{"vil_uzimini_SD","weapon"},
			{"vil_zastava_m84","weapon"},
			{"M9","weapon"},
			{"Makarov","weapon"},
			{"MakarovSD","weapon"},
			{"Sa61_EP1","weapon"},
			{"UZI_EP1","weapon"},
			{"vil_USP","weapon"},
			{"vil_USPSD","weapon"}
		};
		itemChance[] =	{
			0.04, //DZ_ALICE_Pack_EP1","object
			0, //DZ_Assault_Pack_EP1","object
			0.02, //DZ_Backpack_EP1","object
			0.01, //DZ_British_ACU","object
			0.02, //DZ_CivilBackpack_EP1","object
			0, //DZ_Czech_Vest_Puch","object
			0.04, //DZ_TK_Assault_Pack_EP1","object
			0.1, //"","AmmoUN
			0.7, //"","AmmoNATO
			0.01, //","clothing
			0.5, //","foodSpecial
			0.2, //","medical
			0.8, //","military
			0.9, //","militarySpecial
			4, //","trash
			0.04, //Binocular","weapon
			0.02, //Binocular_Vector","military
			0.02, //AK_107_GL_kobra","weapon
			0.06, //AK_107_kobra","weapon
			0.02, //AK_47_M","weapon
			0.01, //AK_47_S","weapon
			0.06, //AK_74","weapon
			0.01, //AK_74_GL","weapon
			0.08, //AK_74_GL_kobra","weapon
			0.04, //AKS_74","weapon
			0.04, //AKS_74_kobra","weapon
			0.08, //AKS_74_U","weapon
			0.06, //AKS_74_UN_kobra","weapon
			0.04, //bizon","weapon
			0.06, //FN_FAL","weapon
			0.02, //Sa58P_EP1","weapon
			0.08, //Sa58V_CCO_EP1","weapon
			0.02, //Sa58V_EP1","weapon
			0.06, //SVD","weapon
			0.03, //SVD_des_EP1","weapon
			0.07, //vil_AK_101","weapon
			0.03, //vil_AK_103","weapon
			0.03, //vil_AK_105","weapon
			0.02, //vil_AK_107","weapon
			0.04, //vil_AK_74m","weapon
			0.08, //vil_AK_74m_EOT","weapon
			0.02, //vil_AK_74m_gp","weapon
			0.02, //vil_AK_74m_k","weapon
			0.02, //vil_AK_74M_N","weapon
			0.01, //vil_AK_74m_p29","weapon
			0.02, //vil_AK_74P","weapon
			0.01, //vil_ak12","weapon
			0.03, //vil_fal","weapon
			0.01, //vil_fal_para","weapon
			0.04, //vil_galil","weapon
			0.01, //vil_galil_ARM","weapon
			0.03, //{"vil_uzi","weapon"},
			0.03, //{"vil_uzi_c","weapon"},
			0.02, //{"vil_uzi_SD","weapon"},
			0.03, //{"vil_uzimini","weapon"},
			0.02, //{"vil_uzimini_SD","weapon"},
			0.02, //vil_zastava_m84","weapon
			0.7, //M9","weapon
			0.4, //Makarov","weapon
			0.04, //MakarovSD","weapon
			0.1, //Sa61_EP1","weapon
			0.05, //UZI_EP1","weapon
			0.8, //vil_USP","weapon
			0.04//vil_USPSD","weapon
		};
	};
	class MilitarySpecial: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_RACSzombie","z_RACSzombie3","z_RACSzombie8"};
		lootChance = 0.6;
		lootPos[] = {};
		itemType[] =	{
			{"DZ_ALICE_Pack_EP1","object"},
			{"DZ_Assault_Pack_EP1","object"},
			{"DZ_Backpack_EP1","object"},
			{"DZ_British_ACU","object"},
			{"DZ_CivilBackpack_EP1","object"},
			{"DZ_Czech_Vest_Puch","object"},
			{"DZ_TK_Assault_Pack_EP1","object"},
			{"","AmmoUN"},
			{"","AmmoNATO"},
			{"","clothing"},
			{"","foodSpecial"},
			{"","medical"},
			{"","military"},
			{"","militarySpecial"},
			{"","trash"},
			{"Binocular","weapon"},
			{"Binocular_Vector","military"},
			{"M24","weapon"},
			{"M24_des_EP1","weapon"},
			{"M40A3","weapon"},
			{"M79_DZ","weapon"},
			{"m8_carbine","weapon"},
			{"m8_carbine_pmc","weapon"},
			{"m8_carbineGL","weapon"},
			{"m8_compact","weapon"},
			{"m8_compact_pmc","weapon"},
			{"m8_holo_sd","weapon"},
			{"m8_SAW_DZ","weapon"},
			{"m8_sharpshooter","weapon"},
			{"MG36_camo_DZ","weapon"},
			{"MG36_DZ","weapon"},
			{"Mk_48_DES_DZ","weapon"},
			{"Mk_48_DZ","weapon"},
			{"Mk13_DZ","weapon"},
			{"MP5A5","weapon"},
			{"MP5SD","weapon"},
			{"SCAR_H_CQC_CCO","weapon"},
			{"SCAR_H_CQC_CCO_SD","weapon"},
			{"SCAR_H_LNG_Sniper","weapon"},
			{"SCAR_H_LNG_Sniper_SD","weapon"},
			{"SCAR_H_STD_EGLM_Spect","weapon"},
			{"SCAR_L_CQC","weapon"},
			{"SCAR_L_CQC_CCO_SD","weapon"},
			{"SCAR_L_CQC_EGLM_Holo","weapon"},
			{"SCAR_L_CQC_Holo","weapon"},
			{"SCAR_L_STD_EGLM_RCO","weapon"},
			{"SCAR_L_STD_HOLO","weapon"},
			{"SCAR_L_STD_Mk4CQT","weapon"},
			{"vil_AG3","weapon"},
			{"vil_AG3EOT","weapon"},
			{"vil_D_416","weapon"},
			{"vil_D_416de","weapon"},
			{"vil_hk33","weapon"},
			{"vil_HK416_Aim","weapon"},
			{"vil_hk416_edr","weapon"},
			{"vil_hk416_EOT","weapon"},
			{"vil_hk416_gl","weapon"},
			{"vil_hk416_is","weapon"},
			{"vil_hk417s","weapon"},
			{"vil_Minimi","weapon"},
			{"vil_sg540","weapon"},
			{"vil_sg542","weapon"},
			{"vil_sg5421","weapon"},
			{"vil_sr25","weapon"},
			{"vil_sr25sd","weapon"},
			{"glock17_EP1","weapon"},
			{"M9","weapon"},
			{"M9SD","weapon"},
			{"Makarov","weapon"},
			{"MakarovSD","weapon"},
			{"Sa61_EP1","weapon"},
			{"UZI_EP1","weapon"},
			{"UZI_SD_EP1","weapon"},
			{"vil_bhp","weapon"},
			{"vil_Glock","weapon"},
			{"vil_Glock_o","weapon"},
			{"vil_USP","weapon"},
			{"vil_USPSD","weapon"},
			{"ItemRadio","weapon"},
			{"PipeBomb","magazine"},
			{"ItemEtool","weapon"}
		};
		itemChance[] =	{
			0.01, //DZ_ALICE_Pack_EP1","object
			0, //DZ_Assault_Pack_EP1","object
			0.02, //DZ_Backpack_EP1","object
			0.03, //DZ_British_ACU","object
			0.02, //DZ_CivilBackpack_EP1","object
			0, //DZ_Czech_Vest_Puch","object
			0.01, //DZ_TK_Assault_Pack_EP1","object
			0.4, //"","AmmoUN
			0.6, //"","AmmoNATO
			0.01, //","clothing
			0.3, //","foodSpecial
			0.4, //","medical
			0.4, //","military
			0.6, //","militarySpecial
			4, //","trash
			0, //Binocular","weapon
			0.02, //Binocular_Vector","military
			0.01, //M24","weapon
			0.01, //M24_des_EP1","weapon
			0.01, //M40A3","weapon
			0.01, //M79_DZ","weapon
			0.06, //m8_carbine","weapon
			0.06, //m8_carbine_pmc","weapon
			0.04, //m8_carbineGL","weapon
			0.08, //m8_compact","weapon
			0.08, //m8_compact_pmc","weapon
			0.01, //m8_holo_sd","weapon
			0, //m8_SAW_DZ","weapon
			0.01, //m8_sharpshooter","weapon
			0.01, //MG36_camo_DZ","weapon
			0.01, //MG36_DZ","weapon
			0.01, //Mk_48_DES_DZ","weapon
			0.01, //Mk_48_DZ","weapon
			0.01, //Mk13_DZ","weapon
			0.08, //MP5A5","weapon
			0.02, //MP5SD","weapon
			0.04, //SCAR_H_CQC_CCO","weapon
			0.01, //SCAR_H_CQC_CCO_SD","weapon
			0.01, //SCAR_H_LNG_Sniper","weapon
			0.01, //SCAR_H_LNG_Sniper_SD","weapon
			0.01, //SCAR_H_STD_EGLM_Spect","weapon
			0.01, //SCAR_L_CQC","weapon
			0.02, //SCAR_L_CQC_CCO_SD","weapon
			0.08, //SCAR_L_CQC_EGLM_Holo","weapon
			0.04, //SCAR_L_CQC_Holo","weapon
			0.01, //SCAR_L_STD_EGLM_RCO","weapon
			0.04, //SCAR_L_STD_HOLO","weapon
			0.02, //SCAR_L_STD_Mk4CQT","weapon
			0.01, //vil_AG3","weapon
			0.01, //vil_AG3EOT","weapon
			0.01, //vil_D_416","weapon
			0.04, //vil_D_416de","weapon
			0.01, //vil_hk33","weapon
			0.04, //vil_HK416_Aim","weapon
			0.02, //vil_hk416_edr","weapon
			0.04, //vil_hk416_EOT","weapon
			0.02, //vil_hk416_gl","weapon
			0.03, //vil_hk416_is","weapon
			0.02, //vil_hk417s","weapon
			0.01, //vil_Minimi","weapon
			0.01, //vil_sg540","weapon
			0.01, //vil_sg542","weapon
			0.01, //vil_sg5421","weapon
			0.01, //vil_sr25","weapon
			0.01, //vil_sr25sd","weapon
			0.01, //glock17_EP1","weapon
			0.01, //M9","weapon
			0.04, //M9SD","weapon
			0.01, //Makarov","weapon
			0.04, //MakarovSD","weapon
			0.01, //Sa61_EP1","weapon
			0.01, //UZI_EP1","weapon
			0.04, //UZI_SD_EP1","weapon
			0.01, //vil_bhp","weapon
			0.01, //vil_Glock","weapon
			0.01, //vil_Glock_o","weapon
			0.03, //vil_USP","weapon
			0.04, //vil_USPSD","weapon
			0.01, //ItemRadio","weapon
			0.01,	//PipeBomb, magazine
			0.08	//ItemEtool, weapon
		};
	};
	class Residential: Default {
		zombieChance = 0.3;
		maxRoaming = 2;
		zombieClass[] = {"z_sah_civilian1_shorts","z_sah_civilian2_shorts","z_sah_civilian3_shorts","z_sah_civilian4_shorts","z_sah_civilian5_shorts","z_sah_civilian6_shorts","z_sah_civilian7_shorts","z_sah_civilian1_pants","z_sah_civilian2_pants","z_sah_civilian3_pants","z_sah_civilian4_pants","z_sah_civilian5_pants","z_sah_civilian6_pants","z_sah_civilian7_pants",};
		lootChance = 4;
		lootPos[] = {};
		itemType[] =	{
			{"DZ_ALICE_Pack_EP1","object"},
			{"DZ_Assault_Pack_EP1","object"},
			{"DZ_British_ACU","object"},
			{"DZ_Czech_Vest_Puch","object"},
			{"DZ_TK_Assault_Pack_EP1","object"},
			{"","food"},
			{"","trash"},
			{"Binocular","weapon"},
			{"Skin_BanditSkin_DZ","magazine"},
			{"Skin_Camo1_DZ","magazine"},
			{"Skin_Rocket_DZ","magazine"},
			{"Skin_Sniper1_DZ","magazine"},
			{"Skin_SniperLight_DZ","magazine"},
			{"Skin_SniperD_DZ","magazine"},
			{"WeaponHolder_ItemTent","object"},
			{"WeaponHolder_ItemPropane","object"},
			{"Crossbow_DZ","weapon"},
			{"LeeEnfield","weapon"},
			{"MR43","weapon"},
			{"Winchester1866","weapon"},
			{"Colt1911","weapon"},
			{"Makarov","weapon"},
			{"MakarovSD","weapon"},
			{"revolver_EP1","weapon"},
			{"vil_bhp","weapon"},
			{"vil_Glock","weapon"},
			{"vil_Glock_o","weapon"},
			{"vil_USP","weapon"},
			{"ItemCraftingBook","weapon"},
			{"ItemCompass","generic"},
			{"ItemKnife","generic"},
			{"ItemMap","weapon"},
			{"ItemMatchbox","generic"},
			{"ItemWatch","generic"},
			{"WeaponHolder_ItemBaseball_Bat","object"},
			{"WeaponHolder_ItemCrowbar","object"},
			{"WeaponHolder_ItemHatchet","object"},
			{"WeaponHolder_ItemMachete","object"},
			{"WeaponHolder_ItemShovel","object"}
		};
		itemChance[] =	{
			0.03, //DZ_ALICE_Pack_EP1","object
			0.05, //DZ_Assault_Pack_EP1","object
			0.01, //DZ_British_ACU","object
			0.08, //DZ_Czech_Vest_Puch","object
			0.03, //DZ_TK_Assault_Pack_EP1","object
			0.08, //,food
			2, //, trash
			0.01, //Binocular","weapon
			0.00, //Skin_BanditSkin_DZ
			0.01, //Skin_Camo1_DZ
			0.00, //Skin_Rocket_DZ
			0.01, //Skin_Sniper1_DZ
			0.01, //Skin_SniperLight_DZ
			0.01, //Skin_SniperD_DZ
			0.03, //WeaponHolder_ItemTent
			0, //WeaponHolder_ItemPropane
			0.02, //Crossbow_DZ","weapon
			0.04, //LeeEnfield","weapon
			0.01, //MR43","weapon
			0.05, //Winchester1866","weapon
			0.02, //Colt1911","weapon
			0.04, //Makarov","weapon
			0.01, //MakarovSD","weapon
			0.03, //revolver_EP1","weapon
			0.04,//vil_bhp
			0.04,//vil_Glock
			0.04,//vil_Glock_o
			0.05,//vil_USP
			0.00, //ItemCraftingBook","weapon
			0.04, //ItemCompass","generic
			0.04, //ItemKnife","generic
			0.04, //ItemMap","weapon
			0.04, //ItemMatchbox","generic
			0.01, //ItemWatch","generic
			0.01, //WeaponHolder_ItemBaseball_Bat","object
			0.02, //WeaponHolder_ItemCrowbar","object
			0.04, //WeaponHolder_ItemHatchet","object
			0.01, //WeaponHolder_ItemMachete","object
			0.01 //WeaponHolder_ItemShovel","object
		};		
	};
	class Office: Residential {
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_suit1","z_suit2"};
	};
	class Supermarket: Default {
		lootChance = 0.6;
		minRoaming = 2;
		maxRoaming = 5;
		zombieChance = 0.3;
		zombieClass[] = {"z_sah_civilian1_shorts","z_sah_civilian2_shorts","z_sah_civilian3_shorts","z_sah_civilian4_shorts","z_sah_civilian5_shorts","z_sah_civilian6_shorts","z_sah_civilian7_shorts","z_sah_civilian1_pants","z_sah_civilian2_pants","z_sah_civilian3_pants","z_sah_civilian4_pants","z_sah_civilian5_pants","z_sah_civilian6_pants","z_sah_civilian7_pants",};
		itemType[] = {
			{"DZ_ALICE_Pack_EP1","object"},
			{"DZ_Assault_Pack_EP1","object"},
			{"DZ_British_ACU","object"},
			{"DZ_Czech_Vest_Puch","object"},
			{"DZ_TK_Assault_Pack_EP1","object"},
			{"","food"},
			{"","medical"},
			{"","trash"},
			{"Binocular","weapon"},
			{"PartWoodPile","magazine"},
			{"WeaponHolder_ItemTent","object"},
			{"Crossbow_DZ","weapon"},
			{"LeeEnfield","weapon"},
			{"M1014","weapon"},
			{"MR43","weapon"},
			{"Remington870_lamp","weapon"},
			{"Winchester1866","weapon"},
			{"Colt1911","weapon"},
			{"glock17_EP1","weapon"},
			{"vil_bhp","weapon"},
			{"vil_Glock","weapon"},
			{"vil_Glock_o","weapon"},
			{"vil_USP","weapon"},
			{"Makarov","weapon"},
			{"revolver_EP1","weapon"},
			{"ItemCraftingBook","weapon"},
			{"ItemCompass","generic"},
			{"ItemFlashlight","generic"},
			{"ItemKnife","generic"},
			{"ItemMap","weapon"},
			{"ItemMatchbox","generic"},
			{"ItemWatch","generic"}
		};
		itemChance[] =	{
			0.04, //DZ_ALICE_Pack_EP1
			0.06, //DZ_Assault_Pack_EP1
			0.01, //DZ_British_ACU
			0.08, //DZ_Czech_Vest_Puch
			0.03, //DZ_TK_Assault_Pack_EP1
			1.8, //"","food
			0.03, //"","medical
			4, //"","trash
			0.04, //Binocular
			0.01, //PartWoodPile
			0.03, //WeaponHolder_ItemTent
			0.01, //Crossbow_DZ
			0.04, //LeeEnfield
			0.08, //M1014
			0.01, //MR43
			0.01, //Remington870_lamp
			0.05, //Winchester1866
			0.04, //Colt1911
			0.01, //glock17_EP1
			0.04, //Makarov
			0.02, //revolver_EP1
			0.02,//vil_bhp
			0.01,//vil_Glock
			0.01,//vil_Glock_o
			0.02,//vil_USP
			0.02, //ItemCraftingBook
			0.04, //ItemCompass
			0.01, //ItemFlashlight
			0.04, //ItemKnife
			0.02, //ItemMap
			0.04, //ItemMatchbox
			0.01 //ItemWatch
		};
	};
	#include "BuildingPos.hpp"
};