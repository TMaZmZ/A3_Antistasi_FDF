/////////////////////////
//   Rebel Information   //
///////////////////////////

// Items to be added to arsenal as war level increases
private _warLevelUpgrades = [
	[], // Level 1 - should be left to default equipment
	[["ffp_rk62",-1], ["ffp_kvkk",-1],["ffp_30Rnd_762x39",-1], ["ffp_100Rnd_KVKK_mag",-1], ["ffp_m05_backpack_small",-1]], // Level 2
	[["ffp_telamiina_mag", -1], ["ffp_66kes12",-1],["rhs_1PN138",-1], ["murshun_cigs_lighter",-1], ["murshun_cigs_cigpack",-1], ["ffp_m05w_helmet_peltor",-1]], // Level 3
	[["ffp_rk95",-1],["ffp_pp09",-1], ["ffp_kk_pkm",-1], ["ffp_100Rnd_762x54_PKM",-1], ["ffp_100Rnd_762x54_PKM_tracer",-1], ["ffp_66kes12_rak",-1]], // Level 4
	[["ffp_TKiv2000",-1], ["ffp_optic_TKiv2000",-1], ["ffp_5Rnd_TKiv2000_mag",-1], ["V_PlateCarrier2_rgr_noflag_F",-1], ["Rangefinder",-1]], // Level 5
	[["ffp_ta11_2d",-1], ["sfp_ghillie_uniform",-1], ["rhsusf_ANPVS_15",-1]], // Level 6
	[["sfp_ag90_base",10], ["sfp_10Rnd_127x99_ag90",50], ["optic_LRPS",-1], ["ffp_nlaw",-1], ["ffp_nlaw_mag",-1], ["ffp_orbiter_bag",6], ["ffp_orbiter_ramp_bag",6], ["i_uavterminal",-1], ["V_CarrierRigKBT_01_heavy_Olive_F",-1]], // Level 7
	[["ffp_ito15",-1], ["ffp_ito15_mag",-1]], // Level 8
	[], // Level 9
	[] // Level 10
];
//Spawn custom functions
0 spawn a3_antistasi_fdf_functions_fnc_initVarCommon; // Custom function to changes faction colors
_warLevelUpgrades spawn a3_antistasi_fdf_functions_fnc_WarLevelUpgrades;

//Original file content
["name", "FDF"] call _fnc_saveToTemplate;

["flag", "flag_fin_map_ca"] call _fnc_saveToTemplate;
["flagTexture", "\FFP_config\data\flag\fin_flag_map_ca.paa"] call _fnc_saveToTemplate;
["flagMarkerType", "flag_FIN"] call _fnc_saveToTemplate;

["vehicleBasic", "sfp_dakota"] call _fnc_saveToTemplate;
["vehicleLightUnarmed", "rhsgref_cdf_reg_uaz_open"] call _fnc_saveToTemplate;
//["vehicleLightUnarmed", "ffp_rg32m"] call _fnc_saveToTemplate;
["vehicleLightArmed", "rhsgref_nat_uaz_dshkm"] call _fnc_saveToTemplate;
["vehicleTruck", "ffp_bv206"] call _fnc_saveToTemplate;
["vehicleAT", "ffp_bmp2_atgm"] call _fnc_saveToTemplate;
["vehicleAA", "rhsgref_nat_ural_Zu23"] call _fnc_saveToTemplate;

["vehicleBoat", "ffp_gruppbat"] call _fnc_saveToTemplate;
["vehicleRepair", "ffp_susi_sa420_repair"] call _fnc_saveToTemplate;

["vehiclePlane", "ffp_f18c"] call _fnc_saveToTemplate;

["vehicleCivCar", "C_Offroad_01_F"] call _fnc_saveToTemplate;
["vehicleCivTruck", "ffp_susi_sa420"] call _fnc_saveToTemplate;
["vehicleCivHeli", "RHS_Mi8t_civilian"] call _fnc_saveToTemplate;
["vehicleCivBoat", "C_Rubberboat"] call _fnc_saveToTemplate;

["staticMG", "rhsgref_ins_DSHKM"] call _fnc_saveToTemplate;
["staticAT", "ffp_pstohj83"] call _fnc_saveToTemplate;
["staticAA", "ffp_23itk61"] call _fnc_saveToTemplate;
["staticMortar", "ffp_122h63"] call _fnc_saveToTemplate;
["staticMortarMagHE", "32Rnd_155mm_Mo_shells"] call _fnc_saveToTemplate;
//["staticMortar", "rhsgref_nat_2b14"] call _fnc_saveToTemplate;
//["staticMortarMagHE", "rhs_mag_3vo18_10"] call _fnc_saveToTemplate;
//["staticMortarMagSmoke", "rhs_mag_d832du_10"] call _fnc_saveToTemplate;

