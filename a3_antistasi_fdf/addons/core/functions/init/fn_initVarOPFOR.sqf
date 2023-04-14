//Change faction colors so that occupier is red and invader is blue
scriptName "initVarOPFOR.sqf";
#include "..\..\script_component.hpp"
FIX_LINE_NUMBERS()
Info("initVarOPFOR started");
Info("Changing faction colors for FDF");
debug = false;

0 spawn {
	waitUntil {sleep 0.1; !isNil colorOccupants};
	colorOccupants = "colorOPFOR";
	Info("Changed faction color for occupants");
};

0 spawn {
	waitUntil {sleep 0.1; !isNil colorInvaders};
	colorInvaders = "colorOrange";
	Info("Changed faction color for invaders");
};