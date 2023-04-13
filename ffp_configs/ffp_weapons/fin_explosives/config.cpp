class CfgPatches
{
	class ffp_explosives
	{
		units[]=
		{
			"ffp_telamiina",
			"ffp_sm_65_98"
		};
		weapons[]={};
		magazines[]=
		{
			"ffp_telamiina_mag",
			"ffp_sm_65_98_mag",
			"ffp_vp10_mag"
		};
		ammo[]=
		{
			"ffp_vp10_ammo",
			"ffp_telamiina_ammo",
			"ffp_vp10_ammo",
			"ffp_sm_65_98_ammo"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"Finnish_Forces_Pack"
		};
	};
};
class CfgAmmo
{
	class ATMine_Range_Ammo;
	class APERSMine_Range_Ammo;
	class ffp_telamiina_ammo: ATMine_Range_Ammo
	{
		icon="iconExplosiveAT";
		mapsize=1;
		explosionType="mine";
		triggerWhenDestroyed=1;
		underwaterHitRangeCoef=2;
		mineTrigger="TankTriggerMagnetic";
		soundTrigger[]=
		{
			"A3\Sounds_F\weapons\mines\mech_trigger_2",
			3,
			1,
			50
		};
		soundActivation[]=
		{
			"A3\Sounds_F\weapons\mines\mech_activate_mine_1",
			0.56234133,
			1,
			30
		};
		soundDeactivation[]=
		{
			"A3\Sounds_F\weapons\mines\deactivate_mine_3a",
			0.56234133,
			1,
			30
		};
		aiAmmoUsageFlags=16;
		Model="\ffp_weapons\fin_explosives\telamiina\telamiina.p3d";
		defaultMagazine="ffp_telamiina_mag";
		mineModelDisabled="\ffp_weapons\fin_explosives\telamiina\telamiina.p3d";
	};
	class sfp_frdnmina13_ammo;
	class ffp_vp10_ammo: sfp_frdnmina13_ammo
	{
		Model="\ffp_weapons\fin_explosives\vp10\vp10.p3d";
		defaultMagazine="ffp_vp10_mag";
		mineModelDisabled="\ffp_weapons\fin_explosives\vp10\vp10.p3d";
	};
	class ffp_sm_65_98_ammo: APERSMine_Range_Ammo
	{
		Model="\ffp_weapons\fin_explosives\sm_65_98\sm_65_98.p3d";
		defaultMagazine="ffp_sm_65_98_mag";
		mineModelDisabled="\ffp_weapons\fin_explosives\sm_65_98\sm_65_98.p3d";
	};
};
class cfgMagazines
{
	class sfp_frdnmina13_mag;
	class APERSMine_Range_Mag;
	class ffp_telamiina_mag: APERSMine_Range_Mag
	{
		ace_explosives_Placeable=0;
		author="Finnish Forces Pack (FINMOD)";
		dlc="ffp";
		scope=2;
		scopeArsenal=2;
		mass=80;
		displayName="Telamiina";
		descriptionUse="$STR_A3_cfgMagazines_ATMine_Range_Mag0";
		picture="\ffp_weapons\fin_explosives\telamiina\data\UI\telamiina_ca.paa";
		model="\ffp_weapons\fin_explosives\telamiina\telamiina.p3d";
		useAction=1;
		useActionTitle="$STR_ACTION_PUTBOMB";
		type="2*  256";
		allowedSlots[]={901};
		value=5;
		ammo="ffp_telamiina_ammo";
		nameSoundWeapon="mine";
		nameSound="mine";
		count=1;
		initSpeed=0;
		maxLeadSpeed=0;
		descriptionShort="Telamiina";
		weaponPoolAvailable=1;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622776,
			1,
			10
		};
	};
	class ffp_sm_65_98_mag: APERSMine_Range_Mag
	{
		ace_explosives_Placeable=0;
		useAction=1;
		author="Finnish Forces Pack (FINMOD)";
		dlc="ffp";
		scope=2;
		scopeArsenal=2;
		displayName="SM 65-98";
		ammo="ffp_sm_65_98_ammo";
		Model="\ffp_weapons\fin_explosives\sm_65_98\sm_65_98.p3d";
		picture="\ffp_weapons\fin_explosives\sm_65_98\data\UI\sakaramiina_ui.paa";
	};
	class ffp_vp10_mag: sfp_frdnmina13_mag
	{
		author="Finnish Forces Pack (FINMOD)";
		ace_explosives_Placeable=0;
		useAction=1;
		dlc="ffp";
		scope=2;
		scopeArsenal=2;
		displayName="VP 10";
		ammo="ffp_vp10_ammo";
		Model="\ffp_weapons\fin_explosives\vp10\vp10.p3d";
		picture="\ffp_weapons\fin_explosives\vp10\data\UI\viuhkamiina_ui.paa";
	};
};
class cfgWeapons
{
	class Default;
	class Put: Default
	{
		muzzles[]+=
		{
			"ffp_sm_65_98Muzzle",
			"ffp_telamiinaMuzzle",
			"ffp_vp10Muzzle"
		};
		class PutMuzzle;
		class ffp_sm_65_98Muzzle: PutMuzzle
		{
			dlc="ffp";
			displayName="Mine (SM 65-98)";
			magazines[]=
			{
				"ffp_sm_65_98_mag"
			};
			autoreload=0;
			enableAttack=1;
			picture="\A3\Weapons_F\Data\clear_empty.paa";
			showToPlayer=0;
		};
		class ffp_telamiinaMuzzle: ffp_sm_65_98Muzzle
		{
			displayName="Mine (Telamiina)";
			magazines[]=
			{
				"ffp_telamiina_mag"
			};
		};
		class ffp_vp10Muzzle: ffp_sm_65_98Muzzle
		{
			displayName="Mine (VP 10)";
			magazines[]=
			{
				"ffp_vp10_mag"
			};
		};
	};
};
class CfgVehicles
{
	class sfp_strvm5;
	class APERSMine;
	class ffp_sm_65_98: APERSMine
	{
		author="Finnish Forces Pack (FINMOD)";
		dlc="ffp";
		scope=2;
		ammo="ffp_sm_65_98_ammo";
		displayName="FFP - SM 65-98";
		Model="\ffp_weapons\fin_explosives\sm_65_98\sm_65_98.p3d";
	};
	class ffp_telamiina: sfp_strvm5
	{
		author="Finnish Forces Pack (FINMOD)";
		dlc="ffp";
		scope=2;
		scopeArsenal=2;
		ammo="ffp_telamiina_ammo";
		model="\ffp_weapons\fin_explosives\telamiina\telamiina.p3d";
		displayName="FFP - Telamiina";
		icon="iconExplosiveAP";
		descriptionShort="$STR_A3_cfgMagazines_ClassicMineWireMagazine1";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_ClassicMineWireMagazine_Library0";
		};
	};
	class ffp_vp10: sfp_strvm5
	{
		author="Finnish Forces Pack (FINMOD)";
		dlc="ffp";
		displayName="FFP - VP 10";
		ammo="ffp_vp10_ammo";
		Model="\ffp_weapons\fin_explosives\vp10\vp10.p3d";
	};
};
