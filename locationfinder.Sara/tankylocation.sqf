hint "showloc";

_building = nearestObject [player, "Building"];
_relPos = _building worldToModel (getPosATL player);
_getBuildingName = player sideChat str (typeOf nearestBuilding position player);
_BNAME = typeOf nearestBuilding position player;

x = _relPos select 0;
y = _relPos select 1;
z = _relPos select 2;
b = _BNAME;

hint format ["%1 , %2 , %3", x , y , z];
diag_log format ["%1,%2,%3,%4", x , y , z, b];