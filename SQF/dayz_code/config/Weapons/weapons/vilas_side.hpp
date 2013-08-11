class M9;
class M9SD;
class glock17_EP1;
class Colt1911;

class vil_BHP : M9 {
	scope = public;
	model = "\vilas_wwp\vil_bhp";
	displayName = $STR_VIL_BHP;
	magazines[] = {"15Rnd_9x19_M9","15Rnd_9x19_M9SD"};
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {50, 100, 200, 300, 400, 500};
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
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {25, 50, 75, 100};
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
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {25, 50, 75, 100};
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
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {25, 50, 75, 100};
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
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {25, 50, 75, 100};
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