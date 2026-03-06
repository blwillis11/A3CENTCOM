class OPTRE_YSS_1000_A_VTOL_Single;
class CC_YSS_1000_A_VTOL_Single: OPTRE_YSS_1000_A_VTOL_Single
{
    displayName="[CC] YSS-1000-AS [VTOL]";
    author= AUTHOR;
    faction = "CC_Assets";
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Planes_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_Assets_Aviator";
    class VehicleSpawnerInfo {
        class CC_AirSpawner
        {
            scope = 1;
            spawner= "CENTCOM Aviation";
            vehicle = "YSS-1000-AS";
            Type = "VTOL";
            cost = 5;
            priority = 2;
        };
    };
};

class DMNS_Shortsword_01_F;

class CC_Shortsword_01_F: DMNS_Shortsword_01_F
{
    displayName="[CC] B-62 Shortsword";
    author= AUTHOR;
    faction = "CC_Assets";
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Planes_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_Assets_Aviator";
    class VehicleSpawnerInfo {
        class CC_AirSpawner
        {
            scope = 1;
            spawner= "CENTCOM Aviation";
            vehicle = "B-62";
            Type = "Shortsword";
            cost = 5;
            priority = 2;
        };
    };
};

class DMNS_JT_RM2_Longsword_dynamicLoadout_F;

class CC_JT_RM2_Longsword_dynamicLoadout_F: DMNS_JT_RM2_Longsword_dynamicLoadout_F
{
    displayName="[CC] JT-RM2 Longsword";
    author= AUTHOR;
    faction = "CC_Assets";
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Planes_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_Assets_Aviator";
    class VehicleSpawnerInfo {
        class CC_AirSpawner
        {
            scope = 1;
            spawner= "CENTCOM Aviation";
            vehicle = "JT-RM2";
            Type = "Longsword";
            cost = 5;
            priority = 2;
        };
    };
};
