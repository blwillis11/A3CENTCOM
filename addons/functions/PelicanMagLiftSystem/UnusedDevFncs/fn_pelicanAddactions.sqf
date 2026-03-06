removeAllActions _this;

_this addAction ["Load Vehicle", 
	{ 
		private _validateHandle = [_this,vehicle player] spawn OPTRE_fnc_PelicanLoadValidate;  
	}, 
	[], 
	1.5, 
	false, 
	false, 
	"", 
	" 
		( 
			vehicle player != _target AND  
			vehicle player != player AND  
			player == driver vehicle player AND  
			(str (_target getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"")  
		)
	", 
	15 
]; 
 
_this addAction ["Unload Vehicle / Supply Pods", 
   {  
		_this spawn OPTRE_fnc_PelicanLoadUnloadAction;
	}, 
  [], 
  1.5, 
  false, 
  false, 
  "",  
  " 
  ( 
	driver _target == player AND 
	(str (_target getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) != ""[]"") 
  ) 
 ", 
 15 
 ]; 
 
 _this addAction ["Detach Individual Supply Pod Menu", 
{  
	private _validateHandle = _this spawn OPTRE_Fnc_PelicanUnLoadMenuOpened;
}, 
[], 
1.5, 
false, 
false, 
"",  
" 
( 
	((driver _target == player) OR (gunner _target == player)) AND 
	({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (_target getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0
 ) 
", 
15 
]; 

_this addAction ["Load Supply Pods", 
  { 
	OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject = _this select 0;
	createDialog "OPTRE_PelicanLoadSupplyPods_Menu";

	OPTRE_PelicanLoadSupplyPods_Menu_cam = "camera" CamCreate getPosATL OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject;  
	OPTRE_PelicanLoadSupplyPods_Menu_cam CamSetTarget OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject; 
	OPTRE_PelicanLoadSupplyPods_Menu_cam CameraEffect ["Internal","Back"]; 
	OPTRE_PelicanLoadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; 
	OPTRE_PelicanLoadSupplyPods_Menu_cam CamCommit 0; 
	showCinemaBorder false; 
	
	if (sunOrMoon == 0) then {camUseNVG true;};
  }, 
  [], 
  1.5, 
  false, 
  false, 
  "", 
  " 
  ( 
   vehicle player != _target AND  
   vehicle player != player AND  
   player == driver vehicle player AND  
   (vehicle player) isKindOf ""OPTRE_cart_base"" 
  ) 
 ", 
 15 
]; 
 
_this addEventHandler ["Killed",{ 
	{ 
		detach _x;  
		_x setVelocity [0,0,-1]; 
	} forEach ((_this select 0) getVariable ["OPTRE_Pelican_AttachedToVehiclesEffect",[]]); 
}];
