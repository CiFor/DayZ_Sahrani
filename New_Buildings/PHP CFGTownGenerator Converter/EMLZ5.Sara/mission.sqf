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

_vehicle_320 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_01", [13751.567, 11507.75, 0.00010299683], [], 0, "CAN_COLLIDE"];
  _vehicle_320 = _this;
  _this setDir 181.80162;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [13751.567, 11507.75, 0.00010299683];
};

_vehicle_323 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_L", [13780.049, 11542.577, -0.01], [], 0, "CAN_COLLIDE"];
  _vehicle_323 = _this;
  _this setDir 180.52242;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [13780.049, 11542.577, -0.01];
};

_vehicle_325 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_FuelStation_Build", [13501.751, 11502.97, 0.028872779], [], 0, "CAN_COLLIDE"];
  _vehicle_325 = _this;
  _this setDir 112.26083;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [13501.751, 11502.97, 0.028872779];
};

_vehicle_326 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_FuelStation_Shed", [13492.592, 11520.933, -0.01], [], 0, "CAN_COLLIDE"];
  _vehicle_326 = _this;
  _this setDir 21.719521;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [13492.592, 11520.933, -0.01];
};

_vehicle_327 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_TankSmall2", [13504.441, 11506.611, -0.01], [], 0, "CAN_COLLIDE"];
  _vehicle_327 = _this;
  _this setDir 22.400288;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [13504.441, 11506.611, -0.01];
};

_vehicle_329 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_FuelStation_Feed", [13492.443, 11520.922, 0.24333251], [], 0, "CAN_COLLIDE"];
  _vehicle_329 = _this;
  _this setDir -67.042542;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [13492.443, 11520.922, 0.24333251];
};

_vehicle_331 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_FuelStation_Feed", [13486.119, 11523.667, 0.46025801], [], 0, "CAN_COLLIDE"];
  _vehicle_331 = _this;
  _this setDir -66.478195;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [13486.119, 11523.667, 0.46025801];
};

_vehicle_333 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_FuelStation_Feed", [13499.003, 11518.379, 0.044364944], [], 0, "CAN_COLLIDE"];
  _vehicle_333 = _this;
  _this setDir -66.478195;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [13499.003, 11518.379, 0.044364944];
};

_vehicle_415 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [12944.033, 11302.412, 0.01768269], [], 0, "CAN_COLLIDE"];
  _vehicle_415 = _this;
  _this setDir 321.08997;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [12944.033, 11302.412, 0.01768269];
};

_vehicle_418 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [12953.717, 11288.011, 0.022969451], [], 0, "CAN_COLLIDE"];
  _vehicle_418 = _this;
  _this setDir 320.11044;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [12953.717, 11288.011, 0.022969451];
};

_vehicle_420 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [12980.921, 11328.579, 0.02366706], [], 0, "CAN_COLLIDE"];
  _vehicle_420 = _this;
  _this setDir 500.07446;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [12980.921, 11328.579, 0.02366706];
};

_vehicle_422 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [14587.67, 10622.658, 0.0053548296], [], 0, "CAN_COLLIDE"];
  _vehicle_422 = _this;
  _this setDir 129.64299;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14587.67, 10622.658, 0.0053548296];
};

_vehicle_425 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [14601.24, 10614.478, 0.018033851], [], 0, "CAN_COLLIDE"];
  _vehicle_425 = _this;
  _this setDir 129.75981;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14601.24, 10614.478, 0.018033851];
};

_vehicle_427 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [14613.225, 10604.556, 0.035364479], [], 0, "CAN_COLLIDE"];
  _vehicle_427 = _this;
  _this setDir 130.07422;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14613.225, 10604.556, 0.035364479];
};

_vehicle_429 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [14625.083, 10594.835, -0.11684123], [], 0, "CAN_COLLIDE"];
  _vehicle_429 = _this;
  _this setDir 129.80251;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14625.083, 10594.835, -0.11684123];
};

_vehicle_734 = objNull;
if (true) then
{
  _this = createVehicle ["Land_dum_mesto2", [14514.636, 10794.045, -0.041812684], [], 0, "CAN_COLLIDE"];
  _vehicle_734 = _this;
  _this setDir 127.60325;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14514.636, 10794.045, -0.041812684];
};

_vehicle_735 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_Pub_01", [14446.84, 10867.439, -0.072935879], [], 0, "CAN_COLLIDE"];
  _vehicle_735 = _this;
  _this setDir -149.56293;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14446.84, 10867.439, -0.072935879];
};

processInitCommands;
runInitScript;
finishMissionInit;
