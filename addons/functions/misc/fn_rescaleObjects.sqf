#include "..\script_component.hpp"
/*
 * Authors: Im Kreepy
 * Rescales object to a specified amount.
 *
 * Arguments:
 * 0: _logic (optional, default: objNull) <OBJECT>
 * 1: _units (optional, default: []) <ARRAY>
 * 2: _activated (optional, default: true) <BOOL>
 *
 * Return Value:
 * Module Activated <BOOL>
 *
 * Example:
 * [_logic,_units,_activated] call jc_modules_fnc_rescaleObjects
 *
 * Public: No
 */

params [
	["_logic", objNull, [objNull]],
	["_units", [], [[]]],
	["_activated", true, [true]]
];

private _scale = _logic getVariable ["RescaleFactor", 1];
private _objectPosition = getPosATL (_units select 0);

/* If called from a client, forward the request to the server and return.
   If on the server, perform the work (create attach object, spawn worker).
*/
if (!isServer) then {
	[_logic, _units, _activated] remoteExecCall ["CC_fnc_rescaleObjects", 2];
	true
} else {
	private _attachObject = "CC_Stand_In" createVehicle _objectPosition;
	hideObjectGlobal _attachObject;

/*
 Run the actual rescale work in a spawned thread. The original code used
 waitUntil/sleep which causes a "suspending not allowed in this context"
 error when the function is executed with `call` (or in other non-suspending
 contexts like init). By spawning a new thread we return immediately and
 perform sleeps/waitUntil safely.
*/
	[_units, _attachObject, _scale] spawn {
	params ["_unitsArr", "_attachObj", "_scaleVal"];
	{
		private _unit = _x;
		private _unitDir = getDir _unit;
		_attachObj setDir _unitDir;
		_unit attachTo [_attachObj];
		waitUntil { attachedTo _unit == _attachObj };
		if (!simulationEnabled _unit) then {
			_unit enableSimulationGlobal true;
		};
		/* Scale the original object in-place on the server so the change
		   replicates to clients. Avoid deleting/creating networked objects
		   which can remove them or create local-only objects. */
		_unit setObjectScale _scaleVal;
	} forEach _unitsArr;
	true
	};
};
