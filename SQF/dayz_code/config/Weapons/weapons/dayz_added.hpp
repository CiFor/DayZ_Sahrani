class Crossbow;
class Crossbow_DZ : Crossbow {
	reloadTime = 1.8;
	displayname = $STR_DN_CROSSBOW;
	magazines[] =
	{
		"Quiver",
		"WoodenArrow"
	};
};

class ItemCrowbar: ItemCore	{
	scope=2;
	displayName="Crowbar";
	model="\dayz_equip\models\crowbar.p3d";
	picture="\z\addons\dayz_communityassets\pictures\equip_crowbar_CA.paa";
	descriptionShort="A tool consisting of a metal bar with a single curved end and flattened points, often with a small fissure on one or both ends for removing nails.";
	class ItemActions
	{
		class Toolbelt
		{
			text="Remove from Toolbelt";
			script="spawn player_addToolbelt;";
			use[]=
			{
				"ItemCrowbar"
			};
			output[]=
			{
				"MeleeCrowbar"
			};
		};
	};
};

class GrenadeLauncher;  // External class reference
class Flare : GrenadeLauncher {
	class ThrowMuzzle;
	class MolotovCocktailMuzzle : ThrowMuzzle {
		displayName = "$STR_ACTION_THROW";
		magazines[] = {
			"TrashJackDaniels", 
			"ItemSodaEmpty", 
			"TrashTinCan",
			"FoodbaconRaw",
			"FoodbeefRaw",
			"FoodCanGriffEmpty",
			"FoodCanBadguyEmpty",
			"FoodCanBoneboyEmpty",
			"FoodCanCornEmpty",
			"FoodCanCurgonEmpty",
			"FoodCanDemonEmpty",
			"FoodCanFraggleosEmpty",
			"FoodCanHerpyEmpty",
			"FoodCanOrlokEmpty",
			"FoodCanPowellEmpty",
			"FoodCanTylersEmpty",
			"FoodCanUnlabeledEmpty",
			"FoodchickenRaw",
			"FoodmeatRaw",
			"FoodmuttonRaw",
			"FoodrabbitRaw",
			"ItemSodaCokeEmpty",
			"ItemSodaPepsiEmpty",
			"ItemSodaMdewEmpty",
			"ItemSodaMtngreenEmpty",
			"ItemSodaR4z0rEmpty",
			"ItemSodaClaysEmpty",
			"ItemSodaSmashtEmpty", 
			"ItemSodaDrwasteEmpty", 
			"ItemSodaLemonadeEmpty", 
			"ItemSodaLvgEmpty", 
			"ItemSodaMzlyEmpty", 
			"ItemSodaRabbitEmpty",
			"ItemBrick"
		};          
	};
};

class MeleeHatchet;
class MeleeCrowbar: MeleeHatchet
{
	scope=2;
	model="\dayz_weapons\models\crowbar_weaponized";
	picture="\dayz_weapons\textures\equip_crowbar_CA.paa";
	displayName="Crowbar";
	magazines[]=
	{
		"Crowbar_Swing"
	};
	class ItemActions
	{
		class Toolbelt
		{
			text="Add to Toolbelt";
			script="spawn player_addToolbelt;";
			use[]=
			{
				"MeleeCrowbar"
			};
			output[]=
			{
				"ItemCrowbar"
			};
		};
		class Drop
		{
			text="Drop Crowbar";
			script="spawn player_dropWeapon;";
			use[]=
			{
				"Crowbar_Swing"
			};
		};
	};
	class Library
	{
		libTextDesc="A tool consisting of a metal bar with a single curved end and flattened points, often with a small fissure on one or both ends for removing nails.";
	};
	descriptionShort="A tool consisting of a metal bar with a single curved end and flattened points, often with a small fissure on one or both ends for removing nails.";
};