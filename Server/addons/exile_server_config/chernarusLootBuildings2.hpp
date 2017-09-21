//Class loot tables for map assets on Chernarus and all AiA, CUP maps
//Special thanks to maca134 for his Arma 3 - M3Editor, Spear for updating the original tool by Eichi, maca for their loot position script and Johnson11B2P for his teleport function. 
//Apologizes in advance, there may be some buildings that are still missing a loot spawn i will update this over time as i discover them
//
//Will be going in with editor at a later stage to include all Arma2 buildings
//
//For all questions please email me at valuakgaming@gmail.com
//
//Change log
// v1.0 - Default Arma 2 Buildings added using Chernarus   

class Land_Ss_hangar  //Arma 2 building
{
	table = "Military";
	positions[] = { { -11.6875, -7.59375, -5.87253 }, { 10.8643, 10.8623, -5.87253 }, { 9.45996, -7.06055, -5.87253 }, { -8.25684, 12.8994, -5.87253 } };
};

class Land_Mil_Barracks_i  //Arma 2 building
{
	table = "Military";
	positions[] = { { 5.12012, -1.7373, -1.09824 }, { -4.85986, -0.93457, -1.09824 }, { 1.62402, 2.10938, -1.09824 }, { -7.90967, -1.89258, -1.09824 }, { -1.62207, -0.856445, -1.09824 }, { 1.66748, -1.19922, -1.09824 }, { 8.48584, 2.08008, -1.32767 }, { 5.31592, 2.13184, -1.09824 }, { -6.63818, 2.06055, -1.09824 } };
};

class Land_Hlidac_budka  //Arma 2 building
{
	table = "Military";
	positions[] = { { -1.13062, 0.719727, -0.78363 } };
};

class Land_Vez //Arma 2 building
{
	table = "Military";
	positions[] = { { -0.0712891, 0.960449, 1.36331 } };
};

class Land_a_stationhouse //Arma 2 building
{
	table = "Military";
	positions[] = { { -3.59229, -6.02734, -4.6489 }, { -1.69141, -7.79492, -9.47058 }, { 14.0068, 2.0332, -9.47058 }, { 17.8848, -5.42773, -9.47058 }, { -1.59326, -7.91797, -0.0437927 }, { -1.3916, -6.87598, 4.41138 }, { 1.96143, -0.527344, -9.47058 } };
};

class Land_Mil_ControlTower //Arma 2 building
{
	table = "Military";
	positions[] = { { -0.0849609, 1.46973, -1.05695 }, { 3.80273, -0.116211, -1.0687 }, { 4.25293, 6.01611, -1.05695 }, { 6.86133, 2.7041, -1.0687 }, { 9.62207, 2.08301, -1.05695 }, { 9.53418, 4.43945, -9.62869 }, { 2.78809, 4.41699, -5.46371 }, { 5.37891, -3.99854, -1.05695 } };
};

/*class Land_NAV_Lighthouse //Arma 2 building
{
	table = "Tourist";
	positions[] = { { -0.0666504, -1.125, 2.41912 } };
};*/

class Land_NAV_Lighthouse //Arma 2 building
{
	table = "Tourist";
	positions[] = { { 1.7373, 0.853516, 8.76694 }, { 1.33105, 0.795898, 16.8498 }, { 0.455078, -1.07666, -2.8364 } };
};

class Land_A_Castle_Gate //Arma 2 building
{
	table = "Tourist";
	positions[] = { { 5.1748, 1.55029, -2.94867 } };
};

class Land_A_Hospital //Arma 2 building
	{
		table = "Medical";
		positions[] = { { 8.95557, -3.39966, -7.33966 }, { 0.192871, -1.23413, -7.33966 }, { -12.2339, -2.72729, -7.33966 } };
	};

class Land_Repair_center //Arma 2 building
	{
		table = "VehicleService";
		positions[] = { { -2.87305, 2.8208, -1.52844 } };
	};

class Land_A_FuelStation_Shed //Arma 2 building
	{
		table = "VehicleService";
		positions[] = { { -7.10645, 1.4585, -2.84543 }, { 0.00195313, -2.04443, -2.8454 }, { -4.76465, -4.56738, -0.557556 } };
	};

class Land_A_FuelStation_Build //Arma 2 building
	{
		table = "VehicleService";
		positions[] = { { 0.143311, 1.10352, -1.57458 } };
	};

class Land_HouseV_1L1 //Arma 2 building
	{
		table = "CivillianLowerClass";
		positions[] = { { -0.107422, 5.80054, -1.10619 } };
	};

class Land_houseV_2T2 //Arma 2 building
	{
		table = "CivillianLowerClass";
		positions[] = { { -3.4375, 1.12109, -4.03522 } };
	};

class Land_HouseV_1I1 //Arma 2 building
	{
		table = "CivillianLowerClass";
		positions[] = { { 0.302734, -2.05469, -2.82256 } };
	};

class Land_PowLines_WoodL //Arma 2 building
	{
		table = "CivillianLowerClass";
		positions[] = { { 10.6494, 0.648193, -3.37357 } };
	};

