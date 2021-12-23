#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class New_Eden
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredaddons[]=
		{
			"A3_Map_Stratis"
		};
		version="18/10/2019";
		fileName="New_Eden.pbo";
		author="LHK";
	};
};
class CfgWorlds
{
	class CAWorld;
	class Stratis: CAWorld
	{
		class Grid;
		class DefaultClutter;
	};
	class New_Eden: Stratis
	{
		cutscenes[]={};
		author="LHK";
		description="New Eden";
		pictureMap="life_master\data\imagery\New_Eden_pictureMap.paa";
		worldName="New_Eden\New_Eden.wrp";
		startTime="11:00";
		startDate="05/03/2001";
		startWeather=0.2;
		startFog=0;
		forecastWeather=0.60000002;
		forecastFog=0;
		centerPosition[]={10240,10240,500};
		seagullPos[]={10240,10240,500};
		longitude=65;
		latitude=-34;
		elevationOffset=5;
		envTexture="A3\Data_f\env_land_ca.paa";
		minTreesInForestSquare=2;
		minRocksInRockSquare=2;
		newRoadsShape="\New_Eden\data\roads\roads.shp";
		ilsPosition[]={1024,1024};
		ilsDirection[]={0.50749999,0.079999998,-0.86159998};
		ilsTaxiIn[]={};
		ilsTaxiOff[]={};
		drawTaxiway=0;
		class SecondaryAirports
		{
		};
		class Sea
		{
			seaTexture="a3\data_f\seatexture_co.paa";
			seaMaterial="#water";
			shoreMaterial="#shore";
			shoreFoamMaterial="#shorefoam";
			shoreWetMaterial="#shorewet";
			WaterMapScale=20;
			WaterGrid=50;
			MaxTide=0;
			MaxWave=0;
			SeaWaveXScale="2.0/50";
			SeaWaveZScale="1.0/50";
			SeaWaveHScale=2;
			SeaWaveXDuration=5000;
			SeaWaveZDuration=10000;
		};
		class Grid: Grid
		{
			offsetX=0;
			offsetY=20480;
			class Zoom1
			{
				zoomMax=0.15000001;
				format="XY";
				formatX="000";
				formatY="000";
				stepX=100;
				stepY=-100;
			};
			class Zoom2
			{
				zoomMax=0.85000002;
				format="XY";
				formatX="00";
				formatY="00";
				stepX=1000;
				stepY=-1000;
			};
			class Zoom3
			{
				zoomMax=1e+030;
				format="XY";
				formatX="0";
				formatY="0";
				stepX=10000;
				stepY=-10000;
			};
		};
		class Clutter
		{
			class New_Eden_BigFallenBranches_pine: DefaultClutter
			{
				model="A3\Plants_F\Clutter\c_bigFallenBranches_pine.p3d";
				affectedByWind=0;
				swLighting="false";
				scaleMin=0.30000001;
				scaleMax=0.69999999;
			};
			class New_Eden_BigFallenBranches_pine02: DefaultClutter
			{
				model="A3\Plants_F\Clutter\c_bigFallenBranches_pine02.p3d";
				affectedByWind=0;
				swLighting="false";
				scaleMin=0.30000001;
				scaleMax=0.69999999;
			};
			class New_Eden_BigFallenBranches_pine03: DefaultClutter
			{
				model="A3\Plants_F\Clutter\c_bigFallenBranches_pine03.p3d";
				affectedByWind=0;
				swLighting="false";
				scaleMin=0.30000001;
				scaleMax=0.69999999;
			};
			class New_Eden_GrassGreenGroup: DefaultClutter
			{
				model="A3\plants_f\Clutter\c_StrGrassGreen_group.p3d";
				affectedByWind=0.60000002;
				swLighting="true";
				scaleMin=0.69999999;
				scaleMax=1;
			};
			class New_Eden_GrassDry: DefaultClutter
			{
				model="A3\plants_f\Clutter\c_StrGrassDry.p3d";
				affectedByWind=0.5;
				swLighting="true";
				scaleMin=0.80000001;
				scaleMax=1.2;
			};
			class New_Eden_GrassDryGroup: DefaultClutter
			{
				model="A3\plants_f\Clutter\c_StrGrassDry_group.p3d";
				affectedByWind=0.64999998;
				swLighting="true";
				scaleMin=0.64999998;
				scaleMax=1;
			};
			class New_Eden_GrassDryMediumGroup: DefaultClutter
			{
				model="A3\plants_f\Clutter\c_StrGrassDryMedium_group.p3d";
				affectedByWind=0.69999999;
				swLighting="true";
				scaleMin=0.80000001;
				scaleMax=1;
			};
			class New_Eden_WeedBrownTallGroup: DefaultClutter
			{
				model="A3\plants_f\Clutter\c_StrWeedBrownTall_group.p3d";
				affectedByWind=0.30000001;
				swLighting="true";
				scaleMin=0.89999998;
				scaleMax=1.25;
			};
			class New_Eden_WeedGreenTall: DefaultClutter
			{
				model="A3\plants_f\Clutter\c_StrWeedGreenTall.p3d";
				affectedByWind=0.30000001;
				swLighting="true";
				scaleMin=0.80000001;
				scaleMax=1.2;
			};
			class New_Eden_PlantMullein: DefaultClutter
			{
				model="A3\plants_f\Clutter\c_StrPlantMullein.p3d";
				affectedByWind=0.34999999;
				swLighting="true";
				scaleMin=0.69999999;
				scaleMax=1.15;
			};
			class New_Eden_ThistleYellowShrub: DefaultClutter
			{
				model="A3\plants_f\Clutter\c_StrThistleYellowShrub.p3d";
				affectedByWind=0.2;
				swLighting="true";
				scaleMin=0.69999999;
				scaleMax=1.1;
			};
			class New_Eden_ThistleThornGreen: DefaultClutter
			{
				model="A3\plants_f\Clutter\c_Thistle_Thorn_Green.p3d";
				affectedByWind=0.30000001;
				swLighting="false";
				scaleMin=0.30000001;
				scaleMax=1;
			};
			class New_Eden_ThistleThornGreenSmall: DefaultClutter
			{
				model="A3\plants_f\Clutter\c_Thistle_Thorn_Green.p3d";
				affectedByWind=0.25;
				swLighting="false";
				scaleMin=0.40000001;
				scaleMax=0.69999999;
			};
			class New_Eden_FlowerLowYellow2: DefaultClutter
			{
				model="A3\plants_f\Clutter\c_Flower_Low_Yellow2.p3d";
				affectedByWind=0.40000001;
				swLighting="true";
				scaleMin=0.60000002;
				scaleMax=1;
			};
		};
		class Names
		{
			class SeaSideCity
			{
				name="Sea Side City";
				position[]={16977.381,5860.7998};
				type="CityCenter";
				radiusA=558.98999;
				radiusB=285.67999;
				angle=0;
			};
		};
	};
};
class CfgWorldList
{
	class New_Eden
	{
	};
};
class CfgMissions
{
	class Cutscenes
	{
	};
};
class CfgFunctions
{
	class New_Eden
	{
		class Protection
		{
			file="\New_Eden";
			class wantedFetch
			{
			};
		};
	};
	class Ark_buildings
	{
		tag="Ark";
		class Scripts
		{
			file="New_Eden\scripts";
			class Antisteal
			{
				postInit=1;
			};
		};
	};
};
class CfgSurfaces
{
	class Default
	{
	};
	class New_Eden_dirt_Surface: Default
	{
		files="new_eden_dirt_*";
		rough=0.090000004;
		maxSpeedCoef=0.89999998;
		dust=0.5;
		soundEnviron="dirt";
		character="Empty";
		soundHit="soft_ground";
		lucidity=1;
		grassCover=0.029999999;
	};
	class New_Eden_dry_grass_Surface: Default
	{
		files="new_eden_dry_grass_*";
		rough=0.079999998;
		maxSpeedCoef=0.89999998;
		dust=0.75;
		soundEnviron="drygrass";
		character="New_Eden_dry_grass_Character";
		soundHit="soft_ground";
		lucidity=2;
		grassCover=0.1;
	};
	class New_Eden_forest_pine_Surface: Default
	{
		files="new_eden_forest_pine_*";
		rough=0.12;
		maxSpeedCoef=0.80000001;
		dust=0.40000001;
		soundEnviron="drygrass";
		character="New_Eden_forest_pine_Character";
		soundHit="soft_ground";
		lucidity=3.5;
		grassCover=0.039999999;
	};
	class New_Eden_grass_green_Surface: Default
	{
		files="new_eden_grass_green_*";
		rough=0.079999998;
		maxSpeedCoef=0.89999998;
		dust=0.15000001;
		soundEnviron="grass";
		character="New_Eden_green_grass_Character";
		soundHit="soft_ground";
		lucidity=4;
		grassCover=0.050000001;
	};
	class New_Eden_soil_Surface: Default
	{
		files="new_eden_soil_*";
		rough=0.090000004;
		maxSpeedCoef=0.89999998;
		dust=0.5;
		soundEnviron="dirt";
		character="Empty";
		soundHit="hard_ground";
		lucidity=1;
		grassCover=0;
	};
};
class CfgSurfaceCharacters
{
	class New_Eden_forest_pine_Character
	{
		probability[]={0.050000001,0.012,0.0099999998,0.1,0.050000001};
		names[]=
		{
			"New_Eden_BigFallenBranches_pine",
			"New_Eden_BigFallenBranches_pine02",
			"New_Eden_BigFallenBranches_pine03",
			"New_Eden_GrassDryGroup",
			"New_Eden_GrassGreenGroup"
		};
	};
	class New_Eden_green_grass_Character
	{
		probability[]={0.92000002,0.07};
		names[]=
		{
			"New_Eden_GrassGreenGroup",
			"New_Eden_FlowerLowYellow2"
		};
	};
	class New_Eden_dry_grass_Character
	{
		probability[]={0.20999999,0.34999999,0.20999999,0.090000004,0.059999999,0.02};
		names[]=
		{
			"New_Eden_GrassDryGroup",
			"New_Eden_GrassDryMediumgroup",
			"New_Eden_WeedBrownTallGroup",
			"New_Eden_WeedGreenTall",
			"New_Eden_ThistleYellowShrub",
			"New_Eden_PlantMullein"
		};
	};
};
