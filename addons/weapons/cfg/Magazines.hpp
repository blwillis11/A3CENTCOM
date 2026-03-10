// 7.62x51mm NATO

class TCP_15Rnd_762x51_Mag;
class TCP_32Rnd_762x51_Mag;
class TCP_60Rnd_762x51_Mag;

class CC_15Rnd_762x51_Mag: TCP_15Rnd_762x51_Mag{
    displayName="[CENTCOM] 15Rnd 7.62x51mm Magazine";
    author= AUTHOR;
    ammo="CC_B_762x51_Ball";
};
class CC_15Rnd_762x51_Mag_Tracer: CC_15Rnd_762x51_Mag{
    displayName="[CENTCOM] 15Rnd 7.62x51mm Magazine [Tracer]";
    ammo="CC_B_762x51_Ball_Tracer";
    tracersEvery = 1;
    lastRoundsTracer = 15;
};
class CC_15Rnd_762x51_Mag_Tracer_Yellow: CC_15Rnd_762x51_Mag_Tracer
{
    displayName="[CENTCOM] 15Rnd 7.62x51mm Magazine [Tracer Yellow]";
    ammo="CC_B_762x51_Ball_Tracer_Yellow";
};
class CC_15Rnd_762x51_Mag_Tracer_IR: CC_15Rnd_762x51_Mag_Tracer
{
    displayName="[CENTCOM] 15Rnd 7.62x51mm Magazine [Tracer IR]";
    ammo="CC_B_762x51_Ball_Tracer_IR";
};


class CC_15Rnd_762x51_Mag_Dual: CC_15Rnd_762x51_Mag
{
    displayName="[CENTCOM] 15Rnd 7.62x51mm Magazine [Dual]";
    ammo="CC_B_762x51_Dual";
};


class CC_15Rnd_762x51_BTHP_Mag:TCP_15Rnd_762x51_Mag
{
    ammo = "CC_B_762x51_BTHP";
    displayname	= "[CENTCOM] 15Rnd 7.62x51mm BTHP Magazine";
};
class CC_15Rnd_762x51_BTHP_Mag_Tracer:CC_15Rnd_762x51_BTHP_Mag
{
    displayname	= "[CENTCOM] 15Rnd 7.62x51mm BTHP Magazine [Tracers]";
    ammo = "CC_B_762x51_BTHP_Tracer";
    tracersEvery = 1;
    lastRoundsTracer = 15;
};
class CC_15Rnd_762x51_BTHP_Mag_Tracer_Yellow:CC_15Rnd_762x51_BTHP_Mag
{
    displayname	= "[CENTCOM] 15Rnd 7.62x51mm BTHP Magazine [Tracers Yellow]";
    ammo = "CC_B_762x51_BTHP_Tracer_Yellow";
};
class CC_15Rnd_762x51_BTHP_Mag_Tracer_IR:CC_15Rnd_762x51_BTHP_Mag
{
    displayname	= "[CENTCOM] 15Rnd 7.62x51mm BTHP Magazine [Tracers IR]";
    ammo = "CC_B_762x51_BTHP_Tracer_IR";

};


class CC_15Rnd_762x51_HVAP_Mag:TCP_15Rnd_762x51_Mag
{
    displayname	= "[CENTCOM] 15Rnd 7.62x51mm HVAP Magazine";
    ammo = "CC_B_762x51_HVAP";
};
class CC_15Rnd_762x51_HVAP_Mag_Tracer:TCP_15Rnd_762x51_Mag
{
    displayname	= "[CENTCOM] 15Rnd 7.62x51mm HVAP Magazine [Tracers]";
    ammo = "CC_B_762x51_HVAP_Tracer";
    tracersEvery = 1;
    lastRoundsTracer = 15;
};
class CC_15Rnd_762x51_HVAP_Mag_Tracer_Yellow:CC_15Rnd_762x51_HVAP_Mag_Tracer
{
    displayname	= "[CENTCOM] 15Rnd 7.62x51mm HVAP Magazine [Tracers Yellow]";
    ammo = "CC_B_762x51_HVAP_Tracer_Yellow";
};
class CC_15Rnd_762x51_HVAP_Mag_Tracer_IR:CC_15Rnd_762x51_HVAP_Mag_Tracer
{
    displayname	= "[CENTCOM] 15Rnd 7.62x51mm HVAP Magazine [Tracers IR]";
    ammo = "CC_B_762x51_HVAP_Tracer_IR";
};



