class CfgVehicles
{
    class ContainerSupply;
    class CC_vest_supply: ContainerSupply
    {
        maximumLoad = VEST_MAXLOAD;
    };
    TCP_VEH_CLASS_DEF
    VEH_UNI_CLASS(urban)
    VEH_UNI_CLASS(woodland)
    VEH_UNI_CLASS(arctic)
    VEH_UNI_CLASS(arid)
    VEH_UNI_CLASS(tropic)
    VEH_UNI_CLASS(black)
    VEH_UNI_CLASS(grey)
    VEH_UNI_CLASS(green)
    VEH_UNI_CLASS(olive)
    VEH_UNI_CLASS(tan)
    VEH_UNI_CLASS(white)
	

    class OPTRE_ILCS_Rucksack_Black;
    class CC_ILCS: OPTRE_ILCS_Rucksack_Black
    {
        author=AUTHOR;
        displayName = "[CC] ODST Rucksack";
        scope= 2;
        scopeArsenal=2;
        hidenSelectionsMaterials[]=
        {
            Q(CC_TEXPATH(backpack,odst_Ruck.rvmat))
        };
    };
    class OPTRE_UNSC_Rucksack;
    class CC_UNSC_Rucksack: OPTRE_UNSC_Rucksack
    {
        author=AUTHOR;
        displayName = "[CC] UNSC Rucksack";
        scope= 2;
        scopeArsenal=2;
    };
    class OPTRE_ILCS_Rucksack_Medical;
    class CC_ILCS_med: OPTRE_ILCS_Rucksack_Medical
    {
        author=AUTHOR;
        displayName = "[CC] ODST Rucksack [Medic]";
        scope= 2;
        scopeArsenal=2;
        hidenSelectionsMaterials[]=
        {
            Q(CC_TEXPATH(backpack,odst_Ruck.rvmat))
        };
    };
    class OPTRE_UNSC_Rucksack_Medic;
    class CC_UNSC_Rucksack_med: OPTRE_UNSC_Rucksack_Medic
    {
        author=AUTHOR;
        displayName = "[CC] UNSC Rucksack [Medic]";
        scope= 2;
        scopeArsenal=2;
    };
    
    class OPTRE_ILCS_Rucksack_Heavy;
    class CC_ILCS_hev: OPTRE_ILCS_Rucksack_Heavy
    {
        author=AUTHOR;
        displayName = "[CC] ODST Rucksack [Heavy]";
        scope= 2;
        scopeArsenal=2;
        hidenSelectionsMaterials[]=
        {
            Q(CC_TEXPATH(backpack,odst_Ruck.rvmat))
        };
    };
    class OPTRE_UNSC_Rucksack_Heavy;
    class CC_UNSC_Rucksack_hev: OPTRE_UNSC_Rucksack_Heavy
    {
        author=AUTHOR;
        displayName = "[CC] UNSC Rucksack [Heavy]";
        scope= 2;
        scopeArsenal=2;
    };

    class CC_ILCS_rto: CC_ILCS
    {
        displayName = "[CC] ODST Rucksack [RTO]";
        author=AUTHOR;
        scope=2;
        scopeArsenal=2;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="rt1523g_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=25000;
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
    };
    class OPTRE_ANPRC_515;
    class CC_ANPRC_rto: OPTRE_ANPRC_515
    {
        displayName = "[CC] AN/PRC-515";
        author=AUTHOR;
        scope=2;
        scopeArsenal=2;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="rt1523g_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=25000;
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
    };
    //*****************************************************************************************************************************\\	
    class CC_ILCS_invis: CC_ILCS
    {
        displayName = "[CC] No Backpack";
        model = "\A3\weapons_f\empty";
        scope= 2;
        scopeArsenal=2;
        maximumLoad = 100;
        hiddenSelectionsTextures[]=
        {
            "",
            ""
        };
    };
    class CC_ILCS_invis_rto: CC_ILCS_invis
    {
        displayName = "[CC] Zeus Backpack (RTO)";
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="rt1523g_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=60000;
        maximumLoad = 150;
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
    };
};
