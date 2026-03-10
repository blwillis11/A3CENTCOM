params ["_trait"];

private _name = name player;

switch (_trait) do
{
    case "CLS":
    {
        player setVariable ['ace_medical_medicClass',1,true];
        player setVariable ['ACE_IsEngineer',0,true];
        player setVariable ["ACE_isEOD",0,true];
    };
    case "Doctor":
    {
        player setVariable ['ace_medical_medicClass',2,true];
        player setVariable ['ACE_IsEngineer',0,true];
        player setVariable ["ACE_isEOD",0,true];
    };
    case "Engineer":
    {
        player setVariable ['ace_medical_medicClass',0,true];
        player setVariable ['ACE_IsEngineer',1,true];
        player setVariable ["ACE_isEOD",1,true];
    };
    case "ODST Engineer":
    {
        player setVariable ['ace_medical_medicClass',1,true];
        player setVariable ['ACE_IsEngineer',1,true];
        player setVariable ["ACE_isEOD",1,true];
    };
    default
    {
        player setVariable ['ace_medical_medicClass',0,true];
        player setVariable ['ACE_IsEngineer',0,true];
        player setVariable ["ACE_isEOD",0,true];
    };
};

private _title = (_name + " has given themselves " + _trait + " perms.");
if(_trait == "None") then
{
    _title = (_name + " has removed all their perms.")
};
	

private _name = name player;
private _title = (_name + " have been given " + _trait + " perms.");
if(_trait == "None") then
{
    _title = (_name + " has removed all their perms.")
};

_titleFormatted = formatText ["                [Trait Selector]%1%2",lineBreak,_title];

[_titleFormatted] remoteExec ["ace_common_fnc_displayTextStructured",-clientOwner];


[_name,_trait] call CC_fnc_addTraitsLog;
[_trait] call CC_fnc_InformedTrait;
