/**
 * Created with Exile Mod 3DEN Plugin
 * www.exilemod.com
 */

if (!hasInterface || isServer) exitWith {};

// 30 NPCs
private _npcs = [
["Exile_Trader_WasteDump", ["HubStandingUC_move1","HubStandingUC_move2"], "Exile_Trader_WasteDump", "WhiteHead_18", [[],[],[],["CUP_U_I_GUE_Anorak_03",[]],[],[],"H_Cap_grn_BI","",[],["","","","","",""]], [9623.92, 10442.5, 181.598], [0.921971, -0.387258, 0], [0, 0, 1]],
["Exile_Guard_Abstract", ["InBaseMoves_patrolling1","InBaseMoves_patrolling2"], "", "PersianHead_A3_01", [["arifle_SPAR_03_blk_F","","","optic_ERCO_blk_F",[],[],""],[],[],["Exile_Uniform_Woodland",[]],["CUP_V_CDF_6B3_2_FST",[]],["B_FieldPack_cbr",[]],"H_Watchcap_cbr","",[],["","","","","","NVGoggles_INDEP"]], [9626.03, 10435.3, 181.462], [0.993145, 0.116886, 0], [0, 0, 1]],
["Exile_Trader_Armory", ["AmovPsitMstpSrasWrflDnon_WeaponCheck1","AmovPsitMstpSrasWrflDnon_WeaponCheck2","AmovPsitMstpSrasWrflDnon_Smoking"], "Exile_Trader_Armory", "GreekHead_A3_06", [["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]], [3693.56, 5999.11, 402.001], [0.980768, -0.195176, 0], [0, 0, 1]],
["Exile_Guard_Abstract", ["InBaseMoves_patrolling1","InBaseMoves_patrolling2"], "", "GreekHead_A3_08", [["srifle_DMR_04_Tan_F","","","optic_AMS",[],[],"bipod_02_F_hex"],["launch_RPG7_F","","","",[],[],""],[],["CUP_U_I_Ghillie_Top",[]],["V_PlateCarrierGL_blk",[]],["B_Carryall_cbr",[]],"","G_Combat",[],["","","","","",""]], [3684.9, 5993.95, 410.948], [0, 1, 0], [0, 0, 1]],
["Exile_Guard_Abstract", ["InBaseMoves_patrolling1","InBaseMoves_patrolling2"], "", "WhiteHead_02", [["srifle_DMR_03_multicam_F","muzzle_snds_B_khk_F","","optic_KHS_hex",["20Rnd_762x51_Mag",20],[],"bipod_02_F_hex"],["launch_RPG7_F","","","",[],[],""],[],["U_B_FullGhillie_lsh",[["20Rnd_762x51_Mag",3,20]]],["V_PlateCarrierGL_blk",[]],["B_Carryall_cbr",[]],"","G_Combat",[],["","","","","",""]], [3706.39, 6006.93, 405.367], [0.88561, -0.46443, 0], [0, 0, 1]],
["Exile_Guard_Abstract", ["InBaseMoves_patrolling1","InBaseMoves_patrolling2"], "", "WhiteHead_13", [["srifle_DMR","","","optic_tws",["20Rnd_762x51_DMR",20],[],"bipod_03_F_blk"],["launch_RPG7_F","","","",[],[],""],[],["U_O_T_FullGhillie_tna_F",[["20Rnd_762x51_DMR",3,20]]],["V_PlateCarrierGL_blk",[]],["B_Carryall_cbr",[]],"","G_Combat",[],["","","","","",""]], [3702.71, 5978.38, 402.001], [0, 1, 0], [0, 0, 1]],
["Exile_Guard_Abstract", ["AmovPsitMstpSrasWrflDnon_WeaponCheck1","AmovPsitMstpSrasWrflDnon_WeaponCheck2","AmovPsitMstpSrasWrflDnon_Smoking"], "", "WhiteHead_10", [["exile_weapons_m107","","","optic_LRPS",["10Rnd_127x99_m107",10],[],""],[],[],["U_O_GhillieSuit",[["10Rnd_127x99_m107",3,10]]],["V_PlateCarrierGL_blk",[]],["B_Carryall_cbr",[]],"","G_Combat",[],["","","","","",""]], [3697.91, 5998.43, 402.001], [-0.977307, 0.211828, 0], [0, 0, 1]],
["Exile_Guard_Abstract", ["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"], "", "WhiteHead_04", [["MMG_01_hex_F","","","optic_AMS",["150Rnd_93x64_Mag",150],[],"bipod_02_F_hex"],["launch_RPG7_F","","","",[],[],""],[],["U_I_GhillieSuit",[]],["V_PlateCarrierGL_blk",[["150Rnd_93x64_Mag",1,150]]],["B_Carryall_cbr",[["150Rnd_93x64_Mag",2,150]]],"","G_Combat",[],["","","","","",""]], [3692.47, 5986.42, 402.001], [0.938209, 0.346068, 0], [0, 0, 1]],
["Exile_Guard_Abstract", ["InBaseMoves_patrolling1","InBaseMoves_patrolling2"], "", "WhiteHead_12", [["srifle_DMR","","","optic_tws",["20Rnd_762x51_DMR",20],[],"bipod_03_F_blk"],["launch_RPG7_F","","","",[],[],""],[],["U_O_T_FullGhillie_tna_F",[["20Rnd_762x51_DMR",3,20]]],["V_PlateCarrierGL_blk",[]],["B_Carryall_cbr",[]],"","G_Combat",[],["","","","","",""]], [3716.28, 5989.17, 444.524], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", ["HubFixingVehicleProne_idle1"], "Exile_Trader_Vehicle", "AfricanHead_03", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"H_RacingHelmet_4_F","",[],["","","","","",""]], [4444.89, 6459.91, 297.375], [0.968549, -0.248825, 0], [0, 0, 1]],
["Exile_Guard_Abstract", ["c4coming2cDf_genericstani1","c4coming2cDf_genericstani2","c4coming2cDf_genericstani3"], "", "WhiteHead_10", [["LMG_Mk200_F","","","optic_Arco",[],[],""],[],[],["CUP_U_B_CDF_FST_2",[]],["V_PlateCarrier1_tna_F",[]],["B_AssaultPack_dgtl",[]],"H_Watchcap_blk","G_Bandanna_beast",[],["","","","","","NVGoggles_OPFOR"]], [4455.36, 6458.03, 296.36], [-0.821836, -0.569724, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", ["InBaseMoves_repairVehicleKnl"], "Exile_Trader_VehicleCustoms", "WhiteHead_11", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","G_Combat",[],["","","","","",""]], [4440.17, 6463.33, 297.367], [-0.238923, -0.971038, 0], [0, 0, 1]],
["Exile_Trader_Food", ["AmovPsitMstpSrasWrflDnon_WeaponCheck1"], "Exile_Trader_Food", "GreekHead_A3_09", [["srifle_DMR_06_olive_F","","","optic_SOS",["20Rnd_762x51_Mag",20],[],""],[],[],["CUP_U_B_CDF_FST_2",[]],[],[],"H_Cap_tan","G_Spectacles_Tinted",[],["","","","","",""]], [6841.1, 4467.29, 197.144], [-0.629917, 0.776662, 0], [0, 0, 1]],
["Exile_Guard_Abstract", ["AmovPsitMstpSrasWrflDnon_Smoking"], "", "GreekHead_A3_06", [["srifle_DMR_02_camo_F","","","optic_DMS_ghex_F",[],[],""],[],[],["CUP_U_O_CHDKZ_Kam_04",[]],["CUP_V_CDF_6B3_1_FST",[]],[],"CUP_H_CDF_H_PASGT_FST","",[],["","","","","",""]], [6837.84, 4468.07, 197.254], [0.848409, 0.529342, 0], [0, 0, 1]],
["Exile_Trader_Equipment", ["AmovPsitMstpSrasWrflDnon_WeaponCheck2"], "Exile_Trader_Equipment", "TanoanHead_A3_05", [["arifle_SPAR_02_blk_F","","","optic_Holosight_blk_F",["150Rnd_556x45_Drum_Mag_F",150],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[["150Rnd_556x45_Drum_Mag_F",3,150]]],[],"H_Watchcap_khk","",[],["","","","","",""]], [6839.28, 4467.02, 197.21], [0.17851, 0.983938, 0], [0, 0, 1]],
["Exile_Trader_Office", ["AmovPsitMstpSrasWrflDnon_Smoking"], "Exile_Trader_Office", "WhiteHead_07", [[],[],[],["U_I_G_resistanceLeader_F",[]],["V_Rangemaster_belt",[]],[],"H_Hat_brown","",[],["","","","","",""]], [4062.97, 11671.6, 366.618], [0.976873, -0.21382, 0], [0, 0, 1]],
["Exile_Guard_Abstract", ["InBaseMoves_patrolling1"], "", "GreekHead_A3_12", [["CUP_srifle_G22_des","","","optic_LRPS",["CUP_5Rnd_762x67_G22",5],[],"bipod_03_F_blk"],[],[],["CUP_U_B_BAF_DPM_Tshirt",[["CUP_5Rnd_762x67_G22",3,5]]],["V_PlateCarrier2_blk",[]],[],"H_Bandanna_khk","",[],["","","","","",""]], [4044.83, 11651.8, 369.698], [0.92768, 0.373376, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", ["HubSittingChairC_idle2","HubSittingChairB_idle2","HubSittingChairA_move1"], "Exile_Trader_SpecialVehicleTrader", "WhiteHead_18", [["arifle_AK47","","","",["30Rnd_762x39_AK47_M",30],[],"bipod_03_F_blk"],[],["CUP_hgun_Colt1911","muzzle_snds_acp","","",["CUP_7Rnd_45ACP_1911",7],[],""],["CUP_U_B_BAF_MTP_S1_RolledUp",[["CUP_7Rnd_45ACP_1911",3,7]]],["CUP_V_B_GER_Carrier_Vest",[["30Rnd_762x39_AK47_M",3,30]]],["B_LegStrapBag_black_F",[]],"H_EarProtectors_white_F","G_Balaclava_combat",["Rangefinder","","","",[],[],""],["ItemMap","I_UavTerminal","ItemRadio","ItemCompass","","NVGoggles_INDEP"]], [4373.16, 2538.5, 6.86073], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_CommunityCustoms", ["InBaseMoves_table1"], "Exile_Trader_SpecialTrader", "GreekHead_A3_04", [["Exile_Weapon_AKS_Gold","","acc_pointer_IR","optic_ERCO_khk_F",["Exile_Magazine_30Rnd_762x39_AK",30],[],"bipod_02_F_tan"],["CUP_launch_FIM92Stinger","","","",[],[],""],["Exile_Weapon_Colt1911","muzzle_snds_M","","",["Exile_Magazine_7Rnd_45ACP",7],[],""],["U_C_ConstructionCoverall_Black_F",[["Exile_Magazine_7Rnd_45ACP",3,7]]],["CUP_V_OI_TKI_Jacket4_03",[["Exile_Magazine_30Rnd_762x39_AK",2,30]]],["C_IDAP_UAV_06_antimine_backpack_F",[]],"CUP_H_TKI_Pakol_2_04","G_EyeProtectors_Earpiece_F",["Rangefinder","","","",[],[],""],["","","ItemRadio","","Exile_Item_XM8","NVGoggles_tna_F"]], [4376.2, 2539.46, 6.64185], [0, 1, 0], [0, 0, 1]],
["Exile_Guard_Abstract", ["InBaseMoves_assemblingVehicleErc"], "", "WhiteHead_04", [[],[],[],["CUP_O_TKI_Khet_Jeans_01",[]],["V_Safety_orange_F",[]],[],"H_Cap_Black_IDAP_F","",[],["","","","","",""]], [4384.6, 2537.71, 6.69087], [0.886796, -0.462161, 0], [0, 0, 1]],
["Exile_Guard_Abstract", ["Acts_AidlPsitMstpSsurWnonDnon01"], "", "WhiteHead_14", [[],[],[],["U_I_C_Soldier_Bandit_3_F",[]],[],[],"","",[],["","","","","",""]], [4374.66, 2560.15, 6.71425], [-0.593995, -0.804469, 0], [0, 0, 1]],
["Exile_Guard_Abstract", ["c4coming2cDf_genericstani2"], "", "WhiteHead_06", [["srifle_DMR_05_tan_f","","","CUP_optic_CWS",["10Rnd_93x64_DMR_05_Mag",10],[],""],["CUP_launch_Mk153Mod0","","","",[],[],""],[],["CUP_U_B_BAF_DDPM_Tshirt",[["10Rnd_93x64_DMR_05_Mag",1,10]]],["CUP_V_I_RACS_Carrier_Vest",[]],[],"","",[],["","","","","",""]], [4372.21, 2560.4, 6.69895], [0.991677, -0.12875, 0], [0, 0, 1]],
["Exile_Guard_Abstract", ["c4coming2cDf_genericstani2"], "", "GreekHead_A3_13", [["CUP_arifle_Mk20","","","CUP_optic_SB_3_12x50_PMII",[],[],"bipod_02_F_hex"],[],[],["U_O_T_Sniper_F",[]],[],[],"","G_Tactical_Clear",[],["","","","","",""]], [4381.61, 2539.85, 6.67954], [-0.842293, 0.539021, 0], [0, 0, 1]],
["Exile_Guard_Abstract", ["InBaseMoves_SittingRifle1"], "", "GreekHead_A3_13", [["CUP_arifle_Mk20","","","CUP_optic_SB_3_12x50_PMII",[],[],"bipod_02_F_hex"],[],[],["U_I_FullGhillie_sard",[]],[],[],"","G_Tactical_Clear",[],["","","","","",""]], [4357.98, 2552.76, 11.3142], [0.857509, -0.514469, 0], [0, 0, 1]],
["Exile_Guard_Abstract", ["InBaseMoves_patrolling1"], "", "GreekHead_A3_13", [["CUP_lmg_minimi_railed","","","CUP_optic_Elcan_reflex",["CUP_200Rnd_TE4_Red_Tracer_556x45_M249",200],[],""],["launch_RPG7_F","","","",[],[],""],["Makarov","","","",["8Rnd_9x18_Makarov",8],[],""],["U_O_CombatUniform_ocamo",[["8Rnd_9x18_Makarov",1,8]]],["CUP_V_B_Eagle_SPC_AT",[]],["CUP_B_ACRPara_m95",[["CUP_200Rnd_TE4_Red_Tracer_556x45_M249",3,200]]],"CUP_H_PMC_Cap_Tan","G_I_Diving",["Rangefinder","","","",[],[],""],["ItemMap","","","ItemCompass","Exile_Item_XM8","NVGoggles_INDEP"]], [4366.39, 2535.78, 5.99246], [-0.78078, -0.624807, 0], [0, 0, 1]],
["Exile_Trader_Hardware", ["HubStanding_idle3HubBriefing_loop","HubBriefing_scratch","HubBriefing_stretch","HubBriefing_think"], "Exile_Trader_Hardware", "GreekHead_A3_09", [["CUP_arifle_RPK74M","CUP_muzzle_Bizon","","",["CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",45],[],""],["launch_O_Titan_ghex_F","","","",[],[],""],["exile_rifle_SA61","","","",["10Rnd_765x17ball",10],[],""],["CUP_U_C_Woodlander_02",[["10Rnd_765x17ball",2,10]]],["CUP_V_BAF_Osprey_Mk2_DPM_Soldier1",[["CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",3,45],["10Rnd_765x17ball",1,10]]],["I_UAV_01_backpack_F",[]],"H_Cap_oli","G_Shades_Green",["Laserdesignator_02","","","",[],[],""],["ItemMap","ItemGPS","ItemRadio","","ItemWatch","NVGoggles"]], [9712.04, 6532.16, 208.792], [-0.3856, -0.922666, 0], [0, 0, 1]],
["Exile_Guard_Abstract", ["InBaseMoves_patrolling1"], "", "WhiteHead_14", [["MMG_02_black_F","muzzle_snds_338_black","","optic_AMS",[],[],"bipod_03_F_blk"],[],[],["U_O_SpecopsUniform_ocamo",[]],["V_TacVest_oli",[]],["CUP_B_AlicePack_Khaki",[]],"CUP_H_RUS_6B27_NVG_olive","G_Tactical_Clear",[],["","","","","","CUP_NVG_HMNVS"]], [9710.3, 6537.36, 208.608], [-0.302253, -0.953228, 0], [0, 0, 1]],
["Exile_Guard_Abstract", ["InBaseMoves_patrolling1"], "", "WhiteHead_17", [["MMG_02_black_F","muzzle_snds_338_black","","optic_AMS",[],[],"bipod_03_F_blk"],[],[],["U_O_T_Soldier_F",[]],["CUP_V_BAF_Osprey_Mk2_DPM_Medic",[]],["CUP_B_AlicePack_Khaki",[]],"H_HelmetB_light_snakeskin","G_Tactical_Clear",[],["","","","","","CUP_NVG_HMNVS"]], [9709.3, 6519.92, 209.936], [0.871017, -0.491252, 0], [0, 0, 1]],
["Exile_Trader_Aircraft", ["HubStandingUC_idle1","HubStandingUC_idle2","HubStandingUC_idle3","HubStandingUC_move1","HubStandingUC_move2"], "Exile_Trader_Aircraft", "TanoanHead_A3_03", [[],[],[],["U_C_IDAP_Man_cargo_F",[]],["V_LegStrapBag_olive_F",[]],[],"H_Construction_earprot_white_F","G_Combat",[],["","","","","",""]], [12067.4, 12640.3, 158.858], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_AircraftCustoms", ["AmovPercMstpSnonWnonDnon_exercisePushup","AmovPercMstpSnonWnonDnon_exercisePushup","LHD_krajPaluby","HubBriefing_scratch","HubBriefing_stretch","HubBriefing_think"], "Exile_Trader_AircraftCustoms", "AfricanHead_02", [[],[],[],["U_C_Mechanic_01_F",[]],["V_Safety_orange_F",[]],[],"H_Construction_earprot_vrana_F","",[],["","","","","",""]], [12057.5, 12642.9, 158.858], [0.901591, 0.432589, 0], [0, 0, 1]]
];

{
    private _logic = "Logic" createVehicleLocal [0, 0, 0];
    private _trader = (_x select 0) createVehicleLocal [0, 0, 0];
    private _animations = _x select 1;
    
    _logic setPosWorld (_x select 5);
    _logic setVectorDirAndUp [_x select 6, _x select 7];
    
    _trader setVariable ["BIS_enableRandomization", false];
    _trader setVariable ["BIS_fnc_animalBehaviour_disable", true];
    _trader setVariable ["ExileAnimations", _animations];
    _trader setVariable ["ExileTraderType", _x select 2];
    _trader disableAI "ANIM";
    _trader disableAI "MOVE";
    _trader disableAI "FSM";
    _trader disableAI "AUTOTARGET";
    _trader disableAI "TARGET";
    _trader disableAI "CHECKVISIBLE";
    _trader allowDamage false;
    _trader setFace (_x select 3);
    _trader setUnitLoadOut (_x select 4);
    _trader setPosWorld (_x select 5);
    _trader setVectorDirAndUp [_x select 6, _x select 7];
    _trader reveal _logic;
    _trader attachTo [_logic, [0, 0, 0]];
    _trader switchMove (_animations select 0);
    _trader addEventHandler ["AnimDone", {_this call ExileClient_object_trader_event_onAnimationDone}];
}
forEach _npcs;