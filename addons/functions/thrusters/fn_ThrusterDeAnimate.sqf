params ["_pelican"];

sleep .2;

while { !(_pelican getVariable ["CC_Thrusters_Engaged", false]) AND !(((getObjectTextures _pelican) select 1) == "") } do {
	_pelican setObjectTextureGlobal [1, ""];
	sleep .4;
};
