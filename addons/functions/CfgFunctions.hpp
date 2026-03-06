class CfgFunctions{
    class CC
    {
        tag = "CC";
        class Misc
        {
            file = "y\A3CENTCOM\addons\functions\misc";
            //Used with permission from Jerry of the 105th
            class Init_misc
			{
				postInit=1;
                description = "Misc - Initialization";
                file = "y\A3CENTCOM\addons\functions\misc\fn_Init_misc.sqf";
			};
			class DefaultKits
			{
                description = "Misc - Default Kits";
                file = "y\A3CENTCOM\addons\functions\misc\fn_DefaultKits.sqf";
			};
			class ZeusMessage
			{
                description = "Misc - Zeus Message";
                file = "y\A3CENTCOM\addons\functions\misc\fn_ZeusMessage.sqf";
			};
            class RescaleObjects
            {
                description = "Misc - Rescale Objects";
                file = "y\A3CENTCOM\addons\functions\misc\fn_RescaleObjects.sqf";
            };
            class RepairRefuelRearmArea
            {
                description = "Misc - Repair Refuel Rearm Area";
                file = "y\A3CENTCOM\addons\functions\misc\fn_RepairRefuelRearmArea.sqf";
            };
            class MakeACEArsenal
            {
                description = "Misc - Make ACE Arsenal";
                file = "y\A3CENTCOM\addons\functions\misc\fn_MakeACEArsenal.sqf";
            };
        };
        class Thrusters
        {
            file = "y\A3CENTCOM\addons\functions\thrusters";
            class GetFlightTime { file = "y\A3CENTCOM\addons\functions\thrusters\Fn_GetFlightTime.sqf"; description = "Thrusters - get flight time"; };
            class IncreaseThrusterLevel { file = "y\A3CENTCOM\addons\functions\thrusters\Fn_IncreaseThrusterLevel.sqf"; description = "Thrusters - increase level"; };
            class RegisterThrusters { file = "y\A3CENTCOM\addons\functions\thrusters\Fn_RegisterThrusters.sqf"; description = "Thrusters - register thrusters"; };
            class ThrusterAnimate { file = "y\A3CENTCOM\addons\functions\thrusters\Fn_ThrusterAnimate.sqf"; description = "Thrusters - animate"; };
            class ThrusterDeAnimate { file = "y\A3CENTCOM\addons\functions\thrusters\Fn_ThrusterDeAnimate.sqf"; description = "Thrusters - de-animate"; };
            class ThrusterDisengage { file = "y\A3CENTCOM\addons\functions\thrusters\Fn_ThrusterDisengage.sqf"; description = "Thrusters - disengage"; };
            class AfterburnersDisengage { file = "y\A3CENTCOM\addons\functions\thrusters\Fn_AfterburnersDisengage.sqf"; description = "Thrusters - afterburners disengage"; };
            class Init_vic { postInit = 1;  file = "y\A3CENTCOM\addons\functions\thrusters\fn_Init_vic.sqf"; description = "Thrusters - initialization"; };
            class ChangeSpeed { file = "y\A3CENTCOM\addons\functions\thrusters\Fn_ChangeSpeed.sqf"; description = "Thrusters - change speed"; };
            class DecreaseThrusterLevel { file = "y\A3CENTCOM\addons\functions\thrusters\Fn_DecreaseThrusterLevel.sqf"; description = "Thrusters - decrease level"; };
            class EngageAfterburners { file = "y\A3CENTCOM\addons\functions\thrusters\Fn_EngageAfterburners.sqf"; description = "Thrusters - engage afterburners"; };
            class EngageAirbrakes { file = "y\A3CENTCOM\addons\functions\thrusters\Fn_EngageAirbrakes.sqf"; description = "Thrusters - engage airbrakes"; };
            class EngageForwardThruster { file = "y\A3CENTCOM\addons\functions\thrusters\Fn_EngageForwardThruster.sqf"; description = "Thrusters - engage forward thruster"; };
            
        };
        class HEV
        {
            file = "y\A3CENTCOM\addons\functions\hev";
            class HEV { description = "HEV - main"; };
            class HEVAtmoEffects { description = "HEV - atmosphere effects"; };
            class HEVBoosterDown { description = "HEV - booster down handler"; };
            class HEVChuteDeploy { description = "HEV - chute deploy"; };
            class HEVCleanUp { description = "HEV - cleanup"; };
            class SpawnFakeHEVRoom { description = "HEV - spawn fake room"; };
            class SpawnHEVsFrigate { description = "HEV - spawn with frigate"; };
            class SpawnHEVsNoFrigate { description = "HEV - spawn without frigate"; };
            class PlayerHEVEffectsUpdate_BoasterDown { file = "y\A3CENTCOM\addons\functions\hev\Fn_PlayerHEVEffectsUpdate_BoasterDown.sqf"; description = "HEV - player effects booster down"; };
            class PlayerHEVEffectsUpdate_Chute { description = "HEV - player effects chute"; };
            class PlayerHEVEffectsUpdate_GroundAlarm { description = "HEV - player ground alarm"; };
            class PlayerHEVEffectsUpdate_Light { description = "HEV - player light effects"; };
            class PlayerHEVEffectsUpdate_ReEntrySounds { description = "HEV - re-entry sounds"; };
            class PlayerHEVEffectsUpdate_PlayTones { description = "HEV - play tones"; };
            class HEVRoomDynamicSetupGrabUnits { description = "HEV - dynamic room setup"; };
            class HEVDoor { description = "HEV - door control"; };
            class HEVHandleLanding { description = "HEV - landing handler"; };
            class CountDown { description = "HEV - countdown"; };
            class CleanUp { description = "HEV - cleanup"; };
        };
        class Weapons
        {
            file="y\A3CENTCOM\addons\functions\weapons";
            class Init_wep
            {
                postInit=1;
            };
        };
        class MenuFunctions
        {
            file = "y\A3CENTCOM\addons\functions\menufunctions";
            class HEVRoom { description = "Menus - HEV room menu"; };
            class UNSCdatabase { description = "Menus - UNSC database menu"; };
        };
        class Tools
        {
            file = "y\A3CENTCOM\addons\functions\tools";
            class locateBlacklisted { postInit = 1; description = "Tools - checks if anyone runs a blacklisted mod"; };
        };
        class PelicanMagLiftSystem
        {
            file="y\A3CENTCOM\addons\functions\PelicanMagLiftSystem";
            class PelicanLoadValidate
            {
            };
            class PelicanUnLoadValidate
            {
            };
            class PelicanLoadSupplyPodsMenuUnload
            {
            };
            class PelicanLoadSupplyPodsMenuOpened
            {
            };
            class PelicanLoadSupplyPodsMenuLoad
            {
            };
            class PelicanLoadSupplyPodMenuDetachMenu
            {
            };
            class PelicanLoad_UnloadAllSupplyPods
            {
            };
        };
    };
    class DMNS
    {
        class HEV
        {
            file = "y\A3CENTCOM\addons\functions\hev";
            class HEV { file = "y\A3CENTCOM\addons\functions\hev\Fn_HEV.sqf"; description = "HEV - main"; };
            class HEVAtmoEffects { file = "y\A3CENTCOM\addons\functions\hev\Fn_HEVAtmoEffects.sqf"; description = "HEV - atmosphere effects"; };
            class HEVBoosterDown { file = "y\A3CENTCOM\addons\functions\hev\Fn_HEVBoosterDown.sqf"; description = "HEV - booster down handler"; };
            class HEVChuteDeploy { file = "y\A3CENTCOM\addons\functions\hev\Fn_HEVChuteDeploy.sqf"; description = "HEV - chute deploy"; };
            class HEVCleanUp { file = "y\A3CENTCOM\addons\functions\hev\Fn_HEVCleanUp.sqf"; description = "HEV - cleanup"; };
            class SpawnFakeHEVRoom { file = "y\A3CENTCOM\addons\functions\hev\Fn_SpawnFakeHEVRoom.sqf"; description = "HEV - spawn fake room"; };
            class SpawnHEVsFrigate { file = "y\A3CENTCOM\addons\functions\hev\Fn_SpawnHEVsFrigate.sqf"; description = "HEV - spawn with frigate"; };
            class SpawnHEVsNoFrigate { file = "y\A3CENTCOM\addons\functions\hev\Fn_SpawnHEVsNoFrigate.sqf"; description = "HEV - spawn without frigate"; };
            class PlayerHEVEffectsUpdate_BoasterDown { file = "y\A3CENTCOM\addons\functions\hev\Fn_PlayerHEVEffectsUpdate_BoasterDown.sqf"; description = "HEV - player effects booster down"; };
            class PlayerHEVEffectsUpdate_Chute { file = "y\A3CENTCOM\addons\functions\hev\Fn_PlayerHEVEffectsUpdate_Chute.sqf"; description = "HEV - player effects chute"; };
            class PlayerHEVEffectsUpdate_GroundAlarm { file = "y\A3CENTCOM\addons\functions\hev\Fn_PlayerHEVEffectsUpdate_GroundAlarm.sqf"; description = "HEV - player ground alarm"; };
            class PlayerHEVEffectsUpdate_Light { file = "y\A3CENTCOM\addons\functions\hev\Fn_PlayerHEVEffectsUpdate_Light.sqf"; description = "HEV - player light effects"; };
            class PlayerHEVEffectsUpdate_ReEntrySounds { file = "y\A3CENTCOM\addons\functions\hev\Fn_PlayerHEVEffectsUpdate_ReEntrySounds.sqf"; description = "HEV - re-entry sounds"; };
            class PlayerHEVEffectsUpdate_PlayTones { file = "y\A3CENTCOM\addons\functions\hev\Fn_PlayerHEVEffectsUpdate_PlayTones.sqf"; description = "HEV - play tones"; };
            class HEVRoomDynamicSetupGrabUnits { file = "y\A3CENTCOM\addons\functions\hev\Fn_HEVRoomDynamicSetupGrabUnits.sqf"; description = "HEV - dynamic room setup"; };
            class HEVDoor { file = "y\A3CENTCOM\addons\functions\hev\Fn_HEVDoor.sqf"; description = "HEV - door control"; };
            class HEVHandleLanding { file = "y\A3CENTCOM\addons\functions\hev\Fn_HEVHandleLanding.sqf"; description = "HEV - landing handler"; };
            class CountDown { file = "y\A3CENTCOM\addons\functions\hev\Fn_CountDown.sqf"; description = "HEV - countdown"; };
            class CleanUp { file = "y\A3CENTCOM\addons\functions\hev\Fn_CleanUp.sqf"; description = "HEV - cleanup"; };
        };
    };
    class Splits
    {
        class PelicanMagLiftSystem
        {
            file="y\A3CENTCOM\addons\functions\PelicanMagLiftSystem";
            class PelicanLoadSupplyPodsMenuLoad
            {
            };
        };
    };
    class OPTRE
    {
        tag = "OPTRE";
        class HEV
        {
            file = "y\A3CENTCOM\addons\functions\hev";
            class HEV { description = "HEV - main"; };
            class HEVAtmoEffects { description = "HEV - atmosphere effects"; };
            class HEVBoosterDown { description = "HEV - booster down handler"; };
            class HEVChuteDeploy { description = "HEV - chute deploy"; };
            class HEVCleanUp { description = "HEV - cleanup"; };
            class SpawnFakeHEVRoom { description = "HEV - spawn fake room"; };
            class SpawnHEVsFrigate { description = "HEV - spawn with frigate"; };
            class SpawnHEVsNoFrigate { description = "HEV - spawn without frigate"; };
            class PlayerHEVEffectsUpdate_BoasterDown { file = "y\A3CENTCOM\addons\functions\hev\Fn_PlayerHEVEffectsUpdate_BoasterDown.sqf"; description = "HEV - player effects booster down"; };
            class PlayerHEVEffectsUpdate_Chute { description = "HEV - player effects chute"; };
            class PlayerHEVEffectsUpdate_GroundAlarm { description = "HEV - player ground alarm"; };
            class PlayerHEVEffectsUpdate_Light { description = "HEV - player light effects"; };
            class PlayerHEVEffectsUpdate_ReEntrySounds { description = "HEV - re-entry sounds"; };
            class PlayerHEVEffectsUpdate_PlayTones { description = "HEV - play tones"; };
            class HEVRoomDynamicSetupGrabUnits { description = "HEV - dynamic room setup"; };
            class HEVDoor { description = "HEV - door control"; };
            class HEVHandleLanding { description = "HEV - landing handler"; };
            class CountDown { description = "HEV - countdown"; };
            class CleanUp { description = "HEV - cleanup"; };
        };
    };
};
