class M9;
class M9SD;
class glock17_EP1;
class Colt1911;

class vil_BHP : M9 {
	scope = public;
	model = "\vilas_wwp\vil_bhp";
	displayName = $STR_VIL_BHP;
	magazines[] = {"15Rnd_9x19_M9","15Rnd_9x19_M9SD"};
	discreteDistanceInitIndex = 0;
	picture = "\vilas_wwp\ico\w_vil_bhp_ca.paa";
	begin1[] = {"\vilas_wwp\sounds\bhp_fire1", 0.994328, 1, 700};
	reloadMagazineSound[] = {"\vilas_wwp\sounds\bhp_reload", 0.4, 1, 20};
	soundBegin[] = {"begin1", 1};
	class Library {
		libTextDesc = $STR_VIL_BHP_LIB;
	};
	class Armory {
		author = $STR_AUTHOR_VILAS;
	};
	descriptionShort = $STR_VIL_BHP_SHORT;
};

class vil_Glock : glock17_EP1 {
	scope = public;
	picture = "\vilas_wwp\ico\w_vil_glock17_ca.paa";
	model = "\vilas_wwp\vil_glock";

	class Armory {
		disabled = 0;
		description = "$STR_EP1_LIB_glock17";
		author = $STR_AUTHOR_VILAS;
	};

	displayName = $STR_VIL_GLOCK;
	magazines[] = {"17Rnd_9x19_glock17", "15Rnd_9x19_M9", "15Rnd_9x19_M9SD"};
	descriptionShort = "$STR_EP1_DSS_glock17_EP1";
};

class vil_Glock_o : vil_glock {
	scope = public;
	model = "\vilas_wwp\vil_glock_o";
	picture = "\vilas_wwp\ico\w_vil_glock17_o_ca.paa";
	class Armory {
		disabled = 1;
		description = "$STR_EP1_LIB_glock17";
		author = $STR_AUTHOR_VILAS;
	};
	displayName = $STR_VIL_GLOCK_O;
	magazines[] = {"17Rnd_9x19_glock17", "15Rnd_9x19_M9", "15Rnd_9x19_M9SD"};
	descriptionShort = "$STR_EP1_DSS_glock17_EP1";
};

class vil_USP : M9 {
	scope = public;
	model = "\vilas_wwp\vil_usp";
	displayName = $STR_VIL_USP;
	discreteDistanceInitIndex = 1;
	picture = "\vilas_wwp\ico\w_vil_usp_ca.paa";
	begin1[] = {"\vilas_wwp\sounds\usp9_fire1", 0.684328, 1, 700};
	soundBegin[] = {"begin1", 1};
	reloadMagazineSound[] = {"\vilas_wwp\sounds\usp_reload", 0.1, 1, 20};
	class Library {
		libTextDesc = $STR_VIL_USP_LIB;
	};
	class Armory {
		author = $STR_AUTHOR_VILAS;
	};
	//descriptionShort = $STR_VIL_USP_SHORT;
};

class vil_USPSD : M9sd {
	scope = public;
	model = "\vilas_wwp\vil_uspsd";
	displayName = $STR_VIL_USPSD;
	discreteDistanceInitIndex = 1;
	picture = "\vilas_wwp\ico\w_vil_uspsd_ca.paa";
	begin1[] = {"\vilas_wwp\sounds\usp9sd_fire1", 0.316228, 1, 200};
	soundBegin[] = {"begin1", 1};
	reloadMagazineSound[] = {"\vilas_wwp\sounds\usp_reload", 0.1, 1, 20};
	class Library {
		libTextDesc = $STR_VIL_USP_LIB;
	};
	class Armory {
		author = $STR_AUTHOR_VILAS;
	};
	//descriptionShort = $STR_VIL_USPSD_SHORT;
};

class vil_USP45 : Colt1911 {
	scope = public;
	model = "\vilas_wwp\vil_usp";
	displayName = $STR_VIL_USP45;
	discreteDistanceInitIndex = 1;
	picture = "\vilas_wwp\ico\w_vil_usp45_ca.paa";
	magazines[] = {"7Rnd_45ACP_1911"};
	begin1[] = {"\vilas_wwp\sounds\usp45_fire1", 0.714328, 1, 700};
	soundBegin[] = {"begin1", 1};
	reloadMagazineSound[] = {"\vilas_wwp\sounds\usp_reload", 0.1, 1, 20};
	class Library {
		libTextDesc = $STR_VIL_USP_LIB;
	};
	class Armory {
		author = $STR_AUTHOR_VILAS;
	};
	descriptionShort = $STR_VIL_USP45_SHORT;
};

