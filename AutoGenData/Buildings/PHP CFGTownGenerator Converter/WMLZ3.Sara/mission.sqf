activateAddons [
];

activateAddons [];
initAmbientLife;

_this = createCenter west;
_center_0 = _this;

_group_0 = createGroup _center_0;

_unit_3 = objNull;
if (true) then
{
  _this = _group_0 createUnit ["Sniper1_DZ", [8085.1489, 9379.293, 0], [], 0, "CAN_COLLIDE"];
  _unit_3 = _this;
  _this setDir 10.054947;
  _this setUnitAbility 0.60000002;
  if (true) then {_group_0 selectLeader _this;};
  if (true) then {selectPlayer _this;};
  if (true) then {setPlayable _this;};
};

_vehicle_544 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_BuildingWIP", [13339.623, 7331.7642, 0.32484424], [], 0, "CAN_COLLIDE"];
  _vehicle_544 = _this;
  _this setDir -252.44598;
  _this setVehicleInit "this setVectorUp[0,0,1];";
  _this setPos [13339.623, 7331.7642, 0.32484424];
};

_vehicle_546 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_BuildingWIP", [13372.396, 7271.5654, 0.47128281], [], 0, "CAN_COLLIDE"];
  _vehicle_546 = _this;
  _this setDir -431.48724;
  _this setVehicleInit "this setVectorUp[0,0,1];";
  _this setPos [13372.396, 7271.5654, 0.47128281];
};

_vehicle_548 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_CraneCon", [13395.852, 7310.1274, -0.01], [], 0, "CAN_COLLIDE"];
  _vehicle_548 = _this;
  _this setDir -252.41083;
  _this setVehicleInit "this setVectorUp[0,0,1];";
  _this setPos [13395.852, 7310.1274, -0.01];
};

_vehicle_550 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_CraneCon", [13323.892, 7295.1602, -0.01], [], 0, "CAN_COLLIDE"];
  _vehicle_550 = _this;
  _this setDir -341.93988;
  _this setVehicleInit "this setVectorUp[0,0,1];";
  _this setPos [13323.892, 7295.1602, -0.01];
};

_vehicle_552 = objNull;
if (true) then
{
  _this = createVehicle ["land_dum_istan3", [13317.069, 6879.2656, -0.01], [], 0, "CAN_COLLIDE"];
  _vehicle_552 = _this;
  _this setDir 0.04456012;
  _this setVehicleInit "this setVectorUp[0,0,1];";
  _this setPos [13317.069, 6879.2656, -0.01];
};

_vehicle_554 = objNull;
if (true) then
{
  _this = createVehicle ["land_dum_istan3_hromada", [13162.029, 6879.5967, 0.1351874], [], 0, "CAN_COLLIDE"];
  _vehicle_554 = _this;
  _this setDir 0.04456012;
  _this setVehicleInit "this setVectorUp[0,0,1];";
  _this setPos [13162.029, 6879.5967, 0.1351874];
};

_vehicle_555 = objNull;
if (true) then
{
  _this = createVehicle ["land_dum_istan3_Pumpa", [13271.853, 6862.9492, -0.01], [], 0, "CAN_COLLIDE"];
  _vehicle_555 = _this;
  _this setDir 180.15823;
  _this setVehicleInit "this setVectorUp[0,0,1];";
  _this setPos [13271.853, 6862.9492, -0.01];
};

_vehicle_557 = objNull;
if (true) then
{
  _this = createVehicle ["Land_ladderEP1", [13321.189, 6921.4307, -0.62517089], [], 0, "CAN_COLLIDE"];
  _vehicle_557 = _this;
  _this setDir 183.55273;
  _this setVehicleInit "this setVectorUp[0,0,1];";
  _this setPos [13321.189, 6921.4307, -0.62517089];
};

_vehicle_559 = objNull;
if (true) then
{
  _this = createVehicle ["Land_ladderEP1", [13165.634, 6872.6318, -0.32561156], [], 0, "CAN_COLLIDE"];
  _vehicle_559 = _this;
  _this setDir 358.79459;
  _this setVehicleInit "this setVectorUp[0,0,1];";
  _this setPos [13165.634, 6872.6318, -0.32561156];
};

_vehicle_562 = objNull;
if (true) then
{
  _this = createVehicle ["Land_ladderEP1", [13207.261, 6869.9058, -0.6364274], [], 0, "CAN_COLLIDE"];
  _vehicle_562 = _this;
  _this setDir 358.2644;
  _this setVehicleInit "this setVectorUp[0,0,1];";
  _this setPos [13207.261, 6869.9058, -0.6364274];
};

_vehicle_564 = objNull;
if (true) then
{
  _this = createVehicle ["Land_ladderEP1", [13237.074, 6894.3999, -0.60852146], [], 0, "CAN_COLLIDE"];
  _vehicle_564 = _this;
  _this setDir 358.79459;
  _this setVehicleInit "this setVectorUp[0,0,1];";
  _this setPos [13237.074, 6894.3999, -0.60852146];
};

_vehicle_566 = objNull;
if (true) then
{
  _this = createVehicle ["Land_ladderEP1", [13201.047, 6956.3315, -0.65201396], [], 0, "CAN_COLLIDE"];
  _vehicle_566 = _this;
  _this setDir 358.79459;
  _this setVehicleInit "this setVectorUp[0,0,1];";
  _this setPos [13201.047, 6956.3315, -0.65201396];
};

_vehicle_571 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_GeneralStore_01", [12675.729, 6814.9468, 0.04664503], [], 0, "CAN_COLLIDE"];
  _vehicle_571 = _this;
  _this setDir 172.32988;
  _this setVehicleInit "this setVectorUp[0,0,1];";
  _this setPos [12675.729, 6814.9468, 0.04664503];
};

_vehicle_577 = objNull;
if (true) then
{
  _this = createVehicle ["Land_rail_station_big", [12314.656, 6824.6787, -0.042358067], [], 0, "CAN_COLLIDE"];
  _vehicle_577 = _this;
  _this setDir -259.74973;
  _this setVehicleInit "this setVectorUp[0,0,1];";
  _this setPos [12314.656, 6824.6787, -0.042358067];
};

processInitCommands;
runInitScript;
finishMissionInit;
