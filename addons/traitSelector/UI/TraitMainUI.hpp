class v105_TraitSelector_Main_UI
{
	name = "v105_TraitSelector_Main_UI";
	idd = 1234;
	movingEnable = false;
    class ControlsBackground 
    {
        class RscPicture_MainScreen: RscPicture
        {
        	idc = 2200;
        	text = "\y\A3CENTCOM\addons\traitSelector\Textures\Screens\MainScreen.paa";
			x = 0.1 * safezoneW + safezoneX;
        	y = 0.1 * safezoneH + safezoneY;
        	w = 0.8 * safezoneW;
        	h = 0.836 * safezoneH;
        };
		class RscText_Select: RscText
        {
        	idc = 2200;
        	align = "CENTER";
            style = 2;
            valign = "top";
        	text = "Select your Company";
			x = 0.209806 * safezoneW + safezoneX;
            y = 0.21202 * safezoneH + safezoneY;
            w = 0.582656 * safezoneW;
            h = 0.077 * safezoneH;
			colorText[] = {1,1,1,1};
			SizeEx = 0.15;
        };
    };
	
	class Controls
	{
		class RscActivePictureV105_TraitsButton: RscActivePictureV105
		{
			idc = 2201;
        	text = "\y\A3CENTCOM\addons\traitSelector\Textures\Buttons\CCButton.paa";
			onButtonClick = "['Traits'] call CC_fnc_switchScreen;";
			x = 0.22 * safezoneW + safezoneX;
        	y = 0.28 * safezoneH + safezoneY;
        	w = 0.28 * safezoneW;
        	h = 0.39 * safezoneH;
			tooltip = "Alpha Company";
		};
		class RscButton_Logs: RscButton
		{
			idc = 2201;
			text = "Open Perm Logs";
			onButtonClick = "[] call CC_fnc_showTraitLogs;";
            x = 0.206094 * safezoneW + safezoneX;
            y = 0.192 * safezoneH + safezoneY;
            w = 0.0979687 * safezoneW;
            h = 0.033 * safezoneH;
			colorText[] = {1,1,1,0.8};
			colorBackground[] = {-1,-1,-1,0};
        };
		class RscButton_Exit: RscButton
		{
			idc = 2201;
			text = "Exit Console";
			onButtonClick = "['Close'] call CC_fnc_switchScreen;";
			x = 0.45 * safezoneW + safezoneX;
			y = 0.69 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.05 * safezoneH;
			colorText[] = {1,1,1,0.8};
			colorBackground[] = {-1,-1,-1,0};
			SizeEx = 0.09;
        };
	};
};