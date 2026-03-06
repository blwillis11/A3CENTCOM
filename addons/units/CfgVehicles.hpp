class CfgVehicles {
    class O_Soldier_F;

    #include "cfg\ODST\TFAlpha.hpp"
    #include "cfg\ODST\TFBravo.hpp"
    #include "cfg\Marine\TFAlpha.hpp"
    #include "cfg\Marine\TFBravo.hpp"

    class CC_Assets_UnitBase: O_Soldier_F
    {
        scope = 0;
        scopeCurator = 0;

        author = AUTHOR;
        side = 1;
        faction = "CC_Assets";
        editorCategory = "CC_Assets";
        editorSubcategory = "CC_Aviation_EdSubCat";

        identityTypes[] = {"Head_Euro","LanguagePER_F","G_IRAN_default"};
        allowedfacewear[] = {""};
        allowedHeadgear[] = {""};
        allowedHeadgearB[] = {""};
        headgearList[] = {""};
    };
    class CC_Assets_Aviator: CC_Assets_UnitBase
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[CC] Aviator Officer";

        editorSubcategory = "CC_Aviation_EdSubCat";

        facewear = "";

        attendant = 0;
        engineer = 0;
        canDeactivateMines = 0;

        uniformClass = "CC_U_B_TacShirt_SlimSleeve_Gloves_Bloused_black";
        backpack = "";

        weapons[] = {"","OPTRE_Smartfinder", "Throw", "Put"};
        respawnWeapons[] = {"","OPTRE_Smartfinder", "Throw", "Put"};

        linkedItems[] = {"CC_M43A_BaseSec_Black_TFAlpha","CC_H_ECH35J_TFAlpha_Black_Gold","ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"CC_M43A_BaseSec_Black_TFAlpha","CC_H_ECH35J_TFAlpha_Black_Gold","ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch"};

        magazines[] = {""};
        respawnMagazines[] = {""};

        items[] = {""};
        respawnItems[] = {""};
    };

};
