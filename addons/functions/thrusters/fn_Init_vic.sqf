#include "\a3\ui_f\hpp\defineDIKCodes.inc"
private ["_configs","_vehicle","_type","_icon","_liveriesData","_data","_types","_liveries","_className"];

if(isDedicated) exitWith {};


CC_ThrusterMultiplier = 20;

["73rd Vehicles", "CC_Vehicles_ThrustersUp", ["Thrusters Up", "Thrusters go up a tier (none > forward > afterburners)"], {
	private _unit = [player, remoteControlled player] select (isRemoteControlling player);
	private _vic = (vehicle _unit);
	if (_vic == _unit) exitWith {};
	if ((_unit != driver _vic) or !(alive _vic) or !(isEngineOn _vic) or (((getPosATL _vic) select 2) < 1)) exitWith {};
	[_vic] call CC_fnc_increaseThrusterLevel;
}, {}, [0xF4, [false, false, false]]] call CBA_fnc_addKeybind;

["73rd Vehicles", "CC_Vehicles_Unload", ["Unload Vehicle/Pods", "Unloads whatever cargo is maglocked"], {
	private _unit = [player, remoteControlled player] select (isRemoteControlling player);
	private _vic = (vehicle _unit);
	if (_vic == _unit) exitWith {};
	if ((_unit != driver _vic) or !(alive _vic) or !(isEngineOn _vic) or (((getPosATL _vic) select 2) < 1) && ((count (_vic getVariable ["Splits_Pelican_AttachedToVehiclesEffect",[]])) < 1)) exitWith {};
	[_vic] call CC_fnc_PelicanUnLoadValidate;
}, {}, [0xF4, [false, false, false]]] call CBA_fnc_addKeybind;

["73rd Vehicles", "CC_Vehicles_ThrustersDown", ["Thrusters Down", "Thrusters go down a tier (afterburners > forward > none)"], {
	private _unit = [player, remoteControlled player] select (isRemoteControlling player);
	private _vic = (vehicle _unit);
	[_vic] call CC_fnc_decreaseThrusterLevel;
}, {}, [0xF3, [false, false, false]]] call CBA_fnc_addKeybind;

["73rd Vehicles", "CC_Vehicles_AirBrakes", ["Air Brakes", "Airbrake button when over 50km"], {
	private _unit = [player, remoteControlled player] select (isRemoteControlling player);
	private _vic = (vehicle _unit);
	if (_unit == _vic or _unit != driver _vic || !(alive _vic)) exitWith {};
	if ((speed _vic) < 50 or !(_vic getVariable ["CC_Thrusters_Usable", false])) exitWith {};
	[_vic] call CC_fnc_engageAirbrakes;
}, {}, [nil, [false, false, false]]] call CBA_fnc_addKeybind;

["73rd Vehicles", "CC_Vehicles_ManualFireToggle", ["Manual Fire (Toggle)", "Swap to either manual fire or not"], {
	private _unit = [player, remoteControlled player] select (isRemoteControlling player);
	private _vic = (vehicle _unit);
	if (_vic == _unit) exitWith {};
	if (isManualFire _vic) then {
		_unit action ["MANUALFIRECANCEL", _vic];
		hint "MANUAL FIRE CANCELLED";
	} else {
		_unit action ["MANUALFIRE", _vic];
		hint "MANUAL FIRE ACTIVATED";
	};
}, {}, [nil, [false, false, false]]] call CBA_fnc_addKeybind;

["73rd Vehicles", "CC_Vehicles_OpenI_TGT_System", ["Open I-TGT System", "Allows quick access to the I-TGT System"], {
	private _unit = [player, remoteControlled player] select (isRemoteControlling player);
	private _vic = (vehicle _unit);
	if (_vic == _unit) exitWith {};
	if (!((driver _vic) isEqualTo _unit)) exitWith {};
	_vic execVM "\FIR_AirWeaponSystem_US\Script\TGTSystem\FIR_AWS_MFD_N_Open.sqf";
}, {}, [nil, [false, false, false]]] call CBA_fnc_addKeybind;
