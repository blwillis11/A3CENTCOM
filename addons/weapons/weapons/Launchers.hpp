class OPTRE_M41_SSR;
class CC_M41_SSR : OPTRE_M41_SSR
{
    displayName = "[CENTCOM] M41 SSR MAV/AW";
    author= AUTHOR;
    baseWeapon="CC_MPLR";
    scope = 2;
    scopeArsenal = 2;
    enabled = 1;
    weaponInfoType = "";
    magazines[]={
        "CC_HEAT",
    };
    magazineWell[] = {"CC_rockets","OPTRE_M41"};
    hiddenSelections[]= {
        "camo",
        "camo_tubes",
        "camo_details"
    };
    hiddenSelectionsTextures[] = {
        "optre_weapons\rockets\data\launcher_co.paa",
        "optre_weapons\rockets\data\tubes_co.paa",
        "optre_weapons\rockets\data\logos_ca.paa"
    };
};