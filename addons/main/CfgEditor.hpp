class cfgFactionClasses 
{ 
    class STB73_STB
    { 
        displayName = "[73] Shock Trooper Battalion Assets";
        priority = 0; // Position in list.
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = "main\UI\73odstSTB.paa"; //Custom Icon
    };
    class STB73_odst
    {
        displayName = "[73] Shock Trooper Battalion ODST";
        priority = 0; // Position in list.
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2.
        icon = "main\UI\73odstSTB.paa"; //Custom Icon
    };
    class STB73_10MEB
    {
        displayName = "[73] 10th Marine Expeditionary Forces";
        priority = 0; // Position in list.
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2.
        icon = "main\UI\10thMEBLogo.paa"; //Custom Icon
    };
    class STB73_OCLF
    {
        displayName = "[73] Outer Colony Liberation Front";
        priority = 0; // Position in list.
        side = 0; // Opfor = 0, Blufor = 1, Indep = 2.
        icon = ""; //Custom Icon
    };
    class STB73_PK
    {
        displayName = "[73] United Nations Peacekeepers";
        priority = 0; // Position in list.
        side = 2; // Opfor = 0, Blufor = 1, Indep = 2.
        icon = ""; //Custom Icon
    };
    class STB73_Modules
    {
        displayName = "[73] Modules";
        priority = 0; // Position in list.
        side = 7;
    };
};
class CfgEditorCategories
{
	class STB73_STB // Category class, you point to it in editorCategory property
	{
		displayName = "[73] Shock Trooper Battalion Assets"; // Name visible in the list
		scopeCurator=2;
		scopeeditor=2;
	};
	class STB73_odst // Category class, you point to it in editorCategory property
	{
		displayName = "[73] Shock Trooper Battalion ODST"; // Name visible in the list
		scopeCurator=2;
		scopeeditor=2;
	};
	class STB73_10MEB // Category class, you point to it in editorCategory property
	{
		displayName = "[73] 10th Marine Expeditionary Forces"; // Name visible in the list
		scopeCurator=2;
		scopeeditor=2;
	};
    class STB73_Objects
    {
        displayName = "[73] Objects";
    };
    class STB73_OCLF // Category class, you point to it in editorCategory property
	{
		displayName = "[73] Outer Colony Liberation Front"; // Name visible in the list
		scopeCurator=2;
		scopeeditor=2;
	};
    class STB73_PK
    {
        displayName = "[73] United Nations Peacekeepers";
		scopeCurator=2;
		scopeeditor=2;
    };
};

class CfgEditorSubcategories
{
    class STB73_APCs_EdSubCat
    {
        displayName = "APCs";
    };
    class STB73_Crates
    {
        displayName = "Crates";
        vehicleClass = "STB73_Objects";
    };
    class STB73_Cars_EdSubCat
    {
        displayName = "Cars";
    };
    class STB73_Helicopters_EdSubCat
    {
        displayName = "Helicopters";
    };
    class STB73_Drones_EdSubCat
    {
        displayName = "Drones";
    };
    class STB73_Aviation_EdSubCat
    {
        displayName = "Aviation";
    };
    class STB73_Planes_EdSubCat
    {
        displayName = "Planes";
    };
    class STB73_Mechanized_EdSubCat
    {
        displayName = "Mechanized";
    };
    class STB73_STB_EdSubCat
    {
        displayName = "Troopers [Batt]";
    };
    class STB73_Infantry_EdSubCat
    {
        displayName = "Infantry";
    };
    class STB73_ECH_Infantry_EdSubCat
    {
        displayName = "Infantry [ECH]";
    };
    class STB73_Tanks_EdSubCat
    {
        displayName = "Tanks";
    };
    class STB73_Artillery_EdSubCat
    {
        displayName = "Artillery";
    };
	class supply_pods // Category class, you point to it in editorSubcategory property
	{
		displayName = "Supply Pods"; // Name visible in the list
	};
    class STB73_Misc_EdSubCat
    {
        displayName = "Miscellaneous";
        vehicleClass = "STB73_Objects";
    };
	class STB73_Utility_EdSubCat // Category class, you point to it in editorSubcategory property
	{
		displayName = "Utility"; // Name visible in the list
	};
    class STB73_SpecOps_EdSubCat
    {
        displayName = "Special Forces";
    };
};
