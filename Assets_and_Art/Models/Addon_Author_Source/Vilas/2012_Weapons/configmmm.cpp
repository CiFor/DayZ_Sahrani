#define private		0
#define protected		1
#define public		2

#define true	1
#define false	0

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7


class CfgPatches {
class VILAS_PL_Forces   {
	units[] = {"VIL_NOWE_POL"};
	requiredVersion = 1.0;
	   };
};

class CfgVehicleClasses
{
class VIL_polskie
{
displayName = "Polish Army (VIL)";
};
};

class CfgSkeletons
{
class VILAS_anim_gun {
isDiscrete = 0;
skeletonInherit = "";
skeletonBones[] = { "zamek", "", "magazine", ""};
};
class helicopter;
class p85_mi8_Skeleton : Helicopter
{
isDiscrete=1;

skeletonInherit="";
skeletonBones[]=
{
"velka_vrtule","",
"mala_vrtule","",
"damageHide","",
"hodinova", "", "kompas", "", "minutova", "", "alt", "", "horizont", "", "mph", "", "osa_alt", "", "osa_horizont", "", "osa_kompas", "", "osa_mph", "", "osa_time", "", "osa_vert_speed", "", "vert_speed", "", "otocvez", "", "otochlaven", "otocvez", "horizont_dive", "", "horizont", "horizont_dive", "horizont2_dive", "", "horizont2", "horizont2_dive", "alt", "", "mph", "", "vert_speed", "", "rpm", "", "kompas", "", "alt2", "", "mph2", "", "vert_speed2", "", "rpm2", "", "kompas2", "", "ukaz_radar", "" };
};

class Car;
class vil_polcarBones: Car
{
isDiscrete=1;
skeletonInherit = "";
skeletonBones[]=
{
"otocvez","",
"otochlaven","otocvez",
"otocvez_2","otocvez",
"otochlaven_2","otocvez_2",
"ukaz_fuel","",
"ukaz_rpm","",
"ukaz_rychlo","",
"pravy predni tlumic","",
"pravy predni","pravy predni tlumic",
"pravy dalsi tlumic","",
"pravy dalsi","pravy dalsi tlumic",
"pravy prostredni tlumic","",
"pravy prostredni","pravy prostredni tlumic",
"pravy zadni tlumic","",
"pravy zadni","pravy zadni tlumic",
"levy predni tlumic","",
"levy predni","levy predni tlumic",
"levy dalsi tlumic","",
"levy dalsi","levy dalsi tlumic",
"levy prostredni tlumic","",
"levy prostredni","levy prostredni tlumic",
"levy zadni tlumic","",
"levy zadni","levy zadni tlumic",
"volant","",
"damageHide","",
"damageVez","OtocVez",
"damageHlaven","OtocHlaven",
"damageVez_2","OtocVez_2",
"damageHlaven_2","OtocHlaven_2" };
};
class Tank;
class VIL_poltankBones: Tank
{
isDiscrete=1;
skeletonInherit = ""; //Inherit all bones from class Car.
skeletonBones[]=
{
"otocvez","",
"otochlaven","otocvez",
"otocvez_2","otocvez",
"otochlaven_2","otocvez_2",
"kolL1", "",
"kolL2", "",
"kolL3", "",
"kolL4", "",
"kolL5", "",
"kolL6", "",
"kolL7", "",
"kolL8", "",
"kolP1", "",
"kolP2", "",
"kolP3", "",
"kolP4", "",
"kolP5", "",
"kolP6", "",
"kolP7", "",
"kolP8", "",
"podkolol1", "",
"podkolol2", "",
"podkolol3", "",
"podkolol4", "",
"podkolol5", "",
"podkolol6", "",
"podkolol7", "",
"podkolol8", "",
"podkolop1", "",
"podkolop2", "",
"podkolop3", "",
"podkolop4", "",
"podkolop5", "",
"podkolop6", "",
"podkolop7", "",
"podkolop8", "",
"kolol1", "podkolol1",
"kolol2", "podkolol2",
"kolol3", "podkolol3",
"kolol4", "podkolol4",
"kolol5", "podkolol5",
"kolol6", "podkolol6",
"kolol7", "podkolol7",
"kolol8", "podkolol8",
"kolop1", "podkolop1",
"kolop2", "podkolop2",
"kolop3", "podkolop3",
"kolop4", "podkolop4",
"kolop5", "podkolop5",
"kolop6", "podkolop6",
"kolop7", "podkolop7",
"kolop8", "podkolop8",
"damageHide","",
"damageVez","OtocVez",
"damageHlaven","OtocHlaven",
"damageVez_2","OtocVez_2",
"damageHlaven_2","OtocHlaven_2",
"poklop_driver", "",
"poklop_commander","OtocVez_2",
"poklop_gunner","OtocVez" };
};
class VIL_poltank2000Bones: Tank
{
isDiscrete=1;
skeletonInherit = ""; //Inherit all bones from class Car.
skeletonBones[]=
{
"otocvez","",
"otochlaven","otocvez",
"otocvez_2","otocvez",
"otochlaven_2","otocvez_2",
"kolL1", "",
"kolL2", "",
"kolL3", "",
"kolL4", "",
"kolL5", "",
"kolL6", "",
"kolL7", "",
"kolL8", "",
"kolP1", "",
"kolP2", "",
"kolP3", "",
"kolP4", "",
"kolP5", "",
"kolP6", "",
"kolP7", "",
"kolP8", "",
"podkolol1", "",
"podkolol2", "",
"podkolol3", "",
"podkolol4", "",
"podkolol5", "",
"podkolol6", "",
"podkolol7", "",
"podkolol8", "",
"podkolop1", "",
"podkolop2", "",
"podkolop3", "",
"podkolop4", "",
"podkolop5", "",
"podkolop6", "",
"podkolop7", "",
"podkolop8", "",
"kolol1", "podkolol1",
"kolol2", "podkolol2",
"kolol3", "podkolol3",
"kolol4", "podkolol4",
"kolol5", "podkolol5",
"kolol6", "podkolol6",
"kolol7", "podkolol7",
"kolol8", "podkolol8",
"kolop1", "podkolop1",
"kolop2", "podkolop2",
"kolop3", "podkolop3",
"kolop4", "podkolop4",
"kolop5", "podkolop5",
"kolop6", "podkolop6",
"kolop7", "podkolop7",
"kolop8", "podkolop8",
"damageHide","",
"damageVez","OtocVez",
"damageHlaven","OtocHlaven",
"damageVez_2","OtocVez_2",
"damageHlaven_2","OtocHlaven_2",
"poklop_driver", "",
"poklop_commander","OtocVez",
"poklop_gunner","OtocVez" };
};
class VIL_polbmp1Bones: Tank
{
isDiscrete=1;
skeletonInherit = ""; //Inherit all bones from class Car.
skeletonBones[]=
{
"otocvez","",
"otochlaven","otocvez",
"otocvez_2","",
"otochlaven_2","otocvez_2",
"kolL1", "",
"kolL2", "",
"kolL3", "",
"kolL4", "",
"kolL5", "",
"kolL6", "",
"kolL7", "",
"kolL8", "",
"kolP1", "",
"kolP2", "",
"kolP3", "",
"kolP4", "",
"kolP5", "",
"kolP6", "",
"kolP7", "",
"kolP8", "",
"podkolol1", "",
"podkolol2", "",
"podkolol3", "",
"podkolol4", "",
"podkolol5", "",
"podkolol6", "",
"podkolol7", "",
"podkolol8", "",
"podkolop1", "",
"podkolop2", "",
"podkolop3", "",
"podkolop4", "",
"podkolop5", "",
"podkolop6", "",
"podkolop7", "",
"podkolop8", "",
"kolol1", "podkolol1",
"kolol2", "podkolol2",
"kolol3", "podkolol3",
"kolol4", "podkolol4",
"kolol5", "podkolol5",
"kolol6", "podkolol6",
"kolol7", "podkolol7",
"kolol8", "podkolol8",
"kolop1", "podkolop1",
"kolop2", "podkolop2",
"kolop3", "podkolop3",
"kolop4", "podkolop4",
"kolop5", "podkolop5",
"kolop6", "podkolop6",
"kolop7", "podkolop7",
"kolop8", "podkolop8",
"damageHide","",
"damageVez","OtocVez",
"damageHlaven","OtocHlaven",
"damageVez_2","OtocVez_2",
"damageHlaven_2","OtocHlaven_2",
"poklop_driver", "",
"poklop_commander","otocvez_2",
"poklop_gunner","OtocVez" };
};

class VIL_leowpxBones: Tank
{
isDiscrete=1;
skeletonInherit = ""; //Inherit all bones from class Car.
skeletonBones[]=
{
"otocvez","",
"otochlaven","otocvez",
"otocvelitele","otocvez",
"otochlavenvelitele","otocvelitele",
"otocvez_2","otocvez",
"otochlaven_2","otocvez_2",
"kolL1", "",
"kolL2", "",
"kolL3", "",
"kolL4", "",
"kolL5", "",
"kolL6", "",
"kolL7", "",
"kolL8", "",
"kolP1", "",
"kolP2", "",
"kolP3", "",
"kolP4", "",
"kolP5", "",
"kolP6", "",
"kolP7", "",
"kolP8", "",
"podkolol1", "",
"podkolol2", "",
"podkolol3", "",
"podkolol4", "",
"podkolol5", "",
"podkolol6", "",
"podkolol7", "",
"podkolol8", "",
"podkolop1", "",
"podkolop2", "",
"podkolop3", "",
"podkolop4", "",
"podkolop5", "",
"podkolop6", "",
"podkolop7", "",
"podkolop8", "",
"kolol1", "podkolol1",
"kolol2", "podkolol2",
"kolol3", "podkolol3",
"kolol4", "podkolol4",
"kolol5", "podkolol5",
"kolol6", "podkolol6",
"kolol7", "podkolol7",
"kolol8", "podkolol8",
"kolop1", "podkolop1",
"kolop2", "podkolop2",
"kolop3", "podkolop3",
"kolop4", "podkolop4",
"kolop5", "podkolop5",
"kolop6", "podkolop6",
"kolop7", "podkolop7",
"kolop8", "podkolop8",
"damageHide","",
"damageVez","OtocVez",
"damageHlaven","OtocHlaven",
"damageVez_2","OtocVelitele",
"damageHlaven_2","OtocHlavenvelitele",
"poklop_driver", "",
"poklop_commander","OtocVez",
"poklop_gunner","OtocVez" };
};

class Default
{
isDiscrete = 1;
skeletonInherit = "";
skeletonBones[] = {};
};

class Flag: Default {};
class FlagCarrier: Default
{
skeletonInherit = "Default";
skeletonBones[] =
{
"stozar","",
"vlajka",""
};
};
class Head
{
isDiscrete = 0;
skeletonInherit = "";
skeletonBones[] =
{
"neck","",
"neck1","neck",
"head","neck1",
"jaw","head",
"chin","head",
"jaw_rf","head",
"jaw_rm","head",
"jaw_rs","head",
"jaw_lf","head",
"jaw_lm","head",
"jaw_ls","head",
"ear_r","head",
"ear_l","head",
"lip_lc","head",
"lip_lwlb","head",
"lip_lwlf","head",
"lip_lwm","head",
"lip_lwrf","head",
"lip_lwrb","head",
"lip_rc","head",
"lip_uprb","head",
"lip_uprf","head",
"lip_upm","head",
"lip_uplf","head",
"lip_uplb","head",
"nose_tip","head",
"nose_r","head",
"nose_l","head",
"zig_lt","head",
"zig_lm","head",
"zig_lb","head",
"zig_rt","head",
"zig_rm","head",
"zig_rb","head",
"cheek_r","head",
"cheek_l","head",
"eyebrow_lb","head",
"eyebrow_lm","head",
"eyebrow_lf","head",
"corr","head",
"eyebrow_rf","head",
"eyebrow_rm","head",
"eyebrow_rb","head",
"eye_upr","head",
"eye_lwr","head",
"eye_upl","head",
"eye_lwl","head",
"cheek_rf","head",
"cheek_rm","head",
"cheek_rb","head",
"cheek_lf","head",
"cheek_lm","head",
"cheek_lb","head",
"forehead_l","head",
"forehead_m","head",
"forehead_r","head",
"l_eye","head",
"r_eye","head",
"l_pupila","head",
"r_pupila","head",
"neck_t","head",
"neck_b","head",
"neck_r","head",
"neck_l","head",
"tongue_b","head",
"tongue_m","head",
"tongue_f","head"
};
};
class OFP2_ManSkeleton
{
isDiscrete = 0;
skeletonInherit = "";
skeletonBones[] =
{
"Pelvis","",
"Spine","Pelvis",
"Spine1","Spine",
"Spine2","Spine1",
"Spine3","Spine2",
"Camera","Pelvis",
"weapon","Spine1",
"launcher","Spine1",
//Head skeleton in hierarchy
"neck","Spine3",
"neck1","neck",
"head","neck1",
"HeadCutScene","head",
"jaw","head",
"chin","head",
"jaw_rf","head",
"jaw_rm","head",
"jaw_rs","head",
"jaw_lf","head",
"jaw_lm","head",
"jaw_ls","head",
"ear_r","head",
"ear_l","head",
"lip_lc","head",
"lip_lwlb","head",
"lip_lwlf","head",
"lip_lwm","head",
"lip_lwrf","head",
"lip_lwrb","head",
"lip_rc","head",
"lip_uprb","head",
"lip_uprf","head",
"lip_upm","head",
"lip_uplf","head",
"lip_uplb","head",
"nose_tip","head",
"nose_r","head",
"nose_l","head",
"zig_lt","head",
"zig_lm","head",
"zig_lb","head",
"zig_rt","head",
"zig_rm","head",
"zig_rb","head",
"cheek_r","head",
"cheek_l","head",
"eyebrow_lb","head",
"eyebrow_lm","head",
"eyebrow_lf","head",
"corr","head",
"eyebrow_rf","head",
"eyebrow_rm","head",
"eyebrow_rb","head",
"eye_upr","head",
"eye_lwr","head",
"eye_upl","head",
"eye_lwl","head",
"cheek_rf","head",
"cheek_rm","head",
"cheek_rb","head",
"cheek_lf","head",
"cheek_lm","head",
"cheek_lb","head",
"forehead_l","head",
"forehead_m","head",
"forehead_r","head",
"l_eye","head",
"r_eye","head",
"l_pupila","head",
"r_pupila","head",
"neck_t","head",
"neck_b","head",
"neck_r","head",
"neck_l","head",
"tongue_b","head",
"tongue_m","head",
"tongue_f","head",
//Left upper side
"LeftShoulder","Spine3",
"LeftArm","LeftShoulder",
"LeftArmRoll","LeftArm",
"LeftForeArm","LeftArmRoll",
"LeftForeArmRoll","LeftForeArm",
"LeftHand","LeftForeArmRoll",
"LeftHandRing","LeftHand",
"LeftHandRing1","LeftHandRing",
"LeftHandRing2","LeftHandRing1",
"LeftHandRing3","LeftHandRing2",
"LeftHandPinky1","LeftHandRing",
"LeftHandPinky2","LeftHandPinky1",
"LeftHandPinky3","LeftHandPinky2",
"LeftHandMiddle1","LeftHand",
"LeftHandMiddle2","LeftHandMiddle1",
"LeftHandMiddle3","LeftHandMiddle2",
"LeftHandIndex1","LeftHand",
"LeftHandIndex2","LeftHandIndex1",
"LeftHandIndex3","LeftHandIndex2",
"LeftHandThumb1","LeftHand",
"LeftHandThumb2","LeftHandThumb1",
"LeftHandThumb3","LeftHandThumb2",
//Right upper side
"RightShoulder","Spine3",
"RightArm","RightShoulder",
"RightArmRoll","RightArm",
"RightForeArm","RightArmRoll",
"RightForeArmRoll","RightForeArm",
"RightHand","RightForeArmRoll",
"RightHandRing","RightHand",
"RightHandRing1","RightHandRing",
"RightHandRing2","RightHandRing1",
"RightHandRing3","RightHandRing2",
"RightHandPinky1","RightHandRing",
"RightHandPinky2","RightHandPinky1",
"RightHandPinky3","RightHandPinky2",
"RightHandMiddle1","RightHand",
"RightHandMiddle2","RightHandMiddle1",
"RightHandMiddle3","RightHandMiddle2",
"RightHandIndex1","RightHand",
"RightHandIndex2","RightHandIndex1",
"RightHandIndex3","RightHandIndex2",
"RightHandThumb1","RightHand",
"RightHandThumb2","RightHandThumb1",
"RightHandThumb3","RightHandThumb2",
//Left lower side
"LeftUpLeg","Pelvis",
"LeftUpLegRoll","LeftUpLeg",
"LeftLeg","LeftUpLegRoll",
"LeftLegRoll","LeftLeg",
"LeftFoot","LeftLegRoll",
"LeftToeBase","LeftFoot",
//Right lower side
"RightUpLeg","Pelvis",
"RightUpLegRoll","RightUpLeg",
"RightLeg","RightUpLegRoll",
"RightLegRoll","RightLeg",
"RightFoot","RightLegRoll",
"RightToeBase","RightFoot"
};
// location of pivot points (local axes) for hierarchical animation
pivotsModel="";
};

};

class CfgModels {
class Default
{
sectionsInherit="";
sections[] = {};
skeletonName = "";
};
class Head: Default
{
sections[] =
		{
			"osobnost",
			"brejle"
		};
skeletonName = "Head";
};
class ArmaMan : Default
{
sections[] =
{
		"osobnost","Head_Injury","Body_Injury","l_leg_injury","l_arm_injury","r_arm_injury","r_leg_injury",
		"clan","clan_sign","Camo","CamoB", "camo01", "camo02", "camo03"
};
skeletonName = "OFP2_ManSkeleton";
};
class vil_soldier_nth: Armaman {};
class vil_soldier_nth_des: Armaman {};
class vil_soldier_nth_beret: Armaman {};
class vil_soldier_nth_crew: Armaman {};
};
