#define private		0
#define protected		1
#define public		2
#define true	1
#define false	0
#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown	4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7
class CfgSkeletons
{
class Default
	{
		isDiscrete = 1;
		skeletonInherit = "";
		skeletonBones[] = {};
	};
	class vil_aifvSkeleton: Default
	{
		isDiscrete=1;
		skeletonInherit="Default";
		skeletonBones[]=
		{
			//"cargoShake","",
			"damageHide","",
	  
			//turret
			"OtocVez","",
			"OtocHlaven","OtocVez",
			"damageVez","OtocVez",
			//"hodinova","",
			//"MG_barrel","OtocHlaven",
			//"minutova","",
			"gunRecoil","OtocHlaven",
			"ammo_belt","OtocHlaven",
			"OtocHlavenVelitele","OtocVelitele",
			"OtocVelitele","OtocVez",
			"otocHlavenSlave","OtocVez",
			"hatchGunner","otocVez",
			"turret_shake","otocVez",
	  
			"seat_driver","",
			"driver_seat","seat_driver",

			"hatchDriver","",
			"hatchCommander","",

			/*"antenna1","otocvez",
			"antenna2","otocvez",
			"antenna3",
			"antenna4",*/

			//Wheels
			"kolL1","",
			"kolL2","",
			"kolL3","",
			"kolL4","",
			"kolL5","",
			"kolL6","",
			"kolL7","",
			"kolL8","",
			"koloL1","podkoloL1",
			"koloL2","podkoloL2",
			"koloL3","podkoloL3",
			"koloL4","podkoloL4",
			"koloL5","podkoloL5",
			"koloL6","podkoloL6",
			"koloL7","podkoloL7",
			"koloL8","podkoloL8",
			"koloP1","podkoloP1",
			"koloP2","podkoloP2",
			"koloP3","podkoloP3",
			"koloP4","podkoloP4",
			"koloP5","podkoloP5",
			"koloP6","podkoloP6",
			"koloP7","podkoloP7",
			"koloP8","podkoloP8",
			"kolP1","",
			"kolP2","",
			"kolP3","",
			"kolP4","",
			"kolP5","",
			"kolP6","",
			"kolP7","",
			"kolP8","",
			"podkoloL1","",
			"podkoloL1_hide","podkoloL1",
			"podkoloL2","",
			"podkoloL2_hide","podkoloL2",
			"podkoloL3","",
			"podkoloL3_hide","podkoloL3",
			"podkoloL4","",
			"podkoloL4_hide","podkoloL4",
			"podkoloL5","",
			"podkoloL5_hide","podkoloL5",
			"podkoloL6","",
			"podkoloL6_hide","podkoloL6",
			"podkoloL7","",
			"podkoloL7_hide","podkoloL7",
			"podkoloL8","",
			"podkoloL8_hide","podkoloL8",
			"podkoloP1","",
			"podkoloP1_hide","podkoloP1",
			"podkoloP2","",
			"podkoloP2_hide","podkoloP2",
			"podkoloP3","",
			"podkoloP3_hide","podkoloP3",
			"podkoloP4","",
			"podkoloP4_hide","podkoloP4",
			"podkoloP5","",
			"podkoloP5_hide","podkoloP5",
			"podkoloP6","",
			"podkoloP6_hide","podkoloP6",
			"podkoloP7","",
			"podkoloP7_hide","podkoloP7",
			"podkoloP8","",
			"podkoloP8_hide","podkoloP8",


			//instruments
			"kompas",""


			/*"levy dalsi","",
			"levy predni","",
			"levy prostredni","",
			"levy zadni","",
			"pravy dalsi","",
			"pravy predni","",
			"pravy prostredni","",
			"pravy zadni","",*/

			//"seat_commander","otocvez",
			//"seat_driver","",
			//"seat_gunner","otocvez",
			//"sight_cover_L","turret_shake",
			//"sight_cover_R","turret_shake",
			//"sight_cover_top","turret_shake",
			//"ukaz_radar","",
			//"ukaz_rpm","",
			//"ukaz_rychlo","",
			//"ukaz_rychlo2","",
			//"ukazsmer",""
		};
	};

class vil_cv90Skeleton: Default
	{
		isDiscrete=1;
		skeletonInherit="Default";
		skeletonBones[]=
		{
			"cargoShake","",
			"damageHide","",

			//turret
			"OtocVez","",
			"OtocHlaven","OtocVez",
			"damageVez","OtocVez",
			//"hodinova","",
			"MG_barrel","OtocHlaven",
			//"minutova","",
			"gunRecoil","OtocHlaven",
			"OtocHlavenVelitele","OtocVelitele",
			"OtocVelitele","OtocVez",
			"otocHlavenSlave","OtocVez",
			"hatchCommander","OtocVez",
			"hatchGunner","otocVez",
			"turret_shake","otocVez",

			"hatchDriver","",

			/*"antenna1","otocvez",
			"antenna2","otocvez",
			"antenna3",
			"antenna4",*/

			//Wheels
			"kolL1","",
			"kolL2","",
			"kolL3","",
			"kolL4","",
			"kolL5","",
			"kolL6","",
			"kolL7","",
			"kolL8","",
			"koloL1","podkoloL1",
			"koloL2","podkoloL2",
			"koloL3","podkoloL3",
			"koloL4","podkoloL4",
			"koloL5","podkoloL5",
			"koloL6","podkoloL6",
			"koloL7","podkoloL7",
			"koloL8","podkoloL8",
			"koloP1","podkoloP1",
			"koloP2","podkoloP2",
			"koloP3","podkoloP3",
			"koloP4","podkoloP4",
			"koloP5","podkoloP5",
			"koloP6","podkoloP6",
			"koloP7","podkoloP7",
			"koloP8","podkoloP8",
			"kolP1","",
			"kolP2","",
			"kolP3","",
			"kolP4","",
			"kolP5","",
			"kolP6","",
			"kolP7","",
			"kolP8","",
			"podkoloL1","",
			"podkoloL1_hide","podkoloL1",
			"podkoloL2","",
			"podkoloL2_hide","podkoloL2",
			"podkoloL3","",
			"podkoloL3_hide","podkoloL3",
			"podkoloL4","",
			"podkoloL4_hide","podkoloL4",
			"podkoloL5","",
			"podkoloL5_hide","podkoloL5",
			"podkoloL6","",
			"podkoloL6_hide","podkoloL6",
			"podkoloL7","",
			"podkoloL7_hide","podkoloL7",
			"podkoloL8","",
			"podkoloL8_hide","podkoloL8",
			"podkoloP1","",
			"podkoloP1_hide","podkoloP1",
			"podkoloP2","",
			"podkoloP2_hide","podkoloP2",
			"podkoloP3","",
			"podkoloP3_hide","podkoloP3",
			"podkoloP4","",
			"podkoloP4_hide","podkoloP4",
			"podkoloP5","",
			"podkoloP5_hide","podkoloP5",
			"podkoloP6","",
			"podkoloP6_hide","podkoloP6",
			"podkoloP7","",
			"podkoloP7_hide","podkoloP7",
			"podkoloP8","",
			"podkoloP8_hide","podkoloP8",

			//instruments
			"kompas","",

			/*"levy dalsi","",
			"levy predni","",
			"levy prostredni","",
			"levy zadni","",
			"pravy dalsi","",
			"pravy predni","",
			"pravy prostredni","",
			"pravy zadni","",*/
			
			"seat_gunner","otocvez",
			"seat_commander","otocvez",
			"seat_driver",""
			
			//"seat_driver",""
			//"driver_seat","seat_driver",
			
			//"sight_cover_L","turret_shake",
			//"sight_cover_R","turret_shake",
			//"sight_cover_top","turret_shake",
			//"ukaz_radar","",
			//"ukaz_rpm","",
			//"ukaz_rychlo","",
			//"ukaz_rychlo2","",
			//"ukazsmer",""
		};
	};










};
class CfgModels
{

class Default
	{
		sectionsInherit="";
		sections[] = {};
		skeletonName = "";
	};
	class Tank;
	class vil_aifv_med: Tank
	{
		sectionsInherit="";
		sections[] =
		{
			"brzdove svetlo",
			"cislo",
			"clan",
			"clan_sign",
			"grupa",
			"L svetlo",
			"Light_1_1",
			"Light_1_2",
			"light_back",
			"light_brake",
			"motor",
			"P svetlo",
			"pas_L",
			"pas_P",
			"PasOffsetL",
			"PasOffsetP",
			"podsvit pristroju",
			"poskozeni",
			"sektor",
			"side",
			"telo",
			"Texture",
			"vez",
			"zadni svetlo",
			"zasleh",
			"zbran",
			"zbytek"
		};
		skeletonName = "vil_aifvSkeleton";
		
