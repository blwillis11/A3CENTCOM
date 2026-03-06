/* Run by server */

if !isServer exitWith {};

if (isNil "OPTRE_SupplyPod_CleanUpScript_Array") then {

	OPTRE_SupplyPod_CleanUpScript_Array = [];
	publicVariable "OPTRE_SupplyPod_CleanUpScript_Array";
	
	OPTRE_SupplyPod_CleanUpScript_MaxPods = 6;
	publicVariable "OPTRE_SupplyPod_CleanUpScript_MaxPods";
	
};

OPTRE_SupplyPod_CleanUpScript_Array = OPTRE_SupplyPod_CleanUpScript_Array - [objNull];

_podsToAdd = _this select 0;
OPTRE_SupplyPod_CleanUpScript_Array pushBack _podsToAdd;
publicVariable "OPTRE_SupplyPod_CleanUpScript_Array";

while {(count OPTRE_SupplyPod_CleanUpScript_Array > OPTRE_SupplyPod_CleanUpScript_MaxPods)} do {

	_pod = OPTRE_SupplyPod_CleanUpScript_Array select 0;
	OPTRE_SupplyPod_CleanUpScript_Array deleteAt 1;
	publicVariable "OPTRE_SupplyPod_CleanUpScript_Array";
	deleteVehicle _pod;
	
};

true
