class cfgFactionClasses 
{ 
    class CC_Assets
    { 
        displayName = "[CC] Centcom Assets";
        priority = 0; // Position in list.
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = "main\UI\CCLogo.paa"; //Custom Icon
    };
    class CC_TFA
    {
        displayName = "[CC] Task Force Alpha";
        priority = 0; // Position in list.
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2.
        icon = "main\UI\CCLogo.paa"; //Custom Icon
    };
    class CC_TFB
    {
        displayName = "[CC] Task Force Bravo";
        priority = 0; // Position in list.
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2.
        icon = "main\UI\CCLogo.paa"; //Custom Icon
    };
};
class CfgEditorCategories
{
	class CC_Assets
    { 
        displayName = "[CC] Centcom Assets";
        scopeCurator=2;
		scopeeditor=2;
    };
    class CC_TFA
    {
        displayName = "[CC] Task Force Alpha";
        scopeCurator=2;
		scopeeditor=2;
    };
    class CC_TFB
    {
        displayName = "[CC] Task Force Bravo";
        scopeCurator=2;
		scopeeditor=2;
    };
};

class CfgEditorSubcategories
{
    class CC_APCs_EdSubCat
    {
        displayName = "APCs";
    };
    class CC_Crates
    {
        displayName = "Crates";
        vehicleClass = "CC_Assets";
    };
    class CC_Cars_EdSubCat
    {
        displayName = "Cars";
    };
    class CC_Helicopters_EdSubCat
    {
        displayName = "Helicopters";
    };
    class CC_Drones_EdSubCat
    {
        displayName = "Drones";
    };
    class CC_Aviation_EdSubCat
    {
        displayName = "Aviation";
    };
    class CC_Planes_EdSubCat
    {
        displayName = "Planes";
    };
    class CC_STB_EdSubCat
    {
        displayName = "ODST Troopers";
    };
    class CC_Mar_EdSubCat
    {
        displayName = "Marines";
    };
    class CC_Infantry_EdSubCat
    {
        displayName = "Infantry";
    };
    class CC_ECH_Infantry_EdSubCat
    {
        displayName = "Infantry [ECH]";
    };
    class CC_Tanks_EdSubCat
    {
        displayName = "Tanks";
    };
    class CC_Artillery_EdSubCat
    {
        displayName = "Artillery";
    };
	class CC_Utility_EdSubCat // Category class, you point to it in editorSubcategory property
	{
		displayName = "Utility"; // Name visible in the list
	};
    class CC_SpecOps_EdSubCat
    {
        displayName = "Special Forces";
    };
    class CC_SupplyPods_EdSubCat
    {
        displayName = "Supply Pods";
    };
    class CC_Misc_EdSubCat
    {
        displayName = "Miscellaneous";
        vehicleClass = "CC_Assets";
    };
    class CC_Crates_EdSubCat
    {
        displayName = "Crates";
        vehicleClass = "CC_Assets";
    };
};
