/*
	Zupa's Capture Points
	Configuration of ZCP
	Capture points and earn rewards.

	╔════╗─────────╔═══╗────────╔╗─────────────╔╗
	╚══╗═║─────────╚╗╔╗║────────║║────────────╔╝╚╗
	──╔╝╔╬╗╔╦══╦══╗─║║║╠══╦╗╔╦══╣║╔══╦╗╔╦══╦═╗╚╗╔╬══╗
	─╔╝╔╝║║║║╔╗║╔╗║─║║║║║═╣╚╝║║═╣║║╔╗║╚╝║║═╣╔╗╗║║║══╣
	╔╝═╚═╣╚╝║╚╝║╔╗║╔╝╚╝║║═╬╗╔╣║═╣╚╣╚╝║║║║║═╣║║║║╚╬══║
	╚════╩══╣╔═╩╝╚╝╚═══╩══╝╚╝╚══╩═╩══╩╩╩╩══╩╝╚╝╚═╩══╝
	────────║║
	────────╚╝
*/

// First person in the Cap zone is the capper (If he leaves, the closest on of the group is the new capper but time is reset!).
// When multiple people are in the zone and not in the same group, the zone is contested and the timer pauses
// Being first in the zone starts the timer.
// Holding a zone  gives you a reward after x Min.

ZCP_dev = false; // Devmode for shorter development capture times

ZCP_AI_Type = 'DMS'; // NONE | DMS | FUMS

ZCP_useOldMessages = false;

/*Exile Toasts Notification Settings*/
ZCP_DMS_ExileToasts_Title_Size			= 22;					// Size for Client Exile Toasts  mission titles.
ZCP_DMS_ExileToasts_Title_Font			= "puristaMedium";			// Font for Client Exile Toasts  mission titles.
ZCP_DMS_ExileToasts_Message_Color		= "#FFFFFF";				// Exile Toasts color for "ExileToast" client notification type.
ZCP_DMS_ExileToasts_Message_Size		= 19;					// Exile Toasts size for "ExileToast" client notification type.
ZCP_DMS_ExileToasts_Message_Font		= "PuristaLight";			// Exile Toasts font for "ExileToast" client notification type.
/*Exile Toasts Notification Settings*/

ZCP_AI_useLaunchersChance = 25; // %Change to spawn Launcher on AI soldier ( never exceeds the MIN and MAX defined per cappoint).

// Put the following to -1 to disable it.
ZCP_AI_killAIAfterMissionCompletionTimer = 60; // Amount of seconds before all ZCP AI get auto killed after a mission is completed. ( DMS only ).

// ZCP_Min_AI_Amount = 4; Not used anymore
// ZCP_Random_AI_Max = 8; Not used anymore

ZCP_MessagePlayersBeforeWaves = true; // True -> Inform for an icoming wave of AI, false is not inform the players inside.

// ZCP_CapTime = 300; // Now defined for each mission seperate
ZCP_ServerStartWaitTime = 120;
ZCP_MinWaitTime = 120; // seconds to wait to spawn a new capturepoint when 1 was capped.
ZCP_MaxWaitTime = 120; // random between 0 and THIS number added to the ZCP_MinWaitTime to counter spawning points at the same time
ZCP_BaseCleanupDelay = 180; // seconds to wait to delete a captured base.

ZCP_RewardRelativeToPlayersOnline = true; // This will recalculate the crypto reward according the amount of online players.
ZCP_PoptabReward = 25; // Poptab reward for capping per player online. ( When poptab reward is selected or randomly chosen ).
ZCP_MinPoptabReward = 1000; // Poptabreward is added to this number

ZCP_ReputationReward = 25; // Respect reward for capping per  player online.
ZCP_MinReputationReward = 1000; // ZCP_ReputationReward is added to this number
ZCP_ReputationRewardForGroup = 500; // Each group members gets this amount of reputation ( for the trouble).
ZCP_CONFIG_GroupDistanceForRespect = 2000; // meters to be close to the capper to get the group award

