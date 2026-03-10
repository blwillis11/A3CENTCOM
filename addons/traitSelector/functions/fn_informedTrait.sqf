params ["_trait"];


private _display = uiNamespace getVariable "CC_TraitSelector_ActiveUI";
if(isNil "_display") exitWith {};

private _ctrlText =  _display displayCtrl 2301;

private _text = ("You have been given " + _trait + " Perms.");
if (_trait == "None") then
{
	_text = ("All Traits have been removed.")
};

_ctrlText ctrlSetText _text;
_ctrlText ctrlSetFade 0;
_ctrlText ctrlCommit 0;

_ctrlText ctrlSetFade 1;
_ctrlText ctrlCommit 8;