		class Animations
		{
			//Non-wheel Damage
			class damageHide
			{
				type="hide";
				source="damage";
				selection="damageHide";
			};
			class damageVez: damageHide
			{
				selection="damageVez";
			};
		  
			//hatch
			class HatchDriver
			{
				type="rotation";
				source="hatchDriver";
				selection="hatchDriver";
				axis="hatchDriver_axis";
				animPeriod=0;
				angle0=0;
				angle1="rad -100";
				//angle1="rad 40";
			};      
			class HatchCommander: HatchDriver
			{
				source="hatchCommander";
				selection="hatchCommander";
				axis="hatchCommander_axis";
			};      
			class HatchGunner: HatchDriver
			{
				source="hatchGunner";
				selection="hatchGunner";
				axis="hatchGunner_axis";
			};
			/*//Antenna animations
			//rotation based on Damper
			class Antenna1_rotate
			{
				type="Rotation";
				source="damper";
				selection="antenna1";
				axis="antenna1_axis";
				memory="true";
				animPeriod=0;
				minValue=-0.5;
				maxValue=0.5;
				angle0="rad -30";
				angle1="rad 30";
			};	  
			class Antenna2_rotate: Antenna1_rotate
			{
				selection="antenna2";
				axis="antenna2_axis";
			};	  
			class Antenna3_rotate: Antenna1_rotate
			{
				selection="antenna3";
				axis="antenna3_axis";
			};	  
			class Antenna4_rotate: Antenna1_rotate
			{
				selection="antenna4";
				axis="antenna4_axis";
			};*/