class CC_32Rnd_762x51_Mag: TCP_32Rnd_762x51_Mag{
    displayName="[CENTCOM] 32Rnd 7.62x51mm Magazine";
    author= AUTHOR;
    ammo="CC_B_762x51_Ball";
};
class CC_32Rnd_762x51_Mag_Tracer: CC_32Rnd_762x51_Mag{
    displayName="[CENTCOM] 32Rnd 7.62x51mm Magazine [Tracer]";
    ammo="CC_B_762x51_Ball_Tracer";
    tracersEvery = 1;
    lastRoundsTracer = 32;
};
class CC_32Rnd_762x51_Mag_Tracer_Yellow: CC_32Rnd_762x51_Mag_Tracer
{
    displayName="[CENTCOM] 32Rnd 7.62x51mm Magazine [Tracer Yellow]";
    ammo="CC_B_762x51_Ball_Tracer_Yellow";
};
class CC_32Rnd_762x51_Mag_Tracer_IR: CC_32Rnd_762x51_Mag_Tracer
{
    displayName="[CENTCOM] 32Rnd 7.62x51mm Magazine [Tracer IR]";
    ammo="CC_B_762x51_Ball_Tracer_IR";
};


class CC_32Rnd_762x51_Mag_Dual: CC_32Rnd_762x51_Mag
{
    displayName="[CENTCOM] 32Rnd 7.62x51mm Magazine [Dual]";
    ammo="CC_B_762x51_Dual";
};


class CC_60Rnd_762x51_Mag: TCP_60Rnd_762x51_Mag{
    displayName="[CENTCOM] 60Rnd 7.62x51mm Magazine";
    author= AUTHOR;
    ammo="CC_B_762x51_Ball";
};
class CC_60Rnd_762x51_Mag_Tracer: CC_60Rnd_762x51_Mag{
    displayName="[CENTCOM] 60Rnd 7.62x51mm Magazine [Tracer]";
    ammo="CC_B_762x51_Ball_Tracer";
    tracersEvery = 1;
    lastRoundsTracer = 60;
};
class CC_60Rnd_762x51_Mag_Tracer_Yellow: CC_60Rnd_762x51_Mag_Tracer
{
    displayName="[CENTCOM] 60Rnd 7.62x51mm Magazine [Tracer Yellow]";
    ammo="CC_B_762x51_Ball_Tracer_Yellow";
};
class CC_60Rnd_762x51_Mag_Tracer_IR: CC_60Rnd_762x51_Mag_Tracer
{
    displayName="[CENTCOM] 60Rnd 7.62x51mm Magazine [Tracer IR]";
    ammo="CC_B_762x51_Ball_Tracer_IR";
};


class CC_60Rnd_762x51_Mag_Dual : CC_60Rnd_762x51_Mag
{
    displayname	= "[CENTCOM] 60Rnd 7.62x51mm Magazine (Dual)";
    ammo = "CC_B_762x51_Dual";
};

class TCP_100Rnd_762x51_Mag;
class TCP_200Rnd_762x51_Mag;

class CC_200rnd_762x51_Mag: TCP_200Rnd_762x51_Mag{
    displayName = "[CENTCOM] 200Rnd 7.62x51mm Box";
    ammo = "CC_B_762x51_Ball";
};
class CC_200rnd_762x51_Mag_Tracer: TCP_200Rnd_762x51_Mag{
    displayName = "[CENTCOM] 200Rnd 7.62x51mm Box [Tracers]";
    ammo = "CC_B_762x51_Ball_Tracer";
    tracersEvery = 1;
    lastRoundsTracer = 200;
};
class CC_200rnd_762x51_Mag_Tracer_Yellow: CC_200rnd_762x51_Mag_Tracer{
    displayName = "[CENTCOM] 200Rnd 7.62x51mm Box [Yellow Tracers]";
    ammo = "CC_B_762x51_Ball_Tracer_Yellow";
};
class CC_200rnd_762x51_Mag_Tracer_IR: CC_200rnd_762x51_Mag_Tracer{
    displayName = "[CENTCOM] 200Rnd 7.62x51mm Box [IR Tracers]";
    ammo = "CC_B_762x51_Ball_Tracer_IR";
};


