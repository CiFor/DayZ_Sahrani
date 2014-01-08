/*class CfgIdentities {
	class WomanZed {
		name = "Zombie";
		face = "WomanZed";
		glasses = "None";
		speaker = "NoVoice";
		pitch = 1;
	};
};

class CfgFaces {
	class Default;	// External class reference
	
	class WomanZedHead : Default { // Man
		class Default;	// External class reference
		
		class WomanZed : Default {
			head = "Hooker";
			name = "Zombie Woman";
			//texture = "\ca\characters\hhl\hhl_01_CO.paa";
			identityTypes[] = {"WomanZed"};
			disabled = 0;
		};
	};
};
class CfgMovesZombie;
class CfgMovesZombie2: CfgMovesZombie {
	skeletonName = "WomanSkeleton";
};
/*
class CfgVehicles {
	class zZombie_Base;
	class z_policeman: zZombie_Base
	{
		zombieLoot="policemanZed";
	};
	class z_suit1: zZombie_Base
	{
		zombieLoot="genericZed";
	};
	class z_suit2: z_suit1
	{
		zombieLoot="civilianZed";
	};
	class z_worker1: zZombie_Base
	{
		zombieLoot="civilianZed";
	};
	class z_worker2: z_worker1{};
	class z_worker3: z_worker1{};
	class z_doctor: zZombie_Base
	{
		zombieLoot="medicalZed";
	};
	class z_teacher: z_doctor
	{
		zombieLoot="genericZed";
	};
	class z_hunter: zZombie_Base
	{
		zombieLoot="hunterZed";
	};
	class z_villager1: zZombie_Base
	{
		zombieLoot="civilianZed";
	};
	class z_villager2: z_villager1{};
	class z_villager3: z_villager1{};
	class z_priest: zZombie_Base{};
	/*class z_soldier: zZombie_Base
	{
		zombieLoot="militaryZed";
	};
	class z_soldier_pilot: z_soldier{};
	class z_soldier_heavy: z_soldier{};
};