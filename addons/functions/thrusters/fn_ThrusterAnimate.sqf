params ["_pelican"];

sleep .2;

while { ((_pelican getVariable ["CC_Thrusters_Engaged", false]) and (alive _pelican)) } do {
	_pelican setObjectTextureGlobal [1, "V_FZ_Air_Vehicles\data\Pelican\V_D77HTCI_B1_CA.paa"];
	sleep 0.2;
	_pelican setObjectTextureGlobal [1, "V_FZ_Air_Vehicles\data\Pelican\V_D77HTCI_B2_CA.paa"];
	sleep 0.2;
	_pelican setObjectTextureGlobal [1, "V_FZ_Air_Vehicles\data\Pelican\V_D77HTCI_B3_CA.paa"];
	sleep 0.2;
	_pelican setObjectTextureGlobal [1, "V_FZ_Air_Vehicles\data\Pelican\V_D77HTCI_B4_CA.paa"];
	sleep 0.32;
	_pelican setObjectTextureGlobal [1, "V_FZ_Air_Vehicles\data\Pelican\V_D77HTCI_B5_CA.paa"];
	sleep 0.4;
	_pelican setObjectTextureGlobal [1, "V_FZ_Air_Vehicles\data\Pelican\V_D77HTCI_B4_CA.paa"];
	sleep 0.2;
	_pelican setObjectTextureGlobal [1, "V_FZ_Air_Vehicles\data\Pelican\V_D77HTCI_B3_CA.paa"];
	sleep 0.2;
	_pelican setObjectTextureGlobal [1, "V_FZ_Air_Vehicles\data\Pelican\V_D77HTCI_B2_CA.paa"];
};
