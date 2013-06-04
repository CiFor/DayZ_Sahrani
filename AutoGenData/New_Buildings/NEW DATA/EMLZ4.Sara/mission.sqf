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
  _this = createVehicle ["Land_Mil_Barracks", [17544.205, 9566.8457, -8.392334e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_422 = _this;
  _this setDir 449.38632;
  _this setPos [17544.205, 9566.8457, -8.392334e-005];
};

_vehicle_428 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [17566.342, 9568.123, -6.6757202e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_428 = _this;
  _this setDir 450.23093;
  _this setPos [17566.342, 9568.123, -6.6757202e-005];
};

_vehicle_430 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [17596.912, 9567.7393, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_430 = _this;
  _this setDir 450.26733;
  _this setPos [17596.912, 9567.7393, 3.8146973e-006];
};

_vehicle_433 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks_i", [17582.838, 9566.7451, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_433 = _this;
  _this setDir -269.85599;
  _this setPos [17582.838, 9566.7451, 0];
};

processInitCommands;
runInitScript;
finishMissionInit;
