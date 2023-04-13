class Templates {
    class Vanilla_Base; //import Vanilla_Base from A3A to use with defining a new vanilla template

	class FDF : Vanilla_Base
    {
        basepath = QPATHTOFOLDER(Templates\Vanilla); //the path to the folder the template is located in, this translates to "\x\A3AE\addons\templates\Templates\Vanilla"
        side = "Reb"; //the side the faction defaults to, one of the following: Inv, Occ, Reb, Civ
        flagTexture = "\FFP_config\data\flag\fin_flag_ca.paa"; //path to an icon to be displayed in the selector
        name = "Finnish Defense Forces"; //the name shown in the selector
        file = "SFP_REB_FDF"; //the template file name
        maps[] = {}; //if this template should be prioritized on any maps (case sensetive to worldName)
        climate[] = {"arid", "arctic", "temperate"}; //climate that the template is meant for
    };
};
