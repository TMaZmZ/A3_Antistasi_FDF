class Templates {

	class FDF_Base
    {
        basepath = QPATHTOFOLDER(Templates\FDF); //the path to the folder the template is located in, this translates to "\x\A3AE\addons\templates\Templates\Vanilla"
        side = "Reb"; //the side the faction defaults to, one of the following: Inv, Occ, Reb, Civ
        flagTexture = "\FFP_config\data\flag\fin_flag_ca.paa"; //path to an icon to be displayed in the selector
       
    };
	
	class FDF_Summer : FDF_Base
	{
		name = "FDF Summer"; //the name shown in the selector
        file = "SFP_REB_FDF_Summer"; //the template file name
        maps[] = {}; //if this template should be prioritized on any maps (case sensetive to worldName)
        climate[] = {"arid", "temperate"}; //climate that the template is meant for
	};
	
	/*
	class FDF_Winter : FDF_Base //Placeholder
	{
		name = "FDF Winter"; //the name shown in the selector
        file = "SFP_REB_FDF_Winter"; //the template file name
        maps[] = {}; //if this template should be prioritized on any maps (case sensetive to worldName)
        climate[] = {"arctic"}; //climate that the template is meant for
	};
	*/
};
