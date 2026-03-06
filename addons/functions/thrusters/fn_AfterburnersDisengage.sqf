_pelican = _this;
_pelican setvariable ["CC_Thrusters_Engaged",true,true];
_pelican setvariable ["CC_Afterburners_Engaged",false,true];
hint "DISENGAGING AFTERBURNERS\n CONTINUING FORWARD THRUST";
sleep 0.5;
if (_vehicle getVariable ["CC_AnimateThrusters", false]) then {
	_vehicle spawn CC_fnc_ThrusterDeAnimate;
};

if (!(isNil "CC_ThrustersEH")) then {
	removeMissionEventHandler ["EachFrame", CC_ThrustersEH];
	CC_ThrustersEH = nil;
};
if (speed _pelican > 650) then {
		_vel = velocity _pelican;
		_dir = direction _pelican;
		_speed = -15;
		_pelican setVelocity [
		(_vel select 0) + (sin _dir * _speed), 
		(_vel select 1) + (cos _dir * _speed), 
		(_vel select 2)
		];
	};
while {((_pelican getvariable ["CC_Thrusters_Engaged",false]) AND (alive _pelican))} do
{
	if (speed _pelican <= 350) then {
		_vel = velocity _pelican;
		_dir = direction _pelican;
		_speed = 8;
		_pelican setVelocity [
		(_vel select 0) + (sin _dir * _speed), 
		(_vel select 1) + (cos _dir * _speed), 
		(_vel select 2)
		];
	};
	sleep 0.5;
};