ZCP_CleanupBase = true; // Let the base dissappear after completing
ZCP_CleanupBaseWithAIBomber = false; // Cleanup with a airstrike
ZCP_CleanupAIVehicleClasses = ['B_Plane_CAS_01_F']; // Any flying vehicle in arma (default B_Plane_CAS_01_F = A10)
ZCP_FlyHeight = 150; // Height of the flying plane;

ZCP_BomberCanDestroyMapBuildings = true; // if true damage of the bombs are applied to all objects in the blastradius.
// If false nothing gets hit ( except players and vehicles ) - base cleanup will happen in both cases after explosion.

ZCP_UseSpecificNamesForCappers = false; // Use the player name, if false it says 'A player'

// ZCP_giveSurvivalBoxWithPoptabsReward = true; not used anymore. You can now define multiple rewards per mission.
ZCP_RewardWeightForRandomChoice = [
	["Poptabs", 4],
	["BuildBox", 4],
	["WeaponBox", 4],
	["SurvivalBox", 3],
	["Vehicle", 2],
	["SniperWeaponBox", 1],
	["BigWeaponBox", 2]
];
// How does this work ( 6 + 3 + 5 + 2 = 16)
// 6/16 = 37.50 %
// 3/16 = 18.75 %
// 5/16 = 31.25 %
// 2/16 = 12.50 %
// You can add extra types here if you want them in the random option.

// Server will keep as many missions up as ZCP_MaxMissions, And they will be randomly chosen from the following list

ZCP_MaxMissions = 2; // Amount of cap points at the same time when ZCP_MaxMissionsRelativeToPlayers = false

ZCP_Minimum_Online_Players = 0; // Amount of players to be online before it allows to spawn a capture point. !!! O = always

ZCP_MaxMissionsRelativeToPlayers = true; // ZCP_MaxMissions will be ignored if true. ZCP_RelativeMaxMissions will be used
ZCP_RelativeMaxMissions = [
    //[ min players,  amount of cappoints],
    [25, 1],
    [25, 2]
];
ZCP_SecondsCheckPlayers = 600; // seconds for loop check if the server holds more players now (and spawn extra cappoints). ( 600 = every 10 minuts)

// For every spawned mission,
// buildeditor currenty supported -> m3e, xcam, EdenConverted ( THis is exported as terrainbuilder and converted with my site), m3eEden
ZCP_CapBases = [ // located in capbases folder [filename, capradius, buildeditor, max terraingradient (if not overwritten by staticbasefile), radius of open space for it to spawn base]
	["m3e_base1.sqf", 60, "m3e", 90, 60],
	["m3e_village.sqf", 50, "m3e", 90, 50],
	["xcam_milPoint.sqf", 50, "xcam", 90, 50],
	["ec_audacity.sqf", 30, "EdenConverted", 90, 30],
	["ec_bravery.sqf", 35, "EdenConverted", 90, 35],
	["ec_courage.sqf", 25, "EdenConverted", 90, 25],
	["ec_defiance.sqf", 20, "EdenConverted", 90, 20],
	["ec_endurance.sqf", 20, "EdenConverted", 90, 20],
	["ec_fortitude.sqf", 25, "EdenConverted", 90, 25],
	["m3e_exoBase1.sqf", 30, "m3e", 90, 50],
  ["m3e_exoBase2.sqf", 30, "m3e", 90, 50],
  ["m3e_exoBase3.sqf", 35, "m3e", 90, 50]
];

ZCP_Blacklist = [ // [ [x,y,z], radius ];
	//[[23644,18397,0] , 1200], // altis saltlake
	[[-999,-999,0] , 500],
	[[-999,-999,0] , 500]
];

ZCP_createVirtualCircle = true;