			//Instruments (unused)  
			/*class IndicatorSpeed
			{
				type="rotation";
				source="speed";
				selection="ukaz_rychlo";
				axis="osa_rychlo";
				memory="false";
				animPeriod=0;
				minValue=0;
				maxValue=16.670000;
				angle0=0;
				angle1="rad -240";
			};
			class IndicatorSpeed2
			{
				type="rotation";
				source="speed";
				selection="ukaz_rychlo2";
				axis="osa_rychlo2";
				memory="false";
				animPeriod=0;
				minValue=0;
				maxValue=16.670000;
				angle0=0;
				angle1="rad -240";
			};
			class IndicatorRPM
			{
				type="rotation";
				source="rpm";
				selection="ukaz_rpm";
				axis="osa_rpm";
				memory="false";
				animPeriod=0;
				minValue=0;
				maxValue=1;
				angle0=0;
				angle1="rad -340";
			};
			class Radar
			{
				type="rotation";
				source="time";
				selection="ukaz_radar";
				axis="osa_radar";
				memory="false";
				minValue=0;
				maxValue=2;
				sourceAddress="loop";
				angle0=0;
				angle1="rad 360";
			};
			class IndicatorTurret
			{
				type="rotation";
				source="turretDir";
				selection="ukazsmer";
				axis="osa_ukazsmer";
				memory="false";
				animPeriod=0;
				minValue=0;
				maxValue=6.283185;
				angle0=0;
				angle1="rad 360";
			};
			class WatchHour
			{
				type="rotation";
				source="clockHour";
				selection="hodinova";
				axis="osa_time";
				memory="false";
				animPeriod=0;
				angle0=0;
				angle1="rad 360";
			};
			class WatchMinute
			{
				type="rotation";
				source="clockMinute";
				selection="minutova";
				axis="osa_time";
				memory="false";
				animPeriod=0;
				angle0=0;
				angle1="rad 360";
			};
			*/
		 
			//Turning out proxies
			class seat_commander
			{
				type="translationY";
				source="hatchCommander";
				selection="seat_commander";
				minValue=0;
				maxValue=0.25;
				offset0=0;
				offset1=1;
			};
			class seat_gunner
			{
				type="translationY";
				source="hatchgunner";
				selection="seat_gunner";
				minValue=0;
				maxValue=0.25;
				offset0=0;
				offset1=1;
			};
			class seat_driver
			{
				type="translationY";
				source="hatchDriver";
				selection="seat_driver";
				minValue=0;
				maxValue=0.10;
				offset0=0;
				offset1=1;
			};
		  
