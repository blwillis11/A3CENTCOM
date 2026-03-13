class CfgVehicles {
    class ViewCargo;
    class ViewOptics;
    class VehicleSystemsTemplateLeftCommander;
    class VehicleSystemsTemplateRightCommander;
    class Turrets;
    class MainTurret;
    class CargoTurret_01;
    class animationSources;
    class HitPoints;
    class HitLFWheel;
    class HitLBWheel;
    class HitLMWheel;
    class HitLF2Wheel;
    class HitRFWheel;
    class HitRBWheel;
    class HitRMWheel;
    class HitRF2Wheel;

    #include "data\APC.hpp"
    #include "data\Tanks.hpp"
    #include "data\Cars.hpp"
    #include "data\Helicopter.hpp"
    #include "data\Planes.hpp"
    #include "data\Drone.hpp"
    #include "data\Aquatic.hpp"
    #include "data\Utility.hpp"

    class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
                class OPTRE_Wren_Drone_place;
				class CC_Minibee_Drone_place: OPTRE_Wren_Drone_place
				{
					displayName="Deploy Minibee Drone";
					condition="[_player, 'CC_OQ40_Minibee_Drone_Item'] call ace_common_fnc_hasItem";
					statement="[_player, 'CC_OQ40_Minibee', 'CC_OQ40_Minibee_Drone_Item'] call OPTRE_ace_fnc_place_down_vic";
					icon="\OPTRE_Vehicles_Air_Drone\OQ40_Minibee\data\OQ-40_Icon.paa";
				};
			};
		};
	};
};
