["CAManBase", "hitPart", {
    (_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];
    private _increase = getNumber (configFile >> "CfgAmmo" >> (_ammo select 4) >> "dosage");
    if(_increase <= 0) exitWith {};

    private _initialDosage = _target getVariable ["dosage",0];

    if(_initialDosage > 0) then {
        private _lastDosage = _target getVariable ["lastDosage",([time,serverTime] select isMultiplayer)];
        private _timeSince = ([time,serverTime] select isMultiplayer) - _lastDosage;

        _initialDosage = _initialDosage - ((_timeSince/30) * 0.1);
        if(_initialDosage < 0) then {
            _initialDosage = 0;
        };
    };

    private _dosage = _initialDosage + _increase;
    if(_dosage >= 1) then {
        [_target, true, floor(_dosage * 90)] call ace_medical_fnc_setUnconscious;
    };
    _target setVariable ["lastDosage",([time,serverTime] select isMultiplayer),true];
    _target setVariable ["dosage",_dosage,true];
}] call CBA_fnc_addClassEventHandler;
