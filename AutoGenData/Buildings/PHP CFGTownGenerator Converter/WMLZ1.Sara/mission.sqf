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
  _this = _group_0 createUnit ["Sniper1_DZ", [8085.1489, 9379.293, -0.01], [], 0, "CAN_COLLIDE"];
  _unit_3 = _this;
  _this setDir 10.054947;
  _this setUnitAbility 0.60000002;
  if (true) then {_group_0 selectLeader _this;};
  if (true) then {selectPlayer _this;};
  if (true) then {setPlayable _this;};
};

_vehicle_769 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_01", [8113.8984, 9312.7178, -0.01], [], 0, "CAN_COLLIDE"];
  _vehicle_769 = _this;
  _this setDir -90.368271;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [8113.8984, 9312.7178, -0.01];
};

_vehicle_771 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_01", [8055.6089, 9320.1982, -0.01], [], 0, "CAN_COLLIDE"];
  _vehicle_771 = _this;
  _this setDir -4.136138;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [8055.6089, 9320.1982, -0.01];
};

_vehicle_773 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_01", [8197.1445, 9561.4697, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_773 = _this;
  _this setDir 37.739014;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [8197.1445, 9561.4697, 0];
};

_vehicle_775 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_01", [8238.4873, 9510.1123, 0.00010585785], [], 0, "CAN_COLLIDE"];
  _vehicle_775 = _this;
  _this setDir -39.469994;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [8238.4873, 9510.1123, 0.00010585785];
};

_vehicle_777 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_01", [8464.4512, 9445.4727, 0.048190281], [], 0, "CAN_COLLIDE"];
  _vehicle_777 = _this;
  _this setDir 24.297029;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [8464.4512, 9445.4727, 0.048190281];
};

processInitCommands;
runInitScript;
finishMissionInit;
