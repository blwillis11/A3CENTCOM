#include "script_component.hpp"
#include "script_macros.hpp"

class CfgPatches {
    class CC_armor {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "TCP_Characters_BLUFOR_UNSC_Army_Uniforms_CBUU"
        };
        authors[] = {"B. Salmon"}; // sub array of authors, considered for the specific addon, can be removed or left empty {}
        author = AUTHOR; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
    };
};

// configs go here

#include "CfgEventHandlers.hpp"

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "data\XtdGear.hpp"
#include "data\AceWardrobe.hpp"