params ["_vehicle", ["_speed", 0]];

if (_speed == 0) exitWith {};

private _vel = velocity _vehicle;
private _dir = direction _vehicle;
diag_log format ["CC: ChangeSpeed for %1 - beforeVel=%2, dir=%3, delta=%4", typeOf _vehicle, _vel, _dir, _speed];

private _newVel = [
	(_vel select 0) + (sin _dir * _speed),
	(_vel select 1) + (cos _dir * _speed),
	(_vel select 2)
];

_vehicle setVelocity _newVel;

diag_log format ["CC: ChangeSpeed for %1 - afterVel=%2", typeOf _vehicle, _newVel];
