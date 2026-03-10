class CfgVehicles
{
	class Module_F;

	class SZ_screen;

	class CC_BriefScreen: SZ_screen
	{
		author = AUTHOR;
		displayName = "[CC] Briefing Screen";
		scope = 2;
		scopeCurator = 2;
		faction = "CC_Assets";
		editorCategory = "CC_Assets";
		editorSubcategory = "CC_Misc_EdSubCat";
		hiddenSelectionsTextures[]=
		{
			"y\A3CENTCOM\addons\objects\data\briefing_screen_co.paa"
		};
	};

	class OPTRE_RS_ConsoleCorvette_SysGreen;
	class CC_TraitSelectConsole: OPTRE_RS_ConsoleCorvette_SysGreen
	{
		author = AUTHOR;
		displayName = "[CC] Trait Select Console";
		scope = 2;
		scopeCurator = 2;
		faction = "CC_Assets";
		editorCategory = "CC_Assets";
		editorSubcategory = "CC_Misc_EdSubCat";
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_BW_Buildings\ReserchBase\DoorConsole\data\Cor_Terminal_GRN.paa",
			"#(argb,8,8,3)color(0.32941177,0.6901961,0.96862745,1,co)"
		};
		class UserActions
		{
			class OpenTraitSelectScreen
			{
				animPeriod=1;
				condition="player distance this < 10";
				displayName="<t color='#04B45F'>Open Trait Select Screen";
				displayNameDefault="<t color='#04B45F'>Open Trait Select Screen";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=10;
				showWindow=0;
				statement="0 = ['Main'] call CC_fnc_switchScreen";
				textToolTip="<t color='#04B45F'>Open Trait Select Screen";
				userActionID=85;
			};
		};
	};
};
