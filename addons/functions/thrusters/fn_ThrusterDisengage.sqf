_pelican = _this;
_pelican setvariable ["CC_Thrusters_Engaged",false,true];
_pelican setvariable ["CC_Afterburners_Engaged",false,true];
hint format["DISENGAGING FORWARD THRUSTERS"];
sleep 0.5;
if (_vehicle getVariable ["CC_AnimateThrusters", false]) then {
	_vehicle spawn CC_fnc_ThrusterDeAnimate;
};

if (!(isNil "CC_ThrustersEH")) then {
	removeMissionEventHandler ["EachFrame", CC_ThrustersEH];
	CC_ThrustersEH = nil;
};
if (speed _pelican > 100) then {
	_vel = velocity _pelican;
	_dir = direction _pelican;
	_speed = -10;
	_pelican setVelocity [
	(_vel select 0) + (sin _dir * _speed), 
	(_vel select 1) + (cos _dir * _speed), 
	(_vel select 2)
	];
};
