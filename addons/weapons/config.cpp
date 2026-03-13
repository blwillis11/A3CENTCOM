#include "script_component.hpp"

class CfgPatches
{
    class CC_Weapons
    {
        author=AUTHOR;
        authors[]=
        {
            "Salmon",
            "Sullivan"
        };
        name= COMPONENT_NAME;
        weapons[]=
        {
            /// BRs
            "CC_BR55_HB",
            "CC_BR55",
            "CC_BR45",
            /// Long Rifles
            "CC_M392",
            "CC_XBR55",
            "CC_SRS99",
            /// Rifles
            "CC_MA40",
            "CC_MA40GL",
            "CC_MA37",
            "CC_MA37GL",
            "CC_MA37K",
            /// Shotguns
            "CC_M45",
            "CC_M45E",
            /// SMGs
            "CC_M7_SMG",
            "CC_M6J",
            /// Pistols
            "CC_M6C",
            "CC_M6G",
            "CC_M6G2",
            "CC_M8_FlareGun",
            /// Machine Guns
            "CC_M731",
            "CC_M250",
            "CC_M247A1",
            /// Launchers
            "CC_M41_SSR"
        };
        units[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
        };
    };
};

class CfgWeapons
{

    #include "weapons\BattleRifles.hpp"
    #include "weapons\LongRifles.hpp"
    #include "weapons\MachineGuns.hpp"
    #include "weapons\Shotguns.hpp"
    #include "weapons\Pistols.hpp"
    #include "weapons\Rifles.hpp"
    #include "weapons\SMGs.hpp"
    #include "weapons\Launchers.hpp"
};

class ace_missileguidance_type_Sidewinder;
class CC_ace_missileguidance_type_M41_AA: ace_missileguidance_type_Sidewinder
{
	enabled=1;
	canVanillaLock=0;
	pitchRate=30;
	yawRate=30;
	defaultSeekerType="IR";
	seekerTypes[]=
	{
		"IR"
	};
	defaultSeekerLockMode="LOAL";
	seekerLockModes[]=
	{
		"LOAL"
	};
	defaultNavigationType="AugmentedProportionalNavigation";
	navigationTypes[]=
	{
		"AugmentedProportionalNavigation"
	};
	defaultAttackProfile="DIR";
	attackProfiles[]=
	{
		"DIR"
	};
	flareDistanceFilter=100;
	flareAngleFilter=1.6;
	seekLastTargetPos=1;
	seekerAngle=90;
	seekerMinRange=10;
	seekerMaxRange=5000;
};

class SensorTemplateIR;
class OPTRE_ace_missileguidance_type_M41_Thermal;

class CfgAmmo
{
    #include "cfg\Ammo.hpp"
};

class CfgMagazines
{
    #include "cfg\Magazines.hpp"
};

