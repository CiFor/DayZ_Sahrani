#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7
#define VSoft		0
#define VArmor		1
#define VAir		2
#define private		0
#define protected		1
#define public		2
#define true	1
#define false	0
#define NoSlot 0
#define PrimaryWeapon 1
#define HandGun 2
#define SecondaryWeapon 4
#define HandGunMagazines 16
#define MainMagazines 256
#define BinocularSlot 4096



//class CfgWeapons
//{



class M16_base ;
class vil_D_C7 : M16_base {
picture = "\ca\Weapons\Data\equip\w_m4_ca.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";

displayName = "C7";
scope = 2;		
modes[] = {"Single", "FullAuto"};
model = "\dutch_pack\vil_c7";
weaponInfoType = "RscWeaponEmpty";
discreteDistance[] = {300};
discreteDistanceInitIndex = 0;
opticsZoomMax = 0.0732;
distanceZoomMax = 300;
opticsZoomMin = 0.0732;
distanceZoomMin = 300;
opticsZoomInit = 0.0732;
modelOptics = "\Ca\weapons_E\M249\M145.p3d";
afmax = 0;
htmax = 480;
htmin = 1;
mfact = 1;
mfmax = 0;
tbody = 100;
};
class vil_D_C8 : M16_base {
picture = "\ca\Weapons\Data\equip\w_m4_ca.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";

displayName = "C8";
scope = 2;		
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
modes[] = {"Single", "FullAuto"};
model = "\dutch_pack\vil_c8";
weaponInfoType = "RscWeaponEmpty";
discreteDistance[] = {300};
discreteDistanceInitIndex = 0;
opticsZoomMax = 0.0732;
distanceZoomMax = 300;
opticsZoomMin = 0.0732;
distanceZoomMin = 300;
opticsZoomInit = 0.0732;
modelOptics = "\Ca\weapons_E\M249\M145.p3d";
afmax = 0;
htmax = 480;
htmin = 1;
mfact = 1;
mfmax = 0;
tbody = 100;
};
class vil_D_416 : M16_base {
picture = "\ca\Weapons\Data\equip\w_m4_ca.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";

displayName = "HK 416 (Aimpoint)";
scope = 2;		
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
modes[] = {"Single", "FullAuto"};
model = "\dutch_pack\vil_hk416_aim";
weaponInfoType = "RscWeaponEmpty";
discreteDistance[] = {300};
discreteDistanceInitIndex = 0;

afmax = 0;
htmax = 480;
htmin = 1;
mfact = 1;
mfmax = 0;
tbody = 100;
};
class vil_D_416de : M16_base {
picture = "\ca\Weapons\Data\equip\w_m4_ca.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";

displayName = "HK 416 (Aimpoint, camo)";
scope = 2;		
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
modes[] = {"Single", "FullAuto"};
model = "\dutch_pack\vil_hk416_aim_camo";
weaponInfoType = "RscWeaponEmpty";
discreteDistance[] = {300};
discreteDistanceInitIndex = 0;

afmax = 0;
htmax = 480;
htmin = 1;
mfact = 1;
mfmax = 0;
tbody = 100;
};

class M16A2GL;
class vil_D_C7_AG : M16A2GL {
displayName = "C7 AG";
scope = 2;		
modes[] = {"Single", "FullAuto"};
model = "\dutch_pack\vil_c7_ag";
weaponInfoType = "RscWeaponEmpty";
discreteDistance[] = {300};
discreteDistanceInitIndex = 0;
opticsZoomMax = 0.0732;
distanceZoomMax = 300;
opticsZoomMin = 0.0732;
distanceZoomMin = 300;
opticsZoomInit = 0.0732;
modelOptics = "\Ca\weapons_E\M249\M145.p3d";
afmax = 0;
htmax = 480;
htmin = 1;
mfact = 1;
mfmax = 0;
tbody = 100;
};

