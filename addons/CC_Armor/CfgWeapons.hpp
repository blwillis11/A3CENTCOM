class CfgWeapons
{
    class VestItem;
    class ItemInfo;

    class Uniform_Base;
    class UniformItem;
    class MA_Marine_BDU_ODST_HJ;
    class MA_Marine_BDU_ODST_HJ_NC;

    ODST_BDU_WEP(Urban)
    ODST_BDU_NC_WEP(Urban)

    class CH252D_Helmet;
    class CH252D_Helmet_dp;

    CH252D_HELMET(TFAlpha,Green)


    class OPTRE_FC_VX19_Helmet;

    class STB73_VX19_Helmet_Base: OPTRE_FC_VX19_Helmet
    {
        scope=2;
        scopeArsenal=2;
        author="73rd S-4 Team";
        displayName="[73] VX19 Flight Helmet [Aviator]";
        ace_hearing_protection = 0.80;
    };
};
