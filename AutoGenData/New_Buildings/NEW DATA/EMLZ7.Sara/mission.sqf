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
  _this = _group_0 createUnit ["Sniper1_DZ", [8085.1489, 9379.293, -6.1035156e-005], [], 0, "CAN_COLLIDE"];
  _unit_3 = _this;
  _this setDir 10.054947;
  _this setUnitAbility 0.60000002;
  if (true) then {_group_0 selectLeader _this;};
  if (true) then {selectPlayer _this;};
  if (true) then {setPlayable _this;};
};

_vehicle_442 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_FuelStation_Build", [13761.046, 9363.1738, 0.091485769], [], 0, "CAN_COLLIDE"];
  _vehicle_442 = _this;
  _this setDir 129.7719;
  _this setPos [13761.046, 9363.1738, 0.091485769];
};

_vehicle_443 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_FuelStation_Shed", [13758.384, 9381.1289, -0.16229248], [], 0, "CAN_COLLIDE"];
  _vehicle_443 = _this;
  _this setDir 39.23053;
  _this setPos [13758.384, 9381.1289, -0.16229248];
};

_vehicle_444 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_TankSmall2", [13764.708, 9365.832, 0.033283927], [], 0, "CAN_COLLIDE"];
  _vehicle_444 = _this;
  _this setDir 39.911297;
  _this setPos [13764.708, 9365.832, 0.033283927];
};

_vehicle_445 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_FuelStation_Feed", [13758.242, 9381.1592, 0.07201004], [], 0, "CAN_COLLIDE"];
  _vehicle_445 = _this;
  _this setDir -49.531528;
  _this setPos [13758.242, 9381.1592, 0.07201004];
};

_vehicle_446 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_FuelStation_Feed", [13753.038, 9385.6846, -0.032577515], [], 0, "CAN_COLLIDE"];
  _vehicle_446 = _this;
  _this setDir -48.967182;
  _this setPos [13753.038, 9385.6846, -0.032577515];
};

_vehicle_447 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_FuelStation_Feed", [13763.732, 9376.7627, 0.21588707], [], 0, "CAN_COLLIDE"];
  _vehicle_447 = _this;
  _this setDir -48.967182;
  _this setPos [13763.732, 9376.7627, 0.21588707];
};

_vehicle_479 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_GeneralStore_01", [13520.994, 9204.7188, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_479 = _this;
  _this setDir -136.02129;
  _this setPos [13520.994, 9204.7188, -3.8146973e-006];
};

_vehicle_482 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_Pub_01", [13544.621, 9208.8955, -1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_482 = _this;
  _this setDir -15.523249;
  _this setPos [13544.621, 9208.8955, -1.1444092e-005];
};

_vehicle_485 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_Pub_01", [13499.382, 8993.8311, 5.1498413e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_485 = _this;
  _this setDir 140.1241;
  _this setPos [13499.382, 8993.8311, 5.1498413e-005];
};

_vehicle_488 = objNull;
if (true) then
{
  _this = createVehicle ["Land_dum_mesto2", [13410.084, 9055.4961, 7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_488 = _this;
  _this setDir 139.88057;
  _this setPos [13410.084, 9055.4961, 7.6293945e-005];
};

_vehicle_490 = objNull;
if (true) then
{
  _this = createVehicle ["Land_dum_mesto2", [13485.535, 8892.9492, 9.3460083e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_490 = _this;
  _this setDir 230.83627;
  _this setPos [13485.535, 8892.9492, 9.3460083e-005];
};

_vehicle_493 = objNull;
if (true) then
{
  _this = createVehicle ["Land_dum_mesto_in", [13696.521, 8972.9268, 5.9127808e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_493 = _this;
  _this setDir 526.40009;
  _this setPos [13696.521, 8972.9268, 5.9127808e-005];
};

_vehicle_497 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_L", [13639.029, 9192.3057, 0.00013923645], [], 0, "CAN_COLLIDE"];
  _vehicle_497 = _this;
  _this setDir 38.940308;
  _this setPos [13639.029, 9192.3057, 0.00013923645];
};

_vehicle_500 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_01", [13622.713, 9144.2354, 0.00012207031], [], 0, "CAN_COLLIDE"];
  _vehicle_500 = _this;
  _this setDir 81.517326;
  _this setPos [13622.713, 9144.2354, 0.00012207031];
};

_vehicle_503 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_01", [13599.793, 9074.0254, 0.0001411438], [], 0, "CAN_COLLIDE"];
  _vehicle_503 = _this;
  _this setDir 138.82314;
  _this setPos [13599.793, 9074.0254, 0.0001411438];
};

_vehicle_509 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_04", [13583.15, 9123.3457, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_509 = _this;
  _this setDir -222.46309;
  _this setPos [13583.15, 9123.3457, -3.8146973e-006];
};

_vehicle_511 = objNull;
if (true) then
{
  _this = createVehicle ["Land_ladderEP1", [13182.618, 8898.6982, -0.40864643], [], 0, "CAN_COLLIDE"];
  _vehicle_511 = _this;
  _this setPos [13182.618, 8898.6982, -0.40864643];
};

_vehicle_513 = objNull;
if (true) then
{
  _this = createVehicle ["Land_ladderEP1", [13176.354, 8909.0195, -0.46033561], [], 0, "CAN_COLLIDE"];
  _vehicle_513 = _this;
  _this setDir 179.91095;
  _this setPos [13176.354, 8909.0195, -0.46033561];
};

_vehicle_515 = objNull;
if (true) then
{
  _this = createVehicle ["Land_ladderEP1", [13146.497, 8984.6514, -0.13116965], [], 0, "CAN_COLLIDE"];
  _vehicle_515 = _this;
  _this setDir 178.64415;
  _this setPos [13146.497, 8984.6514, -0.13116965];
};

_vehicle_517 = objNull;
if (true) then
{
  _this = createVehicle ["Land_ladderEP1", [12962.374, 8752.0498, -2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_517 = _this;
  _this setDir 30.402079;
  _this setPos [12962.374, 8752.0498, -2.2888184e-005];
};

_vehicle_520 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_GeneralStore_01", [12990.525, 8503.3477, -0.48612612], [], 0, "CAN_COLLIDE"];
  _vehicle_520 = _this;
  _this setDir 89.114182;
  _this setPos [12990.525, 8503.3477, -0.48612612];
};

_vehicle_527 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_ControlTower", [12516.867, 8516.2188, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_527 = _this;
  _this setDir -2.9619973;
  _this setPos [12516.867, 8516.2188, -7.6293945e-006];
};

_vehicle_530 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_Hospital", [12728.689, 8089.4097, 0.00019454956], [], 0, "CAN_COLLIDE"];
  _vehicle_530 = _this;
  _this setDir 290.91562;
  _this setPos [12728.689, 8089.4097, 0.00019454956];
};

_vehicle_533 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_L", [12753.248, 8075.9043, 2.6702881e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_533 = _this;
  _this setDir 22.619411;
  _this setPos [12753.248, 8075.9043, 2.6702881e-005];
};

_vehicle_541 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_01", [12769.159, 8072.3403, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_541 = _this;
  _this setDir -429.39523;
  _this setPos [12769.159, 8072.3403, 0];
};

_vehicle_568 = objNull;
if (true) then
{
  _this = createVehicle ["Land_ladderEP1", [12970.866, 8870.1895, -0.49671781], [], 0, "CAN_COLLIDE"];
  _vehicle_568 = _this;
  _this setDir 541.30365;
  _this setPos [12970.866, 8870.1895, -0.49671781];
};

processInitCommands;
runInitScript;
finishMissionInit;