			//wheels 
			class Wheel_kolL1
			{
				type="rotationX";
				source="wheelL";
				selection="kolL1";
				axis="";
				memory="false";
				animPeriod=0;
				angle0=0;
				angle1="rad -360";
				sourceAddress="loop";
			};
			class Wheel_koloL1: Wheel_kolL1
			{
				selection="koloL1";
			};
			class Wheel_podkoloL1
			{
				type="translationY";
				source="damper";
				selection="podkoloL1";
				axis="";
				memory="false";
				animPeriod=0;
				minValue=-1000;
				maxValue=1000;
			};
			class Wheel_kolP1: Wheel_kolL1
			{
				source="wheelR";
				selection="kolP1";
			};
			class Wheel_koloP1: Wheel_koloL1
			{
				source="wheelR";
				selection="koloP1";
			};
			class Wheel_podkoloP1: Wheel_podkoloL1
			{
				selection="podkoloP1";
			};
			class Wheel_kolL2: Wheel_kolL1
			{
				selection="kolL2";
			};
			class Wheel_kolL3: Wheel_kolL1
			{
				selection="kolL3";
			};
				class Wheel_kolL4: Wheel_kolL1
			{
				selection="kolL4";
			};
				class Wheel_kolL5: Wheel_kolL1
			{
				selection="kolL5";
			};
			class Wheel_kolL6: Wheel_kolL1
			{
				selection="kolL6";
			};
			class Wheel_kolL7: Wheel_kolL1
			{
				selection="kolL7";
			};
			class Wheel_kolL8: Wheel_kolL1
			{
				selection="kolL8";
			};
			class Wheel_kolP2: Wheel_kolP1
			{
				selection="kolP2";
			};
			class Wheel_kolP3: Wheel_kolP1
			{
				selection="kolP3";
			};
			class Wheel_kolP4: Wheel_kolP1
			{
				selection="kolP4";
			};
			class Wheel_kolP5: Wheel_kolP1
			{
				selection="kolP5";
			};
			class Wheel_kolP6: Wheel_kolP1
			{
				selection="kolP6";
			};
			class Wheel_kolP7: Wheel_kolP1
			{
				selection="kolP7";
			};
			class Wheel_kolP8: Wheel_kolP1
			{
				selection="kolP8";
			};
			class Wheel_koloL2: Wheel_koloL1
			{
				selection="koloL2";
			};
			class Wheel_koloL3: Wheel_koloL1
			{
				selection="koloL3";
			};
			class Wheel_koloL4: Wheel_koloL1
			{
				selection="koloL4";
			};
			class Wheel_koloL5: Wheel_koloL1
			{
				selection="koloL5";
			};
			class Wheel_koloL6: Wheel_koloL1
			{
				selection="koloL6";
			};
			class Wheel_koloL7: Wheel_koloL1
			{
				selection="koloL7";
			};
			class Wheel_koloL8: Wheel_koloL1
			{
				selection="koloL8";
			};
			class Wheel_koloP2: Wheel_koloP1
			{
				selection="koloP2";
			};
			class Wheel_koloP3: Wheel_koloP1
			{
				selection="koloP3";
			};
			class Wheel_koloP4: Wheel_koloP1
			{
				selection="koloP4";
			};
			class Wheel_koloP5: Wheel_koloP1
			{
				selection="koloP5";
			};
			class Wheel_koloP6: Wheel_koloP1
			{
				selection="koloP6";
			};
			class Wheel_koloP7: Wheel_koloP1
			{
				selection="koloP7";
			};
				class Wheel_koloP8: Wheel_koloP1
			{
				selection="koloP8";
			};
			class Wheel_podkoloL2: Wheel_podkoloL1
			{
				selection="podkoloL2";
			};
			class Wheel_podkoloL3: Wheel_podkoloL1
			{
				selection="podkoloL3";
			};
			class Wheel_podkoloL4: Wheel_podkoloL1
			{
				selection="podkoloL4";
			};
			class Wheel_podkoloL5: Wheel_podkoloL1
			{
				selection="podkoloL5";
			};
			class Wheel_podkoloL6: Wheel_podkoloL1
			{
				selection="podkoloL6";
			};
			class Wheel_podkoloL7: Wheel_podkoloL1
			{
				selection="podkoloL7";
			};
			class Wheel_podkoloL8: Wheel_podkoloL1
			{
				selection="podkoloL8";
			};
			class Wheel_podkoloP2: Wheel_podkoloP1
			{
				selection="podkoloP2";
			};
			class Wheel_podkoloP3: Wheel_podkoloP1
			{
				selection="podkoloP3";
			};
			class Wheel_podkoloP4: Wheel_podkoloP1
			{
				selection="podkoloP4";
			};
			class Wheel_podkoloP5: Wheel_podkoloP1
			{
				selection="podkoloP5";
			};
			class Wheel_podkoloP6: Wheel_podkoloP1
			{
				selection="podkoloP6";
			};
			class Wheel_podkoloP7: Wheel_podkoloP1
			{
				selection="podkoloP7";
			};
			class Wheel_podkoloP8: Wheel_podkoloP1
			{
				selection="podkoloP8";
			};
			class podkoloL1_hide_damage: damageHide
			{
				selection="podkoloL1_hide";
			};
			class podkoloL2_hide_damage: damageHide
			{
				selection="podkoloL2_hide";
			};
			class podkoloL3_hide_damage: damageHide
			{
				selection="podkoloL3_hide";
			};
			class podkoloL4_hide_damage: damageHide
			{
				selection="podkoloL4_hide";
			};
			class podkoloL5_hide_damage: damageHide
			{
				selection="podkoloL5_hide";
			};
			class podkoloL6_hide_damage: damageHide
			{
				selection="podkoloL6_hide";
			};
				class podkoloL7_hide_damage: damageHide
			{
			selection="podkoloL7_hide";
			};
				class podkoloL8_hide_damage: damageHide
			{
				selection="podkoloL8_hide";
			};
			class podkoloP1_hide_damage: damageHide
			{
				selection="podkoloP1_hide";
			};
			class podkoloP2_hide_damage: damageHide
			{
				selection="podkoloP2_hide";
			};
			class podkoloP3_hide_damage: damageHide
			{
				selection="podkoloP3_hide";
			};
			class podkoloP4_hide_damage: damageHide
			{
				selection="podkoloP4_hide";
			};
			class podkoloP5_hide_damage: damageHide
			{
				selection="podkoloP5_hide";
			};
			class podkoloP6_hide_damage: damageHide
			{
				selection="podkoloP6_hide";
			};
			class podkoloP7_hide_damage: damageHide
			{
				selection="podkoloP7_hide";
			};
			class podkoloP8_hide_damage: damageHide
			{
				selection="podkoloP8_hide";
			};

		  //anims for gentle shake from driving
			class cargo_drive_vert
			{
				type="translation";
				source="wheelL";
				sourceAddress="mirror";
				selection="CargoShake";
				axis="osaveze";
				offset0=CargoShakeOffset/2;
				offset1=-CargoShakeOffset/2;
				minValue=0.0;
				maxValue=0.02*1.12321;
			};
			class cargo_drive_aside:cargo_drive_vert
			{
				source="wheelL";
				axis="osahlavne";
				maxValue=0.02*1.418213;
			};

