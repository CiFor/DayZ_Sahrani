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

_vehicle_310 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_GeneralStore_01a", [17374.699, 14197.158, 2.4795532e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_310 = _this;
  _this setDir -1.1227432;
  _this setPos [17374.699, 14197.158, 2.4795532e-005];
};

_vehicle_312 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_Hospital", [17105.551, 14340.854, 3.1471252e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_312 = _this;
  _this setDir -8.8722639;
  _this setPos [17105.551, 14340.854, 3.1471252e-005];
};

_vehicle_336 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks_i", [17800.656, 12404.806, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_336 = _this;
  _this setDir -179.72816;
  _this setPos [17800.656, 12404.806, -7.6293945e-006];
};

_vehicle_339 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks_L", [17774.535, 12366.071, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_339 = _this;
  _this setPos [17774.535, 12366.071, 1.5258789e-005];
};

_vehicle_341 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks_L", [17820.105, 12419.598, 3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_341 = _this;
  _this setPos [17820.105, 12419.598, 3.8146973e-005];
};

_vehicle_343 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks_L", [17774.93, 12402.717, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_343 = _this;
  _this setPos [17774.93, 12402.717, 7.6293945e-006];
};

_vehicle_346 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [17776.217, 12386.715, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_346 = _this;
  _this setDir 0.55706161;
  _this setPos [17776.217, 12386.715, -7.6293945e-006];
};

_vehicle_348 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [17799.146, 12422.35, -0.00012207031], [], 0, "CAN_COLLIDE"];
  _vehicle_348 = _this;
  _this setDir 180.04794;
  _this setPos [17799.146, 12422.35, -0.00012207031];
};

_vehicle_350 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [17800.506, 12368.888, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_350 = _this;
  _this setDir 180.51045;
  _this setPos [17800.506, 12368.888, -7.6293945e-006];
};

_vehicle_352 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [17800.926, 12386.839, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_352 = _this;
  _this setDir 180.528;
  _this setPos [17800.926, 12386.839, 2.2888184e-005];
};

_vehicle_354 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [17776.561, 12421.918, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_354 = _this;
  _this setDir 0.59525597;
  _this setPos [17776.561, 12421.918, 7.6293945e-006];
};

_vehicle_356 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [17823.809, 12405.631, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_356 = _this;
  _this setDir 180.05901;
  _this setPos [17823.809, 12405.631, 1.5258789e-005];
};

_vehicle_358 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [17823.139, 12387.69, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_358 = _this;
  _this setDir 180.74718;
  _this setPos [17823.139, 12387.69, 2.2888184e-005];
};

_vehicle_360 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [17823.221, 12368.883, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_360 = _this;
  _this setDir 179.87558;
  _this setPos [17823.221, 12368.883, -7.6293945e-006];
};

_vehicle_362 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_ControlTower", [19301.592, 13900.779, -3.7193298e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_362 = _this;
  _this setDir -138.96796;
  _this setPos [19301.592, 13900.779, -3.7193298e-005];
};

_vehicle_364 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [19303.412, 13982.679, 0.00011539459], [], 0, "CAN_COLLIDE"];
  _vehicle_364 = _this;
  _this setDir 131.23599;
  _this setPos [19303.412, 13982.679, 0.00011539459];
};

_vehicle_367 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks_i", [19290.621, 13995.508, 2.9563904e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_367 = _this;
  _this setDir -227.98196;
  _this setPos [19290.621, 13995.508, 2.9563904e-005];
};

_vehicle_372 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [19323.928, 14006.171, -0.00010490417], [], 0, "CAN_COLLIDE"];
  _vehicle_372 = _this;
  _this setDir 131.23599;
  _this setPos [19323.928, 14006.171, -0.00010490417];
};

_vehicle_374 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [19307.992, 14019.728, 0.00017356873], [], 0, "CAN_COLLIDE"];
  _vehicle_374 = _this;
  _this setDir 131.23599;
  _this setPos [19307.992, 14019.728, 0.00017356873];
};

_vehicle_376 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [19292.5, 14033.305, -0.00012779236], [], 0, "CAN_COLLIDE"];
  _vehicle_376 = _this;
  _this setDir 131.23599;
  _this setPos [19292.5, 14033.305, -0.00012779236];
};

_vehicle_384 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [19256.492, 14023.703, -1.7166138e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_384 = _this;
  _this setDir 131.23599;
  _this setPos [19256.492, 14023.703, -1.7166138e-005];
};

_vehicle_385 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks_i", [19159.248, 13950.89, -0.027695656], [], 0, "CAN_COLLIDE"];
  _vehicle_385 = _this;
  _this setDir -408.3688;
  _this setPos [19159.248, 13950.89, -0.027695656];
};

_vehicle_386 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [19227.32, 14051.441, -0.020446777], [], 0, "CAN_COLLIDE"];
  _vehicle_386 = _this;
  _this setDir 131.23599;
  _this setPos [19227.32, 14051.441, -0.020446777];
};

_vehicle_387 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [19277.008, 14047.194, 0.058236122], [], 0, "CAN_COLLIDE"];
  _vehicle_387 = _this;
  _this setDir 131.23599;
  _this setPos [19277.008, 14047.194, 0.058236122];
};

_vehicle_389 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [19246.428, 14072.944, -0.42259026], [], 0, "CAN_COLLIDE"];
  _vehicle_389 = _this;
  _this setDir 131.23599;
  _this setPos [19246.428, 14072.944, -0.42259026];
};

_vehicle_397 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks_L", [19240.336, 14036.858, -4.6730042e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_397 = _this;
  _this setDir 43.097996;
  _this setPos [19240.336, 14036.858, -4.6730042e-005];
};

_vehicle_400 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks_L", [19270.477, 14008.193, 0.00011253357], [], 0, "CAN_COLLIDE"];
  _vehicle_400 = _this;
  _this setDir 43.097996;
  _this setPos [19270.477, 14008.193, 0.00011253357];
};

_vehicle_403 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_Barracks", [19260.592, 14061.34, 1.9073486e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_403 = _this;
  _this setDir 131.23599;
  _this setPos [19260.592, 14061.34, 1.9073486e-005];
};

_vehicle_409 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_04", [19236.166, 13599.637, 2.8610229e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_409 = _this;
  _this setDir -178.7836;
  _this setPos [19236.166, 13599.637, 2.8610229e-006];
};

_vehicle_435 = objNull;
if (true) then
{
  _this = createVehicle ["Land_stodola_open", [17762.678, 12142.111, 0.21676299], [], 0, "CAN_COLLIDE"];
  _vehicle_435 = _this;
  _this setDir -197.38129;
  _this setPos [17762.678, 12142.111, 0.21676299];
};

processInitCommands;
runInitScript;
finishMissionInit;
