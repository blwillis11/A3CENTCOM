class VES_M875_SPH;

class CC_M875:VES_M875_SPH
{
    displayName="[CC] M875 Scorpion [SPH]";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Tanks_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    armor=450;
    crew = "CC_MAR_TFAlpha_Rifleman";
     class ace_cargo {
            class cargo {
                class ACE_Tracks { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Tracks";
					
                    amount = 4;
                };
            };
        };
    class textureSources
    {};
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CC Mechanized";
            vehicle = "Scorpion";
            Type = "SPH";
            cost = 5;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_ART_CO.paa"",""OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa"",""OPTRE_Vehicles\Scorpion\data\texture\scorp_art_camo_ca.paa"",""OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa"",""V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_MG_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_DET1_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_D3_CO.paa""]]",
            };
        };
    };
};
class VES_M808BM_MBT;

class CC_M808BM_MBT:VES_M808BM_MBT
{
    displayName="[CC] M808B/M Scorpion";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Tanks_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_MAR_TFAlpha_Rifleman";
    armor=575;
    armorStructural=5;
     class ace_cargo {
            class cargo {
                class ACE_Tracks { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Tracks";
					
                    amount = 4;
                };
            };
        };
    normalSpeedForwardCoef=0.69999999;
    slowSpeedForwardCoef=0.34999999;
    maxSpeed=80;
    maxFordingDepth=1.7;
    waterResistance=0;
    waterDamageEngine=0.2;
    waterLeakiness=10;
    enginePower=1821;
    maxOmega=775.57501;
    peakTorque=12000;
    torqueCurve[]=
    {
        {0,1},
        {0.142875,1},
        {0.28575,1},
        {0.42862499,1},
        {0.5715,1},
        {0.71437502,1},
        {0.85724998,1},
        {1,1}
    };
    thrustDelay=0.050000001;
    clutchStrength=50;
    idleRPM=850;
    redRPM=3000;
    fuelCapacity=1200;
    fuelConsumptionRate=100;
    brakeIdleSpeed=0.2;
    tankTurnForce=1597200;
    tankTurnForceAngMinSpd=0.60000002;
    tankTurnForceAngSpd=0.91000003;
    accelAidForceCoef=1;
    accelAidForceYOffset=-2;
    accelAidForceSpd=1.6;
    antiRollbarForceCoef=24;
    antiRollbarForceLimit=42;
    antiRollbarSpeedMin=30;
    antiRollbarSpeedMax=75;
    engineLosses=25;
    transmissionLosses=15;
    damageResistance=0.02;
    crewVulnerable=0;
    crewExplosionProtection=1;
    crewCrashProtection=0.0099999998;
    lockDetectionSystem=4;
    incomingMissileDetectionSystem=4;
    tf_range=25000;
    tf_isolatedAmount=0.40000001;
    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio=1;
    enableRadio=1;
    class complexGearbox
    {
        GearboxRatios[]=
        {
            "R1",
            -0.40000001,
            "N",
            0,
            "D1",
            2
        };
        TransmissionRatios[]=
        {
            "High",
            7.8499999
        };
        gearBoxMode="auto";
        moveOffGear=1;
        driveString="D";
        neutralString="N";
        reverseString="R";
        transmissionDelay=0.1;
    };
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Mechanized";
            vehicle = "Scorpion";
            Type = "MBT";
            cost = 5;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_T_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_D3_CO.paa"",""OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa"",""OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa"",""OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_MR_CO.paa"",""V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_MG_CO.paa""]]",
            };
        };
    };
};
class VES_M808B2_MBT;

class CC_M808B2_MBT:VES_M808B2_MBT
{
    displayName="[CC] M808B2 Sun Devil";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Tanks_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_MAR_TFAlpha_Rifleman";
    armor=575;
    armorStructural=5;
     class ace_cargo {
            class cargo {
                class ACE_Tracks { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Tracks";
					
                    amount = 4;
                };
            };
        };
    hiddenSelectionsTextures[]=
    {
        "V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_CLS_CO.paa",
        "V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_DVX_CLS_CO.paa",
        "V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_RT_CLS_CO.paa",
        "V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_TB_CLS_CO.paa",
        "V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDH_CLS_CO.paa",
        "V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDG_CLS_CO.paa"
    };
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Mechanized";
            vehicle = "Sun Devil";
            Type = "AA";
            cost = 5;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_CLS_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_DVX_CLS_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_RT_CLS_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_TB_CLS_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDH_CLS_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDG_CLS_CO.paa""]]",
            };
        };
    };
};

class DMNS_M808B;
class CC_M808BMk2:DMNS_M808B
{
    displayName="[CC] M808B Scorpion MBT Mk.2";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Tanks_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_MAR_TFAlpha_Rifleman";
    armor=575;
    armorStructural=5;
     class ace_cargo {
            class cargo {
                class ACE_Tracks { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Tracks";
					
                    amount = 4;
                };
            };
        };
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Mechanized";
            vehicle = "Scorpion";
            Type = "MBT Mk.2";
            cost = 5;
            priority = 1;
        };
    };
};
