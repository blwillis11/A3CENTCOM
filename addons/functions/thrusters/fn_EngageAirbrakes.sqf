params ["_vehicle"];

if (speed _vehicle <= 50) exitWith {};

hint "ACTIVATING AIR BRAKES";

if (_vehicle getVariable ["CC_Airbrakes_Active", false]) exitWith {};

_vehicle setVariable ["CC_Airbrakes_Active", true];
_vehicle setVariable ["CC_Afterburners_Engaged", false];
_vehicle setVariable ["CC_Thrusters_Engaged", false];

if (_vehicle getVariable ["CC_AnimateThrusters", false]) then {
	_vehicle spawn CC_fnc_ThrusterDeAnimate;
};

if (!(isNil "CC_ThrustersEH")) then {
	removeMissionEventHandler ["EachFrame", CC_ThrustersEH];
	CC_ThrustersEH = nil;
};

CC_ThrustersEH = addMissionEventHandler ["EachFrame", {
	if (diag_frameNo % 2 == 0) exitWith {}; // Every other Frame
	private _vehicle = (_thisArgs#0);
	if (speed _vehicle > 50) then {
		private _speed = -(CC_ThrusterMultiplier/diag_fps);
		[_vehicle, _speed] call CC_fnc_changeSpeed;
	} else {
		_vehicle setVariable ["CC_Airbrakes_Active", false];
		removeMissionEventHandler ["EachFrame", CC_ThrustersEH];
	};
}, [_vehicle]];
