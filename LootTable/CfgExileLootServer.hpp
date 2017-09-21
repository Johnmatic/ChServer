class CfgExileLootServer
{
	class LootTables
	{

		/*
			Percental Item Group Spawn Chances of CivillianLowerClass:

			Restraints        = 0,61%
			PistolAttachments = 1,84%
			ShotgunAmmo       = 1,84%
			SMGAmmo           = 1,84%
			SMGAttachments    = 1,84%
			Shotguns          = 2,45%
			SMG               = 2,45%
			CivilianVests     = 3,07%
			PistolAmmo        = 3,07%
			Pistols           = 4,91%
			Chemlights        = 3,07%
			CivilianItems     = 6,13%
			Drinks            = 6,13%
			RoadFlares        = 3,07%
			CivilianBackpacks = 6,75%
			CivilianClothing  = 12,27%
			CivilianHeadgear  = 12,27%
			Food              = 17,18%
			Trash             = 9,20%
		*/
		CivillianLowerClass[] = {"PistolAmmo", "CivilianHeadgear", "CivilianHeadgear", "Food", "CivilianBackpacks", "Trash", "Trash", "Food", "CivilianItems", "ShotgunAmmo", "PistolAmmo", "CivilianBackpacks", "SMGAmmo", "CivilianClothing", "CivilianHeadgear", "Trash", "CivilianClothing", "Food", "CivilianItems", "Food", "PistolAttachments", "Trash", "Pistols", "Shotguns", "Trash", "CivilianClothing", "CivilianItems", "Trash", "SMGAttachments", "RoadFlares", "ShotgunAmmo", "Trash", "Drinks", "CivilianVests", "RoadFlares", "Pistols", "PistolAmmo", "CivilianHeadgear", "PistolAmmo", "CivilianBackpacks", "SMG", "Food", "Food", "CivilianHeadgear", "RoadFlares", "CivilianHeadgear", "Food", "Food", "Chemlights", "CivilianItems", "Food", "SMG", "SMGAttachments", "CivilianBackpacks", "Chemlights", "CivilianClothing", "Drinks", "Pistols", "CivilianHeadgear", "Trash", "CivilianVests", "CivilianClothing", "Food", "SMGAmmo", "CivilianClothing", "CivilianItems", "Drinks", "Food", "CivilianHeadgear", "CivilianItems", "CivilianHeadgear", "CivilianBackpacks", "CivilianHeadgear", "Drinks", "Pistols", "Drinks", "Pistols", "Food", "Shotguns", "CivilianVests", "SMGAttachments", "PistolAttachments", "CivilianClothing", "CivilianClothing", "CivilianHeadgear", "Chemlights", "Food", "SMG", "Food", "CivilianItems", "CivilianClothing", "CivilianClothing", "CivilianBackpacks", "CivilianClothing", "Food", "CivilianHeadgear", "CivilianItems", "CivilianClothing", "Drinks", "RoadFlares", "CivilianClothing", "Food", "CivilianClothing", "SMGAmmo", "CivilianBackpacks", "CivilianClothing", "CivilianClothing", "PistolAttachments", "RoadFlares", "Trash", "Trash", "Trash", "Food", "PistolAmmo", "Food", "CivilianVests", "CivilianHeadgear", "Trash", "CivilianHeadgear", "CivilianHeadgear", "Drinks", "CivilianHeadgear", "CivilianBackpacks", "CivilianBackpacks", "CivilianClothing", "Trash", "CivilianBackpacks", "Food", "CivilianHeadgear", "ShotgunAmmo", "Trash", "Food", "Food", "CivilianClothing", "CivilianBackpacks", "Food", "Pistols", "SMG", "Trash", "CivilianHeadgear", "Drinks", "Pistols", "Shotguns", "Food", "CivilianVests", "CivilianItems", "CivilianHeadgear", "Drinks", "Restraints", "CivilianHeadgear", "Food", "Chemlights", "Food", "Food", "Drinks", "CivilianClothing", "Food", "Shotguns", "Pistols", "Food", "CivilianClothing", "Chemlights", "CivilianItems"};

		/*
			Percental Item Group Spawn Chances of CivillianUpperClass:

			Restraints        = 0,54%
			PistolAttachments = 1,62%
			RifleAmmo         = 1,62%
			RifleAttachments  = 1,62%
			Rifles            = 1,62%
			ShotgunAmmo       = 1,62%
			SMGAmmo           = 1,62%
			SMGAttachments    = 1,62%
			GuerillaItems     = 1,62%
			Shotguns          = 2,16%
			SMG               = 2,16%
			CivilianVests     = 2,70%
			PistolAmmo        = 2,70%
			Pistols           = 4,32%
			Chemlights        = 5,41%
			CivilianItems     = 5,41%
			Drinks            = 5,41%
			RoadFlares        = 5,41%
			CivilianBackpacks = 5,95%
			CivilianClothing  = 10,81%
			CivilianHeadgear  = 10,81%
			Food              = 15,14%
			Trash             = 8,11%
		*/
		CivillianUpperClass[] = {"CivilianItems", "Food", "CivilianClothing", "CivilianBackpacks", "CivilianItems", "PistolAmmo", "CivilianHeadgear", "Pistols", "SMGAmmo", "Trash", "Food", "Chemlights", "RoadFlares", "ShotgunAmmo", "CivilianItems", "CivilianHeadgear", "Drinks", "Trash", "CivilianBackpacks", "Food", "CivilianClothing", "Chemlights", "RoadFlares", "CivilianHeadgear", "Food", "CivilianHeadgear", "CivilianBackpacks", "CivilianItems", "CivilianClothing", "Pistols", "Food", "Chemlights", "Chemlights", "CivilianBackpacks", "Food", "Trash", "CivilianClothing", "CivilianClothing", "RoadFlares", "RoadFlares", "Chemlights", "Drinks", "Shotguns", "Food", "Trash", "Trash", "CivilianVests", "SMGAmmo", "CivilianHeadgear", "CivilianHeadgear", "RifleAmmo", "Trash", "CivilianItems", "Food", "SMG", "CivilianClothing", "CivilianHeadgear", "CivilianClothing", "GuerillaItems", "Food", "Food", "CivilianHeadgear", "CivilianClothing", "Food", "Chemlights", "PistolAmmo", "CivilianClothing", "Pistols", "Food", "Trash", "Food", "CivilianBackpacks", "CivilianVests", "RoadFlares", "Drinks", "CivilianVests", "RifleAmmo", "Chemlights", "CivilianItems", "RoadFlares", "Pistols", "Trash", "CivilianBackpacks", "Rifles", "CivilianClothing", "CivilianClothing", "ShotgunAmmo", "RifleAmmo", "CivilianClothing", "SMGAttachments", "RoadFlares", "SMG", "Trash", "Drinks", "CivilianHeadgear", "Food", "CivilianHeadgear", "Drinks", "Drinks", "PistolAmmo", "Pistols", "PistolAmmo", "PistolAmmo", "CivilianClothing", "Food", "Shotguns", "CivilianItems", "CivilianBackpacks", "Food", "Drinks", "CivilianBackpacks", "RoadFlares", "SMGAttachments", "ShotgunAmmo", "CivilianHeadgear", "Food", "Pistols", "CivilianVests", "SMG", "CivilianHeadgear", "Restraints", "CivilianBackpacks", "RifleAttachments", "CivilianBackpacks", "Chemlights", "Pistols", "Drinks", "Rifles", "CivilianHeadgear", "CivilianHeadgear", "GuerillaItems", "CivilianHeadgear", "CivilianHeadgear", "Food", "CivilianClothing", "GuerillaItems", "RoadFlares", "CivilianHeadgear", "Food", "CivilianHeadgear", "Chemlights", "Shotguns", "CivilianClothing", "SMG", "PistolAttachments", "CivilianItems", "CivilianClothing", "Trash", "CivilianHeadgear", "RifleAttachments", "CivilianItems", "CivilianClothing", "Food", "CivilianVests", "Drinks", "Chemlights", "CivilianBackpacks", "RifleAttachments", "CivilianHeadgear", "Trash", "CivilianClothing", "PistolAttachments", "Rifles", "Food", "Food", "Food", "Trash", "Trash", "Food", "Drinks", "CivilianClothing", "Food", "PistolAttachments", "Food", "Food", "RoadFlares", "Trash", "CivilianClothing", "Food", "CivilianItems", "Shotguns", "Pistols", "SMGAttachments", "Trash", "SMGAmmo"};

		/*
			Percental Item Group Spawn Chances of Shop:

			GuerillaItems     = 0,90%
			CivilianClothing  = 0,90%
			CivilianVests     = 0,90%
			PistolAttachments = 0,90%
			ShotgunAmmo       = 0,90%
			SMGAmmo           = 0,90%
			SMGAttachments    = 0,90%
			PistolAmmo        = 1,80%
			CivilianHeadgear  = 2,70%
			IndustrialItems   = 2,70%
			MedicalItems      = 2,70%
			Restraints        = 2,70%
			Shotguns          = 3,60%
			SmokeGrenades     = 3,60%
			Chemlights        = 4,50%
			CivilianBackpacks = 4,50%
			RoadFlares        = 4,50%
			SMG               = 4,50%
			CivilianItems     = 6,31%
			Pistols           = 9,01%
			Drinks            = 13,51%
			Food              = 13,51%
			Trash             = 13,51%
		*/
		Shop[] = {"RoadFlares", "Trash", "CivilianHeadgear", "SmokeGrenades", "Food", "Restraints", "Trash", "SMG", "Trash", "Pistols", "ShotgunAmmo", "CivilianVests", "SMGAmmo", "Drinks", "Trash", "GuerillaItems", "CivilianItems", "Drinks", "CivilianBackpacks", "CivilianBackpacks", "Drinks", "Drinks", "RoadFlares", "CivilianBackpacks", "Pistols", "Drinks", "SMG", "MedicalItems", "Pistols", "Trash", "Restraints", "Trash", "RoadFlares", "Food", "SmokeGrenades", "Food", "CivilianItems", "SMG", "Trash", "MedicalItems", "Food", "Trash", "SmokeGrenades", "SmokeGrenades", "SMGAttachments", "Food", "Shotguns", "Trash", "Drinks", "Drinks", "Food", "Drinks", "Chemlights", "Trash", "Drinks", "Trash", "Food", "Trash", "Pistols", "Drinks", "Food", "CivilianItems", "Pistols", "RoadFlares", "Trash", "CivilianBackpacks", "Drinks", "Pistols", "PistolAmmo", "Pistols", "Food", "Food", "Drinks", "Restraints", "CivilianItems", "Pistols", "Drinks", "SMG", "Chemlights", "Shotguns", "CivilianBackpacks", "CivilianClothing", "Chemlights", "CivilianItems", "Pistols", "IndustrialItems", "SMG", "IndustrialItems", "Pistols", "Food", "RoadFlares", "Trash", "CivilianHeadgear", "Drinks", "Drinks", "Trash", "MedicalItems", "Shotguns", "Shotguns", "CivilianItems", "Chemlights", "Food", "Food", "IndustrialItems", "Food", "CivilianItems", "PistolAttachments", "CivilianHeadgear", "Chemlights", "PistolAmmo", "Food"};

		/*
			Percental Item Group Spawn Chances of Industrial:

			Restraints      = 4,35%
			RoadFlares      = 13,04%
			Vehicle         = 21,74%
			Trash           = 26,09%
			IndustrialItems = 34,78%
		*/
		Industrial[] = {"IndustrialItems", "IndustrialItems", "RoadFlares", "Trash", "IndustrialItems", "RoadFlares", "IndustrialItems", "Vehicle", "Trash", "Restraints", "Trash", "IndustrialItems", "Trash", "Vehicle", "Trash", "IndustrialItems", "RoadFlares", "IndustrialItems", "Vehicle", "Trash", "Vehicle", "IndustrialItems", "Vehicle"};

		/*
			Percental Item Group Spawn Chances of Factories:

			Electronics     = 6,67%
			Vehicle         = 20,00%
			Trash           = 26,67%
			IndustrialItems = 46,67%
		*/
		Factories[] = {"Electronics", "Trash", "Trash", "IndustrialItems", "IndustrialItems", "IndustrialItems", "Vehicle", "IndustrialItems", "Vehicle", "IndustrialItems", "Vehicle", "IndustrialItems", "Trash", "IndustrialItems", "Trash"};

		/*
			Percental Item Group Spawn Chances of VehicleService:

			Restraints      = 4,35%
			RoadFlares      = 13,04%
			IndustrialItems = 21,74%
			Trash           = 26,09%
			Vehicle         = 34,78%
		*/
		VehicleService[] = {"Restraints", "IndustrialItems", "Vehicle", "Trash", "Vehicle", "Trash", "RoadFlares", "Trash", "Vehicle", "IndustrialItems", "Vehicle", "Vehicle", "Trash", "RoadFlares", "Vehicle", "Trash", "Trash", "Vehicle", "Vehicle", "IndustrialItems", "IndustrialItems", "RoadFlares", "IndustrialItems"};

		/*
			Percental Item Group Spawn Chances of Military:

			EpicWeapons       = 0,74%
			DLCGhillies       = 1,48%
			Ghillies          = 1,48%
			Rebreathers       = 1,48%
			Explosives        = 1,48%
			Bipods            = 2,22%
			DLCAmmo           = 2,22%
			DLCOptics         = 2,22%
			DLCSupressor      = 2,22%
			LMGAmmo           = 2,22%
			MedicalItems      = 2,22%
			Restraints        = 2,22%
			SniperAmmo        = 2,22%
			SniperAttachments = 1,48%
			DLCRifles         = 2,96%
			DLCVests          = 2,96%
			GuerillaHeadgear  = 2,96%
			GuerillaVests     = 2,96%
			HandGrenades      = 2,96%
			HEGrenades        = 2,96%
			MilitaryBackpacks = 2,96%
			MilitaryHeadgear  = 2,96%
			MilitaryVests     = 2,96%
			RifleAmmo         = 2,96%
			RifleAttachments  = 2,96%
			SmokeGrenades     = 2,96%
			Snipers           = 2,96%
			UGLFlares         = 2,96%
			GuerillaBackpacks = 2,96%
			GuerillaItems     = 2,96%
			UGLSmokes         = 2,96%
			CivilianItems     = 3,70%
			LMG               = 3,70%
			GuerillaClothing  = 4,44%
			MilitaryClothing  = 4,44%
			Rifles            = 4,44%
			Trash             = 2,96%
		*/
		Military[] = {"MilitaryClothing", "GuerillaBackpacks", "SniperAmmo", "DLCVests", "GuerillaVests", "CivilianItems", "MilitaryClothing", "GuerillaHeadgear", "GuerillaItems", "HandGrenades", "GuerillaHeadgear", "Restraints", "MilitaryBackpacks", "GuerillaClothing", "Trash", "Snipers", "UGLSmokes", "RifleAttachments", "DLCAmmo", "Rifles", "MilitaryVests", "Trash", "MilitaryVests", "HEGrenades", "DLCVests", "DLCRifles", "Rebreathers", "LMG", "GuerillaItems", "GuerillaVests", "Rifles", "EpicWeapons", "Bipods", "UGLFlares", "GuerillaBackpacks", "Ghillies", "GuerillaHeadgear", "DLCVests", "CivilianItems", "CivilianItems", "GuerillaClothing", "LMG", "MilitaryHeadgear", "HandGrenades", "Rifles", "DLCSupressor", "MilitaryBackpacks", "RifleAmmo", "SniperAmmo", "LMGAmmo", "SmokeGrenades", "RifleAmmo", "LMG", "LMGAmmo", "LMG", "SniperAttachments", "DLCGhillies", "GuerillaClothing", "DLCVests", "GuerillaBackpacks", "GuerillaHeadgear", "MilitaryVests", "DLCRifles", "MilitaryClothing", "DLCOptics", "UGLSmokes", "LMG", "CivilianItems", "Ghillies", "Explosives", "UGLSmokes", "Restraints", "MedicalItems", "DLCAmmo", "MedicalItems", "DLCOptics", "MilitaryClothing", "DLCOptics", "GuerillaBackpacks", "HandGrenades", "GuerillaVests", "SmokeGrenades", "RifleAttachments", "DLCSupressor", "GuerillaClothing", "Rebreathers", "SniperAttachments", "Rifles", "RifleAmmo", "Snipers", "DLCSupressor", "GuerillaVests", "Rifles", "HEGrenades", "RifleAmmo", "Rifles", "GuerillaItems", "CivilianItems", "Snipers", "UGLFlares", "GuerillaClothing", "HEGrenades", "MedicalItems", "MilitaryBackpacks", "MilitaryVests", "LMGAmmo", "MilitaryBackpacks", "GuerillaItems", "GuerillaClothing", "SmokeGrenades", "Trash", "Restraints", "UGLFlares", "Trash", "Explosives", "HandGrenades", "UGLSmokes", "MilitaryHeadgear", "DLCAmmo", "Bipods", "SniperAmmo", "SmokeGrenades", "RifleAttachments", "DLCRifles", "Snipers", "HEGrenades", "RifleAttachments", "MilitaryClothing", "Bipods", "UGLFlares", "MilitaryClothing", "DLCRifles", "MilitaryHeadgear", "MilitaryHeadgear", "DLCGhillies"};

		/*
			Percental Item Group Spawn Chances of Medical:

			Trash        = 30,00%
			MedicalItems = 70,00%
		*/
		Medical[] = {"Trash", "MedicalItems", "MedicalItems", "MedicalItems", "MedicalItems", "MedicalItems", "MedicalItems", "Trash", "Trash", "MedicalItems"};

		/*
			Percental Item Group Spawn Chances of Tourist:

			DLCAmmo           = 4,35%
			DLCOptics         = 2,17%
			DLCSupressor      = 2,17%
			SniperAmmo        = 2,17%
			SniperAttachments = 2,17%
			CivilianItems     = 4,35%
			Explosives        = 4,35%
			HandGrenades      = 4,35%
			MedicalItems      = 4,35%
			Restraints        = 4,35%
			DLCGhillies       = 6,52%
			Ghillies          = 6,52%
			MilitaryBackpacks = 8,70%
			MilitaryHeadgear  = 8,70%
			DLCRifles         = 17,39%
			Snipers           = 17,39%
		*/
		Tourist[] = {"Snipers", "DLCAmmo", "MedicalItems", "MilitaryHeadgear", "DLCAmmo", "Snipers", "HandGrenades", "MilitaryHeadgear", "Restraints", "Snipers", "DLCRifles", "DLCRifles", "Explosives", "MilitaryBackpacks", "Explosives", "DLCGhillies", "Snipers", "Snipers", "DLCRifles", "MilitaryBackpacks", "CivilianItems", "CivilianItems", "Snipers", "HandGrenades", "MilitaryBackpacks", "Snipers", "Snipers", "MilitaryBackpacks", "DLCOptics", "SniperAttachments", "MilitaryHeadgear", "SniperAmmo", "Ghillies", "DLCSupressor", "Ghillies", "MedicalItems", "DLCRifles", "Restraints", "DLCRifles", "MilitaryHeadgear", "Ghillies", "DLCRifles", "DLCGhillies", "DLCRifles", "DLCGhillies", "DLCRifles"};

		/*
			Percental Item Group Spawn Chances of Radiation:

			DLCAmmo           = 2,27%
			DLCOptics         = 2,27%
			DLCSupressor      = 2,27%
			SniperAmmo        = 2,27%
			SniperAttachments = 2,27%
			EpicWeapons       = 4,55%
			HandGrenades      = 4,55%
			MedicalItems      = 4,55%
			Restraints        = 4,55%
			DLCGhillies       = 6,82%
			Ghillies          = 6,82%
			Explosives        = 11,36%
			MilitaryBackpacks = 11,36%
			MilitaryHeadgear  = 11,36%
			DLCRifles         = 11,36%
			Snipers           = 11,36%
		*/
		Radiation[] = {"Snipers", "DLCGhillies", "DLCSupressor", "DLCRifles", "MilitaryBackpacks", "DLCRifles", "DLCRifles", "MilitaryBackpacks", "EpicWeapons", "Snipers", "Explosives", "DLCGhillies", "DLCAmmo", "Restraints", "DLCOptics", "MedicalItems", "SniperAttachments", "Ghillies", "HandGrenades", "Explosives", "MilitaryBackpacks", "HandGrenades", "Ghillies", "MilitaryHeadgear", "Ghillies", "DLCRifles", "Explosives", "Snipers", "MedicalItems", "Restraints", "SniperAmmo", "Snipers", "MilitaryHeadgear", "MilitaryHeadgear", "MilitaryHeadgear", "DLCRifles", "MilitaryHeadgear", "EpicWeapons", "Explosives", "MilitaryBackpacks", "Snipers", "Explosives", "MilitaryBackpacks", "DLCGhillies"};
	};

	class ItemGroups
	{

		/*
			Percental Item Spawn Chances of Food:

			Exile_Item_CookingPot        = 0,78%
			Exile_Item_CanOpener         = 3,88%
			Exile_Item_Matches           = 0,78%
			Exile_Item_EMRE              = 3,88%
			Exile_Item_GloriousKnakworst = 4,65%
			Exile_Item_Surstromming      = 5,43%
			Exile_Item_SausageGravy      = 5,43%
			Exile_Item_ChristmasTinner   = 5,43%
			Exile_Item_MacasCheese       = 5,43%
			Exile_Item_BBQSandwich       = 5,43%
			Exile_Item_CatFood           = 5,43%
			Exile_Item_Dogfood           = 5,43%
			Exile_Item_BeefParts         = 5,43%
			Exile_Item_Cheathas          = 5,43%
			Exile_Item_DsNuts            = 5,43%
			Exile_Item_Noodles           = 5,43%
			Exile_Item_CockONut          = 6,20%
			Exile_Item_SeedAstics        = 6,20%
			Exile_Item_Raisins           = 6,98%
			Exile_Item_Moobar            = 6,98%
			Exile_Item_InstantCoffee     = 0,00%
		*/
		Food[] = {"Exile_Item_Matches", "Exile_Item_CockONut", "Exile_Item_GloriousKnakworst", "Exile_Item_Dogfood", "Exile_Item_BBQSandwich", "Exile_Item_CatFood", "Exile_Item_SeedAstics", "Exile_Item_Noodles", "Exile_Item_Moobar", "Exile_Item_ChristmasTinner", "Exile_Item_CockONut", "Exile_Item_BBQSandwich", "Exile_Item_SeedAstics", "Exile_Item_GloriousKnakworst", "Exile_Item_BeefParts", "Exile_Item_ChristmasTinner", "Exile_Item_MacasCheese", "Exile_Item_Raisins", "Exile_Item_Moobar", "Exile_Item_SeedAstics", "Exile_Item_CatFood", "Exile_Item_CanOpener", "Exile_Item_MacasCheese", "Exile_Item_Surstromming", "Exile_Item_CanOpener", "Exile_Item_Raisins", "Exile_Item_Cheathas", "Exile_Item_Surstromming", "Exile_Item_CockONut", "Exile_Item_Moobar", "Exile_Item_BBQSandwich", "Exile_Item_DsNuts", "Exile_Item_BeefParts", "Exile_Item_Surstromming", "Exile_Item_BeefParts", "Exile_Item_Dogfood", "Exile_Item_Cheathas", "Exile_Item_SausageGravy", "Exile_Item_Noodles", "Exile_Item_SausageGravy", "Exile_Item_SeedAstics", "Exile_Item_Noodles", "Exile_Item_MacasCheese", "Exile_Item_Raisins", "Exile_Item_Moobar", "Exile_Item_DsNuts", "Exile_Item_BeefParts", "Exile_Item_Moobar", "Exile_Item_ChristmasTinner", "Exile_Item_SausageGravy", "Exile_Item_GloriousKnakworst", "Exile_Item_SeedAstics", "Exile_Item_DsNuts", "Exile_Item_Noodles", "Exile_Item_Dogfood", "Exile_Item_CanOpener", "Exile_Item_MacasCheese", "Exile_Item_Surstromming", "Exile_Item_CanOpener", "Exile_Item_DsNuts", "Exile_Item_MacasCheese", "Exile_Item_ChristmasTinner", "Exile_Item_SeedAstics", "Exile_Item_Raisins", "Exile_Item_Noodles", "Exile_Item_Surstromming", "Exile_Item_ChristmasTinner", "Exile_Item_EMRE", "Exile_Item_Moobar", "Exile_Item_Dogfood", "Exile_Item_MacasCheese", "Exile_Item_CatFood", "Exile_Item_BBQSandwich", "Exile_Item_CatFood", "Exile_Item_SeedAstics", "Exile_Item_SausageGravy", "Exile_Item_EMRE", "Exile_Item_CanOpener", "Exile_Item_SausageGravy", "Exile_Item_GloriousKnakworst", "Exile_Item_CockONut", "Exile_Item_CockONut", "Exile_Item_Moobar", "Exile_Item_Raisins", "Exile_Item_Noodles", "Exile_Item_Raisins", "Exile_Item_SausageGravy", "Exile_Item_ChristmasTinner", "Exile_Item_CatFood", "Exile_Item_Cheathas", "Exile_Item_Cheathas", "Exile_Item_Cheathas", "Exile_Item_BBQSandwich", "Exile_Item_BeefParts", "Exile_Item_BBQSandwich", "Exile_Item_DsNuts", "Exile_Item_CockONut", "Exile_Item_Dogfood", "Exile_Item_CatFood", "Exile_Item_Surstromming", "Exile_Item_EMRE", "Exile_Item_DsNuts", "Exile_Item_BeefParts", "Exile_Item_GloriousKnakworst", "Exile_Item_Raisins", "Exile_Item_EMRE", "Exile_Item_Noodles", "Exile_Item_EMRE", "Exile_Item_CockONut", "Exile_Item_Raisins", "Exile_Item_CockONut", "Exile_Item_Moobar", "Exile_Item_Surstromming", "Exile_Item_BeefParts", "Exile_Item_ChristmasTinner", "Exile_Item_SausageGravy", "Exile_Item_CatFood", "Exile_Item_MacasCheese", "Exile_Item_CookingPot", "Exile_Item_Cheathas", "Exile_Item_Dogfood", "Exile_Item_DsNuts", "Exile_Item_Raisins", "Exile_Item_BBQSandwich", "Exile_Item_GloriousKnakworst", "Exile_Item_Cheathas", "Exile_Item_Moobar", "Exile_Item_Dogfood", "Exile_Item_SeedAstics"};

		/*
			Percental Item Spawn Chances of Drinks:

			Exile_Item_Beer                    = 9,09%
			Exile_Item_EnergyDrink             = 9,09%
			Exile_Item_PlasticBottleFreshWater = 9,09%
			Exile_Item_PowerDrink              = 9,09%
			Exile_Item_MountainDupe            = 18,18%
			Exile_Item_ChocolateMilk           = 18,18%
			Exile_Item_PlasticBottleDirtyWater = 27,27%
		*/
		Drinks[] = {"Exile_Item_Beer", "Exile_Item_PlasticBottleFreshWater", "Exile_Item_MountainDupe", "Exile_Item_PowerDrink", "Exile_Item_ChocolateMilk", "Exile_Item_MountainDupe", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_ChocolateMilk", "Exile_Item_EnergyDrink", "Exile_Item_PlasticBottleDirtyWater"};

		/*
			Percental Item Spawn Chances of Pistols:

			Exile_Weapon_Colt1911   = 5,88%
			Exile_Weapon_Makarov    = 5,88%
			Exile_Weapon_Taurus     = 5,88%
			Exile_Weapon_TaurusGold = 5,88%
			hgun_P07_khk_F          = 5,88%
			hgun_Pistol_01_F        = 5,88%
			hgun_Pistol_heavy_01_F  = 5,88%
			hgun_Pistol_heavy_02_F  = 5,88%
			hgun_Pistol_Signal_F    = 5,88%
			hgun_ACPC2_F            = 11,76%
			hgun_P07_F              = 11,76%
			hgun_Rook40_F           = 11,76%
			Exile_Weapon_SA61       = 11,76%
		*/
		Pistols[] = {"Exile_Weapon_TaurusGold", "hgun_Pistol_01_F", "hgun_Pistol_heavy_02_F", "hgun_Rook40_F", "Exile_Weapon_Colt1911", "hgun_ACPC2_F", "hgun_P07_F", "Exile_Weapon_SA61", "Exile_Weapon_SA61", "hgun_ACPC2_F", "hgun_Pistol_Signal_F", "hgun_P07_khk_F", "Exile_Weapon_Makarov", "hgun_Pistol_heavy_01_F", "Exile_Weapon_Taurus", "hgun_Rook40_F", "hgun_P07_F"};

		/*
			Percental Item Spawn Chances of PistolAmmo:

			6Rnd_GreenSignal_F               = 2,44%
			6Rnd_RedSignal_F                 = 2,44%
			16Rnd_9x21_Mag                   = 2,44%
			6Rnd_45ACP_Cylinder              = 4,88%
			10Rnd_9x21_Mag                   = 9,76%
			11Rnd_45ACP_Mag                  = 9,76%
			30Rnd_9x21_Mag                   = 9,76%
			9Rnd_45ACP_Mag                   = 9,76%
			Exile_Magazine_6Rnd_45ACP        = 9,76%
			Exile_Magazine_7Rnd_45ACP        = 9,76%
			Exile_Magazine_8Rnd_9x18         = 9,76%
			Exile_Magazine_10Rnd_765x17_SA61 = 9,76%
			Exile_Magazine_20Rnd_765x17_SA61 = 9,76%
		*/
		PistolAmmo[] = {"Exile_Magazine_20Rnd_765x17_SA61", "Exile_Magazine_6Rnd_45ACP", "Exile_Magazine_10Rnd_765x17_SA61", "Exile_Magazine_7Rnd_45ACP", "Exile_Magazine_20Rnd_765x17_SA61", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "6Rnd_45ACP_Cylinder", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "6Rnd_RedSignal_F", "10Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Exile_Magazine_6Rnd_45ACP", "6Rnd_GreenSignal_F", "Exile_Magazine_20Rnd_765x17_SA61", "Exile_Magazine_6Rnd_45ACP", "9Rnd_45ACP_Mag", "Exile_Magazine_20Rnd_765x17_SA61", "Exile_Magazine_8Rnd_9x18", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "Exile_Magazine_6Rnd_45ACP", "30Rnd_9x21_Mag", "Exile_Magazine_8Rnd_9x18", "30Rnd_9x21_Mag", "9Rnd_45ACP_Mag", "Exile_Magazine_10Rnd_765x17_SA61", "Exile_Magazine_10Rnd_765x17_SA61", "10Rnd_9x21_Mag", "Exile_Magazine_7Rnd_45ACP", "9Rnd_45ACP_Mag", "6Rnd_45ACP_Cylinder", "9Rnd_45ACP_Mag", "Exile_Magazine_10Rnd_765x17_SA61", "Exile_Magazine_8Rnd_9x18", "10Rnd_9x21_Mag", "Exile_Magazine_7Rnd_45ACP", "10Rnd_9x21_Mag", "Exile_Magazine_8Rnd_9x18", "Exile_Magazine_7Rnd_45ACP"};

		/*
			Percental Item Spawn Chances of PistolAttachments:

			optic_MRD       = 16,67%
			optic_Yorris    = 16,67%
			muzzle_snds_acp = 33,33%
			muzzle_snds_L   = 33,33%
		*/
		PistolAttachments[] = {"muzzle_snds_L", "muzzle_snds_L", "muzzle_snds_acp", "optic_Yorris", "muzzle_snds_acp", "optic_MRD"};

		/*
			Percental Item Spawn Chances of Shotguns:

			Exile_Weapon_M1014 = 44,44%
			CUP_sgun_AA12      = 11,11%
			CUP_sgun_Saiga12K  = 44,44%
		*/
		Shotguns[] = {"CUP_sgun_Saiga12K", "CUP_sgun_Saiga12K", "Exile_Weapon_M1014", "Exile_Weapon_M1014", "CUP_sgun_Saiga12K", "Exile_Weapon_M1014", "CUP_sgun_Saiga12K", "Exile_Weapon_M1014", "CUP_sgun_AA12"};

		/*
			Percental Item Spawn Chances of ShotgunAmmo:

			Exile_Magazine_8Rnd_74Slug = 100,00%
		*/
		ShotgunAmmo[] = {"Exile_Magazine_8Rnd_74Slug"};

		/*
			Percental Item Spawn Chances of SMG:

			SMG_01_F                         = 7,14%
			SMG_02_F                         = 7,14%
			SMG_05_F                         = 7,14%
			hgun_PDW2000_F                   = 7,14%
			CUP_hgun_MicroUzi                = 7,14%
			CUP_hgun_MicroUzi_snds           = 7,14%
			CUP_hgun_SA61                    = 7,14%
			CUP_smg_bizon                    = 7,14%
			CUP_smg_bizon_snds               = 7,14%
			CUP_smg_EVO                      = 7,14%
			CUP_smg_EVO_MRad_Flashlight      = 7,14%
			CUP_smg_EVO_MRad_Flashlight_Snds = 7,14%
			CUP_smg_MP5A5                    = 7,14%
			CUP_smg_MP5SD6                   = 7,14%
		*/
		SMG[] = {"CUP_smg_EVO_MRad_Flashlight_Snds", "CUP_smg_bizon", "CUP_smg_EVO", "SMG_05_F", "SMG_02_F", "SMG_01_F", "CUP_hgun_MicroUzi_snds", "CUP_hgun_SA61", "CUP_smg_EVO_MRad_Flashlight", "CUP_smg_bizon_snds", "CUP_hgun_MicroUzi", "CUP_smg_MP5A5", "hgun_PDW2000_F", "CUP_smg_MP5SD6"};

		/*
			Percental Item Spawn Chances of SMGAmmo:

			30Rnd_45ACP_Mag_SMG_01              = 16,67%
			30Rnd_45ACP_Mag_SMG_01_Tracer_Green = 16,67%
			30Rnd_9x21_Mag_SMG_02               = 16,67%
			30Rnd_9x21_Mag_SMG_02_Tracer_Red    = 16,67%
			30Rnd_9x21_Mag_SMG_02_Tracer_Yellow = 16,67%
			30Rnd_9x21_Mag_SMG_02_Tracer_Green  = 16,67%
		*/
		SMGAmmo[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Red", "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_9x21_Mag_SMG_02", "30Rnd_45ACP_Mag_SMG_01_Tracer_Green", "30Rnd_45ACP_Mag_SMG_01"};

		/*
			Percental Item Spawn Chances of SMGAttachments:

			optic_Holosight_smg       = 16,67%
			optic_Holosight_smg_blk_F = 16,67%
			optic_ACO_grn_smg         = 16,67%
			optic_Aco_smg             = 16,67%
			optic_ACO_grn             = 16,67%
			optic_Aco                 = 16,67%
		*/
		SMGAttachments[] = {"optic_Aco_smg", "optic_Aco", "optic_Holosight_smg_blk_F", "optic_Holosight_smg", "optic_ACO_grn", "optic_ACO_grn_smg"};

		/*
			Percental Item Spawn Chances of Rifles:

			arifle_Katiba_GL_F                             = 0,48%
			arifle_Mk20_GL_F                               = 0,96%
			arifle_MX_GL_Black_F                           = 0,48%
			arifle_MX_GL_F                                 = 0,48%
			arifle_MXM_F                                   = 0,48%
			arifle_TRG21_GL_F                              = 0,96%
			Exile_Weapon_AK107_GL                          = 0,96%
			Exile_Weapon_AK74_GL                           = 0,96%
			arifle_AK12_GL_F                               = 0,96%
			arifle_AKM_F                                   = 0,96%
			arifle_AKM_FL_F                                = 0,96%
			arifle_AKS_F                                   = 0,96%
			arifle_ARX_blk_F                               = 0,48%
			arifle_ARX_ghex_F                              = 0,48%
			arifle_ARX_hex_F                               = 0,48%
			arifle_CTAR_blk_F                              = 0,96%
			arifle_CTAR_ghex_F                             = 0,96%
			arifle_CTAR_GL_blk_F                           = 0,96%
			arifle_CTAR_hex_F                              = 0,96%
			arifle_CTARS_blk_F                             = 0,96%
			arifle_CTARS_ghex_F                            = 0,96%
			arifle_CTARS_hex_F                             = 0,96%
			arifle_Katiba_F                                = 0,48%
			arifle_Mk20_F                                  = 0,96%
			arifle_Mk20C_F                                 = 0,96%
			arifle_MX_Black_F                              = 0,48%
			arifle_MX_F                                    = 0,48%
			arifle_MXC_Black_F                             = 0,48%
			arifle_MXC_F                                   = 0,48%
			arifle_MXM_Black_F                             = 0,48%
			arifle_SDAR_F                                  = 0,96%
			arifle_SPAR_01_blk_F                           = 0,96%
			arifle_SPAR_01_GL_blk_F                        = 0,96%
			arifle_SPAR_01_GL_khk_F                        = 0,96%
			arifle_SPAR_01_GL_snd_F                        = 0,96%
			arifle_SPAR_01_khk_F                           = 0,96%
			arifle_SPAR_01_snd_F                           = 0,96%
			arifle_SPAR_02_blk_F                           = 0,96%
			arifle_SPAR_02_khk_F                           = 0,96%
			arifle_SPAR_02_snd_F                           = 0,96%
			arifle_SPAR_03_blk_F                           = 0,48%
			arifle_SPAR_03_khk_F                           = 0,48%
			arifle_SPAR_03_snd_F                           = 0,48%
			arifle_TRG20_F                                 = 0,96%
			arifle_TRG21_F                                 = 0,96%
			Exile_Weapon_AK107                             = 0,96%
			Exile_Weapon_AK74                              = 0,96%
			Exile_Weapon_DMR                               = 0,48%
			arifle_MXM_khk_F                               = 0,48%
			Exile_Weapon_AK47                              = 0,96%
			Exile_Weapon_AKS_Gold                          = 0,48%
			Exile_Weapon_SVD                               = 0,48%
			Exile_Weapon_SVDCamo                           = 0,48%
			Exile_Weapon_VSSVintorez                       = 0,48%
			arifle_MX_GL_khk_F                             = 0,48%
			arifle_AK12_F                                  = 0,96%
			Exile_Weapon_CZ550                             = 0,48%
			arifle_MX_khk_F                                = 0,48%
			arifle_MXC_khk_F                               = 0,48%
			Exile_Weapon_M4                                = 0,96%
			Exile_Weapon_M16A4                             = 0,96%
			Exile_Weapon_M16A2                             = 0,96%
			Exile_Weapon_LeeEnfield                        = 0,96%
			CUP_srifle_CZ750                               = 0,48%
			CUP_srifle_CZ750_SOS_bipod                     = 0,00%
			CUP_arifle_AK107                               = 0,96%
			CUP_arifle_AK107_GL                            = 0,96%
			CUP_arifle_AK107_GL_kobra                      = 0,00%
			CUP_arifle_AK107_GL_pso                        = 0,00%
			CUP_arifle_AK107_kobra                         = 0,00%
			CUP_arifle_AK107_pso                           = 0,00%
			CUP_arifle_AK47                                = 0,48%
			CUP_arifle_AK74                                = 0,96%
			CUP_arifle_AK74_GL                             = 0,48%
			CUP_arifle_AK74_GL_kobra                       = 0,00%
			CUP_arifle_AK74M                               = 0,96%
			CUP_arifle_AK74M_GL                            = 0,96%
			CUP_arifle_AK74M_GL_kobra                      = 0,00%
			CUP_arifle_AK74M_GL_pso                        = 0,00%
			CUP_arifle_AK74M_kobra                         = 0,00%
			CUP_arifle_AK74M_pso                           = 0,00%
			CUP_arifle_AKM                                 = 0,48%
			CUP_arifle_AKS                                 = 0,48%
			CUP_arifle_AKS74_Goshawk                       = 0,00%
			CUP_arifle_AKS74_kobra                         = 0,00%
			CUP_arifle_AKS74_NSPU                          = 0,00%
			CUP_arifle_AKS74_pso                           = 0,00%
			CUP_arifle_AKS74U                              = 0,96%
			CUP_arifle_AKS74UN_kobra_snds                  = 0,00%
			CUP_arifle_AKS_Gold                            = 0,48%
			CUP_arifle_CZ805_A1                            = 0,96%
			CUP_arifle_CZ805_A1_Aco_Laser                  = 0,00%
			CUP_arifle_CZ805_A1_Holo_Laser                 = 0,00%
			CUP_arifle_CZ805_A1_MRCO_Laser                 = 0,00%
			CUP_arifle_CZ805_A1_ZDDot_Laser                = 0,00%
			CUP_arifle_CZ805_A2                            = 0,96%
			CUP_arifle_CZ805_A2_Aco_Laser                  = 0,00%
			CUP_arifle_CZ805_A2_Holo_Laser                 = 0,00%
			CUP_arifle_CZ805_A2_MRCO_Laser                 = 0,00%
			CUP_arifle_CZ805_A2_ZDDot_Flashlight_Snds      = 0,00%
			CUP_arifle_CZ805_B                             = 0,48%
			CUP_arifle_CZ805_B_GL                          = 0,48%
			CUP_arifle_CZ805_GL                            = 0,48%
			CUP_arifle_CZ805_GL_Hamr_Laser                 = 0,00%
			CUP_arifle_CZ805_GL_ZDDot_Laser                = 0,00%
			CUP_arifle_CZ805B_GL_ACOG_Laser                = 0,00%
			CUP_arifle_FNFAL                               = 0,48%
			CUP_arifle_FNFAL5061                           = 0,48%
			CUP_arifle_FNFAL5062                           = 0,48%
			CUP_arifle_FNFAL_ANPVS4                        = 0,00%
			CUP_arifle_FNFAL_OSW                           = 0,48%
			CUP_arifle_FNFAL_railed                        = 0,48%
			CUP_arifle_G36A                                = 0,00%
			CUP_arifle_G36A_camo                           = 0,00%
			CUP_arifle_G36C                                = 0,96%
			CUP_arifle_G36C_camo                           = 0,96%
			CUP_arifle_G36C_camo_holo_snds                 = 0,00%
			CUP_arifle_G36C_holo_snds                      = 0,00%
			CUP_arifle_G36K                                = 0,00%
			CUP_arifle_G36K_camo                           = 0,00%
			CUP_arifle_L85A2                               = 0,96%
			CUP_arifle_L85A2_ACOG_Laser                    = 0,00%
			CUP_arifle_L85A2_CWS_Laser                     = 0,00%
			CUP_arifle_L85A2_G                             = 0,96%
			CUP_arifle_L85A2_GL                            = 0,96%
			CUP_arifle_L85A2_GL_ACOG_Laser                 = 0,00%
			CUP_arifle_L85A2_GL_Holo_Laser                 = 0,00%
			CUP_arifle_L85A2_GL_SUSAT_Laser                = 0,00%
			CUP_arifle_L85A2_Holo_laser                    = 0,00%
			CUP_arifle_L85A2_NG                            = 0,96%
			CUP_arifle_L85A2_SUSAT_Laser                   = 0,00%
			CUP_arifle_L86A2                               = 0,96%
			CUP_arifle_L86A2_ACOG                          = 0,00%
			CUP_arifle_M16A2                               = 0,96%
			CUP_arifle_M16A2_GL                            = 0,96%
			CUP_arifle_M16A4_ACOG_Laser                    = 0,00%
			CUP_arifle_M16A4_Aim_Laser                     = 0,00%
			CUP_arifle_M16A4_Base                          = 0,96%
			CUP_arifle_M16A4_GL                            = 0,96%
			CUP_arifle_M16A4_GL_ACOG_Laser                 = 0,00%
			CUP_arifle_M16A4_GL_Laser                      = 0,96%
			CUP_arifle_M4A1                                = 0,96%
			CUP_arifle_M4A1_Aim                            = 0,00%
			CUP_arifle_M4A1_Aim_Laser_snds                 = 0,00%
			CUP_arifle_M4A1_black                          = 0,96%
			CUP_arifle_M4A1_BUIS_camo_GL                   = 0,00%
			CUP_arifle_M4A1_BUIS_desert_GL                 = 0,00%
			CUP_arifle_M4A1_BUIS_GL                        = 0,00%
			CUP_arifle_M4A1_camo                           = 0,96%
			CUP_arifle_M4A1_camo_Aim                       = 0,00%
			CUP_arifle_M4A1_camo_AIM_snds                  = 0,00%
			CUP_arifle_M4A1_camo_GL_Holo_Flashlight        = 0,00%
			CUP_arifle_M4A1_camo_GL_Holo_Flashlight_Snds   = 0,00%
			CUP_arifle_M4A1_desert                         = 0,96%
			CUP_arifle_M4A1_GL_ACOG_Flashlight             = 0,00%
			CUP_arifle_M4A1_GL_Holo_Flashlight             = 0,00%
			CUP_arifle_M4A1_Holo                           = 0,00%
			CUP_arifle_M4A1_Holo_Laser                     = 0,00%
			CUP_arifle_M4A1_LeupoldMk4CQT_Laser            = 0,00%
			CUP_arifle_M4A1_LeupoldMk4MRT                  = 0,00%
			CUP_arifle_M4A1_M203_ACOG_Laser                = 0,00%
			CUP_arifle_M4A1_M203_ANPAS13c1_Laser           = 0,00%
			CUP_arifle_M4A1_M203_Holo_Laser                = 0,00%
			CUP_arifle_M4A3_desert                         = 0,96%
			CUP_arifle_M4A3_desert_Aim_Flashlight          = 0,00%
			CUP_arifle_M4A3_desert_GL_ACOG_Laser           = 0,00%
			CUP_arifle_MG36                                = 0,96%
			CUP_arifle_MG36_camo                           = 0,96%
			CUP_arifle_MG36_camo_holo                      = 0,00%
			CUP_arifle_MG36_holo                           = 0,00%
			CUP_arifle_Mk16_CQC                            = 0,96%
			CUP_arifle_Mk16_CQC_EGLM                       = 0,96%
			CUP_arifle_Mk16_CQC_EGLM_Holo_Laser_mfsup      = 0,00%
			CUP_arifle_Mk16_CQC_FG                         = 0,96%
			CUP_arifle_Mk16_CQC_FG_Aim_Laser_snds          = 0,00%
			CUP_arifle_Mk16_CQC_SFG                        = 0,96%
			CUP_arifle_Mk16_CQC_SFG_Holo                   = 0,00%
			CUP_arifle_Mk16_LeupoldMk4MRT                  = 0,00%
			CUP_arifle_Mk16_STD                            = 0,96%
			CUP_arifle_Mk16_STD_EGLM                       = 0,96%
			CUP_arifle_Mk16_STD_EGLM_ACOG_Laser            = 0,00%
			CUP_arifle_Mk16_STD_EGLM_ANPAS13c1_Laser_mfsup = 0,00%
			CUP_arifle_Mk16_STD_FG                         = 0,96%
			CUP_arifle_Mk16_STD_FG_Holo_Laser              = 0,00%
			CUP_arifle_Mk16_STD_FG_LeupoldMk4CQT_Laser     = 0,00%
			CUP_arifle_Mk16_STD_SFG                        = 0,96%
			CUP_arifle_Mk16_SV                             = 0,96%
			CUP_arifle_Mk17_CQC                            = 0,48%
			CUP_arifle_Mk17_CQC_EGLM                       = 0,48%
			CUP_arifle_Mk17_CQC_FG                         = 0,48%
			CUP_arifle_Mk17_CQC_SFG                        = 0,48%
			CUP_arifle_Mk17_CQC_SFG_Aim_mfsup              = 0,00%
			CUP_arifle_Mk17_STD                            = 0,48%
			CUP_arifle_Mk17_STD_EGL_ElcanSpecter_Laser     = 0,00%
			CUP_arifle_Mk17_STD_EGLM                       = 0,48%
			CUP_arifle_Mk17_STD_FG                         = 0,48%
			CUP_arifle_Mk17_STD_FG_Aim_Laser_snds          = 0,00%
			CUP_arifle_Mk17_STD_FG_ANPAS13c1_Laser_Snds    = 0,00%
			CUP_arifle_Mk17_STD_SFG                        = 0,48%
			CUP_arifle_Mk20                                = 0,48%
			CUP_arifle_Mk20_LeupoldMk4MRT                  = 0,00%
			CUP_arifle_Mk20_SB11420_snds                   = 0,00%
			CUP_arifle_Sa58P                               = 0,48%
			CUP_arifle_Sa58P_des                           = 0,48%
			CUP_arifle_Sa58RIS1                            = 0,48%
			CUP_arifle_Sa58RIS1_Aco_Laser                  = 0,00%
			CUP_arifle_Sa58RIS1_camo_Aco_Laser             = 0,00%
			CUP_arifle_Sa58RIS1_des                        = 0,48%
			CUP_arifle_Sa58RIS2                            = 0,48%
			CUP_arifle_Sa58RIS2_Arco_Laser                 = 0,00%
			CUP_arifle_Sa58RIS2_camo                       = 0,48%
			CUP_arifle_Sa58RIS2_camo_Arco_Laser            = 0,00%
			CUP_arifle_Sa58RIS2_gl                         = 0,48%
			CUP_arifle_Sa58V                               = 0,48%
			CUP_arifle_Sa58V_ACOG_Laser                    = 0,00%
			CUP_arifle_Sa58V_Aim_Laser                     = 0,00%
			CUP_arifle_Sa58V_camo                          = 0,48%
			CUP_arifle_XM8_Carbine                         = 0,00%
			CUP_arifle_XM8_Carbine_FG                      = 0,00%
			CUP_arifle_XM8_Carbine_GL                      = 0,00%
			CUP_arifle_XM8_Compact                         = 0,00%
			CUP_arifle_XM8_Compact_Holo_Flashlight         = 0,00%
			CUP_arifle_XM8_Compact_Rail                    = 0,96%
			CUP_arifle_XM8_Railed                          = 0,96%
			CUP_arifle_XM8_Railed_ANPAS13c1_Laser          = 0,00%
			CUP_arifle_XM8_Railed_ANPAS13c1_Laser_snds     = 0,00%
			CUP_arifle_XM8_Railed_Holo_Laser_snds          = 0,00%
			CUP_arifle_xm8_SAW                             = 0,00%
			CUP_arifle_xm8_sharpshooter                    = 0,00%
			CUP_srifle_M14                                 = 0,48%
		*/
		Rifles[] = {"arifle_SPAR_01_snd_F", "CUP_arifle_M4A1_black", "arifle_CTAR_hex_F", "arifle_SPAR_01_khk_F", "Exile_Weapon_AK74", "arifle_SPAR_02_khk_F", "Exile_Weapon_AK74_GL", "CUP_arifle_M4A1_black", "CUP_arifle_AK107_GL", "CUP_arifle_Mk16_SV", "arifle_TRG20_F", "arifle_SDAR_F", "CUP_arifle_M16A2", "CUP_arifle_AK107_GL", "arifle_AK12_F", "arifle_MXM_Black_F", "arifle_MXC_khk_F", "CUP_arifle_L86A2", "arifle_CTARS_blk_F", "CUP_arifle_FNFAL_railed", "Exile_Weapon_M16A4", "CUP_arifle_FNFAL5061", "CUP_arifle_L85A2_GL", "arifle_MX_khk_F", "Exile_Weapon_M16A2", "arifle_AKM_F", "CUP_arifle_L85A2", "CUP_arifle_AK74M_GL", "CUP_arifle_M16A2_GL", "Exile_Weapon_AK74_GL", "CUP_arifle_Mk20", "CUP_arifle_AKS_Gold", "arifle_MXM_F", "CUP_arifle_M4A1_desert", "CUP_arifle_Mk16_STD_SFG", "CUP_arifle_CZ805_B", "Exile_Weapon_M16A2", "arifle_CTAR_GL_blk_F", "CUP_arifle_Mk16_STD_EGLM", "Exile_Weapon_SVD", "arifle_Mk20_GL_F", "CUP_arifle_CZ805_GL", "arifle_CTAR_GL_blk_F", "arifle_SPAR_01_GL_blk_F", "CUP_arifle_G36C_camo", "arifle_AK12_GL_F", "Exile_Weapon_AK107", "CUP_arifle_Mk16_CQC_EGLM", "CUP_arifle_M4A1_desert", "arifle_MXC_F", "arifle_ARX_blk_F", "CUP_arifle_MG36_camo", "CUP_arifle_AKM", "CUP_arifle_FNFAL", "arifle_SPAR_02_khk_F", "CUP_arifle_L85A2_G", "arifle_AK12_F", "CUP_arifle_M4A1", "CUP_arifle_Sa58RIS2_gl", "arifle_SPAR_01_snd_F", "CUP_arifle_M16A4_GL", "arifle_SPAR_01_GL_snd_F", "CUP_arifle_AKS74U", "CUP_arifle_Sa58V_camo", "CUP_arifle_M16A2", "arifle_Mk20_GL_F", "CUP_arifle_Mk16_CQC", "arifle_TRG21_F", "CUP_arifle_M4A3_desert", "CUP_arifle_M16A4_GL_Laser", "arifle_SPAR_01_GL_blk_F", "CUP_arifle_AK74", "arifle_MX_GL_Black_F", "arifle_CTAR_blk_F", "CUP_arifle_Mk16_STD_FG", "CUP_arifle_Mk16_SV", "CUP_arifle_CZ805_B_GL", "CUP_arifle_Mk17_STD_SFG", "CUP_arifle_AK107", "CUP_arifle_L85A2_NG", "arifle_SDAR_F", "CUP_srifle_M14", "arifle_SPAR_03_khk_F", "arifle_CTARS_hex_F", "CUP_arifle_Mk17_STD_FG", "CUP_arifle_M16A4_GL", "arifle_AKM_FL_F", "CUP_arifle_MG36_camo", "CUP_arifle_Mk16_CQC", "CUP_arifle_MG36", "CUP_arifle_AKS74U", "CUP_arifle_Sa58V", "CUP_arifle_CZ805_A1", "CUP_arifle_XM8_Compact_Rail", "arifle_ARX_ghex_F", "CUP_arifle_Mk16_STD_EGLM", "CUP_arifle_Mk16_STD", "CUP_arifle_AK74_GL", "Exile_Weapon_LeeEnfield", "CUP_arifle_Sa58RIS1_des", "CUP_arifle_Mk17_CQC_EGLM", "CUP_arifle_AK74", "CUP_arifle_Mk17_STD_EGLM", "Exile_Weapon_LeeEnfield", "arifle_CTARS_ghex_F", "Exile_Weapon_AK47", "arifle_CTAR_ghex_F", "CUP_arifle_M16A2_GL", "CUP_arifle_CZ805_A1", "Exile_Weapon_M4", "CUP_arifle_Mk17_STD", "CUP_arifle_XM8_Railed", "CUP_arifle_Mk16_STD_FG", "CUP_arifle_M16A4_Base", "arifle_TRG21_GL_F", "arifle_SPAR_02_snd_F", "arifle_SPAR_02_blk_F", "arifle_MX_F", "CUP_arifle_Mk16_STD_SFG", "arifle_MX_GL_F", "arifle_MX_GL_khk_F", "CUP_arifle_AK74M", "CUP_arifle_FNFAL5062", "CUP_arifle_G36C", "CUP_arifle_L85A2_NG", "Exile_Weapon_AK107_GL", "Exile_Weapon_AK107_GL", "CUP_arifle_G36C_camo", "arifle_SPAR_03_snd_F", "Exile_Weapon_AKS_Gold", "CUP_arifle_Mk17_CQC", "Exile_Weapon_AK107", "arifle_CTARS_hex_F", "CUP_arifle_G36C", "arifle_SPAR_01_blk_F", "Exile_Weapon_CZ550", "CUP_arifle_Mk16_STD", "CUP_arifle_Sa58RIS2", "CUP_arifle_AK74M", "arifle_SPAR_01_khk_F", "arifle_TRG20_F", "CUP_arifle_FNFAL_OSW", "CUP_arifle_AK74M_GL", "CUP_arifle_MG36", "CUP_arifle_Mk16_CQC_SFG", "arifle_MX_Black_F", "CUP_arifle_Mk16_CQC_FG", "arifle_ARX_hex_F", "CUP_arifle_Sa58P_des", "CUP_arifle_Mk16_CQC_FG", "arifle_Mk20C_F", "Exile_Weapon_M16A4", "Exile_Weapon_M4", "CUP_arifle_Mk17_CQC_FG", "CUP_arifle_AK107", "CUP_arifle_XM8_Compact_Rail", "CUP_arifle_L86A2", "arifle_AKM_F", "arifle_SPAR_01_blk_F", "arifle_AKS_F", "arifle_CTAR_ghex_F", "CUP_arifle_CZ805_A2", "arifle_AKS_F", "CUP_arifle_L85A2", "CUP_arifle_Sa58P", "CUP_srifle_CZ750", "Exile_Weapon_AK74", "arifle_Mk20_F", "CUP_arifle_AK47", "arifle_TRG21_F", "arifle_SPAR_01_GL_snd_F", "CUP_arifle_L85A2_G", "CUP_arifle_XM8_Railed", "CUP_arifle_AKS", "arifle_SPAR_01_GL_khk_F", "arifle_SPAR_02_snd_F", "Exile_Weapon_DMR", "arifle_Katiba_F", "arifle_SPAR_02_blk_F", "CUP_arifle_M4A1", "arifle_CTARS_ghex_F", "CUP_arifle_Sa58RIS1", "arifle_TRG21_GL_F", "CUP_arifle_CZ805_A2", "Exile_Weapon_SVDCamo", "arifle_Mk20_F", "CUP_arifle_Sa58RIS2_camo", "CUP_arifle_L85A2_GL", "arifle_Mk20C_F", "CUP_arifle_Mk17_CQC_SFG", "arifle_AKM_FL_F", "CUP_arifle_Mk16_CQC_SFG", "arifle_CTAR_hex_F", "CUP_arifle_M16A4_GL_Laser", "arifle_AK12_GL_F", "CUP_arifle_M4A1_camo", "arifle_SPAR_01_GL_khk_F", "arifle_MXC_Black_F", "arifle_SPAR_03_blk_F", "CUP_arifle_M4A1_camo", "arifle_CTARS_blk_F", "arifle_CTAR_blk_F", "arifle_MXM_khk_F", "Exile_Weapon_AK47", "Exile_Weapon_VSSVintorez", "CUP_arifle_M16A4_Base", "CUP_arifle_Mk16_CQC_EGLM", "CUP_arifle_M4A3_desert", "arifle_Katiba_GL_F"};

		/*
			Percental Item Spawn Chances of RifleAmmo:

			20Rnd_556x45_UW_mag                                = 0,45%
			30Rnd_556x45_Stanag                                = 0,45%
			30Rnd_556x45_Stanag_green                          = 0,45%
			30Rnd_556x45_Stanag_red                            = 0,45%
			30Rnd_556x45_Stanag_Tracer_Green                   = 0,45%
			30Rnd_556x45_Stanag_Tracer_Red                     = 0,45%
			30Rnd_556x45_Stanag_Tracer_Yellow                  = 0,45%
			30Rnd_65x39_caseless_green                         = 0,45%
			30Rnd_65x39_caseless_green_mag_Tracer              = 0,45%
			30Rnd_65x39_caseless_mag                           = 0,45%
			30Rnd_65x39_caseless_mag_Tracer                    = 0,45%
			Exile_Magazine_10Rnd_303                           = 0,45%
			Exile_Magazine_30Rnd_762x39_AK                     = 0,45%
			Exile_Magazine_30Rnd_545x39_AK                     = 0,45%
			Exile_Magazine_30Rnd_545x39_AK_Green               = 0,45%
			Exile_Magazine_30Rnd_545x39_AK_Red                 = 0,45%
			Exile_Magazine_30Rnd_545x39_AK_White               = 0,45%
			Exile_Magazine_30Rnd_545x39_AK_Yellow              = 0,45%
			Exile_Magazine_20Rnd_762x51_DMR                    = 0,45%
			Exile_Magazine_20Rnd_762x51_DMR_Yellow             = 0,45%
			Exile_Magazine_20Rnd_762x51_DMR_Red                = 0,45%
			Exile_Magazine_20Rnd_762x51_DMR_Green              = 0,45%
			Exile_Magazine_20Rnd_762x51_DMR_White              = 0,45%
			Exile_Magazine_5Rnd_22LR                           = 0,45%
			Exile_Magazine_10Rnd_762x54                        = 0,45%
			Exile_Magazine_10Rnd_9x39                          = 0,45%
			Exile_Magazine_20Rnd_9x39                          = 0,45%
			30Rnd_762x39_Mag_F                                 = 0,45%
			30Rnd_762x39_Mag_Green_F                           = 0,45%
			30Rnd_762x39_Mag_Tracer_F                          = 0,45%
			30Rnd_762x39_Mag_Tracer_Green_F                    = 0,45%
			30Rnd_762x39_AK47_M                                = 0,45%
			30Rnd_545x39_Mag_F                                 = 0,45%
			30Rnd_545x39_Mag_Green_F                           = 0,45%
			30Rnd_545x39_Mag_Tracer_F                          = 0,45%
			30Rnd_545x39_Mag_Tracer_Green_F                    = 0,45%
			10Rnd_50BW_Mag_F                                   = 0,45%
			30Rnd_580x42_Mag_F                                 = 0,45%
			30Rnd_580x42_Mag_Tracer_F                          = 0,45%
			100Rnd_580x42_Mag_F                                = 0,45%
			100Rnd_580x42_Mag_Tracer_F                         = 0,45%
			150Rnd_556x45_Drum_Mag_F                           = 0,45%
			150Rnd_556x45_Drum_Mag_Tracer_F                    = 0,45%
			20Rnd_762x51_Mag                                   = 0,45%
			1550Rnd_20mm_Tracer_Red                            = 0,45%
			300Rnd_20mm_Tracer_Red                             = 0,45%
			1550Rnd_20mm_Tracer_Yellow                         = 0,45%
			300Rnd_20mm_Tracer_Yellow                          = 0,45%
			1550Rnd_20mm_Tracer_Green                          = 0,45%
			300Rnd_20mm_Tracer_Green                           = 0,45%
			300Rnd_25mm_Tracer_Red                             = 0,45%
			300Rnd_25mm_Tracer_Yellow                          = 0,45%
			300Rnd_25mm_Tracer_Green                           = 0,45%
			21Rnd_AAA_RIM_116                                  = 0,45%
			8Rnd_AAA_RIM_7                                     = 0,45%
			6Rnd_GreenSignal_F                                 = 0,45%
			6Rnd_RedSignal_F                                   = 0,45%
			CUP_30Rnd_545x39_AK_M                              = 0,45%
			CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M             = 0,45%
			CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M               = 0,45%
			CUP_30Rnd_TE1_White_Tracer_545x39_AK_M             = 0,45%
			CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M            = 0,45%
			CUP_30Rnd_Subsonic_545x39_AK_M                     = 0,45%
			CUP_30Rnd_762x39_AK47_M                            = 0,45%
			CUP_30Rnd_Sa58_M                                   = 0,45%
			CUP_30Rnd_Sa58_M_TracerG                           = 0,45%
			CUP_30Rnd_Sa58_M_TracerY                           = 0,45%
			CUP_10x_303_M                                      = 0,45%
			CUP_30Rnd_556x45_Stanag                            = 0,45%
			CUP_20Rnd_556x45_Stanag                            = 0,45%
			CUP_30Rnd_556x45_G36                               = 0,45%
			CUP_30Rnd_TE1_Red_Tracer_556x45_G36                = 0,45%
			CUP_30Rnd_TE1_Green_Tracer_556x45_G36              = 0,45%
			CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36             = 0,45%
			CUP_100Rnd_556x45_BetaCMag                         = 0,45%
			CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag          = 0,45%
			CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag        = 0,45%
			CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag       = 0,45%
			CUP_20Rnd_762x51_FNFAL_M                           = 0,45%
			CUP_20Rnd_762x51_L129_M                            = 0,45%
			CUP_20Rnd_762x51_B_SCAR                            = 0,45%
			CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR            = 0,45%
			CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR             = 0,45%
			CUP_20Rnd_TE1_White_Tracer_762x51_SCAR             = 0,45%
			CUP_20Rnd_762x51_CZ805B                            = 0,45%
			CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B          = 0,45%
			CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B             = 0,45%
			CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B           = 0,45%
			CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B           = 0,45%
			CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M       = 0,45%
			CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M       = 0,45%
			CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M     = 0,45%
			CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M       = 0,45%
			CUP_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M     = 0,45%
			CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M       = 0,45%
			CUP_200Rnd_TE1_LRT4_Red_Tracer_762x51_Belt_M       = 0,45%
			CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M       = 0,45%
			CUP_200Rnd_TE4_Green_Tracer_556x45_M249            = 0,45%
			CUP_200Rnd_TE4_Red_Tracer_556x45_M249              = 0,45%
			CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249           = 0,45%
			CUP_200Rnd_TE1_Red_Tracer_556x45_M249              = 0,45%
			CUP_100Rnd_TE4_Green_Tracer_556x45_M249            = 0,45%
			CUP_100Rnd_TE4_Red_Tracer_556x45_M249              = 0,45%
			CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249           = 0,45%
			CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1          = 0,45%
			CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1            = 0,45%
			CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1         = 0,45%
			CUP_50Rnd_UK59_762x54R_Tracer                      = 0,45%
			CUP_1Rnd_HE_GP25_M                                 = 0,45%
			CUP_FlareWhite_GP25_M                              = 0,45%
			CUP_FlareGreen_GP25_M                              = 0,45%
			CUP_FlareRed_GP25_M                                = 0,45%
			CUP_FlareYellow_GP25_M                             = 0,45%
			CUP_IlumFlareWhite_GP25_M                          = 0,45%
			CUP_IlumFlareRed_GP25_M                            = 0,45%
			CUP_IlumFlareGreen_GP25_M                          = 0,45%
			CUP_1Rnd_SMOKE_GP25_M                              = 0,45%
			CUP_1Rnd_SmokeRed_GP25_M                           = 0,45%
			CUP_1Rnd_SmokeGreen_GP25_M                         = 0,45%
			CUP_1Rnd_SmokeYellow_GP25_M                        = 0,45%
			CUP_1Rnd_HE_M203                                   = 0,45%
			CUP_1Rnd_HEDP_M203                                 = 0,45%
			CUP_FlareWhite_M203                                = 0,45%
			CUP_FlareGreen_M203                                = 0,45%
			CUP_FlareRed_M203                                  = 0,45%
			CUP_FlareYellow_M203                               = 0,45%
			CUP_1Rnd_StarFlare_White_M203                      = 0,45%
			CUP_1Rnd_StarFlare_Red_M203                        = 0,45%
			CUP_1Rnd_StarFlare_Green_M203                      = 0,45%
			CUP_1Rnd_StarCluster_White_M203                    = 0,45%
			CUP_1Rnd_StarCluster_Red_M203                      = 0,45%
			CUP_1Rnd_StarCluster_Green_M203                    = 0,45%
			CUP_1Rnd_Smoke_M203                                = 0,45%
			CUP_1Rnd_SmokeRed_M203                             = 0,45%
			CUP_1Rnd_SmokeGreen_M203                           = 0,45%
			CUP_1Rnd_SmokeYellow_M203                          = 0,45%
			CUP_6Rnd_HE_GP25_M                                 = 0,45%
			CUP_6Rnd_HE_M203                                   = 0,45%
			CUP_6Rnd_FlareWhite_M203                           = 0,45%
			CUP_6Rnd_FlareGreen_M203                           = 0,45%
			CUP_6Rnd_FlareRed_M203                             = 0,45%
			CUP_6Rnd_FlareYellow_M203                          = 0,45%
			CUP_6Rnd_Smoke_M203                                = 0,45%
			CUP_6Rnd_SmokeRed_M203                             = 0,45%
			CUP_6Rnd_SmokeGreen_M203                           = 0,45%
			CUP_6Rnd_SmokeYellow_M203                          = 0,45%
			CUP_64Rnd_9x19_Bizon_M                             = 0,45%
			CUP_64Rnd_Green_Tracer_9x19_Bizon_M                = 0,45%
			CUP_64Rnd_Red_Tracer_9x19_Bizon_M                  = 0,45%
			CUP_64Rnd_White_Tracer_9x19_Bizon_M                = 0,45%
			CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M               = 0,45%
			CUP_30Rnd_9x19_MP5                                 = 0,45%
			CUP_10Rnd_B_765x17_Ball_M                          = 0,45%
			CUP_20Rnd_B_765x17_Ball_M                          = 0,45%
			CUP_30Rnd_9x19_EVO                                 = 0,45%
			CUP_30Rnd_9x19_UZI                                 = 0,45%
			CUP_5Rnd_127x108_KSVK_M                            = 0,45%
			CUP_10Rnd_762x54_SVD_M                             = 0,45%
			CUP_10Rnd_9x39_SP5_VSS_M                           = 0,45%
			CUP_20Rnd_9x39_SP5_VSS_M                           = 0,45%
			CUP_5Rnd_127x99_as50_M                             = 0,45%
			CUP_20Rnd_762x51_DMR                               = 0,45%
			CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR             = 0,45%
			CUP_20Rnd_TE1_Red_Tracer_762x51_DMR                = 0,45%
			CUP_20Rnd_TE1_Green_Tracer_762x51_DMR              = 0,45%
			CUP_20Rnd_TE1_White_Tracer_762x51_DMR              = 0,45%
			CUP_5Rnd_762x51_M24                                = 0,45%
			CUP_20Rnd_762x51_B_M110                            = 0,45%
			CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110            = 0,45%
			CUP_20Rnd_TE1_Red_Tracer_762x51_M110               = 0,45%
			CUP_20Rnd_TE1_Green_Tracer_762x51_M110             = 0,45%
			CUP_20Rnd_TE1_White_Tracer_762x51_M110             = 0,45%
			CUP_10Rnd_127x99_M107                              = 0,45%
			CUP_10Rnd_762x51_CZ750                             = 0,45%
			CUP_10Rnd_762x51_CZ750_Tracer                      = 0,45%
			CUP_5Rnd_86x70_L115A1                              = 0,45%
			CUP_5Rnd_762x67_G22                                = 0,45%
			CUP_5x_22_LR_17_HMR_M                              = 0,45%
			CUP_8Rnd_B_Saiga12_74Slug_M                        = 0,45%
			CUP_8Rnd_B_Saiga12_74Pellets_M                     = 0,45%
			CUP_20Rnd_B_AA12_Pellets                           = 0,45%
			CUP_20Rnd_B_AA12_74Slug                            = 0,45%
			CUP_20Rnd_B_AA12_HE                                = 0,45%
			CUP_8Rnd_B_Beneli_74Slug                           = 0,45%
			CUP_8Rnd_B_Beneli_74Pellets                        = 0,45%
			CUP_8Rnd_9x18_Makarov_M                            = 0,45%
			CUP_8Rnd_9x18_MakarovSD_M                          = 0,45%
			CUP_6Rnd_45ACP_M                                   = 0,45%
			CUP_17Rnd_9x19_glock17                             = 0,45%
			CUP_7Rnd_45ACP_1911                                = 0,45%
			CUP_10Rnd_9x19_Compact                             = 0,45%
			CUP_18Rnd_9x19_Phantom                             = 0,45%
			CUP_15Rnd_9x19_M9                                  = 0,45%
			CUP_100Rnd_TE3_LRT5_Green_Tracer_127x107_DSHKM_M   = 0,45%
			CUP_100Rnd_TE3_LRT5_127x107_DSHKM_M                = 0,45%
			CUP_50Rnd_TE3_LRT5_127x107_DSHKM_M                 = 0,45%
			CUP_150Rnd_TE3_LRT5_127x107_DSHKM_M                = 0,45%
			CUP_150Rnd_127x108_KORD_M                          = 0,45%
			CUP_50Rnd_127x108_KORD_M                           = 0,45%
			CUP_750Rnd_TE2_Red_Tracer_M197_20mm_AP_M           = 0,45%
			CUP_750Rnd_TE2_Green_Tracer_M197_20mm_AP_M         = 0,45%
			CUP_750Rnd_TE2_Yellow_Tracer_M197_20mm_AP_M        = 0,45%
			CUP_750Rnd_TE2_Red_Tracer_M197_20mm_HEI_M          = 0,45%
			CUP_750Rnd_TE2_Yellow_Tracer_M197_20mm_HEI_M       = 0,45%
			CUP_750Rnd_TE2_Red_Tracer_M197_20mm_API_M          = 0,45%
			CUP_750Rnd_TE2_Green_Tracer_M197_20mm_API_M        = 0,45%
			CUP_750Rnd_TE2_Yellow_Tracer_M197_20mm_API_M       = 0,45%
			CUP_1200Rnd_TE1_Red_Tracer_M621_20mm_HE_M          = 0,45%
			CUP_750Rnd_TE1_Green_Tracer_GI2_20mm_HE_M          = 0,45%
			CUP_20Rnd_TE1_Red_Tracer_120mmHE_M256_Cannon_M     = 0,45%
			CUP_20Rnd_TE1_Red_Tracer_120mmSABOT_M256_Cannon_M  = 0,45%
			CUP_12Rnd_TE1_Red_Tracer_105mmHE_M68_Cannon_M      = 0,45%
			CUP_20Rnd_TE1_Red_Tracer_105mmSABOT_M68_Cannon_M   = 0,45%
			CUP_1200Rnd_TE4_White_Tracer_762x51_M240_M         = 0,45%
			CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M           = 0,45%
			CUP_500Rnd_TE2_Green_Tracer_145x115_KPVT_M         = 0,45%
			CUP_50Rnd_TE2_LRT4_Green_Tracer_145x115_KPVT_M     = 0,45%
			CUP_4000Rnd_TE5_White_Tracer_762x51_M134_M         = 0,45%
			CUP_100Rnd_TE4_White_Tracer_762x51_M240_M          = 0,45%
			CUP_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M    = 0,45%
			CUP_1200Rnd_TE1_Green_Tracer_30x113mm_M789_HEDP_M  = 0,45%
			CUP_1200Rnd_TE1_Yellow_Tracer_30x113mm_M789_HEDP_M = 0,45%
			CUP_1200Rnd_TE1_White_Tracer_30x113mm_M789_HEDP_M  = 0,45%
		*/
		RifleAmmo[] = {"CUP_1Rnd_SmokeYellow_GP25_M", "CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36", "CUP_12Rnd_TE1_Red_Tracer_105mmHE_M68_Cannon_M", "20Rnd_556x45_UW_mag", "CUP_20Rnd_762x51_B_SCAR", "CUP_4000Rnd_TE5_White_Tracer_762x51_M134_M", "Exile_Magazine_10Rnd_762x54", "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "CUP_8Rnd_9x18_Makarov_M", "CUP_6Rnd_Smoke_M203", "CUP_750Rnd_TE2_Red_Tracer_M197_20mm_HEI_M", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "100Rnd_580x42_Mag_Tracer_F", "CUP_10Rnd_762x51_CZ750", "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag", "CUP_8Rnd_B_Saiga12_74Slug_M", "CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1", "300Rnd_25mm_Tracer_Green", "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249", "Exile_Magazine_20Rnd_762x51_DMR_Green", "CUP_6Rnd_SmokeGreen_M203", "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag", "30Rnd_580x42_Mag_Tracer_F", "CUP_30Rnd_Sa58_M_TracerG", "8Rnd_AAA_RIM_7", "CUP_30Rnd_9x19_UZI", "Exile_Magazine_20Rnd_762x51_DMR_Red", "CUP_750Rnd_TE2_Green_Tracer_M197_20mm_API_M", "CUP_1200Rnd_TE1_Red_Tracer_M621_20mm_HE_M", "Exile_Magazine_30Rnd_545x39_AK_Yellow", "CUP_100Rnd_556x45_BetaCMag", "30Rnd_580x42_Mag_F", "CUP_1Rnd_SmokeRed_M203", "CUP_6Rnd_SmokeRed_M203", "CUP_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", "CUP_64Rnd_White_Tracer_9x19_Bizon_M", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36", "CUP_6Rnd_FlareYellow_M203", "30Rnd_545x39_Mag_Tracer_F", "CUP_750Rnd_TE2_Red_Tracer_M197_20mm_AP_M", "CUP_5Rnd_762x67_G22", "30Rnd_65x39_caseless_green", "CUP_750Rnd_TE2_Yellow_Tracer_M197_20mm_AP_M", "CUP_10Rnd_762x54_SVD_M", "CUP_1Rnd_StarFlare_Green_M203", "1550Rnd_20mm_Tracer_Yellow", "CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1", "CUP_20Rnd_762x51_FNFAL_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B", "Exile_Magazine_30Rnd_545x39_AK_Green", "CUP_8Rnd_B_Saiga12_74Pellets_M", "CUP_20Rnd_762x51_CZ805B", "CUP_750Rnd_TE2_Red_Tracer_M197_20mm_API_M", "CUP_30Rnd_Subsonic_545x39_AK_M", "CUP_10Rnd_762x51_CZ750_Tracer", "CUP_1Rnd_HE_GP25_M", "CUP_FlareYellow_GP25_M", "30Rnd_545x39_Mag_F", "Exile_Magazine_30Rnd_762x39_AK", "CUP_64Rnd_Red_Tracer_9x19_Bizon_M", "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110", "CUP_150Rnd_127x108_KORD_M", "300Rnd_20mm_Tracer_Red", "CUP_750Rnd_TE2_Yellow_Tracer_M197_20mm_HEI_M", "CUP_20Rnd_B_AA12_Pellets", "CUP_8Rnd_B_Beneli_74Pellets", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M", "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "CUP_750Rnd_TE2_Green_Tracer_M197_20mm_AP_M", "CUP_1Rnd_StarCluster_Green_M203", "CUP_5Rnd_762x51_M24", "CUP_20Rnd_B_AA12_HE", "CUP_1Rnd_Smoke_M203", "30Rnd_762x39_Mag_F", "CUP_20Rnd_TE1_Red_Tracer_120mmHE_M256_Cannon_M", "CUP_20Rnd_B_765x17_Ball_M", "CUP_100Rnd_TE3_LRT5_127x107_DSHKM_M", "CUP_1Rnd_SmokeGreen_M203", "6Rnd_GreenSignal_F", "CUP_750Rnd_TE2_Yellow_Tracer_M197_20mm_API_M", "CUP_20Rnd_TE1_Red_Tracer_762x51_DMR", "CUP_100Rnd_TE4_White_Tracer_762x51_M240_M", "30Rnd_545x39_Mag_Green_F", "Exile_Magazine_20Rnd_762x51_DMR_White", "CUP_10Rnd_B_765x17_Ball_M", "CUP_IlumFlareRed_GP25_M", "Exile_Magazine_30Rnd_545x39_AK", "CUP_30Rnd_9x19_MP5", "21Rnd_AAA_RIM_116", "CUP_200Rnd_TE1_Red_Tracer_556x45_M249", "CUP_50Rnd_TE3_LRT5_127x107_DSHKM_M", "300Rnd_20mm_Tracer_Yellow", "30Rnd_556x45_Stanag", "CUP_1Rnd_SmokeGreen_GP25_M", "300Rnd_25mm_Tracer_Yellow", "Exile_Magazine_30Rnd_545x39_AK_White", "CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B", "CUP_FlareGreen_M203", "CUP_50Rnd_TE2_LRT4_Green_Tracer_145x115_KPVT_M", "CUP_FlareGreen_GP25_M", "CUP_6Rnd_45ACP_M", "CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1", "30Rnd_762x39_Mag_Green_F", "CUP_30Rnd_556x45_G36", "CUP_1200Rnd_TE1_White_Tracer_30x113mm_M789_HEDP_M", "30Rnd_762x39_Mag_Tracer_F", "CUP_1Rnd_StarCluster_Red_M203", "CUP_20Rnd_762x51_B_M110", "Exile_Magazine_20Rnd_9x39", "CUP_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_20Rnd_TE1_Red_Tracer_105mmSABOT_M68_Cannon_M", "CUP_8Rnd_9x18_MakarovSD_M", "30Rnd_65x39_caseless_mag", "CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M", "CUP_IlumFlareGreen_GP25_M", "CUP_20Rnd_TE1_Red_Tracer_762x51_M110", "CUP_10Rnd_9x39_SP5_VSS_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_20Rnd_TE1_Green_Tracer_762x51_M110", "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", "CUP_50Rnd_127x108_KORD_M", "CUP_500Rnd_TE2_Green_Tracer_145x115_KPVT_M", "CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249", "CUP_1Rnd_SmokeRed_GP25_M", "CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B", "CUP_5Rnd_127x99_as50_M", "1550Rnd_20mm_Tracer_Red", "CUP_200Rnd_TE1_LRT4_Red_Tracer_762x51_Belt_M", "CUP_200Rnd_TE4_Green_Tracer_556x45_M249", "CUP_1Rnd_StarFlare_White_M203", "CUP_20Rnd_762x51_DMR", "CUP_10Rnd_127x99_M107", "CUP_20Rnd_TE1_Red_Tracer_120mmSABOT_M256_Cannon_M", "CUP_1Rnd_SMOKE_GP25_M", "30Rnd_556x45_Stanag_Tracer_Red", "CUP_IlumFlareWhite_GP25_M", "CUP_5x_22_LR_17_HMR_M", "CUP_FlareRed_GP25_M", "30Rnd_556x45_Stanag_red", "30Rnd_65x39_caseless_green_mag_Tracer", "CUP_1Rnd_StarCluster_White_M203", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M", "CUP_6Rnd_HE_GP25_M", "CUP_6Rnd_SmokeYellow_M203", "CUP_1Rnd_HE_M203", "Exile_Magazine_5Rnd_22LR", "Exile_Magazine_10Rnd_9x39", "CUP_7Rnd_45ACP_1911", "30Rnd_545x39_Mag_Tracer_Green_F", "CUP_6Rnd_HE_M203", "CUP_15Rnd_9x19_M9", "CUP_64Rnd_9x19_Bizon_M", "CUP_30Rnd_Sa58_M", "CUP_100Rnd_TE4_Red_Tracer_556x45_M249", "Exile_Magazine_20Rnd_762x51_DMR_Yellow", "30Rnd_556x45_Stanag_Tracer_Green", "CUP_1200Rnd_TE4_White_Tracer_762x51_M240_M", "30Rnd_556x45_Stanag_Tracer_Yellow", "CUP_1Rnd_StarFlare_Red_M203", "CUP_17Rnd_9x19_glock17", "CUP_6Rnd_FlareWhite_M203", "CUP_150Rnd_TE3_LRT5_127x107_DSHKM_M", "CUP_50Rnd_UK59_762x54R_Tracer", "30Rnd_556x45_Stanag_green", "CUP_6Rnd_FlareGreen_M203", "10Rnd_50BW_Mag_F", "CUP_64Rnd_Green_Tracer_9x19_Bizon_M", "150Rnd_556x45_Drum_Mag_Tracer_F", "CUP_20Rnd_556x45_Stanag", "30Rnd_762x39_AK47_M", "CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M", "6Rnd_RedSignal_F", "CUP_1Rnd_HEDP_M203", "CUP_30Rnd_TE1_White_Tracer_545x39_AK_M", "CUP_30Rnd_Sa58_M_TracerY", "1550Rnd_20mm_Tracer_Green", "CUP_30Rnd_556x45_Stanag", "CUP_20Rnd_9x39_SP5_VSS_M", "CUP_5Rnd_86x70_L115A1", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR", "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR", "30Rnd_762x39_Mag_Tracer_Green_F", "CUP_10Rnd_9x19_Compact", "CUP_10x_303_M", "CUP_20Rnd_B_AA12_74Slug", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR", "CUP_FlareRed_M203", "150Rnd_556x45_Drum_Mag_F", "Exile_Magazine_30Rnd_545x39_AK_Red", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B", "CUP_100Rnd_TE3_LRT5_Green_Tracer_127x107_DSHKM_M", "CUP_30Rnd_545x39_AK_M", "Exile_Magazine_20Rnd_762x51_DMR", "CUP_6Rnd_FlareRed_M203", "CUP_20Rnd_762x51_L129_M", "CUP_1200Rnd_TE1_Yellow_Tracer_30x113mm_M789_HEDP_M", "CUP_1Rnd_SmokeYellow_M203", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M", "CUP_20Rnd_TE1_White_Tracer_762x51_M110", "CUP_30Rnd_9x19_EVO", "CUP_FlareWhite_M203", "CUP_750Rnd_TE1_Green_Tracer_GI2_20mm_HE_M", "CUP_FlareYellow_M203", "100Rnd_580x42_Mag_F", "300Rnd_25mm_Tracer_Red", "CUP_5Rnd_127x108_KSVK_M", "CUP_20Rnd_TE1_White_Tracer_762x51_DMR", "Exile_Magazine_10Rnd_303", "CUP_8Rnd_B_Beneli_74Slug", "20Rnd_762x51_Mag", "CUP_100Rnd_TE4_Green_Tracer_556x45_M249", "30Rnd_65x39_caseless_mag_Tracer", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36", "CUP_18Rnd_9x19_Phantom", "CUP_1200Rnd_TE1_Green_Tracer_30x113mm_M789_HEDP_M", "300Rnd_20mm_Tracer_Green", "CUP_FlareWhite_GP25_M"};

		/*
			Percental Item Spawn Chances of RifleAttachments:

			muzzle_snds_M                           = 1,54%
			muzzle_snds_H                           = 1,54%
			muzzle_snds_H_khk_F                     = 1,54%
			muzzle_snds_H_snd_F                     = 1,54%
			muzzle_snds_58_blk_F                    = 1,54%
			muzzle_snds_m_khk_F                     = 1,54%
			muzzle_snds_m_snd_F                     = 1,54%
			muzzle_snds_58_wdm_F                    = 1,54%
			muzzle_snds_65_TI_blk_F                 = 1,54%
			muzzle_snds_65_TI_hex_F                 = 1,54%
			muzzle_snds_65_TI_ghex_F                = 1,54%
			muzzle_snds_H_MG_blk_F                  = 1,54%
			muzzle_snds_H_MG_khk_F                  = 1,54%
			optic_Arco                              = 1,54%
			optic_Arco_blk_F                        = 1,54%
			optic_Arco_ghex_F                       = 1,54%
			optic_Hamr                              = 1,54%
			optic_Hamr_khk_F                        = 1,54%
			optic_Holosight                         = 1,54%
			optic_Holosight_blk_F                   = 1,54%
			optic_Holosight_khk_F                   = 1,54%
			acc_flashlight                          = 1,54%
			acc_pointer_IR                          = 1,54%
			optic_MRCO                              = 1,54%
			optic_DMS                               = 1,54%
			optic_DMS_ghex_F                        = 1,54%
			optic_ERCO_blk_F                        = 1,54%
			optic_ERCO_khk_F                        = 1,54%
			optic_ERCO_snd_F                        = 1,54%
			optic_NVS                               = 0,77%
			CUP_optic_MAAWS_Scope                   = 0,00%
			CUP_optic_SMAW_Scope                    = 0,00%
			CUP_optic_PSO_1                         = 0,77%
			CUP_optic_Kobra                         = 0,77%
			CUP_optic_GOSHAWK                       = 0,00%
			CUP_optic_NSPU                          = 0,77%
			CUP_optic_PechenegScope                 = 0,77%
			CUP_muzzle_PBS4                         = 0,00%
			CUP_muzzle_PB6P9                        = 0,00%
			CUP_muzzle_Bizon                        = 0,00%
			CUP_acc_Glock17_Flashlight              = 0,00%
			CUP_muzzle_snds_M9                      = 0,00%
			CUP_muzzle_snds_MicroUzi                = 0,77%
			CUP_optic_SB_3_12x50_PMII               = 0,77%
			CUP_optic_AN_PAS_13c2                   = 0,00%
			CUP_optic_HoloBlack                     = 0,77%
			CUP_optic_HoloWdl                       = 0,77%
			CUP_optic_HoloDesert                    = 0,77%
			CUP_optic_Eotech533                     = 0,77%
			CUP_optic_Eotech533Grey                 = 0,77%
			CUP_optic_CompM4                        = 0,77%
			CUP_optic_SUSAT                         = 0,77%
			CUP_optic_ACOG                          = 0,77%
			CUP_optic_CWS                           = 0,00%
			CUP_optic_Leupold_VX3                   = 0,77%
			CUP_optic_AN_PVS_10                     = 0,77%
			CUP_optic_CompM2_Black                  = 0,77%
			CUP_optic_CompM2_Woodland               = 0,77%
			CUP_optic_CompM2_Woodland2              = 0,77%
			CUP_optic_CompM2_Desert                 = 0,77%
			CUP_optic_RCO                           = 0,77%
			CUP_optic_RCO_desert                    = 0,77%
			CUP_optic_LeupoldM3LR                   = 0,77%
			CUP_optic_LeupoldMk4_10x40_LRT_Desert   = 0,77%
			CUP_optic_LeupoldMk4_10x40_LRT_Woodland = 0,77%
			CUP_optic_ElcanM145                     = 0,77%
			CUP_optic_AN_PAS_13c1                   = 0,00%
			CUP_optic_LeupoldMk4_CQ_T               = 0,77%
			CUP_optic_ELCAN_SpecterDR               = 0,77%
			CUP_optic_LeupoldMk4_MRT_tan            = 0,77%
			CUP_optic_SB_11_4x20_PM                 = 0,77%
			CUP_optic_ZDDot                         = 0,77%
			CUP_optic_MRad                          = 0,77%
			CUP_optic_TrijiconRx01_desert           = 0,77%
			CUP_optic_TrijiconRx01_black            = 0,77%
			CUP_optic_AN_PVS_4                      = 0,77%
			CUP_optic_Elcan                         = 0,77%
			CUP_optic_Elcan_reflex                  = 0,77%
			CUP_acc_ANPEQ_15                        = 0,77%
			CUP_acc_ANPEQ_2                         = 0,77%
			CUP_acc_Flashlight                      = 0,77%
			CUP_acc_Flashlight_wdl                  = 0,77%
			CUP_acc_Flashlight_desert               = 0,77%
			CUP_acc_XM8_light_module                = 0,77%
			CUP_acc_ANPEQ_2_camo                    = 0,77%
			CUP_acc_ANPEQ_2_desert                  = 0,77%
			CUP_acc_ANPEQ_2_grey                    = 0,77%
			CUP_acc_CZ_M3X                          = 0,77%
			CUP_acc_LLM                             = 0,77%
			CUP_bipod_Harris_1A2_L                  = 0,77%
			CUP_bipod_VLTOR_Modpod                  = 0,77%
			CUP_muzzle_snds_AWM                     = 0,77%
			CUP_muzzle_snds_G36_black               = 0,77%
			CUP_muzzle_snds_G36_desert              = 0,77%
			CUP_muzzle_snds_L85                     = 0,77%
			CUP_acc_sffh                            = 0,77%
			CUP_acc_bfa                             = 0,77%
			CUP_muzzle_snds_M110                    = 0,77%
			CUP_muzzle_snds_M14                     = 0,77%
			CUP_muzzle_snds_M16_camo                = 0,77%
			CUP_muzzle_snds_M16                     = 0,77%
			CUP_muzzle_snds_Mk12                    = 0,77%
			CUP_optic_PGO7V                         = 0,77%
			CUP_optic_PGO7V2                        = 0,77%
			CUP_optic_PGO7V3                        = 0,77%
			CUP_optic_NSPU_RPG                      = 0,77%
			CUP_muzzleFlash2SCAR_L                  = 0,77%
			CUP_muzzle_snds_SCAR_L                  = 0,77%
			CUP_muzzle_mfsup_SCAR_L                 = 0,77%
			CUP_muzzle_snds_SCAR_H                  = 0,77%
			CUP_muzzle_mfsup_SCAR_H                 = 0,77%
			CUP_muzzle_snds_XM8                     = 0,77%
			CUP_Binocular_Vector                    = 0,00%
			CUP_Laserdesignator                     = 0,00%
			CUP_LRTV_ACR                            = 0,00%
		*/
		RifleAttachments[] = {"CUP_acc_XM8_light_module", "optic_DMS_ghex_F", "CUP_optic_LeupoldMk4_10x40_LRT_Desert", "optic_Holosight", "muzzle_snds_H", "muzzle_snds_m_khk_F", "optic_Arco_blk_F", "optic_Arco", "CUP_muzzle_snds_Mk12", "acc_flashlight", "optic_Hamr", "CUP_optic_PGO7V", "CUP_muzzle_snds_M16", "CUP_optic_TrijiconRx01_desert", "CUP_acc_Flashlight_wdl", "CUP_muzzle_snds_M14", "muzzle_snds_58_wdm_F", "optic_ERCO_snd_F", "CUP_optic_Eotech533", "CUP_optic_HoloBlack", "muzzle_snds_m_snd_F", "CUP_muzzle_snds_M16_camo", "optic_Hamr_khk_F", "muzzle_snds_m_snd_F", "CUP_optic_RCO", "optic_Holosight_blk_F", "optic_Holosight_blk_F", "CUP_muzzle_mfsup_SCAR_H", "acc_flashlight", "CUP_bipod_Harris_1A2_L", "CUP_optic_PGO7V2", "CUP_optic_HoloDesert", "muzzle_snds_H_snd_F", "muzzle_snds_H_MG_khk_F", "CUP_muzzle_snds_G36_black", "muzzle_snds_58_wdm_F", "optic_ERCO_khk_F", "CUP_optic_TrijiconRx01_black", "optic_Arco_ghex_F", "CUP_optic_AN_PVS_10", "optic_DMS_ghex_F", "CUP_optic_CompM2_Woodland", "CUP_optic_CompM2_Woodland2", "optic_ERCO_blk_F", "CUP_acc_ANPEQ_2_grey", "CUP_acc_Flashlight", "CUP_optic_RCO_desert", "CUP_muzzle_snds_XM8", "muzzle_snds_H", "CUP_optic_PechenegScope", "CUP_optic_HoloWdl", "CUP_optic_SB_3_12x50_PMII", "optic_ERCO_blk_F", "CUP_optic_Leupold_VX3", "CUP_muzzle_snds_M110", "CUP_muzzle_snds_L85", "CUP_optic_Elcan_reflex", "CUP_optic_LeupoldMk4_CQ_T", "CUP_acc_ANPEQ_2", "muzzle_snds_H_MG_khk_F", "muzzle_snds_m_khk_F", "CUP_optic_PGO7V3", "CUP_acc_ANPEQ_2_camo", "optic_Arco_blk_F", "CUP_muzzleFlash2SCAR_L", "optic_MRCO", "CUP_optic_SB_11_4x20_PM", "CUP_optic_Elcan", "muzzle_snds_H_khk_F", "CUP_muzzle_snds_G36_desert", "optic_ERCO_snd_F", "CUP_optic_ZDDot", "CUP_bipod_VLTOR_Modpod", "CUP_optic_ElcanM145", "CUP_acc_bfa", "CUP_muzzle_snds_AWM", "optic_DMS", "CUP_acc_ANPEQ_2_desert", "optic_Holosight_khk_F", "optic_Holosight_khk_F", "muzzle_snds_65_TI_hex_F", "optic_Holosight", "optic_NVS", "CUP_acc_sffh", "muzzle_snds_65_TI_blk_F", "muzzle_snds_M", "CUP_optic_LeupoldM3LR", "CUP_optic_LeupoldMk4_10x40_LRT_Woodland", "optic_DMS", "CUP_optic_NSPU", "acc_pointer_IR", "CUP_optic_Eotech533Grey", "muzzle_snds_58_blk_F", "muzzle_snds_65_TI_ghex_F", "CUP_optic_CompM4", "optic_Hamr", "acc_pointer_IR", "CUP_optic_PSO_1", "CUP_optic_MRad", "CUP_muzzle_mfsup_SCAR_L", "optic_MRCO", "CUP_muzzle_snds_MicroUzi", "muzzle_snds_58_blk_F", "CUP_optic_CompM2_Desert", "CUP_optic_AN_PVS_4", "muzzle_snds_65_TI_blk_F", "optic_Hamr_khk_F", "CUP_acc_Flashlight_desert", "optic_Arco_ghex_F", "muzzle_snds_65_TI_ghex_F", "CUP_muzzle_snds_SCAR_H", "muzzle_snds_H_snd_F", "CUP_muzzle_snds_SCAR_L", "CUP_optic_Kobra", "CUP_optic_CompM2_Black", "CUP_acc_LLM", "optic_Arco", "CUP_optic_SUSAT", "muzzle_snds_H_khk_F", "CUP_optic_NSPU_RPG", "CUP_optic_ELCAN_SpecterDR", "muzzle_snds_H_MG_blk_F", "optic_ERCO_khk_F", "muzzle_snds_65_TI_hex_F", "CUP_acc_CZ_M3X", "CUP_optic_LeupoldMk4_MRT_tan", "muzzle_snds_M", "CUP_acc_ANPEQ_15", "muzzle_snds_H_MG_blk_F", "CUP_optic_ACOG"};

		/*
			Percental Item Spawn Chances of LMG:

			arifle_MX_SW_Black_F         = 3,00%
			arifle_MX_SW_F               = 3,00%
			LMG_Mk200_F                  = 3,00%
			LMG_Zafir_F                  = 3,00%
			Exile_Weapon_RPK             = 4,00%
			Exile_Weapon_PK              = 4,00%
			Exile_Weapon_PKP             = 4,00%
			LMG_03_F                     = 4,00%
			CUP_arifle_RPK74             = 4,00%
			CUP_arifle_RPK74_45          = 4,00%
			CUP_arifle_RPK74M            = 4,00%
			CUP_lmg_L110A1               = 4,00%
			CUP_lmg_L110A1_Aim_Laser     = 0,00%
			CUP_lmg_L7A2                 = 3,00%
			CUP_lmg_M240                 = 3,00%
			CUP_lmg_M240_ElcanM143       = 0,00%
			CUP_lmg_M249_ANPAS13c2_Laser = 0,00%
			CUP_lmg_M249_E2              = 4,00%
			CUP_lmg_M249_ElcanM145_Laser = 0,00%
			CUP_lmg_M249_Laser           = 4,00%
			CUP_lmg_m249_para            = 4,00%
			CUP_lmg_m249_pip1            = 4,00%
			CUP_lmg_m249_pip2            = 0,00%
			CUP_lmg_m249_pip3            = 0,00%
			CUP_lmg_m249_pip4            = 0,00%
			CUP_lmg_m249_SQuantoon       = 4,00%
			CUP_lmg_M60E4                = 3,00%
			CUP_lmg_minimi               = 4,00%
			CUP_lmg_minimi_railed        = 4,00%
			CUP_lmg_minimipara           = 4,00%
			CUP_lmg_Mk48_des             = 3,00%
			CUP_lmg_Mk48_des_Aim_Laser   = 0,00%
			CUP_lmg_Mk48_wdl             = 3,00%
			CUP_lmg_Mk48_wdl_Aim_Laser   = 0,00%
			CUP_lmg_Pecheneg             = 3,00%
			CUP_lmg_Pecheneg_PScope      = 0,00%
			CUP_lmg_PKM                  = 3,00%
			CUP_lmg_UK59                 = 3,00%
		*/
		LMG[] = {"CUP_lmg_M249_Laser", "CUP_arifle_RPK74", "arifle_MX_SW_Black_F", "CUP_lmg_M60E4", "CUP_lmg_Pecheneg", "CUP_lmg_M60E4", "CUP_lmg_minimi_railed", "CUP_lmg_M249_E2", "CUP_arifle_RPK74", "CUP_arifle_RPK74_45", "CUP_lmg_m249_para", "LMG_Zafir_F", "LMG_Mk200_F", "arifle_MX_SW_Black_F", "CUP_lmg_Mk48_des", "CUP_lmg_m249_para", "CUP_lmg_m249_pip1", "Exile_Weapon_PK", "CUP_lmg_UK59", "CUP_lmg_Pecheneg", "LMG_03_F", "CUP_lmg_minimi_railed", "CUP_lmg_minimipara", "arifle_MX_SW_Black_F", "Exile_Weapon_RPK", "LMG_Mk200_F", "CUP_lmg_PKM", "arifle_MX_SW_F", "CUP_lmg_UK59", "LMG_Mk200_F", "CUP_lmg_M249_Laser", "CUP_lmg_M249_E2", "CUP_lmg_minimi", "CUP_lmg_M60E4", "CUP_lmg_L110A1", "CUP_lmg_m249_pip1", "CUP_lmg_minimipara", "LMG_Zafir_F", "CUP_arifle_RPK74M", "CUP_lmg_m249_pip1", "CUP_lmg_L110A1", "CUP_arifle_RPK74_45", "LMG_03_F", "CUP_lmg_PKM", "Exile_Weapon_PK", "CUP_lmg_minimi", "CUP_arifle_RPK74_45", "CUP_lmg_L110A1", "CUP_lmg_m249_para", "CUP_lmg_minimi_railed", "CUP_arifle_RPK74M", "Exile_Weapon_PK", "CUP_lmg_m249_SQuantoon", "CUP_lmg_minimipara", "Exile_Weapon_RPK", "CUP_lmg_M240", "CUP_lmg_M240", "arifle_MX_SW_F", "CUP_lmg_L7A2", "arifle_MX_SW_F", "CUP_lmg_L7A2", "CUP_arifle_RPK74_45", "CUP_lmg_m249_SQuantoon", "CUP_lmg_Mk48_wdl", "CUP_lmg_L7A2", "CUP_lmg_minimipara", "CUP_lmg_PKM", "CUP_lmg_Mk48_wdl", "CUP_lmg_m249_pip1", "Exile_Weapon_RPK", "CUP_lmg_Mk48_des", "CUP_lmg_m249_SQuantoon", "CUP_lmg_Mk48_wdl", "Exile_Weapon_PKP", "CUP_lmg_m249_SQuantoon", "CUP_lmg_minimi", "CUP_arifle_RPK74M", "Exile_Weapon_PKP", "Exile_Weapon_RPK", "CUP_arifle_RPK74", "LMG_03_F", "LMG_03_F", "CUP_lmg_m249_para", "Exile_Weapon_PKP", "CUP_lmg_UK59", "CUP_lmg_M240", "CUP_lmg_L110A1", "CUP_arifle_RPK74M", "CUP_lmg_Mk48_des", "CUP_lmg_minimi_railed", "CUP_lmg_M249_Laser", "CUP_arifle_RPK74", "Exile_Weapon_PKP", "CUP_lmg_M249_E2", "Exile_Weapon_PK", "CUP_lmg_M249_E2", "CUP_lmg_minimi", "LMG_Zafir_F", "CUP_lmg_Pecheneg", "CUP_lmg_M249_Laser"};

		/*
			Percental Item Spawn Chances of LMGAmmo:

			100Rnd_65x39_caseless_mag             = 9,09%
			100Rnd_65x39_caseless_mag_Tracer      = 13,64%
			150Rnd_762x54_Box                     = 13,64%
			150Rnd_762x54_Box_Tracer              = 4,55%
			130Rnd_338_Mag                        = 13,64%
			150Rnd_93x64_Mag                      = 13,64%
			Exile_Magazine_45Rnd_545x39_RPK_Green = 4,55%
			Exile_Magazine_75Rnd_545x39_RPK_Green = 4,55%
			Exile_Magazine_100Rnd_762x54_PK_Green = 4,55%
			200Rnd_556x45_Box_F                   = 4,55%
			200Rnd_556x45_Box_Red_F               = 4,55%
			200Rnd_556x45_Box_Tracer_F            = 4,55%
			200Rnd_556x45_Box_Tracer_Red_F        = 4,55%
		*/
		LMGAmmo[] = {"200Rnd_556x45_Box_Tracer_Red_F", "100Rnd_65x39_caseless_mag_Tracer", "150Rnd_93x64_Mag", "Exile_Magazine_75Rnd_545x39_RPK_Green", "150Rnd_762x54_Box", "130Rnd_338_Mag", "100Rnd_65x39_caseless_mag", "150Rnd_762x54_Box_Tracer", "100Rnd_65x39_caseless_mag", "150Rnd_93x64_Mag", "150Rnd_93x64_Mag", "100Rnd_65x39_caseless_mag_Tracer", "150Rnd_762x54_Box", "100Rnd_65x39_caseless_mag_Tracer", "130Rnd_338_Mag", "Exile_Magazine_100Rnd_762x54_PK_Green", "200Rnd_556x45_Box_F", "130Rnd_338_Mag", "150Rnd_762x54_Box", "200Rnd_556x45_Box_Tracer_F", "Exile_Magazine_45Rnd_545x39_RPK_Green", "200Rnd_556x45_Box_Red_F"};

		/*
			Percental Item Spawn Chances of Snipers:

			srifle_DMR_01_F                  = 5,36%
			srifle_EBR_F                     = 5,36%
			srifle_GM6_ghex_F                = 1,79%
			srifle_DMR_07_blk_F              = 5,36%
			srifle_DMR_07_hex_F              = 5,36%
			srifle_DMR_07_ghex_F             = 5,36%
			CUP_arifle_Mk20                  = 5,36%
			CUP_arifle_Mk20_LeupoldMk4MRT    = 0,00%
			CUP_arifle_Mk20_SB11420_snds     = 0,00%
			CUP_srifle_AWM_des               = 1,79%
			CUP_srifle_AWM_des_SBPMII        = 0,00%
			CUP_srifle_AWM_wdl               = 1,79%
			CUP_srifle_AWM_wdl_SBPMII        = 0,00%
			CUP_srifle_CZ550                 = 0,00%
			CUP_srifle_CZ550_rail            = 5,36%
			CUP_srifle_CZ750                 = 5,36%
			CUP_srifle_CZ750_SOS_bipod       = 0,00%
			CUP_srifle_G22_des               = 1,79%
			CUP_srifle_G22_des_SBPMII        = 0,00%
			CUP_srifle_M110                  = 5,36%
			CUP_srifle_M110_ANPAS13c2        = 0,00%
			CUP_srifle_M110_ANPVS10          = 1,79%
			CUP_srifle_M24_des               = 5,36%
			CUP_srifle_M24_des_LeupoldMk4LRT = 0,00%
			CUP_srifle_M24_ghillie           = 0,00%
			CUP_srifle_M24_ghillie_bipod     = 1,79%
			CUP_srifle_M24_wdl               = 5,36%
			CUP_srifle_M24_wdl_LeupoldMk4LRT = 0,00%
			CUP_srifle_M40A3                 = 5,36%
			CUP_srifle_M40A3_bipod           = 1,79%
			CUP_srifle_Mk12SPR               = 7,14%
			CUP_srifle_Mk12SPR_LeupoldM3LR   = 0,00%
			CUP_srifle_SVD                   = 5,36%
			CUP_srifle_SVD_des               = 5,36%
			CUP_srifle_SVD_des_ghillie_pso   = 0,00%
			CUP_srifle_SVD_Des_pso           = 0,00%
			CUP_srifle_SVD_NSPU              = 0,00%
			CUP_srifle_SVD_pso               = 0,00%
			CUP_srifle_SVD_wdl_ghillie       = 0,00%
			CUP_srifle_VSSVintorez           = 5,36%
			CUP_srifle_VSSVintorez_pso       = 0,00%
		*/
		Snipers[] = {"CUP_srifle_G22_des", "CUP_arifle_Mk20", "srifle_DMR_07_blk_F", "srifle_DMR_07_ghex_F", "CUP_srifle_SVD", "srifle_DMR_07_hex_F", "srifle_DMR_07_blk_F", "CUP_srifle_M24_wdl", "srifle_EBR_F", "srifle_DMR_01_F", "CUP_srifle_Mk12SPR", "CUP_srifle_AWM_wdl", "CUP_srifle_Mk12SPR", "CUP_srifle_M24_wdl", "srifle_DMR_07_ghex_F", "CUP_srifle_M24_des", "CUP_srifle_CZ750", "srifle_DMR_07_hex_F", "CUP_srifle_CZ550_rail", "CUP_srifle_VSSVintorez", "CUP_srifle_CZ550_rail", "CUP_srifle_SVD_des", "CUP_srifle_VSSVintorez", "CUP_srifle_AWM_des", "CUP_srifle_SVD", "srifle_DMR_07_ghex_F", "srifle_DMR_07_blk_F", "CUP_srifle_M40A3", "CUP_arifle_Mk20", "CUP_srifle_M110_ANPVS10", "CUP_srifle_CZ750", "CUP_srifle_M24_des", "CUP_srifle_CZ750", "CUP_srifle_SVD", "CUP_srifle_M110", "CUP_arifle_Mk20", "CUP_srifle_CZ550_rail", "CUP_srifle_M40A3", "CUP_srifle_M110", "CUP_srifle_VSSVintorez", "CUP_srifle_M40A3_bipod", "CUP_srifle_M40A3", "CUP_srifle_M110", "srifle_DMR_01_F", "CUP_srifle_M24_des", "srifle_EBR_F", "CUP_srifle_SVD_des", "CUP_srifle_M24_ghillie_bipod", "srifle_DMR_07_hex_F", "srifle_GM6_ghex_F", "srifle_DMR_01_F", "CUP_srifle_Mk12SPR", "srifle_EBR_F", "CUP_srifle_M24_wdl", "CUP_srifle_Mk12SPR", "CUP_srifle_SVD_des"};

		/*
			Percental Item Spawn Chances of SniperAmmo:

			Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag      = 2,78%
			Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag = 2,78%
			Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag      = 2,78%
			Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag           = 2,78%
			Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag      = 2,78%
			Exile_Magazine_7Rnd_408_Bullet_Cam_Mag               = 5,56%
			Exile_Magazine_10Rnd_338_Bullet_Cam_Mag              = 8,33%
			Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag     = 8,33%
			Exile_Magazine_5Rnd_127x108_APDS_KSVK                = 5,56%
			5Rnd_127x108_APDS_Mag                                = 2,78%
			5Rnd_127x108_Mag                                     = 5,56%
			Exile_Magazine_10Rnd_127x99_m107                     = 5,56%
			Exile_Magazine_5Rnd_127x108_KSVK                     = 5,56%
			7Rnd_408_Mag                                         = 5,56%
			10Rnd_762x54_Mag                                     = 11,11%
			20Rnd_762x51_Mag                                     = 11,11%
			20Rnd_650x39_Cased_Mag_F                             = 11,11%
		*/
		SniperAmmo[] = {"Exile_Magazine_5Rnd_127x108_APDS_KSVK", "Exile_Magazine_5Rnd_127x108_KSVK", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag", "Exile_Magazine_10Rnd_127x99_m107", "5Rnd_127x108_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "10Rnd_762x54_Mag", "7Rnd_408_Mag", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "10Rnd_762x54_Mag", "Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag", "5Rnd_127x108_APDS_Mag", "Exile_Magazine_10Rnd_127x99_m107", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "5Rnd_127x108_Mag", "10Rnd_762x54_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "7Rnd_408_Mag", "Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag"};

		/*
			Percental Item Spawn Chances of SniperAttachments:

			muzzle_snds_B_khk_F = 11,11%
			muzzle_snds_B_snd_F = 11,11%
			muzzle_snds_B       = 11,11%
			optic_LRPS          = 11,11%
			optic_LRPS_ghex_F   = 11,11%
			optic_LRPS_tna_F    = 11,11%
			optic_SOS           = 11,11%
			optic_SOS_khk_F     = 11,11%
			optic_DMS           = 11,11%
		*/
		SniperAttachments[] = {"optic_SOS_khk_F", "optic_SOS", "muzzle_snds_B_khk_F", "optic_LRPS_ghex_F", "optic_LRPS_tna_F", "optic_LRPS", "optic_DMS", "muzzle_snds_B_snd_F", "muzzle_snds_B"};

		/*
			Percental Item Spawn Chances of DLCRifles:

			srifle_DMR_03_F          = 8,00%
			srifle_DMR_03_khaki_F    = 8,00%
			srifle_DMR_03_tan_F      = 8,00%
			srifle_DMR_03_woodland_F = 8,00%
			srifle_DMR_06_camo_F     = 8,00%
			srifle_DMR_06_olive_F    = 8,00%
			srifle_DMR_02_camo_F     = 6,00%
			srifle_DMR_02_F          = 6,00%
			srifle_DMR_02_sniper_F   = 6,00%
			srifle_DMR_04_F          = 8,00%
			srifle_DMR_04_Tan_F      = 8,00%
			srifle_DMR_05_blk_F      = 6,00%
			srifle_DMR_05_hex_F      = 6,00%
			srifle_DMR_05_tan_F      = 6,00%
		*/
		DLCRifles[] = {"srifle_DMR_06_olive_F", "srifle_DMR_02_F", "srifle_DMR_05_hex_F", "srifle_DMR_03_tan_F", "srifle_DMR_02_sniper_F", "srifle_DMR_03_woodland_F", "srifle_DMR_03_woodland_F", "srifle_DMR_03_khaki_F", "srifle_DMR_06_olive_F", "srifle_DMR_06_camo_F", "srifle_DMR_06_olive_F", "srifle_DMR_03_F", "srifle_DMR_06_camo_F", "srifle_DMR_03_woodland_F", "srifle_DMR_03_F", "srifle_DMR_05_blk_F", "srifle_DMR_02_camo_F", "srifle_DMR_05_tan_F", "srifle_DMR_03_F", "srifle_DMR_03_woodland_F", "srifle_DMR_03_tan_F", "srifle_DMR_03_khaki_F", "srifle_DMR_04_F", "srifle_DMR_05_tan_F", "srifle_DMR_06_camo_F", "srifle_DMR_03_khaki_F", "srifle_DMR_04_Tan_F", "srifle_DMR_03_tan_F", "srifle_DMR_05_hex_F", "srifle_DMR_02_camo_F", "srifle_DMR_05_tan_F", "srifle_DMR_05_hex_F", "srifle_DMR_04_F", "srifle_DMR_06_camo_F", "srifle_DMR_05_blk_F", "srifle_DMR_03_tan_F", "srifle_DMR_05_blk_F", "srifle_DMR_04_Tan_F", "srifle_DMR_02_F", "srifle_DMR_02_sniper_F", "srifle_DMR_04_Tan_F", "srifle_DMR_02_sniper_F", "srifle_DMR_03_F", "srifle_DMR_04_F", "srifle_DMR_03_khaki_F", "srifle_DMR_02_F", "srifle_DMR_06_olive_F", "srifle_DMR_04_F", "srifle_DMR_02_camo_F", "srifle_DMR_04_Tan_F"};

		/*
			Percental Item Spawn Chances of DLCAmmo:

			150Rnd_93x64_Mag       = 5,88%
			130Rnd_338_Mag         = 11,76%
			10Rnd_127x54_Mag       = 23,53%
			20Rnd_762x51_Mag       = 23,53%
			10Rnd_338_Mag          = 17,65%
			10Rnd_93x64_DMR_05_Mag = 17,65%
		*/
		DLCAmmo[] = {"10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "20Rnd_762x51_Mag", "10Rnd_127x54_Mag", "10Rnd_338_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_127x54_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "130Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "20Rnd_762x51_Mag", "130Rnd_338_Mag", "150Rnd_93x64_Mag"};

		/*
			Percental Item Spawn Chances of DLCOptics:

			optic_AMS     = 14,29%
			optic_AMS_khk = 14,29%
			optic_AMS_snd = 14,29%
			optic_KHS_blk = 14,29%
			optic_KHS_hex = 14,29%
			optic_KHS_old = 14,29%
			optic_KHS_tan = 14,29%
		*/
		DLCOptics[] = {"optic_AMS_khk", "optic_KHS_old", "optic_AMS", "optic_KHS_blk", "optic_AMS_snd", "optic_KHS_tan", "optic_KHS_hex"};

		/*
			Percental Item Spawn Chances of DLCSupressor:

			muzzle_snds_338_black = 16,67%
			muzzle_snds_338_green = 16,67%
			muzzle_snds_338_sand  = 16,67%
			muzzle_snds_93mmg     = 16,67%
			muzzle_snds_93mmg_tan = 16,67%
			muzzle_snds_B         = 16,67%
		*/
		DLCSupressor[] = {"muzzle_snds_B", "muzzle_snds_338_black", "muzzle_snds_338_green", "muzzle_snds_93mmg_tan", "muzzle_snds_93mmg", "muzzle_snds_338_sand"};

		/*
			Percental Item Spawn Chances of EpicWeapons:

			MMG_01_hex_F               = 7,69%
			MMG_01_tan_F               = 7,69%
			MMG_02_black_F             = 7,69%
			MMG_02_camo_F              = 7,69%
			MMG_02_sand_F              = 7,69%
			CUP_srifle_AS50            = 7,69%
			CUP_srifle_AS50_AMPAS13c2  = 0,00%
			CUP_srifle_AS50_SBPMII     = 0,00%
			CUP_srifle_ksvk            = 7,69%
			CUP_srifle_ksvk_PSO3       = 0,00%
			CUP_srifle_M107_ANPAS13c2  = 0,00%
			CUP_srifle_M107_Base       = 7,69%
			CUP_srifle_M107_LeupoldVX3 = 0,00%
			Exile_Weapon_m107          = 7,69%
			Exile_Weapon_ksvk          = 7,69%
			srifle_GM6_F               = 7,69%
			srifle_LRR_F               = 7,69%
			srifle_LRR_tna_F           = 7,69%
		*/
		EpicWeapons[] = {"Exile_Weapon_ksvk", "CUP_srifle_M107_Base", "CUP_srifle_ksvk", "MMG_01_hex_F", "Exile_Weapon_m107", "srifle_LRR_F", "MMG_02_sand_F", "MMG_02_black_F", "CUP_srifle_AS50", "MMG_02_camo_F", "srifle_GM6_F", "MMG_01_tan_F", "srifle_LRR_tna_F"};

		/*
			Percental Item Spawn Chances of Bipods:

			bipod_03_F_oli = 11,11%
			bipod_03_F_blk = 11,11%
			bipod_02_F_tan = 11,11%
			bipod_02_F_hex = 11,11%
			bipod_02_F_blk = 11,11%
			bipod_01_F_snd = 11,11%
			bipod_01_F_mtp = 11,11%
			bipod_01_F_blk = 11,11%
			bipod_01_F_khk = 11,11%
		*/
		Bipods[] = {"bipod_02_F_hex", "bipod_01_F_mtp", "bipod_02_F_tan", "bipod_01_F_snd", "bipod_02_F_blk", "bipod_01_F_blk", "bipod_03_F_oli", "bipod_01_F_khk", "bipod_03_F_blk"};

		/*
			Percental Item Spawn Chances of HEGrenades:

			3Rnd_HE_Grenade_shell = 25,00%
			1Rnd_HE_Grenade_shell = 75,00%
		*/
		HEGrenades[] = {"1Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell"};

		/*
			Percental Item Spawn Chances of UGLFlares:

			3Rnd_UGL_FlareGreen_F  = 6,25%
			3Rnd_UGL_FlareRed_F    = 6,25%
			3Rnd_UGL_FlareWhite_F  = 6,25%
			3Rnd_UGL_FlareYellow_F = 6,25%
			UGL_FlareGreen_F       = 18,75%
			UGL_FlareRed_F         = 18,75%
			UGL_FlareWhite_F       = 18,75%
			UGL_FlareYellow_F      = 18,75%
		*/
		UGLFlares[] = {"UGL_FlareYellow_F", "UGL_FlareGreen_F", "3Rnd_UGL_FlareWhite_F", "3Rnd_UGL_FlareYellow_F", "UGL_FlareGreen_F", "UGL_FlareGreen_F", "3Rnd_UGL_FlareRed_F", "UGL_FlareRed_F", "UGL_FlareWhite_F", "UGL_FlareYellow_F", "UGL_FlareYellow_F", "UGL_FlareWhite_F", "UGL_FlareRed_F", "UGL_FlareWhite_F", "3Rnd_UGL_FlareGreen_F", "UGL_FlareRed_F"};

		/*
			Percental Item Spawn Chances of UGLSmokes:

			3Rnd_Smoke_Grenade_shell       = 3,57%
			3Rnd_SmokeBlue_Grenade_shell   = 3,57%
			3Rnd_SmokeGreen_Grenade_shell  = 3,57%
			3Rnd_SmokeOrange_Grenade_shell = 3,57%
			3Rnd_SmokePurple_Grenade_shell = 3,57%
			3Rnd_SmokeRed_Grenade_shell    = 3,57%
			3Rnd_SmokeYellow_Grenade_shell = 3,57%
			1Rnd_Smoke_Grenade_shell       = 10,71%
			1Rnd_SmokeBlue_Grenade_shell   = 10,71%
			1Rnd_SmokeGreen_Grenade_shell  = 10,71%
			1Rnd_SmokeOrange_Grenade_shell = 10,71%
			1Rnd_SmokePurple_Grenade_shell = 10,71%
			1Rnd_SmokeRed_Grenade_shell    = 10,71%
			1Rnd_SmokeYellow_Grenade_shell = 10,71%
		*/
		UGLSmokes[] = {"1Rnd_SmokeBlue_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "3Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "3Rnd_SmokeGreen_Grenade_shell", "3Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "3Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "3Rnd_SmokeRed_Grenade_shell", "3Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_Smoke_Grenade_shell"};

		/*
			Percental Item Spawn Chances of HandGrenades:

			HandGrenade = 50,00%
			MiniGrenade = 50,00%
		*/
		HandGrenades[] = {"MiniGrenade", "HandGrenade"};

		/*
			Percental Item Spawn Chances of Explosives:

			SatchelCharge_Remote_Mag           = 3,13%
			APERSBoundingMine_Range_Mag        = 9,38%
			APERSMine_Range_Mag                = 9,38%
			APERSTripMine_Wire_Mag             = 9,38%
			DemoCharge_Remote_Mag              = 9,38%
			IEDLandSmall_Remote_Mag            = 9,38%
			IEDUrbanSmall_Remote_Mag           = 9,38%
			ATMine_Range_Mag                   = 3,13%
			SLAMDirectionalMine_Wire_Mag       = 9,38%
			ClaymoreDirectionalMine_Remote_Mag = 9,38%
			IEDUrbanBig_Remote_Mag             = 9,38%
			IEDLandBig_Remote_Mag              = 9,38%
		*/
		Explosives[] = {"ClaymoreDirectionalMine_Remote_Mag", "APERSMine_Range_Mag", "IEDLandBig_Remote_Mag", "DemoCharge_Remote_Mag", "IEDUrbanBig_Remote_Mag", "IEDLandSmall_Remote_Mag", "APERSBoundingMine_Range_Mag", "APERSMine_Range_Mag", "SLAMDirectionalMine_Wire_Mag", "IEDLandSmall_Remote_Mag", "IEDUrbanSmall_Remote_Mag", "APERSBoundingMine_Range_Mag", "SLAMDirectionalMine_Wire_Mag", "IEDUrbanSmall_Remote_Mag", "IEDLandBig_Remote_Mag", "IEDLandBig_Remote_Mag", "IEDUrbanSmall_Remote_Mag", "ClaymoreDirectionalMine_Remote_Mag", "IEDUrbanBig_Remote_Mag", "APERSMine_Range_Mag", "ATMine_Range_Mag", "IEDLandSmall_Remote_Mag", "APERSTripMine_Wire_Mag", "APERSTripMine_Wire_Mag", "IEDUrbanBig_Remote_Mag", "SatchelCharge_Remote_Mag", "ClaymoreDirectionalMine_Remote_Mag", "DemoCharge_Remote_Mag", "APERSBoundingMine_Range_Mag", "APERSTripMine_Wire_Mag", "DemoCharge_Remote_Mag", "SLAMDirectionalMine_Wire_Mag"};

		/*
			Percental Item Spawn Chances of CivilianItems:

			Exile_Item_MobilePhone = 9,09%
			Binocular              = 27,27%
			ItemGPS                = 18,18%
			ItemRadio              = 0,00%
			ItemWatch              = 18,18%
			ItemMap                = 0,00%
			Exile_Item_Heatpack    = 27,27%
		*/
		CivilianItems[] = {"Binocular", "Exile_Item_Heatpack", "Binocular", "Exile_Item_Heatpack", "ItemGPS", "Binocular", "ItemWatch", "Exile_Item_Heatpack", "ItemWatch", "Exile_Item_MobilePhone", "ItemGPS"};

		/*
			Percental Item Spawn Chances of CivilianClothing:

			U_NikosAgedBody          = 0,58%
			U_NikosBody              = 0,58%
			U_OrestesBody            = 0,58%
			U_C_Man_casual_1_F       = 2,92%
			U_C_Man_casual_2_F       = 2,92%
			U_C_Man_casual_3_F       = 2,92%
			U_C_Man_casual_4_F       = 2,92%
			U_C_Man_casual_5_F       = 2,92%
			U_C_Man_casual_6_F       = 2,92%
			U_C_man_sport_1_F        = 2,92%
			U_C_man_sport_2_F        = 2,92%
			U_C_man_sport_3_F        = 2,92%
			U_I_C_Soldier_Bandit_1_F = 2,92%
			U_I_C_Soldier_Bandit_2_F = 2,92%
			U_I_C_Soldier_Bandit_3_F = 2,92%
			U_I_C_Soldier_Bandit_4_F = 2,92%
			U_I_C_Soldier_Bandit_5_F = 2,92%
			U_C_Poloshirt_blue       = 4,09%
			U_C_Poloshirt_burgundy   = 4,09%
			U_C_Poloshirt_salmon     = 4,09%
			U_C_Poloshirt_stripped   = 4,09%
			U_C_Poloshirt_tricolour  = 4,09%
			U_C_HunterBody_grn       = 5,26%
			U_C_Journalist           = 5,26%
			U_C_Poor_1               = 5,26%
			U_C_Poor_2               = 5,26%
			U_C_Poor_shorts_1        = 5,26%
			U_C_Scientist            = 5,26%
			U_Rangemaster            = 5,26%
		*/
		CivilianClothing[] = {"U_C_Scientist", "U_C_man_sport_1_F", "U_C_Man_casual_5_F", "U_C_Man_casual_6_F", "U_NikosBody", "U_I_C_Soldier_Bandit_3_F", "U_C_Man_casual_5_F", "U_C_Poloshirt_stripped", "U_C_Poloshirt_burgundy", "U_C_Poor_1", "U_C_Man_casual_1_F", "U_C_Poor_1", "U_I_C_Soldier_Bandit_1_F", "U_C_Poloshirt_burgundy", "U_C_Man_casual_3_F", "U_C_Scientist", "U_C_HunterBody_grn", "U_I_C_Soldier_Bandit_5_F", "U_C_Journalist", "U_Rangemaster", "U_I_C_Soldier_Bandit_2_F", "U_C_Poloshirt_burgundy", "U_C_man_sport_1_F", "U_C_Journalist", "U_NikosAgedBody", "U_I_C_Soldier_Bandit_3_F", "U_C_Poloshirt_blue", "U_C_Poor_1", "U_Rangemaster", "U_C_Poloshirt_stripped", "U_I_C_Soldier_Bandit_2_F", "U_C_Man_casual_2_F", "U_C_Man_casual_4_F", "U_C_Poloshirt_blue", "U_C_Poor_2", "U_C_Poor_shorts_1", "U_C_Poloshirt_stripped", "U_C_man_sport_3_F", "U_C_Poor_2", "U_C_Poor_1", "U_Rangemaster", "U_C_HunterBody_grn", "U_C_Poloshirt_salmon", "U_C_Scientist", "U_I_C_Soldier_Bandit_1_F", "U_C_Man_casual_3_F", "U_C_Poor_1", "U_C_Poor_2", "U_I_C_Soldier_Bandit_2_F", "U_C_Man_casual_4_F", "U_C_Poor_1", "U_I_C_Soldier_Bandit_4_F", "U_C_Poor_1", "U_C_Poloshirt_blue", "U_C_Man_casual_1_F", "U_I_C_Soldier_Bandit_2_F", "U_I_C_Soldier_Bandit_3_F", "U_C_Poloshirt_salmon", "U_C_Poloshirt_burgundy", "U_C_Poloshirt_tricolour", "U_C_Poor_shorts_1", "U_C_man_sport_1_F", "U_C_Scientist", "U_C_Poloshirt_blue", "U_I_C_Soldier_Bandit_5_F", "U_I_C_Soldier_Bandit_1_F", "U_Rangemaster", "U_C_Man_casual_1_F", "U_C_HunterBody_grn", "U_OrestesBody", "U_C_Poloshirt_tricolour", "U_C_Scientist", "U_C_Poloshirt_tricolour", "U_C_Poor_1", "U_C_man_sport_3_F", "U_C_man_sport_2_F", "U_C_Poor_2", "U_C_Man_casual_6_F", "U_C_man_sport_1_F", "U_C_HunterBody_grn", "U_C_Poloshirt_burgundy", "U_C_Man_casual_4_F", "U_C_HunterBody_grn", "U_C_Man_casual_4_F", "U_C_Man_casual_3_F", "U_C_Poloshirt_stripped", "U_C_Man_casual_1_F", "U_I_C_Soldier_Bandit_4_F", "U_C_Poloshirt_blue", "U_C_Poloshirt_stripped", "U_C_man_sport_2_F", "U_C_Poloshirt_salmon", "U_C_Journalist", "U_C_Journalist", "U_C_Poor_shorts_1", "U_C_Man_casual_5_F", "U_I_C_Soldier_Bandit_5_F", "U_C_Poloshirt_tricolour", "U_I_C_Soldier_Bandit_3_F", "U_C_Poor_2", "U_C_Poloshirt_blue", "U_C_Man_casual_2_F", "U_C_Poloshirt_stripped", "U_C_Poor_2", "U_C_HunterBody_grn", "U_C_Scientist", "U_C_Poor_shorts_1", "U_C_Scientist", "U_C_Journalist", "U_C_Journalist", "U_C_Poloshirt_stripped", "U_C_Man_casual_6_F", "U_I_C_Soldier_Bandit_1_F", "U_C_Poor_2", "U_I_C_Soldier_Bandit_4_F", "U_C_Man_casual_2_F", "U_C_Poloshirt_tricolour", "U_C_Poor_shorts_1", "U_C_Journalist", "U_C_Poloshirt_burgundy", "U_C_Poor_shorts_1", "U_Rangemaster", "U_Rangemaster", "U_I_C_Soldier_Bandit_4_F", "U_I_C_Soldier_Bandit_2_F", "U_C_Poor_shorts_1", "U_C_Poor_shorts_1", "U_C_Poloshirt_salmon", "U_I_C_Soldier_Bandit_4_F", "U_C_Man_casual_6_F", "U_I_C_Soldier_Bandit_5_F", "U_C_Man_casual_1_F", "U_C_Poloshirt_salmon", "U_C_Journalist", "U_C_Poor_shorts_1", "U_C_Poloshirt_tricolour", "U_C_man_sport_3_F", "U_C_Man_casual_4_F", "U_C_Poloshirt_burgundy", "U_C_Poloshirt_tricolour", "U_Rangemaster", "U_C_Scientist", "U_C_Poloshirt_salmon", "U_C_Man_casual_3_F", "U_I_C_Soldier_Bandit_3_F", "U_C_Poor_1", "U_Rangemaster", "U_I_C_Soldier_Bandit_1_F", "U_I_C_Soldier_Bandit_5_F", "U_C_HunterBody_grn", "U_C_Poloshirt_blue", "U_Rangemaster", "U_C_Man_casual_5_F", "U_C_man_sport_3_F", "U_C_HunterBody_grn", "U_C_Scientist", "U_C_Poor_2", "U_C_man_sport_2_F", "U_C_Poloshirt_salmon", "U_C_man_sport_2_F", "U_C_Man_casual_2_F", "U_C_man_sport_1_F", "U_C_Journalist", "U_C_man_sport_3_F", "U_C_Man_casual_3_F", "U_C_man_sport_2_F", "U_C_Man_casual_6_F", "U_C_HunterBody_grn", "U_C_Man_casual_5_F", "U_C_Man_casual_2_F", "U_C_Poor_2"};

		/*
			Percental Item Spawn Chances of CivilianBackpacks:

			B_Kitbag_cbr        = 6,67%
			B_Kitbag_mcamo      = 6,67%
			B_Kitbag_sgg        = 6,67%
			B_AssaultPack_blk   = 6,67%
			B_AssaultPack_cbr   = 6,67%
			B_AssaultPack_dgtl  = 6,67%
			B_AssaultPack_khk   = 6,67%
			B_AssaultPack_mcamo = 6,67%
			B_AssaultPack_rgr   = 6,67%
			B_AssaultPack_sgg   = 6,67%
			B_AssaultPack_tna_F = 6,67%
			B_HuntingBackpack   = 6,67%
			B_OutdoorPack_blu   = 6,67%
			B_OutdoorPack_tan   = 6,67%
			B_OutdoorPack_blk   = 6,67%
		*/
		CivilianBackpacks[] = {"B_Kitbag_cbr", "B_AssaultPack_dgtl", "B_OutdoorPack_blk", "B_OutdoorPack_tan", "B_Kitbag_mcamo", "B_AssaultPack_mcamo", "B_OutdoorPack_blu", "B_AssaultPack_sgg", "B_AssaultPack_tna_F", "B_AssaultPack_blk", "B_AssaultPack_khk", "B_AssaultPack_rgr", "B_Kitbag_sgg", "B_AssaultPack_cbr", "B_HuntingBackpack"};

		/*
			Percental Item Spawn Chances of CivilianVests:

			V_Press_F            = 25,00%
			V_TacVest_blk_POLICE = 25,00%
			V_Rangemaster_belt   = 50,00%
		*/
		CivilianVests[] = {"V_Press_F", "V_TacVest_blk_POLICE", "V_Rangemaster_belt", "V_Rangemaster_belt"};

		/*
			Percental Item Spawn Chances of CivilianHeadgear:

			H_Bandanna_surfer  = 5,56%
			H_Beret_blk_POLICE = 5,56%
			H_Cap_blk          = 5,56%
			H_Cap_blk_Raven    = 5,56%
			H_Cap_blu          = 5,56%
			H_Cap_grn          = 5,56%
			H_Cap_headphones   = 5,56%
			H_Cap_oli          = 5,56%
			H_Cap_press        = 5,56%
			H_Cap_red          = 5,56%
			H_Cap_tan          = 5,56%
			H_Hat_blue         = 5,56%
			H_Hat_brown        = 5,56%
			H_Hat_checker      = 5,56%
			H_Hat_grey         = 5,56%
			H_Hat_tan          = 5,56%
			H_StrawHat         = 5,56%
			H_StrawHat_dark    = 5,56%
		*/
		CivilianHeadgear[] = {"H_Cap_press", "H_Cap_headphones", "H_Cap_blk_Raven", "H_Cap_grn", "H_Hat_blue", "H_Hat_brown", "H_Hat_checker", "H_Cap_blk", "H_Cap_red", "H_Hat_tan", "H_Bandanna_surfer", "H_Cap_tan", "H_Hat_grey", "H_Cap_blu", "H_StrawHat", "H_Beret_blk_POLICE", "H_Cap_oli", "H_StrawHat_dark"};

		/*
			Percental Item Spawn Chances of GuerillaItems:

			Rangefinder        = 3,85%
			ItemCompass        = 0,00%
			NVGoggles          = 19,23%
			NVGoggles_tna_F    = 19,23%
			O_NVGoggles_ghex_F = 19,23%
			O_NVGoggles_hex_F  = 19,23%
			O_NVGoggles_urb_F  = 19,23%
		*/
		GuerillaItems[] = {"O_NVGoggles_ghex_F", "O_NVGoggles_hex_F", "NVGoggles_tna_F", "NVGoggles", "O_NVGoggles_hex_F", "NVGoggles", "O_NVGoggles_hex_F", "O_NVGoggles_ghex_F", "O_NVGoggles_urb_F", "NVGoggles", "O_NVGoggles_urb_F", "NVGoggles_tna_F", "O_NVGoggles_hex_F", "O_NVGoggles_urb_F", "O_NVGoggles_urb_F", "NVGoggles_tna_F", "O_NVGoggles_ghex_F", "O_NVGoggles_hex_F", "NVGoggles_tna_F", "NVGoggles_tna_F", "NVGoggles", "Rangefinder", "O_NVGoggles_urb_F", "O_NVGoggles_ghex_F", "NVGoggles", "O_NVGoggles_ghex_F"};

		/*
			Percental Item Spawn Chances of GuerillaClothing:

			U_I_G_resistanceLeader_F = 1,75%
			U_I_C_Soldier_Camo_F     = 5,26%
			U_I_C_Soldier_Para_1_F   = 5,26%
			U_I_C_Soldier_Para_2_F   = 5,26%
			U_I_C_Soldier_Para_3_F   = 5,26%
			U_I_C_Soldier_Para_4_F   = 5,26%
			U_I_C_Soldier_Para_5_F   = 5,26%
			U_IG_leader              = 7,02%
			U_IG_Guerilla3_1         = 8,77%
			U_IG_Guerilla3_2         = 8,77%
			U_IG_Guerilla1_1         = 10,53%
			U_IG_Guerilla2_1         = 10,53%
			U_IG_Guerilla2_2         = 10,53%
			U_IG_Guerilla2_3         = 10,53%
		*/
		GuerillaClothing[] = {"U_IG_Guerilla3_2", "U_IG_Guerilla2_2", "U_IG_Guerilla2_1", "U_I_C_Soldier_Para_3_F", "U_IG_leader", "U_IG_Guerilla2_2", "U_IG_Guerilla2_3", "U_I_C_Soldier_Para_1_F", "U_IG_Guerilla2_3", "U_IG_Guerilla2_2", "U_IG_Guerilla1_1", "U_I_C_Soldier_Para_2_F", "U_I_C_Soldier_Para_5_F", "U_I_C_Soldier_Para_2_F", "U_IG_Guerilla1_1", "U_IG_Guerilla3_1", "U_I_C_Soldier_Para_3_F", "U_IG_Guerilla3_1", "U_IG_Guerilla1_1", "U_IG_Guerilla2_2", "U_I_C_Soldier_Camo_F", "U_IG_Guerilla3_2", "U_I_C_Soldier_Para_4_F", "U_IG_leader", "U_I_C_Soldier_Para_1_F", "U_IG_Guerilla2_3", "U_IG_Guerilla2_3", "U_IG_Guerilla1_1", "U_IG_Guerilla3_2", "U_IG_Guerilla2_3", "U_IG_Guerilla3_1", "U_I_G_resistanceLeader_F", "U_IG_leader", "U_IG_leader", "U_IG_Guerilla2_1", "U_I_C_Soldier_Camo_F", "U_I_C_Soldier_Para_1_F", "U_I_C_Soldier_Para_5_F", "U_IG_Guerilla2_2", "U_IG_Guerilla3_2", "U_I_C_Soldier_Camo_F", "U_IG_Guerilla3_1", "U_I_C_Soldier_Para_4_F", "U_IG_Guerilla2_1", "U_IG_Guerilla2_1", "U_I_C_Soldier_Para_4_F", "U_IG_Guerilla1_1", "U_I_C_Soldier_Para_3_F", "U_IG_Guerilla3_2", "U_IG_Guerilla1_1", "U_IG_Guerilla2_1", "U_I_C_Soldier_Para_5_F", "U_IG_Guerilla2_2", "U_IG_Guerilla2_1", "U_IG_Guerilla2_3", "U_I_C_Soldier_Para_2_F", "U_IG_Guerilla3_1"};

		/*
			Percental Item Spawn Chances of GuerillaBackpacks:

			B_Bergen_blk               = 1,82%
			B_Bergen_mcamo             = 1,82%
			B_Bergen_rgr               = 1,82%
			B_Bergen_sgg               = 1,82%
			B_FieldPack_ghex_F         = 1,82%
			B_ViperHarness_base_F      = 3,64%
			B_ViperHarness_blk_F       = 3,64%
			B_ViperHarness_ghex_F      = 3,64%
			B_ViperHarness_hex_F       = 3,64%
			B_ViperHarness_khk_F       = 3,64%
			B_ViperHarness_oli_F       = 3,64%
			B_ViperLightHarness_base_F = 5,45%
			B_ViperLightHarness_blk_F  = 5,45%
			B_ViperLightHarness_ghex_F = 5,45%
			B_ViperLightHarness_hex_F  = 5,45%
			B_ViperLightHarness_khk_F  = 5,45%
			B_ViperLightHarness_oli_F  = 5,45%
			B_FieldPack_blk            = 9,09%
			B_FieldPack_cbr            = 9,09%
			B_FieldPack_ocamo          = 9,09%
			B_FieldPack_oucamo         = 9,09%
		*/
		GuerillaBackpacks[] = {"B_ViperHarness_ghex_F", "B_FieldPack_blk", "B_FieldPack_ocamo", "B_FieldPack_blk", "B_ViperLightHarness_ghex_F", "B_Bergen_sgg", "B_FieldPack_blk", "B_FieldPack_cbr", "B_FieldPack_ocamo", "B_ViperHarness_khk_F", "B_ViperLightHarness_base_F", "B_ViperLightHarness_base_F", "B_FieldPack_oucamo", "B_FieldPack_ocamo", "B_FieldPack_blk", "B_ViperLightHarness_oli_F", "B_FieldPack_blk", "B_ViperHarness_oli_F", "B_ViperHarness_ghex_F", "B_ViperLightHarness_khk_F", "B_ViperLightHarness_blk_F", "B_FieldPack_ghex_F", "B_ViperLightHarness_oli_F", "B_ViperHarness_blk_F", "B_FieldPack_ocamo", "B_ViperHarness_hex_F", "B_FieldPack_oucamo", "B_FieldPack_oucamo", "B_ViperLightHarness_oli_F", "B_ViperLightHarness_khk_F", "B_FieldPack_cbr", "B_ViperLightHarness_hex_F", "B_ViperLightHarness_hex_F", "B_ViperLightHarness_hex_F", "B_ViperLightHarness_ghex_F", "B_Bergen_mcamo", "B_ViperLightHarness_khk_F", "B_ViperLightHarness_blk_F", "B_Bergen_blk", "B_ViperHarness_khk_F", "B_ViperLightHarness_blk_F", "B_FieldPack_oucamo", "B_ViperHarness_oli_F", "B_Bergen_rgr", "B_ViperHarness_base_F", "B_ViperLightHarness_base_F", "B_ViperHarness_blk_F", "B_FieldPack_oucamo", "B_FieldPack_ocamo", "B_ViperHarness_hex_F", "B_ViperLightHarness_ghex_F", "B_FieldPack_cbr", "B_ViperHarness_base_F", "B_FieldPack_cbr", "B_FieldPack_cbr"};

		/*
			Percental Item Spawn Chances of GuerillaVests:

			V_I_G_resistanceLeader_F = 3,23%
			V_BandollierB_blk        = 6,45%
			V_BandollierB_cbr        = 6,45%
			V_BandollierB_khk        = 6,45%
			V_BandollierB_oli        = 6,45%
			V_BandollierB_rgr        = 6,45%
			V_Chestrig_blk           = 6,45%
			V_Chestrig_khk           = 6,45%
			V_Chestrig_oli           = 6,45%
			V_Chestrig_rgr           = 6,45%
			V_HarnessO_brn           = 6,45%
			V_HarnessO_gry           = 6,45%
			V_HarnessOGL_brn         = 6,45%
			V_HarnessOGL_gry         = 6,45%
			V_HarnessOSpec_brn       = 6,45%
			V_HarnessOSpec_gry       = 6,45%
		*/
		GuerillaVests[] = {"V_HarnessOSpec_gry", "V_HarnessO_gry", "V_BandollierB_khk", "V_Chestrig_blk", "V_HarnessO_gry", "V_I_G_resistanceLeader_F", "V_Chestrig_rgr", "V_Chestrig_rgr", "V_Chestrig_khk", "V_HarnessOSpec_brn", "V_HarnessOGL_gry", "V_BandollierB_cbr", "V_BandollierB_rgr", "V_BandollierB_blk", "V_Chestrig_blk", "V_HarnessOSpec_gry", "V_BandollierB_cbr", "V_BandollierB_blk", "V_Chestrig_khk", "V_Chestrig_oli", "V_HarnessOGL_brn", "V_Chestrig_oli", "V_BandollierB_khk", "V_HarnessO_brn", "V_BandollierB_rgr", "V_HarnessOGL_brn", "V_BandollierB_oli", "V_BandollierB_oli", "V_HarnessOSpec_brn", "V_HarnessOGL_gry", "V_HarnessO_brn"};

		/*
			Percental Item Spawn Chances of GuerillaHeadgear:

			H_Beret_02                = 0,82%
			H_Beret_blk               = 0,82%
			H_Beret_brn_SF            = 0,82%
			H_Beret_Colonel           = 0,82%
			H_Beret_grn               = 0,82%
			H_Beret_grn_SF            = 0,82%
			H_Beret_ocamo             = 0,82%
			H_Beret_red               = 0,82%
			H_Booniehat_tna_F         = 1,64%
			H_Cap_blk_Syndikat_F      = 1,64%
			H_Cap_grn_Syndikat_F      = 1,64%
			H_Cap_oli_Syndikat_F      = 1,64%
			H_Cap_tan_Syndikat_F      = 1,64%
			H_FakeHeadgear_Syndikat_F = 1,64%
			H_MilCap_gen_F            = 1,64%
			H_MilCap_ghex_F           = 1,64%
			H_MilCap_tna_F            = 1,64%
			H_Shemag_khk              = 1,64%
			H_Shemag_olive            = 1,64%
			H_Shemag_olive_hs         = 1,64%
			H_Shemag_tan              = 1,64%
			H_ShemagOpen_khk          = 1,64%
			H_ShemagOpen_tan          = 1,64%
			H_TurbanO_blk             = 1,64%
			H_Watchcap_camo           = 1,64%
			H_Watchcap_sgg            = 1,64%
			H_Bandanna_camo           = 2,46%
			H_Bandanna_cbr            = 2,46%
			H_Bandanna_gry            = 2,46%
			H_Bandanna_khk            = 2,46%
			H_Bandanna_khk_hs         = 2,46%
			H_Bandanna_mcamo          = 2,46%
			H_Bandanna_sgg            = 2,46%
			H_BandMask_blk            = 2,46%
			H_Cap_brn_SPECOPS         = 2,46%
			H_Cap_khaki_specops_UK    = 2,46%
			H_Cap_tan_specops_US      = 2,46%
			H_Hat_camo                = 2,46%
			H_Watchcap_blk            = 2,46%
			H_Watchcap_khk            = 2,46%
			Exile_Headgear_GasMask    = 3,28%
			H_Booniehat_dgtl          = 3,28%
			H_Booniehat_dirty         = 3,28%
			H_Booniehat_grn           = 3,28%
			H_Booniehat_indp          = 3,28%
			H_Booniehat_khk           = 3,28%
			H_Booniehat_khk_hs        = 3,28%
			H_Booniehat_mcamo         = 3,28%
			H_Booniehat_tan           = 3,28%
		*/
		GuerillaHeadgear[] = {"H_Cap_tan_specops_US", "H_Cap_grn_Syndikat_F", "H_Booniehat_dirty", "H_Cap_oli_Syndikat_F", "H_Watchcap_khk", "H_Booniehat_dgtl", "H_Booniehat_mcamo", "H_Hat_camo", "Exile_Headgear_GasMask", "H_Cap_brn_SPECOPS", "H_Beret_blk", "H_Beret_grn_SF", "H_Booniehat_dgtl", "H_Watchcap_blk", "H_ShemagOpen_khk", "H_Bandanna_gry", "H_Booniehat_dirty", "H_Bandanna_khk_hs", "H_Booniehat_grn", "H_Shemag_olive_hs", "H_Beret_Colonel", "H_MilCap_gen_F", "H_Booniehat_tna_F", "H_Booniehat_khk_hs", "H_TurbanO_blk", "H_Beret_ocamo", "H_Beret_red", "H_Bandanna_camo", "H_Cap_brn_SPECOPS", "H_Cap_tan_Syndikat_F", "H_Bandanna_khk", "H_Booniehat_dgtl", "H_Cap_tan_Syndikat_F", "H_MilCap_gen_F", "H_Booniehat_khk", "H_Bandanna_khk_hs", "H_FakeHeadgear_Syndikat_F", "H_Shemag_tan", "H_Booniehat_khk", "H_Hat_camo", "H_MilCap_tna_F", "H_Booniehat_indp", "H_Hat_camo", "H_Cap_blk_Syndikat_F", "H_Booniehat_tan", "H_Watchcap_camo", "H_BandMask_blk", "H_Bandanna_khk", "H_Booniehat_tan", "H_Booniehat_tna_F", "H_Watchcap_sgg", "H_Watchcap_blk", "Exile_Headgear_GasMask", "H_Bandanna_sgg", "H_Beret_02", "H_Booniehat_grn", "H_Beret_brn_SF", "H_Booniehat_mcamo", "H_Booniehat_khk_hs", "H_Cap_oli_Syndikat_F", "H_Booniehat_dirty", "H_Booniehat_dirty", "H_Watchcap_sgg", "H_FakeHeadgear_Syndikat_F", "H_ShemagOpen_tan", "H_Booniehat_grn", "H_MilCap_tna_F", "H_Booniehat_mcamo", "H_MilCap_ghex_F", "H_Booniehat_tan", "H_Booniehat_dgtl", "H_Shemag_khk", "H_Shemag_olive", "H_Bandanna_khk_hs", "H_Booniehat_khk", "H_Cap_grn_Syndikat_F", "H_Bandanna_camo", "H_Booniehat_khk_hs", "H_Cap_brn_SPECOPS", "H_Bandanna_camo", "H_Watchcap_camo", "H_Booniehat_khk_hs", "H_Cap_khaki_specops_UK", "H_Bandanna_gry", "H_Cap_khaki_specops_UK", "H_Bandanna_cbr", "Exile_Headgear_GasMask", "H_Cap_tan_specops_US", "H_Bandanna_gry", "H_Bandanna_mcamo", "H_Booniehat_indp", "H_Shemag_olive_hs", "H_MilCap_ghex_F", "H_Beret_grn", "H_Bandanna_mcamo", "H_TurbanO_blk", "H_Watchcap_khk", "H_Bandanna_khk", "H_BandMask_blk", "H_Bandanna_cbr", "H_Bandanna_cbr", "H_Booniehat_indp", "H_Watchcap_khk", "H_Cap_blk_Syndikat_F", "H_Watchcap_blk", "H_Cap_tan_specops_US", "Exile_Headgear_GasMask", "H_Bandanna_mcamo", "H_Cap_khaki_specops_UK", "H_BandMask_blk", "H_ShemagOpen_khk", "H_Booniehat_khk", "H_Booniehat_tan", "H_Bandanna_sgg", "H_Booniehat_mcamo", "H_Shemag_tan", "H_ShemagOpen_tan", "H_Bandanna_sgg", "H_Booniehat_grn", "H_Shemag_olive", "H_Shemag_khk", "H_Booniehat_indp"};

		/*
			Percental Item Spawn Chances of MilitaryClothing:

			U_B_Wetsuit                   = 1,32%
			U_I_OfficerUniform            = 1,32%
			U_I_Wetsuit                   = 1,32%
			U_O_CombatUniform_ocamo       = 1,32%
			U_O_CombatUniform_oucamo      = 1,32%
			U_O_OfficerUniform_ocamo      = 1,32%
			U_O_SpecopsUniform_blk        = 1,32%
			U_O_SpecopsUniform_ocamo      = 1,32%
			U_O_V_Soldier_Viper_F         = 1,32%
			U_O_V_Soldier_Viper_hex_F     = 1,32%
			U_O_Wetsuit                   = 1,32%
			U_B_SpecopsUniform_sgg        = 1,97%
			U_B_HeliPilotCoveralls        = 2,63%
			U_B_PilotCoveralls            = 2,63%
			U_I_CombatUniform             = 2,63%
			U_I_CombatUniform_shortsleeve = 2,63%
			U_I_CombatUniform_tshirt      = 2,63%
			U_I_HeliPilotCoveralls        = 2,63%
			U_I_pilotCoveralls            = 2,63%
			U_O_PilotCoveralls            = 2,63%
			U_B_CombatUniform_mcam        = 3,29%
			U_B_CombatUniform_mcam_tshirt = 3,29%
			U_B_CombatUniform_mcam_vest   = 3,29%
			U_B_CombatUniform_mcam_worn   = 3,29%
			U_B_CTRG_1                    = 3,29%
			U_B_CTRG_2                    = 3,29%
			U_B_CTRG_3                    = 3,29%
			U_B_CTRG_Soldier_2_F          = 3,29%
			U_B_CTRG_Soldier_3_F          = 3,29%
			U_B_CTRG_Soldier_F            = 3,29%
			U_B_CTRG_Soldier_urb_1_F      = 3,29%
			U_B_CTRG_Soldier_urb_2_F      = 3,29%
			U_B_CTRG_Soldier_urb_3_F      = 3,29%
			U_B_GEN_Commander_F           = 3,29%
			U_B_GEN_Soldier_F             = 3,29%
			U_B_T_Soldier_AR_F            = 3,29%
			U_B_T_Soldier_SL_F            = 3,29%
			U_O_T_Officer_F               = 3,29%
			U_O_T_Soldier_F               = 3,29%
		*/
		MilitaryClothing[] = {"U_B_CTRG_2", "U_B_SpecopsUniform_sgg", "U_B_CombatUniform_mcam_tshirt", "U_O_V_Soldier_Viper_hex_F", "U_B_CTRG_Soldier_F", "U_B_PilotCoveralls", "U_B_GEN_Soldier_F", "U_O_V_Soldier_Viper_F", "U_I_CombatUniform", "U_O_V_Soldier_Viper_hex_F", "U_O_T_Officer_F", "U_B_CTRG_Soldier_2_F", "U_B_CTRG_Soldier_2_F", "U_B_Wetsuit", "U_I_pilotCoveralls", "U_B_CTRG_Soldier_F", "U_O_SpecopsUniform_blk", "U_B_CTRG_Soldier_urb_1_F", "U_I_HeliPilotCoveralls", "U_O_T_Officer_F", "U_O_PilotCoveralls", "U_O_PilotCoveralls", "U_B_CTRG_1", "U_B_CTRG_Soldier_3_F", "U_B_CTRG_Soldier_urb_2_F", "U_B_CTRG_1", "U_B_CTRG_Soldier_urb_1_F", "U_B_CombatUniform_mcam_tshirt", "U_I_Wetsuit", "U_O_CombatUniform_ocamo", "U_O_T_Soldier_F", "U_B_CombatUniform_mcam_worn", "U_I_pilotCoveralls", "U_B_GEN_Commander_F", "U_B_CombatUniform_mcam", "U_B_CombatUniform_mcam", "U_B_CombatUniform_mcam_vest", "U_O_T_Soldier_F", "U_B_GEN_Soldier_F", "U_B_T_Soldier_SL_F", "U_B_GEN_Commander_F", "U_O_PilotCoveralls", "U_B_CTRG_Soldier_urb_3_F", "U_B_GEN_Commander_F", "U_B_CTRG_Soldier_urb_1_F", "U_B_SpecopsUniform_sgg", "U_I_CombatUniform_shortsleeve", "U_I_CombatUniform_tshirt", "U_B_CTRG_Soldier_urb_2_F", "U_I_HeliPilotCoveralls", "U_B_CTRG_3", "U_B_CTRG_1", "U_B_CombatUniform_mcam", "U_O_Wetsuit", "U_I_CombatUniform_shortsleeve", "U_B_CombatUniform_mcam_vest", "U_O_CombatUniform_ocamo", "U_B_CombatUniform_mcam_tshirt", "U_B_SpecopsUniform_sgg", "U_I_pilotCoveralls", "U_B_HeliPilotCoveralls", "U_O_Wetsuit", "U_O_OfficerUniform_ocamo", "U_B_CombatUniform_mcam_vest", "U_I_Wetsuit", "U_B_T_Soldier_AR_F", "U_I_CombatUniform_shortsleeve", "U_B_CTRG_Soldier_urb_3_F", "U_B_CombatUniform_mcam_tshirt", "U_I_CombatUniform", "U_B_CombatUniform_mcam_tshirt", "U_B_CTRG_Soldier_3_F", "U_B_CombatUniform_mcam_worn", "U_O_SpecopsUniform_blk", "U_O_SpecopsUniform_ocamo", "U_B_CTRG_Soldier_urb_1_F", "U_I_CombatUniform", "U_O_T_Officer_F", "U_B_CTRG_2", "U_B_CTRG_Soldier_F", "U_B_CTRG_Soldier_urb_1_F", "U_B_CombatUniform_mcam_vest", "U_B_GEN_Commander_F", "U_B_PilotCoveralls", "U_B_CTRG_2", "U_O_CombatUniform_oucamo", "U_B_T_Soldier_AR_F", "U_B_PilotCoveralls", "U_B_CTRG_Soldier_2_F", "U_O_PilotCoveralls", "U_B_HeliPilotCoveralls", "U_I_OfficerUniform", "U_B_GEN_Soldier_F", "U_B_CTRG_Soldier_3_F", "U_B_CTRG_Soldier_urb_2_F", "U_B_CTRG_Soldier_2_F", "U_O_T_Soldier_F", "U_O_SpecopsUniform_ocamo", "U_O_V_Soldier_Viper_F", "U_O_OfficerUniform_ocamo", "U_O_CombatUniform_oucamo", "U_B_GEN_Soldier_F", "U_B_CombatUniform_mcam_worn", "U_B_T_Soldier_AR_F", "U_O_T_Officer_F", "U_O_T_Soldier_F", "U_B_GEN_Commander_F", "U_B_CTRG_3", "U_B_CTRG_1", "U_O_T_Officer_F", "U_B_CTRG_Soldier_3_F", "U_I_CombatUniform_tshirt", "U_B_HeliPilotCoveralls", "U_B_T_Soldier_SL_F", "U_B_CTRG_Soldier_urb_2_F", "U_B_CTRG_2", "U_B_CTRG_Soldier_2_F", "U_B_CombatUniform_mcam_worn", "U_B_CTRG_Soldier_F", "U_B_HeliPilotCoveralls", "U_B_CTRG_Soldier_3_F", "U_B_T_Soldier_AR_F", "U_B_CombatUniform_mcam", "U_B_CTRG_2", "U_B_T_Soldier_AR_F", "U_B_PilotCoveralls", "U_B_CTRG_3", "U_B_CTRG_Soldier_F", "U_I_OfficerUniform", "U_B_CTRG_Soldier_urb_3_F", "U_B_CTRG_Soldier_urb_2_F", "U_I_HeliPilotCoveralls", "U_B_CTRG_Soldier_urb_3_F", "U_B_T_Soldier_SL_F", "U_B_CombatUniform_mcam_vest", "U_B_GEN_Soldier_F", "U_B_CTRG_1", "U_B_CombatUniform_mcam_worn", "U_B_Wetsuit", "U_B_CTRG_Soldier_urb_3_F", "U_I_HeliPilotCoveralls", "U_B_CTRG_3", "U_B_T_Soldier_SL_F", "U_B_CTRG_3", "U_I_CombatUniform_shortsleeve", "U_O_T_Soldier_F", "U_I_CombatUniform_tshirt", "U_I_CombatUniform", "U_B_T_Soldier_SL_F", "U_I_CombatUniform_tshirt", "U_B_CombatUniform_mcam", "U_I_pilotCoveralls"};

		/*
			Percental Item Spawn Chances of MilitaryBackpacks:

			B_Bergen_Base_F   = 5,26%
			B_Bergen_dgtl_F   = 5,26%
			B_Bergen_hex_F    = 5,26%
			B_Bergen_mcamo_F  = 5,26%
			B_Bergen_tna_F    = 5,26%
			B_Carryall_mcamo  = 10,53%
			B_Carryall_ocamo  = 10,53%
			B_Carryall_oucamo = 10,53%
			B_Carryall_khk    = 10,53%
			B_Carryall_oli    = 10,53%
			B_Carryall_cbr    = 10,53%
			B_Carryall_ghex_F = 10,53%
		*/
		MilitaryBackpacks[] = {"B_Bergen_tna_F", "B_Carryall_khk", "B_Carryall_cbr", "B_Bergen_dgtl_F", "B_Carryall_ghex_F", "B_Carryall_mcamo", "B_Carryall_ocamo", "B_Bergen_Base_F", "B_Bergen_hex_F", "B_Carryall_ocamo", "B_Carryall_ghex_F", "B_Carryall_cbr", "B_Carryall_oli", "B_Bergen_mcamo_F", "B_Carryall_oucamo", "B_Carryall_oli", "B_Carryall_oucamo", "B_Carryall_mcamo", "B_Carryall_khk"};

		/*
			Percental Item Spawn Chances of MilitaryVests:

			V_PlateCarrierH_CTRG    = 5,00%
			V_PlateCarrierL_CTRG    = 5,00%
			V_PlateCarrier1_blk     = 10,00%
			V_PlateCarrier1_rgr     = 10,00%
			V_PlateCarrier2_rgr     = 10,00%
			V_PlateCarrier3_rgr     = 10,00%
			V_PlateCarrierGL_rgr    = 10,00%
			V_PlateCarrierIA1_dgtl  = 10,00%
			V_PlateCarrierIA2_dgtl  = 10,00%
			V_PlateCarrierIAGL_dgtl = 10,00%
			V_PlateCarrierSpec_rgr  = 10,00%
		*/
		MilitaryVests[] = {"V_PlateCarrierL_CTRG", "V_PlateCarrierIA2_dgtl", "V_PlateCarrierGL_rgr", "V_PlateCarrier2_rgr", "V_PlateCarrierIA1_dgtl", "V_PlateCarrier1_rgr", "V_PlateCarrierIA1_dgtl", "V_PlateCarrierIA2_dgtl", "V_PlateCarrierH_CTRG", "V_PlateCarrierSpec_rgr", "V_PlateCarrier1_rgr", "V_PlateCarrier1_blk", "V_PlateCarrier3_rgr", "V_PlateCarrier2_rgr", "V_PlateCarrierSpec_rgr", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrier3_rgr", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrier1_blk", "V_PlateCarrierGL_rgr"};

		/*
			Percental Item Spawn Chances of MilitaryHeadgear:

			H_CrewHelmetHeli_B        = 0,81%
			H_CrewHelmetHeli_I        = 0,81%
			H_CrewHelmetHeli_O        = 0,81%
			H_HelmetB_camo            = 0,81%
			H_HelmetCrew_B            = 0,81%
			H_HelmetCrew_I            = 0,81%
			H_HelmetCrew_O            = 0,81%
			H_HelmetLeaderO_ocamo     = 0,81%
			H_HelmetLeaderO_oucamo    = 0,81%
			H_HelmetO_ghex_F          = 0,81%
			H_HelmetO_ocamo           = 0,81%
			H_HelmetO_oucamo          = 0,81%
			H_HelmetSpecO_blk         = 0,81%
			H_HelmetSpecO_ocamo       = 0,81%
			H_PilotHelmetFighter_B    = 0,81%
			H_PilotHelmetFighter_I    = 0,81%
			H_PilotHelmetFighter_O    = 0,81%
			H_PilotHelmetHeli_B       = 0,81%
			H_PilotHelmetHeli_I       = 0,81%
			H_PilotHelmetHeli_O       = 0,81%
			H_BandMask_demon          = 1,63%
			H_BandMask_khk            = 1,63%
			H_BandMask_reaper         = 1,63%
			H_Beret_gen_F             = 1,63%
			H_Helmet_Skate            = 1,63%
			H_HelmetB_black           = 1,63%
			H_HelmetB_desert          = 1,63%
			H_HelmetB_Enh_tna_F       = 1,63%
			H_HelmetB_grass           = 1,63%
			H_HelmetB_light_black     = 1,63%
			H_HelmetB_light_desert    = 1,63%
			H_HelmetB_light_grass     = 1,63%
			H_HelmetB_light_sand      = 1,63%
			H_HelmetB_light_snakeskin = 1,63%
			H_HelmetB_Light_tna_F     = 1,63%
			H_HelmetB_sand            = 1,63%
			H_HelmetB_snakeskin       = 1,63%
			H_HelmetB_TI_tna_F        = 1,63%
			H_HelmetB_tna_F           = 1,63%
			H_HelmetCrew_O_ghex_F     = 1,63%
			H_HelmetIA_camo           = 1,63%
			H_HelmetIA_net            = 1,63%
			H_HelmetLeaderO_ghex_F    = 1,63%
			H_HelmetSpecO_ghex_F      = 1,63%
			H_HelmetB                 = 2,44%
			H_HelmetB_light           = 2,44%
			H_HelmetB_paint           = 2,44%
			H_HelmetB_plain_blk       = 2,44%
			H_HelmetIA                = 2,44%
			H_HelmetSpecB             = 2,44%
			H_HelmetSpecB_blk         = 2,44%
			H_HelmetSpecB_paint1      = 2,44%
			H_HelmetSpecB_paint2      = 2,44%
			Exile_Headgear_GasMask    = 3,25%
			H_MilCap_blue             = 3,25%
			H_MilCap_dgtl             = 3,25%
			H_MilCap_mcamo            = 3,25%
			H_MilCap_ocamo            = 3,25%
			H_MilCap_oucamo           = 3,25%
			H_MilCap_rucamo           = 3,25%
		*/
		MilitaryHeadgear[] = {"H_HelmetSpecB_paint2", "H_HelmetB_sand", "H_HelmetO_ghex_F", "H_PilotHelmetFighter_O", "H_HelmetB_Light_tna_F", "H_HelmetSpecB_paint1", "H_MilCap_mcamo", "H_HelmetLeaderO_ghex_F", "H_HelmetB_paint", "H_MilCap_dgtl", "H_MilCap_rucamo", "H_PilotHelmetFighter_B", "H_HelmetSpecB_paint1", "H_HelmetLeaderO_ocamo", "H_MilCap_ocamo", "H_HelmetCrew_B", "H_HelmetSpecO_blk", "H_HelmetCrew_O_ghex_F", "H_HelmetB_camo", "H_HelmetB_plain_blk", "H_HelmetB_Enh_tna_F", "H_HelmetB_black", "H_MilCap_mcamo", "H_HelmetSpecB", "H_HelmetIA", "H_HelmetIA_camo", "H_HelmetB_light_desert", "H_HelmetB_Enh_tna_F", "H_MilCap_oucamo", "H_CrewHelmetHeli_B", "H_CrewHelmetHeli_O", "H_MilCap_dgtl", "H_HelmetB_light_black", "H_HelmetB_tna_F", "H_HelmetB_light_grass", "H_HelmetIA", "H_HelmetB_snakeskin", "H_HelmetCrew_O_ghex_F", "H_HelmetB_paint", "H_BandMask_khk", "H_MilCap_mcamo", "H_HelmetB_grass", "H_PilotHelmetHeli_B", "H_HelmetB", "H_PilotHelmetHeli_O", "H_BandMask_demon", "H_HelmetB", "H_MilCap_dgtl", "H_HelmetSpecO_ghex_F", "H_HelmetB_snakeskin", "H_HelmetSpecO_ghex_F", "H_HelmetB_TI_tna_F", "H_HelmetSpecB_paint2", "H_MilCap_blue", "H_MilCap_ocamo", "H_Helmet_Skate", "H_HelmetIA_camo", "H_HelmetB_desert", "H_HelmetB_light", "H_BandMask_reaper", "Exile_Headgear_GasMask", "H_HelmetB_grass", "H_HelmetSpecB_blk", "H_HelmetB_black", "H_MilCap_oucamo", "H_HelmetSpecB_paint2", "H_HelmetB_light", "H_HelmetIA_net", "H_Beret_gen_F", "H_BandMask_khk", "H_Helmet_Skate", "Exile_Headgear_GasMask", "H_MilCap_oucamo", "H_HelmetB_plain_blk", "H_HelmetO_ocamo", "H_MilCap_blue", "H_HelmetB_light_snakeskin", "H_MilCap_mcamo", "H_HelmetSpecB_blk", "H_HelmetB_light_sand", "H_HelmetLeaderO_ghex_F", "Exile_Headgear_GasMask", "H_MilCap_dgtl", "H_MilCap_rucamo", "H_HelmetB_light_desert", "H_HelmetIA", "H_MilCap_ocamo", "H_MilCap_blue", "H_HelmetB_Light_tna_F", "H_PilotHelmetFighter_I", "H_HelmetCrew_I", "H_HelmetSpecB_paint1", "H_Beret_gen_F", "H_BandMask_demon", "H_PilotHelmetHeli_I", "H_HelmetB_light_snakeskin", "H_HelmetB_light_sand", "H_MilCap_blue", "H_HelmetB_desert", "H_HelmetCrew_O", "H_CrewHelmetHeli_I", "H_MilCap_rucamo", "H_HelmetSpecB_blk", "H_MilCap_ocamo", "H_HelmetO_oucamo", "H_HelmetB_light_black", "Exile_Headgear_GasMask", "H_HelmetB_TI_tna_F", "H_HelmetSpecO_ocamo", "H_HelmetB_sand", "H_HelmetB_paint", "H_HelmetB_plain_blk", "H_HelmetIA_net", "H_MilCap_oucamo", "H_HelmetB_light", "H_HelmetSpecB", "H_HelmetLeaderO_oucamo", "H_HelmetB", "H_MilCap_rucamo", "H_BandMask_reaper", "H_HelmetB_tna_F", "H_HelmetSpecB", "H_HelmetB_light_grass"};

		/*
			Percental Item Spawn Chances of Ghillies:

			U_B_GhillieSuit = 33,33%
			U_O_GhillieSuit = 33,33%
			U_I_GhillieSuit = 33,33%
		*/
		Ghillies[] = {"U_O_GhillieSuit", "U_B_GhillieSuit", "U_I_GhillieSuit"};

		/*
			Percental Item Spawn Chances of DLCGhillies:

			U_B_FullGhillie_ard     = 2,94%
			U_B_FullGhillie_lsh     = 2,94%
			U_B_FullGhillie_sard    = 2,94%
			U_O_FullGhillie_ard     = 2,94%
			U_O_FullGhillie_lsh     = 2,94%
			U_O_FullGhillie_sard    = 2,94%
			U_I_FullGhillie_ard     = 2,94%
			U_I_FullGhillie_lsh     = 2,94%
			U_I_FullGhillie_sard    = 2,94%
			U_B_T_Sniper_F          = 14,71%
			U_B_T_Soldier_F         = 14,71%
			U_B_T_FullGhillie_tna_F = 14,71%
			U_O_T_Sniper_F          = 14,71%
			U_O_T_FullGhillie_tna_F = 14,71%
		*/
		DLCGhillies[] = {"U_B_T_FullGhillie_tna_F", "U_B_FullGhillie_sard", "U_B_T_Sniper_F", "U_B_FullGhillie_ard", "U_B_T_FullGhillie_tna_F", "U_O_T_FullGhillie_tna_F", "U_B_T_Soldier_F", "U_B_T_Sniper_F", "U_B_T_Soldier_F", "U_O_T_Sniper_F", "U_B_T_Sniper_F", "U_O_T_FullGhillie_tna_F", "U_B_FullGhillie_lsh", "U_O_FullGhillie_lsh", "U_O_FullGhillie_ard", "U_O_T_Sniper_F", "U_B_T_Soldier_F", "U_B_T_Soldier_F", "U_B_T_FullGhillie_tna_F", "U_B_T_FullGhillie_tna_F", "U_O_T_FullGhillie_tna_F", "U_O_T_Sniper_F", "U_I_FullGhillie_lsh", "U_B_T_Sniper_F", "U_O_T_FullGhillie_tna_F", "U_B_T_Soldier_F", "U_O_FullGhillie_sard", "U_B_T_Sniper_F", "U_I_FullGhillie_ard", "U_I_FullGhillie_sard", "U_O_T_FullGhillie_tna_F", "U_O_T_Sniper_F", "U_B_T_FullGhillie_tna_F", "U_O_T_Sniper_F"};

		/*
			Percental Item Spawn Chances of DLCVests:

			V_PlateCarrierGL_blk         = 4,76%
			V_PlateCarrierGL_mtp         = 4,76%
			V_PlateCarrierGL_rgr         = 4,76%
			V_PlateCarrierIAGL_dgtl      = 4,76%
			V_PlateCarrierIAGL_oli       = 4,76%
			V_PlateCarrierSpec_blk       = 4,76%
			V_PlateCarrierSpec_mtp       = 4,76%
			V_PlateCarrierSpec_rgr       = 4,76%
			V_TacChestrig_grn_F          = 4,76%
			V_TacChestrig_oli_F          = 4,76%
			V_TacChestrig_cbr_F          = 4,76%
			V_PlateCarrier1_tna_F        = 4,76%
			V_PlateCarrier2_tna_F        = 4,76%
			V_PlateCarrierSpec_tna_F     = 4,76%
			V_PlateCarrierGL_tna_F       = 4,76%
			V_HarnessO_ghex_F            = 4,76%
			V_HarnessOGL_ghex_F          = 4,76%
			V_BandollierB_ghex_F         = 4,76%
			V_TacVest_gen_F              = 4,76%
			V_PlateCarrier1_rgr_noflag_F = 4,76%
			V_PlateCarrier2_rgr_noflag_F = 4,76%
		*/
		DLCVests[] = {"V_BandollierB_ghex_F", "V_PlateCarrierGL_blk", "V_PlateCarrierSpec_blk", "V_PlateCarrier2_tna_F", "V_PlateCarrier1_rgr_noflag_F", "V_PlateCarrierSpec_tna_F", "V_PlateCarrier2_rgr_noflag_F", "V_TacVest_gen_F", "V_TacChestrig_cbr_F", "V_PlateCarrierSpec_rgr", "V_PlateCarrier1_tna_F", "V_PlateCarrierSpec_mtp", "V_PlateCarrierGL_mtp", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrierGL_tna_F", "V_HarnessOGL_ghex_F", "V_HarnessO_ghex_F", "V_PlateCarrierGL_rgr", "V_TacChestrig_oli_F", "V_PlateCarrierIAGL_oli", "V_TacChestrig_grn_F"};

		/*
			Percental Item Spawn Chances of Rebreathers:

			V_RebreatherB  = 33,33%
			V_RebreatherIR = 33,33%
			V_RebreatherIA = 33,33%
		*/
		Rebreathers[] = {"V_RebreatherB", "V_RebreatherIA", "V_RebreatherIR"};

		/*
			Percental Item Spawn Chances of MedicalItems:

			Exile_Item_InstaDoc  = 9,09%
			Exile_Item_Bandage   = 36,36%
			Exile_Item_Vishpirin = 36,36%
			Exile_Item_Heatpack  = 18,18%
		*/
		MedicalItems[] = {"Exile_Item_Bandage", "Exile_Item_Bandage", "Exile_Item_Vishpirin", "Exile_Item_Vishpirin", "Exile_Item_Vishpirin", "Exile_Item_Bandage", "Exile_Item_Bandage", "Exile_Item_Heatpack", "Exile_Item_InstaDoc", "Exile_Item_Heatpack", "Exile_Item_Vishpirin"};

		/*
			Percental Item Spawn Chances of IndustrialItems:

			Exile_Item_ThermalScannerPro    = 0,00%
			Exile_Item_Knife                = 2,25%
			Exile_Item_Cement               = 3,37%
			Exile_Item_FloodLightKit        = 3,37%
			Exile_Item_PortableGeneratorKit = 3,37%
			Exile_Item_CamoTentKit          = 4,49%
			Exile_Item_MetalBoard           = 4,49%
			Exile_Item_Foolbox              = 4,49%
			Exile_Item_Sand                 = 4,49%
			Exile_Item_Grinder              = 5,62%
			Exile_Item_MetalScrews          = 5,62%
			Exile_Melee_SledgeHammer        = 5,62%
			Exile_Item_ExtensionCord        = 5,62%
			Exile_Item_LightBulb            = 5,62%
			Exile_Item_WaterCanisterEmpty   = 5,62%
			Exile_Melee_Shovel              = 5,62%
			Exile_Item_JunkMetal            = 5,62%
			Exile_Item_Handsaw              = 5,62%
			Exile_Item_Pliers               = 5,62%
			Exile_Item_ScrewDriver          = 5,62%
			Exile_Melee_Axe                 = 5,62%
			Laserbatteries                  = 1,12%
			CUP_item_Money                  = 1,12%
		*/
		IndustrialItems[] = {"Exile_Item_Foolbox", "Exile_Melee_SledgeHammer", "Exile_Item_Pliers", "Exile_Item_Sand", "Exile_Item_Pliers", "Exile_Item_FloodLightKit", "Exile_Melee_SledgeHammer", "Exile_Melee_Shovel", "Exile_Melee_Shovel", "Exile_Item_Pliers", "Exile_Item_ExtensionCord", "Exile_Melee_SledgeHammer", "Exile_Item_MetalScrews", "Exile_Item_Sand", "Exile_Item_Foolbox", "Exile_Melee_Axe", "Exile_Item_MetalScrews", "Exile_Item_ScrewDriver", "Exile_Item_Foolbox", "Exile_Item_PortableGeneratorKit", "Exile_Item_WaterCanisterEmpty", "Exile_Item_JunkMetal", "Exile_Item_Grinder", "Exile_Item_Knife", "Exile_Item_LightBulb", "Exile_Item_Pliers", "Exile_Melee_SledgeHammer", "Exile_Item_LightBulb", "Exile_Item_Cement", "Exile_Item_CamoTentKit", "Exile_Item_WaterCanisterEmpty", "Exile_Item_LightBulb", "Exile_Item_Cement", "Exile_Item_MetalBoard", "Exile_Item_Grinder", "Exile_Item_ExtensionCord", "Exile_Item_JunkMetal", "Exile_Item_ExtensionCord", "Exile_Item_Handsaw", "Exile_Item_JunkMetal", "Exile_Item_ScrewDriver", "Exile_Item_Knife", "Exile_Item_LightBulb", "Exile_Item_ScrewDriver", "Exile_Item_LightBulb", "Exile_Melee_Shovel", "Exile_Item_JunkMetal", "Exile_Melee_Axe", "Exile_Item_CamoTentKit", "Exile_Item_MetalScrews", "CUP_item_Money", "Laserbatteries", "Exile_Item_FloodLightKit", "Exile_Item_ExtensionCord", "Exile_Item_Foolbox", "Exile_Item_MetalBoard", "Exile_Item_JunkMetal", "Exile_Melee_Axe", "Exile_Item_Handsaw", "Exile_Item_Sand", "Exile_Item_MetalBoard", "Exile_Melee_Shovel", "Exile_Item_Cement", "Exile_Item_Grinder", "Exile_Item_MetalScrews", "Exile_Item_Handsaw", "Exile_Item_WaterCanisterEmpty", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Handsaw", "Exile_Item_Sand", "Exile_Item_Grinder", "Exile_Item_Handsaw", "Exile_Melee_Shovel", "Exile_Item_ExtensionCord", "Exile_Item_CamoTentKit", "Exile_Item_FloodLightKit", "Exile_Item_CamoTentKit", "Exile_Melee_SledgeHammer", "Exile_Item_MetalBoard", "Exile_Item_ScrewDriver", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Grinder", "Exile_Melee_Axe", "Exile_Item_PortableGeneratorKit", "Exile_Item_ScrewDriver", "Exile_Item_PortableGeneratorKit", "Exile_Item_Pliers", "Exile_Melee_Axe", "Exile_Item_MetalScrews"};

		/*
			Percental Item Spawn Chances of Vehicle:

			Exile_Item_FuelCanisterFull  = 42,86%
			Exile_Item_FuelCanisterEmpty = 42,86%
			Exile_Item_DuctTape          = 14,29%
		*/
		Vehicle[] = {"Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterFull", "Exile_Item_DuctTape", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterFull"};

		/*
			Percental Item Spawn Chances of Chemlights:

			Chemlight_blue   = 25,00%
			Chemlight_green  = 25,00%
			Chemlight_red    = 25,00%
			Chemlight_yellow = 25,00%
		*/
		Chemlights[] = {"Chemlight_green", "Chemlight_yellow", "Chemlight_blue", "Chemlight_red"};

		/*
			Percental Item Spawn Chances of RoadFlares:

			FlareGreen_F  = 25,00%
			FlareRed_F    = 25,00%
			FlareWhite_F  = 25,00%
			FlareYellow_F = 25,00%
		*/
		RoadFlares[] = {"FlareGreen_F", "FlareYellow_F", "FlareWhite_F", "FlareRed_F"};

		/*
			Percental Item Spawn Chances of SmokeGrenades:

			SmokeShell       = 14,29%
			SmokeShellRed    = 14,29%
			SmokeShellGreen  = 14,29%
			SmokeShellYellow = 14,29%
			SmokeShellPurple = 14,29%
			SmokeShellBlue   = 14,29%
			SmokeShellOrange = 14,29%
		*/
		SmokeGrenades[] = {"SmokeShellOrange", "SmokeShellGreen", "SmokeShellYellow", "SmokeShellPurple", "SmokeShellRed", "SmokeShellBlue", "SmokeShell"};

		/*
			Percental Item Spawn Chances of Restraints:

			Exile_Item_ZipTie = 100,00%
		*/
		Restraints[] = {"Exile_Item_ZipTie"};

		/*
			Percental Item Spawn Chances of Electronics:

			Exile_Item_Laptop        = 50,00%
			Exile_Item_BaseCameraKit = 50,00%
		*/
		Electronics[] = {"Exile_Item_Laptop", "Exile_Item_BaseCameraKit"};

		/*
			Percental Item Spawn Chances of Trash:

			Exile_Item_Magazine01         = 6,25%
			Exile_Item_Magazine02         = 6,25%
			Exile_Item_Magazine03         = 6,25%
			Exile_Item_Magazine04         = 6,25%
			Exile_Item_Can_Empty          = 25,00%
			Exile_Item_PlasticBottleEmpty = 25,00%
			Exile_Item_ToiletPaper        = 25,00%
		*/
		Trash[] = {"Exile_Item_Can_Empty", "Exile_Item_ToiletPaper", "Exile_Item_Magazine02", "Exile_Item_PlasticBottleEmpty", "Exile_Item_Magazine03", "Exile_Item_Can_Empty", "Exile_Item_ToiletPaper", "Exile_Item_Magazine01", "Exile_Item_PlasticBottleEmpty", "Exile_Item_Magazine04", "Exile_Item_Can_Empty", "Exile_Item_ToiletPaper", "Exile_Item_Can_Empty", "Exile_Item_PlasticBottleEmpty", "Exile_Item_PlasticBottleEmpty", "Exile_Item_ToiletPaper"};

		/*
			Percental Item Spawn Chances of Unused:

			Exile_Item_CordlessScrewdriver = 12,50%
			Exile_Item_FireExtinguisher    = 12,50%
			Exile_Item_Rope                = 12,50%
			Exile_Item_Carwheel            = 0,00%
			Exile_Item_Defibrillator       = 12,50%
			Exile_Item_SleepingMat         = 12,50%
			Exile_Item_Wrench              = 12,50%
			Exile_Item_OilCanister         = 12,50%
			Exile_Item_Hammer              = 12,50%
		*/
		Unused[] = {"Exile_Item_FireExtinguisher", "Exile_Item_Rope", "Exile_Item_CordlessScrewdriver", "Exile_Item_Wrench", "Exile_Item_Hammer", "Exile_Item_SleepingMat", "Exile_Item_OilCanister", "Exile_Item_Defibrillator"};
	};
};