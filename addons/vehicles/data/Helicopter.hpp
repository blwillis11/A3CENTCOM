class OPTRE_UNSC_hornet_CAS;
class CC_AV14_Hornet_CAS: OPTRE_UNSC_hornet_CAS
{
    displayName = "[CC] AV-14 Hornet [CAS]";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    class EventHandlers: EventHandlers
    {
        class CC_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STBCC_fnc_RegisterThrusters;";
        };
    };
    crew = "CC_Assets_Aviator";
    hiddenSelectionsTextures[] =
    {
        "optre_vehicles_air\hornet\data\hornet_hull_standard_co.paa",
        "",
        "",
        ""
    };
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
    };
    class VehicleSpawnerInfo {
        class CC_AirSpawner
        {
            scope = 1;
            spawner= "CENTCOM Aviation";
            vehicle = "Hornet";
            Type = "CAS";
            cost = 2;

            priority = 2;
            liveries[]=
            {
             "[""Standard"",[""optre_vehicles_air\hornet\data\hornet_hull_standard_co.paa"","""","""",""""]]",
            };
        };
    };
};
class OPTRE_UNSC_hornet_CAP;
class CC_AV14_Hornet_CAP: OPTRE_UNSC_hornet_CAP
{
    displayName = "[CC] AV-14 Hornet [CAP]";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    class EventHandlers: EventHandlers
    {
        class CC_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STBCC_fnc_RegisterThrusters;";
        };
    };
    crew = "CC_Assets_Aviator";
    hiddenSelectionsTextures[] =
    {
        "optre_vehicles_air\hornet\data\hornet_hull_standard_co.paa",
        "",
        "",
        ""
    };
    class textureSources
    {};
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
    };
    class VehicleSpawnerInfo {
        class CC_AirSpawner
        {
            scope = 1;
            spawner= "CENTCOM Aviation";
            vehicle = "Hornet";
            Type = "CAP";
            cost = 2;

            priority = 2;
            liveries[]=
            {
             "[""Standard"",[""optre_vehicles_air\hornet\data\hornet_hull_standard_co.paa"","""","""",""""]]",
            };
        };
    };
};