ZCP_circleNeutralColor = "#(rgb,8,8,3)color(0,1,0,1)"; // green
ZCP_circleCappingColor = "#(rgb,8,8,3)color(0,0,1,1)"; // blue
ZCP_circleContestedColor = "#(rgb,8,8,3)color(1,0,0,1)"; // red

//Boxtypes
ZCP_SurvivalBox = "O_supplyCrate_F";
ZCP_BuildingBox = "O_CargoNet_01_ammo_F";
ZCP_WeaponBox = "I_CargoNet_01_ammo_F";

/* 3.1 new configs */
ZCP_CONFIG_TerritoryDistance = 50;  // Distance from territories. ( 0 to disable )

ZCP_CONFIG_AI_side = east; // The side where the AI is on.
ZCP_CONFIG_AI_soldierClass = 'O_G_Soldier_F'; // The class model for the soldier ( This needs to be a soldier from the AI faction! -> otherwise they shoot eachother on spawn)
ZCP_CONFIG_MaxRandomAIMoney = 100; // Max poptabs on in AI it's inventory. ( Random between 0 -> this number ).

// These are used when the cappoint is a city point.
ZCP_CONFIG_UseCityName = true; // Use City name CP for maker naming instead of ZCP alpha..
ZCP_CONFIG_CityDistanceToPlayer = 100; // distance for the town to be from a player ( From center town )
ZCP_CONFIG_CityDistanceToTrader = 500; // distance for the town to be from a trader ( From center town )
ZCP_CONFIG_CityDistanceToSpawn = 500; // distance for the town to be from a spawnpoint ( From center town )
ZCP_CONFIG_CityDistanceToTerritory = 100; // distance for the town to be from a spawnpoint ( From center town )
ZCP_CONFIG_CityDistanceToAI = 100; // distance for the town to be from other AI missions, patrols ..

/* END NEW CONFIGS 3.1 */

// Same as DMS -> Credits DMS
ZCP_DistanceBetweenMissions = 500;
ZCP_SpawnZoneDistance = 500;
ZCP_TradeZoneDistance = 500;
ZCP_DistanceFromWater = 100;
ZCP_DistanceFromPlayers = 200;
ZCP_DistanceFromBaseObjects = 100;

ZCP_CONFIG_BaseObjectsClasses = [
                                    'Exile_Construction_Abstract_Physics',
                                     'Exile_Construction_Abstract_Static'
                                 ];


ZCP_TraderZoneMarkerTypes =			[							// If you're using custom trader markers, make sure you define them here. CASE SENSITIVE!!!
										"ExileTraderZone"
									];
ZCP_SpawnZoneMarkerTypes =			[							// If you're using custom spawn zone markers, make sure you define them here. CASE SENSITIVE!!!
										"ExileSpawnZone"
									];



/* These are arma 3 colors, look up the color naming if you are going to change this */
ZCP_FreeColor = "ColorGreen"; // uncontested marker color -> also correct size
ZCP_CappedColor = "ColorBlue"; // uncontested + capping color
ZCP_ContestColor = "ColorRed"; // contested + capping color
ZCP_BackgroundColor = "ColorWhite"; // Color to get attention on the map, if zoomed out this will be bigger then the cap circle which is the normal size.
ZCP_MissionMarkerWinDotTime = 120; // Seconds to show a marker after a capped point. Change to 0 to disable!

ZCP_DisableVehicleReward = false; // Because it doesnt save without changing epoch code.

