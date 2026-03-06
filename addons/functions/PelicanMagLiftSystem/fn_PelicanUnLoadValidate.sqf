private _varName = format["%1_Pelican_AttachedToVehiclesEffect", "Splits"];
private _pelican = (_this select 0);
private _vehicles = _pelican getVariable [_varName, []];

//Abort empty.
if ((count _vehicles) isEqualTo 0) exitWith { Nil; };

//Abort and run the supply pods if no non-pod vehicles are present.
private _hasSupplyPod = false;
private _vicCount = {
	!(["SupplyPod", (typeOf _x)] call BIS_fnc_inString);
} count _vehicles;
if (_vicCount isEqualTo 0) exitWith {
	_pelican spawn Splits_fnc_PelicanLoad_UnloadAllSupplyPods;
};

//Abort nonclears.
if (((getPos _pelican) select 2) < 2) exitWith {
	titleText ["Cannot drop below 2 meters! PULL UP!", "PLAIN DOWN", -1, true, true];
	playSound "FD_CP_Not_Clear_F";
};

//_pelican allowDamage false;
player action ["LandGearUp", _pelican];
sleep 3.4;

//Drop the damn thing(s).
{
	//Detach the thing and begin a check for the 'chute system.
	detach _x;
	playSound "FD_Finish_F";
	private _Altitude = getPos _pelican select 2;
	titleText ["Dropping the payload!", "PLAIN DOWN", -1, true, true];
	sleep 0.34;
} forEach _vehicles;

//Void the array.
_pelican setVariable [_varName, [], true];

//Return nothing.
Nil;
