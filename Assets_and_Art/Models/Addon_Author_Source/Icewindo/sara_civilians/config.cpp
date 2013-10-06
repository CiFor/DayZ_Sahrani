class CfgPatches
{
           class sah_civilian_patch
           {
                        units[]={"sah_civilian1_pants","sah_civilian2_pants","sah_civilian3_pants","sah_civilian4_pants""sah_civilian5_pants","sah_civilian6_pants","sah_civilian7_pants",
						"sah_civilian1_shorts","sah_civilian2_shorts","sah_civilian3_shorts","sah_civilian4_shorts""sah_civilian5_shorts","sah_civilian6_shorts","sah_civilian7_shorts"};
						
						
						
                        weapons[]={};
                        requiredVersion = 1.00;
                        requiredAddons[]={};
            };
};

class CfgVehicleClasses
{
            class sah_civilian_class
            {
                         displayName="Civilians";
            };
			class sah_civilian_class_shorts
            {
                         displayName="Civilians (shorts)";
            };
			            
};


class CfgFactionClasses
{
		class sah_civilian_faction
	{
		displayName = "Sahrani People";
		priority = 90;
		side = 1;
	};
};




  


class CfgVehicles
{
 class All;
 class AllVehicles;
 class ThingEffect;
 class Land;
 class Man;
 class CAManBase;
 class USMC_Soldier2 ;
	
	class sah_civilian1_pants: USMC_Soldier2  
	{

	scope=2;
	displayName="Civilian 1";
	model = "\sara_civilians\civil_1_tshirt.p3d";

	weapons[] = {};
	magazines[] = {};
	respawnweapons[] = {};
	respawnmagazines[] = {};
	side = 3;
	vehicleClass = "sah_civilian_class";
	faction = "sah_civilian_faction";
	picture = "\Ca\characters\data\Ico\i_null_CA.paa";
	identityTypes[] = {"Head_USMC"};
	icon = "\Ca\characters2\data\icon\i_soldier_CA.paa";
	class Wounds
			{
				tex[] = {
				};
				mat[] = {
					"sara_civilians\data\civil_tshirt_body.rvmat",
					"sara_civilians\data\civil_tshirt_body_wound1.rvmat",
					"sara_civilians\data\civil_tshirt_body_wound2.rvmat",
					"ca\characters\heads\male\defaulthead\data\hhl_white.rvmat",
					"sara_civilians\data\civil_1_tshirt_hhl_wound1.rvmat",
					"sara_civilians\data\civil_1_tshirt_hhl_wound2.rvmat",
				};
			};
};

	class sah_civilian2_pants: sah_civilian1_pants  
	{

	scope=2;
	displayName="Civilian 2";
	model = "\sara_civilians\civil_2_tshirt.p3d";

};

	class sah_civilian3_pants: sah_civilian1_pants  
	{

	scope=2;
	displayName="Civilian 3";
	model = "\sara_civilians\civil_3_tshirt.p3d";

};

	class sah_civilian4_pants: sah_civilian1_pants  
	{

	scope=2;
	displayName="Civilian 4";
	model = "\sara_civilians\civil_4_tshirt.p3d";

};

	class sah_civilian5_pants: sah_civilian1_pants  
	{

	scope=2;
	displayName="Civilian 5";
	model = "\sara_civilians\civil_5_tshirt.p3d";

};

	class sah_civilian6_pants: sah_civilian1_pants  
	{

	scope=2;
	displayName="Civilian 6";
	model = "\sara_civilians\civil_6_tshirt.p3d";

};

	class sah_civilian7_pants: sah_civilian1_pants  
	{

	scope=2;
	displayName="Civilian 7";
	model = "\sara_civilians\civil_7_tshirt.p3d";

};

class sah_civilian1_shorts: USMC_Soldier2  
	{

	scope=2;
	displayName="Civilian 1";
	model = "\sara_civilians\civil_1_tshirt_shorts.p3d";

	weapons[] = {};
	magazines[] = {};
	respawnweapons[] = {};
	respawnmagazines[] = {};
	side = 3;
	vehicleClass = "sah_civilian_class_shorts";
	faction = "sah_civilian_faction";
	picture = "\Ca\characters\data\Ico\i_null_CA.paa";
	identityTypes[] = {"Head_USMC"};
	icon = "\Ca\characters2\data\icon\i_soldier_CA.paa";
	class Wounds
			{
				tex[] = {
				};
				mat[] = {
					"sara_civilians\data\civil_tshirt_shorts_body.rvmat",
					"sara_civilians\data\civil_tshirt_shorts_body_wound1.rvmat",
					"sara_civilians\data\civil_tshirt_shorts_body_wound2.rvmat",
					"ca\characters\heads\male\defaulthead\data\hhl_white.rvmat",
					"sara_civilians\data\civil_1_tshirt_hhl_wound1.rvmat",
					"sara_civilians\data\civil_1_tshirt_hhl_wound2.rvmat",
				};
			};
};

	class sah_civilian2_shorts: sah_civilian1_shorts  
	{

	scope=2;
	displayName="Civilian 2";
	model = "\sara_civilians\civil_2_tshirt_shorts.p3d";

};


	class sah_civilian3_shorts: sah_civilian1_shorts  
	{

	scope=2;
	displayName="Civilian 3";
	model = "\sara_civilians\civil_3_tshirt_shorts.p3d";

};

	class sah_civilian4_shorts: sah_civilian1_shorts  
	{

	scope=2;
	displayName="Civilian 4";
	model = "\sara_civilians\civil_4_tshirt_shorts.p3d";

};

	class sah_civilian5_shorts: sah_civilian1_shorts  
	{

	scope=2;
	displayName="Civilian 5";
	model = "\sara_civilians\civil_5_tshirt_shorts.p3d";

};

	class sah_civilian6_shorts: sah_civilian1_shorts  
	{

	scope=2;
	displayName="Civilian 6";
	model = "\sara_civilians\civil_6_tshirt_shorts.p3d";

};

	class sah_civilian7_shorts: sah_civilian1_shorts  
	{

	scope=2;
	displayName="Civilian 7";
	model = "\sara_civilians\civil_7_tshirt_shorts.p3d";

};



};	
