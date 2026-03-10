// 7.62x51mm AR
class TCP_B_762x51_Ball;

class CC_B_762x51_Ball: TCP_B_762x51_Ball
{
    hit=12;
};
class CC_B_762x51_Ball_Tracer: CC_B_762x51_Ball
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class CC_B_762x51_Ball_Tracer_Yellow: CC_B_762x51_Ball
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
};
class CC_B_762x51_Ball_Tracer_IR: CC_B_762x51_Ball
{
    nvgOnly=1;
    model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
};
class CC_B_762x51_Dual: CC_B_762x51_Ball
{
    effectFly="AmmoUnderwater";
    waterFriction=-0.001;
};

class TCP_B_762x51_BTHP;

class CC_B_762x51_BTHP: TCP_B_762x51_BTHP
{
    hit=12;
};
class CC_B_762x51_BTHP_Tracer: CC_B_762x51_BTHP
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class CC_B_762x51_BTHP_Tracer_Yellow: CC_B_762x51_BTHP
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
};
class CC_B_762x51_BTHP_Tracer_IR: CC_B_762x51_BTHP
{
    nvgOnly=1;
    model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
};


class TCP_B_762x51_AP;

class CC_B_762x51_HVAP: TCP_B_762x51_AP
{
    hit=10.5;
};
class CC_B_762x51_HVAP_Tracer: CC_B_762x51_HVAP
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class CC_B_762x51_HVAP_Tracer_Yellow: CC_B_762x51_HVAP
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
};
class CC_B_762x51_HVAP_Tracer_IR: CC_B_762x51_HVAP
{
    nvgOnly=1;
    model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
};

// 9.5x40mm BR

class TCP_B_95x40_Ball;
class CC_95x40_AP: TCP_B_95x40_Ball
{
    hit=16;
};
class CC_95x40_AP_Tracer: CC_95x40_AP
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class CC_95x40_AP_Tracer_Yellow: CC_95x40_AP
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
};
class CC_95x40_AP_Tracer_IR: CC_95x40_AP
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_white";
    nvgOnly=1;
};

class OPTRE_B_95x40_Ball;

class CC_B_95x40_Ball: OPTRE_B_95x40_Ball {
    caliber = 4.3;
    hit = 20;
    typicalSpeed = 650;

    cartridge = "FxCartridge_93x64_Ball";
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class CC_B_95x40_Tracer:CC_B_95x40_Ball{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class CC_B_95x40_Tracer_Yellow:CC_B_95x40_Ball{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
};

// 12 gauge
class TCP_B_12Gauge_Pellets_Submunition;
class TCP_B_12Gauge_Slug;
class CC_12Gauge_Pellets: TCP_B_12Gauge_Pellets_Submunition
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class CC_12Gauge_Slugs: TCP_B_12Gauge_Slug
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class OPTRE_12Gauge_Smoke;
class CC_12Gauge_Smoke: OPTRE_12Gauge_Smoke
{
    hit = 2;
    caliber = 0.1;
    typicalSpeed = 550;
    smokeColor[] = {1, 1, 1, 1};
    timeToLive = 10;
    fuseDistance = 0;
};

// 5.23x23mm
class TCP_B_5x23_Ball;

class CC_5x23_Caseless:TCP_B_5x23_Ball
{
    hit=9;
};
class CC_5x23_Caseless_Tracer:CC_5x23_Caseless
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class CC_5x23_Caseless_Tracer_Yellow:CC_5x23_Caseless
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
};
class CC_5x23_Caseless_Tracer_IR:CC_5x23_Caseless
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_white";
    nvgOnly=1;
};

class CC_5x23_Caseless_NARQ:CC_5x23_Caseless
{
    hit=1;
    caliber=0.1;
    dosage=0.4;
};
class CC_5x23_Caseless_NARQ_Tracer:CC_5x23_Caseless_NARQ
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_green";
};

// 12.7x40mm

class TCP_B_127x30_Ball;

