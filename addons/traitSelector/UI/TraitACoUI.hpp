class CC_TraitSelector_Traits_UI
{
	name = "CC_TraitSelector_Traits_UI";
	idd = 1234;
	movingEnable = false;
	onLoad = "uiNamespace setVariable ['CC_ActiveUI',_this select 0];";
    class ControlsBackground
    {
        class RscPicture_MainScreen: RscPicture
        {
        	idc = 2200;
        	text = "\y\A3CENTCOM\addons\traitSelector\Textures\Screens\CCScreen.paa";
			x = 0.1 * safezoneW + safezoneX;
        	y = 0.1 * safezoneH + safezoneY;
        	w = 0.8 * safezoneW;
        	h = 0.836 * safezoneH;
        };
    };
	
	class Controls
	{
		class RscText_Traits: RscText
        {
        	idc = 2301;
			align = "CENTER";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.192 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.055 * safezoneH;
			colorText[] = {1,1,1,0.8};
			colorBackground[] = {-1,-1,-1,0};
			sizeEx = 0.044;
		};
		class RscButton_Return: RscButton
        {
        	idc = 2201;
        	text = "Return to Company Select";
			onButtonClick = "['Back'] call CC_fnc_switchScreen;";
			x = 0.205 * safezoneW + safezoneX;
        	y = 0.73 * safezoneH + safezoneY;
        	w = 0.1 * safezoneW;
        	h = 0.02 * safezoneH;
			colorText[] = {1,0,0,0.8};
			colorBackground[] = {-1,-1,-1,0};
        };
		class RscActivePicture_CLS: RscActivePictureCC
		{
			idc = 2201;
        	text = "\y\A3CENTCOM\addons\traitSelector\Textures\Traits\CLS.paa";
			onButtonClick = "['CLS'] call CC_fnc_giveTraits;";
			x = 0.47 * safezoneW + safezoneX;
        	y = 0.28 * safezoneH + safezoneY;
        	w = 0.1 * safezoneW;
        	h = 0.15 * safezoneH;
			tooltip = "Add CLS Perms";
		};
		class RscActivePicture_Doctor: RscActivePictureCC
		{
			idc = 2201;
        	text = "\y\A3CENTCOM\addons\traitSelector\Textures\Traits\Doctor.paa";
			onButtonClick = "['Doctor'] call CC_fnc_giveTraits;";
			x = 0.63 * safezoneW + safezoneX;
        	y = 0.28 * safezoneH + safezoneY;
        	w = 0.1 * safezoneW;
        	h = 0.15 * safezoneH;
			tooltip = "Add Doctor Perms";
		};
		class RscActivePicture_Engineer: RscActivePictureCC
		{
			idc = 2201;
        	text = "\y\A3CENTCOM\addons\traitSelector\Textures\Traits\EOD.paa";
			onButtonClick = "['Engineer'] call CC_fnc_giveTraits;";
			x = 0.47 * safezoneW + safezoneX;
        	y = 0.50 * safezoneH + safezoneY;
        	w = 0.1 * safezoneW;
        	h = 0.15 * safezoneH;
			tooltip = "Add Engineer Perms";
		};
		class RscActivePicture_Remove: RscActivePictureCC
		{
			idc = 2201;
        	text = "\y\A3CENTCOM\addons\traitSelector\Textures\Traits\Remove.paa";
			onButtonClick = "['None'] call CC_fnc_giveTraits;";
			x = 0.63 * safezoneW + safezoneX;
        	y = 0.50 * safezoneH + safezoneY;
        	w = 0.1 * safezoneW;
        	h = 0.15 * safezoneH;
			tooltip = "Remove All Perms";
		};
	};
};
