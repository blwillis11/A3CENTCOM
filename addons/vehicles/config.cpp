#include "script_component.hpp"

class CfgPatches {
    class CC_Vehicles {
        name = COMPONENT_NAME;
		units[] = 
        {
            "CC_M494_Oryx",//Load/unload
            "CC_IFV76",//Load/unload
            "CC_IFV76_A",//Load/unload
            "CC_M875",//Load/unload
            "CC_HDV134_Resupply",//Load/unload
            "CC_HDV134_TT",//Load/unload
            "CC_HDV134_TT_C",//Load/unload
            "CC_M808BM_MBT",//Load/unload
            "CC_D77_TC_Pelican",
            "CC_M12",//Load/unload
            "CC_M12_LRV",//Load/unload
            "CC_M831_TT",//Load/unload
            "CC_UNSC_falcon_S",
            "CC_UNSC_falcon",
            "CC_UNSC_MH_144_Falcon",
            "CC_UNSC_MH_144S_Falcon",
            "CC_AV22_Sparrowhawk",
            "CC_AV22A_Sparrowhawk",
            "CC_AV22B_Sparrowhawk",
            "CC_AV22C_Sparrowhawk",
            "CC_M413_MGS",//Load/unload
            "CC_M412_IFV",//Load/unload
            "CC_F29_Nandao_VTOL",
            "CC_YSS_1000_A_VTOL_Single",
            "CC_Shortsword_01_F",
            "CC_JT_RM2_Longsword_dynamicLoadout_F",
            "CC_M511_Springbok_APC",//Load/unload
            "CC_M511_Springbok_IFV",//Load/unload
            "CC_M511_Springbok_MGS",//Load/unload
            "CC_M511_Springbok_AA",//Load/unload
            "CC_AV14_Hornet_CAS",
            "CC_AV14_Hornet_CAP",
            "CC_SDV_ODST",
            "CC_M274_ATV",
            "CC_M808BMk2",//Load/unload
            "CC_M914_TD",//Load/unload
            "CC_Hammerhead_Repair",//Load/unload
            "CC_POGV_RCWS",
            "CC_COGV_RCWS",
            "CC_Iguana_APC",//Load/unload
            "CC_Iguana_Medical_APC",//Load/unload
            "CC_Komodo",//Load/unload
            "CC_Merkava",//Load/unload
            "CC_cart"
        }; 
        weapons[] = {
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "OPTRE_UNSC_Units_Army",
            "OPTRE_FunctionsLibrary",
            "DMNS_Armour",
			"CC_Functions"
        };
        authors[] = {"Salmon"}; // sub array of authors, considered for the specific addon, can be removed or left empty {}
        author = AUTHOR; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
    };
};
class EventHandlers;

// configs go here
#include "CfgEventHandlers.hpp"

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