class CC_B_127x30_Ball:TCP_B_127x30_Ball
{
    hit=9;
};
class CC_B_127x30_Ball_Tracer:CC_B_127x30_Ball
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class CC_B_127x30_Ball_Tracer_Yellow:CC_B_127x30_Ball
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
};
class CC_B_127x30_Ball_Tracer_IR:CC_B_127x30_Ball
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_white";
    nvgOnly=1;
};
class CC_B_127x30_NARQ_Tracer: CC_B_127x30_Ball
{
    hit=1;
    caliber=0.1;
    dosage=0.4;
    model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    aiAmmoUsageFlags = 192;
    allowAgainstInfantry = 1;
};

// 12.7x99mm
class TCP_B_127x99_APFSDS;
class CC_B_127x99_APFSDS : TCP_B_127x99_APFSDS
{
    hit=25.739174;
};
class CC_B_127x99_APFSDS_Tracer : CC_B_127x99_APFSDS
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_green";
};
class CC_B_127x99_APFSDS_Tracer_Red : CC_B_127x99_APFSDS
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class CC_B_127x99_APFSDS_Tracer_Yellow : CC_B_127x99_APFSDS
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
};
class CC_B_127x99_APFSDS_Tracer_IR : CC_B_127x99_APFSDS
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_white";
    nvgOnly=1;
};
class CC_B_127x99_NARQ_Tracer : CC_B_127x99_APFSDS
{
    hit=1;
    caliber=0.1;
    dosage=0.4;
    model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    aiAmmoUsageFlags = 192;
    allowAgainstInfantry = 1;
};


// Launcher ammo
class DMNS_M96_Rocket_HEAT;
class CC_M96_Rocket_HEAT:DMNS_M96_Rocket_HEAT
{
    hit = 400;
    indirectHit = 250;
    indirectHitRange = 9;
};

class R_MRAAWS_HEAT_F;
class CC_50x137_HEAT: R_MRAAWS_HEAT_F
{
    model="\A3\weapons_f\launchers\RPG32\pg32v_rocket.p3d";
    caliber=10;
    hit=950;
    indirectHit=200;
    indirectHitRange=0.050000001;
    timeToLive=30;
    allowAgainstInfantry=0;
};
class R_MRAAWS_HE_F;
class CC_50X137_HE: R_MRAAWS_HE_F
{
    caliber=0;
    hit=400;
    indirectHit=200;
    indirectHitRange=5;
    allowAgainstInfantry=1;
};
class CC_50x137_PEN: CC_50X137_HE
{
    caliber=20;
    hit=1200;
    indirectHit=0;
    indirectHitRange=0;
    explosive=0;
    fuseDistance=0;
    allowAgainstInfantry=0;
};

class OPTRE_M41_Rocket_HEAT_G;
class OPTRE_M41_Rocket_HEAP;
class OPTRE_M41_Rocket_HEAT_G_AA;

class CC_HEAT:OPTRE_M41_Rocket_HEAT_G{
    maxSpeed=250;
    hit = 1600;
    missileLockMaxDistance = 20000;
    missileLockMinDistance = 50;
    missileKeepLockedCone = 75;
    missileLockCone = 30;
    fuseDistance = 30;
    timeToLive = 40;
    typicalSpeed = 200;
    trackOversteer = 0.9;
    sideAirFriction = 0.30000001;
    cmImmunity = 0.75;
    initTime = .1;
};
class CC_HEAP:OPTRE_M41_Rocket_HEAP{
    irLock = 0;
    airLock = 0;
    laserLock = 0;
    nvLock = 0;
    maxSpeed=250;
    allowAgainstInfantry = 1;
    proximityExplosionDistance = 0;
    hit = 220;
    indirectHit = 75;
    indirectHitRange = 6;
    explosive = 1;
};
class CC_HEAA:OPTRE_M41_Rocket_HEAT_G_AA
{
    warheadName="TandemHEAT";
    submunitionAmmo = "ammo_Penetrator_Vorona";
    effectsMissile = "missile3";
    hit = 550;
    indirectHit = 150;
    indirectHitRange = 4;
    explosive=0.80000001;
    cmImmunity = 0.85;
    maneuvrability = 28;
    maxControlRange = 30000;
    missileKeepLockedCone = 180;
    missileLockCone = 30;
    missileLockMaxDistance = 20000;
    missileLockMinDistance = 50;
    missileLockMaxSpeed = 1200;
    trackOversteer = 0.9;
    trackLead = 0.8;
    weaponLockSystem = 2;
    initTime = 0;
    thrustTime = 0.8;
    thrust = 120;
    maxSpeed = 600;
    class Components {
        class SensorsManagerComponent {
            class Components {
                class IRSensorComponent: SensorTemplateIR {
                    class AirTarget {
                        minRange=50;
                        maxRange=20000;
                        objectDistanceLimitCoef=-1;
                        viewDistanceLimitCoef=1;
                    };