class cfgMagazineWells{
	class CC_rockets{
		CC_Magazines[] = {
			"CC_HEAT",
			"CC_HEAP",
			"CC_HEAA"
		};
	};
	class CC_15Rnd_762x51_MagWell{
		CC_Magazines[] = {
			"CC_15Rnd_762x51_Mag",
			"CC_15Rnd_762x51_Mag_Tracer",
			"CC_15Rnd_762x51_Mag_Tracer_Yellow",
			"CC_15Rnd_762x51_Mag_Tracer_IR",
			"CC_15Rnd_762x51_Mag_Dual"
		};
	};
	class CC_32Rnd_762x51_MagWell{
		CC_Magazines[] = {
			"CC_32Rnd_762x51_Mag",
			"CC_32Rnd_762x51_Mag_Tracer",
			"CC_32Rnd_762x51_Mag_Tracer_Yellow",
			"CC_32Rnd_762x51_Mag_Tracer_IR",
			"CC_32Rnd_762x51_Mag_Dual"
		};
	};
	class CC_60Rnd_762x51_MagWell{
		CC_Magazines[] = {
			"CC_60Rnd_762x51_Mag",
			"CC_60Rnd_762x51_Mag_Tracer",
			"CC_60Rnd_762x51_Mag_Tracer_Yellow",
			"CC_60Rnd_762x51_Mag_Tracer_IR",
			"CC_60Rnd_762x51_Mag_Dual"
		};
	};
	class CC_1Rnd_40mm_MagWell{
		CC_Magazines[] = {
			"CC_1Rnd_40mm_Shell_Signal_Green",
			"CC_1Rnd_40mm_Shell_Signal_Red",
			"CC_1Rnd_40mm_Shell_Signal_White",
			"CC_1Rnd_40mm_Shell_Signal_Yellow",
			"CC_1Rnd_40mm_Shell_HE",
			"CC_1Rnd_40mm_Shell_TD",
			"CC_1Rnd_40mm_Shell_Smoke_Blue",
			"CC_1Rnd_40mm_Shell_Smoke_Green",
			"CC_1Rnd_40mm_Shell_Smoke_Red",
			"CC_1Rnd_40mm_Shell_Smoke_White",
			"CC_1Rnd_40mm_Shell_Smoke_Yellow",
			"CC_1Rnd_40mm_Shell_Smoke_Orange",
			"CC_1Rnd_40mm_Shell_Smoke_Purple"
		};
	};
	class CC_100Rnd_762x51_MagWell{
		CC_Magazines[] = {
			"CC_100rnd_762x51_Mag",
			"CC_100rnd_762x51_Mag_Tracer",
			"CC_100rnd_762x51_Mag_Tracer_Yellow",
			"CC_100rnd_762x51_Mag_Tracer_IR"
		};
	};
	class CC_200Rnd_762x51_MagWell{
		CC_Magazines[] = {
			"CC_200rnd_762x51_Mag",
			"CC_200rnd_762x51_Mag_Tracer",
			"CC_200rnd_762x51_Mag_Tracer_Yellow",
			"CC_200rnd_762x51_Mag_Tracer_IR"
		};
	};
	class CC_15Rnd_762x51_DMR_MagWell{
		CC_Magazines[] = {
			"CC_15Rnd_762x51_Mag",
			"CC_15Rnd_762x51_Mag_Tracer",
			"CC_15Rnd_762x51_Mag_Tracer_Yellow",
			"CC_15Rnd_762x51_Mag_Tracer_IR",
			"CC_15Rnd_762x51_HVAP_Mag",
			"CC_15Rnd_762x51_HVAP_Mag_Tracer",
			"CC_15Rnd_762x51_HVAP_Mag_Tracer_Yellow",
			"CC_15Rnd_762x51_HVAP_Mag_Tracer_IR",
			"CC_15Rnd_762x51_BTHP_Mag",
			"CC_15Rnd_762x51_BTHP_Mag_Tracer",
			"CC_15Rnd_762x51_BTHP_Mag_Tracer_Yellow",
			"CC_15Rnd_762x51_BTHP_Mag_Tracer_IR"
		};
	};
	class CC_36Rnd_95x40_MagWell{
		CC_Magazines[] = {
            "CC_95x40_36Rnd_Mag",
            "CC_95x40_36Rnd_Mag_Tracer",
            "CC_95x40_36Rnd_Mag_Tracer_Yellow",
            "CC_95x40_36Rnd_Mag_Tracer_IR"
		};
	};
	class CC_48Rnd_5x23Caseless_MagWell{
		CC_Magazines[] = {
			"CC_48Rnd_5x23Caseless_FMJ_Mag",
			"CC_48Rnd_5x23Caseless_FMJ_Mag_Tracer",
			"CC_48Rnd_5x23Caseless_FMJ_Mag_Tracer_Yellow",
			"CC_48Rnd_5x23Caseless_FMJ_Mag_Tracer_IR",
			"CC_48Rnd_5x23Caseless_NARQ_Mag",
			"CC_48Rnd_5x23Caseless_NARQ_Mag_Tracer",
		};
	};
	class CC_60Rnd_5x23Caseless_MagWell{
		CC_Magazines[] = {
			"CC_60Rnd_5x23Caseless_FMJ_Mag",
			"CC_60Rnd_5x23Caseless_FMJ_Mag_Tracer",
			"CC_60Rnd_5x23Caseless_FMJ_Mag_Tracer_Yellow",
			"CC_60Rnd_5x23Caseless_FMJ_Mag_Tracer_IR"
		};
	};
	class CC_1Rnd_12Gauge_MagWell
	{
		CC_Magazines[] = {
			"CC_1Rnd_12Gauge_Pellets",
			"CC_1Rnd_12Gauge_Slugs",
			"CC_1Rnd_12Gauge_Smoke"
		};
	};
	class CC_12Rnd_127x30_MagWell{
		CC_Magazines[] = {
			"CC_12Rnd_127x30_SAP_Mag",
			"CC_12Rnd_127x30_SAP_Mag_Tracer",
			"CC_12Rnd_127x30_SAP_Mag_Tracer_Yellow",
			"CC_12Rnd_127x30_SAP_Mag_Tracer_IR",
			"CC_12Rnd_127x30_NARQ_Mag",
			"CC_12Rnd_127x30_NARQ_Mag_Tracer"
		};
	};
	class CC_24Rnd_127x30_MagWell{
		CC_Magazines[] = {
			"CC_24Rnd_127x30_SAP_Mag",
			"CC_24Rnd_127x30_SAP_Mag_Tracer",
			"CC_24Rnd_127x30_SAP_Mag_Tracer_Yellow",
			"CC_24Rnd_127x30_SAP_Mag_Tracer_IR"
		};
	};
	class CC_36Rnd_127x30_MagWell{
		CC_Magazines[] = {
			"CC_36Rnd_127x30_SAP_Mag",
			"CC_36Rnd_127x30_SAP_Mag_Tracer",
			"CC_36Rnd_127x30_SAP_Mag_Tracer_Yellow",
			"CC_36Rnd_127x30_SAP_Mag_Tracer_IR"
		};
	};
	class CC_4Rnd_127x99_MagWell{
		CC_Magazines[] = {
		    "CC_4Rnd_127x99_Mag_APFSDS",
		    "CC_4Rnd_127x99_Mag_APFSDS_Tracer",
		    "CC_4Rnd_127x99_Mag_APFSDS_Tracer_Red",
		    "CC_4Rnd_127x99_Mag_APFSDS_Tracer_Yellow",
		    "CC_4Rnd_127x99_Mag_APFSDS_Tracer_IR",
		    "CC_4Rnd_127x99_Mag_APFSDS_NARQ"
		};
	};
};
