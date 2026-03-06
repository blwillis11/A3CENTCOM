#include "UtilityActions.hpp"

#include "ThrusterActions.hpp"

class Afterburners900Engage
{
    animPeriod=5;
    condition="(this getvariable [""CC_Thrusters_Engaged"",false]) AND (!(this getvariable [""CC_Afterburners_Engaged"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
    displayName="<t color='#04B45F'>Engage Afterburners";
    displayNameDefault="<t color='#04B45F'>Engage Afterburners";
    onlyForPlayer=0;
    position="cargo_door_handle";
    priority=10;
    radius=100000;
    showWindow=0;
    statement="0 = this spawn CC_fnc_engageAfterburners";
    textToolTip="<t color='#04B45F'>Engage Afterburners";
    userActionID=54;
};
class Afterburners900Disengage
{
    animPeriod=5;
    condition="(this getvariable [""CC_Afterburners_Engaged"",false]) AND (player == driver this) AND (alive this)";
    displayName="<t color='#FCE205'>Disengage Afterburners";
    displayNameDefault="<t color='#FCE205'>Disengage Afterburners";
    onlyForPlayer=0;
    position="cargo_door_handle";
    priority=10;
    radius=100000;
    showWindow=0;
    statement="0 = this spawn CC_fnc_AfterburnersDisengage; 0 = this spawn CC_fnc_ThrusterDeAnimate";
    textToolTip="<t color='#FCE205'>Disengage Afterburners";
    userActionID=55;
};
class PelLift_LoadVehicle
{
    userActionID = 6;
    displayName = "Maglock Vehicle";
    displayNameDefault = "Maglock Vehicle";
    textToolTip = "Maglock Vehicle";
    position = "cargo_door_handle";
    showWindow = 0;
    radius = 15;
    priority = 2;
    onlyForPlayer = 0;
    condition = "!(player in [gunner this, driver this]) AND ((vehicle player == player) OR (vehicle player != player AND isPlayer vehicle player)) AND (str (this getVariable [""Splits_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"")";
    statement = "0 = [this,vehicle player] spawn CC_fnc_PelicanLoadValidate;";
};
class PelLift_LoadPodMenu
{
    userActionID = 9;
    displayName = "Load Supply Pods";
    displayNameDefault = "Load Supply Pods";
    textToolTip = "Load Supply Pods";
    position = "cargo_door_handle";
    showWindow = 0;
    radius = 15;
    priority = 2;
    onlyForPlayer = 0;
    condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
    //condition = "( vehicle player != this AND vehicle player != this AND player == driver vehicle player AND (vehicle player) isKindOf ""OPTRE_cart_base"" ) ";
    statement = "Splits_pelicanloadSupplyPods_Menu_PelicanObject = this; createDialog ""Splits_pelicanloadSupplyPods_Menu""; Splits_pelicanloadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL Splits_pelicanloadSupplyPods_Menu_PelicanObject;  Splits_pelicanloadSupplyPods_Menu_cam CamSetTarget Splits_pelicanloadSupplyPods_Menu_PelicanObject; Splits_pelicanloadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; Splits_pelicanloadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; Splits_pelicanloadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
};
class PelLift_UnLoadVehicle
{
    userActionID = 7;
    displayName = "Detach Vehicle / Supply Pods";
    displayNameDefault = "Detach Vehicle / Supply Pods";
    textToolTip = "Detach Vehicle / Supply Pods";
    position = "cargo_door_handle";
    showWindow = 0;
    radius = 5;
    priority = 3;
    onlyForPlayer = 0;
    condition = "(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""Splits_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
    statement = "0 = [this] spawn CC_fnc_PelicanUnLoadValidate;";
};
class PelLift_OpenDetachPodMenu
{
    userActionID = 8;
    displayName = "Detach Individual Supply Pod Menu";
    displayNameDefault = "Detach Individual Supply Pod Menu";
    textToolTip = "Detach Individual Supply Pod Menu";
    position = "cargo_door_handle";
    showWindow = 0;
    radius = 5;
    priority = 3;
    onlyForPlayer = 0;
    condition = "(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""Splits_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
    statement = "0 = this spawn Splits_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
};
class RampOpen
{
    userActionID = 50;
    displayName = "Close Ramp";
    displayNameDefault = "Close Ramp";
    textToolTip = "Close Ramp";
    position = "cargo_door_handle";
    showWindow = 0;
    radius = 100000;
    priority = 4;
    onlyForPlayer = 0;
    condition = "((this animationPhase ""cargoDoor_1"" < 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
    statement = "this animate [""cargoDoor_1"",1]";
    animPeriod = 5;
};
class RampClose : RampOpen
{
    userActionID = 51;
    displayName = "Open Ramp";
    displayNameDefault = "Open Ramp";
    textToolTip = "Open Ramp";
    priority = 4;
    condition = "((this animationPhase ""cargoDoor_1"" > 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
    statement = "this animate [""cargoDoor_1"",0]";
    animPeriod = 5;
};
