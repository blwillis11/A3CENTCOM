class OPTRE_M494;
class CC_M494_Oryx: OPTRE_M494
{
    displayName="[CC] M494 Oryx";
    author= AUTHOR;
    faction = "CC_Assets";
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_MAR_TFAlpha_Rifleman";
    class ace_cargo {
        class cargo {
            class ACE_Tracks { // Doesn't have to have the same name as the item you're adding
                type = "ACE_Tracks";
                amount = 2;
            };
        };
    };
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Mechanized";
            vehicle = "Oryx";
            Type = "Standard";
            cost = 3;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_A_CO"",""\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_CO.paa"",""\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_N_CA.paa"",""\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_N_CA.paa"",""\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_N_CA.paa"",""\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_T_CO.paa"",""\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_MG_CO.paa"",""\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal_ca.paa""]]",
            };
        };
    };
};
class VES_IFV76_A;
class CC_IFV76_A:VES_IFV76_A
{
    displayName="[CC] IFV-76 Honeybadger";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_MAR_TFAlpha_Rifleman";
    class ACE_Cargo
    {
        class Cargo
        {
            class ACE_wheel
            {
                type="ACE_wheel";
                amount=6;
            };
        };
    };
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Mechanized";
            vehicle = "Honeybadger";
            Type = "IFV-76";
            cost = 3;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_CO.paa"",""V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_A_CO.paa"",""V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_T_CO.paa"",""V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_CN_CO.paa"",""V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_C_CO.paa""]]",
            };
        };
    };
};

class VES_IFV76;
class CC_IFV76:VES_IFV76
{
    displayName="[CC] APC-76 Honeybadger";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_MAR_TFAlpha_Rifleman";
    class ACE_Cargo
    {
        class Cargo
        {
            class ACE_wheel
            {
                type="ACE_wheel";
                amount=6;
            };
        };
    };
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Mechanized";
            vehicle = "Honeybadger";
            Type = "APC-76";
            cost = 1;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_CO.paa"",""V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_A_CO.paa"",""V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_T_CO.paa"",""V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_CN_CO.paa"",""V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_C_CO.paa""]]",
            };
        };
    };
};

class VES_M412_IFV;
class CC_M412_IFV:VES_M412_IFV
{
    displayName="[CC] M412 Bison IFV";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_MAR_TFAlpha_Rifleman";
    class ACE_Cargo
    {
        class Cargo
        {
            class ACE_wheel
            {
                type="ACE_wheel";
                amount=6;
            };
        };
    };
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Mechanized";
            vehicle = "Bison";
            Type = "IFV";
            cost = 3;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""V_FZ_Ground_Vehicles\data\Bison\V_BISON_CLS_CO.paa"",""V_FZ_Ground_Vehicles\data\Bison\V_BISON_CLS_M_CO.paa"",""V_FZ_Ground_Vehicles\data\Bison\V_BISON_CLS_W_CO.paa"",""V_FZ_Ground_Vehicles\data\Bison\V_BISON_CLS_S_CO.paa"",""V_FZ_Ground_Vehicles\data\Bison\V_BISON_I_CO.paa"",""OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa"",""V_FZ_Ground_Vehicles\data\Bison\V_BISON_CLS_9_CO.paa""]]",
            };
        };
    };
};
class VES_M413_MGS;
class CC_M413_MGS:VES_M413_MGS
{
    displayName="[CC] M413 Bison MGS";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_MAR_TFAlpha_Rifleman";
    class ACE_Cargo
    {
        class Cargo
        {
            class ACE_wheel
            {
                type="ACE_wheel";
                amount=6;
            };
        };
    };
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Mechanized";
            vehicle = "Bison";
            Type = "MGS";
            cost = 3;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""V_FZ_Ground_Vehicles\data\Bison\V_BISON_CLS_CO.paa"",""V_FZ_Ground_Vehicles\data\Bison\V_BISON_CLS_M_CO.paa"",""V_FZ_Ground_Vehicles\data\Bison\V_BISON_CLS_W_CO.paa"",""V_FZ_Ground_Vehicles\data\Bison\V_BISON_CLS_S_CO.paa"",""V_FZ_Ground_Vehicles\data\Bison\V_BISON_I_CO.paa"",""OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa"",""V_FZ_Ground_Vehicles\data\Bison\V_BISON_CLS_9_CO.paa""]]",
            };
        };
    };
};

