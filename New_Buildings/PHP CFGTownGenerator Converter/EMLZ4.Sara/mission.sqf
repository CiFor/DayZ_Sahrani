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

_vehicle_422 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [17544.205, 9566.8457, 0.027192807], [], 0, "CAN_COLLIDE"];
  _vehicle_422 = _this;
  _this setDir 449.38632;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [17544.205, 9566.8457, 0.027192807];
};

_vehicle_428 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [17566.342, 9568.123, 0.039313238], [], 0, "CAN_COLLIDE"];
  _vehicle_428 = _this;
  _this setDir 450.23093;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [17566.342, 9568.123, 0.039313238];
};

_vehicle_430 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [17596.912, 9567.7393, 0.044327673], [], 0, "CAN_COLLIDE"];
  _vehicle_430 = _this;
  _this setDir 450.26733;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [17596.912, 9567.7393, 0.044327673];
};

_vehicle_433 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks_i", [17582.838, 9566.7451, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_433 = _this;
  _this setDir -269.85599;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [17582.838, 9566.7451, 0];
};

_vehicle_570 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_Pub_01", [15607.009, 8834.6787, -0.028606441], [], 0, "CAN_COLLIDE"];
  _vehicle_570 = _this;
  _this setDir 88.496819;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [15607.009, 8834.6787, -0.028606441];
};

_vehicle_720 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Barn_W_02", [15543.469, 9102.4639, -0.25422546], [], 0, "CAN_COLLIDE"];
  _vehicle_720 = _this;
  _this setDir 76.286629;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [15543.469, 9102.4639, -0.25422546];
};

_vehicle_721 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Barn_W_01", [15504.23, 8880.8193, 0.0076356526], [], 0, "CAN_COLLIDE"];
  _vehicle_721 = _this;
  _this setDir -41.173008;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [15504.23, 8880.8193, 0.0076356526];
};

_vehicle_725 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Barn_W_02", [14252.411, 9380.9033, -0.27727792], [], 0, "CAN_COLLIDE"];
  _vehicle_725 = _this;
  _this setDir 43.790421;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14252.411, 9380.9033, -0.27727792];
};

_vehicle_733 = objNull;
if (true) then
{
  _this = createVehicle ["Land_dum_mesto2", [14389.838, 9440.582, 0.30637202], [], 0, "CAN_COLLIDE"];
  _vehicle_733 = _this;
  _this setDir 84.818588;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14389.838, 9440.582, 0.30637202];
};

processInitCommands;
runInitScript;
finishMissionInit;