                    class GroundTarget {
                        minRange=50;
                        maxRange=20000;
                        objectDistanceLimitCoef=1;
                        viewDistanceLimitCoef=1;
                    };

                    maxTrackableSpeed=1200;
                    angleRangeHorizontal=7;
                    angleRangeVertical=4.5;
                    maxTrackableATL=2000;
                };
            };
        };
    };
};
class G_40mm_Smoke;
class G_40mm_SmokeRed;
class G_40mm_SmokeGreen;
class G_40mm_SmokeYellow;
class G_40mm_SmokePurple;
class G_40mm_SmokeBlue;
class G_40mm_SmokeOrange;

#define OPTRE_IMPACTGLVALUES \
	deflecting=5;\
	explosive = 1;\
	simulation = "shotShell";\
	explosionTime = 0;\
	fuseDistance = 0;

class CC_40mm_Shell_Smoke_White: G_40mm_Smoke
{
    author=AUTHOR;
    OPTRE_IMPACTGLVALUES
    explosionEffects = "OPTRE_Effect_GL_White";
    model="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1rnd_Smoke_White.p3d";
    timetolive = 60; //60 in smokes
};
class CC_40mm_Shell_Smoke_Blue: G_40mm_SmokeBlue
{
    model="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1rnd_Smoke_Blue.p3d";
    OPTRE_IMPACTGLVALUES
    effectsSmoke="SmokeShellBlueEffect";
    explosionEffects = "OPTRE_Effect_GL_Blue";
    smokeColor[]={0.1183,0.1867,1,1};
};
class CC_40mm_Shell_Smoke_Green: G_40mm_SmokeGreen
{
    model="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1rnd_Smoke_Green.p3d";
    effectsSmoke="SmokeShellGreenEffect";
    OPTRE_IMPACTGLVALUES
    explosionEffects = "OPTRE_Effect_GL_Green";
    smokeColor[]={0.21250001,0.62580001,0.48910001,1};
};
class CC_40mm_Shell_Smoke_Orange: G_40mm_SmokeOrange
{
    model="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1rnd_Smoke_Orange.p3d";
    effectsSmoke="SmokeShellOrangeEffect";
    OPTRE_IMPACTGLVALUES
    explosionEffects = "OPTRE_Effect_GL_Orange";
    smokeColor[]={0.66970003,0.22750001,0.10053,1};
};
class CC_40mm_Shell_Smoke_Purple: G_40mm_SmokePurple
{
    model="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1rnd_Smoke_Purple.p3d";
    effectsSmoke="SmokeShellPurpleEffect";
    OPTRE_IMPACTGLVALUES
    explosionEffects = "OPTRE_Effect_GL_Purple";
    smokeColor[]={0.4341,0.1388,0.41440001,1};
};
class CC_40mm_Shell_Smoke_Red: G_40mm_SmokeRed
{
    model="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1rnd_Smoke_Red.p3d";
    effectsSmoke="SmokeShellRedEffect";
    OPTRE_IMPACTGLVALUES
    explosionEffects = "OPTRE_Effect_GL_Red";
    smokeColor[]={0.84380001,0.1383,0.1353,1};
};
class CC_40mm_Shell_Smoke_Yellow: G_40mm_SmokeYellow
{
    model="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1rnd_Smoke_Yellow.p3d";
    effectsSmoke="SmokeShellYellowEffect";
    OPTRE_IMPACTGLVALUES
    explosionEffects = "OPTRE_Effect_GL_Yellow";
    smokeColor[]={0.98830003,0.86059999,0.071900003,1};
};

