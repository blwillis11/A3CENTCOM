// Run on each client when they join the server
// Checks for blacklisted mods and sends the offending player to the lobby.

if (!hasInterface) exitWith {};

private _blacklistedMods = [
    "Roys Arsenal",
    "ACE Interact Personal Arsenal",
    "Personal ACE Arsenal",
    "Personal Arsenal (XLA)",
    "Nks Arsenal (Personal ACE + Virtual arsenals)",
    "Hotshots Personal Arsenal",
    "Personal Arsenal",
    "Personal Arsenal GP Version",
    "DCON's Multiplayer Vehicle Spawner",
    "DCON Vehicle Spawner"
]; // add other mod names here if needed

// Small delay to ensure mod info is populated on join
sleep 0.5;

private _loadedMods = getLoadedModsInfo;

// Single-handled matching: stop after the first blacklist match to avoid duplicate dialogs/countdowns
private _handled = false;

for "_i" from 0 to (count _blacklistedMods - 1) do {
    if (_handled) exitWith {};
    private _modName = _blacklistedMods select _i;
    private _needle = toLower _modName;

    for "_j" from 0 to (count _loadedMods - 1) do {
        if (_handled) exitWith {};
        private _entry = _loadedMods select _j;
        private _entryStr = toLower (str _entry);

        // substring match against the stringified entry (robust to varying shapes)
        if ((_entryStr find _needle) > -1) then {
            _handled = true;

            private _msg = format ["You are using a mod that isn't allowed. (%1)", _modName];
            [_msg, "Use of Unapproved Mod", "I Understand"] call BIS_fnc_guiMessage;
            titleText ["", "BLACK OUT"];
            disableUserInput true;
            hint format ["%1 You will be kicked to the lobby in 15 seconds!", _msg];
            sleep 5;
            hint format ["%1 You will be kicked to the lobby in 10 seconds!", _msg];
            sleep 5;
            hint format ["%1 You will be kicked to the lobby in 5 seconds!", _msg];
            sleep 5;
            titleText ["", "BLACK IN"];
            disableUserInput false;
            failMission "end1";
        };
    };
};