class DMNS_M511_Springbok_APC;

class CC_M511_Springbok_APC : DMNS_M511_Springbok_APC
{
    displayName="[CC] M511-Springbok Transport";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_MAR_TFAlpha_Rifleman";
    class ACE_Cargo
    {
        class Cargo
        {
            class ACE_wheel
            {
                type="ACE_wheel";
                amount=6;
            };
        };
    };
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Mechanized";
            vehicle = "Springbok";
            Type = "APC";
            cost = 3;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""DMNS\DMNS_Armour\M511_Springbok\Data\M511_Body_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\M511_Interior_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\M511_Details_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\m511_m247h_co.paa""]]",
            };
        };
    };
};

class DMNS_M511_Springbok_IFV;
class CC_M511_Springbok_IFV : DMNS_M511_Springbok_IFV
{
    displayName="[CC] M511-Springbok IFV";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_MAR_TFAlpha_Rifleman";
    class ACE_Cargo
    {
        class Cargo
        {
            class ACE_wheel
            {
                type="ACE_wheel";
                amount=6;
            };
        };
    };
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Mechanized";
            vehicle = "Springbok";
            Type = "IFV";
            cost = 3;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""DMNS\DMNS_Armour\M511_Springbok\Data\M511_Body_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\M511_Interior_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\M511_Details_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\M511_ifv_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\M511_aa_co.paa""]]",
            };
        };
    };
};
class DMNS_M511_Springbok_MGS;
class CC_M511_Springbok_MGS : DMNS_M511_Springbok_MGS
{
    displayName="[CC] M511-Springbok MGS";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_MAR_TFAlpha_Rifleman";
    class ACE_Cargo
    {
        class Cargo
        {
            class ACE_wheel
            {
                type="ACE_wheel";
                amount=6;
            };
        };
    };
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Mechanized";
            vehicle = "Springbok";
            Type = "MGS";
            cost = 3;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""DMNS\DMNS_Armour\M511_Springbok\Data\M511_Body_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\M511_Interior_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\M511_Details_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\M511_mgs_co.paa""]]",
            };
        };
    };
};
class DMNS_M511_Springbok_AA;
class CC_M511_Springbok_AA : DMNS_M511_Springbok_AA
{
    displayName="[CC] M511-Springbok AA";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_MAR_TFAlpha_Rifleman";
    class ACE_Cargo
    {
        class Cargo
        {
            class ACE_wheel
            {
                type="ACE_wheel";
                amount=6;
            };
        };
    };
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Mechanized";
            vehicle = "Springbok";
            Type = "AA";
            cost = 3;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""DMNS\DMNS_Armour\M511_Springbok\Data\M511_Body_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\M511_Interior_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\M511_Details_co.paa"",""DMNS\DMNS_Armour\M511_Springbok\Data\M511_aa_co.paa""]]",
            };
        };
    };
};
class APC_Tracked_01_base_F;
class B_APC_Tracked_01_base_F: APC_Tracked_01_base_F
{
    class Turrets;
};
class B_APC_Tracked_01_CRV_F: B_APC_Tracked_01_base_F
{
    class Turrets: Turrets
    {
        class MainTurret;
        class CommanderOptics;
    };
    class ACE_SelfActions;
};
class CC_Hammerhead_Repair: B_APC_Tracked_01_CRV_F
{
    displayName="[CC] Hammerhead [Repair]";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_MAR_TFAlpha_Rifleman";
    enginePower=1500;
    peakTorque=6000;
    idleRPM=1000;
    redRPM=3000;
    crewCrashProtection=0.5;
    crewExplosionProtection=0.5;
    ace_cargo_space=8;
    ace_cargo_hasCargo=1;
    maximumLoad=6969;
    ace_hunterkiller[]=
    {

        {
            {0},
            3
        },

        {
            {1},
            3
        }
    };
    hiddenSelectionsTextures[] =
    {
        "A3\Armor_F_exp\APC_Tracked_01\Data\apc_tracked_01_body_crv_olive_co.paa",
        "A3\Armor_F_exp\APC_Tracked_01\Data\mbt_01_body_olive_co.paa",
        "A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa",
        "A3\Armor_F_exp\APC_Tracked_01\Data\apc_tracked_01_crv_olive_co.paa",
        "a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
    };
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Mechanized";
            vehicle = "Hammerhead";
            Type = "Repair";
            cost = 2;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""A3\Armor_F_exp\APC_Tracked_01\Data\apc_tracked_01_body_crv_olive_co.paa"",""A3\Armor_F_exp\APC_Tracked_01\Data\mbt_01_body_olive_co.paa"",""A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"",""A3\Armor_F_exp\APC_Tracked_01\Data\apc_tracked_01_crv_olive_co.paa"",""a3\Armor_F\Data\camonet_NATO_Green_CO.paa""]]",
            };
        };
    };
    textureList[]=
    {};
    class TextureSources
    {};
    class UserActions
    {
        class Flip
        {
            displayNameDefault="Press SPACEBAR to Flip Armadillo";
            displayName="Press SPACEBAR to Flip Armadillo";
            position="";
            radius=6;
            onlyForPlayer=1;
            condition="(alive this) AND !(canmove this)";
            statement="this setposATL [getPosATL this select 0, getPosATL this select 1, (getPosATL this select 2) + 4]; this setVectorUp surfaceNormal getposATL this;";
        };
    };
    class ACE_SelfActions: ACE_SelfActions
    {
        class plow
        {
            displayName="Plow";
            exceptions[]=
            {
                "isNotInside",
                "isNotSwimming",
                "isNotSitting"
            };
            icon="1st_meu_vehicles\_textures\Vehicles\icons\plow.paa";
            condition="!(isNull objectParent ace_player) && (driver (vehicle ace_player)== ace_player)";
            showDisabled=0;
            priority=2;
            statement="[true] spawn aux_1stMEU_fnc_vehicle_plow";
            runOnHover=0;
        };
        class deplow
        {
            displayName="De-Plow";
            exceptions[]=
            {
                "isNotInside",
                "isNotSwimming",
                "isNotSitting"
            };
            icon="1st_meu_vehicles\_textures\Vehicles\icons\deplow.paa";
            condition="!(isNull objectParent ace_player) && (driver (vehicle ace_player)== ace_player)";
            showDisabled=0;
            priority=2;
            statement="[false] spawn aux_1stMEU_fnc_vehicle_plow";
            runOnHover=0;
        };
    };
    class TransportMagazines
    {
        delete _xx_30Rnd_65x39_caseless_khaki_mag;
        delete _xx_100Rnd_65x39_caseless_khaki_mag;
        delete _xx_HandGrenade;
        delete _xx_MiniGrenade;
        delete _xx_1Rnd_HE_Grenade_shell;
        delete _xx_1Rnd_Smoke_Grenade_shell;
        delete _xx_1Rnd_SmokeGreen_Grenade_shell;
        delete _xx_1Rnd_SmokeOrange_Grenade_shell;
        delete _xx_1Rnd_SmokeBlue_Grenade_shell;
        delete _xx_SmokeShell;
        delete _xx_SmokeShellGreen;
        delete _xx_SmokeShellOrange;
        delete _xx_SmokeShellBlue;
        delete _xx_Titan_AT;
        delete _xx_Titan_AP;
        delete _xx_Titan_AA;
        class _xx_CC_60Rnd_5x23Caseless_FMJ_Mag_Tracer
        {
            magazine="CC_60Rnd_5x23Caseless_FMJ_Mag_Tracer";
            count=20;
        };
    };
    class TransportWeapons
    {
        delete _xx_arifle_MX_khk_F;
        delete _xx_arifle_MX_SW_khk_F;
        delete _xx_launch_NLAW_F;
    };
    class TransportItems
    {
        delete _xx_FirstAidKit;
        class _xx_ACE_M26_Clacker
        {
            name="ACE_M26_Clacker";
            count=1;
        };
        class _xx_ACE_wirecutter
        {
            name="ACE_wirecutter";
            count=1;
        };
        class _xx_ACE_DefusalKit
        {
            name="ACE_DefusalKit";
            count=1;
        };
        class _xx_ACE_EntrenchingTool
        {
            name="ACE_EntrenchingTool";
            count=1;
        };
        class _xx_Toolkit
        {
            name="Toolkit";
            count=1;
        };
        class _xx_ACE_Tourniquet
        {
            name="ACE_Tourniquet";
            count=5;
        };
        class _xx_ACE_PlasmaIV
        {
            name="ACE_PlasmaIV";
            count=3;
        };
        class _xx_ACE_plasmaIV_500
        {
            name="ACE_plasmaIV_500";
            count=5;
        };
        class _xx_ACE_epinephrine
        {
            name="ACE_epinephrine";
            count=5;
        };
        class _xx_ACE_splint
        {
            name="ACE_splint";
            count=10;
        };
        class _xx_ACE_morphine
        {
            name="ACE_morphine";
            count=5;
        };
        class _xx_ACE_UAVBattery
        {
            name="ACE_UAVBattery";
            count=3;
        };
        class _xx_B_UavTerminal
        {
            name="B_UavTerminal";
            count=2;
        };
        class _xx_ItemcTab
        {
            name="ItemcTab";
            count=1;
        };
        class _xx_OPTRE_M2_Smoke
        {
            name="OPTRE_M2_Smoke";
            count=3;
        };
        class _xx_SmokeShellBlue
        {
            name="SmokeShellBlue";
            count=3;
        };
        class _xx_Chemlight_blue
        {
            name="Chemlight_blue";
            count=5;
        };
        class _xx_ACE_CableTie
        {
            name="ACE_CableTie";
            count=5;
        };
    };
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            weapons[]=
            {
                "HMG_127_APC",
                "MG460_APC",
                "SmokeLauncher",
                "Laserdesignator_mounted"
            };
            magazines[]=
            {
                "40Rnd_HEDP_Belt",
                "40Rnd_HEDP_Belt",
                "40Rnd_HEDP_Belt",
                "40Rnd_HEDP_Belt",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "Laserbatteries"
            };
        };
        class CommanderOptics: CommanderOptics
        {
            memoryPointGunnerOutOptics="commanderview";
            memoryPointGunnerOptics="commanderview";
            minElev=-10;
            maxElev=30;
            initElev=0;
            minTurn=-360;
            maxTurn=360;
            initTurn=0;
            minCamElev=-90;
            maxCamElev=90;
            weapons[]=
            {
                "SmokeLauncher",
                "Laserdesignator_mounted"
            };
            magazines[]=
            {
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "Laserbatteries"
            };
            soundServo[]=
            {
                "A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm.ogg",
                0.56234133,
                1,
                30
            };
            soundServoVertical[]=
            {
                "A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm.ogg",
                0.56234133,
                1,
                30
            };
            outGunnerMayFire=0;
            inGunnerMayFire=1;
            gunnerAction="Commander_APC_tracked_01_crv_out";
            gunnerInAction="Commander_APC_tracked_01_crv_in";
            gunnerGetInAction="GetInAMV_cargo";
            gunnerGetOutAction="GetOutLow";
            turretInfoType="RscWeaponRangeFinder";
            gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
            gunnerforceoptics=0;
            usePip=1;
            animationSourceStickX="com_turret_control_x";
            animationSourceStickY="com_turret_control_y";
            gunnerLeftHandAnimName="com_turret_control";
            turretFollowFreeLook=2;
            LODOpticsIn=0;
            viewGunnerShadowAmb=0.5;
            viewGunnerShadowDiff=0.050000001;
            gunnerOutOpticsModel="";
            gunnerOpticsEffect[]={};
            class ViewGunner: ViewCargo
            {
                initAngleX=-6;
                initAngleY=0;
                initFov=0.89999998;
                minFov=0.25;
                maxFov=1.25;
                minAngleX=-65;
                maxAngleX=85;
                minAngleY=-150;
                maxAngleY=150;
                minMoveX=-0.075000003;
                maxMoveX=0.075000003;
                minMoveY=-0.075000003;
                maxMoveY=0.075000003;
                minMoveZ=-0.075000003;
                maxMoveZ=0.1;
            };
            class ViewOptics: ViewOptics
            {
                initAngleX=0;
                minAngleX=-30;
                maxAngleX=30;
                initAngleY=0;
                minAngleY=-100;
                maxAngleY=100;
                initFov=0.31;
                minFov=0.034000002;
                maxFov=0.31;
                visionMode[]=
                {
                    "Normal",
                    "NVG",
                    "TI"
                };
                thermalMode[]={2,3};
            };
            startEngine=0;
            stabilizedInAxes=3;
            maxHorizontalRotSpeed=1.8;
            maxVerticalRotSpeed=1.8;
            viewGunnerInExternal=1;
            showCrewAim=1;
            class HitPoints
            {
                class HitComTurret
                {
                    armor=0.1;
                    material=-1;
                    armorComponent="hit_com_turret";
                    name="hit_com_turret_point";
                    visual="-";
                    passThrough=0;
                    minimalHit=0.1;
                    explosionShielding=1;
                    radius=0.15000001;
                    isTurret=1;
                };
                class HitComGun
                {
                    armor=0.1;
                    material=-1;
                    armorComponent="hit_com_gun";
                    name="hit_com_gun_point";
                    visual="-";
                    passThrough=0;
                    minimalHit=0.1;
                    explosionShielding=1;
                    radius=0.15000001;
                    isGun=1;
                };
            };
            class Components
            {
                class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
                {
                };
                class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
                {
                };
            };
        };
    };
    class ACE_Cargo
    {
        class Cargo
        {
            class ACE_wheel
            {
                type="ACE_wheel";
                amount=4;
            };
            class ACE_Tracks { // Doesn't have to have the same name as the item you're adding
            type = "ACE_Tracks";
            amount = 6;
        };
        };
    };
};