class CC_100rnd_762x51_Mag: TCP_100Rnd_762x51_Mag{
    displayName = "[CENTCOM] 100Rnd 7.62x51mm Box";
    ammo = "CC_B_762x51_Ball";
};
class CC_100rnd_762x51_Mag_Tracer: TCP_100Rnd_762x51_Mag{
    displayName = "[CENTCOM] 100Rnd 7.62x51mm Box [Tracers]";
    ammo = "CC_B_762x51_Ball_Tracer";
    tracersEvery = 1;
    lastRoundsTracer = 100;
};
class CC_100rnd_762x51_Mag_Tracer_Yellow: CC_100rnd_762x51_Mag_Tracer{
    displayName = "[CENTCOM] 100Rnd 7.62x51mm Box [Yellow Tracers]";
    ammo = "CC_B_762x51_Ball_Tracer_Yellow";
};
class CC_100rnd_762x51_Mag_Tracer_IR: CC_100rnd_762x51_Mag_Tracer{
    displayName = "[CENTCOM] 100Rnd 7.62x51mm Box [IR Tracers]";
    ammo = "CC_B_762x51_Ball_Tracer_IR";
};

//12

// 95x40mm magazines

class TCP_36Rnd_95x40_Mag;

class CC_95x40_36Rnd_Mag:TCP_36Rnd_95x40_Mag
{
    displayName="[CENTCOM] 36Rnd 9.5x40mm Magazine";
    author= AUTHOR;
    ammo="CC_95x40_AP";
};
class CC_95x40_36Rnd_Mag_Tracer:CC_95x40_36Rnd_Mag
{
    displayName="[CENTCOM] 36Rnd 9.5x40mm Magazine [Tracer]";
    ammo="CC_95x40_AP_Tracer";
    tracersEvery = 1;
    lastRoundsTracer = 36;
};
class CC_95x40_36Rnd_Mag_Tracer_Yellow:CC_95x40_36Rnd_Mag_Tracer
{
    displayName="[CENTCOM] 36Rnd 9.5x40mm Magazine [Yellow Tracer]";
    ammo="CC_95x40_AP_Tracer_Yellow";
};
class CC_95x40_36Rnd_Mag_Tracer_IR:CC_95x40_36Rnd_Mag_Tracer
{
    displayName="[CENTCOM] 36Rnd 9.5x40mm Magazine [IR Tracer]";
    ammo="CC_95x40_AP_Tracer_IR";
};

// Launcher

class CA_LauncherMagazine;
class CC_M96_LAW: CA_LauncherMagazine {
    scope = 1;
    allowedSlots[] = {};
};
class DMNS_M96_HEAT;
class CC_M96_HEAT: DMNS_M96_HEAT
{
    displayname						= "[CENTCOM] M-96 HEAT Disposable Rockets";
    ammo							= "DMNS_M96_Rocket_HEAT";
    count							= 1;
    mass 							= 45;
    initSpeed 						= 650;
};
class MRAWS_HEAT_F;
class CC_1Rnd_50x137_HEAT: MRAWS_HEAT_F
{
    scope=2;
    scopeArsenal=2;
    ammo="CC_50x137_HEAT";
    author=AUTHOR;
    count=1;
    displayname="[CENTCOM] 50x137mm HEAT Rocket";
    descriptionShort="1 Rocket<br>50x137mm<br>High Explosive Anti-Tank<br>Unguided";
    mass=32;
    allowedSlots[]={901,701};
};
class MRAWS_HE_F;
class CC_1Rnd_50x137_HE: MRAWS_HE_F
{
    ammo="CC_50X137_HE";
    author=AUTHOR;
    count=1;
    displayname="[CENTCOM] 50x137mm HE Rocket";
    displaynameshort="HE";
    descriptionShort="1 Rocket<br>50x137mm<br>High Explosive<br>Unguided";
    mass=27;
    allowedSlots[]={901,701};
};
class CC_1Rnd_50x137_PEN: CC_1Rnd_50x137_HE
{
    ammo="CC_50x137_PEN";
    author=AUTHOR;
    count=1;
    displayname="[CENTCOM] 50x137mm Penetrator Rocket";
    displaynameshort="Penetrator";
    descriptionShort="1 Rocket<br>50x137mm<br>Anti-Tank<br>Unguided";
    mass=50;
    allowedSlots[]={901,701};
};

