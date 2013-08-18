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

_vehicle_0 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_ControlTower", [2508.2151, 2403.6304], [], 0, "CAN_COLLIDE"];
  _vehicle_0 = _this;
  _this setDir -359.84244;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [2508.2151, 2403.6304];
};

_vehicle_1 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Hangar_2", [2588.0981, 2444.7939], [], 0, "CAN_COLLIDE"];
  _vehicle_1 = _this;
  _this setDir -989.83759;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [2588.0981, 2444.7939];
};

_vehicle_2 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Hangar_2", [2588.1021, 2412.7031], [], 0, "CAN_COLLIDE"];
  _vehicle_2 = _this;
  _this setDir -630.00549;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [2588.1021, 2412.7031];
};

_vehicle_3 = objNull;
if (true) then
{
  _this = createVehicle ["Land_a_stationhouse", [2751.4729, 2878.7092, 0.14090876], [], 0, "CAN_COLLIDE"];
  _vehicle_3 = _this;
  _this setDir -375.37744;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [2751.4729, 2878.7092, 0.14090876];
};

_vehicle_4 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_GeneralStore_01a", [2813.5911, 2906.426, 0.088033259], [], 0, "CAN_COLLIDE"];
  _vehicle_4 = _this;
  _this setDir -216.38094;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [2813.5911, 2906.426, 0.088033259];
};

_vehicle_5 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Fuel_tank_stairs", [2898.9048, 3069.7239], [], 0, "CAN_COLLIDE"];
  _vehicle_5 = _this;
  _this setDir -379.11487;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [2898.9048, 3069.7239];
};

_vehicle_6 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_BuildingWIP", [2855.8799, 2795.9556, 0.17310289], [], 0, "CAN_COLLIDE"];
  _vehicle_6 = _this;
  _this setDir -292.93045;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [2855.8799, 2795.9556, 0.17310289];
};

_vehicle_7 = objNull;
if (true) then
{
  _this = createVehicle ["Land_SS_hangar", [2479.4714, 2835.9292, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_7 = _this;
  _this setDir -90;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [2479.4714, 2835.9292, 0];
};

_vehicle_8 = objNull;
if (true) then
{
  _this = createVehicle ["Land_SS_hangar", [2479.4829, 2802.7556], [], 0, "CAN_COLLIDE"];
  _vehicle_8 = _this;
  _this setDir -90;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [2479.4829, 2802.7556];
};

_vehicle_9 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_02", [2596.3662, 2490.3142, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_9 = _this;
  _this setDir 181.19853;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [2596.3662, 2490.3142, 0];
};

_vehicle_10 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_04", [2596.2988, 2475.604, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_10 = _this;
  _this setDir 1.0928638;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [2596.2988, 2475.604, 0];
};

_vehicle_11 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_L", [2144.8918, 2726.6191, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_11 = _this;
  _this setDir -137.48586;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [2144.8918, 2726.6191, 0];
};

processInitCommands;
runInitScript;
finishMissionInit;