			/*//Animations of gunner's periscope covers. Same source as launcher stowage.
			class sight_cover_L_close: Stow_Launcher_Actual
			{
				type="rotation";
				selection="sight_cover_L";
				axis="sight_cover_L_axis";
				minValue=0.4;
				maxValue=0.9;
				angle0=0.0;
				angle1="rad -90";
				memory=1;
			};
			class sight_cover_R_close: sight_cover_L_close
			{
				selection="sight_cover_R";
				axis="sight_cover_R_axis";
				angle1="rad 90";
			};
			class sight_cover_top_close: sight_cover_L_close
			{
				selection="sight_cover_top";
				axis="sight_cover_top_axis";
				angle1="rad -35";
				minValue=0.7;
				maxValue=1.0;
			};*/
		};
	};
	class vil_aifv_ifv: vil_aifv_med
	{
		class Animations: Animations
		{
			//turret
			class MainTurret
			{
				type = "rotationY";
				source = "mainTurret";
				selection = "OtocVez";
				axis = "OsaVeze";
				memory = 1; //true
				sourceAddress = "loop";
				minValue = rad -360;
				maxValue = rad +360;
				angle0 = rad -360;
				angle1 = "rad 360";
			};
			class MainGun: MainTurret
			{
				type = "rotationX";
				source = "mainGun";
				selection = "OtocHlaven";
				axis = "OsaHlavne";
				sourceAddress = "clamp";
			};
			class coaxGun: MainGun
			{
				selection = "OtocHlavenslave";
				axis = "OsaHlavne";
			};

			#define shakeCoefficient 0.1
			#define shakeCoefficientMG 0.05
			class recoil_BEGIN
			{
				type="translation";
				source="recoil_source";
				selection="gunRecoil";
				axis="gunRecoil_axis";
				memory=1;
				minValue=0.5;
				maxValue=0.8;
				offset0=0;
				offset1=0.2;
			};
			class recoil_END:recoil_BEGIN
			{
				minValue=0.85;
				maxValue=1.0;
				offset0=0;
				offset1=-0.2;
			};

			//Experimental - minute shake of entire turret durring firing the BushMaster - for visual effects for gunner
			class Turret_shake_vert
			{
				type="translation";
				source="recoil_source";
				sourceAddress="mirror";
				selection="turret_shake";
				axis="osaveze";
				offset0=0.001*5;
				offset1=-0.001*5; //2mm
				minValue=0.0;
				maxValue=0.0015;
			};
			class Turret_shake_aside:Turret_shake_vert
			{
				axis="osahlavne";
				maxValue=0.001*1.11123;
			};

			#define CargoShakeOffset 0.0008 //1.2mm
			class cargo_shake_vert: Turret_shake_vert
			{
				selection="CargoShake";
				offset0=CargoShakeOffset;
				offset1=-CargoShakeOffset;
			};
			class cargo_shake_aside:cargo_shake_vert
			{
				axis="osahlavne";
				maxValue=0.001*1.71123;
			}; 
					
			//experimental - MG barrrel shake - this is not certain to work but seems OK
			class MG_shake
			{
				type="translation";
				sourceAddress="mirror";
				//selection="MG_barrel";
				selection="otochlavenslave";
				source="ReloadAnim";
				axis="osaveze";
				offset0=0.0015;
				offset1=-0.0015;
				minValue=0.0;
				maxValue=0.05*2;
			};
			class MG_shake_aside:MG_shake
			{
				axis="osahlavne";
				maxValue=0.05*1.1151;
				offset0=0.0015;
				offset1=-0.0015;
			};
		};	
	};
	class vil_aifv_mg: vil_aifv_med
	{
		class Animations: Animations
		{
		//Turret
			class MainTurret
			{
				type = "rotationY";
				source = "mainTurret";
				selection = "OtocVez";
				axis = "OsaVeze";
				memory = 1; //true
				sourceAddress = "loop";
				minValue = rad -360;
				maxValue = rad +360;
				angle0 = rad -360;
				angle1 = "rad 360";
			};
			class MainGun: MainTurret
			{
				type = "rotationX";
				source = "mainGun";
				selection = "OtocHlaven";
				axis = "OsaHlavne";
				sourceAddress = "clamp";
			};
			class recoil_BEGIN
			{
				type="translation";
				source="recoil_source";
				selection="gunRecoil";
				axis="gunRecoil_axis";
				memory=1;
				minValue=0.5;
				maxValue=0.8;
				offset0=0;
				offset1=0.06;
			};
			class recoil_END:recoil_BEGIN
			{
				minValue=0.85;
				maxValue=1.0;
				offset0=0;
				offset1=-0.06;
			};
			//experimental - MG barrrel shake - this is not certain to work but seems OK
			class MG_shake
			{
				type="translation";
				sourceAddress="mirror";
				selection="otochlaven";
				source="ReloadAnim";
				axis="osaveze";
				offset0=0.0015;
				offset1=-0.0015;
				minValue=0.0;
				maxValue=0.05*2;
			};
			class MG_shake_aside:MG_shake
			{
				axis="osahlavne";
				maxValue=0.05*1.1151;
				offset0=0.0015;
				offset1=-0.0015;
			};
			class ammo_belt_rotation
			{
				type="rotationZ";
				source="belt_rotation";
				selection="ammo_belt";
				axis="ammo_belt_axis";
				sourceAddress="loop";
				minValue=0;
				maxValue=0.01;
				angle0=0;
				angle1=rad -12;
			};
		};
	};

class vil_cv90: Tank
	{
		sectionsInherit="";
		sections[] =
		{
			"brzdove svetlo",
			"cislo",
			"clan",
			"clan_sign",
			"grupa",
			"L svetlo",
			"Light_1_1",
			"Light_1_2",
			"light_back",
			"light_brake",
			"motor",
			"P svetlo",
			"pas_L",
			"pas_P",
			"PasOffsetL",
			"PasOffsetP",
			"podsvit pristroju",
			"poskozeni",
			"sektor",
			"side",
			"telo",
			"Texture",
			"vez",
			"zadni svetlo",
			"zasleh",
			"zbran",
			"zbytek"
		};
		skeletonName = "vil_cv90Skeleton";
		class Animations
		{
			//Non-wheel Damage
			class damageHide
			{
				type="hide";
				source="damage";
				selection="damageHide";
			};
			class damageVez: damageHide
			{
				selection="damageVez";
			};

