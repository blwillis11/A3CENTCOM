class OPTRE_cart;

class CC_cart:OPTRE_cart
{
    displayName="[73] Maintenance/Tow Cart";
    author= AUTHOR;
    faction = "CC_Assets";
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Utility_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_Assets_Aviator";
    hiddenSelectionsTextures[] = {
        "OPTRE_Vehicles\cart\data\truck_01_ext_022_co.paa"
    };
    ace_rearm_defaultSupply = 10000;
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Aviation";
            vehicle = "Tow Cart";
            Type = "Utility";
            cost = 0;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""OPTRE_Vehicles\cart\data\truck_01_ext_022_co.paa""]]",
            };
        };
    };
};