class vil_USP45SD : M9sd {
	scope = public;
	fireLightDuration = 0.0;
	fireLightIntensity = 0.0;
	model = "\vilas_wwp\vil_uspsd";
	displayName = $STR_VIL_USP45SD;
	discreteDistanceInitIndex = 1;
	picture = "\vilas_wwp\ico\w_vil_usp45sd_ca.paa";
	magazines[] = {"7Rnd_45ACP_1911"};
	begin1[] = {"\vilas_wwp\sounds\usp9sd_fire1", 0.316228, 1, 200};
	soundBegin[] = {"begin1", 1};
	reloadMagazineSound[] = {"\vilas_wwp\sounds\usp_reload", 0.1, 1, 20};
	recoil = "recoil_single_pistol_3outof3";
	recoilProne = "recoil_single_pistol_prone_3outof3";
	class Library {
		libTextDesc = $STR_VIL_USP_LIB;
	};
	class Armory {
		author = $STR_AUTHOR_VILAS;
	};
	descriptionShort = $STR_VIL_USP45SD_SHORT;
};
	
	/*********************************************************
			Vilas Eastern Weapons Handguns
	**********************************************************/

	class vil_Tt33 : Makarov {
		scope = public;
		model = "\vilas_aks\vil_tetetka";
		picture = "\vilas_aks\ico\w_vil_tt33_ca.paa";
		displayName = $STR_VIL_TT33;
		dispersion = 0.015;
		magazines[] = {"8Rnd_9x18_Makarov","8Rnd_9x18_MakarovSD"};
		begin1[] = {"\vilas_aks\sounds\tt33_fire1", 0.794328, 1, 700};
		begin2[] = {"\vilas_aks\sounds\tt33_fire2", 0.794328, 1, 700};
		soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
		reloadMagazineSound[] = {"\vilas_aks\sounds\tt33_reload", 0.1, 1, 20};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		
		class Library {
			libTextDesc = $STR_VIL_TT33_LIB;
		};
		descriptionShort = $STR_VIL_TT33_SHORT;
	};

	class vil_APS : Makarov  {
		scope = public;
		model = "\vilas_aks\vil_aps";
		modelOptics = "-";
		picture = "\vilas_aks\ico\w_vil_aps_ca.paa";
		optics = true;
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		displayName = $STR_TGW_VIL_APS;
		begin1[] = {"\vilas_aks\sounds\APSs", 0.794328, 1, 700};
		reloadMagazineSound[] = {"\vilas_aks\sounds\APSReload", 0.0316228, 1, 20};
		magazines[] = {"8Rnd_9x18_Makarov","8Rnd_9x18_MakarovSD"};
		ffCount = 1;
		aiRateOfFire = 0.1;	// delay between shots at given distance
		aiRateOfFireDistance = 50;
		modes[] = {"Single", "AI_single", "FullAuto"};
		
		class Single : Mode_SemiAuto {
			autoFire = false;
			begin1[] = {"\vilas_aks\sounds\APSs", 0.794328, 1, 700};
			soundBegin[] = {"begin1", 1};
			recoil = "recoil_single_pistol_2outof3";
			recoilProne = "recoil_single_pistol_2outof3";
			reloadTime = 0.1;
			dispersion = 0.0025;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.015;
		};

		class AI_Single : Mode_SemiAuto {
			dispersion = 0.004;
			midRange = 30;
			midRangeProbab = 0.6;
			maxRange = 70;
			maxRangeProbab = 0.001;
			showtoplayer = false;
		};

		class FullAuto : Mode_FullAuto {
			begin1[] = {"\vilas_aks\sounds\APSs", 0.794328, 1, 700};
			soundBegin[] = {"begin1", 1};
			recoil = "subMachineGunBase";
			recoilProne = "subMachineGunBase";
			reloadTime = 0.09;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 20;
			midRangeProbab = 0.1;
			maxRange = 40;
			maxRangeProbab = 0.001;
		};
		
		class Library {
			libTextDesc = $STR_TGW_VIL_APS_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_APS_SHORT;
	};
		
	class vil_apssd : vil_aps {
		model = "\vilas_aks\vil_apssd";
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		displayName = $STR_TGW_VIL_APB;
		magazines[] = {"8Rnd_9x18_Makarov","8Rnd_9x18_MakarovSD"};
		picture = "\vilas_aks\ico\w_vil_apb_ca.paa";
		begin1[] = {"\vilas_aks\sounds\APSsds", 0.316228, 1, 200};
		reloadMagazineSound[] = {"\vilas_aks\sounds\APSReload", 0.0316228, 1, 20};
		modes[] = {"Single", "AI_single", "FullAuto"};
		
		class Single : Mode_SemiAuto {
			fireLightDuration = 0.0;
			fireLightIntensity = 0.0;
			begin1[] = {"\vilas_aks\sounds\APSsds", 0.316228, 1, 200};
			soundBegin[] = {"begin1", 1};
		};
		class AI_Single : Mode_SemiAuto {
			fireLightDuration = 0.0;
			fireLightIntensity = 0.0;
			begin1[] = {"\vilas_aks\sounds\APSsds", 0.316228, 1, 200};
			soundBegin[] = {"begin1", 1};
			showtoplayer = 0;
		};
		class FullAuto : Mode_FullAuto {
			fireLightDuration = 0.0;
			fireLightIntensity = 0.0;
			begin1[] = {"\vilas_aks\sounds\APSsds", 0.316228, 1, 200};
			soundBegin[] = {"begin1", 1};
		};
		
		class Library {
			libTextDesc = $STR_TGW_VIL_APB_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		
		descriptionShort = $STR_TGW_VIL_APB_SHORT;
	};

	class Vil_PYA : Makarov {
		scope = public;
		model = "\vilas_aks\vil_pya";
		picture = "\vilas_aks\ico\w_vil_pya_ca.paa";
		midRange = 20;
		maxRangeProbab = 0.01;
		optics = true;
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		displayName = $STR_TGW_VIL_PYA;
		magazines[] = {"15Rnd_9x19_M9", "15Rnd_9x19_M9SD"};
		begin1[] = {"\vilas_aks\sounds\pya_fire1", 0.794328, 1, 700};
		soundBegin[] = {"begin1", 1};
		reloadMagazineSound[] = {"\vilas_aks\sounds\pya_reload", 0.1, 1, 20};
		class Library {
			libTextDesc = $STR_TGW_VIL_PYA_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_PYA_SHORT;
	};
