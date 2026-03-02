class CfgWeapons
{
    class VestItem;
    class ItemInfo;
    class UniformItem;
    class MA_Marine_BDU_ODST_HJ;
    class MA_Marine_BDU_ODST_HJ_NC;
    class MA_Marine_BDU_Light;
    class MA_Marine_BDU_Medium;
    class MA_Marine_BDU_Heavy;
    class M52_ODST_Vest_Base;

    ODST_BDU_WEP(Urban)
    ODST_BDU_NC_WEP(Urban)
    MAR_BDU_LIGHT_WEP(Standard)
    MAR_BDU_MEDIUM_WEP(Standard)
    MAR_BDU_HEAVY_WEP(Standard)

    VEST_ODST(TFAlpha,Standard)
    VEST_ODST_A(TFAlpha,Standard)
    VEST_ODST_B(TFAlpha,Standard)
    VEST_ODST_C(TFAlpha,Standard)
    VEST_ODST_D(TFAlpha,Standard)
    VEST_ODST_M(TFAlpha,Standard)
    VEST_ODST_CQB(TFAlpha,Standard)
    VEST_ODST_L(TFAlpha,Standard)

    class CH252D_Helmet;
    class CH252D_Helmet_dp;
    class CH252_Helmet_Standard;
    class CH252_Helmet_EyePiece;
    class CH252_Helmet_VisorGlasses;
    class CH252_Helmet_Sealed;


    CH252D_HELMET(TFAlpha,Standard,Green)
    CH252D_HELMET_DP(TFAlpha,Standard,Green)
    CH252_HELMET(TFAlpha,Standard)
    CH252_HELMET_EYEPIECE(TFAlpha,Standard)
    CH252_HELMET_VISORGLASSES(TFAlpha,Standard)
    ECH252_HELMET(TFAlpha,Standard,Green)





    class OPTRE_FC_VX19_Helmet;

    class STB73_VX19_Helmet_Base: OPTRE_FC_VX19_Helmet
    {
        scope=2;
        scopeArsenal=2;
        author=AUTHOR;
        displayName="[CC] VX19 Flight Helmet [Aviator]";
        ace_hearing_protection = 0.80;
    };
};
