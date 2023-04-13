class CfgPatches
{
	class ffp_rifles
	{
		units[]=
		{
			"RK_Ammo_box",
			"RK_Weap_box"
		};
		weapons[]=
		{
			"ffp_rk95",
			"ffp_rk95_aimpoint2004",
			"ffp_rk95_aimpoint2009",
			"ffp_rk95_ta11",
			"ffp_rk95_aimpoint_sd",
			"ffp_rk62",
			"ffp_rk62_vv2000"
		};
		requiredVersion=0.5;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"Finnish_Forces_Pack"
		};
	};
};
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class asdg_MuzzleSlot_762R;
class SlotInfo;
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgVehicles
{
	class NATO_Box_Base;
	class RK_Ammo_box: NATO_Box_Base
	{
		scope=2;
		vehicleClass="Ammo";
		author="$STR_FFPMod_Author";
		displayname="$STR_RK_Ammo_box";
		descriptionshort="$STR_desc_RK_Ammo_box";
		displaynameshort="$STR_s_RK_Ammo_box";
		dlc="ffp";
		model="\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon="iconCrateWpns";
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
			class _xx_fin_30Rnd_rk_mag
			{
				name="ffp_30Rnd_762x39";
				count=40;
			};
			class _xx_fin_30Rnd_rk_mag_tracer
			{
				name="ffp_30Rnd_762x39_tracer";
				count=30;
			};
			class _xx_fin_30Rnd_rk_mag_bis
			{
				name="30Rnd_762x39_Mag_F";
				count=30;
			};
			class _xx_fin_30Rnd_rk_mag_bis_tracer
			{
				name="30Rnd_762x39_Mag_Green_F";
				count=30;
			};
		};
	};
	class RK_Weap_box: NATO_Box_Base
	{
		scope=2;
		vehicleClass="Ammo";
		author="$STR_FFPMod_Author";
		displayname="$STR_RK_Weap_box";
		descriptionshort="$STR_desc_RK_Weap_box";
		displaynameshort="$STR_s_RK_Weap_box";
		dlc="ffp";
		model="\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon="iconCrateWpns";
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
			class _xx_fin_rk95
			{
				name="ffp_rk95";
				count=20;
			};
			class _xx_fin_Rk62
			{
				name="ffp_Rk62";
				count=20;
			};
		};
	};
};
class CfgMovesBasic
{
	class Default;
	class DefaultDie;
	class ManActions
	{
		GestureReloadRK="GestureReloadRK";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			GestureReloadRK[]=
			{
				"GestureReloadRK",
				"Gesture"
			};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			GestureReloadRK[]=
			{
				"GestureReloadRK_Prone",
				"Gesture"
			};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadRK[]=
			{
				"GestureReloadRK_Context",
				"Gesture"
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadRK[]=
			{
				"GestureReloadRK_Context",
				"Gesture"
			};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadRK[]=
			{
				"GestureReloadRK_Context",
				"Gesture"
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	skeletonName="OFP2_ManSkeleton";
	class States
	{
		class GestureReloadRK: Default
		{
			file="ffp_weapons\fin_rk_rifles\anim\reload\RK_Reload_v4.rtm";
			speed=0.34;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			canPullTrigger=0;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,1,1};
			rightHandIKEnd=1;
			leftHandIKBeg=0;
			leftHandIKCurve[]={0,0,1,0};
			leftHandIKEnd=0;
		};
		class GestureReloadRK_prone: Default
		{
			file="ffp_weapons\fin_rk_rifles\anim\reload\RK_Reload_prone_v1.rtm";
			speed=0.34;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			canPullTrigger=0;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,1,1};
			rightHandIKEnd=1;
			leftHandIKBeg=0;
			leftHandIKCurve[]={0,0,1,0};
			leftHandIKEnd=0;
		};
		class GestureReloadRK_Context: GestureReloadRK
		{
			mask="handsWeapon_context";
		};
	};
};
class cfgRecoils
{
	class Default;
	class recoil_default: Default
	{
		muzzleOuter[]={0.30000001,1,0.30000001,0.2};
		muzzleInner[]={0,0,0.1,0.1};
		kickBack[]={0.029999999,0.059999999};
		permanent=0.1;
		temporary=0.0099999998;
	};
	class recoil_rk62: recoil_default
	{
		muzzleOuter[]={0.40000001,1,0.40000001,0.30000001};
		kickBack[]={0.039999999,0.07};
		permanent=0.12;
		temporary=0.015;
	};
	class recoil_rk95: recoil_default
	{
		muzzleOuter[]={0.40000001,1,0.40000001,0.30000001};
		kickBack[]={0.039999999,0.07};
		permanent=0.12;
		temporary=0.015;
	};
};
class CfgSoundShaders
{
	class fin_RK_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"ffp_weapons\fin_rk_rifles\sounds\rk_slide.wav",
				1
			}
		};
		volume=0.5;
		range=5;
	};
	class fin_RK62_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ffp_weapons\fin_rk_rifles\sounds\RK62\shots_close\rk62_1.wav",
				1
			},
			
			{
				"ffp_weapons\fin_rk_rifles\sounds\RK62\shots_close\rk62_2.wav",
				1
			},
			
			{
				"ffp_weapons\fin_rk_rifles\sounds\RK62\shots_close\rk62_3.wav",
				1
			}
		};
		volume=2;
		range=175;
		rangeCurve="closeShotCurve";
	};
	class fin_RK62_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ffp_weapons\fin_rk_rifles\sounds\RK62\shots_mid\rk_mid_1.wav",
				1
			},
			
			{
				"ffp_weapons\fin_rk_rifles\sounds\RK62\shots_mid\rk_mid_2.wav",
				1
			},
			
			{
				"ffp_weapons\fin_rk_rifles\sounds\RK62\shots_mid\rk_mid_3.wav",
				1
			}
		};
		volume=3;
		range=3000;
		rangeCurve[]=
		{
			{0,0},
			{300,1},
			{500,0.75},
			{1500,0.25},
			{3000,0}
		};
	};
	class fin_RK62_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ffp_weapons\fin_rk_rifles\sounds\RK62\shots_distant\rk_dist_1.wav",
				1
			},
			
			{
				"ffp_weapons\fin_rk_rifles\sounds\RK62\shots_distant\rk_dist_2.wav",
				1
			},
			
			{
				"ffp_weapons\fin_rk_rifles\sounds\RK62\shots_distant\rk_dist_3.wav",
				1
			}
		};
		volume=6;
		range=3000;
		rangeCurve[]=
		{
			{0,0},
			{300,0},
			{500,0.25},
			{1500,1},
			{3000,1}
		};
	};
	class fin_RK95_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ffp_weapons\fin_rk_rifles\sounds\RK95\shots_close\rk95_1.wav",
				1
			},
			
			{
				"ffp_weapons\fin_rk_rifles\sounds\RK95\shots_close\rk95_2.wav",
				1
			}
		};
		volume=2;
		range=175;
		rangeCurve="closeShotCurve";
	};
	class fin_RK95_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ffp_weapons\fin_rk_rifles\sounds\RK62\shots_mid\rk_mid_1.wav",
				1
			},
			
			{
				"ffp_weapons\fin_rk_rifles\sounds\RK62\shots_mid\rk_mid_2.wav",
				1
			},
			
			{
				"ffp_weapons\fin_rk_rifles\sounds\RK62\shots_mid\rk_mid_3.wav",
				1
			}
		};
		volume=4;
		range=3000;
		rangeCurve[]=
		{
			{0,0},
			{300,1},
			{500,0.75},
			{1500,0.25},
			{3000,0}
		};
	};
	class fin_RK95_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ffp_weapons\fin_rk_rifles\sounds\RK62\shots_distant\rk_dist_1.wav",
				1
			},
			
			{
				"ffp_weapons\fin_rk_rifles\sounds\RK62\shots_distant\rk_dist_2.wav",
				1
			},
			
			{
				"ffp_weapons\fin_rk_rifles\sounds\RK62\shots_distant\rk_dist_3.wav",
				1
			}
		};
		volume=6;
		range=3000;
		rangeCurve[]=
		{
			{0,0},
			{300,0},
			{500,0.25},
			{1500,1},
			{3000,1}
		};
	};
	class fin_RK_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"\a3\sounds_f\arsenal\weapons\Rifles\TRG20\TRG20_tailInterior.wss",
				1
			}
		};
		volume="interior";
		range=75;
		limitation=0;
	};
	class fin_RK_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"\a3\sounds_f\arsenal\weapons\Rifles\TRG20\TRG20_tailTrees.wss",
				1
			}
		};
		volume="(1 - interior / 1.4)*trees / 3";
		range=300;
		limitation=1;
	};
	class fin_RK_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"\a3\sounds_f\arsenal\weapons\Rifles\TRG20\TRG20_tailForest.wss",
				1
			}
		};
		volume="(1 - interior / 1.4)*forest / 3";
		range=300;
		limitation=1;
	};
	class fin_RK_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"\a3\sounds_f\arsenal\weapons\Rifles\TRG20\TRG20_tailMeadows.wss",
				1
			}
		};
		volume="(1 - interior / 1.4)*(meadows / 2 max sea / 2) / 3";
		range=1000;
		limitation=1;
	};
	class fin_RK_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"\a3\sounds_f\arsenal\weapons\Rifles\TRG20\TRG20_tailHouses.wss",
				1
			}
		};
		volume="(1 - interior / 1.4)*houses / 3";
		range=300;
		limitation=1;
	};
};
class CfgSoundSets
{
	class fin_RK62_Shot_SoundSet
	{
		soundShaders[]=
		{
			"fin_RK_Closure_SoundShader",
			"fin_RK62_closeShot_SoundShader",
			"fin_RK62_midShot_SoundShader",
			"fin_RK62_distShot_SoundShader"
		};
		volumeFactor=1.35;
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="fin_RK_Shot3DProcessingType";
		distanceFilter="weaponShotDistanceFreqAttenuationFilter";
		spatial=1;
		doppler=0;
		loop=0;
		obstructionFactor=0.30000001;
		occlusionFactor=0.5;
	};
	class fin_RK95_Shot_SoundSet
	{
		soundShaders[]=
		{
			"fin_RK_Closure_SoundShader",
			"fin_RK95_closeShot_SoundShader",
			"fin_RK95_midShot_SoundShader",
			"fin_RK95_distShot_SoundShader"
		};
		volumeFactor=1.35;
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="fin_RK_Shot3DProcessingType";
		distanceFilter="weaponShotDistanceFreqAttenuationFilter";
		spatial=1;
		doppler=0;
		loop=0;
		obstructionFactor=0.30000001;
		occlusionFactor=0.5;
	};
	class fin_RK_Tail_SoundSet
	{
		soundShaders[]=
		{
			"fin_RK_tailInterior_SoundShader",
			"fin_RK_tailTrees_SoundShader",
			"fin_RK_tailForest_SoundShader",
			"fin_RK_tailMeadows_SoundShader",
			"fin_RK_tailHouses_SoundShader"
		};
		soundShadersLimit=2;
		volumeFactor=1;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizer=1;
		sound3DProcessingType="fin_RK_ShotTail3DProcessingType";
		distanceFilter="weaponShotDistanceFreqAttenuationFilter";
		spatial=1;
		doppler=0;
		loop=0;
		obstructionFactor=0;
		occlusionFactor=0.30000001;
	};
};
class cfgSound3DProcessors
{
	class fin_RK_Shot3DProcessingType
	{
		type="panner";
		innerRange=0;
		range=5;
		rangeCurve="LinearCurve";
	};
	class fin_RK_ShotTail3DProcessingType
	{
		type="panner";
		innerRange=5;
		range=160;
		rangeCurve="InverseSquare1Curve";
	};
};
class cfgDistanceFilters
{
	class fin_RK_ShotDistanceFreqAttenuationFilter
	{
		type="lowPassFilter";
		minCutoffFrequency=300;
		qFactor=1.5;
		innerRange=10;
		range=2000;
		powerFactor=28;
	};
	class fin_RK_ShotTailDistanceFreqAttenuationFilter
	{
		type="lowPassFilter";
		minCutoffFrequency=450;
		qFactor=1.5;
		innerRange=10;
		range=1400;
		powerFactor=28;
	};
};
class CfgWeapons
{
	class Rifle_Base_F;
	class CowsSlot;
	class fin_rk_rifle_base: Rifle_Base_F
	{
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		reloadAction="GestureReloadAKM";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"ffp_weapons\fin_rk_rifles\anim\RK_Handanim_v1.rtm"
		};
		selectionFireAnim="zasleh";
		magazines[]=
		{
			"ffp_30Rnd_762x39",
			"ffp_30Rnd_762x39_tracer",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_Tracer_F",
			"30Rnd_762x39_Mag_Green_F",
			"30Rnd_762x39_Mag_Tracer_Green_F"
		};
		magazineWell[]=
		{
			"AK_762x39",
			"CBA_762x39_AK"
		};
		deployedPivot="deploypoint";
		hasBipod=0;
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		inertia=0.60000002;
		aimTransitionSpeed=0.89999998;
		maxZeroing=1200;
		htMin=12;
		htMax=800;
		ACE_Overheating_Dispersion=1;
		ACE_Overheating_SlowdownFactor=1;
		ACE_Overheating_MRBS=3000;
		ACE_barrelTwist=240;
		ACE_twistDirection=1;
		ACE_barrelLength=420;
		jsrs_soundeffect="JSRS2_Distance_Effects_M14";
		drySound[]=
		{
			"ffp_weapons\fin_rk_rifles\sounds\RK_Dry.wav",
			"db-5",
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"ffp_weapons\fin_rk_rifles\sounds\rk_lataus.wav",
			1,
			1,
			30
		};
		changeFiremodeSound[]=
		{
			"ffp_weapons\fin_rk_rifles\sounds\RK_firemode.wav",
			0.56234133,
			1,
			20
		};
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.50118721,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.50118721,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.50118721,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.50118721,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.39810717,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.39810717,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.39810717,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.39810717,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.25118864,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.25118864,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.25118864,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.25118864,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"fullauto_medium",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"fin_RK62_Shot_SoundSet",
					"fin_RK_Tail_SoundSet"
				};
			};
			reloadTime=0.096000001;
			dispersion=0.00092999998;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.039999999;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"fin_RK62_Shot_SoundSet",
					"fin_RK_Tail_SoundSet"
				};
			};
			reloadTime=0.096000001;
			dispersion=0.00092999998;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=550;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.1;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
	};
	class ffp_rk62: fin_rk_rifle_base
	{
		scope=2;
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_Rk62";
		descriptionshort="$STR_desc_ffp_Rk62";
		displaynameshort="$STR_s_ffp_Rk62";
		dlc="ffp";
		model="ffp_weapons\fin_rk_rifles\rk62.p3d";
		picture="\ffp_weapons\fin_rk_rifles\data\UI\gear_rk62_ca.paa";
		class Library
		{
			libTextDesc="Standard issue assault rifle of Finnish Defence Forces, Rk 62 (assault rifle 62) is chambered in 7.62x39mm";
		};
		discreteDistance[]={150,100,200,300,400,500,600};
		discreteDistanceInitIndex=0;
		inertia=0.5;
		recoil="recoil_rk62";
		baseweapon="ffp_rk62";
		class WeaponSlotsInfo
		{
			mass=77.160004;
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.60546875,0.21484375};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint="Center";
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"ffp_vv2000_sidemount"
				};
			};
		};
	};
	class ffp_rk62_vv2000: ffp_rk62
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ffp_vv2000_sidemount";
			};
		};
	};
	class ffp_rk95_base: fin_rk_rifle_base
	{
		scopeArsenal=0;
		scopeCurator=0;
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_Rk95";
		descriptionshort="$STR_desc_ffp_Rk95";
		displaynameshort="$STR_s_ffp_Rk95";
		dlc="ffp";
		model="ffp_weapons\fin_rk_rifles\rk95.p3d";
		picture="\ffp_weapons\fin_rk_rifles\data\UI\gear_rk95_ca.paa";
		class Library
		{
			libTextDesc="Standard issue assault rifle of Finnish Defence Forces, Rk 95 TP (assault rifle 95 folding stock) is chambered in 7.62x39mm";
		};
		discreteDistance[]={150,300};
		discreteDistanceInitIndex=0;
		inertia=0.5;
		recoil="recoil_rk95";
		class WeaponSlotsInfo
		{
			mass=81.57;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[]={0.54980469,0.25390625};
				iconScale=0.15000001;
				iconPinpoint="Center";
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.2,0.41999999};
				iconScale=0.2;
			};
		};
		class Single: Single
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"fin_RK95_Shot_SoundSet",
					"fin_RK_Tail_SoundSet"
				};
			};
		};
		class FullAuto: FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"fin_RK95_Shot_SoundSet",
					"fin_RK_Tail_SoundSet"
				};
			};
		};
	};
	class ffp_rk95: ffp_rk95_base
	{
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_Rk95";
		descriptionshort="$STR_desc_ffp_Rk95";
		displaynameshort="$STR_s_ffp_Rk95";
		dlc="ffp";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		baseweapon="ffp_rk95";
	};
	class ffp_rk95_ta11: ffp_rk95
	{
		scope=2;
		scopeCurator=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ffp_TA11_3d";
			};
		};
	};
	class ffp_rk95_aimpoint2009: ffp_rk95
	{
		scope=2;
		scopeCurator=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ffp_pp09";
			};
		};
	};
	class ffp_rk95_aimpoint2004: ffp_rk95
	{
		scope=2;
		scopeCurator=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ffp_pp04";
			};
		};
	};
	class ffp_rk95_aimpoint_sd: ffp_rk95
	{
		scope=2;
		scopeCurator=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ffp_pp09";
			};
			class MuzzleSlot
			{
				slot="MuzzleSlot";
				item="muzzle_snds_B";
			};
		};
	};
};
