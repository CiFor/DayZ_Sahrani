class CfgAmmo {	
	class Bolt;
	class WoodenArrow : Bolt {
		model = "\dayz_weapons\models\bolt";
		hit = 8;
		caliber = 0.33;
	};
	class Melee;
	class baseball_bat_swing_Ammo : Melee {
		hit = 6;
		simulation = "shotBullet";
	};
	class baseball_bat_barbed_swing_Ammo : Melee {
		hit = 7;
		simulation = "shotBullet";
	};
	class baseball_bat_nailed_swing_Ammo : Melee {
		hit = 9;
		simulation = "shotBullet";
	};
	class Machete_Swing_Ammo : Melee {
		hit = 9;
		simulation = "shotBullet";
	};
	class shovel_swing_Ammo : Melee {
		hit = 9;
		simulation = "shotBullet";
	};
	class SodaCan;
	class Brick : SodaCan {
		hit = 8;
		indirectHit=1;
	};
};
