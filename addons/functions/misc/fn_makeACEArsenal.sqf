#include "..\script_component.hpp"
/*
 * Authors: Im Kreepy
 * Added an ACE Arsenal to synced objects. Does not work with Simple Objects.
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
 * [_logic,_units,_activated] call jc_modules_fnc_makeAceArsenal
 *
 * Public: No
 */

params [
	["_logic", objNull, [objNull]],
	["_units", [], [[]]],
	["_activated", true, [true]]
];

{
    [_x, true] call ace_arsenal_fnc_initBox;
} forEach _units;
true;