			//hatch
			class HatchDriver
			{
				type="rotation";
				source="hatchDriver";
				selection="hatchDriver";
				axis="hatchDriver_axis";
				animPeriod=0;
				angle0=0;
				angle1="rad -100";
				//angle1="rad 40";
			};      
			class HatchCommander: HatchDriver
			{
				source="hatchCommander";
				selection="hatchCommander";
				axis="hatchCommander_axis";
			};      
			class HatchGunner: HatchDriver
			{
				source="hatchGunner";
				selection="hatchGunner";
				axis="hatchGunner_axis";
			};
			/*//Antenna animations
			//rotation based on Damper
			class Antenna1_rotate
			{
				type="Rotation";
				source="damper";
				selection="antenna1";
				axis="antenna1_axis";
				memory="true";
				animPeriod=0;
				minValue=-0.5;
				maxValue=0.5;
				angle0="rad -30";
				angle1="rad 30";
			};	  
			class Antenna2_rotate: Antenna1_rotate
			{
				selection="antenna2";
				axis="antenna2_axis";
			};	  
			class Antenna3_rotate: Antenna1_rotate
			{
				selection="antenna3";
				axis="antenna3_axis";
			};	  
			class Antenna4_rotate: Antenna1_rotate
			{
				selection="antenna4";
				axis="antenna4_axis";
			};*/

			//Instruments (unused)  
			/*class IndicatorSpeed
			{
				type="rotation";
				source="speed";
				selection="ukaz_rychlo";
				axis="osa_rychlo";
				memory="false";
				animPeriod=0;
				minValue=0;
				maxValue=16.670000;
				angle0=0;
				angle1="rad -240";
			};
			class IndicatorSpeed2
			{
				type="rotation";
				source="speed";
				selection="ukaz_rychlo2";
				axis="osa_rychlo2";
				memory="false";
				animPeriod=0;
				minValue=0;
				maxValue=16.670000;
				angle0=0;
				angle1="rad -240";
			};
			class IndicatorRPM
			{
				type="rotation";
				source="rpm";
				selection="ukaz_rpm";
				axis="osa_rpm";
				memory="false";
				animPeriod=0;
				minValue=0;
				maxValue=1;
				angle0=0;
				angle1="rad -340";
			};
			class Radar
			{
				type="rotation";
				source="time";
				selection="ukaz_radar";
				axis="osa_radar";
				memory="false";
				minValue=0;
				maxValue=2;
				sourceAddress="loop";
				angle0=0;
				angle1="rad 360";
			};
			class IndicatorTurret
			{
				type="rotation";
				source="turretDir";
				selection="ukazsmer";
				axis="osa_ukazsmer";
				memory="false";
				animPeriod=0;
				minValue=0;
				maxValue=6.283185;
				angle0=0;
				angle1="rad 360";
			};
			class WatchHour
			{
				type="rotation";
				source="clockHour";
				selection="hodinova";
				axis="osa_time";
				memory="false";
				animPeriod=0;
				angle0=0;
				angle1="rad 360";
			};
			class WatchMinute
			{
				type="rotation";
				source="clockMinute";
				selection="minutova";
				axis="osa_time";
				memory="false";
				animPeriod=0;
				angle0=0;
				angle1="rad 360";
			};
			*/

			//Turning out proxies
			class seat_commander
			{
				type="translationY";
				source="hatchCommander";
				selection="seat_commander";
				minValue=0;
				maxValue=0.25;
				offset0=0;
				offset1=1;
			};
			class seat_gunner
			{
				type="translationY";
				source="hatchgunner";
				selection="seat_gunner";
				minValue=0;
				maxValue=0.25;
				offset0=0;
				offset1=1;
			};
			class seat_driver
			{
				type="translationY";
				source="hatchDriver";
				selection="seat_driver";
				minValue=0;
				maxValue=0.10;
				offset0=0;
				offset1=1;
			};

