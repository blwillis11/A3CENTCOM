// XEH_initPlayerLocal.sqf
// Runs on each client when a local player is created. Adds STB73 support menu for whitelisted UIDs.

// this file will be called with _this = [player]
private _args = _this;
private _player = if (count _args > 0) then {_args select 0} else { nil };
if (isNil "_player") exitWith {};

diag_log format ["XEH_initPlayerLocal: running on %1, player=%2, uid=%3", ["CLIENT","SERVER"] select (isServer), name _player, getPlayerUID _player];

// Spawn a small retry loop to handle race conditions where ACE's interact
// system (and its functions) may not yet be registered when initPlayerLocal fires.
(_player) spawn {
	private _p = _this select 0;
	private _uid = getPlayerUID _p;
	private _maxAttempts = 6;
	private _attempt = 0;
	while { _attempt < _maxAttempts } do {
		if (isNil "ace_interact_menu_fnc_createAction") then {
			diag_log format ["XEH_initPlayerLocal: attempt %1 - ace_interact_menu_fnc_createAction not available yet for player %2 (uid=%3)", _attempt + 1, name _p, _uid];
			_attempt = _attempt + 1;
			sleep 1;
		} else {
			diag_log format ["XEH_initPlayerLocal: calling OPTRE_fnc_addFireSupportMenu73STB for player %1 (uid=%2) on attempt %3", name _p, _uid, _attempt + 1];
			// Call the function as registered in CfgFunctions (OPTRE tag)
			[_p] call OPTRE_fnc_addFireSupportMenu73STB;
			diag_log format ["XEH_initPlayerLocal: called OPTRE_fnc_addFireSupportMenu73STB for player %1 (uid=%2)", name _p, _uid];
			// Force loop exit by advancing attempt counter
			_attempt = _maxAttempts;
		};
	};
	if (_attempt >= _maxAttempts) then {
		diag_log format ["XEH_initPlayerLocal: failed to add support menu for player %1 (uid=%2) after %3 attempts", name _p, _uid, _maxAttempts];
	};
};

// End of XEH_initPlayerLocal

[this] call STB73_fnc_locateBlacklisted;

// End of XEH_initPlayerLocal
