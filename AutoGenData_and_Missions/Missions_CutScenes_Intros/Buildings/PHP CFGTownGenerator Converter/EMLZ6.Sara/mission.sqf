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

_vehicle_225 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_Pub_01", [14111.281, 12495.537, -0.11815493], [], 0, "CAN_COLLIDE"];
  _vehicle_225 = _this;
  _this setDir -91.763176;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14111.281, 12495.537, -0.11815493];
};

_vehicle_228 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Shed_Ind02", [13698.369, 12626.954, 0.10880119], [], 0, "CAN_COLLIDE"];
  _vehicle_228 = _this;
  _this setDir 177.29395;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [13698.369, 12626.954, 0.10880119];
};

_vehicle_230 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Shed_Ind02", [13718.194, 12628.456, 0.18947728], [], 0, "CAN_COLLIDE"];
  _vehicle_230 = _this;
  _this setDir 176.95952;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [13718.194, 12628.456, 0.18947728];
};

_vehicle_233 = objNull;
if (true) then
{
  _this = createVehicle ["Land_dum_mesto_in", [13889.361, 12473.986, 0.040347431], [], 0, "CAN_COLLIDE"];
  _vehicle_233 = _this;
  _this setDir -713.91479;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [13889.361, 12473.986, 0.040347431];
};

_vehicle_238 = objNull;
if (true) then
{
  _this = createVehicle ["Land_dum_mesto2", [14073.06, 12473.59, 0.0033320296], [], 0, "CAN_COLLIDE"];
  _vehicle_238 = _this;
  _this setDir 111.188;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14073.06, 12473.59, 0.0033320296];
};

_vehicle_241 = objNull;
if (true) then
{
  _this = createVehicle ["Land_dum_mesto2", [14052.706, 12466.291, 0.0033244151], [], 0, "CAN_COLLIDE"];
  _vehicle_241 = _this;
  _this setDir 112.50559;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14052.706, 12466.291, 0.0033244151];
};

_vehicle_243 = objNull;
if (true) then
{
  _this = createVehicle ["Land_dum_mesto2", [14032.231, 12462.116, 0.16329072], [], 0, "CAN_COLLIDE"];
  _vehicle_243 = _this;
  _this setDir 111.09888;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14032.231, 12462.116, 0.16329072];
};

_vehicle_245 = objNull;
if (true) then
{
  _this = createVehicle ["Land_dum_mesto2", [14095.471, 12479.883, 0.0033740061], [], 0, "CAN_COLLIDE"];
  _vehicle_245 = _this;
  _this setDir 111.09888;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14095.471, 12479.883, 0.0033740061];
};

_vehicle_248 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_GeneralStore_01a", [14383.14, 12589.358, 0.051491007], [], 0, "CAN_COLLIDE"];
  _vehicle_248 = _this;
  _this setDir 51.201694;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14383.14, 12589.358, 0.051491007];
};

_vehicle_250 = objNull;
if (true) then
{
  _this = createVehicle ["Land_a_stationhouse", [14451.107, 12585.376, 0.055913057], [], 0, "CAN_COLLIDE"];
  _vehicle_250 = _this;
  _this setDir -109.08717;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14451.107, 12585.376, 0.055913057];
};

_vehicle_252 = objNull;
if (true) then
{
  _this = createVehicle ["Land_rail_station_big", [14107.46, 12537.889, -0.044390291], [], 0, "CAN_COLLIDE"];
  _vehicle_252 = _this;
  _this setDir -89.815132;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14107.46, 12537.889, -0.044390291];
};

_vehicle_262 = objNull;
if (true) then
{
  _this = createVehicle ["Land_dum_mesto2", [14160.312, 12534.815, 0.00016021729], [], 0, "CAN_COLLIDE"];
  _vehicle_262 = _this;
  _this setDir 90.176277;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14160.312, 12534.815, 0.00016021729];
};

_vehicle_265 = objNull;
if (true) then
{
  _this = createVehicle ["Land_dum_mesto_in", [14154.884, 12501.169, 0.0058159484], [], 0, "CAN_COLLIDE"];
  _vehicle_265 = _this;
  _this setDir 344.83966;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14154.884, 12501.169, 0.0058159484];
};

_vehicle_268 = objNull;
if (true) then
{
  _this = createVehicle ["HeliH", [14268.603, 12716.016, -0.01], [], 0, "CAN_COLLIDE"];
  _vehicle_268 = _this;
  _this setDir 0.01;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14268.603, 12716.016, -0.01];
};

_vehicle_271 = objNull;
if (true) then
{
  _this = createVehicle ["Camp", [14277.733, 12731.597, -0.01], [], 0, "CAN_COLLIDE"];
  _vehicle_271 = _this;
  _this setDir -101.5187;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14277.733, 12731.597, -0.01];
};

