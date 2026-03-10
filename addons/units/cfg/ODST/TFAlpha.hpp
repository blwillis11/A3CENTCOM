class CC_TFAlpha_ODST_UnitBase: O_Soldier_F
{
    scope = 0;
    scopeCurator = 0;

    author = AUTHOR;
    side = 1;
    faction = "CC_TFA";
    editorCategory = "CC_TFA";
    editorSubcategory = "CC_STB_EdSubCat";

    identityTypes[] = {"Head_Euro","LanguagePER_F","G_IRAN_default"};
    allowedfacewear[] = {""};
    allowedHeadgear[] = {""};
    allowedHeadgearB[] = {""};
    headgearList[] = {""};
};
class CC_STB_ODST_TFAlpha_Rifleman : CC_TFAlpha_ODST_UnitBase 
{ 
    scope = 2; 
    scopeCurator = 2; 
    displayName = Q([CC] ODST Rifleman); 
    facewear = ""; 
    attendant = 0; 
    engineer = 0; 
    canDeactivateMines = 0; 
    uniformClass = "CC_U_B_TacShirt_SlimSleeve_Gloves_Urban"; 
    backpack = "CC_ILCS"; 
    weapons[] = {"", "Throw", "Put"}; 
    respawnWeapons[] = {"", "Throw", "Put"}; 
    linkedItems[] = {"CC_M43D_ODST_Black_TFAlpha","CC_H_ECH55D_TFAlpha_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    respawnLinkedItems[] = {"CC_M43D_ODST_Black_TFAlpha","CC_H_ECH55D_TFAlpha_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    magazines[] = {""}; 
    respawnMagazines[] = {""}; 
    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
}; 
class CC_STB_ODST_TFAlpha_Grenadier : CC_TFAlpha_ODST_UnitBase 
{ 
    scope = 2; 
    scopeCurator = 2; 
    displayName = Q([CC] ODST Grenadier); 
    facewear = ""; 
    attendant = 0; 
    engineer = 0; 
    canDeactivateMines = 0; 
    uniformClass = "CC_U_B_TacShirt_SlimSleeve_Gloves_Urban"; 
    backpack = "CC_ILCS"; 
    weapons[] = {"", "Throw", "Put"}; 
    respawnWeapons[] = {"", "Throw", "Put"}; 
    linkedItems[] = {"CC_M43D_ODST_Black_TFAlpha","CC_H_ECH55D_TFAlpha_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    respawnLinkedItems[] = {"CC_M43D_ODST_Black_TFAlpha","CC_H_ECH55D_TFAlpha_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    magazines[] = {""}; 
    respawnMagazines[] = {""}; 
    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
}; 
class CC_STB_ODST_TFAlpha_AT : CC_TFAlpha_ODST_UnitBase 
{ 
    scope = 2; 
    scopeCurator = 2; 
    displayName = Q([CC] ODST AT); 
    facewear = ""; 
    attendant = 0; 
    engineer = 0; 
    canDeactivateMines = 0; 
    uniformClass = "CC_U_B_TacShirt_SlimSleeve_Gloves_Urban"; 
    backpack = "CC_ILCS"; 
    weapons[] = {"", "Throw", "Put"}; 
    respawnWeapons[] = {"", "Throw", "Put"}; 
    linkedItems[] = {"CC_M43D_ODST_Black_TFAlpha","CC_H_ECH55D_TFAlpha_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    respawnLinkedItems[] = {"CC_M43D_ODST_Black_TFAlpha","CC_H_ECH55D_TFAlpha_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    magazines[] = {""}; 
    respawnMagazines[] = {""}; 
    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
}; 
class CC_STB_ODST_TFAlpha_Autorifleman : CC_TFAlpha_ODST_UnitBase 
{ 
    scope = 2; 
    scopeCurator = 2; 
    displayName = Q([CC] ODST Autorifleman); 
    facewear = ""; 
    attendant = 0; 
    engineer = 0; 
    canDeactivateMines = 0; 
    uniformClass = "CC_U_B_TacShirt_SlimSleeve_Gloves_Urban"; 
    backpack = "CC_ILCS"; 
    weapons[] = {"", "Throw", "Put"}; 
    respawnWeapons[] = {"", "Throw", "Put"}; 
    linkedItems[] = {"CC_M43D_ODST_Black_TFAlpha","CC_H_ECH55D_TFAlpha_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    respawnLinkedItems[] = {"CC_M43D_ODST_Black_TFAlpha","CC_H_ECH55D_TFAlpha_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    magazines[] = {""}; 
    respawnMagazines[] = {""}; 
    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
}; 
class CC_STB_ODST_TFAlpha_Sniper : CC_TFAlpha_ODST_UnitBase 
{ 
    scope = 2; 
    scopeCurator = 2; 
    displayName = Q([CC] ODST Sniper); 
    facewear = ""; 
    attendant = 0; 
    engineer = 0; 
    canDeactivateMines = 0; 
    uniformClass = "CC_U_B_TacShirt_SlimSleeve_Gloves_Urban"; 
    backpack = "CC_ILCS"; 
    weapons[] = {"", "Throw", "Put"}; 
    respawnWeapons[] = {"", "Throw", "Put"}; 
    linkedItems[] = {"CC_M43D_ODST_Black_TFAlpha","CC_H_ECH55D_TFAlpha_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    respawnLinkedItems[] = {"CC_M43D_ODST_Black_TFAlpha","CC_H_ECH55D_TFAlpha_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    magazines[] = {""}; 
    respawnMagazines[] = {""}; 
    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
}; 
class CC_STB_ODST_TFAlpha_Marksman : CC_TFAlpha_ODST_UnitBase 
{ 
    scope = 2; 
    scopeCurator = 2; 
    displayName = Q([CC] ODST Marksman); 
    facewear = ""; 
    attendant = 0; 
    engineer = 0; 
    canDeactivateMines = 0; 
    uniformClass = "CC_U_B_TacShirt_SlimSleeve_Gloves_Urban"; 
    backpack = "CC_ILCS"; 
    weapons[] = {"", "Throw", "Put"}; 
    respawnWeapons[] = {"", "Throw", "Put"}; 
    linkedItems[] = {"CC_M43D_ODST_Black_TFAlpha","CC_H_ECH55D_TFAlpha_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    respawnLinkedItems[] = {"CC_M43D_ODST_Black_TFAlpha","CC_H_ECH55D_TFAlpha_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    magazines[] = {""}; 
    respawnMagazines[] = {""}; 
    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
}; 
class CC_STB_ODST_TFAlpha_Scout : CC_TFAlpha_ODST_UnitBase 
{ 
    scope = 2; 
    scopeCurator = 2; 
    displayName = Q([CC] ODST Scout); 
    facewear = ""; 
    attendant = 0; 
    engineer = 0; 
    canDeactivateMines = 0; 
    uniformClass = "CC_U_B_TacShirt_SlimSleeve_Gloves_Urban"; 
    backpack = "CC_ILCS"; 
    weapons[] = {"", "Throw", "Put"}; 
    respawnWeapons[] = {"", "Throw", "Put"}; 
    linkedItems[] = {"CC_M43D_ODST_Black_TFAlpha","CC_H_ECH55D_TFAlpha_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    respawnLinkedItems[] = {"CC_M43D_ODST_Black_TFAlpha","CC_H_ECH55D_TFAlpha_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    magazines[] = {""}; 
    respawnMagazines[] = {""}; 
    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
}; 
class CC_STB_ODST_TFAlpha_Demo : CC_TFAlpha_ODST_UnitBase 
{ 
    scope = 2; 
    scopeCurator = 2; 
    displayName = Q([CC] ODST Demo); 
    facewear = ""; 
    attendant = 0; 
    engineer = 0; 
    canDeactivateMines = 0; 
    uniformClass = "CC_U_B_TacShirt_SlimSleeve_Gloves_Urban"; 
    backpack = "CC_ILCS"; 
    weapons[] = {"", "Throw", "Put"}; 
    respawnWeapons[] = {"", "Throw", "Put"}; 
    linkedItems[] = {"CC_M43D_ODST_Black_TFAlpha","CC_H_ECH55D_TFAlpha_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    respawnLinkedItems[] = {"CC_M43D_ODST_Black_TFAlpha","CC_H_ECH55D_TFAlpha_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    magazines[] = {""}; 
    respawnMagazines[] = {""}; 
    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
}; 
class CC_STB_ODST_TFAlpha_Medic : CC_TFAlpha_ODST_UnitBase 
{ 
    scope = 2; 
    scopeCurator = 2; 
    displayName = Q([CC] ODST Medic); 
    facewear = ""; 
    attendant = 0; 
    engineer = 0; 
    canDeactivateMines = 0; 
    uniformClass = "CC_U_B_TacShirt_SlimSleeve_Gloves_Urban"; 
    backpack = "CC_ILCS"; 
    weapons[] = {"", "Throw", "Put"}; 
    respawnWeapons[] = {"", "Throw", "Put"}; 
    linkedItems[] = {"CC_M43D_ODST_Black_TFAlpha","CC_H_ECH55D_TFAlpha_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    respawnLinkedItems[] = {"CC_M43D_ODST_Black_TFAlpha","CC_H_ECH55D_TFAlpha_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    magazines[] = {""}; 
    respawnMagazines[] = {""}; 
    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
}; 
class CC_STB_ODST_TFAlpha_Team_Lead : CC_TFAlpha_ODST_UnitBase 
{ 
    scope = 2; 
    scopeCurator = 2; 
    displayName = Q([CC] ODST Team Lead); 
    facewear = ""; 
    attendant = 0; 
    engineer = 0; 
    canDeactivateMines = 0; 
    uniformClass = "CC_U_B_TacShirt_SlimSleeve_Gloves_Urban"; 
    backpack = "CC_ILCS"; 
    weapons[] = {"", "Throw", "Put"}; 
    respawnWeapons[] = {"", "Throw", "Put"}; 
    linkedItems[] = {"CC_M43D_ODST_Black_TFAlpha","CC_H_ECH55D_TFAlpha_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    respawnLinkedItems[] = {"CC_M43D_ODST_Black_TFAlpha","CC_H_ECH55D_TFAlpha_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    magazines[] = {""}; 
    respawnMagazines[] = {""}; 
    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
}; 
class CC_STB_ODST_TFAlpha_Squad_Lead : CC_TFAlpha_ODST_UnitBase 
{ 
    scope = 2; 
    scopeCurator = 2; 
    displayName = Q([CC] ODST Squad Lead); 
    facewear = ""; 
    attendant = 0; 
    engineer = 0; 
    canDeactivateMines = 0; 
    uniformClass = "CC_U_B_TacShirt_SlimSleeve_Gloves_Urban"; 
    backpack = "CC_ILCS"; 
    weapons[] = {"", "Throw", "Put"}; 
    respawnWeapons[] = {"", "Throw", "Put"}; 
    linkedItems[] = {"CC_M43D_ODST_Black_TFAlpha","CC_H_ECH55D_TFAlpha_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    respawnLinkedItems[] = {"CC_M43D_ODST_Black_TFAlpha","CC_H_ECH55D_TFAlpha_Black_Blue","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}; 
    magazines[] = {""}; 
    respawnMagazines[] = {""}; 
    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"}; 
}; 
