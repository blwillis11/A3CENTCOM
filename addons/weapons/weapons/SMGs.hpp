//TCP SMGs
class TCP_SMG_M7;
class CC_M7_SMG: TCP_SMG_M7 {
    author= "CENTCOM J-4";
    displayName = "[CENTCOM] M7S SMG";
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    baseWeapon="CC_M7_SMG";
    magazineWell[]=
    {
        "CC_48Rnd_5x23Caseless_MagWell",
        "CC_60Rnd_5x23Caseless_MagWell"
    };
    magazines[] =
    {
        "CC_48Rnd_5x23Caseless_FMJ_Mag"
    };
};
class TCP_arifle_M6J;
class CC_M6J : TCP_arifle_M6J
{
    author= AUTHOR;
    baseWeapon 	= "CC_M6J";
    displayName = "[CENTCOM] M6J PDWS";
    scope = 2;
    magazines[] = 
    {
        "CC_36Rnd_127x30_SAP_Mag_Tracer"
    };
    magazineWell[]=
    {
        "CC_12Rnd_127x30_MagWell",
        "CC_24Rnd_127x30_MagWell",
        "CC_36Rnd_127x30_MagWell"
    };
};
