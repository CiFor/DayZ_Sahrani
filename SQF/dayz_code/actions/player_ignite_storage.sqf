private["_objectID","_objectUID","_obj","_id"];
_obj = _this select 3;
_objectID 	= _obj getVariable["ObjectID","0"];
_objectUID	= _obj getVariable["ObjectUID","0"];
canAbort = false;

	player removeAction s_player_ignite_storage;
	s_player_ignite_storage = -1;

	player playActionNow "Medic";
	sleep 7;

	[player,"tentpack",0,false] call dayz_zombieSpeak;
	
	dayzFire = [_obj,3,time,false,true];
	publicVariable "dayzFire";
	_id = dayzFire spawn BIS_Effects_Burn;
 
	_obj setDamage 2;

	["dayzDeleteObj",[_objectID,_objectUID]] call callRpcProcedure;	

canAbort = false;