class VES_HDV134_Resupply;

class CC_HDV134_Resupply:VES_HDV134_Resupply
{
    displayName="[CC] HDV-134 Buffalo [Resupply]";
    author= AUTHOR;
    faction = "CC_Assets";
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
     class ace_cargo {
            class cargo {
                class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Wheel";
					
                    amount = 8;
                };
            };
        };
    crew = "CC_MAR_TFAlpha_Rifleman";
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Mechanized";
            vehicle = "HDV134";
            Type = "Resupply";
            cost = 0;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_CO.paa"",""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO.paa"",""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_S_CO.paa"",""\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa""]]",
            };
        };
    };
};

class VES_HDV134_TT;

class CC_HDV134_TT:VES_HDV134_TT
{
    displayName="[CC] HDV-134 Buffalo [TT]";
    author= AUTHOR;
    faction = "CC_Assets";
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_MAR_TFAlpha_Rifleman";
 class ace_cargo {
            class cargo {
                class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Wheel";
					
                    amount = 8;
                };
            };
        };
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Mechanized";
            vehicle = "HDV134";
            Type = "TT";
            cost = 0;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_CO.paa"",""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO.paa"",""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_S_CO.paa"",""\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa""]]",
            };
        };
    };
};

class VES_HDV134_TT_C;

class CC_HDV134_TT_C:VES_HDV134_TT_C
{
    displayName="[CC] HDV-134 Buffalo [TT-C]";
    author= AUTHOR;
    faction = "CC_Assets";
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_MAR_TFAlpha_Rifleman";
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Mechanized";
            vehicle = "HDV134";
            Type = "TT-C";
            cost = 0;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_CO.paa"",""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO.paa"",""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_S_CO.paa"",""\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa""]]",
            };
        };
    };
};



class TCP_B_UNSC_MC_M12A;

class CC_M12 : TCP_B_UNSC_MC_M12A
{
    displayName="[CC] M12A-FAV Warthog";
    author= AUTHOR;
    faction = "CC_Assets";
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_MAR_TFAlpha_Rifleman";
    class ace_cargo {
        class cargo {
            class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                type = "ACE_Wheel";
                amount = 8;
            };
        };
    };
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Mechanized";
            vehicle = "M12A";
            Type = "FAV";
            cost = 0;
            priority = 1;
        };
    };
};

class TCP_B_UNSC_MC_M12A_LAAG_M41;

class CC_M12_LRV : TCP_B_UNSC_MC_M12A_LAAG_M41
{
    displayName="[CC] M12A-LRV Warthog [M41 LAAG]";
    author= AUTHOR;
    faction = "CC_Assets";
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_MAR_TFAlpha_Rifleman";
    class ace_cargo {
        class cargo {
            class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                type = "ACE_Wheel";

                amount = 8;
            };
        };
    };
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Mechanized";
            vehicle = "M12A";
            Type = "LRV LAAG";
            cost = 1;
            priority = 1;
        };
    };
};

class TCP_B_UNSC_MC_M831A;

class CC_M831_TT : TCP_B_UNSC_MC_M831A
{
    displayName="[CC] M831A Troop Transport Warthog";
    author= AUTHOR;
    faction = "CC_Assets";
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_MAR_TFAlpha_Rifleman";
    class ace_cargo {
        class cargo {
            class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                type = "ACE_Wheel";

                amount = 8;
            };
        };
    };
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Mechanized";
            vehicle = "M12A";
            Type = "Troop Transport";
            cost = 0;
            priority = 1;
        };
    };
};

class OPTRE_M274_ATV;

class CC_M274_ATV:OPTRE_M274_ATV
{
   canBeTransported = 1;
   transportVehicleMass = 1000;  // Mongoose mass (approx.)
   displayName="[CC] M274 Mongoose";
   author= AUTHOR;
   faction = "CC_Assets";
   editorCategory = "CC_Assets";
   editorSubcategory = "CC_Cars_EdSubCat";
   scopeCurator=2;
   scope=2;
   side=1;
   crew = "CC_MAR_TFAlpha_Rifleman";
   class VehicleTransport
   {
        class Cargo
        {
            parachuteClass			= "B_Parachute_02_F";	// Type of parachute used when dropped in air. When empty then parachute is not used.
            parachuteHeightLimit	= 40;				// Minimal height above terrain when parachute is used.
            canBeTransported		= 1;				// 0 (false) / 1 (true)
            //rotation = -90;								// (optional) Defines in which direction the vehicle gets rotated when its loaded into ViV cargo and will only fit when rotated
                                                        // Only -90 and 90 are supported. Since v2.08
        };
   };
};
