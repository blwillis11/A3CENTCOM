class CC_TFBravo_Mar_UnitBase: O_Soldier_F
{
    scope = 0;
    scopeCurator = 0;

    author = AUTHOR;
    side = 1;
    faction = "CC_TFB";
    editorCategory = "CC_TFB";
    editorSubcategory = "CC_Mar_EdSubCat";

    identityTypes[] = {"Head_Euro","LanguagePER_F","G_IRAN_default"};
    allowedfacewear[] = {""};
    allowedHeadgear[] = {""};
    allowedHeadgearB[] = {""};
    headgearList[] = {""};
};
class CC_MAR_TFBravo_Rifleman : CC_TFBravo_Mar_UnitBase 
{ 
    scope = 2; 
    scopeCurator = 2; 
    displayName = Q([CC] Marine Rifleman); 
    facewear = ""; 
    attendant = 0; 
    engineer = 0; 
    canDeactivateMines = 0; 
    uniformClass = "CC_U_B_FieldTop_Full_Gloves_Green"; 
    backpack = "CC_UNSC_Rucksack"; 
    weapons[] = {"", "Throw", "Put"}; 
    respawnWeapons[] = {"", "Throw", "Put"}; 
    linkedItems[] = {"CC_M43A_GungnirL_Olive_TFBravo","CC_H_CH43A_TFBravo_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    respawnLinkedItems[] = {"CC_M43A_GungnirL_Olive_TFBravo","CC_H_CH43A_TFBravo_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    magazines[] = {""}; 
    respawnMagazines[] = {""}; 
    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
}; 
class CC_MAR_TFBravo_Grenadier : CC_TFBravo_Mar_UnitBase 
{ 
    scope = 2; 
    scopeCurator = 2; 
    displayName = Q([CC] Marine Grenadier); 
    facewear = ""; 
    attendant = 0; 
    engineer = 0; 
    canDeactivateMines = 0; 
    uniformClass = "CC_U_B_FieldTop_Full_Gloves_Green"; 
    backpack = "CC_UNSC_Rucksack"; 
    weapons[] = {"", "Throw", "Put"}; 
    respawnWeapons[] = {"", "Throw", "Put"}; 
    linkedItems[] = {"CC_M43A_GungnirL_Olive_TFBravo","CC_H_CH43A_TFBravo_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    respawnLinkedItems[] = {"CC_M43A_GungnirL_Olive_TFBravo","CC_H_CH43A_TFBravo_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    magazines[] = {""}; 
    respawnMagazines[] = {""}; 
    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
}; 
class CC_MAR_TFBravo_AT : CC_TFBravo_Mar_UnitBase 
{ 
    scope = 2; 
    scopeCurator = 2; 
    displayName = Q([CC] Marine AT); 
    facewear = ""; 
    attendant = 0; 
    engineer = 0; 
    canDeactivateMines = 0; 
    uniformClass = "CC_U_B_FieldTop_Full_Gloves_Green"; 
    backpack = "CC_UNSC_Rucksack_hev"; 
    weapons[] = {"", "Throw", "Put"}; 
    respawnWeapons[] = {"", "Throw", "Put"}; 
    linkedItems[] = {"CC_M43A_GungnirL_Olive_TFBravo","CC_H_CH43A_TFBravo_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    respawnLinkedItems[] = {"CC_M43A_GungnirL_Olive_TFBravo","CC_H_CH43A_TFBravo_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    magazines[] = {""}; 
    respawnMagazines[] = {""}; 
    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
}; 
class CC_MAR_TFBravo_Autorifleman : CC_TFBravo_Mar_UnitBase 
{ 
    scope = 2; 
    scopeCurator = 2; 
    displayName = Q([CC] Marine Autorifleman); 
    facewear = ""; 
    attendant = 0; 
    engineer = 0; 
    canDeactivateMines = 0; 
    uniformClass = "CC_U_B_FieldTop_Full_Gloves_Green"; 
    backpack = "CC_UNSC_Rucksack_hev"; 
    weapons[] = {"", "Throw", "Put"}; 
    respawnWeapons[] = {"", "Throw", "Put"}; 
    linkedItems[] = {"CC_M43A_GungnirL_Olive_TFBravo","CC_H_CH43A_TFBravo_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    respawnLinkedItems[] = {"CC_M43A_GungnirL_Olive_TFBravo","CC_H_CH43A_TFBravo_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    magazines[] = {""}; 
    respawnMagazines[] = {""}; 
    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
}; 
class CC_MAR_TFBravo_Sniper : CC_TFBravo_Mar_UnitBase 
{ 
    scope = 2; 
    scopeCurator = 2; 
    displayName = Q([CC] Marine Sniper); 
    facewear = ""; 
    attendant = 0; 
    engineer = 0; 
    canDeactivateMines = 0; 
    uniformClass = "CC_U_B_FieldTop_Full_Gloves_Green"; 
    backpack = "CC_UNSC_Rucksack"; 
    weapons[] = {"", "Throw", "Put"}; 
    respawnWeapons[] = {"", "Throw", "Put"}; 
    linkedItems[] = {"CC_M43A_GungnirL_Olive_TFBravo","CC_H_CH43A_TFBravo_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    respawnLinkedItems[] = {"CC_M43A_GungnirL_Olive_TFBravo","CC_H_CH43A_TFBravo_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    magazines[] = {""}; 
    respawnMagazines[] = {""}; 
    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
}; 
class CC_MAR_TFBravo_Marksman : CC_TFBravo_Mar_UnitBase 
{ 
    scope = 2; 
    scopeCurator = 2; 
    displayName = Q([CC] Marine Marksman); 
    facewear = ""; 
    attendant = 0; 
    engineer = 0; 
    canDeactivateMines = 0; 
    uniformClass = "CC_U_B_FieldTop_Full_Gloves_Green"; 
    backpack = "CC_UNSC_Rucksack"; 
    weapons[] = {"", "Throw", "Put"}; 
    respawnWeapons[] = {"", "Throw", "Put"}; 
    linkedItems[] = {"CC_M43A_GungnirL_Olive_TFBravo","CC_H_CH43A_TFBravo_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    respawnLinkedItems[] = {"CC_M43A_GungnirL_Olive_TFBravo","CC_H_CH43A_TFBravo_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    magazines[] = {""}; 
    respawnMagazines[] = {""}; 
    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
}; 
class CC_MAR_TFBravo_Scout : CC_TFBravo_Mar_UnitBase 
{ 
    scope = 2; 
    scopeCurator = 2; 
    displayName = Q([CC] Marine Scout); 
    facewear = ""; 
    attendant = 0; 
    engineer = 0; 
    canDeactivateMines = 0; 
    uniformClass = "CC_U_B_FieldTop_Full_Gloves_Green"; 
    backpack = "CC_UNSC_Rucksack"; 
    weapons[] = {"", "Throw", "Put"}; 
    respawnWeapons[] = {"", "Throw", "Put"}; 
    linkedItems[] = {"CC_M43A_GungnirL_Olive_TFBravo","CC_H_CH43A_TFBravo_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    respawnLinkedItems[] = {"CC_M43A_GungnirL_Olive_TFBravo","CC_H_CH43A_TFBravo_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    magazines[] = {""}; 
    respawnMagazines[] = {""}; 
    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
}; 
class CC_MAR_TFBravo_Demo : CC_TFBravo_Mar_UnitBase 
{ 
    scope = 2; 
    scopeCurator = 2; 
    displayName = Q([CC] Marine Demo); 
    facewear = ""; 
    attendant = 0; 
    engineer = 0; 
    canDeactivateMines = 0; 
    uniformClass = "CC_U_B_FieldTop_Full_Gloves_Green"; 
    backpack = "CC_UNSC_Rucksack_hev"; 
    weapons[] = {"", "Throw", "Put"}; 
    respawnWeapons[] = {"", "Throw", "Put"}; 
    linkedItems[] = {"CC_M43A_GungnirL_Olive_TFBravo","CC_H_CH43A_TFBravo_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    respawnLinkedItems[] = {"CC_M43A_GungnirL_Olive_TFBravo","CC_H_CH43A_TFBravo_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    magazines[] = {""}; 
    respawnMagazines[] = {""}; 
    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
}; 
class CC_MAR_TFBravo_Medic : CC_TFBravo_Mar_UnitBase 
{ 
    scope = 2; 
    scopeCurator = 2; 
    displayName = Q([CC] Marine Medic); 
    facewear = ""; 
    attendant = 0; 
    engineer = 0; 
    canDeactivateMines = 0; 
    uniformClass = "CC_U_B_FieldTop_Full_Gloves_Green"; 
    backpack = "CC_UNSC_Rucksack_med"; 
    weapons[] = {"", "Throw", "Put"}; 
    respawnWeapons[] = {"", "Throw", "Put"}; 
    linkedItems[] = {"CC_M43A_GungnirL_Olive_TFBravo","CC_H_CH43A_TFBravo_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    respawnLinkedItems[] = {"CC_M43A_GungnirL_Olive_TFBravo","CC_H_CH43A_TFBravo_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    magazines[] = {""}; 
    respawnMagazines[] = {""}; 
    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
}; 
class CC_MAR_TFBravo_Team_Lead : CC_TFBravo_Mar_UnitBase 
{ 
    scope = 2; 
    scopeCurator = 2; 
    displayName = Q([CC] Marine Team Lead); 
    facewear = ""; 
    attendant = 0; 
    engineer = 0; 
    canDeactivateMines = 0; 
    uniformClass = "CC_U_B_FieldTop_Full_Gloves_Green"; 
    backpack = "CC_UNSC_Rucksack"; 
    weapons[] = {"", "Throw", "Put"}; 
    respawnWeapons[] = {"", "Throw", "Put"}; 
    linkedItems[] = {"CC_M43A_GungnirL_Olive_TFBravo","CC_H_CH43A_TFBravo_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    respawnLinkedItems[] = {"CC_M43A_GungnirL_Olive_TFBravo","CC_H_CH43A_TFBravo_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    magazines[] = {""}; 
    respawnMagazines[] = {""}; 
    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
}; 
class CC_MAR_TFBravo_Squad_Lead : CC_TFBravo_Mar_UnitBase 
{ 
    scope = 2; 
    scopeCurator = 2; 
    displayName = Q([CC] Marine Squad Lead); 
    facewear = ""; 
    attendant = 0; 
    engineer = 0; 
    canDeactivateMines = 0; 
    uniformClass = "CC_U_B_FieldTop_Full_Gloves_Green"; 
    backpack = "CC_UNSC_Rucksack"; 
    weapons[] = {"", "Throw", "Put"}; 
    respawnWeapons[] = {"", "Throw", "Put"}; 
    linkedItems[] = {"CC_M43A_GungnirL_Olive_TFBravo","CC_H_CH43A_TFBravo_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    respawnLinkedItems[] = {"CC_M43A_GungnirL_Olive_TFBravo","CC_H_CH43A_TFBravo_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    magazines[] = {""}; 
    respawnMagazines[] = {""}; 
    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
}; 