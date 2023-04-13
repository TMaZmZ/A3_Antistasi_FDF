class DefaultEventhandlers;
class CfgPatches
{
	class ffp_weapons
	{
		units[]={};
		weapons[]=
		{
			"ffp_kes88",
			"ffp_nlaw",
			"ffp_kk_pkm",
			"ffp_Apilas",
			"ffp_66kes12",
			"ffp_66kes12_rak",
			"ffp_KVKK"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Soft_F",
			"A3_Sounds_F"
		};
		magazines[]=
		{
			"ffp_nlaw_mag",
			"ffp_apilas_mag",
			"ffp_100Rnd_762x54_pkm",
			"ffp_100Rnd_762x54_pkm_Tracer",
			"ffp_100Rnd_KVKK_mag",
			"ffp_100Rnd_KVKK_mag_Tracer"
		};
		ammo[]=
		{
			"ffp_basic_penetrator",
			"ffp_apilas_R",
			"ffp_apilas_heat_penetrator",
			"ffp_kes_base",
			"ffp_66kes88_heat_penetrator",
			"ffp_66kes12_hedp_penetrator",
			"ffp_66kes12_heat_penetrator",
			"ffp_66kes88_R",
			"ffp_66kes12_R",
			"ffp_66kes12_rak_R",
			"ffp_B_762_BulletBase",
			"ffp_B_762x54mmR_Ball",
			"ffp_B_762x39_Ball",
			"ffp_B_762x39_Rk"
		};
	};
	class ffp_weapons_grenades
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
	class ffp_kk_pkm
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class asdg_OpticRail1913;
class asdg_OpticRail1913_long;
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CBA_DisposableLaunchers
{
	ffp_Apilas_Loaded[]=
	{
		"ffp_Apilas",
		"ffp_Apilas_Used"
	};
	ffp_kes88_Loaded[]=
	{
		"ffp_kes88",
		"ffp_kes88_Used"
	};
	ffp_66kes12_Loaded[]=
	{
		"ffp_66kes12",
		"ffp_66kes12_Used"
	};
	ffp_66kes12_rak_Loaded[]=
	{
		"ffp_66kes12_rak",
		"ffp_66kes12_Used"
	};
};
class cfgRecoils
{
	class recoil_default;
	class recoil_single_apilas
	{
		muzzleOuter[]={0.1,1,0.40000001,0.30000001};
		kickBack[]={0.2,0.40000001};
		permanent=0.1;
		temporary=0.1;
	};
	class recoil_pkm: recoil_default
	{
		muzzleOuter[]={0.5,1.8,0.5,0.5};
		kickBack[]={0.059999999,0.07};
		temporary=0.0080000004;
	};
	class ffp_recoil_KVKK: recoil_default
	{
		muzzleOuter[]={0.40000001,1,0.40000001,0.30000001};
		kickBack[]={0.039999999,0.07};
		permanent=0.12;
		temporary=0.015;
	};
};
class CfgSoundShaders
{
	class ffp_66KES88_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ffp_weapons\66kesXX\sound\kes_shot_close_1.wav",
				1
			}
		};
		volume=1.5;
		range=90;
		rangeCurve="CannonCloseShotCurve";
	};
	class ffp_66KES88_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ffp_weapons\66kesXX\sound\kes_shot_mid_1.wav",
				1
			}
		};
		volume=2.5;
		range=350;
		rangeCurve="CannonMidShotCurve";
	};
	class ffp_66KES88_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ffp_weapons\66kesXX\sound\kes_shot_dist_1.wav",
				1
			}
		};
		volume=5.5;
		range=3000;
		rangeCurve[]=
		{
			{0,0},
			{100,0},
			{300,1},
			{3000,1}
		};
	};
	class ffp_66KES12_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ffp_weapons\66kesXX\sound\kes_shot_close_1.wav",
				1
			}
		};
		volume=1;
		range=90;
		rangeCurve="CannonCloseShotCurve";
	};
	class ffp_66KES12_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ffp_weapons\66kesXX\sound\kes_shot_mid_1.wav",
				1
			}
		};
		volume=3;
		range=350;
		rangeCurve="CannonMidShotCurve";
	};
	class ffp_66KES12_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ffp_weapons\66kesXX\sound\kes_shot_dist_1.wav",
				1
			}
		};
		volume=5.5;
		range=3000;
		rangeCurve[]=
		{
			{0,0},
			{100,0},
			{300,1},
			{3000,1}
		};
	};
	class Launcher_RPG32_tailInterior_SoundShader;
	class Launcher_RPG32_tailTrees_SoundShader;
	class Launcher_RPG32_tailForest_SoundShader;
	class Launcher_RPG32_tailMeadows_SoundShader;
	class Launcher_RPG32_tailHouses_SoundShader;
	class ffp_66KES88_tailInterior_SoundShader: Launcher_RPG32_tailInterior_SoundShader
	{
	};
	class ffp_66KES88_tailTrees_SoundShader: Launcher_RPG32_tailTrees_SoundShader
	{
	};
	class ffp_66KES88_tailForest_SoundShader: Launcher_RPG32_tailForest_SoundShader
	{
	};
	class ffp_66KES88_tailMeadows_SoundShader: Launcher_RPG32_tailMeadows_SoundShader
	{
	};
	class ffp_66KES88_tailHouses_SoundShader: Launcher_RPG32_tailHouses_SoundShader
	{
	};
	class ffp_66KES12_tailInterior_SoundShader: ffp_66KES88_tailInterior_SoundShader
	{
	};
	class ffp_66KES12_tailTrees_SoundShader: ffp_66KES88_tailTrees_SoundShader
	{
	};
	class ffp_66KES12_tailForest_SoundShader: ffp_66KES88_tailForest_SoundShader
	{
	};
	class ffp_66KES12_tailMeadows_SoundShader: ffp_66KES88_tailMeadows_SoundShader
	{
	};
	class ffp_66KES12_tailHouses_SoundShader: ffp_66KES88_tailHouses_SoundShader
	{
	};
	class fin_PKM_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"ffp_weapons\fin_pkm\sounds\pkm_closure.wav",
				1
			}
		};
		volume=0;
		range=5;
	};
	class fin_PKM_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ffp_weapons\fin_pkm\sounds\close\PKM-shotfinal1_finmod_1.wav",
				1
			},
			
			{
				"ffp_weapons\fin_pkm\sounds\close\PKM-shotfinal2_finmod_2.wav",
				1
			},
			
			{
				"ffp_weapons\fin_pkm\sounds\close\PKM-shotfinal3_finmod_3.wav",
				1
			}
		};
		volume=1.5;
		range=175;
		rangeCurve="closeShotCurve";
	};
	class fin_PKM_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ffp_weapons\fin_pkm\sounds\mid\pkm_rev2_mid1.wav",
				1
			},
			
			{
				"ffp_weapons\fin_pkm\sounds\mid\pkm_rev2_mid2.wav",
				1
			}
		};
		volume=3;
		range=3000;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{350,0.5},
			{500,0.25},
			{3000,0}
		};
	};
	class fin_PKM_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ffp_weapons\fin_pkm\sounds\dist\pkm_dist1.wav",
				1
			},
			
			{
				"ffp_weapons\fin_pkm\sounds\dist\pkm_dist2.wav",
				1
			},
			
			{
				"ffp_weapons\fin_pkm\sounds\dist\pkm_dist3.wav",
				1
			},
			
			{
				"ffp_weapons\fin_pkm\sounds\dist\pkm_dist6.wav",
				1
			}
		};
		volume=6;
		range=3000;
		rangeCurve[]=
		{
			{0,0},
			{200,0},
			{350,0.2},
			{500,0.40000001},
			{750,0.80000001},
			{1500,1}
		};
	};
	class fin_PKM_farShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ffp_weapons\fin_pkm\sounds\far\pkm_far4.wav",
				1
			},
			
			{
				"ffp_weapons\fin_pkm\sounds\far\pkm_far5.wav",
				1
			}
		};
		volume=6;
		range=3000;
		rangeCurve[]=
		{
			{0,0},
			{200,0},
			{350,0},
			{750,0.25},
			{1500,0.75},
			{3000,1}
		};
	};
	class fin_PKM_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"\a3\sounds_f\arsenal\weapons\Machineguns\Zafir\Zafir_tailInterior.wss",
				1
			}
		};
		volume="interior";
		range=75;
		limitation=0;
	};
	class fin_PKM_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"\a3\sounds_f\arsenal\weapons\Machineguns\Zafir\Zafir_tailTrees.wss",
				1
			}
		};
		volume="(1 - interior / 1.4)*trees / 3";
		range=300;
		limitation=1;
	};
	class fin_PKM_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"\a3\sounds_f\arsenal\weapons\Machineguns\Zafir\Zafir_tailForest.wss",
				1
			}
		};
		volume="(1 - interior / 1.4)*forest / 3";
		range=300;
		limitation=1;
	};
	class fin_PKM_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"\a3\sounds_f\arsenal\weapons\Machineguns\Zafir\Zafir_tailMeadows.wss",
				1
			}
		};
		volume="(1 - interior / 1.4)*(meadows / 2 max sea / 2) / 3";
		range=1000;
		limitation=1;
	};
	class fin_PKM_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"\a3\sounds_f\arsenal\weapons\Machineguns\Zafir\Zafir_tailHouses.wss",
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
	class fin_PKM_Shot_SoundSet
	{
		soundShaders[]=
		{
			"fin_PKM_Closure_SoundShader",
			"fin_PKM_closeShot_SoundShader",
			"fin_PKM_midShot_SoundShader",
			"fin_PKM_distShot_SoundShader",
			"fin_PKM_farShot_SoundShader"
		};
		volumeFactor=1.35;
		volumeCurve="inverseSquare3Curve";
		sound3DProcessingType="fin_PKM_Shot3DProcessingType";
		distanceFilter="weaponShotDistanceFreqAttenuationFilter";
		spatial=1;
		doppler=0;
		loop=0;
		speedOfSound=1;
		obstructionFactor=0.30000001;
		occlusionFactor=0.5;
	};
	class fin_PKM_Tail_SoundSet
	{
		soundShaders[]=
		{
			"fin_PKM_tailInterior_SoundShader",
			"fin_PKM_tailTrees_SoundShader",
			"fin_PKM_tailForest_SoundShader",
			"fin_PKM_tailMeadows_SoundShader",
			"fin_PKM_tailHouses_SoundShader"
		};
		soundShadersLimit=6;
		volumeFactor=1.05;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizerMin=0.0099999998;
		frequencyRandomizer=0.050000001;
		sound3DProcessingType="fin_PKM_ShotTail3DProcessingType";
		distanceFilter="weaponShotDistanceFreqAttenuationFilter";
		spatial=1;
		doppler=0;
		loop=0;
		speedOfSound=1;
		obstructionFactor=0;
		occlusionFactor=0.30000001;
	};
	class ffp_66KES88_Shot_SoundSet
	{
		soundShaders[]=
		{
			"ffp_66KES88_closeShot_SoundShader",
			"ffp_66KES88_midShot_SoundShader",
			"ffp_66KES88_distShot_SoundShader"
		};
		volumeFactor=1.35;
		volumeCurve="InverseSquare3Curve";
		sound3DProcessingType="WeaponHeavyShot3DProcessingType";
		distanceFilter="weaponShotDistanceFreqAttenuationFilter";
		spatial=1;
		doppler=0;
		loop=0;
		obstructionFactor=0.30000001;
		occlusionFactor=0.5;
	};
	class ffp_66KES12_Shot_SoundSet
	{
		soundShaders[]=
		{
			"ffp_66KES12_closeShot_SoundShader",
			"ffp_66KES12_midShot_SoundShader",
			"ffp_66KES12_distShot_SoundShader"
		};
		volumeFactor=1.35;
		sound3DProcessingType="WeaponHeavyShot3DProcessingType";
		distanceFilter="weaponShotDistanceFreqAttenuationFilter";
		spatial=1;
		doppler=0;
		loop=0;
		obstructionFactor=0.30000001;
		occlusionFactor=0.5;
	};
	class ffp_66KES88_Tail_SoundSet
	{
		soundShaders[]=
		{
			"ffp_66KES88_tailInterior_SoundShader",
			"ffp_66KES88_tailTrees_SoundShader",
			"ffp_66KES88_tailForest_SoundShader",
			"ffp_66KES88_tailMeadows_SoundShader",
			"ffp_66KES88_tailHouses_SoundShader"
		};
		soundShadersLimit=6;
		volumeFactor=1;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizerMin=0.0099999998;
		frequencyRandomizer=0.050000001;
		sound3DProcessingType="WeaponHeavyShot3DProcessingType";
		distanceFilter="weaponShotDistanceFreqAttenuationFilter";
		spatial=1;
		doppler=0;
		loop=0;
		obstructionFactor=0;
		occlusionFactor=0.30000001;
	};
	class ffp_66KES12_Tail_SoundSet
	{
		soundShaders[]=
		{
			"ffp_66KES12_tailInterior_SoundShader",
			"ffp_66KES12_tailTrees_SoundShader",
			"ffp_66KES12_tailForest_SoundShader",
			"ffp_66KES12_tailMeadows_SoundShader",
			"ffp_66KES12_tailHouses_SoundShader"
		};
		soundShadersLimit=6;
		volumeFactor=1;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizerMin=0.0099999998;
		frequencyRandomizer=0.050000001;
		sound3DProcessingType="WeaponHeavyShot3DProcessingType";
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
	class fin_PKM_Shot3DProcessingType
	{
		type="panner";
		innerRange=0;
		range=5;
		rangeCurve="LinearCurve";
	};
	class fin_PKM_ShotTail3DProcessingType
	{
		type="panner";
		innerRange=5;
		range=160;
		rangeCurve="InverseSquare1Curve";
	};
};
class cfgDistanceFilters
{
	class fin_PKM_ShotDistanceFreqAttenuationFilter
	{
		type="lowPassFilter";
		minCutoffFrequency=300;
		qFactor=1.5;
		innerRange=10;
		range=2000;
		powerFactor=32;
	};
	class fin_PKM_ShotTailDistanceFreqAttenuationFilter
	{
		type="lowPassFilter";
		minCutoffFrequency=500;
		qFactor=1.5;
		innerRange=10;
		range=1400;
		powerFactor=32;
	};
};
class cfgAmmo
{
	class BulletBase;
	class RocketBase;
	class ffp_basic_penetrator: RocketBase
	{
		caliber="(300/((15*1000)/1000))";
		hit=300;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0;
		typicalSpeed=1000;
		timeToLive=0.029999999;
		whistleOnFire=1;
		whistleDist=14;
		deflecting=0;
		model="\A3\Weapons_f\empty";
	};
	class ffp_apilas_R: RocketBase
	{
		AIAmmoUsageFlags="128+256+512";
		model="ffp_weapons\apilas\rocket_inflight.p3d";
		hit=600;
		indirectHit=10;
		indirectHitRange=1;
		caliber=33.333302;
		ais_ce_penetrators[]=
		{
			"ffp_apilas_heat_penetrator"
		};
		warheadName="AP";
		airFriction=0.63999999;
		sideAirFriction=0.0099999998;
		simulationStep=0.0099999998;
		maxSpeed=293;
		typicalSpeed=900;
		initTime=0;
		thrustTime=8;
		thrust=0.050000001;
		fuseDistance=25;
		explosive=0.34999999;
		visibleFire=40;
		audibleFire=25;
		whistleDist=4;
		whistleOnFire=1;
		timeToLive=12;
		CraterEffects="ATRocketCrater";
		explosionEffects="ATRocketExplosion";
		effectsMissileInit="RocketBackEffectsNLAW";
		effectsMissile="missile3";
		class CamShakeFire
		{
			power=20;
			duration=3;
			frequency=30;
			distance=30;
		};
		class CamShakePlayerFire
		{
			power=15;
			duration=4;
			frequency=30;
		};
		class CamShakeHit
		{
			power=100;
			duration=2;
			frequency=20;
		};
		submunitionAmmo="ammo_Penetrator_NLAW";
		submunitionDirectionType="SubmunitionTargetDirection";
	};
	class ffp_apilas_heat_penetrator: ffp_basic_penetrator
	{
		caliber="(720/((15*1000)/1000))";
	};
	class ffp_kes_base: RocketBase
	{
		AIAmmoUsageFlags="128+256+512";
		model="ffp_weapons\66kesXX\rocket.p3d";
		cost=200;
		initTime=0;
		thrustTime=0;
		thrust=0;
		fuseDistance=5;
		audibleFire=16;
		visibleFire=28;
		whistleDist=4;
		whistleOnFire=1;
		timeToLive=12;
		indirectHit=10;
		indirectHitRange=1;
		caliber=0.1;
		typicalspeed=900;
		explosive=0.34999999;
		maxSpeed=198;
		airFriction=0;
		sideAirFriction=0.0099999998;
		simulationStep=0.0099999998;
		CraterEffects="ATRocketCrater";
		explosionEffects="ATRocketExplosion";
		effectsMissileInit="RocketBackEffectsNLAW";
		effectsMissile="missile3";
		class CamShakeFire
		{
			power=10;
			duration=0.5;
			frequency=20;
			distance=30;
		};
		class CamShakePlayerFire
		{
			power=5;
			duration=0.1;
			frequency=20;
		};
		class CamShakeHit
		{
			power=100;
			duration=1;
			frequency=20;
		};
	};
	class ffp_66kes88_heat_penetrator: ffp_basic_penetrator
	{
		caliber="(330/((15*1000)/1000))";
		hit=370;
	};
	class ffp_66kes12_hedp_penetrator: ffp_basic_penetrator
	{
		caliber="(120/((15*1000)/1000))";
		hit=380;
	};
	class ffp_66kes12_heat_penetrator: ffp_basic_penetrator
	{
		caliber="(450/((15*1000)/1000))";
		hit=410;
	};
	class ffp_66kes88_R: ffp_kes_base
	{
		ais_ce_penetrators[]=
		{
			"ffp_66kes88_heat_penetrator"
		};
		hit=350;
		indirectHit=30;
		indirectHitRange=2;
	};
	class ffp_66kes12_R: ffp_kes_base
	{
		ais_ce_penetrators[]=
		{
			"ffp_66kes12_heat_penetrator"
		};
		hit=400;
		indirectHit=35;
		indirectHitRange=2;
	};
	class ffp_66kes12_rak_R: ffp_kes_base
	{
		AIAmmoUsageFlags="64+128+256+512";
		ais_ce_penetrators[]=
		{
			"ffp_66kes12_hedp_penetrator"
		};
		hit=220;
		indirectHit=35;
		indirectHitRange=5;
	};
	class ffp_B_762_BulletBase: BulletBase
	{
		timeToLive=6;
		airLock=1;
		cartridge="FxCartridge_762";
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=3;
		audibleFire=45;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		cost=1.2;
		deflecting=15;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		class CamShakeExplode
		{
			power=2.8284299;
			duration=0.60000002;
			frequency=20;
			distance=8.48528;
		};
		class CamShakeHit
		{
			power=5;
			duration=0.2;
			frequency=20;
			distance=1;
		};
	};
	class ffp_B_762x54mmR_Ball: ffp_B_762_BulletBase
	{
		hit=12;
		tracerScale=0.60000002;
		tracerStartTime=0.0074999998;
		tracerEndTime=3;
		typicalSpeed=790;
		airFriction=-0.00101071;
		caliber=1.8;
		ACE_caliber=7.9250002;
		ACE_bulletLength=28.955999;
		ACE_bulletMass=9.8495998;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.5};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={760,795,835,865};
		ACE_barrelLengths[]={406.39999,508,604.5,736.59998};
	};
	class ffp_B_762x39_Ball: ffp_B_762_BulletBase
	{
		hit=10;
		tracerScale=0.5;
		tracerStartTime=0.0074999998;
		tracerEndTime=1.8;
		typicalSpeed=718;
		airFriction=-0.00154815;
		caliber=1.2;
		ACE_caliber=7.823;
		ACE_bulletLength=28.955999;
		ACE_bulletMass=7.9703999;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.27500001};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={650,716,750};
		ACE_barrelLengths[]={254,414.01999,508};
	};
	class ffp_B_762x39_Rk: ffp_B_762x39_Ball
	{
		airFriction=-0.00079999998;
		ACE_ballisticCoefficients[]={0.51999998};
	};
};
class CfgMovesBasic
{
	class Default;
	class DefaultDie;
	class ManActions
	{
		GestureReloadPKM="GestureReloadPKM";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			GestureReloadPKM[]=
			{
				"GestureReloadPKM",
				"Gesture"
			};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			GestureReloadPKM[]=
			{
				"GestureReloadPKM_Prone",
				"Gesture"
			};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadPKM[]=
			{
				"GestureReloadPKM_Context",
				"Gesture"
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadPKM[]=
			{
				"GestureReloadPKM_Context",
				"Gesture"
			};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadPKM[]=
			{
				"GestureReloadPKM_Context",
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
		class GestureReloadPKM: Default
		{
			file="ffp_weapons\fin_pkm\anim\reload\PKM_reload_valmis_v7.rtm";
			speed=0.2;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			canPullTrigger=0;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.55252916,1,0.56,0,1,0};
			rightHandIKEnd=0;
			leftHandIKBeg=0;
			leftHandIKCurve[]={0,0,0.55252916,0,0.56,1,1,1};
			leftHandIKEnd=1;
		};
		class GestureReloadPKM_prone: Default
		{
			file="ffp_weapons\fin_pkm\anim\reload\PKM_reload_prone_valmis_v4.rtm";
			speed=0.2;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			canPullTrigger=0;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.55252916,1,0.56,0,1,0};
			rightHandIKEnd=0;
			leftHandIKBeg=0;
			leftHandIKCurve[]={0,0,0.55252916,0,0.56,1,1,1};
			leftHandIKEnd=1;
		};
		class GestureReloadPKM_Context: GestureReloadPKM
		{
			mask="handsWeapon_context";
		};
	};
};
class CfgMagazines
{
	class sfp_rb57_mag;
	class ffp_nlaw_mag: sfp_rb57_mag
	{
		author="Swedish Forces Pack";
		scope=2;
		displayName="102 RSLPSTOHJ Missile";
		descriptionShort="Anti-Tank Missile";
	};
	class sfp_pskott68_mag;
	class sfp_17Rnd_9x19_Mag;
	class ffp_17rnd_9x9_mag: sfp_17Rnd_9x19_Mag
	{
		dlc="ffp";
		author="Swedish Forces Pack";
	};
	class FakeMagazine;
	class 30Rnd_556x45_Stanag;
	class 150Rnd_762x51_Box;
	class ffp_apilas_mag: sfp_pskott68_mag
	{
		scope=2;
		scopeArsenal=2;
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_apilas_mag";
		descriptionshort="$STR_desc_ffp_apilas_mag";
		displaynameshort="$STR_s_ffp_apilas_mag";
		dlc="ffp";
		model="ffp_weapons\apilas\rocket.p3d";
		modelSpecial="ffp_weapons\apilas\apilas_loaded.p3d";
		selectionFireAnim="zasleh";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
		ammo="ffp_apilas_R";
		count=1;
		initSpeed=293;
		mass=95;
		allowedSlots[]={801,701,901};
		type=256;
	};
	class ffp_dummy_mag: ffp_apilas_mag
	{
		scope=1;
		count=0;
	};
	class ffp_kes_mag_base: FakeMagazine
	{
		scope=1;
		scopeArsenal=0;
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
		selectionFireAnim="zasleh";
		count=1;
		initSpeed=198;
		mass=22;
		allowedSlots[]={801,701,901};
		type="6 * 256";
	};
	class ffp_kes88_mag: ffp_kes_mag_base
	{
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_66kes88_mag";
		descriptionshort="$STR_desc_ffp_66kes88_mag";
		displaynameshort="$STR_s_ffp_66kes88_mag";
		dlc="ffp";
		model="ffp_weapons\66kesXX\rocket.p3d";
		ammo="ffp_66kes88_R";
	};
	class ffp_66kes12_mag: ffp_kes_mag_base
	{
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_66kes12_mag";
		descriptionshort="$STR_desc_ffp_66kes12_mag";
		displaynameshort="$STR_s_ffp_66kes12_mag";
		dlc="ffp";
		model="ffp_weapons\66kesXX\rocket.p3d";
		ammo="ffp_66kes12_R";
		initSpeed=200;
	};
	class ffp_66kes12_rak_mag: ffp_66kes12_mag
	{
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_66kes12_rak_mag";
		descriptionshort="$STR_desc_ffp_66kes12_rak_mag";
		displaynameshort="$STR_s_ffp_66kes12_rak_mag";
		dlc="ffp";
		ammo="ffp_66kes12_rak_R";
		mass=28.700001;
	};
	class ffp_100Rnd_762x54_pkm: 150Rnd_762x51_Box
	{
		scope=2;
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_100Rnd_pkm_mag";
		descriptionshort="$STR_desc_ffp_100Rnd_pkm_mag";
		displaynameshort="$STR_s_ffp_100Rnd_pkm_mag";
		dlc="ffp";
		class Library
		{
			libTextDesc="Standard PKM magazine.";
		};
		model="\ffp_weapons\fin_pkm\PKM_Magazine.p3d";
		picture="\ffp_weapons\fin_pkm\data\UI\pkm_mag_ca.paa";
		mass=50;
		ammo="ffp_B_762x54mmR_Ball";
		count=100;
		initSpeed=850;
		tracersEvery=4;
		lastRoundsTracer=4;
	};
	class ffp_100Rnd_762x54_pkm_Tracer: ffp_100Rnd_762x54_pkm
	{
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_100Rnd_pkm_mag_Tracer";
		descriptionshort="$STR_desc_ffp_100Rnd_pkm_mag_Tracer";
		displaynameshort="$STR_s_ffp_100Rnd_pkm_mag_Tracer";
		dlc="ffp";
		tracersEvery=2;
	};
	class ffp_100Rnd_KVKK_mag: 30Rnd_556x45_Stanag
	{
		scope=2;
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_100Rnd_KVKK_mag";
		descriptionshort="$STR_desc_ffp_100Rnd_KVKK_mag";
		displaynameshort="$STR_s_ffp_100Rnd_KVKK_mag";
		dlc="ffp";
		picture="\ffp_weapons\fin_kvkk\data\UI\kvkk_mag_ca.paa";
		mass=60;
		ammo="ffp_B_762x39_Ball";
		count=100;
		initSpeed=730;
		tracersEvery=0;
		lastRoundsTracer=0;
	};
	class ffp_100Rnd_KVKK_mag_Tracer: ffp_100Rnd_KVKK_mag
	{
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_100Rnd_KVKK_mag_Tracer";
		descriptionshort="$STR_desc_ffp_100Rnd_KVKK_mag_Tracer";
		displaynameshort="$STR_s_ffp_100Rnd_KVKK_mag_Tracer";
		dlc="ffp";
		tracersEvery=2;
		lastRoundsTracer=3;
	};
};
class CfgWeapons
{
	class sfp_p88;
	class sfp_ag90;
	class sfp_rb57;
	class sfp_rbs69;
	class sfp_pskott68;
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class ffp_pist2008: sfp_p88
	{
		dlc="ffp";
		author="Swedish Forces Pack (Echo)";
		displayname="PIST 2008";
		descriptionShort="PIST 2008 is the Finnish designation for the Glock 17..";
		magazines[]=
		{
			"sfp_17Rnd_9x19_Mag",
			"ffp_17rnd_9x9_mag"
		};
	};
	class ffp_rstkiv2000: sfp_ag90
	{
		dlc="ffp";
		author="Swedish Forces Pack";
		displayname="12.7 RSTKIV 2008";
	};
	class ffp_nlaw: sfp_rb57
	{
		dlc="ffp";
		author="Swedish Forces Pack";
		displayname="102 RSLPSTOHJ";
		descriptionShort="The 102 RSLPSTOHJ NLAW is a Swedish short-range fire-and-forget anti-tank missile launcher";
		magazines[]=
		{
			"ffp_nlaw_mag"
		};
		scopeArsenal=2;
		scopeCurator=2;
		baseweapon="ffp_nlaw";
	};
	class ffp_Apilas: Launcher_Base_F
	{
		scope=2;
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_Apilas";
		descriptionshort="$STR_desc_ffp_Apilas";
		displaynameshort="$STR_s_ffp_Apilas";
		dlc="ffp";
		model="\ffp_weapons\apilas\apilas.p3d";
		picture="\ffp_weapons\apilas\data\UI\gear_apilas_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\ffp_weapons\apilas\anim\rkses112_apilas_handanim_mk3_v13.rtm"
		};
		reloadAction="GestureReloadApilas";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
		magazineWell[]={};
		magazineReloadTime=0.1;
		initSpeed=-1;
		drySound[]=
		{
			"A3\sounds_f\weapons\other\dry6",
			0.17782794,
			1,
			15
		};
		reloadMagazineSound[]=
		{
			"A3\sounds_f\weapons\rockets\titan_reload_final",
			1,
			1,
			10
		};
		soundFly[]=
		{
			"A3\sounds_f\weapons\rockets\rocket_fly_1",
			0.56234133,
			1.5,
			700
		};
		changeFiremodeSound[]=
		{
			"A3\sounds_f\dummysound",
			0.56234133,
			1,
			20
		};
		recoil="recoil_single_titan";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			weaponSoundEffect="DefaultRifle";
			begin1[]=
			{
				"ffp_weapons\apilas\sound\Apilas_fire_wip.wav",
				"db0",
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		aiRateOfFire=10;
		aiRateOfFireDistance=300;
		minRange=15;
		minRangeProbab=0.30000001;
		midRange=300;
		midRangeProbab=0.57999998;
		maxRange=600;
		maxRangeProbab=0.039999999;
		modelOptics="ffp_weapons\apilas\optic_apilas";
		weaponInfoType="RscWeaponZeroing";
		class OpticsModes
		{
			class optic
			{
				opticsID=1;
				useModelOptics=1;
				opticsZoomMin=0.1875;
				opticsZoomMax=0.1875;
				opticsZoomInit=0.1875;
				distanceZoomMin=50;
				distanceZoomMax=50;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				visionMode[]=
				{
					"Normal"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera2",
					"OpticsBlur3"
				};
			};
		};
		class GunParticles
		{
			class effect1
			{
				positionName="Backblast_pos";
				directionName="Backblast_dir";
				effectName="RocketBackEffectsRPGNT";
			};
		};
		inertia=1;
		class WeaponSlotsInfo
		{
			mass=199;
			allowedSlots[]={};
		};
		class ItemInfo
		{
			priority=3;
		};
		class Library
		{
			libTextDesc="112 RsKES APILAS is a disposable anti-tank rocket launcher used by Finnish Defence Forces anti-tank specialists";
		};
	};
	class ffp_Apilas_Loaded: ffp_Apilas
	{
		scope=1;
		scopeArsenal=1;
		baseWeapon="ffp_Apilas";
		magazines[]=
		{
			"ffp_apilas_mag"
		};
		weaponPoolAvailable=0;
		class EventHandlers
		{
			fired="_this call CBA_fnc_firedDisposable";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=104;
		};
	};
	class ffp_Apilas_Used: ffp_Apilas
	{
		scope=1;
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_Apilas_Used";
		descriptionshort="$STR_desc_ffp_Apilas_Used";
		displaynameshort="$STR_s_ffp_Apilas_Used";
		dlc="ffp";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
		weaponPoolAvailable=0;
		model="ffp_weapons\apilas\apilas_used.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=104;
		};
	};
	class ffp_66kes_base: Launcher_Base_F
	{
		scope=1;
		magazineWell[]={};
		drySound[]=
		{
			"A3\sounds_f\weapons\other\dry6",
			0.031622801,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\sounds_f\weapons\rockets\titan_reload_final",
			0.56234097,
			1,
			50
		};
		soundFly[]=
		{
			"A3\sounds_f\weapons\rockets\rocket_fly_1",
			0.316228,
			1.5,
			700
		};
		changeFiremodeSound[]=
		{
			"A3\sounds_f\dummysound",
			0.56234133,
			1,
			20
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"ffp_weapons\66kesXX\anim\KES_Handanim_v1.rtm"
		};
		recoil="recoil_single_law";
		initSpeed=-1;
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			soundSetShot[]=
			{
				"ffp_66KES88_Shot_SoundSet"
			};
		};
		aiRateOfFire=10;
		aiRateOfFireDistance=300;
		minRange=10;
		minRangeProbab=0.89999998;
		midRange=100;
		midRangeProbab=0.69999999;
		maxRange=250;
		maxRangeProbab=0.1;
		weaponInfoType="RscWeaponZeroing";
		modelOptics="-";
		optics=0;
		opticsID=2;
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		useModelOptics=0;
		opticsFlare=0;
		opticsDisablePeripherialVision=0;
		opticsZoomMin=0.27500001;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		visionMode="";
		cameraDir="eye_look";
		memoryPointCamera="eye";
		inertia=1;
		class GunParticles
		{
			class effect1
			{
				positionName="Backblast_pos";
				directionName="Backblast_dir";
				effectName="RocketBackEffectsRPGNT";
			};
		};
		class ItemInfo
		{
			priority=3;
		};
	};
	class ffp_kes88: ffp_66kes_base
	{
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_66kes88";
		descriptionshort="$STR_desc_ffp_66kes88";
		displaynameshort="$STR_s_ffp_66kes88";
		dlc="ffp";
		class Library
		{
			libTextDesc="$STR_lib_ffp_66kes88";
		};
		scope=2;
		model="ffp_weapons\66kesXX\kes88";
		picture="\ffp_weapons\66kesXX\data\UI\gear_66kes88_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\ffp_weapons\66kesXX\anim\KES_Handanim_v1.rtm"
		};
		reloadAction="ReloadRPG";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
		magazineReloadTime=0.1;
		discreteDistanceInitIndex=0;
		discreteDistance[]={100,150,200,250,300};
		discreteDistanceCameraPoint[]=
		{
			"eye1",
			"eye2",
			"eye3",
			"eye4",
			"eye5"
		};
		distanceZoomMin=100;
		distanceZoomMax=100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=72.099998;
			allowedSlots[]={901};
		};
	};
	class ffp_kes88_Loaded: ffp_kes88
	{
		scope=1;
		scopeArsenal=1;
		baseWeapon="ffp_kes88";
		magazines[]=
		{
			"ffp_kes88_mag"
		};
		weaponPoolAvailable=0;
		class EventHandlers
		{
			fired="_this call CBA_fnc_firedDisposable";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=50.099998;
		};
	};
	class ffp_kes88_Used: ffp_kes88
	{
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_66kes88_Used";
		descriptionshort="$STR_desc_ffp_66kes88_Used";
		displaynameshort="$STR_s_ffp_66kes88_Used";
		dlc="ffp";
		scope=1;
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
		weaponPoolAvailable=0;
		model="ffp_weapons\66kesXX\kes88_used.p3d";
		class WeaponSlotsInfo
		{
			mass=50.099998;
		};
	};
	class ffp_66kes12: ffp_66kes_base
	{
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_66kes12";
		descriptionshort="$STR_desc_ffp_66kes12";
		displaynameshort="$STR_s_ffp_66kes12";
		dlc="ffp";
		class Library
		{
			libTextDesc="$STR_lib_ffp_66kes12";
		};
		scope=2;
		model="ffp_weapons\66kesXX\kes12";
		picture="\ffp_weapons\66kesXX\data\UI\gear_66kes12_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\ffp_weapons\66kesXX\anim\KES_Handanim_v1.rtm"
		};
		reloadAction="ReloadRPG";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
		magazineReloadTime=0.1;
		aiRateOfFire=10;
		aiRateOfFireDistance=300;
		minRange=10;
		minRangeProbab=0.89999998;
		midRange=100;
		midRangeProbab=0.69999999;
		maxRange=250;
		maxRangeProbab=0.1;
		discreteDistanceInitIndex=0;
		discreteDistance[]={100,150,200,250,300};
		discreteDistanceCameraPoint[]=
		{
			"eye1",
			"eye2",
			"eye3",
			"eye4",
			"eye5"
		};
		distanceZoomMin=100;
		distanceZoomMax=100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=70.5;
			allowedSlots[]={901};
		};
	};
	class ffp_66kes12_Loaded: ffp_66kes12
	{
		scope=1;
		scopeArsenal=1;
		baseWeapon="ffp_66kes12";
		magazines[]=
		{
			"ffp_66kes12_mag"
		};
		weaponPoolAvailable=0;
		class EventHandlers
		{
			fired="_this call CBA_fnc_firedDisposable";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=48.5;
		};
	};
	class ffp_66kes12_rak: ffp_66kes12
	{
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_66kes12_rak";
		descriptionshort="$STR_desc_ffp_66kes12_rak";
		displaynameshort="$STR_s_ffp_66kes12_rak";
		dlc="ffp";
		class Library
		{
			libTextDesc="$STR_lib_ffp_66kes12_rak";
		};
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
		magazineReloadTime=0.1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=77.199997;
		};
	};
	class ffp_66kes12_rak_Loaded: ffp_66kes12_rak
	{
		scope=1;
		scopeArsenal=1;
		baseWeapon="ffp_66kes12_rak";
		magazines[]=
		{
			"ffp_66kes12_rak_mag"
		};
		weaponPoolAvailable=0;
		class EventHandlers
		{
			fired="_this call CBA_fnc_firedDisposable";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=48.5;
		};
	};
	class ffp_66kes12_Used: ffp_66kes12
	{
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_66kes12_Used";
		descriptionshort="$STR_desc_ffp_66kes12_Used";
		displaynameshort="$STR_s_ffp_66kes12_Used";
		dlc="ffp";
		scope=1;
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
		weaponPoolAvailable=0;
		model="ffp_weapons\66kesXX\kes12_used.p3d";
		class WeaponSlotsInfo
		{
			mass=48.5;
		};
	};
	class ffp_kk_pkm: Rifle_Long_Base_F
	{
		scope=2;
		author="$STR_FFPMod_Author";
		displayname="$STR_FFP_PKM";
		descriptionshort="$STR_desc_FFP_PKM";
		displaynameshort="$STR_s_FFP_PKM";
		dlc="ffp";
		model="\ffp_weapons\fin_pkm\pkm.p3d";
		picture="\ffp_weapons\fin_pkm\data\UI\pkm_x_ca.paa";
		UiPicture="A3\weapons_f\data\UI\icon_mg_CA.paa";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ffp_weapons\fin_pkm\anim\PKM.Handanim_v1.rtm"
		};
		reloadAction="GestureReloadPKM";
		selectionFireAnim="muzzleFlash";
		magazineReloadSwitchPhase=0.64999998;
		nameSound="Mgun";
		cursor="mg";
		magazines[]=
		{
			"ffp_100Rnd_762x54_pkm",
			"ffp_100Rnd_762x54_pkm_Tracer"
		};
		magazineWell[]=
		{
			"CBA_762x54R_LINKS",
			"PK_762x54R"
		};
		deployedPivot="bipod";
		hasBipod=1;
		discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
		discreteDistanceInitIndex=2;
		discreteDistanceCameraPoint[]=
		{
			"eye01",
			"eye02",
			"eye03",
			"eye04",
			"eye05",
			"eye06",
			"eye07",
			"eye08",
			"eye09",
			"eye10",
			"eye11",
			"eye12",
			"eye13",
			"eye14",
			"eye15"
		};
		cameraDir="eye_look";
		aiDispersionCoefY=20;
		aiDispersionCoefX=18;
		inertia=0.85000002;
		aimTransitionSpeed=0.60000002;
		dexterity=1;
		recoil="recoil_pkm";
		htMin=8;
		htMax=920;
		maxZeroing=1500;
		ACE_Overheating_allowSwapBarrel=1;
		ACE_Overheating_Dispersion=0.75;
		ACE_Overheating_SlowdownFactor=1;
		ACE_Overheating_MRBS=2962;
		ACE_barrelLength=605;
		ACE_barrelTwist=240;
		ACE_twistDirection=1;
		ACE_railHeightAboveBore=6.2099099;
		jsrs_soundeffect="JSRS2_Distance_Effects_M240";
		tmr_autorest_deployable=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=160;
			class CowsSlot: asdg_OpticRail1913
			{
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint="Center";
				iconScale=0.2;
				iconPosition[]={0.5,0.2};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: SlotInfo
			{
				compatibleItems[]={};
			};
		};
		class GunParticles: GunParticles
		{
			class AmmoBeltEject
			{
				directionName="ejectend";
				effectName="MachineGunEject2";
				positionName="ejectstart";
			};
		};
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.1,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.1,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.17782794,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.17782794,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.1,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.1,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.1,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.1,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.0099999998,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.0099999998,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.0099999998,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.0099999998,
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
		drySound[]=
		{
			"\ffp_weapons\fin_pkm\sounds\pkm_dry.wav",
			"db-5",
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\ffp_weapons\fin_pkm\sounds\PKM-Reload_finmod.wav",
			1,
			1,
			30
		};
		changeFiremodeSound[]=
		{
			"\ffp_weapons\fin_pkm\sounds\RK_firemode.wav",
			0.56234133,
			1,
			20
		};
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",
			"db-3",
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",
			"db-3",
			1,
			20
		};
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far",
			"far_optic1",
			"far_optic2"
		};
		class manual: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"fin_PKM_Shot_SoundSet",
					"fin_PKM_Tail_SoundSet"
				};
			};
			showToPlayer=1;
			dispersion=0.00101;
			reloadTime=0.085714303;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class close: manual
		{
			showToPlayer=0;
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=5;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=400;
			midRangeProbab=0.60000002;
			maxRange=600;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			burst=5;
			aiRateOfFire=9;
			aiRateOfFireDistance=900;
			minRange=450;
			minRangeProbab=0.039999999;
			midRange=650;
			midRangeProbab=0.5;
			maxRange=900;
			maxRangeProbab=0.0099999998;
		};
		class far_optic1: close
		{
			requiredOpticType=1;
			burst=5;
			aiRateOfFire=9;
			aiRateOfFireDistance=900;
			minRange=450;
			minRangeProbab=0.039999999;
			midRange=650;
			midRangeProbab=0.5;
			maxRange=900;
			maxRangeProbab=0.0099999998;
		};
		class far_optic2: far_optic1
		{
			requiredOpticType=2;
			burst=3;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=900;
			midRangeProbab=0.5;
			maxRange=1200;
			maxRangeProbab=0.0099999998;
		};
	};
	class ffp_KVKK: Rifle_Long_Base_F
	{
		scope=2;
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_KVKK";
		descriptionshort="$STR_desc_ffp_KVKK";
		displaynameshort="$STR_s_ffp_KVKK";
		dlc="ffp";
		model="\ffp_weapons\fin_kvkk\ffp_KVKK.p3d";
		picture="\ffp_weapons\fin_kvkk\data\UI\KVKK_x_ca.paa";
		UiPicture="A3\weapons_f\data\UI\icon_mg_CA.paa";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"ffp_weapons\fin_kvkk\anim\KVKK_Handanim_v6.rtm"
		};
		reloadAction="GestureReloadPKM";
		selectionFireAnim="muzzleFlash";
		magazineReloadSwitchPhase=0.64999998;
		nameSound="Mgun";
		cursor="mg";
		magazines[]=
		{
			"ffp_100Rnd_KVKK_mag",
			"ffp_100Rnd_KVKK_mag_Tracer"
		};
		deployedPivot="bipod";
		hasBipod=1;
		discreteDistance[]={100,200,300,400,500,600,700,800,900};
		discreteDistanceInitIndex=2;
		aiDispersionCoefY=20;
		aiDispersionCoefX=18;
		inertia=0.85000002;
		aimTransitionSpeed=0.60000002;
		recoil="ffp_recoil_KVKK";
		initSpeed=-1;
		htMin=8;
		htMax=920;
		maxZeroing=1500;
		ACE_Overheating_allowSwapBarrel=0;
		ACE_Overheating_Dispersion=0.75;
		ACE_Overheating_SlowdownFactor=1;
		ACE_Overheating_MRBS=1000;
		ACE_barrelLength=470;
		ACE_barrelTwist=240;
		ACE_twistDirection=1;
		jsrs_soundeffect="JSRS2_Distance_Effects_M240";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=99.199997;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: SlotInfo
			{
				compatibleItems[]={};
			};
		};
		class GunParticles: GunParticles
		{
			class AmmoBeltEject
			{
				directionName="ejectend";
				effectName="MachineGunEject2";
				positionName="ejectstart";
			};
		};
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.1,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.1,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.17782794,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.17782794,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.1,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.1,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.1,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.1,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.0099999998,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.0099999998,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.0099999998,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.0099999998,
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
		drySound[]=
		{
			"\ffp_weapons\fin_pkm\sounds\pkm_dry.wav",
			"db-5",
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\ffp_weapons\fin_pkm\sounds\PKM-Reload_finmod.wav",
			1,
			1,
			30
		};
		changeFiremodeSound[]=
		{
			"\ffp_weapons\fin_pkm\sounds\RK_firemode.wav",
			0.56234133,
			1,
			20
		};
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",
			"db-3",
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",
			"db-3",
			1,
			20
		};
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class manual: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"fin_PKM_Shot_SoundSet",
					"fin_PKM_Tail_SoundSet"
				};
			};
			showToPlayer=1;
			dispersion=0.0015;
			reloadTime=0.059999999;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class close: manual
		{
			showToPlayer=0;
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=5;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=400;
			midRangeProbab=0.60000002;
			maxRange=600;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			burst=5;
			aiRateOfFire=9;
			aiRateOfFireDistance=900;
			minRange=450;
			minRangeProbab=0.039999999;
			midRange=650;
			midRangeProbab=0.5;
			maxRange=900;
			maxRangeProbab=0.0099999998;
		};
	};
	class ffp_kk_pkm_old: ffp_kk_pkm
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
	};
};