class GrenadeBase;
class CC_40mm_Shell_HE: GrenadeBase
{
    author=AUTHOR;
    warheadName="HE";
    hit=80;
    indirectHit=8;
    indirectHitRange=6;
    cartridge="";
    pictureWire="\TCP\Weapons\Ammo\40\HE\data\ui\icon_ammo_40_W_CA.paa";
    explosive=1;
    explosionSoundEffect="DefaultExplosion";
    fuseDistance=15;
    whistleDist=16;
    simulation="shotShell";
    visibleFire=1;
    visibleFireTime=3;
    audibleFire=30;
    dangerRadiusBulletClose=8;
    dangerRadiusHit=60;
    suppressionRadiusBulletClose=6;
    suppressionRadiusHit=24;
    cost=10;
    airLock=1;
    typicalSpeed=76;
    deflecting=5;
    deflectionSlowDown=0.75;
    TCP_ammoMinTimeToLive=0;
    explosionTime=0;
    timeToLive=20;
    caliber=1.0526316;
    model="\TCP\Weapons\Ammo\40\HE\mag_40mm_1rnd.p3d";
    tracerScale=0.69999999;
    tracerStartTime=0.0074999998;
    tracerEndTime=5;
    airFriction=-0.001;
    soundHit1[]=
    {
        "A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01",
        3.1622777,
        1,
        1500
    };
    soundHit2[]=
    {
        "A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02",
        3.1622777,
        1,
        1500
    };
    soundHit3[]=
    {
        "A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03",
        3.1622777,
        1,
        1500
    };
    soundHit4[]=
    {
        "A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04",
        3.1622777,
        1,
        1500
    };
    multiSoundHit[]=
    {
        "soundHit1",
        0.25,
        "soundHit2",
        0.25,
        "soundHit3",
        0.25,
        "soundHit4",
        0.25
    };
    class CamShakeExplode
    {
        power=8;
        duration=1.2;
        frequency=20;
        distance=74.596397;
    };
    class CamShakeHit
    {
        power=20;
        duration=0.40000001;
        frequency=20;
        distance=1;
    };
    class CamShakeFire
    {
        power=0;
        duration=0.2;
        frequency=20;
        distance=0;
    };
    class CamShakePlayerFire
    {
        power=0;
        duration=0.1;
        frequency=20;
        distance=1;
    };
};
class CC_40mm_Shell_TD: CC_40mm_Shell_HE
{
    author=AUTHOR;
    warheadName="TD";
    cost=10;
    airLock=1;
    typicalSpeed=76;
    deflecting=30;
    TCP_ammoMinTimeToLive=2;
    explosionTime=15;
    timeToLive=16;
    caliber=1.0526316;
    airFriction=-0.001;
};
class BulletBase;
class CC_F_Sub_Signal_Base: BulletBase
{
    airFriction=-0.021600001;
    hit=0;
    model="\A3\Weapons_F_Kart\Ammo\tracer_green.p3d";
    simulation="shotSubmunitions";
    submunitionConeAngle=35;
    submunitionConeType[]=
    {
        "poissondisccenter",
        3
    };
    tracerScale=5;
    tracerStartTime=0.1;
    triggerTime=0.89999998;
};
class CC_F_40_Signal_Green: CC_F_Sub_Signal_Base
{
    pictureWire="TCP\Weapons\Ammo\40\HE\data\ui\icon_ammo_40_W_CA.paa";
    model="\A3\Weapons_F_Kart\Ammo\tracer_green.p3d";
    submunitionAmmo="TCP_F_Signal_Green";
};
class CC_F_40_Signal_Red: CC_F_Sub_Signal_Base
{
    pictureWire="TCP\Weapons\Ammo\40\HE\data\ui\icon_ammo_40_W_CA.paa";
    model="\A3\Weapons_F_Kart\Ammo\tracer_red.p3d";
    submunitionAmmo="TCP_F_Signal_Red";
};
class CC_F_40_Signal_White: CC_F_Sub_Signal_Base
{
    pictureWire="TCP\Weapons\Ammo\40\HE\data\ui\icon_ammo_40_W_CA.paa";
    model="\A3\weapons_f\ammo\flare_white.p3d";
    submunitionAmmo="TCP_F_Signal_White";
};
class CC_F_40_Signal_Yellow: CC_F_Sub_Signal_Base
{
    pictureWire="TCP\Weapons\Ammo\40\HE\data\ui\icon_ammo_40_W_CA.paa";
    model="\A3\weapons_f\ammo\flare_yellow.p3d";
    submunitionAmmo="TCP_F_Signal_Yellow";
};
