class BAF_AS50_scoped;
class BAF_AS50_scoped_DZ : BAF_AS50_scoped {
	type = "1";
	canlock = 0;
	cursor = "RifleCursor";
};

class ksvk;	// External class reference
class ksvk_DZ	: ksvk {
	type = "1";
	canlock = 0;
	cursor = "RifleCursor";
};

class RifleCore;	// External class reference
class M107_DZ : RifleCore {
	irLaserPos = "laser pos";
	irLaserEnd = "laser dir";
	irDistance = 0;
	htMin = 1;
	htMax = 600;
	afMax = 0;
	mfMax = 0;
	mFact = 1;
	tBody = 100;
	scope = public;
	type = 1;
	model = "\ca\weapons\m107\m107";
	picture = "\CA\weapons\data\Equip\W_m107_CA.paa";
	UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
	magazines[] = {"10Rnd_127x99_m107"};
	dexterity = 0.45;
	modelOptics = "\ca\Weapons\2Dscope_MilDot_14";
	opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
	opticsFlare = true;
	opticsDisablePeripherialVision = true;
	opticsZoomInit = 0.0553;
	opticsZoomMin = 0.0178;
	distanceZoomMin = 500;
	opticsZoomMax = 0.0553;
	distanceZoomMax = 200;
	displayname = $STR_DN_M107;
	autoFire = false;
	begin1[] = {"ca\sounds\weapons\rifles\m107", 2.51189, 1, 1300};
	soundBegin[] = {"begin1", 1};
	reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-m16-2", 0.0316228, 1, 20};
	reloadTime = 0.5;
	dispersion = 0.0005;
	minRange = 0;
	minRangeProbab = 0.1;
	midRange = 1200;
	midRangeProbab = 0.7;
	maxRange = 1800;
	maxRangeProbab = 0.05;
	recoil = "recoil_single_primary_9outof10";
	recoilProne = "recoil_single_primary_prone_7outof10";

	canlock = 0;
	cursor = "RifleCursor";
	cursoraim = "Foresight";
	
	class Library {
		libTextDesc = $STR_LIB_M107;
	};
	descriptionShort = $STR_DSS_M107;
};
class Rifle;	// External class reference
class GrenadeLauncher_EP1: Rifle
{
	magazines[]=
	{
		"1Rnd_HE_M203",
		"FlareWhite_M203",
		"FlareGreen_M203",
		"FlareRed_M203",
		"FlareYellow_M203",
		"1Rnd_Smoke_M203",
		"1Rnd_SmokeRed_M203",
		"1Rnd_SmokeGreen_M203",
		"1Rnd_SmokeYellow_M203"
	};
	begin1[]=
	{
		"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_1",
		1,
		1,
		200
	};
	soundBegin[]=
	{
		"begin1",
		1
	};
	reloadMagazineSound[]=
	{
		"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_reload",
		1,
		1,
		30
	};
	drySound[]=
	{
		"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_dry",
		1.1220185,
		1,
		40
	};
	magazineReloadTime=3;
	reloadTime=1;
	optics=1;
	modelOptics="-";
	cameraDir="GL look";
	memoryPointCamera="GL eye";
	opticsZoomMin=0.30000001;
	opticsZoomMax=1;
	opticsZoomInit=0.5;
	cursor="GLCursor";
	cursorAim="\ca\Weapons\Data\clear_empty";
	cursorSize=4;
	value=3;
	reloadAction="ManActReloadMagazine";
	initSpeed=75;
	canLock=0;
	autoReload=0;
	autoAimEnabled=0;
	ffMagnitude=0.1;
	ffFrequency=1;
	ffCount=1;
	recoil="M240Recoil";
	dispersion=0.0070000002;
	aiDispersionCoefY=6;
	maxLeadSpeed=15;
	muzzlePos="usti granatometu";
	muzzleEnd="konec granatometu";
	cartridgePos="";
	cartridgeVel="";
	minRange=30;
	minRangeProbab=0.1;
	midRange=200;
	midRangeProbab=0.69999999;
	maxRange=400;
	maxRangeProbab=0.050000001;
	UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
};
class M32_DZ: GrenadeLauncher_EP1
{
	htMin=1;
	htMax=600;
	afMax=0;
	mfMax=0;
	mFact=1;
	tBody=100;
	scope=2;
	model="\ca\weapons_E\GrenadeLauncher\M32";
	handAnim[]=
	{
		"OFP2_ManSkeleton",
		"\Ca\weapons_E\Data\Anim\M32.rtm"
	};
	picture="\ca\weapons_E\Data\icons\m32_CA.paa";
	displayName="$STR_EP1_DN_M32_EP1";
	class Library
	{
		libTextDesc="$STR_EP1_LIB_M32_EP1";
	};
	descriptionShort="$STR_EP1_DSS_M32_EP1";
	magazines[]=
	{
		"1Rnd_HE_M203",
		"FlareWhite_M203",
		"FlareGreen_M203",
		"FlareRed_M203",
		"FlareYellow_M203",
		"1Rnd_Smoke_M203",
		"1Rnd_SmokeRed_M203",
		"1Rnd_SmokeGreen_M203",
		"1Rnd_SmokeYellow_M203"
	};
	reloadTime=0.5;
};
class M79_DZ: GrenadeLauncher_EP1
{
	htMin=1;
	htMax=600;
	afMax=0;
	mfMax=0;
	mFact=1;
	tBody=100;
	scope=2;
	model="\ca\weapons_E\GrenadeLauncher\M79";
	handAnim[]=
	{
		"OFP2_ManSkeleton",
		"\Ca\weapons_E\Data\Anim\M79.rtm"
	};
	picture="\ca\weapons_E\Data\icons\m79_CA.paa";
	displayName="$STR_EP1_DN_M79_EP1";
	class Library
	{
		libTextDesc="$STR_EP1_LIB_M79_EP1";
	};
	descriptionShort="$STR_EP1_DSS_M79_EP1";
};
class Mk13_DZ: GrenadeLauncher_EP1
{
	scope=2;
	model="\ca\weapons_E\GrenadeLauncher\MK13";
	handAnim[]=
	{
		"OFP2_ManSkeleton",
		"\Ca\weapons_E\Data\Anim\MK13.rtm"
	};
	picture="\ca\weapons_E\Data\icons\mk13_CA.paa";
	displayName="$STR_EP1_DN_Mk13_EP1";
	class Library
	{
		libTextDesc="$STR_EP1_LIB_Mk13_EP1";
	};
	descriptionShort="$STR_EP1_DSS_Mk13_EP1";
};	

