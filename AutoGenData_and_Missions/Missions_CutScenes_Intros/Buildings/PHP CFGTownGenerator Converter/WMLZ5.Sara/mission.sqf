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

_vehicle_456 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_TankSmall2", [9692.8838, 5568.499, -0.044718109], [], 0, "CAN_COLLIDE"];
  _vehicle_456 = _this;
  _this setDir -131.01048;
  _this setPos [9692.8838, 5568.499, -0.044718109];
};

_vehicle_624 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Barn_W_01", [9122.4131, 5357.5898, -3.4332275e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_624 = _this;
  _this setDir -41.173008;
  _this setPos [9122.4131, 5357.5898, -3.4332275e-005];
};

_vehicle_627 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Barn_W_02", [9210.3223, 5462.6504, -3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_627 = _this;
  _this setDir -56.383026;
  _this setPos [9210.3223, 5462.6504, -3.8146973e-005];
};

_vehicle_630 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Shed_Ind02", [9261.0254, 5787.4683, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_630 = _this;
  _this setDir 89.30056;
  _this setPos [9261.0254, 5787.4683, -7.6293945e-006];
};

_vehicle_632 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Shed_Ind02", [9261.0176, 5806.3643, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_632 = _this;
  _this setDir 89.30056;
  _this setPos [9261.0176, 5806.3643, 1.1444092e-005];
};

_vehicle_635 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_04", [9228.6318, 5802.9434, -2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_635 = _this;
  _this setDir -178.7836;
  _this setPos [9228.6318, 5802.9434, -2.2888184e-005];
};

_vehicle_638 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_L", [9223.9355, 5784.561, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_638 = _this;
  _this setDir 272.3335;
  _this setPos [9223.9355, 5784.561, 1.1444092e-005];
};

_vehicle_641 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_L", [9259.8174, 5829.8062, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_641 = _this;
  _this setDir 272.3335;
  _this setPos [9259.8174, 5829.8062, 0];
};

_vehicle_644 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_L", [9258.1611, 5906.9648, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_644 = _this;
  _this setDir 178.57326;
  _this setPos [9258.1611, 5906.9648, 3.8146973e-006];
};

_vehicle_647 = objNull;
if (true) then
{
  _this = createVehicle ["Land_ladderEP1", [9345.3359, 5914.7935, -0.65575278], [], 0, "CAN_COLLIDE"];
  _vehicle_647 = _this;
  _this setDir 270.4472;
  _this setPos [9345.3359, 5914.7935, -0.65575278];
};

_vehicle_650 = objNull;
if (true) then
{
  _this = createVehicle ["Land_ladderEP1", [9319.1279, 5932.6724, -0.53455889], [], 0, "CAN_COLLIDE"];
  _vehicle_650 = _this;
  _this setDir 270.4472;
  _this setPos [9319.1279, 5932.6724, -0.53455889];
};

_vehicle_654 = objNull;
if (true) then
{
  _this = createVehicle ["Land_ladderEP1", [9324.9346, 5799.5762, -0.46985599], [], 0, "CAN_COLLIDE"];
  _vehicle_654 = _this;
  _this setDir 270.4472;
  _this setPos [9324.9346, 5799.5762, -0.46985599];
};

_vehicle_656 = objNull;
if (true) then
{
  _this = createVehicle ["Land_ladderEP1", [9306.9326, 5752.1084, 5.7220459e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_656 = _this;
  _this setDir 270.4472;
  _this setPos [9306.9326, 5752.1084, 5.7220459e-005];
};

_vehicle_658 = objNull;
if (true) then
{
  _this = createVehicle ["Land_ladderEP1", [7534.7217, 6525.2583, -1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_658 = _this;
  _this setDir 285.2179;
  _this setPos [7534.7217, 6525.2583, -1.9073486e-006];
};

_vehicle_663 = objNull;
if (true) then
{
  _this = createVehicle ["Land_ladderEP1", [7596.8481, 6638.583, -0.50484169], [], 0, "CAN_COLLIDE"];
  _vehicle_663 = _this;
  _this setDir 285.2179;
  _this setPos [7596.8481, 6638.583, -0.50484169];
};

_vehicle_666 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_GeneralStore_01", [7737.9194, 6364.021, -0.58005071], [], 0, "CAN_COLLIDE"];
  _vehicle_666 = _this;
  _this setDir -360.02121;
  _this setPos [7737.9194, 6364.021, -0.58005071];
};

_vehicle_699 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_L", [8833.0117, 6045.4976, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_699 = _this;
  _this setDir 1.3119901;
  _this setPos [8833.0117, 6045.4976, 0];
};

_vehicle_701 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_L", [8929.4063, 5956.3647, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_701 = _this;
  _this setDir 269.3573;
  _this setPos [8929.4063, 5956.3647, 1.1444092e-005];
};

_vehicle_704 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_04", [9071.0273, 5960.5181, 2.6702881e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_704 = _this;
  _this setDir -178.7836;
  _this setPos [9071.0273, 5960.5181, 2.6702881e-005];
};

_vehicle_706 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_04", [8611.1523, 6132.2979, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_706 = _this;
  _this setDir -180.69658;
  _this setPos [8611.1523, 6132.2979, 0];
};

_vehicle_708 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_04", [8595.0625, 6369.9609, 2.6702881e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_708 = _this;
  _this setDir -178.7836;
  _this setPos [8595.0625, 6369.9609, 2.6702881e-005];
};

_vehicle_711 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_04", [8775.1299, 6120.4834, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_711 = _this;
  _this setDir -179.09299;
  _this setPos [8775.1299, 6120.4834, 1.1444092e-005];
};

_vehicle_717 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_L", [8898.0723, 6130.105, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_717 = _this;
  _this setDir 449.94666;
  _this setPos [8898.0723, 6130.105, 3.8146973e-006];
};

_vehicle_743 = objNull;
if (true) then
{
  _this = createVehicle ["Land_benzina_schnell", [9684.541, 5562.8799, 0.043622404], [], 0, "CAN_COLLIDE"];
  _vehicle_743 = _this;
  _this setDir -310.77811;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [9684.541, 5562.8799, 0.043622404];
};

processInitCommands;
runInitScript;
finishMissionInit;
