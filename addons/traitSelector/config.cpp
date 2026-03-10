#include "script_component.hpp"

class CfgPatches
{
	class CC_TraitSelector
	{
		name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { };             // Addon dependencies
        authors[] = {                       // Authors
            "Salmon"
        };
        author = AUTHOR;                   // MACRO
        VERSION_CONFIG;
	};
};
class CfgFunctions
{
	class CC
	{
		class traitSelector
		{
			file="\y\A3CENTCOM\addons\traitSelector\functions";
			class Init
			{
				postInit=1;
                description = "Trait Selector - Initialization";
                file = "\y\A3CENTCOM\addons\traitSelector\functions\fn_Init.sqf";
			};
			class CreateConsole
			{
                description = "Trait Selector - Create Console";
                file = "\y\A3CENTCOM\addons\traitSelector\functions\fn_CreateConsole.sqf";
			};
			class AddTraitsLog
			{
                description = "Trait Selector - Add Traits Log";
                file = "\y\A3CENTCOM\addons\traitSelector\functions\fn_addTraitsLog.sqf";
			};
			class ShowTraitLogs
			{
                description = "Trait Selector - Show Trait Logs";
                file = "\y\A3CENTCOM\addons\traitSelector\functions\fn_showTraitLogs.sqf";
            };
                class GiveTraits
            {
                description = "Trait Selector - Give Traits";
                file = "\y\A3CENTCOM\addons\traitSelector\functions\fn_giveTraits.sqf";
			};
			class SwitchScreen
			{
                description = "Trait Selector - Switch Screen";
                file = "\y\A3CENTCOM\addons\traitSelector\functions\fn_switchScreen.sqf";
			};
			class InformedTrait
			{
                description = "Trait Selector - Informed Trait";
                file = "\y\A3CENTCOM\addons\traitSelector\functions\fn_InformedTrait.sqf";
			};
		};
	};
};
class RscObject;
class RscText;
class RscFrame;
class RscLine;
class RscProgress;
class RscPicture;
class RscPictureKeepAspect;
class RscVideo;
class RscHTML;
class RscButton;
class RscShortcutButton;
class RscEdit;
class RscCombo;
class RscListBox;
class RscListNBox;
class RscXListBox;
class RscTree;
class RscSlider;
class RscXSliderH;
class RscActiveText;
class RscActivePicture;
class RscActivePictureKeepAspect;
class RscStructuredText;
class RscToolbox;
class RscControlsGroup;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscControlsGroupNoVScrollbars;
class RscButtonTextOnly;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscButtonMenuSteam;
class RscMapControl;
class RscMapControlEmpty;
class RscCheckBox;
class RscActivePictureCC: RscActivePictureKeepAspect
{
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.090000004,
		1
	};
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.090000004,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.090000004,
		1
	};
};
class CC_TraitSelector_Main_UI
{
	name="CC_TraitSelector_Main_UI";
	idd=1234;
	movingEnable="false";
	class ControlsBackground
	{
		class RscPicture_MainScreen: RscPicture
		{
			idc=2200;
			text="\y\A3CENTCOM\addons\traitSelector\Textures\Screens\MainScreen.paa";
			x="0.1 * safezoneW + safezoneX";
			y="0.1 * safezoneH + safezoneY";
			w="0.8 * safezoneW";
			h="0.836 * safezoneH";
		};
		class RscText_Select: RscText
		{
			idc=2200;
			align="CENTER";
			style=2;
			valign="top";
			text="CENTCOM Trait Selector";
			x="0.209806 * safezoneW + safezoneX";
			y="0.21202 * safezoneH + safezoneY";
			w="0.582656 * safezoneW";
			h="0.077 * safezoneH";
			colorText[]={1,1,1,1};
			SizeEx=0.15000001;
		};
	};
	class Controls
	{
		class RscActivePictureCC_Button: RscActivePictureCC
		{
			idc=2201;
			text="\y\A3CENTCOM\addons\traitSelector\Textures\Buttons\CCButton.paa";
			onButtonClick="['Traits'] call CC_fnc_switchScreen;";
			x="0.22 * safezoneW + safezoneX";
			y="0.28 * safezoneH + safezoneY";
			w="0.28 * safezoneW";
			h="0.39 * safezoneH";
			tooltip="CENTCOM";
		};
		class RscButton_Logs: RscButton
		{
			idc=2201;
			text="Open Perm Logs";
			onButtonClick="[] call CC_fnc_showTraitLogs;";
			x="0.206094 * safezoneW + safezoneX";
			y="0.192 * safezoneH + safezoneY";
			w="0.0979687 * safezoneW";
			h="0.033 * safezoneH";
			colorText[]={1,1,1,0.80000001};
			colorBackground[]={-1,-1,-1,0};
		};
		class RscButton_Exit: RscButton
		{
			idc=2201;
			text="Exit Console";
			onButtonClick="['Close'] call CC_fnc_switchScreen;";
			x="0.45 * safezoneW + safezoneX";
			y="0.69 * safezoneH + safezoneY";
			w="0.1 * safezoneW";
			h="0.05 * safezoneH";
			colorText[]={1,1,1,0.80000001};
			colorBackground[]={-1,-1,-1,0};
			SizeEx=0.090000004;
		};
	};
};
class CC_TraitSelector_Traits_UI
{
	name="CC_TraitSelector_Traits_UI";
	idd=1234;
	movingEnable="false";
	onLoad="uiNamespace setVariable ['CC_TraitSelector_ActiveUI',_this select 0];";
	class ControlsBackground
	{
		class RscPicture_MainScreen: RscPicture
		{
			idc=2200;
			text="\y\A3CENTCOM\addons\traitSelector\Textures\Screens\CCScreen.paa";
			x="0.1 * safezoneW + safezoneX";
			y="0.1 * safezoneH + safezoneY";
			w="0.8 * safezoneW";
			h="0.836 * safezoneH";
		};
	};
	class Controls
	{
		class RscText_CC: RscText
		{
			idc=2301;
			align="CENTER";
			x="0.4175 * safezoneW + safezoneX";
			y="0.192 * safezoneH + safezoneY";
			w="0.201094 * safezoneW";
			h="0.055 * safezoneH";
			colorText[]={1,1,1,0.80000001};
			colorBackground[]={-1,-1,-1,0};
			sizeEx=0.044;
		};
		class RscButton_Return: RscButton
		{
			idc=2201;
			text="Return to Main Menu Select";
			onButtonClick="['Back'] call CC_fnc_switchScreen;";
			x="0.205 * safezoneW + safezoneX";
			y="0.73 * safezoneH + safezoneY";
			w="0.1 * safezoneW";
			h="0.02 * safezoneH";
			colorText[]={1,0,0,0.80000001};
			colorBackground[]={-1,-1,-1,0};
		};
		class RscActivePicture_CLS: RscActivePictureCC
		{
			idc=2201;
			text="\y\A3CENTCOM\addons\traitSelector\Textures\Traits\CLS.paa";
			onButtonClick="['CLS'] call CC_fnc_giveTraits;";
			x="0.47 * safezoneW + safezoneX";
			y="0.28 * safezoneH + safezoneY";
			w="0.1 * safezoneW";
			h="0.15 * safezoneH";
			tooltip="Add CLS Perms";
		};
		class RscActivePicture_Doctor: RscActivePictureCC
		{
			idc=2201;
			text="\y\A3CENTCOM\addons\traitSelector\Textures\Traits\Doctor.paa";
			onButtonClick="['Doctor'] call CC_fnc_giveTraits;";
			x="0.63 * safezoneW + safezoneX";
			y="0.28 * safezoneH + safezoneY";
			w="0.1 * safezoneW";
			h="0.15 * safezoneH";
			tooltip="Add Doctor Perms";
		};
		class RscActivePicture_Engineer: RscActivePictureCC
		{
			idc=2201;
			text="\y\A3CENTCOM\addons\traitSelector\Textures\Traits\EOD.paa";
			onButtonClick="['Engineer'] call CC_fnc_giveTraits;";
			x="0.47 * safezoneW + safezoneX";
			y="0.50 * safezoneH + safezoneY";
			w="0.1 * safezoneW";
			h="0.15 * safezoneH";
			tooltip="Add Engineer Perms";
		};
		class RscActivePicture_Remove: RscActivePictureCC
		{
			idc=2201;
			text="\y\A3CENTCOM\addons\traitSelector\Textures\Traits\Remove.paa";
			onButtonClick="['None'] call CC_fnc_giveTraits;";
			x="0.63 * safezoneW + safezoneX";
			y="0.50 * safezoneH + safezoneY";
			w="0.1 * safezoneW";
			h="0.15 * safezoneH";
			tooltip="Remove All Perms";
		};
	};
};
class CC_TraitSelector_Logs_UI
{
	name="CC_TraitSelector_Logs_UI";
	idd=1234;
	movingEnable="false";
	class ControlsBackground
	{
		class RscPicture_Log: RscPicture
		{
			idc=2200;
			text="\y\A3CENTCOM\addons\traitSelector\Textures\Screens\MainScreen.paa";
			x="0.1 * safezoneW + safezoneX";
			y="0.1 * safezoneH + safezoneY";
			w="0.8 * safezoneW";
			h="0.836 * safezoneH";
		};
		class RscText_Title: RscText
		{
			idc=1003;
			align="LEFT";
			style=2;
			valign="top";
			text="Trait Selector Logs";
			x="0.21125 * safezoneW + safezoneX";
			y="0.192 * safezoneH + safezoneY";
			w="0.33 * safezoneW";
			h="0.066 * safezoneH";
			sizeEx="2 *(((safezoneW / safezoneH) min 1.2) / 1.2) / 25) *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
	class Controls
	{
		class RscListBox_Logs: RscListBox
		{
			idc=1500;
			colorPictureSelected[]={0,0,0,1};
			colorActive[]={1,1,1,1};
			tooltipColorText[]={1,1,1,1};
			x="0.21125 * safezoneW + safezoneX";
			y="0.258 * safezoneH + safezoneY";
			w="0.495 * safezoneW";
			h="0.451 * safezoneH";
		};
		class RscButton_Return: RscButton
		{
			idc=2200;
			text="Return to Main Menu";
			onButtonClick="['Back'] call CC_fnc_switchScreen;";
			x="0.205 * safezoneW + safezoneX";
			y="0.73 * safezoneH + safezoneY";
			w="0.1 * safezoneW";
			h="0.02 * safezoneH";
			colorText[]={1,0,0,0.80000001};
			colorBackground[]={-1,-1,-1,0};
		};
	};
};
