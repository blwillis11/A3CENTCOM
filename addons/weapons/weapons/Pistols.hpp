// TCP Pistols
class TCP_hgun_Pistol_M6G;
class CC_Pistol_M6G: TCP_hgun_Pistol_M6G
{
    author="CENTCOM J-4";
    displayName="M6G";
    baseWeapon="CC_Pistol_M6G";
    initSpeed=-0.94545454;
    magazines[]=
    {
        ""
    };
    magazineWell[]=
    {
        "",
        "",
        "",
        ""
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: MuzzleSlot
        {
            compatibleItems[]=
            {
                "TCP_snds_127_02"
            };
        };
        class CowsSlot: CowsSlot
        {
            compatibleItems[]=
            {
                "TCP_optic_KFA_M6G"
            };
        };
        class PointerSlot: PointerSlot
        {
            compatibleItems[]=
            {
                "",
                ""
            };
        };
        class UnderBarrelSlot: UnderBarrelSlot
        {
            compatibleItems[]=
            {
                "TCP_bipod_handGuard_M6G",
                "TCP_bipod_triggerGuard_M6G"
            };
        };
    };
};
