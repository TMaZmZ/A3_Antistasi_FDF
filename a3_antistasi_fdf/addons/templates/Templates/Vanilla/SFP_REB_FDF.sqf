///////////////////////////
//   Rebel Information   //
///////////////////////////

["name", "FDF"] call _fnc_saveToTemplate;

["flag", "flag_finland_ca"] call _fnc_saveToTemplate;
["flagTexture", "\FFP_config\data\fin_flag_map_ca.paa"] call _fnc_saveToTemplate;
["flagMarkerType", "flag_FIN"] call _fnc_saveToTemplate;

["vehicleBasic", "sfp_dakota"] call _fnc_saveToTemplate;
["vehicleLightUnarmed", "ffp_rg32m"] call _fnc_saveToTemplate;
["vehicleLightArmed", "ffp_rg32m_gmg"] call _fnc_saveToTemplate;
["vehicleTruck", "ffp_bv206"] call _fnc_saveToTemplate;
["vehicleMedical", "ffp_van_ambulance"] call _fnc_saveToTemplate;
["vehicleLightAPC", "ffp_xa360"] call _fnc_saveToTemplate;
["vehicleAPC", "ffp_bmp2_atgm"] call fnc_saveTo_Template;
["vehicleIFV", "ffp_cv9030"] call _fnc_saveToTemplate;
["vehicleTank", "ffp_leopard2a6"] call _fnc_saveToTemplate;
["vehicleAT", "rhsgref_nat_uaz_spg9"] call _fnc_saveToTemplate;
["vehicleAA", "rhsgref_nat_ural_Zu23"] call _fnc_saveToTemplate;

["vehicleBoat", "ffp_gruppbat"] call _fnc_saveToTemplate;
["vehicleRepair", "ffp_susi_sa420_repair"] call _fnc_saveToTemplate;
["vehicleFuel", "ffp_susi_sa420_fuel"] call _fnc_saveToTemplate;
["vehicleAmmo", "ffp_susi_sa420_ammo"] call _fnc_saveToTemplate;

["vehicleHeli", "ffp_nh90_armed"] call _fnc_saveToTemplate;
["vehiclePlane", "ffp_f18c"] call _fnc_saveToTemplate;

["vehicleCivCar", "C_Offroad_01_F"] call _fnc_saveToTemplate;
["vehicleCivTruck", "sfp_van_hemglass"] call _fnc_saveToTemplate;
["vehicleCivHeli", "RHS_Mi8t_civilian"] call _fnc_saveToTemplate;
["vehicleCivBoat", "C_Rubberboat"] call _fnc_saveToTemplate;

["staticMG", "rhsgref_ins_DSHKM"] call _fnc_saveToTemplate;
["staticAT", "ffp_musti"] call _fnc_saveToTemplate;
["staticAA", "ffp_23itk95"] call _fnc_saveToTemplate;
["staticMortar", "rhsgref_nat_2b14"] call _fnc_saveToTemplate;
["staticMortarMagHE", "rhs_mag_3vo18_10"] call _fnc_saveToTemplate;
["staticMortarMagSmoke", "rhs_mag_d832du_10"] call _fnc_saveToTemplate;

["mineAT", "ffp_telamiina"] call _fnc_saveToTemplate;
["mineAPERS", "ffp_sm_65_98_ammo"] call _fnc_saveToTemplate;

["breachingExplosivesAPC", [["rhs_ec75_mag", 2], ["rhs_ec75_sand_mag", 2], ["rhs_ec200_mag", 1], ["rhs_ec200_sand_mag", 1], ["rhsusf_m112_mag", 1], ["DemoCharge_Remote_Mag", 1]]] call _fnc_saveToTemplate;
["breachingExplosivesTank", [["rhs_ec75_mag", 4], ["rhs_ec75_sand_mag", 4], ["rhs_ec200_mag", 2], ["rhs_ec200_sand_mag", 2], ["rhs_ec400_mag", 1], ["rhs_ec400_sand_mag", 1],["DemoCharge_Remote_Mag", 2], ["rhsusf_m112_mag", 2], ["rhsusf_m112x4_mag", 1], ["rhs_charge_M2tet_x2_mag", 1], ["SatchelCharge_Remote_Mag", 1]]] call _fnc_saveToTemplate;

///////////////////////////
//  Rebel Starting Gear  //
///////////////////////////

private _initialRebelEquipment = [
"ffp_rk62","ffp_pist2008","ffp_kvkk","CUP_hgun_flaregun",
["ffp_kes88", 50],
["rhs_ec200_mag", 10], ["rhs_ec75_mag", 10], ["ffp_telamiina_mag", 3], ["ffp_sm_65_98_ammo", 3],
"ffp_30Rnd_762x39","ffp_100Rnd_KVKK_mag","ffp_17rnd_9x9_mag","CUP_FlareWhite_265_M","ffp_kes88_mag","ffp_smoke_white","ffp_smoke_red","ffp_handgrenade_runko43","rhs_mag_an_m14_th3",
"B_FieldPack_cbr",
"rhs_chicom_khk","rhs_vest_commander","rhs_belt_ak4",
"rhssaf_zrak_rd7j","rhs_1PN138","ffp_vv2000_sidemount"];