_vehicle_276 = objNull;
if (true) then
{
  _this = createVehicle ["Camp", [14278.93, 12725.351, -0.01], [], 0, "CAN_COLLIDE"];
  _vehicle_276 = _this;
  _this setDir -102.18977;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14278.93, 12725.351, -0.01];
};

_vehicle_278 = objNull;
if (true) then
{
  _this = createVehicle ["Camp", [14280.389, 12718.989, -0.01], [], 0, "CAN_COLLIDE"];
  _vehicle_278 = _this;
  _this setDir -102.56635;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14280.389, 12718.989, -0.01];
};

_vehicle_280 = objNull;
if (true) then
{
  _this = createVehicle ["Camp", [14281.788, 12712.48, -0.01], [], 0, "CAN_COLLIDE"];
  _vehicle_280 = _this;
  _this setDir -102.56635;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14281.788, 12712.48, -0.01];
};

_vehicle_282 = objNull;
if (true) then
{
  _this = createVehicle ["Camp", [14283.073, 12706.212, -0.01], [], 0, "CAN_COLLIDE"];
  _vehicle_282 = _this;
  _this setDir -102.56635;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14283.073, 12706.212, -0.01];
};

_vehicle_285 = objNull;
if (true) then
{
  _this = createVehicle ["CampEast", [14254.024, 12729.128, -0.01], [], 0, "CAN_COLLIDE"];
  _vehicle_285 = _this;
  _this setDir 259.13318;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14254.024, 12729.128, -0.01];
};

_vehicle_287 = objNull;
if (true) then
{
  _this = createVehicle ["CampEast", [14260.703, 12698.821, -0.01], [], 0, "CAN_COLLIDE"];
  _vehicle_287 = _this;
  _this setDir -100.77284;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14260.703, 12698.821, -0.01];
};

_vehicle_292 = objNull;
if (true) then
{
  _this = createVehicle ["Camp", [14260.153, 12707.241, -0.01], [], 0, "CAN_COLLIDE"];
  _vehicle_292 = _this;
  _this setDir 78.151505;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14260.153, 12707.241, -0.01];
};

_vehicle_293 = objNull;
if (true) then
{
  _this = createVehicle ["Camp", [14258.528, 12713.731, -0.01], [], 0, "CAN_COLLIDE"];
  _vehicle_293 = _this;
  _this setDir 78.151505;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14258.528, 12713.731, -0.01];
};

_vehicle_294 = objNull;
if (true) then
{
  _this = createVehicle ["Camp", [14257.203, 12719.968, -0.01], [], 0, "CAN_COLLIDE"];
  _vehicle_294 = _this;
  _this setDir 78.151505;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14257.203, 12719.968, -0.01];
};

_vehicle_302 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_L", [13936.005, 12611.745, 0.0022899311], [], 0, "CAN_COLLIDE"];
  _vehicle_302 = _this;
  _this setDir 232.67963;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [13936.005, 12611.745, 0.0022899311];
};

_vehicle_305 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_01", [13923.075, 12686.629, 0.0068891854], [], 0, "CAN_COLLIDE"];
  _vehicle_305 = _this;
  _this setDir -133.58383;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [13923.075, 12686.629, 0.0068891854];
};

_vehicle_307 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_BuildingWIP", [13813.914, 12821.889, 0.28120998], [], 0, "CAN_COLLIDE"];
  _vehicle_307 = _this;
  _this setDir -264.93076;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [13813.914, 12821.889, 0.28120998];
};

_vehicle_308 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_Office01", [14028.728, 12605.14, -0.14629401], [], 0, "CAN_COLLIDE"];
  _vehicle_308 = _this;
  _this setDir 97.814407;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14028.728, 12605.14, -0.14629401];
};

_vehicle_314 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_Hospital", [14091.364, 12446.477, -0.0099999998], [], 0, "CAN_COLLIDE"];
  _vehicle_314 = _this;
  _this setDir 153.99374;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14091.364, 12446.477, -0.0099999998];
};

_vehicle_728 = objNull;
if (true) then
{
  _this = createVehicle ["Land_dum_mesto2", [14326.09, 12454.547, 0.0002746582], [], 0, "CAN_COLLIDE"];
  _vehicle_728 = _this;
  _this setDir 180.20685;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14326.09, 12454.547, 0.0002746582];
};

_vehicle_731 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_Pub_01", [14250.317, 12637.221, -0.0099999998], [], 0, "CAN_COLLIDE"];
  _vehicle_731 = _this;
  _this setDir -169.84204;
  _this setVehicleInit "this setVectorUp [0,0,1];";
  _this setPos [14250.317, 12637.221, -0.0099999998];
};

processInitCommands;
runInitScript;
finishMissionInit;
