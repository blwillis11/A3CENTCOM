/* ----------------------------------------------------------------------------
Function: OPTRE_fnc_HEVDoor

Description:
	Performs desired action for an HEVs door.
	(eject it or just open it)

Parameters:
	0: _hev <OBJECT> - The HEV to affect the changes on.
    1: _mode <NUMBER> - 0 to eject door, 1 to open
    2: _ejectGunner <BOOL> - Should the player be automatically kicked out of HEV?

Returns:
	NOTHING

Examples:
    (begin example)

		[myHEV,0,true] call OPTRE_fnc_HEVDoor;

    (end)

Author:
	Big_Wilk,
	Modified by: Ansible2 // Cipher
---------------------------------------------------------------------------- */
params [
	["_hev",objNull,[objNull]],
	["_mode",0,[1]],
	["_ejectGunner",true,[true]]
];

null = switch _mode do {

	case 0: {

		private _dir = getDir _hev;

		private _door = "DMNS_SOEIV_Door" createVehicle [0,0,0];
		_door setDir (_dir - 180);
		_door attachTo [_hev,[0,1,0.5]];

		_hev setobjecttextureglobal [1,""];
		_hev setobjecttextureglobal [2,""];
		_hev setobjecttextureglobal [3,""];
		_hev setobjecttextureglobal [6,""];
		_hev setobjecttextureglobal [7,""];
		_hev setobjecttextureglobal [8,""];
		_hev setobjecttextureglobal [9,""];
		_hev setobjecttextureglobal [10,""];
		_hev setobjecttextureglobal [11,""];
		_hev animate ["door_hide_1", 1];

		detach _door;
		_door setDir (_dir - 180);
		_door setVelocity ([velocity _hev, direction _hev, 20, 2] call OPTRE_fnc_GetVelocityWithAddedSpeedDirAndDown);

		playSound3d ["OPTRE_core\data\sounds\OPTRE_Sounds_HEV_Pop.ogg", _door, false, getPosASL _door, 5, 1, 250];

		[
			{
				[[_this select 0],false] remoteExecCall ["DMNS_fnc_CleanUp", 2, false];
			},
			[_door],
			1.5
		] call CBA_fnc_WaitAndExecute;

	};

	case 1: {

		_hev setobjecttextureglobal [1,""];
		_hev setobjecttextureglobal [3,""];
		_hev setobjecttextureglobal [6,""];
		_hev setobjecttextureglobal [7,""];
		_hev setobjecttextureglobal [8,""];
		_hev setobjecttextureglobal [9,""];
		_hev setobjecttextureglobal [10,""];
		_hev setobjecttextureglobal [11,""];
		_hev animate ["door_translation_a", 1];
		_hev animate ["door_translation_b", 1];
		_hev animate ["door_translation_c", 1];
		_hev animate ["door_translation_d", 1];
		_hev animate ["door_translation_e", 1];
		_hev animate ["door_translation_f", 1];

	};

};


if (_ejectGunner) then {

	_hev setVelocity [0,0,0];

	[
		{
			params [
				["_hev",objNull,[objNull]]
			];
			private _gunner = gunner _hev;

			unassignVehicle _gunner;
			moveOut _gunner;
			_gunner setVehiclePosition [getPosATLVisual _hev,[],3,"NONE"];
		},
		[_hev],
		2
	] call CBA_fnc_waitAndExecute;
};