class Splits_UNSC_D77_TC_Pelican;
class CC_D77_TC_Pelican: Splits_UNSC_D77_TC_Pelican
{
    displayName = "[CC] D77-TC Pelican";
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_Assets_Aviator";
    transportVehiclesCount = 2;  // Max vehicles loadable (e.g., 1 Warthog + 1 Mongoose)
    transportVehiclesMass = 10000;  // Total mass limit (kg); adjust for balance
    availableForSupportTypes[] = {"Drop"};  // Enables airdrop support
    transportVehicleAmmo = 0;  // No ammo transfer
    transportVehicleFuel = 0;  // No fuel transfer
    transportVehicleRepair = 0;  // No repair transfer
    class TransportVehicles {
        class Cargo1 {
            name = "FrontLeft";
            type = "CC_M274_ATV";  // Example: Warthog class
            direction = "forward";  // Align forward in bay
            offset[] = {1.15, 6, 2.13};  // Relative offset from Pelican's center (tweak in editor)
            maxLoadCoefficient = 0.5;  // Full size allowed
        };
        class Cargo2 {
            name = "FrontRight";
            type = "CC_M274_ATV";  // Example: Mongoose ATV
            direction = "forward";
            offset[] = {-1.15, 6, 2.13};
            maxLoadCoefficient = 0.5;  // Half size for smaller vehicle
        };
        class Cargo3 {
            name = "BackLeft";
            type = "CC_M274_ATV";  // Example: Mongoose ATV
            direction = "forward";
            offset[] = {-1.15, 2.3, 2.13};
            maxLoadCoefficient = 0.5;  // Half size for smaller vehicle
        };
        class Cargo4 {
            name = "BackRight";
            type = "CC_M274_ATV";  // Example: Mongoose ATV
            direction = "forward";
            offset[] = {1.15, 2.3, 2.13};
            maxLoadCoefficient = 0.5;  // Half size for smaller vehicle
        };
        class Cargo5 {
            name = "BackLeft";
            type = "CC_M274_ATV";  // Example: Mongoose ATV
            direction = "forward";
            offset[] = {-1.15, .45, 2.13};
            maxLoadCoefficient = 0.5;  // Half size for smaller vehicle
        };
        class Cargo6 {
            name = "BackRight";
            type = "CC_M274_ATV";  // Example: Mongoose ATV
            direction = "forward";
            offset[] = {1.15, .45, 2.13};
            maxLoadCoefficient = 0.5;  // Half size for smaller vehicle
        };
        class Cargo7 {
            name = "MainBayCenter";
            type = "CC_SDV_ODST";  // Example: Mongoose ATV
            direction = "backward";
            offset[] = {0, 4.15, 2.13};
            maxLoadCoefficient = 0.5;  // Half size for smaller vehicle
        };
        class Cargo8 {
            name = "MainBayCenter";
            type = "CC_POGV_RCWS";  // Example: Mongoose ATV
            direction = "backward";
            offset[] = {0, 4.15, 2.13};
            maxLoadCoefficient = 0.5;  // Half size for smaller vehicle
        };
        class Cargo9 {
            name = "MainBayCenter";
            type = "CC_COGV_RCWS";  // Example: Mongoose ATV
            direction = "backward";
            offset[] = {0, 4.15, 2.13};
            maxLoadCoefficient = 0.5;  // Half size for smaller vehicle
        };
    };
    class CargoAlignment {
        front[] = {"Cargo1"};  // Fill front first
        back[] = {"Cargo2"};
        center[] = {"Cargo7"};
    };
    class VehicleTransport
    {
    	class Carrier
    	{
    		//cargoBayDimensions[]		= { {1, 1.5, -1}, {-1, 6.5, -3.4} };			// alternatively, positions in model space (since 2.08)
    		cargoBayDimensions[]		= { {1.5, .5, -1}, {-1.5, 7.2, -3.4} };			// alternatively, positions in model space (since 2.08)
    		disableHeightLimit			= 1;								// If set to 1 disable height limit of transported vehicles
    		maxLoadMass					= 200000;							// Maximum cargo weight (in Kg) which the vehicle can transport
    		cargoAlignment[]			= { "front", "front", "back", "back", "center"};				// Array of 2 elements defining alignment of vehicles in cargo space.
    																		// Possible values are left, right, center, front, back. Order is important.
    		cargoSpacing[]				= { 0, 1.85, 0 };					// Offset from X,Y,Z axes (in metres)
            transportVehiclesCount = 2;
    		exits[]					= { {0, -2, -3} };			// alternatively, positions in model space (since 2.08)

    		unloadingInterval			= 2;								// Time between unloading vehicles (in seconds)
    		loadingDistance				= 10;								// Maximal distance for loading in exit point (in meters).
    		loadingAngle				= 60;								// Maximal sector where cargo vehicle must be to for loading (in degrees).
    		parachuteClassDefault		= "B_Parachute_02_F";				// Type of parachute used when dropped in air. Can be overridden by parachuteClass in Cargo.
    		parachuteHeightLimitDefault	= 50;								// Minimal height above terrain when parachute is used. Can be overridden by parachuteHeightLimit in Cargo.