			//wheels 
			class Wheel_kolL1
			{
				type="rotationX";
				source="wheelL";
				selection="kolL1";
				axis="";
				memory="false";
				animPeriod=0;
				angle0=0;
				angle1="rad -360";
				sourceAddress="loop";
			};
			class Wheel_koloL1: Wheel_kolL1
			{
				selection="koloL1";
			};
			class Wheel_podkoloL1
			{
				type="translationY";
				source="damper";
				selection="podkoloL1";
				axis="";
				memory="false";
				animPeriod=0;
				minValue=-1000;
				maxValue=1000;
			};
			class Wheel_kolP1: Wheel_kolL1
			{
				source="wheelR";
				selection="kolP1";
			};
			class Wheel_koloP1: Wheel_koloL1
			{
				source="wheelR";
				selection="koloP1";
			};
			class Wheel_podkoloP1: Wheel_podkoloL1
			{
				selection="podkoloP1";
			};
			class Wheel_kolL2: Wheel_kolL1
			{
				selection="kolL2";
			};
			class Wheel_kolL3: Wheel_kolL1
			{
				selection="kolL3";
			};
			class Wheel_kolL4: Wheel_kolL1
			{
				selection="kolL4";
			};
			class Wheel_kolL5: Wheel_kolL1
			{
				selection="kolL5";
			};
			class Wheel_kolL6: Wheel_kolL1
			{
				selection="kolL6";
			};
			class Wheel_kolL7: Wheel_kolL1
			{
				selection="kolL7";
			};
			class Wheel_kolL8: Wheel_kolL1
			{
				selection="kolL8";
			};
			class Wheel_kolP2: Wheel_kolP1
			{
				selection="kolP2";
			};
			class Wheel_kolP3: Wheel_kolP1
			{
				selection="kolP3";
			};
			class Wheel_kolP4: Wheel_kolP1
			{
				selection="kolP4";
			};
			class Wheel_kolP5: Wheel_kolP1
			{
				selection="kolP5";
			};
			class Wheel_kolP6: Wheel_kolP1
			{
				selection="kolP6";
			};
			class Wheel_kolP7: Wheel_kolP1
			{
				selection="kolP7";
			};
			class Wheel_kolP8: Wheel_kolP1
			{
				selection="kolP8";
			};
			class Wheel_koloL2: Wheel_koloL1
			{
				selection="koloL2";
			};
			class Wheel_koloL3: Wheel_koloL1
			{
				selection="koloL3";
			};
			class Wheel_koloL4: Wheel_koloL1
			{
				selection="koloL4";
			};
			class Wheel_koloL5: Wheel_koloL1
			{
				selection="koloL5";
			};
			class Wheel_koloL6: Wheel_koloL1
			{
				selection="koloL6";
			};
			class Wheel_koloL7: Wheel_koloL1
			{
				selection="koloL7";
			};
			class Wheel_koloL8: Wheel_koloL1
			{
				selection="koloL8";
			};
			class Wheel_koloP2: Wheel_koloP1
			{
				selection="koloP2";
			};
			class Wheel_koloP3: Wheel_koloP1
			{
				selection="koloP3";
			};
			class Wheel_koloP4: Wheel_koloP1
			{
				selection="koloP4";
			};
			class Wheel_koloP5: Wheel_koloP1
			{
				selection="koloP5";
			};
			class Wheel_koloP6: Wheel_koloP1
			{
				selection="koloP6";
			};
			class Wheel_koloP7: Wheel_koloP1
			{
				selection="koloP7";
			};
			class Wheel_koloP8: Wheel_koloP1
			{
				selection="koloP8";
			};
			class Wheel_podkoloL2: Wheel_podkoloL1
			{
				selection="podkoloL2";
			};
			class Wheel_podkoloL3: Wheel_podkoloL1
			{
				selection="podkoloL3";
			};
			class Wheel_podkoloL4: Wheel_podkoloL1
			{
				selection="podkoloL4";
			};
			class Wheel_podkoloL5: Wheel_podkoloL1
			{
				selection="podkoloL5";
			};
			class Wheel_podkoloL6: Wheel_podkoloL1
			{
				selection="podkoloL6";
			};
			class Wheel_podkoloL7: Wheel_podkoloL1
			{
				selection="podkoloL7";
			};
			class Wheel_podkoloL8: Wheel_podkoloL1
			{
				selection="podkoloL8";
			};
			class Wheel_podkoloP2: Wheel_podkoloP1
			{
				selection="podkoloP2";
			};
			class Wheel_podkoloP3: Wheel_podkoloP1
			{
				selection="podkoloP3";
			};
			class Wheel_podkoloP4: Wheel_podkoloP1
			{
				selection="podkoloP4";
			};
			class Wheel_podkoloP5: Wheel_podkoloP1
			{
				selection="podkoloP5";
			};
			class Wheel_podkoloP6: Wheel_podkoloP1
			{
				selection="podkoloP6";
			};
			class Wheel_podkoloP7: Wheel_podkoloP1
			{
				selection="podkoloP7";
			};
			class Wheel_podkoloP8: Wheel_podkoloP1
			{
				selection="podkoloP8";
			};
			class podkoloL1_hide_damage: damageHide
			{
				selection="podkoloL1_hide";
			};
			class podkoloL2_hide_damage: damageHide
			{
				selection="podkoloL2_hide";
			};
			class podkoloL3_hide_damage: damageHide
			{
				selection="podkoloL3_hide";
			};
			class podkoloL4_hide_damage: damageHide
			{
				selection="podkoloL4_hide";
			};
			class podkoloL5_hide_damage: damageHide
			{
				selection="podkoloL5_hide";
			};
			class podkoloL6_hide_damage: damageHide
			{
				selection="podkoloL6_hide";
			};
			class podkoloL7_hide_damage: damageHide
			{
				selection="podkoloL7_hide";
			};
			class podkoloL8_hide_damage: damageHide
			{
				selection="podkoloL8_hide";
			};
			class podkoloP1_hide_damage: damageHide
			{
				selection="podkoloP1_hide";
			};
			class podkoloP2_hide_damage: damageHide
			{
				selection="podkoloP2_hide";
			};
			class podkoloP3_hide_damage: damageHide
			{
				selection="podkoloP3_hide";
			};
			class podkoloP4_hide_damage: damageHide
			{
				selection="podkoloP4_hide";
			};
			class podkoloP5_hide_damage: damageHide
			{
				selection="podkoloP5_hide";
			};
			class podkoloP6_hide_damage: damageHide
			{
				selection="podkoloP6_hide";
			};
			class podkoloP7_hide_damage: damageHide
			{
				selection="podkoloP7_hide";
			};
			class podkoloP8_hide_damage: damageHide
			{
				selection="podkoloP8_hide";
			};
			
