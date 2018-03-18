////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.66
//'now' is Mon Feb 19 18:27:15 2018 : 'file' last modified on Sun Feb 18 16:18:36 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class DRCAssets : config.bin{
class CfgPatches
{
	class WHObjects
	{
		units[] = {"WallSpike","Wall","WallSpikeLong","WallLong", "SmallWarehouse1", "Warehouse2Story", "SmallL1","SmallL2","SmallC2Story","SmallT1","Square2Story1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredaddons[] = {};
	};
};
class CfgVehicles
{
	class All{};
	class Static: All{};
	class Building: Static{};
	class NonStrategic: Building{};
	class TargetTraining: NonStrategic{};
	class TargetGrenade: TargetTraining{};
	class WHObjects: TargetGrenade
	{
		model = "\WHObjects\Model\wallspike.p3d";
		armor = 2000000;
		scope = 0;
		scopeArsenal = 0;
		scopeCurator = 0;
		displayName = "Wall (Spiked)";
		faction = "Empty";
		vehicleClass = "Objects";
	};
	class WallSpike: WHObjects
	{
		model = "\WHObjects\Model\wallspike.p3d";
		armor = 2000000;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "Wall (Spiked)";
		faction = "Empty";
		vehicleClass = "Objects";
	};
	class WallNoSpike: WHObjects
	{
		model = "\WHObjects\Model\wall.p3d";
		armor = 2000000;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "Wall (No Spike)";
		faction = "Empty";
		vehicleClass = "Objects";
	};
	class WallSpikeLong: WHObjects
	{
		model = "\WHObjects\Model\wallspikeLong.p3d";
		armor = 2000000;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "Wall Long(Spiked)";
		faction = "Empty";
		vehicleClass = "Objects";
	};
	class WallNoSpikeLong: WHObjects
	{
		model = "\WHObjects\Model\wallLong.p3d";
		armor = 2000000;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "Wall Long(No Spike)";
		faction = "Empty";
		vehicleClass = "Objects";
	};
	class SmallWarehouse1: WHObjects
	{
		model = "\WHObjects\Model\SmallWarehouse1.p3d";
		armor = 2000000;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "Small Warehouse 1 (Flat Ground)";
		faction = "Empty";
		vehicleClass = "Objects";
	};
	class Warehouse2Story: WHObjects
	{
		model = "\WHObjects\Model\Warehouse2StoryPiece1.p3d";
		armor = 2000000;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "Warehouse 2 Story (Flat Ground)";
		faction = "Empty";
		vehicleClass = "Objects";
	};
	class SmallL1: WHObjects
	{
		model = "\WHObjects\Model\SmallL1.p3d";
		armor = 2000000;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "Small L 1 (Flat Ground)";
		faction = "Empty";
		vehicleClass = "Objects";
	};
	class SmallL2: WHObjects
	{
		model = "\WHObjects\Model\SmallL2.p3d";
		armor = 2000000;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "Small L 2 (Flat Ground)";
		faction = "Empty";
		vehicleClass = "Objects";
	};
	class SmallC2Story: WHObjects
	{
		model = "\WHObjects\Model\SmallC2Story.p3d";
		armor = 2000000;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "Small C 2-Story (Flat Ground)";
		faction = "Empty";
		vehicleClass = "Objects";
	};
	class SmallT1: WHObjects
	{
		model = "\WHObjects\Model\SmallT1.p3d";
		armor = 2000000;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "Small T 1";
		faction = "Empty";
		vehicleClass = "Objects";
	};
	class Square2Story1: WHObjects
	{
		model = "\WHObjects\Model\Square2Story1.p3d";
		armor = 2000000;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "Square 2-Story 1";
		faction = "Empty";
		vehicleClass = "Objects";
	};
};


//};