    		class CargoTypeWhitelist										// Whitelist. If this isn't empty, only listed vehicles (isKindOf) can load into (since 2.10)
     		{
     			CC_M274_ATV = 1;
     			CC_POGV_RCWS = 1;
     			CC_COGV_RCWS = 1;
     			CC_SDV_ODST = 1;													// In this case the transporter only carry boats, not cars or tanks etc
     		};
    	};
    };
    class EventHandlers: EventHandlers
    {
        class CC_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,true,false] call CC_fnc_RegisterThrusters;";
        };
    };
    class textureSources
    {};
    class VehicleSpawnerInfo {
        class CC_AirSpawner
        {
            scope = 1;
            spawner= "CENTCOM Aviation";
            vehicle = "Pelican";
            Type = "Standard";
            cost = 3;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""Foundries\Splits_Vehicles\Pelican\data\H2_General\body_co.paa"",""Foundries\Splits_Vehicles\Pelican\data\H2_General\wings_and_gear_co.paa"",""Foundries\Splits_Vehicles\Pelican\data\H2_General\weaponry_co.paa""]]",
            };
        };
    };
    class UserActions
    {
        #include "cfg\PelicanActions.hpp"
    };
};
class OPTRE_Pelican_armed_SOCOM;
class CC_D77H_SOCOM_Pelican: OPTRE_Pelican_armed_SOCOM
{
    displayName = "[CC] D77H-TCI/AV SOCOM Pelican";
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_Assets_Aviator";
    class EventHandlers: EventHandlers
    {
        class CC_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,true,false] call CC_fnc_RegisterThrusters;";
        };
    };
    class textureSources
    {};
    class VehicleSpawnerInfo {
        class CC_AirSpawner
        {
            scope = 1;
            spawner= "CENTCOM Aviation";
            vehicle = "Pelican";
            Type = "SOCOM";
            cost = 3;
        };
    };
    class UserActions
    {
        #include "cfg\PelicanActions.hpp"
    };
};

class OPTRE_UNSC_falcon;

class CC_UNSC_falcon:OPTRE_UNSC_falcon
{
    displayName = "[CC] UH-144 Falcon [Unarmed]";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_Assets_Aviator";
    class EventHandlers: EventHandlers
    {
        class CC_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STBCC_fnc_RegisterThrusters;";
        };
    };
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
    };

    class VehicleSpawnerInfo {
        class CC_AirSpawner
        {
            scope = 1;
            spawner= "CENTCOM Aviation";
            vehicle = "Falcon";
            Type = "Unarmed";
            cost = 0;
            priority = 2;
        };
    };
};

class OPTRE_UNSC_falcon_S;

class CC_UNSC_falcon_S:OPTRE_UNSC_falcon_S
{
    displayName = "[CC] UH-144S Falcon";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "CC_Assets_Aviator";
    class EventHandlers: EventHandlers
    {
        class CC_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STBCC_fnc_RegisterThrusters;";
        };
    };
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
    };
    class VehicleSpawnerInfo {
        class CC_AirSpawner
        {
            scope = 1;
            spawner= "CENTCOM Aviation";
            vehicle = "Falcon";
            Type = "Side Guns";
            cost = 1;
            priority = 2;
        };
    };
};
class OPTRE_UNSC_MH_144_Falcon;

class CC_UNSC_MH_144_Falcon:OPTRE_UNSC_MH_144_Falcon
{
    displayName = "[CC] MH-144 Falcon";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    class EventHandlers: EventHandlers
    {
        class CC_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STBCC_fnc_RegisterThrusters;";
        };
    };
    crew = "CC_Assets_Aviator";
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
    };
    class VehicleSpawnerInfo {
        class CC_AirSpawner
        {
            scope = 1;
            spawner= "CENTCOM Aviation";
            vehicle = "Falcon";
            Type = "Front Gun";
            cost = 1;
            priority = 2;
        };
    };
};
class OPTRE_UNSC_MH_144S_Falcon;

class CC_UNSC_MH_144S_Falcon:OPTRE_UNSC_MH_144S_Falcon
{
    displayName = "[CC] MH-144S Falcon";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    class EventHandlers: EventHandlers
    {
        class CC_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STBCC_fnc_RegisterThrusters;";
        };
    };
    crew = "CC_Assets_Aviator";
    radarIcon="MA_HUD\textures\radar\vehicles\pelican.paa";
    radarIconScale=3;
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
    };
    class VehicleSpawnerInfo {
        class CC_AirSpawner
        {
            scope = 1;
            spawner= "CENTCOM Aviation";
            vehicle = "Falcon";
            Type = "Front + Side Guns";
            cost = 1;
            priority = 2;
        };
    };
};

class OPTRE_AV22_Sparrowhawk;