class Land_HouseV2_05 //Arma 2 building
	{
		table = "CivillianLowerClass";
		positions[] = { { -3.72021, -0.360352, -2.93637 } };
	};

class Land_Panelak //Arma 2 building
	{
		table = "CivillianLowerClass";
		positions[] = { { -2.66895, -1.46338, 2.77145 }, { 3.47412, 2.67285, 0.0714235 }, { -5.32373, 3.28711, 0.0714235 }, { 2.81299, -0.82373, 0.0714235 }, { -3.11768, -5.20801, 0.0714226 }, { 5.56982, -0.410156, 0.0714235 }, { -4.2959, 3.83154, 2.77145 }, { 4.6604, 3.31152, 2.77145 }, { 5.31079, -4.20801, 2.77145 }, { 6.25879, -0.278809, 2.77145 }, { 3.33057, -5.69043, 0.0714235 }, { -3.44141, -5.60693, 2.77145 }, { 2.99341, -0.78418, 2.77145 }, { 3.04443, -4.64209, 2.77145 } };
	};

class Land_Panelak2 //Arma 2 building
	{
		table = "CivillianLowerClass";
		positions[] = { { 6.75195, -4.03516, 5.43665 }, { 6.04736, -3.6626, 8.32585 }, { 0.646973, 4.36035, -1.37137 }, { 0.518555, 4.21191, 4.05244 }, { -5.05591, -5.38086, 8.32585 }, { 0.473145, 3.77832, 1.32864 }, { 2.54248, -0.0859375, 5.43665 }, { 3.40576, -4.14746, 5.43665 }, { -6.51953, 2.28516, 8.32585 }, { 3.2124, 3.2666, 5.43665 }, { 5.91162, -1.45288, 5.68777 }, { 2.771, -2.35278, 8.57697 } };
	};

class Land_HouseV2_03B //Arma 2 building
	{
		table = "CivillianUpperClass";
		positions[] = { { 0.208008, -8.84961, -5.49231 }, { 8.03467, 1.08203, -5.48694 } };
	};

class Land_Psi_bouda //Arma 2 building
	{
		table = "CivillianUpperClass";
		positions[] = { { 1.34473, -4.42969, 0.341339 } };
	};

class Land_HouseV2_01B //Arma 2 building
	{
		table = "CivillianUpperClass";
		positions[] = { { -3.31665, -3.0752, -5.42072 } };
	};

class Land_HouseV_1I4 //Arma 2 building
	{
		table = "CivillianUpperClass";
		positions[] = { { -0.273438, -4.55151, -2.76816 }, { -0.271484, 3.45801, -2.71942 }, { -3.92285, -2.04102, -2.76526 } };
	};

class Land_HouseV_2L //Arma 2 building
	{
		table = "CivillianUpperClass";
		positions[] = { { 4.54419, 1.87305, -3.92705 } };
	};

class Land_HouseV2_02_Interier //Arma 2 building
	{
		table = "CivillianUpperClass";
		positions[] = { { -6.47925, 5.71191, -5.53067 }, { 0.126465, 2.23047, -5.53067 }, { -4.36304, -0.15918, -5.53067 }, { 4.69092, 5.30273, -5.53067 }, { 7.99487, -0.736328, -5.53067 } };
	};

class Land_HouseV2_04_interier //Arma 2 building
	{
		table = "CivillianUpperClass";
		positions[] = { { 1.68066, 4.0249, -5.73941 }, { -3.66602, 4.51611, -5.73926 }, { 6.91406, 2.11475, -5.74051 } };
	};

class Land_A_Office01 //Arma 2 building
	{
		table = "CivillianUpperClass";
		positions[] = { { -6.76733, 5.03418, -2.02802 }, { 2.58008, 5.76465, -2.02802 }, { -2.20996, 4.36426, 0.471985 }, { 9.25342, 4.58008, -4.52802 }, { 1.92896, 6.04199, -4.52802 } };
	};

class Land_Church_03 //Arma 2 building
	{
		table = "CivillianUpperClass";
		positions[] = { { 10.0747, -0.820313, -13.7548 }, { -1.60718, -5.92871, -14.3026 }, { 5.19409, 6.38867, -14.3016 } };
	};

class Land_Misc_deerstand //Arma 2 building
{
	table = "CivillianUpperClass";
	positions[] = { { -0.491211, -0.810547, 1.08539 }, { 0.643555, 0.319336, 1.08539 }, { 0.704102, -1.18262, 1.08539 } };
}

class Land_A_GeneralStore_01a //Arma 2 building
{
	table = "Shop";
	positions[] = { { 11.4668, 8.48438, -1.20154 }, { 11.3176, 2.0293, -1.20154 }, { 5.6438, 8.49512, -1.20154 }, { -7.02905, 7.89941, -1.20154 }, { -7.16162, 1.4248, -1.20154 }, { 2.9458, 2.32422, -1.20154 }, { 12.1079, -3.52344, -1.20154 }, { -1.56226, -2.11035, -1.20151 }, { -6.25342, -3.18848, -1.20154 }, { 2.94189, -4.42676, -1.20151 } };
};

