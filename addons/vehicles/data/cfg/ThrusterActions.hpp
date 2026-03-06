class AirbrakeEngage
{
	animPeriod=5;
	condition="(player == driver this) AND (alive this) AND ((speed this) > 50)";
	displayName="<t color='#F28D00'>Engage Airbrakes";
	displayNameDefault="<t color='#F28D00'>Engage Airbrakes";
	onlyForPlayer=0;
	position="cargo_door_handle";
	priority=10;
	radius=100000;
	showWindow=0;
	statement="0 = this spawn CC_fnc_EngageAirbrakes;";
	textToolTip="<t color='#F28D00'>Engage Airbrakes";

	userActionID=58;
};

class Thruster400Engage
{
	animPeriod=5;
	condition="(!(this getvariable [""CC_Thrusters_Engaged"",false])) AND (!(this getvariable [""CC_Afterburners_Engaged"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND (((getPosATL this) select 2) > 1)";
	displayName="<t color='#04B45F'>Engage Forward Thrusters";
	displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
	onlyForPlayer=0;
	position="cargo_door_handle";
	priority=10;
	radius=100000;
	showWindow=0;
	statement="0 = this spawn CC_fnc_EngageForwardThruster;";
	textToolTip="<t color='#04B45F'>Engage Forward Thrusters";

	userActionID=52;
};

class Thruster400Disengage
{
	animPeriod=5;
	condition="(this getvariable [""CC_Thrusters_Engaged"",false]) AND (player == driver this) AND (alive this)";
	displayName="<t color='#FCE205'>Disengage Forward Thrusters";
	displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
	onlyForPlayer=0;
	position="cargo_door_handle";
	priority=10;
	radius=100000;
	showWindow=0;
	statement="0 = this spawn CC_fnc_ThrusterDisengage;";
	textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";

	userActionID=53;
};
