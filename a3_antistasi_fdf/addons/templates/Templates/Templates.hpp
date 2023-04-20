class Templates {
	
	class FDF_Base {
		requiredAddons[] = {"Swedish_Forces_Pack", "Finnish_Forces_Pack","rhsgref_main"};
		logo = "\ffp_config\data\faction_finland_co.paa";
		basepath = QPATHTOFOLDER(Templates\FDF); //the path to the folder the template is located in, this translates to "\x\A3AE\addons\templates\Templates\Vanilla"
	};
	
	class FDF_Summer : FDF_Base {
		side = "Reb"; //the side the faction defaults to, one of the following: Inv, Occ, Reb, Civ
		flagTexture = "\FFP_config\data\flag\fin_flag_ca.paa"; //path to an icon to be displayed in the selector
		name = "FDF"; //the name shown in the selector
		file = "SFP_REB_FDF_Summer"; //the template file name
		maps[] = {"vt7"}; //if this template should be prioritized on any maps (case sensetive to worldName)
		climate[] = {"arid", "temperate"}; //climate that the template is meant for
	};
	
	class RHS_AFRF_Temperate;
	class PMC_Wagner : RHS_AFRF_Temperate
    {
		//logo = "\templates\data\wagner_logo_alter.paa";
		//flagTexture = "templates\data\wagner_logo.paa";
		basepath = QPATHTOFOLDER(Templates\Wagner); //the path to the folder the template is located in, this translates to "\x\A3AE\addons\templates\Templates\Vanilla"
		name = "PMC Wagner";
        file = "RHS_AI_WAGNER_Temperate";
        climate[] = {"temperate","tropical","arctic"};
    };
};