class Land_Ind_Workshop01_04 //Arma 2 building
{
	table = "Industrial";
	positions[] = { { 0.0566406, 3.19531, -1.53085 }, { -0.149414, -4.81592, -1.52875 } };
};

class Land_Ind_Workshop01_01 //Arma 2 building
{
	table = "Industrial";
	positions[] = { { 0.765625, -0.626953, -1.29517 } };
};

class Land_Ind_Workshop01_L //Arma 2 building
{
	table = "Industrial";
	positions[] = { { -1.80713, 3.24316, -1.30453 }, { 2.14502, -2.97852, -1.31409 } };
};

class Land_Ind_Garage01 //Arma 2 building
{
	table = "Industrial";
	positions[] = { { 0.505859, 0.980469, -1.23203 } };
};

class Land_Hut06 //Arma 2 building
{
	table = "Industrial";
	positions[] = { { 0.257813, 1.07324, -1.56909 } };
};

class Land_Kulna //Arma 2 building
{
	table = "Industrial";
	positions[] = { { -0.0292969, 1.3916, -1.05414 } };
};

class Land_Shed_W01 //Arma 2 building
{
	table = "Industrial";
	positions[] = { { -1.7002, -0.279297, -1.40579 } };
};

class Land_Ind_Workshop01_02 //Arma 2 building
{
	table = "Industrial";
	positions[] = { { 0.436035, 0.40332, -1.42786 } };
};

class Land_Stodola_old_open //Arma 2 building
{
	table = "Industrial";
	positions[] = { { -3.09033, -0.45166, -5.08057 }, { -1.84717, 5.98926, -0.99353 }, { 0.949219, 10.7388, 2.96445 }, { 3.43018, -10.8672, -5.08057 }, { -1.47119, -8.81689, -5.08057 }, { 4.23877, 1.05371, -5.08057 }, { -2.5498, -6.96924, -1.01736 }, { 1.32129, -10.3999, 2.96448 } };
};

class Land_Stodola_open //Arma 2 building
{
	table = "Industrial";
	positions[] = { { 0.219238, -4.72839, -4.13904 }, { -2.33252, 5.23584, -4.12955 } };
};

class Land_A_BuildingWIP //Arma 2 building
{
	table = "Industrial";
	positions[] = { { -22.1655, 4.375, -6.40783 }, { -22.061, -2.10107, -6.4605 }, { -13.0605, -7.1001, -6.49466 }, { -23.1328, -7.44922, -6.50757 }, { -18.5962, -3.32031, 1.49111 }, { -22.1396, 1.49316, -2.53182 }, { -16.2454, -15.9785, -6.51616 }, { -17.3708, -3.5293, 5.40654 }, { -21.9832, -8.43848, -2.53184 }, { -22.3374, 8.6792, -2.53182 }, { -22.1504, 10.9204, -6.45286 }, { 0.763428, 9.64746, -2.53182 }, { -17.4395, 7.78125, 1.49284 }, { 2.24365, 9.09863, -6.43437 }, { 7.78662, 0.144531, -6.47386 }, { 7.09277, 4.24268, -6.42984 }, { 1.0498, 6.19043, 1.50811 }, { 1.6582, -3.69043, 1.49214 }, { -2.99121, -6.99463, -2.53275 }, { 14.207, -2.0166, -2.53182 }, { 0.978027, -6.6875, 5.43087 }, { 20.0039, 0.415039, -6.53185 }, { -0.00585938, 5.19531, 5.45116 } };
};

class Land_Hangar_2 //Arma 2 building
{
	table = "Factories";
	positions[] = { { 7.80713, 5.39453, -2.5632 }, { -10.3467, 5.26563, -2.5632 }, { 10.4692, -4.87305, -2.5632 }, { -11.1665, -6.11035, -2.5632 } };
};

class Land_Shed_Ind02 //Arma 2 building
{
	table = "Factories";
	positions[] = { { -0.704102, 12.0645, -1.27689 }, { 4.59912, -1.93945, -1.27722 }, { -1.82422, -3.91504, -4.62601 }, { -0.0439453, 3.19336, -4.62601 }, { -3.729, -0.321289, -1.28528 } };
};

class Land_Barn_W_01 //Arma 2 building
{
	table = "Factories";
	positions[] = { { -2.94336, -15.5039, -2.63092 }, { -1.66113, 12.7441, -2.37573 }, { 3.31152, -4.49121, -2.63281 } };
};

class Land_Barn_Metal //Arma 2 building
{
	table = "Factories";
	positions[] = { { -5.16504, 18.8345, -5.44212 }, { 6.41113, -20.7295, -5.44214 }, { -6.08789, -19.7676, -5.44215 }, { 7.54004, 18.6104, -5.44214 } };
};

class Land_Farm_Cowshed_c //Arma 2 building
{
	table = "Factories";
	positions[] = { { 0.672852, 1.84033, -3.12585 }, { 10.6377, -0.09375, -3.1011 }, { 6.79492, 6.15015, -3.08765 }, { 6.56543, -0.00292969, -3.08765 }, { 8.05762, -0.946289, -3.1011 }, { 3.77637, -5.50903, -3.08765 } };
};