["mineAT", "ffp_telamiina_mag"] call _fnc_saveToTemplate;
["mineAPERS", "ffp_sm_65_98_mag"] call _fnc_saveToTemplate;

["breachingExplosivesAPC", [["rhs_ec75_mag", 2], ["rhs_ec75_sand_mag", 2], ["rhs_ec200_mag", 1], ["rhs_ec200_sand_mag", 1], ["rhsusf_m112_mag", 1], ["DemoCharge_Remote_Mag", 1]]] call _fnc_saveToTemplate;
["breachingExplosivesTank", [["rhs_ec75_mag", 4], ["rhs_ec75_sand_mag", 4], ["rhs_ec200_mag", 2], ["rhs_ec200_sand_mag", 2], ["rhs_ec400_mag", 1], ["rhs_ec400_sand_mag", 1],["DemoCharge_Remote_Mag", 2], ["rhsusf_m112_mag", 2], ["rhsusf_m112x4_mag", 1], ["rhs_charge_M2tet_x2_mag", 1], ["SatchelCharge_Remote_Mag", 1]]] call _fnc_saveToTemplate;

///////////////////////////
//  Rebel Starting Gear  //
///////////////////////////

private _initialRebelEquipment = [
"smg_02_f","sgun_huntershotgun_01_f","ffp_pist2008","sfp_signpist50",
"ffp_kes88",
"rhs_ec200_mag", "rhs_ec75_mag", "ffp_sm_65_98_mag", 
"30Rnd_9x21_mag_smg_02","2Rnd_12gauge_slug","ffp_17rnd_9x9_mag","sfp_1Rnd_lyspatron7_mag","ffp_kes88_mag","ffp_smoke_white","ffp_smoke_red","ffp_handgrenade_runko43","rhs_mag_an_m14_th3",
"B_FieldPack_cbr", "murshun_cigs_cig0_nv", "murshun_cigs_matches", "Armband_Blue_Large_NVG", "Armband_Green_Large_NVG"
"rhs_chicom_khk","rhs_vest_commander","rhs_belt_ak4",
"rhssaf_zrak_rd7j","ffp_vv2000_sidemount"];

if (A3A_hasTFAR) then {_initialRebelEquipment append ["tf_microdagr","tf_anprc154"]};
if (A3A_hasTFAR && startWithLongRangeRadio) then {_initialRebelEquipment append ["tf_anprc155","tf_anprc155_coyote"]};
if (A3A_hasTFARBeta) then {_initialRebelEquipment append ["TFAR_microdagr","TFAR_anprc154"]};
if (A3A_hasTFARBeta && startWithLongRangeRadio) then {_initialRebelEquipment append ["TFAR_anprc155","TFAR_anprc155_coyote"]};
["initialRebelEquipment", _initialRebelEquipment] call _fnc_saveToTemplate;

private _rebUniforms = [
    "ffp_m05w_uniform"
  
];

private _dlcUniforms = [];

if (allowDLCEnoch) then {_dlcUniforms append [
  
];
};

if (allowDLCExpansion) then {_dlcUniforms append [
    
];
};


["uniforms", _rebUniforms + _dlcUniforms] call _fnc_saveToTemplate;

["headgear", [
    "H_Booniehat_khk_hs",
    "H_Booniehat_oli",
    "H_Cap_oli_hs",
    "H_Cap_blk",
	"H_Shemag_olive_hs",
    "ffp_m05w_helmet_peltor"
	
  
]] call _fnc_saveToTemplate;

/////////////////////
///  Identities   ///
/////////////////////

["faces", ["LivonianHead_6","Sturrock","WhiteHead_01","WhiteHead_02","WhiteHead_03",
"WhiteHead_05","WhiteHead_07","WhiteHead_08","WhiteHead_09","WhiteHead_10",
"WhiteHead_12","WhiteHead_13","WhiteHead_14","WhiteHead_15","WhiteHead_16",
"WhiteHead_17","WhiteHead_19","WhiteHead_20","WhiteHead_21"]] call _fnc_saveToTemplate;
["voices", ["Male01FIN_FDF","Male02FIN_FDF","Male03FIN_FDF","Male04FIN_FDF","Male05FIN_FDF"]] call _fnc_saveToTemplate;

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
