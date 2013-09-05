//Function to Check for nearest City/Location-Name
fa_coor2str = {
	private["_pos","_res","_nearestCity","_town"];

	_pos = +(_this);
	if (count _pos < 1) then { _pos = [0,0]; }
	else { if (count _pos < 2) then { _pos = [_pos select 0,0]; };
	};
	_nearestCity = nearestLocations [_pos, ["NameCityCapital","NameCity","NameVillage","NameLocal","Hill","NameMarine"],1500];
	_town = "Wilderness";
	if (count _nearestCity > 0) then {_town = text (_nearestCity select 0)};
	_res = format["%1", _town, round((_pos select 0)/100), round((15360-(_pos select 1))/100)];

	_res
};

heliData = _this select 0;

heliPos = heliData select 0;
heliModel = heliData select 1;
heliSOS = heliData select 2;
sosDistance = heliData select 3;

//If Heli has send SOS, the Player has an Radio and is in the SOS-Range... show Debug Monitor
if(heliSOS && ("ItemRadio" in items player) && (player distance heliPos <= sosDistance)) then {
	hint parseText format ["<t color='#00ff00' size='1.25'>Received Transmission</t><img size='5' image='%3'/><br/><t color='#ff0000'>Mayday - Mayday<br/>Infected Pilot!</t><br/><br/>Emergency landing initiated near %2",getText (configFile >> 'CfgVehicles' >> heliModel >> 'displayName'),(heliPos call fa_coor2str), getText (configFile >> "cfgVehicles" >> heliModel >> "picture")];
	sleep 15;
};

//Remove Clutter around the Crashsite
_list = nearestObjects [heliPos, ["CraterLong"], 100];
{deleteVehicle _x;} foreach _list;
