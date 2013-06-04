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

_vehicle_669 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Mil_ControlTower", [9903.9619, 10080.465, -4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_669 = _this;
  _this setDir -0.46591365;
  _this setPos [9903.9619, 10080.465, -4.5776367e-005];
};

_vehicle_672 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_L", [9463.9111, 9911.6846, 9.1552734e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_672 = _this;
  _this setDir 90.43174;
  _this setPos [9463.9111, 9911.6846, 9.1552734e-005];
};

_vehicle_676 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_01", [9461.2178, 9838.8652, 0.00012207031], [], 0, "CAN_COLLIDE"];
  _vehicle_676 = _this;
  _this setDir 92.108932;
  _this setPos [9461.2178, 9838.8652, 0.00012207031];
};

_vehicle_680 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_L", [9552.2695, 9885.9229, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_680 = _this;
  _this setDir 90.43174;
  _this setPos [9552.2695, 9885.9229, 3.0517578e-005];
};

_vehicle_686 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Shed_Ind02", [9553.4814, 9866.9473, 9.1552734e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_686 = _this;
  _this setDir 89.769318;
  _this setPos [9553.4814, 9866.9473, 9.1552734e-005];
};

_vehicle_688 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Shed_Ind02", [9553.4834, 9850.374, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_688 = _this;
  _this setDir 90.753822;
  _this setPos [9553.4834, 9850.374, 4.5776367e-005];
};

_vehicle_691 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_Hospital", [10630.088, 9324.2734, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_691 = _this;
  _this setDir 359.89655;
  _this setPos [10630.088, 9324.2734, 0];
};

_vehicle_694 = objNull;
if (true) then
{
  _this = createVehicle ["Land_A_GeneralStore_01", [10753.238, 9326.7861, -0.3632679], [], 0, "CAN_COLLIDE"];
  _vehicle_694 = _this;
  _this setDir -563.96234;
  _this setPos [10753.238, 9326.7861, -0.3632679];
};

_vehicle_719 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_L", [10141.276, 9372.0039, 0.00018310547], [], 0, "CAN_COLLIDE"];
  _vehicle_719 = _this;
  _this setDir 0.56901193;
  _this setPos [10141.276, 9372.0039, 0.00018310547];
};

_vehicle_725 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_01", [10756.292, 9068.9951, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_725 = _this;
  _this setDir -69.280823;
  _this setPos [10756.292, 9068.9951, 4.5776367e-005];
};

_vehicle_737 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_01", [10614.809, 9743.3994, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_737 = _this;
  _this setDir -137.04869;
  _this setPos [10614.809, 9743.3994, 7.6293945e-006];
};

_vehicle_739 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_01", [10495.926, 9690.1719, -9.1552734e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_739 = _this;
  _this setDir -184.29146;
  _this setPos [10495.926, 9690.1719, -9.1552734e-005];
};

_vehicle_741 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_01", [10289.925, 9508.9063, -2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_741 = _this;
  _this setDir -266.4577;
  _this setPos [10289.925, 9508.9063, -2.2888184e-005];
};

_vehicle_743 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_01", [10378.771, 9442.6416, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_743 = _this;
  _this setDir -270.23721;
  _this setPos [10378.771, 9442.6416, 1.5258789e-005];
};

_vehicle_745 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_01", [10386.929, 9499.6748, 7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_745 = _this;
  _this setDir -179.45338;
  _this setPos [10386.929, 9499.6748, 7.6293945e-005];
};

_vehicle_747 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_01", [10567.635, 9664.4453, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_747 = _this;
  _this setDir -90.368271;
  _this setPos [10567.635, 9664.4453, 1.5258789e-005];
};

_vehicle_749 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_01", [10658.138, 9662.9082, 9.1552734e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_749 = _this;
  _this setDir -172.70374;
  _this setPos [10658.138, 9662.9082, 9.1552734e-005];
};

_vehicle_751 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_01", [10604.515, 9262.4912, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_751 = _this;
  _this setDir -359.81195;
  _this setPos [10604.515, 9262.4912, 0];
};

_vehicle_753 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_01", [10103.772, 9357.8105, 9.1552734e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_753 = _this;
  _this setDir -178.17758;
  _this setPos [10103.772, 9357.8105, 9.1552734e-005];
};

_vehicle_756 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_L", [10709.068, 8930.7793, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_756 = _this;
  _this setDir -89.273499;
  _this setPos [10709.068, 8930.7793, 0];
};

_vehicle_758 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_L", [10597.076, 8931.3652, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_758 = _this;
  _this setDir -0.27332029;
  _this setPos [10597.076, 8931.3652, -1.5258789e-005];
};

_vehicle_761 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_04", [10686.805, 8928.1055, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_761 = _this;
  _this setDir -270.28156;
  _this setPos [10686.805, 8928.1055, 4.5776367e-005];
};

_vehicle_763 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_04", [10036.982, 9411.1621, 5.3405762e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_763 = _this;
  _this setDir -178.7836;
  _this setPos [10036.982, 9411.1621, 5.3405762e-005];
};

_vehicle_766 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Workshop01_L", [10046.338, 9425.0195, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_766 = _this;
  _this setDir -269.19315;
  _this setPos [10046.338, 9425.0195, 0];
};

processInitCommands;
runInitScript;
finishMissionInit;
