_pelican = _this select 0;
_veh = _this select 1;
_loaded = false;

switch true do {
	case (_veh isKindOf "OPTRE_M808B_base" or _veh isKindOf "OPTRE_M808B2" or _veh isKindOf "OPTRE_M808BM_Base" or _veh isKindOf "OPTRE_M808B_Arty_Base" or _veh isKindOf "CC_M875") : {
		_veh attachTo [_pelican, [0, -9.5, -1.3]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "B_AFV_Wheeled_01_cannon_F" or _veh isKindOf "B_AFV_Wheeled_01_up_cannon_F" or _veh isKindOf "B_T_AFV_Wheeled_01_cannon_F" or _veh isKindOf "B_T_AFV_Wheeled_01_up_cannon_F"):
	{
		_veh attachTo [_pelican, [0, -8.5, -0.75]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "B_MBT_01_TUSK_F"):
	{
		_veh attachTo [_pelican, [0, -7.5, -0.45]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "B_APC_Tracked_01_CRV_F" or _veh isKindOf "B_T_APC_Tracked_01_CRV_F"):
	{
		_veh attachTo [_pelican, [0, -9, -0.6]];
		_loaded = true;
		_veh setDir 180;
	};
	case (_veh isKindOf "OPTRE_M808S" or _veh isKindOf "OPTRE_M808L" or _veh isKindOf "CC_M808BM_MBT" or _veh isKindOf "CC_M808BMk2") :
	{
		_veh attachTo [_pelican, [0, -9.5, -1.75]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M12A1_LRV" or _veh isKindOf "OPTRE_M12_LRV" or _veh isKindOf "CC_M914_TD" or _veh isKindOf "OPTRE_M12G1_LRV" or _veh isKindOf "OPTRE_M12R_AA" or _veh isKindOf "OPTRE_M813_TT" or _veh isKindOf "OPTRE_M12_FAV_APC" or _veh isKindOf "CC_M19_GMG" or _veh isKindOf "CC_M19_HMG" or _veh isKindOf "CC_M12_LRV" or _veh isKindOf "CC_M831_TT" or _veh isKindOf "CC_M12") : {
		_veh attachTo [_pelican, [0, -6.5, -1.0]];
		// 0 = [vehicle player, 15, 0] call BIS_fnc_setPitchBank;
		_loaded = true;
		_veh setDir 180;
	};
	case (_veh isKindOf "OPTRE_M12_FAV" or _veh isKindOf "OPTRE_M914_RV") : {
		_veh attachTo [_pelican, [0, -6.5, -0.5]];
		_loaded = true;
		_veh setDir 180;
	};
	case (_veh isKindOf "CC_COGV_RCWS" or _veh isKindOf "CC_POGV_RCWS") : {
		_veh attachTo [_pelican, [0, -6.5, -0.25]];
		_loaded = true;
		_veh setDir 180;
	};
	case (_veh isKindOf "OPTRE_M494" or _veh isKindOf "CC_M494_Oryx") : {
		_veh attachTo [_pelican, [0, -7.2, -1.67105]];
		_loaded = true;
		_veh setDir 180;
	};
	case (_veh isKindOf "CC_IFV76_A") : {
		_veh attachTo [_pelican, [0, -8, -0.40]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "SDV_01_base_F") : {
        _veh attachTo [_pelican, [0,-7.5,-.25]];
        _veh setDir 180;
        _loaded = true;
    };
	case (
	_veh isKindOf "CC_M511_Springbok_IFV"
	or _veh isKindOf "CC_M511_Springbok_MGS"
	or _veh isKindOf "CC_M511_Springbok_AA"
	) : {
		_veh attachTo [_pelican, [0, -9, -0.85]];
		_loaded = true;
		_veh setDir 180;
	};
	case (_veh isKindOf "CC_M511_Springbok_APC") : {
		_veh attachTo [_pelican, [0, -9, -0.72]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "CC_M412_IFV") : {
		_veh attachTo [_pelican, [0, -8, -0.60]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "CC_M413_MGS") : {
		_veh attachTo [_pelican, [0, -8, -0.60]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "CC_IFV76") : {
		_veh attachTo [_pelican, [0, -8, -0.20]];
		_loaded = true;
		_veh setDir 180;
	};
	case (_veh isKindOf "optre_catfish_unarmed_f" or _veh isKindOf "optre_catfish_mg_f") : {
		_veh attachTo [_pelican, [0, -4.8, -0.1]];
		_loaded = true;
		_veh setDir 180;
	};
	case (_veh isKindOf "CC_Iguana_APC" or _veh isKindOf "CC_Iguana_Medical_APC"):
	{
		_veh attachTo [_pelican, [0, -9, -0.7]];
		_loaded = true;
		_veh setDir 180;
	};
};

if (_loaded) then {
	_pelican setVariable ["Splits_Pelican_AttachedToVehiclesEffect", [vehicle player], true];
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>VEHICLE LOADED!</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true];
	playSound "FD_Finish_F";
} else {
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>CAN NOT LOAD!</t><br/>-------------------------------------------<br/>Your vehicle has not been designed to be mag-lifted by the pelican.", "PLAIN DOWN", -1, true, true];
	// hint "Your vehicle has not been design to be lifted by the pelican operation aborted.";
	playSound "FD_CP_Not_Clear_F";
};
