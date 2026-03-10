//basic path macros
#define P(PATH) \y\A3CENTCOM\addons\armor\##PATH
    //P((Something) => "\y\A3CENTCOM\addons\CCarmor\something

#undef QUOTE
// Q(INPUT) => "INPUT"
#define Q(INPUT) QUOTE(INPUT)

#define QP(PATH) #P(PATH)
  // Wraps the expanded path in quotes, e.g.:
  // QP(data\loading_bg.jpg) => "\y\A3CENTCOM\addons\CCarmor\data\loading_bg.jpg"

// GLUE(A,B) => AB (concatenates tokens)
#define GLUE(A,B) A##B

#define QUOTE(s) #s

#define ODST_SOLDIER_UNIT(TF) \
    class CC_STB_ODST_##TF##_Rifleman : CC_##TF##_UnitBase \
    { \
        scope = 2; \
        scopeCurator = 2; \
        displayName = Q([CC] ODST Rifleman); \
        facewear = ""; \
        attendant = 0; \
        engineer = 0; \
        canDeactivateMines = 0; \
        uniformClass = "CC_U_B_TacShirt_SlimSleeve_Gloves_Urban"; \
        backpack = "CC_Rucksack"; \
        weapons[] = {"", "Throw", "Put"}; \
        respawnWeapons[] = {"", "Throw", "Put"}; \
        linkedItems[] = {"CC_M43D_ODST_Black_##TF##","CC_H_ECH55D_##TF##_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; \
        respawnLinkedItems[] = {"CC_M43D_ODST_Black_##TF##","CC_H_ECH55D_##TF##_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; \
        magazines[] = {""}; \
        respawnMagazines[] = {""}; \
        items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; \
        respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; \
    }; \
    class CC_STB_ODST_##TF##_Grenadier : CC_##TF##_UnitBase \
    { \
        scope = 2; \
        scopeCurator = 2; \
        displayName = Q([CC] ODST Grenadier); \
        facewear = ""; \
        attendant = 0; \
        engineer = 0; \
        canDeactivateMines = 0; \
        uniformClass = "CC_U_B_TacShirt_SlimSleeve_Gloves_Urban"; \
        backpack = "CC_Rucksack"; \
        weapons[] = {"", "Throw", "Put"}; \
        respawnWeapons[] = {"", "Throw", "Put"}; \
        linkedItems[] = {"CC_M43D_ODST_Black_##TF##","CC_H_ECH55D_##TF##_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; \
        respawnLinkedItems[] = {"CC_M43D_ODST_Black_##TF##","CC_H_ECH55D_##TF##_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; \
        magazines[] = {""}; \
        respawnMagazines[] = {""}; \
        items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; \
        respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; \
    }; \
    class CC_STB_ODST_##TF##_AT : CC_##TF##_UnitBase \
    { \
        scope = 2; \
        scopeCurator = 2; \
        displayName = Q([CC] ODST AT); \
        facewear = ""; \
        attendant = 0; \
        engineer = 0; \
        canDeactivateMines = 0; \
        uniformClass = "CC_U_B_TacShirt_SlimSleeve_Gloves_Urban"; \
        backpack = "CC_Rucksack"; \
        weapons[] = {"", "Throw", "Put"}; \
        respawnWeapons[] = {"", "Throw", "Put"}; \
        linkedItems[] = {"CC_M43D_ODST_Black_##TF##","CC_H_ECH55D_##TF##_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; \
        respawnLinkedItems[] = {"CC_M43D_ODST_Black_##TF##","CC_H_ECH55D_##TF##_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; \
        magazines[] = {""}; \
        respawnMagazines[] = {""}; \
        items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; \
        respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; \
    }; \
    class CC_STB_ODST_##TF##_Autorifleman : CC_##TF##_UnitBase \
    { \
        scope = 2; \
        scopeCurator = 2; \
        displayName = Q([CC] ODST Autorifleman); \
        facewear = ""; \
        attendant = 0; \
        engineer = 0; \
        canDeactivateMines = 0; \
        uniformClass = "CC_U_B_TacShirt_SlimSleeve_Gloves_Urban"; \
        backpack = "CC_Rucksack"; \
        weapons[] = {"", "Throw", "Put"}; \
        respawnWeapons[] = {"", "Throw", "Put"}; \
        linkedItems[] = {"CC_M43D_ODST_Black_##TF##","CC_H_ECH55D_##TF##_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; \
        respawnLinkedItems[] = {"CC_M43D_ODST_Black_##TF##","CC_H_ECH55D_##TF##_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; \
        magazines[] = {""}; \
        respawnMagazines[] = {""}; \
        items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; \
        respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; \
    }; \
    class CC_STB_ODST_##TF##_Sniper : CC_##TF##_UnitBase \
    { \
        scope = 2; \
        scopeCurator = 2; \
        displayName = Q([CC] ODST Sniper); \
        facewear = ""; \
        attendant = 0; \
        engineer = 0; \
        canDeactivateMines = 0; \
        uniformClass = "CC_U_B_TacShirt_SlimSleeve_Gloves_Urban"; \
        backpack = "CC_Rucksack"; \
        weapons[] = {"", "Throw", "Put"}; \
        respawnWeapons[] = {"", "Throw", "Put"}; \
        linkedItems[] = {"CC_M43D_ODST_Black_##TF##","CC_H_ECH55D_##TF##_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; \
        respawnLinkedItems[] = {"CC_M43D_ODST_Black_##TF##","CC_H_ECH55D_##TF##_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; \
        magazines[] = {""}; \
        respawnMagazines[] = {""}; \
        items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; \
        respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; \
    }; \
    class CC_STB_ODST_##TF##_Marksman : CC_##TF##_UnitBase \
    { \
        scope = 2; \
        scopeCurator = 2; \
        displayName = Q([CC] ODST Marksman); \
        facewear = ""; \
        attendant = 0; \
        engineer = 0; \
        canDeactivateMines = 0; \
        uniformClass = "CC_U_B_TacShirt_SlimSleeve_Gloves_Urban"; \
        backpack = "CC_Rucksack"; \
        weapons[] = {"", "Throw", "Put"}; \
        respawnWeapons[] = {"", "Throw", "Put"}; \
        linkedItems[] = {"CC_M43D_ODST_Black_##TF##","CC_H_ECH55D_##TF##_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; \
        respawnLinkedItems[] = {"CC_M43D_ODST_Black_##TF##","CC_H_ECH55D_##TF##_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; \
        magazines[] = {""}; \
        respawnMagazines[] = {""}; \
        items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; \
        respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; \
    }; \
    class CC_STB_ODST_##TF##_Scout : CC_##TF##_UnitBase \
    { \
        scope = 2; \
        scopeCurator = 2; \
        displayName = Q([CC] ODST Scout); \
        facewear = ""; \
        attendant = 0; \
        engineer = 0; \
        canDeactivateMines = 0; \
        uniformClass = "CC_U_B_TacShirt_SlimSleeve_Gloves_Urban"; \
        backpack = "CC_Rucksack"; \
        weapons[] = {"", "Throw", "Put"}; \
        respawnWeapons[] = {"", "Throw", "Put"}; \
        linkedItems[] = {"CC_M43D_ODST_Black_##TF##","CC_H_ECH55D_##TF##_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; \
        respawnLinkedItems[] = {"CC_M43D_ODST_Black_##TF##","CC_H_ECH55D_##TF##_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; \
        magazines[] = {""}; \
        respawnMagazines[] = {""}; \
        items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; \
        respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; \
    }; \
    class CC_STB_ODST_##TF##_Demo : CC_##TF##_UnitBase \
    { \
        scope = 2; \
        scopeCurator = 2; \
        displayName = Q([CC] ODST Demo); \
        facewear = ""; \
        attendant = 0; \
        engineer = 0; \
        canDeactivateMines = 0; \
        uniformClass = "CC_U_B_TacShirt_SlimSleeve_Gloves_Urban"; \
        backpack = "CC_Rucksack"; \
        weapons[] = {"", "Throw", "Put"}; \
        respawnWeapons[] = {"", "Throw", "Put"}; \
        linkedItems[] = {"CC_M43D_ODST_Black_##TF##","CC_H_ECH55D_##TF##_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; \
        respawnLinkedItems[] = {"CC_M43D_ODST_Black_##TF##","CC_H_ECH55D_##TF##_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; \
        magazines[] = {""}; \
        respawnMagazines[] = {""}; \
        items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; \
        respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; \
    }; \
    class CC_STB_ODST_##TF##_Medic : CC_##TF##_UnitBase \
    { \
        scope = 2; \
        scopeCurator = 2; \
        displayName = Q([CC] ODST Medic); \
        facewear = ""; \
        attendant = 0; \
        engineer = 0; \
        canDeactivateMines = 0; \
        uniformClass = "CC_U_B_TacShirt_SlimSleeve_Gloves_Urban"; \
        backpack = "CC_Rucksack"; \
        weapons[] = {"", "Throw", "Put"}; \
        respawnWeapons[] = {"", "Throw", "Put"}; \
        linkedItems[] = {"CC_M43D_ODST_Black_##TF##","CC_H_ECH55D_##TF##_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; \
        respawnLinkedItems[] = {"CC_M43D_ODST_Black_##TF##","CC_H_ECH55D_##TF##_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; \
        magazines[] = {""}; \
        respawnMagazines[] = {""}; \
        items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; \
        respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; \
    }; \
    class CC_STB_ODST_##TF##_Team_Lead : CC_##TF##_UnitBase \
    { \
        scope = 2; \
        scopeCurator = 2; \
        displayName = Q([CC] ODST Team Lead); \
        facewear = ""; \
        attendant = 0; \
        engineer = 0; \
        canDeactivateMines = 0; \
        uniformClass = "CC_U_B_TacShirt_SlimSleeve_Gloves_Urban"; \
        backpack = "CC_Rucksack"; \
        weapons[] = {"", "Throw", "Put"}; \
        respawnWeapons[] = {"", "Throw", "Put"}; \
        linkedItems[] = {"CC_M43D_ODST_Black_##TF##","CC_H_ECH55D_##TF##_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; \
        respawnLinkedItems[] = {"CC_M43D_ODST_Black_##TF##","CC_H_ECH55D_##TF##_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; \
        magazines[] = {""}; \
        respawnMagazines[] = {""}; \
        items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; \
        respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; \
    }; \
    class CC_STB_ODST_##TF##_Squad_Lead : CC_##TF##_UnitBase \
    { \
        scope = 2; \
        scopeCurator = 2; \
        displayName = Q([CC] ODST Squad Lead); \
        facewear = ""; \
        attendant = 0; \
        engineer = 0; \
        canDeactivateMines = 0; \
        uniformClass = "CC_U_B_TacShirt_SlimSleeve_Gloves_Urban"; \
        backpack = "CC_Rucksack"; \
        weapons[] = {"", "Throw", "Put"}; \
        respawnWeapons[] = {"", "Throw", "Put"}; \
        linkedItems[] = {"CC_M43D_ODST_Black_##TF##","CC_H_ECH55D_##TF##_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; \
        respawnLinkedItems[] = {"CC_M43D_ODST_Black_##TF##","CC_H_ECH55D_##TF##_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; \
        magazines[] = {""}; \
        respawnMagazines[] = {""}; \
        items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; \
        respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; \
    }; \
