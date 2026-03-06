#include "script_component.hpp"
#include "script_macros.hpp"

class CfgPatches {
    class CC_Units {
        name = COMPONENT_NAME;
		units[] = 
        {	
			"CC_STB_ODST_TFAlpha_Rifleman",
			"CC_STB_ODST_TFAlpha_Grenadier",
			"CC_STB_ODST_TFAlpha_AT",
			"CC_STB_ODST_TFAlpha_Autorifleman",
			"CC_STB_ODST_TFAlpha_Sniper",
			"CC_STB_ODST_TFAlpha_Marksman",
			"CC_STB_ODST_TFAlpha_Scout",
			"CC_STB_ODST_TFAlpha_Demo",
			"CC_STB_ODST_TFAlpha_Medic",
			"CC_STB_ODST_TFAlpha_Team_Lead",
			"CC_STB_ODST_TFAlpha_Squad_Lead",
			"CC_MAR_TFAlpha_Rifleman",
			"CC_MAR_TFAlpha_Grenadier",
			"CC_MAR_TFAlpha_AT",
			"CC_MAR_TFAlpha_Autorifleman",
			"CC_MAR_TFAlpha_Sniper",
			"CC_MAR_TFAlpha_Marksman",
			"CC_MAR_TFAlpha_Scout",
			"CC_MAR_TFAlpha_Demo",
			"CC_MAR_TFAlpha_Medic",
			"CC_MAR_TFAlpha_Team_Lead",
			"CC_MAR_TFAlpha_Squad_Lead",
			"CC_STB_ODST_TFBravo_Rifleman",
			"CC_STB_ODST_TFBravo_Grenadier",
			"CC_STB_ODST_TFBravo_AT",
			"CC_STB_ODST_TFBravo_Autorifleman",
			"CC_STB_ODST_TFBravo_Sniper",
			"CC_STB_ODST_TFBravo_Marksman",
			"CC_STB_ODST_TFBravo_Scout",
			"CC_STB_ODST_TFBravo_Demo",
			"CC_STB_ODST_TFBravo_Medic",
			"CC_STB_ODST_TFBravo_Team_Lead",
			"CC_STB_ODST_TFBravo_Squad_Lead",
			"CC_MAR_TFBravo_Rifleman",
			"CC_MAR_TFBravo_Grenadier",
			"CC_MAR_TFBravo_AT",
			"CC_MAR_TFBravo_Autorifleman",
			"CC_MAR_TFBravo_Sniper",
			"CC_MAR_TFBravo_Marksman",
			"CC_MAR_TFBravo_Scout",
			"CC_MAR_TFBravo_Demo",
			"CC_MAR_TFBravo_Medic",
			"CC_MAR_TFBravo_Team_Lead",
			"CC_MAR_TFBravo_Squad_Lead",
			"CC_Assets_Aviator"
        }; 
        weapons[] = {
           
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"CC_Main",
			"OPTRE_UNSC_Units",
			"CC_Armor",
			"OPTRE_FC_Units"
        };
        authors[] = {"Salmon"}; // sub array of authors, considered for the specific addon, can be removed or left empty {}
        author = AUTHOR; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
    };
};

// configs go here
#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
