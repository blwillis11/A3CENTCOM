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
    displayName= "[CENTCOM] MA40 GL Assault Rifle";
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
    displayName = "[CENTCOM] MA37 GL Assault Rifle";
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

class OPTRE_MA5B;
class CC_MA5B: OPTRE_MA5B;
{
    baseWeapon= "CC_MA5B";
    author= AUTHOR;
    displayName= "[CENTCOM] MA5B Assault Rifle"
    hiddenSelections[]=
    {
        "camo",
    	"camo1",
    	"camo2",
    	"camo_reticle"
    };
    hiddenSelectionsTextures[]=
    {
        "optre_weapons\ar\data\weapon_co.paa",
        "optre_weapons\ar\data\smartlink_co.paa",
        "optre_weapons\ar\data\cover_co.paa",
        "optre_weapons\optics\data\reticles\ma5_reticle.paa"
    };
    magazines[]=
    {
        "CC_60Rnd_762x51_Mag"
        "CC_60Rnd_762x51_Mag_Tracer",
        "CC_60Rnd_762x51_Mag_Tracer_Yellow",
        "CC_60Rnd_762x51_Mag_Tracer_IR",
        "CC_60Rnd_762x51_Mag_Dual",
    };
    magazineWell[]=
    {
        "CC_60Rnd_762x51_MagWell"
    };
};

class OPTRE_MA5BGL;
class CC_MA5BGL: OPTRE_MA5BGL;
{
    baseWeapon= "CC_MA5BGL";
    author= AUTHOR;
    displayName= "[CENTCOM] MA5B GL Assault Rifle"
    hiddenSelections[]=
    {
        "camo",
    	"camo1",
    	"camo2",
    	"camo_reticle"
    };
    hiddenSelectionsTextures[]=
    {
        "optre_weapons\ar\data\weapon_co.paa",
        "optre_weapons\ar\data\smartlink_co.paa",
        "optre_weapons\ar\data\cover_co.paa",
        "optre_weapons\optics\data\reticles\ma5_reticle.paa"
    };
    magazines[]=
    {
        "CC_60Rnd_762x51_Mag"
        "CC_60Rnd_762x51_Mag_Tracer",
        "CC_60Rnd_762x51_Mag_Tracer_Yellow",
        "CC_60Rnd_762x51_Mag_Tracer_IR",
        "CC_60Rnd_762x51_Mag_Dual",
    };
    magazineWell[]=
    {
        "CC_60Rnd_762x51_MagWell"
    };
};