class Makarov;
class MakarovSD : Makarov {
	model = "\ca\weapons\makarov_silenced";
	fireLightDuration = 0.0;
	fireLightIntensity = 0.0;
	displayName = $STR_DN_MAKAROVSD;
	picture = "\CA\weapons\data\equip\w_makarovSD_ca.paa";
	begin1[] = {"ca\sounds\weapons\pistols\makarovSD_single1", 0.316228, 1, 200};
	soundBegin[] = {"begin1", 1};
	reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\pistol_reload", 0.0316228, 1, 20};
	minRange = 0;
	minRangeProbab = 0.1;
	midRange = 15;
	midRangeProbab = 0.3;
	maxRange = 20;
	maxRangeProbab = 0.04;
	magazines[] = {"8Rnd_9x18_MakarovSD", "8Rnd_9x18_Makarov"};
	
	class Library {
		libTextDesc = $STR_LIB_MAKAROVSD;
	};
	descriptionShort = $STR_DSS_MAKAROVSD;
};

	class PK_DZ : Rifle {
	bullet1[] = {"ca\sounds\weapons\shells\big_shell_metal_01", 0.177828, 1, 15};
	bullet2[] = {"ca\sounds\weapons\shells\big_shell_metal_03", 0.177828, 1, 15};
	bullet3[] = {"ca\sounds\weapons\shells\big_shell_metal_02", 0.177828, 1, 15};
	bullet4[] = {"ca\sounds\weapons\shells\big_shell_metal_01", 0.177828, 1, 15};
	bullet5[] = {"ca\sounds\weapons\shells\big_shell_dirt_01", 0.316228, 1, 15};
	bullet6[] = {"ca\sounds\weapons\shells\big_shell_dirt_02", 0.316228, 1, 15};
	bullet7[] = {"ca\sounds\weapons\shells\big_shell_dirt_03", 0.316228, 1, 15};
	bullet8[] = {"ca\sounds\weapons\shells\big_shell_dirt_04", 0.316228, 1, 15};
	bullet9[] = {"ca\sounds\weapons\shells\big_shell_soft_01", 0.177828, 1, 15};
	bullet10[] = {"ca\sounds\weapons\shells\big_shell_soft_02", 0.177828, 1, 15};
	bullet11[] = {"ca\sounds\weapons\shells\big_shell_soft_03", 0.177828, 1, 15};
	bullet12[] = {"ca\sounds\weapons\shells\big_shell_soft_04", 0.177828, 1, 15};
	soundBullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
	scope = public;
	model = "\ca\weapons\PK_MG_proxy";
	displayName = $STR_DN_PK;
	dexterity = 0.96;
	picture = "\CA\weapons\data\equip\w_pk_ca.paa";
	UiPicture = "\CA\weapons\data\Ico\i_mg_CA.paa";
	cursor = "MGCursor";
	cursoraim = "\ca\Weapons\Data\clear_empty";
	reloadMagazineSound[] = {"\Ca\sounds\Weapons\rifles\reload-belt-1", 0.0562341, 1, 20};
	modes[] = {"manual", "close", "short", "medium", "far"};
	
	class manual : Mode_FullAuto {
		reloadTime = 0.09;
		recoil = "recoil_auto_machinegun_8outof10";
		recoilProne = "recoil_auto_machinegun_prone_5outof10";
		dispersion = 0.001;
		begin1[] = {"ca\sounds\weapons\machineguns\PKM_single2", 1.41254, 1, 1200};
		begin2[] = {"ca\sounds\weapons\machineguns\PKM_single3", 1.41254, 1, 1200};
		soundBegin[] = {"begin1", 0.3, "begin2", 0.7};
		soundContinuous = 0;
		soundBurst = 0;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 5;
		midRangeProbab = 0.58;
		maxRange = 10;
		maxRangeProbab = 0.04;
		showToPlayer = true;
	};
	
	class close : manual {
		burst = 10;
		aiRateOfFire = 0.5;	// delay between shots at given distance
		aiRateOfFireDistance = 50;
		minRange = 10;
		minRangeProbab = 0.05;
		midRange = 20;
		midRangeProbab = 0.58;
		maxRange = 50;
		maxRangeProbab = 0.04;
		showToPlayer = false;
	};
	
	class short : close {
		burst = 8;
		aiRateOfFire = 2;	// delay between shots at given distance
		aiRateOfFireDistance = 300;
		minRange = 50;
		minRangeProbab = 0.05;
		midRange = 150;
		midRangeProbab = 0.58;
		maxRange = 300;
		maxRangeProbab = 0.04;
	};
	
	class medium : close {
		burst = 12;
		aiRateOfFire = 3;	// delay between shots at given distance
		aiRateOfFireDistance = 600;
		minRange = 200;
		minRangeProbab = 0.05;
		midRange = 400;
		midRangeProbab = 0.58;
		maxRange = 600;
		maxRangeProbab = 0.04;
	};
	
	class far : close {
		burst = 16;
		aiRateOfFire = 5;	// delay between shots at given distance
		aiRateOfFireDistance = 1000;
		minRange = 400;
		minRangeProbab = 0.05;
		midRange = 600;
		midRangeProbab = 0.4;
		maxRange = 900;
		maxRangeProbab = 0.01;
	};
	aiDispersionCoefY = 21.0;
	aiDispersionCoefX = 21.0;
	type = 1	 + 	4;
	magazines[] = {"100Rnd_762x54_PK"};
	
	class Library {
		libTextDesc = $STR_LIB_PK;
	};
	descriptionShort = $STR_DSS_PK;
};

