class I_TGT_Open
{
    animPeriod=5;
    condition="((driver this) isEqualTo player)";
    displayName="<t color='#FFD700'>Open I-TGT System";
    displayNameDefault="<t color='#FFD700'>Open I-TGT System";
    position="cargo_door_handle";
    onlyForPlayer=0;
    priority=6;
    radius=100;
    showWindow=0;
    statement="this execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\FIR_AWS_MFD_N_Open.sqf"";";
    textToolTip="<t color='#FFD700'>Open I-TGT System";
    userActionID=80;
};
