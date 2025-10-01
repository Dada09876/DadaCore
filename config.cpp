#define _ARMA_

class CfgPatches
{
	class DadaCore
	{
		requiredAddons[] = {"DZ_Data","DZ_Scripts"};
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	class DadaCore
	{
		dir = "Source_Files\DadaCore";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "DadaCore";
		credits = "";
		author = "Dada";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"Source_Files\DadaCore\scripts\3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"Source_Files\DadaCore\scripts\4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"Source_Files\DadaCore\scripts\5_Mission"};
			};
		};
	};
};
