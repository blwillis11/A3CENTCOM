params ["_vehicle"];

private _className = typeOf _vehicle;
private _fuelCap = getNumber (configFile >> "CfgVehicles" >> _className >> "fuelCapacity");
private _fuelConsumption = getNumber (configFile >> "CfgVehicles" >> _className >> "fuelConsumptionRate");
private _currentFuel = _fuelCap * (fuel _vehicle);
private _flightTimeSeconds = _currentFuel/_fuelConsumption;

[_flightTimeSeconds, "HH:MM:SS"] call BIS_fnc_secondsToString
