private["_case"];
_case = _this select 1;


Switch (_case) do
{
	case "Heal":
	{
		hint "Healing player";
		PVDZ_send = [player,"Transfuse",[player,player,12000]];
		publicVariableServer "PVDZ_send";
		sleep 0.1;
		PVDZ_send = [player,"Painkiller",[player,player]];
		publicVariableServer "PVDZ_send";
		sleep 0.1;
		PVDZ_send = [player,"Morphine",[player,player]];
		publicVariableServer "PVDZ_send";
		sleep 0.1;
		PVDZ_send = [player,"Bandage",[player,player]];
		publicVariableServer "PVDZ_send";
		sleep 0.1;
		r_player_infected = false;
		player setVariable["USEC_infected",false,true];
	};
	case "Bandage":
	{
		hint "Adding Medical Supply Bandage";
		player addMagazine 'ItemBandage';
	};
	Case "Painkillers":
	{
		hint "Adding Medical Supply Painkillers";
		player addMagazine 'ItemPainkiller';
	};
	Case "Morphine Auto-Injector":
	{
		hint "Adding Medical Supply Morphine Auto-Injector";
		player addMagazine 'ItemMorphine';
	};
	Case "Epi-Pen":
	{
		hint "Adding Medical Supply Epi-Pen";
		player addMagazine 'ItemEpinephrine';
	};
	Case "Bloodbag":
	{
		hint "Adding Medical Supply Bloodbag";
		player addMagazine 'ItemBloodbag';
	};
	Case "Heatpack":
	{
		hint "Adding Medical Supply Heatpack";
		player addMagazine 'ItemHeatPack';
	};
	Case "Antibiotics":
	{
		hint "Adding Medical Supply Antibiotics";
		player addMagazine 'ItemAntibiotic';
	};
};
