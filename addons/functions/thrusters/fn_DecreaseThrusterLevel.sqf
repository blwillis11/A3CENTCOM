/*
	Author: Fireteam Zulu (Vespade) modified by 105th | S-4 Logistics (Luke)
	
	Description:
	Enable afterburners on selected vehicle
	
	Parameter(s):
	_this select 0: OBJECT - vehicle to enable afterburners for
	
	Returns:
	NONE
*/

params ["_vehicle"];

if (_vehicle getVariable ["CC_Afterburners_Engaged", false]) exitWith {
	hint "DISENGAGING AFTERBURNERS, RETURNING TO FORWARD THRUSTERS";
	_vehicle setVariable ["CC_Afterburners_Engaged", false];

	if (!(isNil "CC_ThrustersEH")) then {
		removeMissionEventHandler ["EachFrame", CC_ThrustersEH];
		CC_ThrustersEH = nil;
	};

	[_vehicle, true] call CC_fnc_engageForwardThruster;
};

if (!(_vehicle getVariable ["CC_Thrusters_Engaged", false])) exitWith {};

hint "DISENGAGING FORWARD THRUSTERS";
_vehicle setVariable ["CC_Thrusters_Engaged", false];

if (!(isNil "CC_ThrustersEH")) then {
	removeMissionEventHandler ["EachFrame", CC_ThrustersEH];
	CC_ThrustersEH = nil;
};