class Wheeled_APC_F;
class APC_Wheeled_02_base_F: Wheeled_APC_F
{
    class Turrets;
};
class APC_Wheeled_02_base_v2_F: APC_Wheeled_02_base_F
{
    class Turrets: Turrets
    {
        class MainTurret;
    };
};
class CC_Iguana: APC_Wheeled_02_base_v2_F
{
    tf_hasLRradio=1;
    tf_isolatedAmount=0.64999998;
    tf_range=120000;
    crewCrashProtection=0.5;
    crewExplosionProtection=0.5;
    armor=400;
    armorStructural=5;
    armorLights=0.1;
    damageResistance=0.0080000004;
    ace_cargo_space=8;
    ace_cargo_hasCargo=1;
    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "CamoNet",
        "CamoSlat"
    };
    class TransportMagazines
    {
        delete _xx_30Rnd_65x39_caseless_green;
        delete _xx_150Rnd_762x54_Box;
        delete _xx_HandGrenade;
        delete _xx_MiniGrenade;
        delete _xx_SmokeShell;
        delete _xx_SmokeShellRed;
        delete _xx_SmokeShellYellow;
        delete _xx_SmokeShellOrange;
        delete _xx_1Rnd_HE_Grenade_shell;
        delete _xx_1Rnd_Smoke_Grenade_shell;
        delete _xx_1Rnd_SmokeYellow_Grenade_shell;
        delete _xx_1Rnd_SmokeOrange_Grenade_shell;
        delete _xx_1Rnd_SmokeRed_Grenade_shell;
        delete _xx_RPG32_F;
        delete _xx_RPG32_HE_F;
        delete _xx_Titan_AT;
        delete _xx_Titan_AA;
        class _xx_OPTRE_60Rnd_762x51_Mag_AP
        {
            magazine="OPTRE_60Rnd_762x51_Mag_AP";
            count=20;
        };
        class _xx_OPTRE_60Rnd_762x51_Mag_APT
        {
            magazine="OPTRE_60Rnd_762x51_Mag_APT";
            count=20;
        };
        class _xx_OPTRE_36Rnd_95x40_Mag_JHP
        {
            magazine="OPTRE_36Rnd_95x40_Mag_JHP";
            count=20;
        };
        class _xx_OPTRE_36Rnd_95x40_Mag_JHPT
        {
            magazine="OPTRE_36Rnd_95x40_Mag_JHPT";
            count=20;
        };
        class _xx_OPTRE_60Rnd_5x23mm_Mag_FMJ
        {
            magazine="OPTRE_60Rnd_5x23mm_Mag_FMJ";
            count=20;
        };
        class _xx_OPTRE_60Rnd_5x23mm_Mag_FMJT
        {
            magazine="OPTRE_60Rnd_5x23mm_Mag_FMJT";
            count=20;
        };
        class _xx_OPTRE_20Rnd_86x70_Mag_AP
        {
            magazine="OPTRE_20Rnd_86x70_Mag_AP";
            count=20;
        };
        class _xx_OPTRE_20Rnd_86x70_Mag_APT
        {
            magazine="OPTRE_20Rnd_86x70_Mag_APT";
            count=20;
        };
        class _xx_OPTRE_M41_Twin_HEAP
        {
            magazine="OPTRE_M41_Twin_HEAP";
            count=4;
        };
        class _xx_OPTRE_M41_Twin_HEAT_Thermal
        {
            magazine="OPTRE_M41_Twin_HEAT_Thermal";
            count=2;
        };
    };
    class TransportWeapons
    {
        delete _xx_arifle_Katiba_F;
    };
    class TransportItems
    {
        delete _xx_FirstAidKit;
        class _xx_ACE_epinephrine
        {
            name="ACE_epinephrine";
            count=4;
        };
        class _xx_ACE_adenosine
        {
            name="ACE_adenosine";
            count=4;
        };
        class _xx_ACE_Banana
        {
            name="ACE_Banana";
            count=5;
        };
        class _xx_ACE_splint
        {
            name="ACE_splint";
            count=10;
        };
    };
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            weapons[]=
            {
                "HMG_127_APC",
                "MG460_APC",
                "SmokeLauncher"
            };
            magazines[]=
            {
                "40Rnd_HEDP_Belt",
                "40Rnd_HEDP_Belt",
                "40Rnd_HEDP_Belt",
                "40Rnd_HEDP_Belt",
                "40Rnd_HEDP_Belt",
                "40Rnd_HEDP_Belt",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "SmokeLauncherMag",
                "SmokeLauncherMag"
            };
        };
    };
    class TextureSources
    {};
};
class CC_Iguana_APC: CC_Iguana
{
    displayname="[CC] Iguana APC";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_MAR_TFAlpha_Rifleman";
    accuracy=1000;
    editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_APC_Wheeled_02_rcws_v2_F.jpg";
    _generalMacro="O_APC_Wheeled_02_rcws_v2_F";
    hiddenSelectionsTextures[]=
    {
        "y\CC_vehicles\data\Iguana\Iguana_01_Ext_co.paa",
        "y\CC_vehicles\data\Iguana\Iguana_02_Ext_co.paa",
        "y\CC_vehicles\data\Iguana\Iguana_Turret.paa",
        "A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa",
        "A3\armor_f\data\cage_csat_green_co.paa"
    };
    typicalCargo[]=
    {
        "CC_MAR_TFAlpha_Rifleman"
    };
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Mechanized";
            vehicle = "Iguana";
            Type = "APC";
            cost = 2;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""CC_vehicles\data\Iguana\Iguana_01_Ext_co.paa"",""CC_vehicles\data\Iguana\Iguana_02_Ext_co.paa"",""CC_vehicles\data\Iguana\Iguana_Turret.paa"",""A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa"",""A3\armor_f\data\cage_csat_green_co.paa""]]",
            };
        };
    };
    class ACE_Cargo
    {
        class Cargo
        {
            class ACE_wheel
            {
                type="ACE_wheel";
                amount=4;
            };
        };
    };
};
class CC_Iguana_Medical_APC: CC_Iguana
{
    displayname="[CC] Iguana Medical APC";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_MAR_TFAlpha_Rifleman";
    accuracy=1000;
    editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_APC_Wheeled_02_rcws_v2_F.jpg";
    _generalMacro="O_APC_Wheeled_02_rcws_v2_F";
    ace_medical_isMedicalVehicle=1;
    hiddenSelectionsTextures[]=
    {
        "y\A3CENTCOM\CC_vehicles\data\Iguana\Iguana_01_Ext_co.paa",
        "y\A3CENTCOM\CC_vehicles\data\Iguana\Iguana_02_Ext_co.paa",
        "y\A3CENTCOM\CC_vehicles\data\Iguana\Iguana_Turret.paa",
        "A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa",
        "A3\armor_f\data\cage_csat_green_co.paa"
    };
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Mechanized";
            vehicle = "Iguana";
            Type = "Medical APC";
            cost = 2;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""CC_vehicles\data\Iguana\Iguana_01_Ext_co.paa"",""CC_vehicles\data\Iguana\Iguana_02_Ext_co.paa"",""CC_vehicles\data\Iguana\Iguana_Turret.paa"",""A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa"",""A3\armor_f\data\cage_csat_green_co.paa""]]",
            };
        };
    };
    class TransportMagazines
    {
        class _xx_OPTRE_60Rnd_762x51_Mag_AP
        {
            magazine="OPTRE_60Rnd_762x51_Mag_AP";
            count=5;
        };
        class _xx_OPTRE_60Rnd_762x51_Mag_APT
        {
            magazine="OPTRE_60Rnd_762x51_Mag_APT";
            count=5;
        };
        class _xx_OPTRE_36Rnd_95x40_Mag_HPSAP
        {
            magazine="OPTRE_36Rnd_95x40_Mag_HPSAP";
            count=5;
        };
        class _xx_OPTRE_36Rnd_95x40_Mag_HPSAPT
        {
            magazine="OPTRE_36Rnd_95x40_Mag_HPSAPT";
            count=5;
        };
        class _xx_OPTRE_60Rnd_5x23mm_Mag_FMJ
        {
            magazine="OPTRE_60Rnd_5x23mm_Mag_FMJ";
            count=5;
        };
        class _xx_OPTRE_60Rnd_5x23mm_Mag_FMJT
        {
            magazine="OPTRE_60Rnd_5x23mm_Mag_FMJT";
            count=5;
        };
        class _xx_OPTRE_20Rnd_86x70_Mag_AP
        {
            magazine="OPTRE_20Rnd_86x70_Mag_AP";
            count=5;
        };
    };
    class TransportItems
    {
        delete _xx_FirstAidKit;
        class _xx_ACE_plasmaIV
        {
            name="ACE_plasmaIV";
            count=10;
        };
        class _xx_ACE_plasmaIV_500
        {
            name="ACE_plasmaIV_500";
            count=15;
        };
        class _xx_ACE_plasmaIV_250
        {
            name="ACE_plasmaIV_250";
            count=10;
        };
        class _xx_ACE_epinephrine
        {
            name="ACE_epinephrine";
            count=40;
        };
        class _xx_ACE_adenosine
        {
            name="ACE_adenosine";
            count=40;
        };
        class _xx_ACE_Banana
        {
            name="ACE_Banana";
            count=10;
        };
        class _xx_ACE_splint
        {
            name="ACE_splint";
            count=20;
        };
    };
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            weapons[]=
            {
                "HMG_127_APC",
                "MG460_APC",
                "SmokeLauncher"
            };
            magazines[]=
            {
                "40Rnd_HEDP_Belt",
                "40Rnd_HEDP_Belt",
                "40Rnd_HEDP_Belt",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "SmokeLauncherMag",
                "SmokeLauncherMag"
            };
        };
    };
    typicalCargo[]=
    {
        "CC_MAR_TFAlpha_Rifleman"
    };
    class ACE_Cargo
    {
        class Cargo
        {
            class ACE_wheel
            {
                type="ACE_wheel";
                amount=4;
            };
        };
    };
};

class B_AFV_Wheeled_01_up_cannon_F;
class CC_Komodo: B_AFV_Wheeled_01_up_cannon_F
{
    displayName="[CC] MGS-7 Komodo";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_MAR_TFAlpha_Rifleman";
    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "CamoNet",
        "CamoSlat"
    };
    hiddenSelectionsTextures[] =
    {
        "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_green_CO.paa",
        "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_green_CO.paa",
        "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa",
        "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa",
        "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_commander_tow_CO.paa",
        "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
        "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa"
    };
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Mechanized";
            vehicle = "Komodo";
            Type = "APC";
            cost = 2;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_green_CO.paa"",""a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_green_CO.paa"",""a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa"",""A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa"",""a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_commander_tow_CO.paa"",""a3\Armor_F\Data\camonet_NATO_Green_CO.paa"",""A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa""]]",
            };
        };
    };
    typicalCargo[]=
    {
        "CC_MAR_TFAlpha_Rifleman"
    };
    textureList[]=
    {};
    class TextureSources
    {};
    class ACE_Cargo
        {
            class Cargo
            {
                class ACE_wheel
                {
                    type="ACE_wheel";
                    amount=6;
                };
            };
        };
};