class OPTRE_M41_Twin_HEAT_G;

class CC_HEAT:OPTRE_M41_Twin_HEAT_G{
    displayname	= "[CENTCOM] M19 HEAT Twin Rockets";
    author=AUTHOR;
    displaynameshort = "HEAT";
    descriptionshort = "High Explosive Anti Tank";
    ammo = "CC_HEAT";
    hiddenSelections[] = {"camo_tubes","camo_details"};
    hiddenSelectionsTextures[] = {
        "\OPTRE_Weapons\Rockets\data\mag_types\heat.paa",
        "\optre_weapons\rockets\data\logos_ca.paa"
    };
};
class CC_HEAP:CC_HEAT{
    count=2;
    displayname	= "[CENTCOM] M19 HEAP Twin Rockets";
    author=AUTHOR;
    displaynameshort = "HEAP";
    descriptionshort = "High Explosive Anti Personnel (Un-guided)<br/>Un-guided";
    ammo = "CC_HEAP";
    hiddenSelectionsTextures[] = {
        "\OPTRE_Weapons\Rockets\data\mag_types\heap.paa",
        "optre_weapons\rockets\data\logos_ca.paa"
    };
    picture = "\OPTRE_Weapons\Rockets\icons\magazine\heap.paa";
};
class CC_HEAA:CC_HEAT{
    count=2;
    displayname	= "[CENTCOM] M19 HEAA Twin Rockets";
    displaynameshort = "HEAA";
    descriptionshort = "High Explosive Anti Air (Guided)<br/>Guided";
    ammo = "CC_HEAA";
    hiddenSelectionsTextures[] = {
        "\OPTRE_Weapons\Rockets\data\mag_types\he.paa",
        "optre_weapons\rockets\data\logos_ca.paa"
    };
    picture = "\OPTRE_Weapons\Rockets\icons\magazine\heat.paa";
};


// 12 gauge magazines

class TCP_1Rnd_12Gauge_Shell_Pellets;
class TCP_1Rnd_12Gauge_Shell_Slug;

class CC_1Rnd_12Gauge_Pellets: TCP_1Rnd_12Gauge_Shell_Pellets
{
    displayname	= "[CENTCOM] 1Rnd 12 Gauge Pellets";
    ammo = "CC_12Gauge_Pellets";
};
class CC_1Rnd_12Gauge_Slugs: TCP_1Rnd_12Gauge_Shell_Slug
{
    displayname	= "[CENTCOM] 1Rnd 12 Gauge Slugs";
    ammo = "CC_12Gauge_Slugs";
};
class CC_1Rnd_12Gauge_Smoke: TCP_1Rnd_12Gauge_Shell_Slug
{
    displayname	= "[CENTCOM] 1Rnd 12 Gauge Smoke";
    ammo = "CC_12Gauge_Smoke";
};

// 12.7x30mm magazines

class TCP_12Rnd_127x30_52_Mag;

class CC_12Rnd_127x30_SAP_Mag: TCP_12Rnd_127x30_52_Mag
{
    author=AUTHOR;
    displayName="[CENTCOM] 12Rnd 12.7x30mm SAP Magazine";
    ammo="CC_B_127x30_Ball";
};
class CC_12Rnd_127x30_SAP_Mag_Tracer: CC_12Rnd_127x30_SAP_Mag
{
    displayName="[CENTCOM] 12Rnd 12.7x30mm SAP Magazine (Tracer)";
    ammo="CC_B_127x30_Ball_Tracer";
    tracersEvery=1;
    lastRoundsTracer=12;
};
class CC_12Rnd_127x30_SAP_Mag_Tracer_Yellow: CC_12Rnd_127x30_SAP_Mag_Tracer
{
    displayName="[CENTCOM] 12Rnd 12.7x30mm SAP Magazine (Tracer Yellow)";
    ammo="CC_B_127x30_Ball_Tracer_Yellow";
};
class CC_12Rnd_127x30_SAP_Mag_Tracer_IR: CC_12Rnd_127x30_SAP_Mag_Tracer
{
    displayName="[CENTCOM] 12Rnd 12.7x30mm SAP Magazine (Tracer IR)";
    ammo="CC_B_127x30_Ball_Tracer_IR";
};


