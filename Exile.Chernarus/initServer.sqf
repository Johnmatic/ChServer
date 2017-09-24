/**
 * Created with Exile Mod 3DEN Plugin
 * www.exilemod.com
 */

ExileRouletteChairs = [];
ExileRouletteChairPositions = [];

// 185 Vehicles
private _vehicles = [
["Land_tent_east", [12065.5, 12629.4, 160.613], [0.918601, -0.395187, 0], [0, 0, 1], true],
["Land_Toilet", [12080.6, 12638.8, 160.02], [0.135836, -0.990731, 0], [0, 0, 1], true],
["Paleta2", [12069.8, 12634.2, 159.175], [0, 1, 0], [0, 0, 1], true],
["Paleta1", [12066.4, 12636.4, 158.902], [0, 1, 0], [0, 0, 1], true],
["Paleta1", [12066.4, 12636.2, 159.106], [0, 1, 0], [0, 0, 1], true],
["Paleta1", [12066.5, 12636.7, 159.311], [0, 1, 0], [0, 0, 1], true],
["Paleta1", [12066.3, 12636.7, 159.516], [0, 1, 0], [0, 0, 1], true],
["Misc_TyreHeapEP1", [12079.3, 12634.7, 159.066], [0, 1, 0], [0, 0, 1], true],
["Land_Misc_Garb_Heap_EP1", [12078.4, 12632.1, 159.187], [0, 1, 0], [0, 0, 1], true],
["Land_tires_EP1", [12039.6, 12617.6, 159.336], [0, 1, 0], [0, 0, 1], true],
["Land_tires_EP1", [12039.6, 12618.9, 159.336], [-0.854253, -0.519858, 0], [0, 0, 1], true],
["Land_Kontejner", [12051.3, 12650.1, 159.642], [0, 1, 0], [0, 0, 1], true],
["Land_bags_EP1", [12046.2, 12636.8, 159.351], [-0.412591, 0.910916, 0], [0, 0, 1], true],
["Land_Crates_EP1", [12045.5, 12634.9, 159.032], [0, 1, 0], [0, 0, 1], true],
["Land_Crates_stack_EP1", [12049.9, 12646.6, 159.617], [0, 1, 0], [0, 0, 1], true],
["Land_bags_EP1", [12047, 12638.7, 159.351], [-0.903192, -0.429237, 0], [0, 0, 1], true],
["Land_transport_crates_EP1", [12045.8, 12633.2, 159.596], [0, 1, 0], [0, 0, 1], true],
["CUP_hromada_beden_dekorativniX", [12045, 12630.3, 158.857], [0, 1, 0], [0, 0, 1], true],
["AmmoCrate_NoInteractive_", [12063.6, 12634.1, 159.079], [0.903481, -0.428628, 0], [0, 0, 1], true],
["Land_Misc_Cargo2C_EP1", [12044.4, 12644.5, 161.343], [0, 1, 0], [0, 0, 1], true],
["Fort_Crate_wood", [12061.2, 12629.4, 159.344], [0.842338, -0.53895, 0], [0, 0, 1], true],
["Land_Canister_EP1", [12047.1, 12641.1, 159.168], [0.326756, 0.945109, 0], [0, 0, 1], true],
["Land_Canister_EP1", [12047.7, 12642.4, 159.225], [0.272841, 0.962059, 0], [0, 0, 1], true],
["Land_Canister_EP1", [12047.3, 12641.7, 159.225], [0.175403, 0.984497, 0], [0, 0, 1], true],
["BlackhawkWreck", [12047.1, 12616.4, 160.711], [-0.346565, -0.938026, 0], [0, 0, 1], true],
["Land_HistoricalPlaneWreck_02_wing_right_F", [12063, 12618.4, 160.046], [0, 1, 0], [0, 0, 1], true],
["Exile_Sign_WasteDump", [9628.96, 10429.6, 182.689], [-0.995876, 0.0907283, 0], [0, 0, 1], true],
["Land_GarbageWashingMachine_F", [9623.67, 10437.9, 181.994], [0, 0.999514, 0.0311599], [0, -0.0311599, 0.999514], true],
["CUP_A1_ground_garbage_square3", [9626.53, 10435.6, 181.471], [0, 0.999514, 0.0311599], [0, -0.0311599, 0.999514], true],
["Land_GarbageBags_F", [9616.5, 10442.9, 182.282], [0, 0.999869, 0.0161901], [0.0320626, -0.0161818, 0.999355], true],
["Land_GarbagePallet_F", [9619.24, 10442.4, 182.009], [0, 0.999869, 0.0161901], [0.0320626, -0.0161818, 0.999355], true],
["Land_GarbageContainer_open_F", [9632.02, 10441.3, 182.113], [-0.938224, 0.346028, 0], [0, 0, 1], true],
["Land_GarbageHeap_01_F", [9613.52, 10458.2, 182.185], [0, 0.999549, -0.0300448], [0.0213271, 0.0300379, 0.999321], true],
["MedicalGarbage_01_3x3_v2_F", [9624.71, 10440.5, 181.58], [0, 1, 0], [0, 0, 1], true],
["MedicalGarbage_01_Packaging_F", [9626.8, 10433.3, 181.433], [0, 1, 0], [0, 0, 1], true],
["Land_Misc_Garb_Square_EP1", [9617.97, 10446.7, 181.84], [0, 0.999916, 0.0129737], [0.0352756, -0.0129656, 0.999294], true],
["CUP_A2_hmmwv_wreck", [9613.54, 10453.2, 182.358], [0, 1, 0], [0, 0, 1], true],
["CUP_A2_mv22wreck", [9663.01, 10436.9, 181.375], [0, 1, 0], [0, 0, 1], true],
["Land_Wreck_C130J_EP1_ruins", [10264.8, 9827.67, 142.708], [0.53247, 0.838792, -0.113594], [0.208639, 0, 0.977993], true],
["Land_Bulldozer_01_wreck_F", [9641.55, 10436.9, 182.814], [0, 1, 0], [0, 0, 1], true],
["Land_Wreck_Heli_Attack_01_F", [9600.94, 10451.3, 183.557], [0, 0.999565, -0.0294904], [0.0343311, 0.029473, 0.998976], true],
["Land_Wreck_Car2_F", [9638.26, 10437.3, 182.218], [0, 1, 0], [0, 0, 1], true],
["CUP_A2_ural_wrecked", [9613.28, 10445.8, 183.18], [0, 0.999869, 0.0161901], [0.0284474, -0.0161836, 0.999464], true],
["M113Wreck", [9619.77, 10457.1, 182.979], [0, 0.999549, -0.0300428], [0.0241049, 0.030034, 0.999258], true],
["Land_Wreck_Hunter_F", [9630.97, 10453.6, 183.352], [-0.999875, -0.0157783, -0.000274745], [0, -0.0174102, 0.999848], true],
["Land_Wreck_UAZ_F", [9632.38, 10448.6, 182.24], [0, 0.999848, 0.0174102], [0, -0.0174102, 0.999848], true],
["Land_UWreck_Heli_Attack_02_F", [9616.45, 10432.8, 190.389], [0, 1, 0], [0, 0, 1], true],
["CUP_Mi6Wreck", [9608.09, 10400.6, 186.342], [0, 0.967186, -0.254071], [0.165695, 0.250559, 0.953816], true],
["Land_Campfire_burning", [3695.46, 5998.69, 402.235], [0, 1, 0], [0, 0, 1], true],
["Land_PalletTrolley_01_khaki_F", [3694.28, 5976.4, 402.548], [0, 1, 0], [0, 0, 1], true],
["Land_ScrapHeap_2_F", [4448.15, 6442.9, 298.234], [0.921603, 0.376113, -0.0958463], [0.103442, 0, 0.994636], true],
["Exile_Sign_Vehicles", [4451.94, 6445.85, 297.955], [-0.512753, 0.858536, 0], [0, 0, 1], true],
["Land_ScrapHeap_1_F", [4455.84, 6461.98, 296.739], [0.882322, -0.467067, -0.0579246], [0.0718145, 0.011974, 0.997346], true],
["Land_GarbageHeap_01_F", [4449.12, 6448.35, 297.665], [0, 1, 0], [0.103442, 0, 0.994636], true],
["Tire_Van_02_Spare_F", [4442.35, 6459.66, 297.494], [0, 0.999996, -0.00280496], [0, 0.00280496, 0.999996], true],
["CUP_A2_a_tent", [6839.39, 4464.53, 197.647], [-0.230863, -0.97105, -0.0613467], [-0.0133317, -0.0598871, 0.998116], true],
["CUP_A2_a_tent", [6842.5, 4465.49, 197.502], [0.610163, -0.786127, -0.0985121], [0.083704, -0.0596812, 0.994702], true],
["CUP_A2_a_tent", [6836.9, 4466.49, 197.73], [-0.661806, -0.747749, -0.0537046], [-0.0133317, -0.0598871, 0.998116], true],
["Land_Campfire_burning", [6839.61, 4469.38, 197.59], [0, 0.998205, 0.0598924], [-0.0133317, -0.0598871, 0.998116], true],
["Exile_Sign_Locker", [4108.96, 11657.5, 367.437], [-0.646529, 0.581587, -0.493717], [-0.297994, 0.403228, 0.865221], true],
["CUP_A2_a_generalstore_01_ruins", [4074.06, 11690, 367.026], [0, 0.997418, 0.0718111], [-0.0704904, -0.0716325, 0.994937], true],
["CUP_A2_tyreheap_ep1", [4083.64, 11679.6, 367.402], [0, 0.997418, 0.0718145], [-0.0718148, -0.0716291, 0.994843], true],
["Exile_Locker", [4069.73, 11672.7, 365.775], [-0.980137, 0.194159, -0.0404268], [-0.0519277, -0.0545126, 0.997162], true],
["CUP_A2_stand_water_ep1", [4065.48, 11664.5, 365.536], [-0.992723, 0.112857, -0.0419924], [-0.0479435, -0.0505444, 0.99757], true],
["Exile_Locker", [4069.97, 11674.3, 365.914], [-0.979776, 0.194822, -0.0456392], [-0.0585666, -0.0611157, 0.996411], true],
["C130J_wreck_EP1", [4028.26, 11662.2, 368.689], [-0.933448, -0.352678, -0.0655207], [-0.0519277, -0.0478775, 0.997503], true],
["CDF_WarfareBAntiAirRadar", [4057.37, 11673.7, 381.572], [0, 0.998719, 0.0506016], [-0.0532564, -0.0505298, 0.997302], true],
["Exile_Locker", [4070.03, 11676.1, 365.997], [-0.979776, 0.194822, -0.0456392], [-0.0585666, -0.0611157, 0.996411], true],
["Land_ConcreteKerb_03_BY_long_F", [4918.47, 9695.75, 339], [0.580763, -0.814073, 0], [0, 0, 1], true],
["Land_Communication_F", [4933.28, 9705.45, 355.563], [0.497698, -0.86735, 0], [0, 0, 1], true],
["Land_Fuel_tank_stairs_ep1", [4922.33, 9702.71, 340.36], [0.587791, -0.809013, 0], [0, 0, 1], true],
["CamoNet_INDP_F", [4921.25, 9704.66, 340.256], [-0.664374, 0.7474, 0], [0, 0, 1], true],
["Land_A_FuelStation_Feed", [4918.24, 9698.81, 339.75], [0.53022, -0.84786, 0], [0, 0, 1], true],
["Land_Cargo_Patrol_V2_F", [4910.37, 9687.12, 343.905], [-0.844954, -0.534839, 0], [0, 0, 1], true],
["Land_TentHangar_V1_dam_F", [4922.3, 9697.6, 343.09], [-0.492692, 0.870204, 0], [0, 0, 1], true],
["US_WarfareBVehicleServicePoint_EP1", [11440.9, 11356.7, 318.241], [0.938306, 0.345805, 0], [0, 0, 1], true],
["Land_ConcreteKerb_03_BY_long_F", [11442.5, 11362.2, 317.176], [0.76899, -0.638616, 0.0287208], [-0.0360113, 0.00158119, 0.99935], true],
["Land_Communication_F", [11450.8, 11378.3, 333.857], [0.702794, -0.711393, 0], [0, 0, 1], true],
["Land_Fuel_tank_stairs_ep1", [11446.5, 11364.2, 318.625], [0.972577, -0.232491, 0.0064972], [-0.00547004, 0.00506252, 0.999972], true],
["Land_A_FuelStation_Feed", [11444.1, 11368.9, 317.941], [-0.574387, -0.818254, -0.0232092], [-0.0475645, 0.00505686, 0.998855], true],
["Land_Cargo_Patrol_V2_F", [11438.4, 11387, 321.852], [-0.679053, -0.729706, -0.0801049], [-0.0593307, -0.0542097, 0.996765], true],
["Land_TentHangar_V1_dam_F", [11437.2, 11365.8, 321.006], [0.773379, -0.629838, 0.0720344], [-0.0793181, 0.0165987, 0.996711], true],
["US_WarfareBVehicleServicePoint_EP1", [9445.33, 4894.61, 101.586], [0.146729, 0.988595, 0.0339163], [0.00373441, -0.0348407, 0.999386], true],
["Land_ConcreteKerb_03_BY_long_F", [9439.38, 4900.13, 100.758], [0.261506, 0.964828, 0.0268779], [0.00746893, -0.0298689, 0.999526], true],
["Land_Communication_F", [9432.13, 4917.76, 118.04], [0.355372, 0.934725, 0], [0, 0, 1], true],
["Land_Fuel_tank_stairs_ep1", [9442.44, 4882.41, 101.474], [-0.993826, 0.109529, 0.0177228], [0.0161825, -0.0149361, 0.999757], true],
["Land_A_FuelStation_Feed", [9442.2, 4887.75, 101.061], [0.983024, -0.183175, -0.0105157], [0.00373441, -0.0373268, 0.999296], true],
["Land_Cargo_Patrol_V2_F", [9453.67, 4922.87, 107.147], [0.947768, -0.318301, 0.0204928], [-0.0559433, -0.102636, 0.993145], true],
["Land_TentHangar_V1_dam_F", [9438.39, 4893.82, 104.647], [0.251867, 0.967078, 0.036385], [0.00373441, -0.038568, 0.999249], true],
["Land_Wreck_Hunter_F", [9431.42, 4893.78, 102.493], [-0.303671, -0.952232, -0.0322132], [0.0149381, -0.038564, 0.999144], true],
["CUP_A2_obstacle_get_over", [4383.1, 2553.17, 7.74077], [0.718703, -0.695315, 0.00201362], [-0.00666818, -0.00399657, 0.99997], true],
["CUP_A2_powgen_big_ep1", [4398.77, 2537.54, 7.71251], [-0.576528, -0.817016, -0.0100609], [-0.0080009, -0.00666765, 0.999946], true],
["CUP_A2_wf_field_hospital", [4386.68, 2547.27, 8.02893], [-0.659455, -0.751674, -0.0102887], [-0.0080009, -0.00666765, 0.999946], true],
["CUP_A2_fortified_nest_small_ep1", [4358.95, 2539.47, 6.94967], [0.643346, 0.765575, -0.000989024], [0, 0.00129187, 0.999999], true],
["CUP_A2_metalcrate", [4370.55, 2551.08, 6.64935], [0, 0.999999, 0.00133688], [-0.0053265, -0.00133686, 0.999985], true],
["CUP_A2_map_for_briefing", [4382.28, 2553.41, 7.69608], [0.676538, 0.736407, 0], [0, 0, 1], true],
["TK_WarfareBContructionSite_EP1", [4353.93, 2553, 7.80349], [-0.815058, 0.579376, -0.00186466], [-0.00133721, 0.00133721, 0.999998], true],
["US_WarfareBContructionSite_EP1", [4356.32, 2555.74, 7.84103], [-0.797715, 0.603027, -0.00290935], [-0.00666818, -0.00399657, 0.99997], true],
["TK_WarfareBContructionSite1_EP1", [4358.55, 2558.99, 7.86884], [0.581877, -0.813273, 0.00232563], [-0.00399675, 0, 0.999992], true],
["TK_WarfareBContructionSite1_EP1", [4363.25, 2566.04, 7.92838], [0.796221, -0.604989, 0.00450067], [-0.00666818, -0.00133685, 0.999977], true],
["US_WarfareBContructionSite_EP1", [4363.21, 2565.95, 10.5297], [-0.797733, 0.603011, 0], [0, 0, 1], true],
["US_WarfareBContructionSite_EP1", [4355.38, 2553.69, 10.4163], [0.91583, -0.401567, 0], [0, 0, 1], true],
["TK_WarfareBContructionSite_EP1", [4362.66, 2565.72, 13.1315], [0.525096, -0.851043, 0], [0, 0, 1], true],
["Land_PaperBox_closed_F", [4381.69, 2531.64, 7.28913], [-0.770811, 0.637063, 0], [0, 0, 1], true],
["Land_CampingTable_small_F", [4376.27, 2540.08, 7.05008], [0, 0.999999, -0.00129187], [0, 0.00129187, 0.999999], true],
["Land_Tablet_01_F", [4376.24, 2540.09, 7.47237], [0, 0.999911, 0.0133342], [-0.0133339, -0.013333, 0.999822], false],
["Land_PortableLight_double_F", [4369.71, 2562.29, 7.7724], [-0.113478, 0.993541, 0], [0, 0, 1], true],
["CUP_A2_crates_ep1", [4372.81, 2538.07, 7.35144], [-0.095031, 0.995474, 0], [0, 0, 1], true],
["Exile_Sign_Hardware", [9653.89, 6570.12, 210.447], [0.920342, 0.391115, 0], [0, 0, 1], true],
["Exile_Sign_Hardware", [9655.66, 6568.48, 209.966], [0.389529, 0.921014, 0], [0, 0, 1], true],
["Pile_of_wood", [9705.17, 6524.58, 210.93], [-0.799617, 0.60051, 0], [0, 0, 1], true],
["Misc_TyreHeap", [9708.23, 6523.13, 210.343], [0, 0.997023, -0.0771034], [0.0916104, 0.0767791, 0.992831], true],
["Land_Pneu", [9708.55, 6526.08, 209.915], [0.272708, 0.60541, -0.747736], [0.471003, 0.59368, 0.652457], true],
["Misc_cargo_cont_net1", [9712.42, 6539.22, 209.081], [-0.627758, -0.765416, 0.141629], [0.0832811, 0.11486, 0.989885], true],
["US_WarfareBVehicleServicePoint_EP1", [4928.67, 9699.33, 340.041], [-0.569171, 0.822219, 0], [0, 0, 1], true],
["Land_Device_assembled_F", [4924.45, 9696.23, 339.722], [0.618279, -0.785958, 0], [0, 0, 1], true],
["Land_Device_assembled_F", [11435.4, 11361.5, 317.59], [-0.786399, 0.617719, 0], [0, 0, 1], true],
["Land_Device_assembled_F", [9439.81, 4902.37, 101.527], [-0.967093, 0.254423, 0], [0, 0, 1], true],
["Land_R_Barn_Metal", [4375.58, 2547.71, 12.1294], [0.846497, -0.532394, 0], [0, 0, 1], true],
["EBM_Metalwall", [4391.65, 2528.84, 11.5691], [-0.828809, 0.559166, 0.0202281], [-0.559437, -0.828792, -0.0115666], true],
["TK_WarfareBAntiAirRadar_EP1", [6850.84, 11461.6, 392.728], [0.368634, -0.929575, 0], [0, 0, 1], true],
["Land_CamoNetVar_EAST", [6901.68, 11429.1, 395.831], [0, 0.999996, -0.00265204], [-0.0146643, 0.00265176, 0.999889], true],
["CUP_A2_wf_vehicle_service_point_west_ep1", [6911.7, 11416.3, 395.826], [0.0119687, 0.999928, 0], [0, 0, 1], true],
["Land_HBarrier_01_big_4_green_F", [6929.58, 11349, 392.324], [-0.633183, -0.770753, -0.0708414], [0.0923392, -0.166095, 0.981777], true],
["Land_HBarrier_01_big_4_green_F", [6934.23, 11355.4, 392.5], [-0.585693, -0.810127, 0.0256502], [0.112146, -0.0496549, 0.99245], true],
["CUP_A2_wf_uav_terminal_west", [6873.94, 11459.9, 395.573], [-4.59993e-005, 0.999999, 0.00133418], [-0.0585655, -0.00133458, 0.998283], true],
["CUP_A2_fort_watchtower", [6909.61, 11505, 393.606], [0.561384, -0.82739, 0.0165675], [0.132603, 0.109696, 0.98508], true],
["CUP_A1_Kamen3_piskovec2", [6911.29, 11499.2, 391.209], [-0.412048, 0.909363, -0.0572398], [0.077898, 0.0977482, 0.992158], true],
["Land_A_Castle_Stairs_A", [6929.31, 11376.7, 396.873], [0.813667, -0.572818, -0.0991279], [0.0810632, -0.0570535, 0.995075], true],
["EBM_Brickwall_floor_Preview", [6864.94, 11501.9, 402.561], [0.678596, 0.734512, 0], [0, 0, 1], true],
["EBM_Brickwall_floor_Preview", [6869.68, 11506.3, 402.56], [-0.643484, -0.76546, 0], [0, 0, 1], true],
["Exile_Construction_SandBags_Corner_Static", [6872.46, 11506.5, 403.251], [0.674739, 0.738056, 0], [0, 0, 1], true],
["Exile_Construction_SandBags_Corner_Static", [6865.08, 11498.5, 403.251], [0.700732, -0.713424, 0], [0, 0, 1], true],
["Exile_Construction_SandBags_Long_Static", [6866.62, 11499.8, 403.238], [-0.752559, 0.658525, 0], [0, 0, 1], true],
["Exile_Construction_SandBags_Long_Static", [6868.59, 11502, 403.234], [-0.727899, 0.685684, 0], [0, 0, 1], true],
["Exile_Construction_SandBags_Long_Static", [6870.47, 11504, 403.256], [-0.712069, 0.70211, 0], [0, 0, 1], true],
["Exile_Construction_SandBags_Long_Static", [6871.54, 11505.1, 403.269], [-0.708891, 0.705318, 0], [0, 0, 1], true],
["Exile_Construction_SandBags_Long_Static", [6871.17, 11508, 403.172], [0.671476, 0.741026, 0], [0, 0, 1], true],
["Exile_Construction_SandBags_Long_Static", [6869.87, 11509.2, 403.212], [0.685228, 0.728329, 0], [0, 0, 1], true],
["Exile_Construction_SandBags_Long_Static", [6863.7, 11499.2, 403.253], [0.603929, 0.797038, 0], [0, 0, 1], true],
["CUP_A2_fuelstation_shed", [12574.7, 12496.2, 162.071], [-0.0547596, 0.9985, 0], [0, 0, 1], true],
["CUP_A2_fuelstation_build_pmc", [12561.7, 12496, 160.322], [-0.999168, -0.0399665, 0.00815399], [0.00800059, 0.00399662, 0.99996], true],
["CUP_A2_fuelstation_feed", [12567.8, 12495.8, 159.883], [-0.997135, -0.0756404, 0], [0, 0, 1], true],
["CUP_A2_fuelstation_feed", [12574.7, 12496, 159.882], [-0.990719, -0.135929, 0], [0, 0, 1], true],
["Land_Hangar_F_Preview", [11987, 12774, 165.264], [0.34474, 0.938698, 0], [0, 0, 1], true],
["Land_Hangar_F_Preview", [12022.7, 12759.9, 165.266], [0.347166, 0.937793, 0.00445678], [-0.0133259, 0.000181184, 0.999911], true],
["Land_BarGate_F_Preview", [11983, 12667, 163.209], [-0.864445, -0.502727, 0.00062761], [-0.00020798, 0.00160603, 0.999999], true],
["Land_BagBunker_Tower_F", [11988, 12658, 161.018], [-0.496021, 0.868311, 0], [0, 0, 1], true],
["CUP_A2_t_alnus2s", [18179.6, 16016.4, 17.5969], [0, 0.99972, -0.0236787], [0.00370246, 0.0236786, 0.999713], true],
["CUP_A2_t_alnus2s", [11980, 12660, 165.74], [0, 0.999975, -0.00706739], [0.00543717, 0.00706729, 0.99996], true],
["CUP_A2_t_alnus2s", [11985, 12650, 165.718], [0, 1, 0], [0.00103552, 0, 0.999999], true],
["CUP_A2_ural_wrecked", [11975, 12671, 160.063], [0.498517, 0.866778, -0.0132937], [0.0266571, 0, 0.999645], true],
["CUP_A2_barracks_i", [11957, 12771, 160.368], [0.937039, -0.349225, 0], [0, 0, 1], true],
["CUP_A2_barracks_i", [11946, 12775, 160.268], [0.934732, -0.355354, 0], [0, 0, 1], true],
["CUP_A2_house_dam_ep1", [11924, 12775, 164.575], [0.929448, -0.368953, 0], [0, 0, 1], true],
["CUP_A2_misc_brokenspruce_pmc", [11942, 12755, 161.35], [0, 1, 0], [0, 0, 1], true],
["CUP_A2_datsun01t", [11945, 12754, 159.753], [0.997075, -0.0764282, 0], [0, 0, 1], true],
["CUP_A2_t_betula2f", [11947, 12756, 169.491], [0, 1, 0], [0, 0, 1], true],
["CUP_A2_t_betula2f", [11912, 12763, 169.491], [0, 1, 0], [0, 0, 1], true],
["CUP_A2_barracks_i", [12232.3, 12586.3, 160.368], [-0.365089, -0.930973, 0], [0, 0, 1], true],
["CUP_A2_barracks_i", [12236.6, 12596.9, 160.331], [-0.358656, -0.93347, 0], [0, 0, 1], true],
["Land_BarGate_F_Preview", [12492.4, 12515.8, 163.369], [-0.837596, 0.546242, -0.00728048], [-6.14709e-008, 0.013327, 0.999911], true],
["Land_BagBunker_Tower_F", [12493.6, 12527.2, 161.212], [-0.538951, -0.842337, 0], [0, 0, 1], true],
["CUP_A2_uaz_wrecked", [12489, 12509, 159.846], [-0.517334, 0.855783, 0], [0, 0, 1], true],
["CUP_A2_hangar_2", [12429.4, 12522.7, 161.603], [-0.227464, -0.9737, -0.0129777], [-1.52151e-007, -0.013327, 0.999911], true],
["CUP_A2_bmp2_wrecked", [12452, 12537.8, 159.85], [-0.828187, 0.560452, 0], [0, 0, 1], true],
["CUP_t_PinusE2s_EP1", [12500.9, 12531.1, 166.04], [0.376559, 0.926393, 0], [0, 0, 1], true],
["Land_LampStreet_F", [12227.1, 12594.8, 165.124], [-0.92517, 0.379553, 0], [0, 0, 1], true],
["Land_LampStreet_F", [11948.5, 12765.3, 165.11], [-0.376948, -0.926152, 0.0123438], [-1.10973e-007, 0.0133269, 0.999911], true],
["M113Wreck", [9696.78, 6532.91, 211.088], [-0.922855, -0.385147, 0], [0, 0, 1], true],
["Land_PortableLight_double_F", [4379.43, 2535.4, 7.78032], [-0.999425, 0.0339147, 0], [0, 0, 1], true],
["Land_PortableLight_double_F", [4361.8, 2545.09, 7.78032], [-0.979948, 0.199253, 0], [0, 0, 1], true],
["Land_PortableLight_double_F", [4441.96, 6466.76, 298.349], [0.129345, 0.9916, 0], [0, 0, 1], true],
["Land_PortableLight_double_F", [4454.63, 6459.53, 297.484], [0.939158, 0.343485, 0], [0, 0, 1], true],
["Land_PortableLight_double_F", [9715.19, 6532.2, 209.378], [-0.580109, -0.814539, 0], [0, 0, 1], true],
["Land_PortableLight_double_F", [9619.24, 10453.4, 182.796], [0.300618, 0.953745, 0], [0, 0, 1], true],
["Land_PortableLight_double_F", [9630.6, 10447.6, 182.461], [0.220505, -0.975386, 0], [0, 0, 1], true],
["Land_PortableLight_double_F", [12059.1, 12616.6, 159.941], [0.298519, 0.954404, 0], [0, 0, 1], true],
["Land_PortableLight_double_F", [12046.7, 12620, 159.941], [0.419579, -0.907719, 0], [0, 0, 1], true],
["Land_PortableLight_double_F", [12073, 12637.4, 159.941], [0.905306, -0.424761, 0], [0, 0, 1], true],
["Land_PortableLight_double_F", [11440.1, 11372.7, 318.047], [0.28249, 0.95927, 0], [0, 0, 1], true],
["Land_PortableLight_double_F", [9442.73, 4888.65, 101.789], [0.549369, -0.83558, 0], [0, 0, 1], true],
["Land_PortableLight_double_F", [4914.46, 9697.08, 340.084], [-0.656091, 0.754681, 0], [0, 0, 1], true],
["Land_PortableLight_double_F", [4060.91, 11668.1, 366.159], [-0.763081, -0.646303, 0], [0, 0, 1], true],
["Land_PortableLight_double_F", [4052.41, 11661.1, 365.441], [0.864774, -0.502161, 0], [0, 0, 1], true]
];