if (A3A_hasTFAR) then {_initialRebelEquipment append ["tf_microdagr","tf_anprc154"]};
if (A3A_hasTFAR && startWithLongRangeRadio) then {_initialRebelEquipment append ["tf_anprc155","tf_anprc155_coyote"]};
if (A3A_hasTFARBeta) then {_initialRebelEquipment append ["TFAR_microdagr","TFAR_anprc154"]};
if (A3A_hasTFARBeta && startWithLongRangeRadio) then {_initialRebelEquipment append ["TFAR_anprc155","TFAR_anprc155_coyote"]};
["initialRebelEquipment", _initialRebelEquipment] call _fnc_saveToTemplate;

private _rebUniforms = [
    "ffp_m05w_uniform",
    "U_I_ParadeUniform_01_AAF_F"
];

private _dlcUniforms = [];

if (allowDLCEnoch) then {_dlcUniforms append [
    "U_I_ParadeUniform_01_AAF_decorated_F"
];
};

if (allowDLCExpansion) then {_dlcUniforms append [
    "U_I_C_Soldier_Bandit_4_F",
    "U_I_C_Soldier_Bandit_1_F",
    "U_I_C_Soldier_Bandit_2_F",
    "U_I_C_Soldier_Bandit_5_F",
    "U_I_C_Soldier_Bandit_3_F",
    "U_I_C_Soldier_Para_2_F",
    "U_I_C_Soldier_Para_3_F",
    "U_I_C_Soldier_Para_5_F",
    "U_I_C_Soldier_Para_4_F",
    "U_I_C_Soldier_Para_1_F",
    "U_I_C_Soldier_Camo_F"
];
};


["uniforms", _rebUniforms + _dlcUniforms] call _fnc_saveToTemplate;

["headgear", [
    "H_Booniehat_khk_hs",
    "H_Booniehat_oli",
    "H_Cap_oli_hs",
    "H_Cap_blk",
	"H_Shemag_olive_hs",
    "ffp_m05w_helmet_peltor",
	"ffp_m05un_helmet",
	"ffp_m05instructor_helmet_glasses"
  
]] call _fnc_saveToTemplate;

/////////////////////
///  Identities   ///
/////////////////////

["faces", ["LivonianHead_6","Sturrock","WhiteHead_01","WhiteHead_02","WhiteHead_03",
"WhiteHead_05","WhiteHead_07","WhiteHead_08","WhiteHead_09","WhiteHead_10",
"WhiteHead_12","WhiteHead_13","WhiteHead_14","WhiteHead_15","WhiteHead_16",
"WhiteHead_17","WhiteHead_19","WhiteHead_20","WhiteHead_21"]] call _fnc_saveToTemplate;
["voices", ["RHS_Male01CZ","RHS_Male02CZ","RHS_Male03CZ","RHS_Male04CZ","RHS_Male05CZ"]] call _fnc_saveToTemplate;

//////////////////////////
//       Loadouts       //
//////////////////////////

private _loadoutData = call _fnc_createLoadoutData;
_loadoutData set ["maps", ["ItemMap"]];
_loadoutData set ["watches", ["ItemWatch"]];
_loadoutData set ["compasses", ["ItemCompass"]];
_loadoutData set ["binoculars", ["Binocular"]];

_loadoutData set ["uniforms", _rebUniforms];

_loadoutData set ["items_medical_basic", ["BASIC"] call A3A_fnc_itemset_medicalSupplies];
_loadoutData set ["items_medical_standard", ["STANDARD"] call A3A_fnc_itemset_medicalSupplies];
_loadoutData set ["items_medical_medic", ["MEDIC"] call A3A_fnc_itemset_medicalSupplies];
_loadoutData set ["items_miscEssentials", [] call A3A_fnc_itemset_miscEssentials];

////////////////////////
//  Rebel Unit Types  //
///////////////////////.

private _squadLeaderTemplate = {
    ["uniforms"] call _fnc_setUniform;

    ["items_medical_standard"] call _fnc_addItemSet;
    ["items_miscEssentials"] call _fnc_addItemSet;

    ["maps"] call _fnc_addMap;
    ["watches"] call _fnc_addWatch;
    ["compasses"] call _fnc_addCompass;
    ["binoculars"] call _fnc_addBinoculars;
};

private _riflemanTemplate = {
    ["uniforms"] call _fnc_setUniform;

    ["items_medical_standard"] call _fnc_addItemSet;
    ["items_miscEssentials"] call _fnc_addItemSet;

    ["maps"] call _fnc_addMap;
    ["watches"] call _fnc_addWatch;
    ["compasses"] call _fnc_addCompass;
};

private _prefix = "militia";
private _unitTypes = [
    ["Petros", _squadLeaderTemplate],
    ["SquadLeader", _squadLeaderTemplate],
    ["Rifleman", _riflemanTemplate],
    ["staticCrew", _riflemanTemplate],
    ["Medic", _riflemanTemplate, [["medic", true]]],
    ["Engineer", _riflemanTemplate, [["engineer", true]]],
    ["ExplosivesExpert", _riflemanTemplate, [["explosiveSpecialist", true]]],
    ["Grenadier", _riflemanTemplate],
    ["LAT", _riflemanTemplate],
    ["AT", _riflemanTemplate],
    ["AA", _riflemanTemplate],
    ["MachineGunner", _riflemanTemplate],
    ["Marksman", _riflemanTemplate],
    ["Sniper", _riflemanTemplate],
    ["Unarmed", _riflemanTemplate]
];

[_prefix, _unitTypes, _loadoutData] call _fnc_generateAndSaveUnitsToTemplate;
