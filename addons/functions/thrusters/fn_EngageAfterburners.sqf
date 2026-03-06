/*
	Author: Fireteam Zulu (Vespade) modified by 105th | S-4 Logistics (Luke)
	
	Description:
	Enable afterburners on selected vehicle
	
	Parameter(s):
	_this select 0: OBJECT - vehicle to enable afterburners for
	
	Returns:
	NONE
*/

params ["_vehicle", ["_silent", false]];

if (!(_vehicle getVariable "CC_Afterburners_Usable")) exitWith {};

if (!(_silent)) then {
	hint "ENGAGING AFTERBURNERS";
};

private _hullDamage = _vehicle getHitPointDamage "hithull";
if (_hullDamage > 0.5) exitWith {
	if (!(_silent)) then {
		hint "CANNOT ENGAGE AFTERBURNERS, TOO DAMAGED";
	};
};

_vehicle setVariable ["CC_Airbrakes_Active", false];
_vehicle setVariable ["CC_Thrusters_Engaged", true];
_vehicle setVariable ["CC_Afterburners_Engaged", true];

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
	if (_hullDamage > 0.5) exitWith {
		removeMissionEventHandler ["EachFrame", CC_ThrustersEH];
		if (_hullDamage < 0.75) then {
			_vehicle setVariable ["CC_Afterburners_Engaged", false];
			_vehicle call CC_fnc_engageForwardThruster;
			hint "DISENGAGING AFTERBURNERS, REVERTING TO FORWARD THRUSTERS DUE TO DAMAGE";
		} else {
			_vehicle setVariable ["CC_Thrusters_Engaged", false];
			_vehicle setVariable ["CC_Afterburners_Engaged", false];
			hint "DISENGAGING ALL THRUSTERS, DUE TO DAMAGE";
		};
	};
	if (speed _vehicle <= 900) then {
		private _speed = ((CC_ThrusterMultiplier*2)/diag_fps);
		[_vehicle, _speed] call CC_fnc_changeSpeed;
	};
}, [_vehicle]];
