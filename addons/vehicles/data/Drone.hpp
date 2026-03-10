class B_UGV_01_rcws_F;

class CC_POGV_RCWS: B_UGV_01_rcws_F
{
    ace_cargo_space=14;
    cargoProxyIndexes[]={};
    displayName="POG-V Mk.1";
    author= AUTHOR;
    faction = "CC_Assets";
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Drones_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew="B_UAV_AI";
    textureList[]=
    {
    };
    hiddenSelectionsTextures[] =
    {
        "\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_ext_co.paa",
        "\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_co.paa",
        "\A3\Data_F\Vehicles\Turret_co.paa"
    };
    cargoCanControlUAV=1;
    canFloat=1;
    waterLeakiness=0.079999998;
    waterResistanceCoef=0.0044999998;
    waterResistance=10;
    waterLinearDampingCoefY="3*2";
    waterLinearDampingCoefX="5*2";
    waterAngularDampingCoef="2.3*2";
    waterSpeedFactor=2;
    enginePower=140;
    waterEffectSpeed=5;
    waterFastEffectSpeed=28;
    smokeLauncherAngle=60;
    smokeLauncherGrenadeCount=10;
    smokeLauncherOnTurret=1;
    smokeLauncherVelocity=24;
    maxSpeed=69;
    thrustDelay=0.0099999998;
    maxOmega=960;
    peakTorque=1000;
    turnCoef=8;
    canBeTransported = 1;
    transportVehicleMass = 1000;  // Mongoose mass (approx.)
    class TransportMagazines
    {
        class _xx_DemoCharge_Remote_Mag
        {
            magazine="DemoCharge_Remote_Mag";
            count=1;
        };
    };
    class TransportWeapons
    {
    };
    class TransportItems
    {
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
        class _xx_B_UavTerminal
        {
            name="B_UavTerminal";
            count=2;
        };
        class _xx_ItemcTab
        {
            name="ItemcTab";
            count=2;
        };
        };
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            turretInfoType="Rsc_ACE_Helo_UI_Turret";
            weapons[]=
            {
                "HMG_127_UGV",
                "CMFlareLauncher",
                "SmokeLauncher",
                "Laserdesignator_pilotCamera"
            };
            magazines[]=
            {
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "200Rnd_127x99_mag_Tracer_Red",
                "168Rnd_CMFlare_Chaff_Magazine",
                "168Rnd_CMFlare_Chaff_Magazine",
                "Laserbatteries",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag"
            };
            class HitPoints
            {
                class HitTurret
                {
                    armor=250;
                    material=-1;
                    armorComponent="hit_main_turret";
                    name="hit_main_turret_point";
                    visual="OtocVez";
                    passThrough=0;
                    minimalHit=0.029999999;
                    explosionShielding=0.40000001;
                    radius=0.25;
                    isTurret=1;
                };
                class HitGun
                {
                    armor=250;
                    material=-1;
                    armorComponent="hit_main_gun";
                    name="hit_main_gun_point";
                    visual="OtocHlaven";
                    passThrough=0;
                    minimalHit=0.029999999;
                    explosionShielding=0.40000001;
                    radius=0.2;
                    isGun=1;
                };
            };
            class ViewOptics: ViewOptics
            {
                minFov=0.0125;
                visionMode[]=
                {
                    "Normal",
                    "NVG",
                    "TI"
                };
            };
        };
        class CargoTurret_01: CargoTurret_01
        {
            isCopilot=1;
            proxyIndex=69;
        };
    };
    class TextureSources
    {
    };
    class AnimationSources: AnimationSources
    {
        class muzzle_rot_MG
        {
            source="ammorandom";
            weapon="HMG_127_UGV";
        };
        class muzzle_hide_MG
        {
            source="reload";
            weapon="HMG_127_UGV";
        };
    };
    armor=240;
    armorStructural=4;
    class HitPoints: HitPoints
    {
        class HitHull
        {
            armor=0.69999999;
            material=50;
            armorComponent="hit_hull";
            name="hit_hull_point";
            visual="zbytek";
            passThrough=1;
            minimalHit=0.2;
            explosionShielding=0.2;
            radius=0.30000001;
        };
        class HitEngine
        {
            armor=1;
            material=-1;
            armorComponent="hit_engine";
            name="hit_engine_point";
            visual="-";
            passThrough=0.5;
            minimalHit=0.2;
            explosionShielding=0.2;
            radius=0.30000001;
        };
        class HitFuel
        {
            armor=1;
            material=-1;
            armorComponent="hit_fuel";
            name="hit_fuel_point";
            visual="-";
            passThrough=0.30000001;
            minimalHit=0.1;
            explosionShielding=0.60000002;
            radius=0.30000001;
        };
        class HitLBWheel: HitLBWheel
        {
            armor=1;
        };
        class HitLFWheel: HitLFWheel
        {
            armor=1;
            name="wheel_1_1";
        };
        class HitLF2Wheel: HitLF2Wheel
        {
            armor=1;
            name="wheel_1_2";
        };
        class HitLMWheel: HitLMWheel
        {
            armor=1;
            name="wheel_1_3";
        };
        class HitRBWheel: HitRBWheel
        {
            armor=1;
        };
        class HitRFWheel: HitRFWheel
        {
            armor=1;
            name="wheel_2_1";
        };
        class HitRF2Wheel: HitRF2Wheel
        {
            armor=1;
            name="wheel_2_2";
        };
        class HitRMWheel: HitRMWheel
        {
            armor=1;
            name="wheel_2_3";
        };
    };
    class ACE_Cargo
    {
        class Cargo
        {
            class ACE_Wheel
            {
                type="ACE_Wheel";
                amount=12;
            };
        };
    };
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Mechanized";
            vehicle = "Drone";
            Type = "POG-V";
            cost = 1;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_ext_co.paa"",""\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_co.paa"",""\A3\Data_F\Vehicles\Turret_co.paa""]]",
            };
        };
    };
};