class CC_12Rnd_127x30_NARQ_Mag: CC_12Rnd_127x30_SAP_Mag
{
    author=AUTHOR;
    displayName="[CENTCOM] 12Rnd 12.7x30mm NARQ Magazine";
    ammo="CC_B_127x30_NARQ_Tracer";
};
class CC_12Rnd_127x30_NARQ_Mag_Tracer: CC_12Rnd_127x30_SAP_Mag_Tracer
{
    displayName="[CENTCOM] 12Rnd 12.7x30mm NARQ Magazine (Tracer)";
    ammo="CC_B_127x30_NARQ_Tracer";
    tracersEvery=1;
    lastRoundsTracer=12;
};

class TCP_24Rnd_127x30_Mag;

class CC_24Rnd_127x30_SAP_Mag: TCP_24Rnd_127x30_Mag
{
    author=AUTHOR;
    displayName="[CENTCOM] 24Rnd 12.7x30mm SAP Magazine";
    ammo="CC_B_127x30_Ball";
};
class CC_24Rnd_127x30_SAP_Mag_Tracer: CC_24Rnd_127x30_SAP_Mag
{
    displayName="[CENTCOM] 24Rnd 12.7x30mm SAP Magazine (Tracer)";
    ammo="CC_B_127x30_Ball_Tracer";
    tracersEvery=1;
    lastRoundsTracer=12;

};
class CC_24Rnd_127x30_SAP_Mag_Tracer_Yellow: CC_24Rnd_127x30_SAP_Mag_Tracer
{
    displayName="[CENTCOM] 24Rnd 12.7x30mm SAP Magazine (Tracer Yellow)";
    ammo="CC_B_127x30_Ball_Tracer_Yellow";
};
class CC_24Rnd_127x30_SAP_Mag_Tracer_IR: CC_24Rnd_127x30_SAP_Mag_Tracer
{
    displayName="[CENTCOM] 24Rnd 12.7x30mm SAP Magazine (Tracer IR)";
    ammo="CC_B_127x30_Ball_Tracer_IR";
};

class TCP_36Rnd_127x30_Mag;

class CC_36Rnd_127x30_SAP_Mag: TCP_36Rnd_127x30_Mag
{
    author=AUTHOR;
    displayName="[CENTCOM] 36Rnd 12.7x30mm SAP Magazine";
    ammo="CC_B_127x30_Ball";
};
class CC_36Rnd_127x30_SAP_Mag_Tracer: CC_36Rnd_127x30_SAP_Mag
{
    displayName="[CENTCOM] 36Rnd 12.7x30mm SAP Magazine (Tracer)";
    ammo="CC_B_127x30_Ball_Tracer";
    tracersEvery=1;
    lastRoundsTracer=12;
};
class CC_36Rnd_127x30_SAP_Mag_Tracer_Yellow: CC_36Rnd_127x30_SAP_Mag_Tracer
{
    displayName="[CENTCOM] 36Rnd 12.7x30mm SAP Magazine (Tracer Yellow)";
    ammo="CC_B_127x30_Ball_Tracer_Yellow";
};
class CC_36Rnd_127x30_SAP_Mag_Tracer_IR: CC_36Rnd_127x30_SAP_Mag_Tracer
{
    displayName="[CENTCOM] 36Rnd 12.7x30mm SAP Magazine (Tracer IR)";
    ammo="CC_B_127x30_Ball_Tracer_IR";
};


// 5x23mm Caseless magazines

class TCP_48Rnd_5x23_Mag;
class TCP_60Rnd_5x23_Mag;

