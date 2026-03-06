private _kdeh = (findDisplay 46) displayAddEventHandler ["KeyDown", "

	switch (_this select 1) do {

		case 16: {_HEV = vehicle player; _dir = getDir _HEV; _HEV setDir _dir - 0.5;};
		case 18: {_HEV = vehicle player; _dir = getDir _HEV; _HEV setDir _dir + 0.5;};
	};

	false;

"];

private _keh = player addEventHandler ["Killed",{
    private _kdeh_local = (findDisplay 46) getVariable ["DMNS_HEV_CONTROL_KDEH", objNull];
    if (!isNull _kdeh_local) then {(findDisplay 46) displayRemoveEventHandler ["KeyDown", _kdeh_local]; (findDisplay 46) setVariable ["DMNS_HEV_CONTROL_KDEH", objNull];};
}];

// store handler ids on player/display for cross-file access
(findDisplay 46) setVariable ["DMNS_HEV_CONTROL_KDEH", _kdeh, false];
player setVariable ["DMNS_HEV_CONTROL_KEH", _keh, false];

/*
//case 30: { _HEV = vehicle player; _v = velocity _HEV; _HEV setVelocity [(_v select 0) - 1, (_v select 1), (_v select 2)]; };
//case 32: { _HEV = vehicle player; _v = velocity _HEV; _HEV setVelocity [(_v select 0) + 1, (_v select 1), (_v select 2)]; };
//case 31: { _HEV = vehicle player; _v = velocity _HEV; _HEV setVelocity [(_v select 0), (_v select 1) - 1, (_v select 2)]; };
//case 17: { _HEV = vehicle player; _v = velocity _HEV; _HEV setVelocity [(_v select 0), (_v select 1 ) + 1, (_v select 2)]; };

//([velocity _vehicle, direction _vehicle, (speed _vehicle - 20)] call DMNS_fnc_GetVelocityWithAddedSpeedDirAndDown)

moduleName_keyDownEHId = (findDisplay 46) displayAddEventHandler ["KeyDown", "

switch (_this select 1) do {
	case 30: { _HEV = vehicle player; _v = velocity _HEV; _HEV setVelocity ([_v, 90, ((speed _HEV) - 20), ((_v select 2) - 0)] call DMNS_fnc_GetVelocityWithAddedSpeedDirAndDown); hint 'left'; 		};
	case 32: { _HEV = vehicle player; _v = velocity _HEV; _HEV setVelocity ([_v, 270, ((speed _HEV) - 20),((_v select 2) - 0)] call DMNS_fnc_GetVelocityWithAddedSpeedDirAndDown); hint 'right'; 		};
	case 31: { _HEV = vehicle player; _v = velocity _HEV; _HEV setVelocity ([_v, 0, ((speed _HEV) - 20),  ((_v select 2) - 0)] call DMNS_fnc_GetVelocityWithAddedSpeedDirAndDown); hint 'forward'; 	};
	case 17: { _HEV = vehicle player; _v = velocity _HEV; _HEV setVelocity ([_v, 180, ((speed _HEV) - 20),((_v select 2) - 0)] call DMNS_fnc_GetVelocityWithAddedSpeedDirAndDown); hint 'backwards'; 	};

	case 16: {_HEV = vehicle player; _dir = getDir _HEV; _HEV setDir _dir - 0.5;};
	case 18: {_HEV = vehicle player; _dir = getDir _HEV; _HEV setDir _dir + 0.5;};
};
"];
*/

true;
