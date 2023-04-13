class CfgPatches
{
	class ffp_attachments
	{
		units[]=
		{
			"pp09",
			"ffp_ta11_3d",
			"ffp_ta11_2d"
		};
		weapons[]=
		{
			"ffp_vv2000_sidemount",
			"ffp_ta11_3d",
			"ffp_ta11_2d",
			"ffp_pp04",
			"ffp_pp09"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Items",
			"cba_jr",
			"sfp_attachments"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class asdg_SlotInfo;
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryUnderItem_Base_F;
	class ffp_vv2000_sidemount: ItemCore
	{
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_vv2000_sidemount";
		descriptionshort="$STR_desc_ffp_vv2000_sidemount";
		displaynameshort="$STR_s_ffp_vv2000_sidemount";
		dlc="ffp";
		scope=2;
		model="\ffp_attachments\fin_vv2000\vv2000_sidemount.p3d";
		picture="\ffp_attachments\fin_vv2000\data\ui\vv2000_gear_ca.paa";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=0;
			mass=4;
			modelOptics="\ffp_attachments\fin_vv2000\vv2000_scope.p3d";
			class OpticsModes
			{
				class NVS
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.25;
					opticsZoomMax=0.75;
					opticsZoomInit=0.75;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
				class Cqb
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=0.5;
					opticsZoomInit=0.5;
					memoryPointCamera="eye";
					visionMode[]={};
					discreteDistance[]={150,100,200,300,400,500,600};
					discreteDistanceInitIndex=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
				};
			};
		};
		inertia=0.1;
	};
	class ffp_ta11_3d: ItemCore
	{
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_ta11_3d";
		descriptionshort="$STR_desc_ffp_ta11_3d";
		displaynameshort="$STR_s_ffp_ta11_3d";
		dlc="ffp";
		scope=2;
		picture="\ffp_attachments\fin_ta11\data\ui\ta11_ca.paa";
		model="ffp_attachments\fin_ta11\fin_ta11.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=8;
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Scope
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.125;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					memoryPointCamera="opticView";
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
				class Cqb
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
				};
			};
		};
		inertia=0.1;
	};
	class ffp_ta11_2d: ffp_ta11_3d
	{
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_ta11_2d";
		descriptionshort="$STR_desc_ffp_ta11_2d";
		displaynameshort="$STR_s_ffp_ta11_2d";
		dlc="ffp";
		class ItemInfo: ItemInfo
		{
			modelOptics="ffp_attachments\fin_ta11\fin_ta11_2d_optic.p3d";
			class OpticsModes
			{
				class Scope
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.125;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					memoryPointCamera="opticView";
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
				class Cqb
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
				};
			};
		};
	};
	class ffp_pp04: ItemCore
	{
		scope=2;
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_pp2004";
		descriptionshort="$STR_desc_ffp_pp2004";
		displaynameshort="$STR_s_ffp_pp2004";
		dlc="ffp";
		picture="\ffp_attachments\fin_pp04\data\AimPointCS_ui_ca.paa";
		model="\ffp_attachments\fin_pp04\AimPointCS.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=6;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class aim
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="opticView";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=150;
					distanceZoomMax=150;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"Default"
					};
				};
			};
		};
		inertia=0.1;
	};
	class ffp_pp09: ItemCore
	{
		scope=2;
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_pp2009";
		descriptionshort="$STR_desc_ffp_pp2009";
		displaynameshort="$STR_s_ffp_pp2009";
		dlc="ffp";
		picture="\ffp_attachments\fin_pp09\data\UI\punapiste2009_ca.paa";
		model="\ffp_attachments\fin_pp09\pp09.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=6;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class aim
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"Default"
					};
				};
			};
		};
		inertia=0.1;
	};
};
class CfgVehicles
{
	class Item_Base_F;
	class pp09: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="pp09";
		author="FinMod";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class pp09
			{
				name="ffp_pp09";
				count=1;
			};
		};
	};
	class ffp_ta11_3d: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		author="$STR_FFPMod_Author";
		displayname="$STR_ffp_ta11_3d";
		descriptionshort="$STR_desc_ffp_ta11_3d";
		displaynameshort="$STR_s_ffp_ta11_3d";
		dlc="ffp";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class ffp_ta11_3d
			{
				name="ffp_ta11_3d";
				count=1;
			};
		};
	};
	class ffp_ta11_2d: ffp_ta11_3d
	{
		class TransportItems
		{
			class ffp_ta11_2d
			{
				name="ffp_ta11_2d";
				count=1;
			};
		};
	};
};
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		ffp_ta11_3d=1;
		ffp_ta11_2d=1;
		ffp_pp09=1;
		ffp_pp04=1;
	};
};