class CC_48Rnd_5x23Caseless_FMJ_Mag: TCP_48Rnd_5x23_Mag{
    displayName="[CENTCOM] 48Rnd 5x23mm FMJ Magazine";
    ammo="CC_5x23_Caseless";
};
class CC_48Rnd_5x23Caseless_FMJ_Mag_Tracer: CC_48Rnd_5x23Caseless_FMJ_Mag{
    displayName="[CENTCOM] 48Rnd 5x23mm FMJ Magazine (Tracer)";
    ammo="CC_5x23_Caseless_Tracer";
    tracersEvery = 1;
    lastRoundsTracer = 48;
};
class CC_48Rnd_5x23Caseless_FMJ_Mag_Tracer_Yellow: CC_48Rnd_5x23Caseless_FMJ_Mag_Tracer{
    displayName="[CENTCOM] 48Rnd 5x23mm FMJ Magazine (Tracer Yellow)";
    ammo="CC_5x23_Caseless_Tracer_Yellow";
};
class CC_48Rnd_5x23Caseless_FMJ_Mag_Tracer_IR: CC_48Rnd_5x23Caseless_FMJ_Mag_Tracer{
    displayName="[CENTCOM] 48Rnd 5x23mm FMJ Magazine (Tracer IR)";
    ammo="CC_5x23_Caseless_Tracer_IR";
};


class CC_48Rnd_5x23Caseless_NARQ_Mag: CC_48Rnd_5x23Caseless_FMJ_Mag{
    displayName="[CENTCOM] 48Rnd 5x23mm NARQ Magazine";
    author= AUTHOR;
    ammo="CC_5x23_Caseless_NARQ";

};
class CC_48Rnd_5x23Caseless_NARQ_Mag_Tracer: CC_48Rnd_5x23Caseless_FMJ_Mag_Tracer{
    displayName="[CENTCOM] 48Rnd 5x23mm NARQ Magazine (Tracer)";
    author= AUTHOR;
    ammo="CC_5x23_Caseless_NARQ_Tracer";

};


class CC_60Rnd_5x23Caseless_FMJ_Mag: TCP_60Rnd_5x23_Mag{
    displayName="[CENTCOM] 60Rnd 5x23mm FMJ Magazine";
    author= AUTHOR;
    ammo="CC_5x23_Caseless";
};
class CC_60Rnd_5x23Caseless_FMJ_Mag_Tracer: CC_60Rnd_5x23Caseless_FMJ_Mag{
    displayName="[CENTCOM] 60Rnd 5x23mm FMJ Magazine (Tracer)";
    author= AUTHOR;
    ammo="CC_5x23_Caseless_Tracer";
    tracersEvery = 1;
    lastRoundsTracer = 60;
};
class CC_60Rnd_5x23Caseless_FMJ_Mag_Tracer_Yellow: CC_60Rnd_5x23Caseless_FMJ_Mag_Tracer{
    displayName="[CENTCOM] 60Rnd 5x23mm FMJ Magazine (Tracer Yellow)";
    author= AUTHOR;
    ammo="CC_5x23_Caseless_Tracer_Yellow";
};
class CC_60Rnd_5x23Caseless_FMJ_Mag_Tracer_IR: CC_60Rnd_5x23Caseless_FMJ_Mag_Tracer{
    displayName="[CENTCOM] 60Rnd 5x23mm FMJ Magazine (Tracer IR)";
    author= AUTHOR;
    ammo="CC_5x23_Caseless_Tracer_IR";
};

// 12.7x99mm Magazines
class TCP_4Rnd_127x99_Mag;

class CC_4Rnd_127x99_Mag_APFSDS: TCP_4Rnd_127x99_Mag
{
    author="CENTCOM J-4";
    mass=25;
    ammo="CC_B_127x99_APFSDS";
};
class CC_4Rnd_127x99_Mag_APFSDS_Tracer: TCP_4Rnd_127x99_Mag
{
    mass=25;
    ammo="CC_B_127x99_APFSDS_Tracer";
};
class CC_4Rnd_127x99_Mag_APFSDS_Tracer_Red: TCP_4Rnd_127x99_Mag
{
    mass=25;
    ammo="CC_B_127x99_APFSDS_Tracer_Red";
};
class CC_4Rnd_127x99_Mag_APFSDS_Tracer_Yellow: TCP_4Rnd_127x99_Mag
{
    mass=25;
    ammo="CC_B_127x99_APFSDS_Tracer_Yellow";
};
class CC_4Rnd_127x99_Mag_APFSDS_Tracer_IR: TCP_4Rnd_127x99_Mag
{
    mass=25;
    ammo="CC_B_127x99_APFSDS_Tracer_IR";
};
class CC_4Rnd_127x99_Mag_APFSDS_NARQ: TCP_4Rnd_127x99_Mag
{
    mass=25;
    ammo="CC_B_127x99_NARQ_Tracer";
};

