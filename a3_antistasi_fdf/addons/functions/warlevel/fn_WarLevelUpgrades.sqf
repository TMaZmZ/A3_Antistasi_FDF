//Add new gear to arsenal when war level increased. 
//Input: Array with gear
//Output: None

scriptName "WarLevelUpgrades.sqf";
#include "..\script_component.hpp"
FIX_LINE_NUMBERS()
debug = false;

private _list = _this;

waitUntil {uiSleep 1; !isNil "tierWar"}; //Wait for our var to initialize

private _currentWarLevel = (tierWar - 1);
private _previousWarLevel = _currentWarLevel;
private _delay = 10; //How many seconds to pause between checking war level

//Run the loop till eternity
while {true} do {
	_currentWarLevel = (tierWar - 1);
	
	//Warlevel validity check
	if (_currentWarLevel < 0) then
	{
		_currentWarLevel = 0;
	}
	else
	{
		if (_currentWarLevel > 9) then
		{
			_currentWarLevel = 9
		};
	};
	
	//Add new stuff to arsenal if war level increased from previous check
	if (_currentWarLevel > _previousWarLevel) then 
	{
		//Upgrade gear
		private _gearlist = _list select _currentWarLevel;
		if (!isNil {_gearlist select 0}) then
		{
			{
				private _item = _x select 0;
				private _amount = _x select 1;
				private _index = _item call jn_fnc_arsenal_itemType;
				
				[_index,_item,_amount] call jn_fnc_arsenal_additem;
				
			} forEach _gearlist;
		};

		_gearlist = [];
		_previousWarLevel = _currentWarLevel;
		
		if (isServer) then {
			0 call A3A_fnc_generateRebelGear; //Update AI gearlist
		};
	};
	uiSleep _delay;
};
