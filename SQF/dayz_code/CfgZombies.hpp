class CfgIdentities {
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