class CA_Magazine;
class CC_1Rnd_40mm_Shell_Smoke_Blue: CA_Magazine
{
    author=AUTHOR;
    scope=2;
    displayName="[CENTCOM] 40mm Smoke Round (Blue)";
    displayNameShort="40mm Smoke Round (Blue)";
    descriptionShort="A blue impact smoke round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\Smoke\data\ui\icon_40mm_Smoke_Blue_1Rnd_CA.paa";
    ammo="CC_40mm_Shell_Smoke_Blue";
    model="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_Blue.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_Blue.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=4.1005931;
    initSpeed=76;
};
class CC_1Rnd_40mm_Shell_Smoke_Green: CC_1Rnd_40mm_Shell_Smoke_Blue
{
    displayName="[CENTCOM] 40mm Smoke Round (Green)";
    displayNameShort="40mm Smoke Round (Green)";
    descriptionShort="A green impact smoke round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\Smoke\data\ui\icon_40mm_Smoke_Green_1Rnd_CA.paa";
    ammo="CC_40mm_Shell_Smoke_Green";
    model="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_Green.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_Green.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=4.1005931;
    initSpeed=76;
};
class CC_1Rnd_40mm_Shell_Smoke_Orange: CC_1Rnd_40mm_Shell_Smoke_Blue
{
    displayName="[CENTCOM] 40mm Smoke Round (Orange)";
    displayNameShort="40mm Smoke Round (Orange)";
    descriptionShort="An orange impact smoke round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\Smoke\data\ui\icon_40mm_Smoke_Orange_1Rnd_CA.paa";
    ammo="CC_40mm_Shell_Smoke_Orange";
    model="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_Orange.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_Orange.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=4.1005931;
    initSpeed=76;
};
class CC_1Rnd_40mm_Shell_Smoke_Purple: CC_1Rnd_40mm_Shell_Smoke_Blue
{
    displayName="[CENTCOM] 40mm Smoke Round (Purple)";
    displayNameShort="40mm Smoke Round (Purple)";
    descriptionShort="A purple impact smoke round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\Smoke\data\ui\icon_40mm_Smoke_Purple_1Rnd_CA.paa";
    ammo="CC_40mm_Shell_Smoke_Purple";
    model="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_Purple.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_Purple.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=4.1005931;
    initSpeed=76;
};
class CC_1Rnd_40mm_Shell_Smoke_Red: CC_1Rnd_40mm_Shell_Smoke_Blue
{
    displayName="[CENTCOM] 40mm Smoke Round (Red)";
    displayNameShort="40mm Smoke Round (Red)";
    descriptionShort="A red impact smoke round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\Smoke\data\ui\icon_40mm_Smoke_Red_1Rnd_CA.paa";
    ammo="CC_40mm_Shell_Smoke_Red";
    model="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_Red.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_Red.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=4.1005931;
    initSpeed=76;
};
class CC_1Rnd_40mm_Shell_Smoke_White: CC_1Rnd_40mm_Shell_Smoke_Blue
{
    displayName="[CENTCOM] 40mm Smoke Round (White)";
    displayNameShort="40mm Smoke Round (White)";
    descriptionShort="A white impact smoke round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\Smoke\data\ui\icon_40mm_Smoke_White_1Rnd_CA.paa";
    ammo="CC_40mm_Shell_Smoke_White";
    model="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_White.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_White.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=4.1005931;
    initSpeed=76;
};
class CC_1Rnd_40mm_Shell_Smoke_Yellow: CC_1Rnd_40mm_Shell_Smoke_Blue
{
    displayName="[CENTCOM] 40mm Smoke Round (Yellow)";
    displayNameShort="40mm Smoke Round (Yellow)";
    descriptionShort="A yellow impact smoke round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\Smoke\data\ui\icon_40mm_Smoke_Yellow_1Rnd_CA.paa";
    ammo="CC_40mm_Shell_Smoke_Yellow";
    model="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_Yellow.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\Smoke\mag_40mm_1Rnd_Smoke_Yellow.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=4.1005931;
    initSpeed=76;
};
class CC_1Rnd_40mm_Shell_HE: CA_Magazine
{
    author=AUTHOR;
    scope=2;
    displayName="[CENTCOM] 40mm HE Round";
    displayNameShort="40mm HE Round";
    descriptionShort="A high-explosive round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\HE\data\ui\icon_40mm_1rnd_CA.paa";
    ammo="CC_40mm_Shell_HE";
    model="\TCP\Weapons\Ammo\40\HE\mag_40mm_1rnd.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\HE\mag_40mm_1rnd.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=4.1005931;
    initSpeed=76;
};
class CC_1Rnd_40mm_Shell_TD: CC_1Rnd_40mm_Shell_HE
{
    author=AUTHOR;
    scope=2;
    displayName="[CENTCOM] 40mm TD Round";
    displayNameShort="40mm TD Round";
    descriptionShort="A time explosive round for a grenade launcher";
    ammo="CC_40mm_Shell_TD";
    count=1;
    mass=4.1005931;
    initSpeed=76;
};
class CC_1Rnd_40mm_Shell_Signal_Green: CA_Magazine
{
    author=AUTHOR;
    scope=2;
    displayName="[CENTCOM] 40mm Flare Round (Green)";
    displayNameShort="40mm Flare Round (Green)";
    descriptionShort="A green flare round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\Signal\data\ui\icon_40mm_Signal_Green_1rnd_CA.paa";
    ammo="CC_F_40_Signal_Green";
    model="\TCP\Weapons\Ammo\40\Signal\mag_40mm_1Rnd_Signal_Green.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\Signal\mag_40mm_1Rnd_Signal_Green.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=1.3999337;
};
class CC_1Rnd_40mm_Shell_Signal_Red: CC_1Rnd_40mm_Shell_Signal_Green
{
    author=AUTHOR;
    scope=2;
    displayName="[CENTCOM] 40mm Flare Round (Red)";
    displayNameShort="40mm Flare Round (Red)";
    descriptionShort="A red flare round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\Signal\data\ui\icon_40mm_Signal_Red_1rnd_CA.paa";
    ammo="CC_F_40_Signal_Red";
    model="\TCP\Weapons\Ammo\40\Signal\mag_40mm_1Rnd_Signal_Red.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\Signal\mag_40mm_1Rnd_Signal_Red.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=1.3999337;
};
class CC_1Rnd_40mm_Shell_Signal_White: CC_1Rnd_40mm_Shell_Signal_Green
{
    author=AUTHOR;
    scope=2;
    displayName="[CENTCOM] 40mm Flare Round (White)";
    displayNameShort="40mm Flare Round (White)";
    descriptionShort="A white flare round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\Signal\data\ui\icon_40mm_Signal_White_1rnd_CA.paa";
    ammo="CC_F_40_Signal_White";
    model="\TCP\Weapons\Ammo\40\Signal\mag_40mm_1Rnd_Signal_White.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\Signal\mag_40mm_1Rnd_Signal_White.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=1.3999337;
};
class CC_1Rnd_40mm_Shell_Signal_Yellow: CC_1Rnd_40mm_Shell_Signal_Green
{
    author=AUTHOR;
    scope=2;
    displayName="[CENTCOM] 40mm Flare Round (Yellow)";
    displayNameShort="40mm Flare Round (Yellow)";
    descriptionShort="A yellow flare round for a grenade launcher";
    picture="\TCP\Weapons\Ammo\40\Signal\data\ui\icon_40mm_Signal_Yellow_1rnd_CA.paa";
    ammo="CC_F_40_Signal_Yellow";
    model="\TCP\Weapons\Ammo\40\Signal\mag_40mm_1Rnd_Signal_Yellow.p3d";
    modelSpecial="\TCP\Weapons\Ammo\40\Signal\mag_40mm_1Rnd_Signal_Yellow.p3d";
    modelSpecialIsProxy=1;
    count=1;
    mass=1.3999337;
};