			//turret
			class MainTurret
			{
				type = "rotationY";
				source = "mainTurret";
				selection = "OtocVez";
				axis = "OsaVeze";
				memory = 1; //true
				sourceAddress = "loop";
				minValue = rad -360;
				maxValue = rad +360;
				angle0 = rad -360;
				angle1 = "rad 360";
			};
			class MainGun: MainTurret
			{
				type = "rotationX";
				source = "mainGun";
				selection = "OtocHlaven";
				axis = "OsaHlavne";
				sourceAddress = "clamp";
			};
			class coaxGun: MainGun
			{
				selection = "OtocHlavenslave";
				axis = "OsaHlavneslave";
			};

			#define shakeCoefficient 0.1
			#define shakeCoefficientMG 0.05
			class recoil_BEGIN
			{
				type="translation";
				source="recoil_source";
				selection="gunRecoil";
				axis="gunRecoil_axis";
				memory=1;
				minValue=0.5;
				maxValue=0.8;
				offset0=0;
				offset1=0.2;
			};
			class recoil_END:recoil_BEGIN
			{
				minValue=0.85;
				maxValue=1.0;
				offset0=0;
				offset1=-0.2;
			};

			//Experimental - minute shake of entire turret durring firing the BushMaster - for visual effects for gunner
			class Turret_shake_vert
			{
				type="translation";
				source="recoil_source";
				sourceAddress="mirror";
				selection="turret_shake";
				axis="osaveze";
				offset0=0.001;
				offset1=-0.001; //2mm
				minValue=0.0;
				maxValue=0.0015;
			};
			class Turret_shake_aside:Turret_shake_vert
			{
				axis="osahlavne";
				maxValue=0.001*1.11123;
			};

			#define CargoShakeOffset 0.0008 //1.2mm
			class cargo_shake_vert: Turret_shake_vert
			{
				selection="CargoShake";
				offset0=CargoShakeOffset;
				offset1=-CargoShakeOffset;
			};
			class cargo_shake_aside:cargo_shake_vert
			{
				axis="osahlavne";
				maxValue=0.001*1.71123;
			};
			//anims for gentle shake from driving
			class cargo_drive_vert: cargo_shake_vert
			{
				source="wheelL";
				offset0=CargoShakeOffset/2;
				offset1=-CargoShakeOffset/2;
				maxValue=0.02*1.12321;
			};
			class cargo_drive_aside:cargo_drive_vert
			{
				source="wheelL";
				axis="osahlavne";
				maxValue=0.02*1.418213;
			};
					
			//experimental - MG barrrel shake - this is not certain to work but seems OK
			class MG_shake
			{
				type="translation";
				sourceAddress="mirror";
				//selection="MG_barrel";
				selection="otochlavenslave";
				source="ReloadAnim";
				axis="osaveze";
				offset0=0.0015;
				offset1=-0.0015;
				minValue=0.0;
				maxValue=0.05*2;
			};
			class MG_shake_aside:MG_shake
			{
				axis="osahlavne";
				maxValue=0.05*1.1151;
				offset0=0.0015;
				offset1=-0.0015;
			};
			/*
			//Animations of gunner's periscope covers. Same source as launcher stowage.
			class sight_cover_L_close: Stow_Launcher_Actual
			{
				type="rotation";
				selection="sight_cover_L";
				axis="sight_cover_L_axis";
				minValue=0.4;
				maxValue=0.9;
				angle0=0.0;
				angle1="rad -90";
				memory=1;
			};
			class sight_cover_R_close: sight_cover_L_close
			{
				selection="sight_cover_R";
				axis="sight_cover_R_axis";
				angle1="rad 90";
			};
			class sight_cover_top_close: sight_cover_L_close
			{
				selection="sight_cover_top";
				axis="sight_cover_top_axis";
				angle1="rad -35";
				minValue=0.7;
				maxValue=1.0;
			};*/
		};
	};
	class vil_cv9035: vil_cv90{};


};
