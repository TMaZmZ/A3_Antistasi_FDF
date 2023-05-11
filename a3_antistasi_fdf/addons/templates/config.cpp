#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QDOUBLES(PREFIX,core), "A3_Characters_F"};
        author = AUTHOR;
        authors[] = { AUTHORS };
        authorUrl = "";
        VERSION_CONFIG;
    };
};

class A3A {
    #include "Templates.hpp"
};

class cfgVehicles {
	class SoldierGB;
	class I_G_Soldier_base_F : SoldierGB {
		genericNames = "ffp_finnish_names"; 	
	};
};

class cfgMarkerClasses
{
		class a3_antistasi_fdf_marker_flags
		{
			displayName="Custom flags";
		};
};

class cfgMarkers {
	class flag_Russia;
	class flag_Wagner : flag_Russia {
		name="Wagner flag";
		icon=QPATHTOFOLDER(data\wagner_logo_alter.paa);
		texture=QPATHTOFOLDER(data\wagner_flag.paa);
		color[]={1,1,1,1};
		markerClass="a3_antistasi_fdf_marker_flags";
	};
};