disableserialization;
player removeAction s_player_drinkwater;
s_player_drinkwater = -1;

_config = configFile >> "CfgMagazines" >> "ItemWaterbottle";
_text = getText (_config >> "displayName");
_sfx = 	getText (_config >> "sfx");

player playActionNow "PutDown";
sleep 1;
[player,_sfx,0,false] call dayz_zombieSpeak;

if (random 15 < 1) then {
	r_player_infected = true;
	player setVariable["USEC_infected",true];
};
_id = [player,10,true,(getPosATL player)] spawn player_alertZombies;

player setVariable ["messing",[dayz_hunger,dayz_thirst],true];

dayz_lastDrink = time;
dayz_thirst = 0;

_display = uiNamespace getVariable 'DAYZ_GUI_display';
(_display displayCtrl 1302) ctrlShow true;

cutText ["\n\nYou have drank some Water.", "PLAIN DOWN"];