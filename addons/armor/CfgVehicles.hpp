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
    class STB73_Rucksack: OPTRE_ILCS_Rucksack_Black
    {
        author="73rd S-4 Team";
        displayName = "[73] ODST Rucksack";
        scope= 2;
        scopeArsenal=2;
        hidenSelectionsMaterials[]=
        {
            Q(CC_TEXPATH(backpack,odst_Ruck.rvmat))
        };
    };
    class OPTRE_ILCS_Rucksack_Medical;
    class STB73_Rucksack_med: OPTRE_ILCS_Rucksack_Medical
    {
        author="73rd S-4 Team";
        displayName = "[73] ODST Rucksack [Medic]";
        scope= 2;
        scopeArsenal=2;
        hidenSelectionsMaterials[]=
        {
            Q(CC_TEXPATH(backpack,odst_Ruck.rvmat))
        };
    };
    
    class OPTRE_ILCS_Rucksack_Heavy;
    class STB73_Rucksack_hev: OPTRE_ILCS_Rucksack_Heavy
    {
        author="73rd S-4 Team";
        displayName = "[73] ODST Rucksack [Heavy]";
        scope= 2;
        scopeArsenal=2;
        hidenSelectionsMaterials[]=
        {
            Q(CC_TEXPATH(backpack,odst_Ruck.rvmat))
        };
    };

    class STB73_Rucksack_rto: STB73_Rucksack
    {
        displayName = "[73] ODST Rucksack [RTO]";
        author="73rd S-4 Team";
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
    class STB73_Rucksack_invis: STB73_Rucksack
    {
        displayName = "[73] No Backpack";
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
    class STB73_Rucksack_invis_rto: STB73_Rucksack_invis
    {
        displayName = "[73] Zeus Backpack (RTO)";
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="rt1523g_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=60000;
        maximumLoad = 150;
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
    };
};
