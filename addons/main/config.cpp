#include "script_component.hpp"

class CfgPatches
{
    class CC_Main
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

    class XCC_main: CC_Main { // just in-case anything requires "acex_main"
        units[] = {};
        weapons[] = {};
    };
};

#include "CfgEditor.hpp"

class CfgMods {
    class PREFIX {
        dir = "@CENTCOM";
        name = "CENTCOM Aux Mod";
        picture = "\y\A3CENTCOM\addons\main\UI\CCLogo.paa"; // 256x256            // Picture displayed in expansions menu.
        hidePicture = "false";               // Hide the picture in the expansions menu.
        hideName = "false";                  // Hide the name in the expansions menu.
        actionName = "Website";             // Text displayed in the action button in the main menu.
        action = CSTRING(URL);              // Website URL, that is opened when the action button is clicked.
        //description = "";                 // Short description, that is displayed in the main menu.
    };
};
