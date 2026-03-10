class v105_TraitSelector_Logs_UI
{
	name = "v105_TraitSelector_Logs_UI";
	idd = 1234;
	movingEnable = false;
    class ControlsBackground 
    {
        class RscPicture_Log: RscPicture
        {
        	idc = 2200;
        	text = "\y\A3CENTCOM\addons\traitSelector\Textures\Screens\MainScreen.paa";
			x = 0.1 * safezoneW + safezoneX;
        	y = 0.1 * safezoneH + safezoneY;
        	w = 0.8 * safezoneW;
        	h = 0.836 * safezoneH;
        };
        class RscText_Title: RscText
        {
            idc = 1003;
            align = "LEFT";
            style = 2;
            valign = "top";

            text = "Trait Selector Logs";
            x = 0.21125 * safezoneW + safezoneX;
            y = 0.192 * safezoneH + safezoneY;
            w = 0.33 * safezoneW;
            h = 0.066 * safezoneH;
            sizeEx = 2 *(((safezoneW / safezoneH) min 1.2) / 1.2) / 25) *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * GUI_GRID_H;
        };
    };
	
	class Controls
	{
		class RscListBox_Logs: RscListBox
        {
            idc = 1500;
            colorPictureSelected[] = {0,0,0,1};
            colorActive[] = {1,1,1,1};
            tooltipColorText[] = {1,1,1,1};

            x = 0.21125 * safezoneW + safezoneX;
            y = 0.258 * safezoneH + safezoneY;
            w = 0.495 * safezoneW;
            h = 0.451 * safezoneH;
        };
        class RscButton_Return: RscButton
        {
            idc = 2200;
            text = "Return to Company Select";
            onButtonClick = "['Back'] call CC_fnc_switchScreen;";
            x = 0.205 * safezoneW + safezoneX;
            y = 0.73 * safezoneH + safezoneY;
            w = 0.1 * safezoneW;
            h = 0.02 * safezoneH;
            colorText[] = {1,0,0,0.8};
            colorBackground[] = {-1,-1,-1,0};
        };
	};
};
