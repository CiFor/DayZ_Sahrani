private ["_target", "_caller", "_id", "_isNearFeed"];
 
_target = _this select 0;
_caller = _this select 1;
_id = _this select 2;
 
if (isNil "s_refueling_in_progress") then { s_refueling_in_progress = false; };
 
if (!s_refueling_in_progress) then
{
	_isNearFeed = count (nearestObjects [position _caller, ["Land_A_FuelStation_Feed","Land_fuelstation","land_fuelstation_army","land_benzina_schnell","indtanksmall","land_fuel_tank_big","land_fuel_tank_stairs"], 10]) > 0;
 
    if (!_isNearFeed) then
    {
        titleText ["You must be near a fuel station pump.", "PLAIN DOWN", 3];
        titleFadeOut 3;
    }
    else
    {
        s_refueling_in_progress = true;
 
        titleText ["Refueling", "PLAIN", 3];
 
        while {(vehicle _caller == _target) and (local _target)} do
        {
            private ["_velocity", "_cfcust"];
       
            _velocity = velocity _target;
            _cfcust = fuel _target;
 
            if ((_velocity select 0 > 1) or (_velocity select 1 > 1) or (_velocity select 2 > 1)) exitWith { titleText ["Refueling Cancelled", "PLAIN", 3]; };
            if (_cfcust >= 1.0) exitWith { titleText ["Refueling Complete", "PLAIN", 3]; };
 
            sleep 0.5;
   
            _cfcust = _cfcust + 0.005;
 
            if (_cfcust >= 1.0) then { _cfcust = 1.0; };
 
            _target setFuel _cfcust;
        };
 
        titleFadeOut 1;
 
        s_refueling_in_progress = false;
    };
};