class CC_AV22_Sparrowhawk:OPTRE_AV22_Sparrowhawk
{
    displayName = "[CC] AV-22M Sparrowhawk";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    class EventHandlers: EventHandlers
    {
        class CC_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STBCC_fnc_RegisterThrusters;";
        };
    };
    crew = "CC_Assets_Aviator";
	class UserActions
	{
	    #include "cfg\UtilityActions.hpp"
		#include "cfg\ThrusterActions.hpp"
	};
    class VehicleSpawnerInfo {
        class CC_AirSpawner
        {
            scope = 1;
            spawner= "CENTCOM Aviation";
            vehicle = "Sparrowhawk";
            Type = "AV-22M";
            cost = 2;
            priority = 2;
        };
    };
};
class OPTRE_AV22A_Sparrowhawk;

class CC_AV22A_Sparrowhawk:OPTRE_AV22A_Sparrowhawk
{
    displayName = "[CC] AV-22L Sparrowhawk";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    class EventHandlers: EventHandlers
    {
        class CC_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STBCC_fnc_RegisterThrusters;";
        };
    };
    crew = "CC_Assets_Aviator";
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
    };
    class VehicleSpawnerInfo {
        class CC_AirSpawner
        {
            scope = 1;
            spawner= "CENTCOM Aviation";
            vehicle = "Sparrowhawk";
            Type = "AV-22L";
            cost = 2;
            priority = 2;
        };
    };
};
class OPTRE_AV22B_Sparrowhawk;

class CC_AV22B_Sparrowhawk:OPTRE_AV22B_Sparrowhawk
{
    displayName = "[CC] AV-22ML Sparrowhawk";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    class EventHandlers: EventHandlers
    {
        class CC_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STBCC_fnc_RegisterThrusters;";
        };
    };
    crew = "CC_Assets_Aviator";
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
    };
    class VehicleSpawnerInfo {
        class CC_AirSpawner
        {
            scope = 1;
            spawner= "CENTCOM Aviation";
            vehicle = "Sparrowhawk";
            Type = "AV-22ML";
            cost = 2;
            priority = 2;
        };
    };
};
class OPTRE_AV22C_Sparrowhawk;

class CC_AV22C_Sparrowhawk:OPTRE_AV22C_Sparrowhawk
{
    displayName = "[CC] AV-22 Sparrowhawk";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    class EventHandlers: EventHandlers
    {
        class CC_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STBCC_fnc_RegisterThrusters;";
        };
    };
    crew = "CC_Assets_Aviator";
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
    };
    class VehicleSpawnerInfo {
        class CC_AirSpawner
        {
            scope = 1;
            spawner= "CENTCOM Aviation";
            vehicle = "Sparrowhawk";
            Type = "AV-22";
            cost = 2;
            priority = 2;
        };
    };
};

class TKE_Ext_Dragonfly_A_UNSC;

class CC_AV18_Dragonfly:TKE_Ext_Dragonfly_A_UNSC
{
    displayName = "[CC] AV-18/A Dragonfly";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    class EventHandlers: EventHandlers
    {
        class CC_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STBCC_fnc_RegisterThrusters;";
        };
    };
    crew = "CC_Assets_Aviator";
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
    };
    class VehicleSpawnerInfo {
        class CC_AirSpawner
        {
            scope = 1;
            spawner= "CENTCOM Aviation";
            vehicle = "Dragonfly";
            Type = "AV-18/A";
            cost = 2;
            priority = 2;
        };
    };
};
class TKE_Ext_Dragonfly_S_UNSC;

class CC_AV18S_Dragonfly:TKE_Ext_Dragonfly_S_UNSC
{
    displayName = "[CC] AV-18/S Dragonfly";
    author= AUTHOR;
    editorCategory = "CC_Assets";
    editorSubcategory = "CC_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    class EventHandlers: EventHandlers
    {
        class CC_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STBCC_fnc_RegisterThrusters;";
        };
    };
    crew = "CC_Assets_Aviator";
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
    };
    class VehicleSpawnerInfo {
        class CC_AirSpawner
        {
            scope = 1;
            spawner= "CENTCOM Aviation";
            vehicle = "Dragonfly";
            Type = "AV-18/S";
            cost = 2;
            priority = 2;
        };
    };
};
