class CfgPatches
{
    class CC_Weapons
    {
        author="CENTCOM J-4";
        name="CENTCOM Weapons";
        weapons[]=
        {
            //BRs
            "",
            //Long Rifles
            "",
            "",
            //Rifles
            "",
            //SMGs
            "",
            //Pistols
            "CC_Pistol_M6G",
            //Machine Guns
            "CC_LMG_M731"
            //


        };
        magazines[]=
        {

        };
        ammo[]=
        {

        };
        units[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
        };
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot; 
class TopDown;
class Mode_RailSemiAuto;

class CfgWeapons
{
    class WeaponSlotsInfo;

    #include "weapons\BattleRifles.hpp"
    #include "weapons\LongRifles.hpp"
    #include "weapons\MachineGuns.hpp"
    #include "weapons\Pistols.hpp"
    #include "weapons\Rifles.hpp"
    #include "weapons\SMGs.hpp"
    #include "weapons\UGLs.hpp"
};

class CfgAmmo
{
    #include "cfg\Ammo.hpp"
};

class CfgMagazines
{
    #include "cfg\Magazines.hpp"
};

class CfgMagazineWells
{
    #include "cfg\MagazineWells.hpp"
};
