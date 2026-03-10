closeDialog 0;
private _display = createDialog ["CC_TraitSelector_Logs_UI",true];

private _listCtrlLogs = _display displayCtrl 1500;

private _data = +CC_TraitSelector_Logs;
reverse _data;

{
    private _data = _x;
    private _name = _data#0;
    private _trait = _data#1;
    private _time = serverTime - (_data#2);

    private _title = (_name + " has gave themselves " + _trait + " perms.");
    if(_trait == "None") then
    {
        _title = (_name + " has removed all their perms.")
    };

    private _index = _listCtrlLogs lbAdd _title;


    private _tooltip = str composeText ["Player: " + _name,parseText "\n","Trait: " + _trait,parseText "\n","Time: " + ([_time, "HH:MM:SS"] call BIS_fnc_secondsToString)];

    _listCtrlLogs lbSetTooltip [_index,_tooltip];

} forEach _data;