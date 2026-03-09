// TCP Rifles
class TCP_arifle_MA40;
class CC_MA40: TCP_arifle_MA40
{
    author= AUTHOR;
    displayName = "[CENTCOM] MA40 ICWS Assault Rifle";
    baseWeapon = "CC_MA40B";
    magazines[] =
    {
        "CC_32Rnd_762x51_Mag_Tracer"
    };
    magazineWell[]=
    {
        "CC_32Rnd_762x51_MagWell",
        "CC_15Rnd_762x51_MagWell"
    };
};

class TCP_arifle_MA37;
class CC_MA37: TCP_arifle_MA37
{
    author= AUTHOR;
    displayName = "[CENTCOM] MA37 ICWS Assault Rifle";
    baseWeapon = "CC_MA37";
    magazines[]=
    {
        "CC_32Rnd_762x51_Mag_Tracer"
    };
    magazineWell[]=
    {
        "CC_32Rnd_762x51_MagWell",
        "CC_15Rnd_762x51_MagWell"
    };
};

class TCP_arifle_MA40_GL;
class CC_MA40GL: TCP_arifle_MA40_GL
{
    author= AUTHOR;
    displayName= "[CENTCOM] MA40 + M301 GL Assault Rifle";
    baseWeapon= "CC_MA40GL";
    magazines[]=
    {
        "CC_32Rnd_762x51_Mag_Tracer"
    };
    magazineWell[]=
    {
        "CC_32Rnd_762x51_MagWell",
        "CC_15Rnd_762x51_MagWell"
    };
};

class TCP_arifle_MA37_GL;
class CC_MA37GL: TCP_arifle_MA37_GL
{
    author= AUTHOR;
    displayName = "[CENTCOM] MA37 + M301 GL Assault Rifle";
    baseWeapon 	= "CC_MA37GL";
    magazines[]=
    {
        "CC_32Rnd_762x51_Mag_Tracer"
    };
    magazineWell[]= 
    {
        "CC_32Rnd_762x51_MagWell",
        "CC_15Rnd_762x51_MagWell"
    };
};
// OPTRE Rifles
class OPTRE_MA37K;
class CC_MA37K: OPTRE_MA37K
{
    baseWeapon = "CC_MA37K";
    author= AUTHOR;
    displayName = "[CENTCOM] MA37K Carbine";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[]=
    {
        "\OPTRE_Weapons\MA37K\data\MA37K_CO.paa"
    };
    magazines[]=
    {
        "CC_32Rnd_762x51_Mag_Tracer"
    };
    magazineWell[]=
    {
        "CC_32Rnd_762x51_MagWell",
        "CC_15Rnd_762x51_MagWell"
    };
    HUD_BulletInARows = 2;
    HUD_TotalPosibleBullet = 32;
};