class CC_COGV_RCWS: CC_POGV_RCWS
{
    cargoProxyIndexes[]={};
    enginePower=128;
    armor=4000;
    armorStructural=12;
    explosionShielding=0.30000001;
    maxSpeed=25;
    displayName="COG-V Mk.1";
    hiddenSelectionsTextures[] =
    {
        "\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_ext_co.paa",
        "\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_co.paa",
        "\A3\Data_F\Vehicles\Turret_co.paa"
    };
    turnCoef=2;
    smokeLauncherAngle=360;
    smokeLauncherGrenadeCount=16;
    smokeLauncherOnTurret=1;
    smokeLauncherVelocity=14;
    fuelCapacity=6;
    fuelConsumptionRate=0.0099999998;
    canBeTransported = 1;
    transportVehicleMass = 1000;  // Mongoose mass (approx.)
    class TransportMagazines
    {
        class _xx_DemoCharge_Remote_Mag
        {
            magazine="DemoCharge_Remote_Mag";
            count=1;
        };
    };
    class TransportWeapons
    {
    };
    class TransportItems
    {
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
        class _xx_B_UavTerminal
        {
            name="B_UavTerminal";
            count=2;
        };
        class _xx_ItemcTab
        {
            name="ItemcTab";
            count=2;
        };
        };
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            turretInfoType="RscOptics_UGV_gunner";
            weapons[]=
            {
                "CC_COGV_Support_Rocket",
                "OPTRE_M12_SOC",
                "CMFlareLauncher",
                "SmokeLauncher",
                "Laserdesignator_pilotCamera"
            };
            magazines[]=
            {
                "OPTRE_M41_Twin_Smoke_B",
                "OPTRE_M41_Twin_Smoke_B",
                "OPTRE_M41_Twin_Smoke_B",
                "OPTRE_M41_Twin_Smoke_B",
                "OPTRE_M41_Twin_Smoke_B",
                "OPTRE_M41_Twin_Smoke_G",
                "OPTRE_M41_Twin_Smoke_G",
                "OPTRE_M41_Twin_Smoke_G",
                "OPTRE_M41_Twin_Smoke_G",
                "OPTRE_M41_Twin_Smoke_G",
                "OPTRE_M41_Twin_Smoke_O",
                "OPTRE_M41_Twin_Smoke_O",
                "OPTRE_M41_Twin_Smoke_O",
                "OPTRE_M41_Twin_Smoke_O",
                "OPTRE_M41_Twin_Smoke_O",
                "OPTRE_M41_Twin_Smoke_P",
                "OPTRE_M41_Twin_Smoke_P",
                "OPTRE_M41_Twin_Smoke_P",
                "OPTRE_M41_Twin_Smoke_P",
                "OPTRE_M41_Twin_Smoke_P",
                "OPTRE_M41_Twin_Smoke_R",
                "OPTRE_M41_Twin_Smoke_R",
                "OPTRE_M41_Twin_Smoke_R",
                "OPTRE_M41_Twin_Smoke_R",
                "OPTRE_M41_Twin_Smoke_R",
                "OPTRE_M41_Twin_Smoke_W",
                "OPTRE_M41_Twin_Smoke_W",
                "OPTRE_M41_Twin_Smoke_W",
                "OPTRE_M41_Twin_Smoke_W",
                "OPTRE_M41_Twin_Smoke_W",
                "OPTRE_M41_Twin_Smoke_Y",
                "OPTRE_M41_Twin_Smoke_Y",
                "OPTRE_M41_Twin_Smoke_Y",
                "OPTRE_M41_Twin_Smoke_Y",
                "OPTRE_M41_Twin_Smoke_Y",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "OPTRE_96Rnd_127x40_Mag_APT",
                "168Rnd_CMFlare_Chaff_Magazine",
                "168Rnd_CMFlare_Chaff_Magazine",
                "Laserbatteries",
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
                "SmokeLauncherMag",
                "SmokeLauncherMag",
                "SmokeLauncherMag"
            };
            class HitPoints
            {
                class HitTurret
                {
                    armor=250;
                    material=-1;
                    armorComponent="hit_main_turret";
                    name="hit_main_turret_point";
                    visual="OtocVez";
                    passThrough=0;
                    minimalHit=0.029999999;
                    explosionShielding=0.40000001;
                    radius=0.25;
                    isTurret=1;
                };
                class HitGun
                {
                    armor=250;
                    material=-1;
                    armorComponent="hit_main_gun";
                    name="hit_main_gun_point";
                    visual="OtocHlaven";
                    passThrough=0;
                    minimalHit=0.029999999;
                    explosionShielding=0.40000001;
                    radius=0.2;
                    isGun=1;
                };
            };
            class ViewOptics: ViewOptics
            {
                minFov=0.0125;
                visionMode[]=
                {
                    "Normal",
                    "NVG",
                    "TI"
                };
            };
        };
        class CargoTurret_01: CargoTurret_01
        {
            isCopilot=1;
            proxyIndex=69;
        };
    };
    class TextureSources
    {};
    class AnimationSources: AnimationSources
    {
        class muzzle_rot_MG
        {
            source="ammorandom";
            weapon="OPTRE_M12_SOC";
        };
        class muzzle_hide_MG
        {
            source="reload";
            weapon="OPTRE_M12_SOC";
        };
    };
    class HitPoints: HitPoints
    {
        class HitHull
        {
            armor=400;
            material=50;
            armorComponent="hit_hull";
            name="hit_hull_point";
            visual="zbytek";
            passThrough=1;
            minimalHit=0.2;
            explosionShielding=0.1;
            radius=0.30000001;
        };
        class HitEngine
        {
            armor=60;
            material=-1;
            armorComponent="hit_engine";
            name="hit_engine_point";
            visual="-";
            passThrough=0.5;
            minimalHit=0.2;
            explosionShielding=0.1;
            radius=0.30000001;
        };
        class HitFuel
        {
            armor=40;
            material=-1;
            armorComponent="hit_fuel";
            name="hit_fuel_point";
            visual="-";
            passThrough=0.30000001;
            minimalHit=0.1;
            explosionShielding=0.2;
            radius=0.30000001;
        };
        class HitLBWheel: HitLBWheel
        {
            armor=0.5;
        };
        class HitLFWheel: HitLFWheel
        {
            armor=0.5;
            name="wheel_1_1";
        };
        class HitLF2Wheel: HitLF2Wheel
        {
            armor=0.5;
            name="wheel_1_2";
        };
        class HitLMWheel: HitLMWheel
        {
            armor=0.5;
            name="wheel_1_3";
        };
        class HitRBWheel: HitRBWheel
        {
            armor=0.5;
        };
        class HitRFWheel: HitRFWheel
        {
            armor=0.5;
            name="wheel_2_1";
        };
        class HitRF2Wheel: HitRF2Wheel
        {
            armor=0.5;
            name="wheel_2_2";
        };
        class HitRMWheel: HitRMWheel
        {
            armor=0.5;
            name="wheel_2_3";
        };
    };
    class VehicleSpawnerInfo {
        class CC_GroundSpawner
        {
            scope = 1;
            spawner= "CENTCOM Mechanized";
            vehicle = "Drone";
            Type = "COG-V";
            cost = 1;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_ext_co.paa"",""\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_co.paa"",""\A3\Data_F\Vehicles\Turret_co.paa""]]",
            };
        };
    };
};

