params ["_name","_trait"];

private _time = serverTime;

CC_TraitSelector_Logs pushBack [_name,_trait,_time];
publicVariable "CC_TraitSelector_Logs";