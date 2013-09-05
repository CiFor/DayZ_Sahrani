class CfgSurvival {
	class Inventory {
		class Default {
			RandomMagazines = 3;
			GuaranteedMagazines[] = {"ItemBandage"};
			RandomPossibilitieMagazines[] = {"ItemBandage","ItemPainkiller","HandRoadFlare"};
			backpackWeapon = "";
		};
	};
	class Meat {
		class Default {
			yield = 2;
			rawfoodtype = "FoodmeatRaw";
		};
		class Cow: Default {
			yield = 6;
			rawfoodtype = "FoodbeefRaw";
		};
		class Cow01: Cow {};
		class Cow02: Cow {};
		class Cow03: Cow {};
		class Cow04: Cow {};
		class Goat: Default {
			yield = 4;
			rawfoodtype = "FoodmuttonRaw";
		};
		class Sheep: Default {
			yield = 4;
			rawfoodtype = "FoodmuttonRaw";
		};
		class WildBoar: Default {
			yield = 4;
			rawfoodtype = "FoodbaconRaw";
		};
		class Hen: Default {
			yield = 2;
			rawfoodtype = "FoodchickenRaw";
		};
		class Rabbit: Default {
			yield = 1;
			rawfoodtype = "FoodrabbitRaw";
		};
	};
};