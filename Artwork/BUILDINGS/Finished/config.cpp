class Land_benzina_schnell_open: Strategic
	{
		icon="\smd_sahrani_artif_obj\buildings\icons\i_fuel_ca.paa";
		scope = 1;
		animated = true;
		armor=400;
		model = "\smd_sahrani_artif_obj\buildings\benzina_schnell_open.p3d";
		displayName="Fuel Station";
		nameSound="building";
		accuracy=0.50;
		transportFuel = 50000;
		cost=0;
		mapSize = 7.5;
		vehicleClass = "benzina_schnell_open";
		destrType = "DestructBuilding";
	class DestructionEffects
  {
   class FuelStationExp
   {
    simulation = "particles";
    type = "FuelStationExp";
    position = "";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.001;
   };
   class FuelStationSmk1
   {
    simulation = "particles";
    type = "FuelStationSmk1";
    position = "";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.001;
   };
   class Light1
   {
    simulation = "light";
    type = "ObjectDestructionLight";
    position = "DestructionFire";
    intensity = 0.001;
    interval = 1;
    lifeTime = 0.5;
   };
   class FuelFire1
   {
    simulation = "particles";
    type = "FuelFire1";
    position = "DestructionFire";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.5;
   };
   class FuelSmoke1
   {
    simulation = "particles";
    type = "FuelSmoke1";
    position = "DestructionFire";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.5;
   };
   class FuelSmoke2
   {
    simulation = "particles";
    type = "FuelSmoke2";
    position = "DestructionFire";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.5;
   };
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\benzina_schnell_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };

		class AnimationSources
		{
			class DoorF {
				   	source = "user";
					animPeriod = 1;
					initPhase = 0;
						     };
			class Door2F {
				   	source = "user";
					animPeriod = 3;
					initPhase = 0;
						     };
		};
		class UserActions
		{
			class OpenDoor
			{
				displayName = "Open Door";
				position = "Door_Button";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""DoorF"" < 0.5";
				statement = "this animate [""DoorF"", 1]";
			};
			class CloseDoor: OpenDoor
			{
				displayName = "Close Door";
				condition = "this animationPhase ""DoorF"" >= 0.5";
				statement = "this animate [""DoorF"", 0]";
			};
			class OpenDoor2
			{
				displayName = "Open Garage Door";
				position = "Door2_Button";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Door2F"" < 0.5";
				statement = "this animate [""Door2F"", 1]";
			};
			class CloseDoor2: OpenDoor2
			{
				displayName = "Close Garage Door";
				condition = "this animationPhase ""Door2F"" >= 0.5";
				statement = "this animate [""Door2F"", 0]";
			};
		};
		
	}