class Pecheneg_DZ : PK_DZ {
	model = "\ca\weapons\Pecheneg_MG_proxy";
	displayName = $STR_DN_PECHENEG;
	dexterity = 0.7;
	picture = "\CA\weapons\data\equip\w_pecheneg_mg_ca.paa";
	modelOptics = "\ca\weapons\2Dscope_Pecheneg";
	opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur3"};
	opticsFlare = true;
	opticsDisablePeripherialVision = true;
	opticsZoomInit = 0.0623;
	opticsZoomMin = 0.0623;
	opticsZoomMax = 0.0623;
	distanceZoomMin = 300;
	distanceZoomMax = 300;
	modes[] = {"manual", "close", "short", "medium", "far"};
	
	class manual : manual {
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 5;
		midRangeProbab = 0.58;
		maxRange = 10;
		maxRangeProbab = 0.04;
	};
	
	class close : close {
		minRange = 10;
		minRangeProbab = 0.05;
		midRange = 20;
		midRangeProbab = 0.58;
		maxRange = 50;
		maxRangeProbab = 0.04;
	};
	
	class short : short {
		minRange = 50;
		minRangeProbab = 0.05;
		midRange = 200;
		midRangeProbab = 0.58;
		maxRange = 400;
		maxRangeProbab = 0.04;
	};
	
	class medium : medium {
		minRange = 200;
		minRangeProbab = 0.05;
		midRange = 400;
		midRangeProbab = 0.58;
		maxRange = 600;
		maxRangeProbab = 0.04;
	};
	
	class far : far {
		minRange = 400;
		minRangeProbab = 0.05;
		midRange = 600;
		midRangeProbab = 0.4;
		maxRange = 1000;
		maxRangeProbab = 0.01;
	};
	
	class Library {
		libTextDesc = $STR_LIB_PECHENEG;
	};
	descriptionShort = $STR_DSS_PECHENEG;
};

