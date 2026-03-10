#include "script_component.hpp"

class CfgPatches {
    class CC_Objects {
        name = COMPONENT_NAME;
		units[] = 
        {
			"CC_BriefScreen",
			"CC_TraitSelectConsole"
        }; 
        weapons[] = {
           
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"CC_main"
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