class OPTRE_OQ40_Minibee_UNSC;

class CC_OQ40_Minibee: OPTRE_OQ40_Minibee_UNSC
{
    displayName="[CC] OQ-40 'Minibee'";
    author= AUTHOR;
    faction = "CC_Assets";
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Drones_EdSubCat";
    fuelCapacity=100;
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            LODTurnedIn=1100;
            LODTurnedOut=1100;
            minCamElev=-179;
            minElev=-179;
            minTurn=-179;
            maxCamElev=179;
            maxElev=179;
            maxTurn=179;
            weapons[]=
            {
                "Laserdesignator_mounted"
            };
            magazines[]=
            {
                "Laserbatteries"
            };
            stabilizedInAxes=3;
            class OpticsIn
            {
                class Wide
                {
                    opticsDisplayName="W";
                    initAngleX=0;
                    minAngleX=-30;
                    maxAngleX=30;
                    initAngleY=0;
                    minAngleY=-100;
                    maxAngleY=100;
                    initFov=0.5;
                    minFov=0.5;
                    maxFov=0.5;
                    directionStabilized=1;
                    visionMode[]=
                    {
                        "Normal",
                        "NVG",
                        "Ti"
                    };
                    thermalMode[]={0,1};
                    gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
                };
                class Short: Wide
                {
                    opticsDisplayName="S";
                    initFov="0.25/2";
                    minFov="0.25/2";
                    maxFov="0.25/2";
                    gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
                };
                class Medium: Wide
                {
                    opticsDisplayName="M";
                    initFov="0.25/4";
                    minFov="0.25/4";
                    maxFov="0.25/4";
                    gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
                };
                class Narrow: Wide
                {
                    opticsDisplayName="N";
                    initFov="0.25/12";
                    minFov="0.25/12";
                    maxFov="0.25/12";
                    gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
                };
                class Xtreme: Wide
                {
                    opticsDisplayName="X";
                    initFov="0.25/32";
                    minFov="0.25/32";
                    maxFov="0.25/32";
                    gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
                };
            };
        };
    };
    class assembleInfo
    {
        primary=1;
        base="";
        assembleTo="";
        displayName="";
        dissasembleTo[]=
        {
            "CC_OQ40_Minibee_Backpack_UNSC"
        };
    };
    class ACE_Actions
    {
        class ACE_MainActions
        {
            selection="interaction_point";
            distance=5;
            condition="(true)";
            class ACE_Pickup
            {
                selection="";
                displayName="Pick Up Minibee";
                distance=5;
                condition="(alive _target)";
                statement="[_player, _target, 'CC_OQ40_Minibee_Drone_Item'] call OPTRE_ace_fnc_pick_up_vic";
                showDisabled=0;
                exceptions[]={};
                icon="\OPTRE_Vehicles_Air_Drone\OQ40_Minibee\data\OQ-40_Icon.paa";
            };
            class ace_repair_Repair
            {
                displayName="Repair";
                condition="true";
                statement="";
                runOnHover=1;
                showDisabled=0;
                icon="\A3\ui_f\data\igui\cfg\actions\repair_ca.paa";
                distance=4;
                exceptions[]=
                {
                    "isNotSwimming",
                    "isNotOnLadder"
                };
            };
        };
    };
};
class assembleInfo;
class OPTRE_OQ40_Minibee_Backpack_UNSC;
class CC_OQ40_Minibee_Backpack_UNSC: OPTRE_OQ40_Minibee_Backpack_UNSC
{
    author= AUTHOR;
    displayName="[CC] OQ-40 Minibee Drone";
    faction = "CC_Assets";
    class assembleInfo: assembleInfo
    {
        base="";
        displayName="[CC] OQ-40 Minibee";
        assembleTo="CC_OQ40_Minibee";
    };
};
