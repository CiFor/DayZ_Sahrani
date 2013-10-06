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

_vehicle_580 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_GeneralStore_01", [11265.732, 5912.0176, -0.2157429], [], 0, "CAN_COLLIDE"];
  _vehicle_580 = _this;
  _this setDir -0.8837651;
  _this setPos [11265.732, 5912.0176, -0.2157429];
};

_vehicle_583 = objNull;
if (true) then
{
  _this = createVehicle ["land_dum_istan3_Pumpa", [11340.349, 5780.0024, 8.2015991e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_583 = _this;
  _this setDir 329.75522;
  _this setPos [11340.349, 5780.0024, 8.2015991e-005];
};

_vehicle_597 = objNull;
if (true) then
{
  _this = createVehicle ["land_dum_istan3_Pumpa", [11221.264, 5148.1104, 0.027369408], [], 0, "CAN_COLLIDE"];
  _vehicle_597 = _this;
  _this setDir 139.34927;
  _this setPos [11221.264, 5148.1104, 0.027369408];
};

_vehicle_600 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Barn_W_02", [11480.69, 5423.3267, 6.1511993e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_600 = _this;
  _this setDir -2.5099843;
  _this setPos [11480.69, 5423.3267, 6.1511993e-005];
};

_vehicle_603 = objNull;
if (true) then
{
  _this = createVehicle ["Land_ladderEP1", [11267.212, 5215.478, 0.00011110306], [], 0, "CAN_COLLIDE"];
  _vehicle_603 = _this;
  _this setDir 178.64415;
  _this setPos [11267.212, 5215.478, 0.00011110306];
};

_vehicle_605 = objNull;
if (true) then
{
  _this = createVehicle ["Land_ladderEP1", [11235.124, 5158.8628, 4.4822693e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_605 = _this;
  _this setDir 227.85165;
  _this setPos [11235.124, 5158.8628, 4.4822693e-005];
};

_vehicle_612 = objNull;
if (true) then
{
  _this = createVehicle ["land_dum_istan3_hromada", [11234.513, 5162.3623, 0.16766134], [], 0, "CAN_COLLIDE"];
  _vehicle_612 = _this;
  _this setDir 139.26746;
  _this setPos [11234.513, 5162.3623, 0.16766134];
};

_vehicle_615 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_GeneralStore_01", [10938.981, 5065.6719, -2.3841858e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_615 = _this;
  _this setDir -201.36647;
  _this setPos [10938.981, 5065.6719, -2.3841858e-005];
};

_vehicle_618 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_BuildingWIP", [10317.612, 5281.6479, 0.13085327], [], 0, "CAN_COLLIDE"];
  _vehicle_618 = _this;
  _this setDir -184.63278;
  _this setPos [10317.612, 5281.6479, 0.13085327];
};

_vehicle_621 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_CraneCon", [10356.097, 5300.0186, 5.7220459e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_621 = _this;
  _this setDir -629.40656;
  _this setPos [10356.097, 5300.0186, 5.7220459e-005];
};

processInitCommands;
runInitScript;
finishMissionInit;
