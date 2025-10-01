class CfgPatches
{
	class DadaCore_BaseItems // CHANGE <TEMPLATE> to INVESTOR DISCORD NAME
	{
		weapons[] = {}; // DO NOT TOUCH
		requiredVersion = 0.1; // DO NOT TOUCH
		requiredAddons[] = {"DadaCore"};
		units[] = {}; // DO NOT TOUCH
	};
};

class CfgVehicles
{
    class Inventory_Base;
    class HouseNoDestruct;

	class Dada_InHandsPlaceable_Colorbase: Inventory_Base
	{
		scope = 2;
		displayName = "Placeable Item";
		descriptionShort = "An Item you can place from your hands";
		model = "\dz\gear\medical\ChelatingTablets.p3d";
		itemSize[] = {4,4};
		weight = 300;
		rotationFlags = 64;
		itemBehaviour = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\gear\medical\data\chelating_tablets_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\medical\data\chelating_tablets.rvmat"};
	};


	class Land_Dada_AdminPlaceable_Colorbase: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\gear\camping\MediumTent.p3d";
		hiddenSelections[] = {"bags","camo","xlights_glass_r","xlights_glass_g","xlights_glass_b","xlights_glass_y"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.470588,0.470588,0.470588,1.0,co)","dz\gear\camping\data\tent_pristine_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\camping\data\tent_medium_packed.rvmat","dz\gear\camping\data\tent_medium_pitched.rvmat"};

	};
};