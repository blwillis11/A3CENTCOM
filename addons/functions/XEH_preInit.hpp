#include "script_component.hpp"
functions = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

functions = true;

if(OPTRE_Debug_Mode) then {
	diag_log format["[OPTRE-ACE placedown/pickup] Loading OPTRE:ACE placedown/pickup Scripts"];
};

[
	"OPTRE_FunctionsLibrary\ace\placedown_pickup\functions\place_down.sqf", 
	"OPTRE_ace_fnc_place_down_vic"
] call CBA_fnc_compileFunction;

[
	"OPTRE_FunctionsLibrary\ace\placedown_pickup\functions\pick_up.sqf", 
	"OPTRE_ace_fnc_pick_up_vic"
] call CBA_fnc_compileFunction;


if(OPTRE_Debug_Mode) then {
	diag_log format["[OPTRE-ACE placedown/pickup] Done loading OPTRE:ACE placedown/pickup Scripts"];
};
