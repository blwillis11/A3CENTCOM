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

// if (_vehicle getVariable ["CC_Afterburners_Usable",false]) exitWith{};

if (_vehicle getVariable ["CC_Afterburners_Engaged", false]) exitWith {};

if (_vehicle getVariable ["CC_Thrusters_Engaged", false]) exitWith {
	[_vehicle] call CC_fnc_engageAfterburners;
};
[_vehicle] call CC_fnc_engageForwardThruster;