{
    private _vehicle = (_x select 0) createVehicle (_x select 1);
    _vehicle allowDamage false;
    _vehicle setPosWorld (_x select 1);
    _vehicle setVectorDirAndUp [_x select 2, _x select 3];
    _vehicle enableSimulationGlobal (_x select 4);
    _vehicle setVariable ["ExileIsLocked", -1, true];
    
    if (_vehicle isKindOf "Exile_RussianRouletteChair") then
    {
        ExileRouletteChairs pushBack _vehicle;
        ExileRouletteChairPositions pushBack [_x select 1, getDir _vehicle];
    };
}
forEach _vehicles;

// 27 Simple Objects
private _invisibleSelections = ["zasleh", "zasleh2", "box_nato_grenades_sign_f", "box_nato_ammoord_sign_f", "box_nato_support_sign_f"];
private _simpleObjects = [
["exile_psycho_towtractor\towingtractor.p3d", [12055.5, 12612.8, 160.145], [0.0710381, -0.997474, 0], [0, 0, 1]],
["a3\soft_f_exp\offroad_02\offroad_02_f.p3d", [9634.1, 10427.5, 183.473], [-0.991292, 0.0713162, -0.110695], [-0.0967787, 0.17547, 0.979716]],
["cup\airvehicles\cup_airvehicles_uh1h\cup_uh1h.p3d", [3703.79, 5969.19, 404.386], [0.0231335, -0.999732, 0], [0, 0, 1]],
["a3\supplies_f_heli\cargonets\cargonet_01_ammo_f.p3d", [3706.86, 5985.8, 402.825], [0, 1, 0], [0, 0, 1]],
["a3\structures_f\ind\cargo\cargobox_v1_f.p3d", [3707.59, 5988.29, 402.732], [0, 1, 0], [0, 0, 1]],
["a3\weapons_f\ammoboxes\ammoveh_f.p3d", [3689.71, 5990.48, 402.79], [-0.801902, 0.597455, 0], [0, 0, 1]],
["a3\weapons_f\ammoboxes\ammobox_f.p3d", [3688.55, 5992.45, 402.284], [-0.843586, 0.536994, 0], [0, 0, 1]],
["a3\structures_f_heli\items\luggage\plasticcase_01_medium_f.p3d", [3688.11, 5993.67, 402.194], [-0.958427, 0.285336, 0], [0, 0, 1]],
["a3\weapons_f_bootcamp\ammoboxes\itembox_02_f.p3d", [3688.32, 5996.02, 403.199], [0, 1, 0], [0, 0, 1]],
["a3\weapons_f\ammoboxes\wpnsbox_f.p3d", [3694.67, 6001.43, 402.189], [0, 1, 0], [0, 0, 1]],
["a3\weapons_f\ammoboxes\supplydrop.p3d", [3692.5, 5983.62, 402.892], [0, 1, 0], [0, 0, 1]],
["a3\weapons_f\ammoboxes\supplydrop.p3d", [3693.13, 5982.45, 402.892], [0, 1, 0], [0, 0, 1]],
["a3\weapons_f\ammoboxes\supplydrop.p3d", [3693.9, 5981.36, 402.892], [0, 1, 0], [0, 0, 1]],
["a3\supplies_f_heli\slingload\slingload_01_medevac_f.p3d", [3722.65, 5994.13, 403.359], [0, 1, 0], [0, 0, 1]],
["a3\structures_f\civ\market\sacks_heap_f.p3d", [3706.43, 6001.09, 402.391], [0, 1, 0], [0, 0, 1]],
["a3\structures_f\civ\market\crateswooden_f.p3d", [3711.36, 6005.7, 402.739], [-0.742974, 0.66932, 0], [0, 0, 1]],
["a3\air_f_heli\heli_transport_04\pod_heli_transport_04_ammo_f.p3d", [3678.95, 5992.06, 412.104], [0.940145, 0.340775, 0], [0, 0, 1]],
["a3\static_f_gamma\hmg_01\hmg_01_high_f.p3d", [3685.65, 5991.64, 412.631], [-0.998263, -0.058922, 0], [0, 0, 1]],
["a3\soft_f_orange\van_02\van_02_vehicle_f.p3d", [4441.32, 6460.85, 299.085], [-0.969413, 0.245418, -0.0027758], [-0.00268933, 0.000687497, 0.999996]],
["ca\buildings\furniture\ammobednax.p3d", [4380.56, 2543.37, 6.68533], [0.648374, 0.761287, 0.00736623], [-0.00666818, -0.00399657, 0.99997]],
["ca\buildings\furniture\ammobednax.p3d", [4380.66, 2543.39, 7.1002], [0.648374, 0.761287, 0.00736623], [-0.00666818, -0.00399657, 0.99997]],
["cup\wheeledvehicles\cup_wheeledvehicles_stryker\cup_m1133_mev.p3d", [4385.79, 2535.87, 6.87866], [0.681717, 0.731616, 0], [0, 0, 1]],
["cup\wheeledvehicles\cup_wheeledvehicles_v3s\cup_v3s_repair.p3d", [4392.23, 2542.79, 8.66725], [-0.999838, 0.0179901, 0], [0, 0, 1]],
["ca\misc\barels.p3d", [9708.63, 6537.8, 209.53], [-0.8319, 0.554926, 0], [0, 0, 1]],
["a3\structures_f\mil\bagfence\bagfence_long_f.p3d", [4399.9, 2542.39, 8.92816], [0.831809, -0.555062, 0], [0, 0, 1]],
["a3\structures_f\mil\bagfence\bagfence_long_f.p3d", [4375.19, 2534.88, 10.0443], [0.518956, 0.854765, 0.00779297], [0.853223, -0.518531, 0.0560008]],
["ca\structures\wall\wall_gate_ind2rail_l.p3d", [9695.04, 6530.69, 213.741], [0.0572292, 0.998361, 0.000683039], [-0.997969, 0.0571875, 0.028065]]
];

{
    private _simpleObject = createSimpleObject [_x select 0, _x select 1];
    _simpleObject setVectorDirAndUp [_x select 2, _x select 3];
    
    {
        if ((toLower _x) in _invisibleSelections) then 
        {
            _simpleObject hideSelection [_x, true];
        };
    }
    forEach (selectionNames _simpleObject);
}
forEach _simpleObjects;

call compile preprocessfilelinenumbers "SA_AdvancedTowing\functions\fn_advancedTowingInit.sqf";