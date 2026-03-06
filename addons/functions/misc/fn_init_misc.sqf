// Public variables

CC_Zeus_Messages = [];

if(hasInterface) then {
    [] call CC_fnc_defaultKits;

    ["ace_unconscious", {_this call CC_fnc_DestroyEquipment;}] call CBA_fnc_addEventHandler;

};
