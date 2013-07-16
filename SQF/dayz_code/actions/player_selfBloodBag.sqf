private["_lowBlood","_injured","_inPain","_lastused","_animState","_finished","_totalblood","_bloodAdded","_bloodInc","_display","_control","_isMedic","_infectionChance","_bleedChance","_infected","_bleeding"];
disableserialization;
if (vehicle player == player) then {
	player removeMagazine "ItemBloodbag";
	player playActionNow "Medic";

	r_interrupt = false;
	_animState = animationState player;
	_finished = true;
	_totalblood = 4000;
	_bloodAdded = 0;
	_bloodInc = 10;
	_infectionChance = 20;
	_bleedChance = 20;
	_infected = false;
	_bleeding = false;
	
	_display = uiNamespace getVariable 'DAYZ_GUI_display';
	_control = 	_display displayCtrl 1300;
	_control ctrlShow true;	

	while{_bloodAdded < _totalblood} do {
		if(r_interrupt) exitWith {_finished = false;};
		if(r_player_blood >= r_player_bloodTotal) exitWith { r_player_blood = r_player_bloodTotal; };
		
		_animState = animationState player;
		_isMedic = ["medic",_animState] call fnc_inString;
		if(!_isMedic) then { player playActionNow "Medic"; };	
		
		player setVariable["USEC_BloodQty",r_player_blood + _bloodInc,true];
		_bloodAdded = _bloodAdded + _bloodInc;
		r_player_blood = r_player_blood + _bloodInc;
		hint Format["r_player_blood: %1<br>_bloodAdded: %2<br>_bloodInc: %3",r_player_blood,_bloodAdded,_bloodInc];
		sleep 0.1;
	};
	if (r_player_blood == r_player_bloodTotal) then {
		player setVariable["USEC_lowBlood",false,true];
	};
	if (random(_infectionChance) < 1) then {
		r_player_infected = true;
		player setVariable["USEC_infected",true,true];
		_finished = false;
		r_interrupt = false;
		_infected = true;
	};
	if (random(_bleedChance) < 1) then {
		r_player_injured = true;
		player setVariable["hands",true,true];
		player setVariable ["USEC_injured",true,true];
		_finished = false;
		r_interrupt = false;
		_bleeding = true;
	};
	player setVariable["medForceUpdate",true];
	if( _infected and _bleeding ) then { cutText [format["Transfusion Successful, but the blood was infected and you cut yourself."], "PLAIN DOWN"]; };
	if( _infected and !_bleeding ) then { cutText [format["Transfusion Successful, but the blood was infected."], "PLAIN DOWN"]; };
	if( !_infected and _bleeding ) then { cutText [format["Transfusion Successful, but you cut yourself."], "PLAIN DOWN"]; };
	if(_finished) then { cutText ["Transfusion Successful","PLAIN DOWN"]; };
	if(r_interrupt) then {
		cutText ["You have interupted the transfusion. The Blood bag has been lost.","PLAIN DOWN"];
		r_interrupt = false;
		player switchMove "";
		player playActionNow "stop";
	};
};