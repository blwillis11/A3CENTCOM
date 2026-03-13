#include "script_component.hpp"

class CfgPatches
{
	class CC_MainMenu
	{
		name="CENTCOM - MainMenu";
		units[]={};
		weapons[]={};
		requiredVersion=2.02;
		requiredAddons[]=
		{
			"CC_main",
			"A3_Data_F_Enoch_Loadorder",
			"19th_Fleet_Armor",
			"TCP_UI"
		};
		authors[]=
		{
			"Salmon"
		};
		author= AUTHOR;
		version=0.1;
		versionStr="0.1";
		versionAr[]={0,1,1,2};
	};
};
class Extended_PreStart_EventHandlers
{
	class mainmenu
	{
		init="call compile preprocessFileLineNumbers '\y\A3CENTCOM\addons\mainmenu\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class mainmenu
	{
		init="call compile preprocessFileLineNumbers '\y\A3CENTCOM\addons\mainmenu\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class mainmenu
	{
		init="call compile preprocessFileLineNumbers '\y\A3CENTCOM\addons\mainmenu\XEH_postInit.sqf'";
	};
};
class RscStandardDisplay;
class RscPicture;
class RscButton;
class RscShortcutButton;
class RscButtonMenu: RscShortcutButton
{
	class ShortcutPos;
};
class RscTCPButtonMenu: RscButtonMenu
{
};
class RscDisplayConfigure
{
	enableDisplay=1;
};
class RscDisplayMain: RscStandardDisplay
{
	idd=0;
	idc=1;
	access=1;
	enableDisplay=1;
	text="y\A3CENTCOM\addons\mainmenu\Textures\CCLogo.paa";
	class RscActiveText;
	class RscActivePicture: RscActiveText
	{
		style=48;
		color[]={1,1,1,0.5};
		colorActive[]={1,1,1,1};
	};
	class Spotlight
	{
	};
	class controls
	{
		delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
		delete B_Credits;
		delete BackgroundCenter;
		delete SpotlightNext;
		delete SpotlightPrev;
		delete 12thLogo;
		class TCP_ButtonArsenal: RscTCPButtonMenu
		{
			idc=2500;
			text="ACE Firing Range";
			onbuttonclick="playMission ['', '\z\ace\addons\arsenal\missions\Arsenal.VR']";
			y="12.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class Logo: RscPicture
		{
			idc=-1;
			text="y\A3CENTCOM\addons\mainmenu\Textures\CCLogo.paa";
			x="0.45617185 * safezoneW + safezoneX";
			y="0.00500001 * safezoneH + safezoneY";
			w="(0.0876563 * safezoneW)/1.5";
			h="(0.132 * safezoneH)/1.5";
			tooltip="";
		};
		class ConnectMain: RscButton
		{
			idc=-1;
			text="Join Task Force Alpha";
			style=2;
			onbuttonclick="connectToServer ['136.175.187.138', 2302, 'shocktrooper']";
			colorBackground[]={0,0,0,0.69999999};
			colorBackgroundActive[]={0.5,0,0,0,0.5};
			colorFocused[]={0.5,0,0,0,0.5};
			borderSize=0.055;
			sizeEx="safeZoneH / 20";
			colorBorder[]={0,0,0,0};
			x="safeZoneX + ((safeZoneW / 2 ) - ((safezoneW / 3) / 2))";
			y="safeZoneY + ((safeZoneH / 2 ) - (safezoneH / 6))";
			w="safezoneW / 3";
			h="safezoneH / 6";
		};
		class ConnectMain2: RscButton
		{
			idc=-1;
			text="Join Task Force Bravo";
			style=2;
			onbuttonclick="connectToServer ['136.175.187.138', 2302, 'shocktrooper']";
			colorBackground[]={0,0,0,0.69999999};
			colorBackgroundActive[]={0.5,0,0,0,0.5};
			colorFocused[]={0.5,0,0,0,0.5};
			borderSize=0.055;
			sizeEx="safeZoneH / 20";
			colorBorder[]={0,0,0,0};
			x="safeZoneX + ((safeZoneW / 2 ) - ((safezoneW / 3) / 2))";
			y="safeZoneY + ((safeZoneH / 2 ) + (safezoneH / 12))";
			w="safezoneW / 3";
			h="safezoneH / 6";
		};
	};
};
