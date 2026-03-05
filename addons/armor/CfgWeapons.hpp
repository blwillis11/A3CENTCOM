class CfgWeapons
{
    class VestItem;
    class ItemInfo;
    class UniformItem;
    class TCP_V_M43D_ODST_4_Black;
    class TCP_V_M43D_Breacher_4_Black;
    class TCP_V_M43D_Sharpshooter_4_Black;
    class TCP_V_M43D_Light_Black;
    VEST_BASE
    
    NEW_VEST_M43A_Light(Black,TFAlpha)
    NEW_VEST_M43A_BaseSec(Black,TFAlpha)
    NEW_VEST_M43A_GungnirL(Black,TFAlpha)
    NEW_VEST_M43A_GungnirS(Black,TFAlpha)

    NEW_VEST_M43A_Light(Brown,TFAlpha)
    NEW_VEST_M43A_BaseSec(Brown,TFAlpha)
    NEW_VEST_M43A_GungnirL(Brown,TFAlpha)
    NEW_VEST_M43A_GungnirS(Brown,TFAlpha)

    NEW_VEST_M43A_Light(Green,TFAlpha)
    NEW_VEST_M43A_BaseSec(Green,TFAlpha)
    NEW_VEST_M43A_GungnirL(Green,TFAlpha)
    NEW_VEST_M43A_GungnirS(Green,TFAlpha)

    NEW_VEST_M43A_Light(Olive,TFAlpha)
    NEW_VEST_M43A_BaseSec(Olive,TFAlpha)
    NEW_VEST_M43A_GungnirL(Olive,TFAlpha)
    NEW_VEST_M43A_GungnirS(Olive,TFAlpha)

    NEW_VEST_M43A_Light(Tan,TFAlpha)
    NEW_VEST_M43A_BaseSec(Tan,TFAlpha)
    NEW_VEST_M43A_GungnirL(Tan,TFAlpha)
    NEW_VEST_M43A_GungnirS(Tan,TFAlpha)

    NEW_VEST_M43A_Light(White,TFAlpha)
    NEW_VEST_M43A_BaseSec(White,TFAlpha)
    NEW_VEST_M43A_GungnirL(White,TFAlpha)
    NEW_VEST_M43A_GungnirS(White,TFAlpha)

    NEW_VEST_M43D_ODST(Black,TFAlpha)
    NEW_VEST_M43D_Breacher(Black,TFAlpha)
    NEW_VEST_M43D_Sharpshooter(Black,TFAlpha)
    NEW_VEST_M43D_Light(Black,TFAlpha)

    TCP_WEP_CLASS_DEF
    WEP_UNI_CLASS(Urban)
    WEP_UNI_CLASS(Woodland)
    WEP_UNI_CLASS(Arctic)
    WEP_UNI_CLASS(Arid)
    WEP_UNI_CLASS(Tropic)
    WEP_UNI_CLASS(Black)
    WEP_UNI_CLASS(Grey)
    WEP_UNI_CLASS(Green)
    WEP_UNI_CLASS(Olive)
    WEP_UNI_CLASS(Tan)
    WEP_UNI_CLASS(White)


    class TCP_H_Helmet_ECH55D_Black_Black;
    class TCP_H_Helmet_ECH55D_Black_Black_DP;
    class TCP_H_Helmet_ECH35J_Black_Black;
    class TCP_H_Helmet_ECH35J_Black_Black_DP;
    class TCP_H_Helmet_ECH43A_Black_Black;
    class TCP_H_Helmet_ECH43A_Black_Black_DP;
    class TCP_H_Helmet_CH43A_Black;
    class HeadgearItem;

    HELMET_ECH55D(TFAlpha)
    HELMET_CH43A(TFAlpha)
    HELMET_ECH43A(TFAlpha)
    HELMET_ECH35J(TFAlpha)


    class OPTRE_FC_VX19_Helmet;

    class CC_VX19_Helmet_Base: OPTRE_FC_VX19_Helmet
    {
        scope=2;
        scopeArsenal=2;
        author=AUTHOR;
        displayName="[CC] VX19 Flight Helmet [Aviator]";
        ace_hearing_protection = 0.80;
    };
};