/* Uses DMS system, why make one if it already excist? Credits DMS */
ZCP_DMS_MinimumMagCount					= 2;						// Minimum number of magazines for weapons.
ZCP_DMS_MaximumMagCount					= 4;						// Maximum number of magazines for weapons.
ZCP_DMS_CrateCase_Sniper =				DMS_CrateCase_Sniper;
ZCP_DMS_BoxWeapons =					DMS_BoxWeapons;
ZCP_DMS_BoxFood =						DMS_BoxFood;
ZCP_DMS_BoxDrinks =						DMS_BoxDrinks;
ZCP_DMS_BoxMeds =						DMS_BoxMeds;
ZCP_DMS_BoxSurvivalSupplies	=			[							//List of survival supplies (food/drink/meds) that can spawn in a crate. "ZCP_DMS_BoxFood", "ZCP_DMS_BoxDrinks", and "ZCP_DMS_BoxMeds" is automatically added to this list.
										"Exile_Item_Matches",
										"Exile_Item_CookingPot",
										"Exile_Melee_Axe",
										"Exile_Item_CanOpener"
									] + ZCP_DMS_BoxFood + ZCP_DMS_BoxDrinks + ZCP_DMS_BoxMeds;
ZCP_DMS_BoxBaseParts =					DMS_BoxBaseParts;
ZCP_DMS_Box_BaseParts_Concrete =		DMS_Box_BaseParts_Concrete;
ZCP_DMS_BoxCraftingMaterials =			DMS_BoxCraftingMaterials;
ZCP_DMS_BoxTools =						DMS_BoxTools;
ZCP_DMS_BoxBuildingSupplies	=			[							// List of building supplies that can spawn in a crate ("ZCP_DMS_BoxBaseParts", "ZCP_DMS_BoxCraftingMaterials", and "ZCP_DMS_BoxTools" are automatically added to this list. "ZCP_DMS_BoxCraftingMaterials" is added twice for weight.)
										"Exile_Item_DuctTape",
										"Exile_Item_PortableGeneratorKit"
									] + ZCP_DMS_BoxBaseParts + ZCP_DMS_BoxCraftingMaterials + ZCP_DMS_BoxTools + ZCP_DMS_Box_BaseParts_Concrete + ZCP_DMS_Box_BaseParts_Concrete;
ZCP_DMS_BoxOptics =						DMS_BoxOptics;
ZCP_DMS_BoxBackpacks =					DMS_BoxBackpacks;
ZCP_DMS_BoxItems =						ZCP_DMS_BoxSurvivalSupplies+ZCP_DMS_BoxBuildingSupplies+ZCP_DMS_BoxOptics;	// Random "items" can spawn optics, survival supplies, or building supplies

ZCP_DMS_RareLoot =						true;						// Potential chance to spawn rare loot in any crate.
ZCP_DMS_RareLootList =					DMS_RareLootList;
ZCP_DMS_RareLootChance					= 30;						// Percentage Chance to spawn rare loot in any crate | Default: 10%

// Vehiclesw
ZCP_DMS_ArmedVehicles =					DMS_ArmedVehicles;

ZCP_DMS_MilitaryVehicles =				DMS_MilitaryVehicles;

ZCP_DMS_TransportTrucks =				DMS_TransportTrucks;

ZCP_DMS_RefuelTrucks =					DMS_RefuelTrucks;

ZCP_DMS_CivilianVehicles =				DMS_CivilianVehicles;

ZCP_DMS_TransportHelis =				DMS_TransportHelis;

ZCP_VehicleReward = ZCP_DMS_TransportTrucks + ZCP_DMS_CivilianVehicles + ZCP_DMS_MilitaryVehicles +ZCP_DMS_ArmedVehicles;
ZCP_DMS_DEBUG = false;




ZCP_CurrentMod = "Exile"; // Exile, ( Epoch coming soon again)

/** If you want to change the language of the addon
Go to server_addon_code/a3_zcp_exile/fn_translations.sqf and edit the Strings however you like
You can also use one of the pre-defined languages which are currently English (default) and German
Just uncomment the language you prefer and comment out the other one you don't need */

/* Do not change this*/
ZCP_CapPoints = call ZCP_fnc_missions;
ZCP_Translations = call ZCP_fnc_translations; //currently available pre-defined languages are English (default) and German
diag_log text format["[ZCP]: Config loaded succesfull"];
ZCP_ConfigLoaded = true;