class M60A4_EP1 : Rifle {
	bullet1[] = {"ca\sounds\weapons\shells\big_shell_metal_01", 0.0707946, 1, 15};
	bullet2[] = {"ca\sounds\weapons\shells\big_shell_metal_03", 0.0707946, 1, 15};
	bullet3[] = {"ca\sounds\weapons\shells\big_shell_metal_02", 0.0707946, 1, 15};
	bullet4[] = {"ca\sounds\weapons\shells\big_shell_metal_01", 0.0707946, 1, 15};
	bullet5[] = {"ca\sounds\weapons\shells\big_shell_dirt_01", 0.0707946, 1, 15};
	bullet6[] = {"ca\sounds\weapons\shells\big_shell_dirt_02", 0.0707946, 1, 15};
	bullet7[] = {"ca\sounds\weapons\shells\big_shell_dirt_03", 0.0707946, 1, 15};
	bullet8[] = {"ca\sounds\weapons\shells\big_shell_dirt_04", 0.0707946, 1, 15};
	bullet9[] = {"ca\sounds\weapons\shells\big_shell_soft_01", 0.0707946, 1, 15};
	bullet10[] = {"ca\sounds\weapons\shells\big_shell_soft_02", 0.0707946, 1, 15};
	bullet11[] = {"ca\sounds\weapons\shells\big_shell_soft_03", 0.0707946, 1, 15};
	bullet12[] = {"ca\sounds\weapons\shells\big_shell_soft_04", 0.0707946, 1, 15};
	soundBullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
	tMin = 1;
	htMax = 600;
	afMax = 0;
	mfMax = 0;
	mFact = 1;
	tBody = 100;
	scope = public;
	model = "\ca\weapons_e\m60e4\m60e4";
	picture = "\ca\weapons_E\Data\icons\m60e4_CA.paa";
	handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons_E\Data\Anim\M60E4.rtm"};
	UiPicture = "\CA\weapons\Data\Ico\i_mg_CA.paa";
	displayName = $STR_EP1_DN_M60A4_EP1;
	cursor = "MGCursor";
	cursoraim = "\ca\Weapons\Data\clear_empty";
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
	discreteDistanceInitIndex = 2;
	modes[] = {"manual", "close", "short", "medium", "far"};
	
	class manual : Mode_FullAuto {
		recoil = "recoil_auto_machinegun_8outof10";
		recoilProne = "recoil_auto_machinegun_prone_5outof10";
		dispersion = 0.0008;
		begin1[] = {"Ca\Sounds_E\Weapons_E\M60e4\m60e4_single1", 3.16228, 1, 1500};
		soundBegin[] = {"begin1", 1};
		soundContinuous = 0;
		soundBurst = 0;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 5;
		midRangeProbab = 0.58;
		maxRange = 10;
		maxRangeProbab = 0.04;
		showToPlayer = true;
		reloadTime = 0.086;
		displayName = "";
	};
	
	class close : manual {
		burst = 10;
		aiRateOfFire = 0.5;	// delay between shots at given distance
		aiRateOfFireDistance = 50;
		minRange = 10;
		minRangeProbab = 0.05;
		midRange = 20;
		midRangeProbab = 0.58;
		maxRange = 50;
		maxRangeProbab = 0.04;
		showToPlayer = false;
	};
	
	class short : close {
		burst = 8;
		aiRateOfFire = 2;	// delay between shots at given distance
		aiRateOfFireDistance = 300;
		minRange = 50;
		minRangeProbab = 0.05;
		midRange = 150;
		midRangeProbab = 0.58;
		maxRange = 300;
		maxRangeProbab = 0.04;
	};
	
	class medium : close {
		burst = 12;
		aiRateOfFire = 3;	// delay between shots at given distance
		aiRateOfFireDistance = 600;
		minRange = 200;
		minRangeProbab = 0.05;
		midRange = 400;
		midRangeProbab = 0.58;
		maxRange = 600;
		maxRangeProbab = 0.04;
	};
	
	class far : close {
		burst = 16;
		aiRateOfFire = 5;	// delay between shots at given distance
		aiRateOfFireDistance = 1000;
		minRange = 400;
		minRangeProbab = 0.05;
		midRange = 600;
		midRangeProbab = 0.4;
		maxRange = 900;
		maxRangeProbab = 0.01;
	};
	aiDispersionCoefY = 21.0;
	aiDispersionCoefX = 21.0;
	dexterity = 0.51;
	type = 1	 + 	4;
	reloadMagazineSound[] = {"Ca\Sounds_E\Weapons_E\M60e4\M60e4_reload", 0.0562341, 1, 25};
	magazines[] = {"100Rnd_762x51_M240"};
	
	class Library {
		libTextDesc = $STR_EP1_LIB_M60A4;
	};
	descriptionShort = $STR_EP1_DSS_M60A4_EP1;
};