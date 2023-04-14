//Change faction colors so that occupier is red
scriptName "initVarCommon.sqf";
#include "..\script_component.hpp"
FIX_LINE_NUMBERS()
Info("Changing faction colors for FDF");
debug = false;

private _time = diag_tickTime;

_time spawn {
	waitUntil {uiSleep 0.1; !isNil "colorOccupants" || diag_tickTime - _this > 10};
	colorOccupants = "colorOPFOR";
	Info("Changed faction color for occupants");
};

_time spawn {
	waitUntil {uiSleep 0.1; !isNil "colorInvaders" || diag_tickTime - _this > 10};
	colorInvaders = "colorOrange";
	Info("Changed faction color for invaders");
};

_time spawn {
	waitUntil {uiSleep 0.1; !isNil "colorTeamPlayer" || diag_tickTime - _this > 10};
	colorTeamPlayer = "colorBLUFOR";
	Info("Changed faction color for players");
};