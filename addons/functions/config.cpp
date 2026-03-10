#include "script_component.hpp"

class CfgPatches {
    class CC_Functions {
        name = COMPONENT_NAME;
		units[] = 
        {
        }; 
        weapons[] = {
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"OPTRE_UNSC_Units_Army",
            "OPTRE_FunctionsLibrary",
            "OPTRE_modules",
            "Splits_Vehicles",
            "DMNS_Cipher_HEVPatch"
        };
        authors[] = {"Salmon"}; // sub array of authors, considered for the specific addon, can be removed or left empty {}
        author = AUTHOR; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
    };
};

// configs go here
#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgFunctions.hpp"

class CfgSounds
{
	sounds[] =
	{
		"OPTRE_sounds_HEV_Tone",
		"OPTRE_sounds_HEV_GroundAlarm",
		"OPTRE_sounds_HEV_EngineStart",
		"OPTRE_sounds_HEV_interiorDropLoop"
	};
	class OPTRE_Sounds_HEV_Tone
	{
		dlc = "HEV Patch";
		name = "[OPTRE] HEV Tone";
		sound[]=
		{
			"y\A3CENTCOM\addons\functions\Sounds\OPTRE_HEV_Tone.ogg",
			1.25,
			1
		};
		author = "Cipher // Ansible2";
		titles[] = {};
	};
	class OPTRE_Sounds_HEV_GroundAlarm
	{
		dlc = "HEV Patch";
		name = "[OPTRE] HEV Ground Alarm";
		sound[] =
		{
			"y\A3CENTCOM\addons\functions\Sounds\OPTRE_HEV_GroundAlarm.ogg",
			0.5,
			1
		};
		author = "Cipher // Ansible2";
		titles[] = {};
	};
	class OPTRE_Sounds_HEV_EngineStart
	{
		dlc = "HEV Patch";
		name = "[OPTRE] HEV Engine Start";
		sound[] =
		{
			"y\A3CENTCOM\addons\functions\Sounds\OPTRE_HEV_EngineStart.ogg",
			2,
			1
		};
		author = "Cipher // Ansible2";
		titles[] = {};
	};	
	class OPTRE_sounds_HEV_interiorDropLoop
	{
		dlc = "HEV Patch";
		name = "[OPTRE] Corvette HEV Drop Engine Loop";
		sound[] =
		{
			"y\A3CENTCOM\addons\functions\Sounds\OPTRE_HEV_interiorDropLoop.ogg",
			1,
			1
		};
		author = "Cipher // Ansible2";
		titles[] = {};
	};
};
class OPTRE_UNSCMENU_RscButton;
class OPTRE_HEVPanel
{
	class controls
	{
		class OPTRE_UNSCMENU_RscButton_1602: OPTRE_UNSCMENU_RscButton
		{
			idc=1602;
			text="Launch Now";
			x="0.711406 * safezoneW + safezoneX";
			y="0.72 * safezoneH + safezoneY";
			w="0.134062 * safezoneW";
			h="0.055 * safezoneH";
			onButtonClick="if (getMarkerColor 'OPTRE_Local_HEVConsolePosMarker' != '') then {disableSerialization; _dialog = findDisplay 5600;_10 = (_dialog displayCtrl 10);_11 = (_dialog displayCtrl 11);_12 = (_dialog displayCtrl 12);_13 = (_dialog displayCtrl 13);_14 = (_dialog displayCtrl 14); _15 = (_dialog displayCtrl 15);_16 = (_dialog displayCtrl 16);0 = [[(getMarkerPos 'OPTRE_Local_HEVConsolePosMarker'),[],(_16 lbValue (lbCurSel _16)),30,2,-1,(_10 lbValue (lbCurSel _10)),(_11 lbValue (lbCurSel _11)),(_12 lbValue (lbCurSel _12)),(_13 lbValue (lbCurSel _13)),(_14 lbValue (lbCurSel _14)),true,(_15 lbValue (lbCurSel _15)),600],OPTRE_CurrentConsole] remoteExec [""OPTRE_Fnc_HEVRoomDynamicSetupGrabUnits"", 2, false];} else {playSound 'FD_CP_Not_Clear_F';};";
		};
	};
};
