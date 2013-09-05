private["_item","_location","_isOk","_dir","_classname","_trees","_fncFindTrees","_objs"];
_item = _this;
_found = false;
_target = null;
//Ordered by Quantity
_trees = [" str "," str_"," smrk_"," palm"," les_"," Akat"," dd_"," hrus"," jabl"," oli"];
call gear_ui_init;

_fncFindTrees = {
	private["_tree","_list"];
	_tree = _this select 0;
	_list = _this select 1;
	{
		if(!_found) then { //check if found to stop wasting processing time
			if([_tree, str _x, false] call fnc_inString) then {
				_found = true;
				_tree = _x;
				_result = [player,"PartWoodPile"] call BIS_fnc_invAdd;
				if (_result) then {
					[player,"chopwood",0,false] call dayz_zombieSpeak;
					cutText [localize "str_player_25", "PLAIN DOWN"];
					[player,20,false,(getPosATL player)] spawn player_alertZombies;
					player playActionNow "Medic";
					_tree setdamage 1;
					sleep 3;
				} else {
					cutText [localize "str_player_24", "PLAIN DOWN"];
				};
			};
		};
	} forEach _list;
};
_list = nearestObjects [getPos player, [], 10];
{ if(!_found) then {[_x,_list] call _fncFindTrees;}; } forEach _trees;

if (!(_found)) then {
	cutText [localize "str_player_23", "PLAIN DOWN"];
};

/*_trees = [
		"Akat02S.p3d",
		"dd_borovice.p3d",
		"DD_borovice02.p3d",
		"hrusen2.p3d",
		"jablon.p3d",
		"les_buk.p3d",
		"les_dub.p3d",
		"les_dub_jiny.p3d",
		"les_fikovnik2.p3d",
		"les_singlestrom.p3d",
		"les_singlestrom_b.p3d",
		"oliva.p3d",
		"palm_01.p3d",
		"palm_02.p3d",
		"palm_03.p3d",
		"palm_04.p3d",
		"palm_08small.p3d",
		"palm_09.p3d",
		"palm_10.p3d",
		"str briza.p3d",
		"str buk.p3d",
		"str dub jiny.p3d",
		"str dub.p3d",
		"str habr.p3d",
		"str javor.p3d",
		"str jerabina.p3d",
		"str kastan.p3d",
		"str krovisko vysoke.p3d",
		"str lipa.p3d",
		"str osika.p3d",
		"str vrba.p3d",
		"str_briza_kriva.p3d",
		"str_fikovnik.p3d",
		"str_fikovnik_ker.p3d",
		"str_fikovnik2.p3d",
		"smrk_maly.p3d",
		"smrk_siroky.p3d",
		"smrk_velky.p3d"
		];
*/