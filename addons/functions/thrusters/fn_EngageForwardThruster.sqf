/*
	Author: Fireteam Zulu (Vespade) modified by 105th | S-4 Logistics (Luke) further adapted for 73rd STB S-4 mod Team
	
	Description:
	Enable forward thrusters on selected vehicle
	
	Parameter(s):
	_this select 0: OBJECT - vehicle to enable afterburners for
	
	Returns:
	NONE
*/

params ["_vehicle", ["_silent", false]];

if (!(_vehicle getVariable "CC_Thrusters_Usable")) exitWith {};

if (!(_silent)) then {
	hint "ENGAGING FORWARD THRUSTERS";
};

private _hullDamage = _vehicle getHitPointDamage "hithull";
if (_hullDamage > 0.75) exitWith {
	if (!(_silent)) then {
		hint "CANNOT ENGAGE AFTERBURNERS, TOO DAMAGED";
	};
};

_vehicle setVariable ["CC_Airbrakes_Active", false];
_vehicle setVariable ["CC_Thrusters_Engaged", true];

if (_vehicle getVariable ["CC_AnimateThrusters", false]) then {
	_vehicle spawn CC_fnc_ThrusterAnimate;
};

if (!(isNil "CC_ThrustersEH")) then {
	removeMissionEventHandler ["EachFrame", CC_ThrustersEH];
	CC_ThrustersEH = nil;
};

CC_ThrustersEH = addMissionEventHandler ["EachFrame", {
	if (diag_frameNo % 2 == 0) exitWith {}; // Every other Frame
	private _vehicle = (_thisArgs#0);
	private _hullDamage = _vehicle getHitPointDamage "hithull";
	if (_hullDamage > 0.75) exitWith {
		removeMissionEventHandler ["EachFrame", CC_ThrustersEH];
		_vehicle setVariable ["CC_Thrusters_Engaged", false];
		hint "DISENGAGING FORWARD THRUSTERS, DUE TO DAMAGE";
	};
	private _speed = (CC_ThrusterMultiplier / diag_fps);
	private _speedBefore = speed _vehicle;
	if (_speed == 0) exitWith {};
	if (_speedBefore <= 350) then {
		diag_log format ["CC: Thruster increment computed %1 (mult=%2, fps=%3) for %4. speedBefore=%5", _speed, CC_ThrusterMultiplier, diag_fps, typeOf _vehicle, _speedBefore];
		[_vehicle, _speed] call CC_fnc_ChangeSpeed;
		private _speedAfter = speed _vehicle;
		diag_log format ["CC: After ChangeSpeed for %1, speedAfter=%2", typeOf _vehicle, _speedAfter];
	};
}, [_vehicle]];
