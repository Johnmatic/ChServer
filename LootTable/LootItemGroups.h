/*
	________   _______ _      ______    __  __  ____  _____  
	|  ____\ \ / /_   _| |    |  ____|  |  \/  |/ __ \|  __ \ 
	| |__   \ V /  | | | |    | |__     | \  / | |  | | |  | |
	|  __|   > <   | | | |    |  __|    | |\/| | |  | | |  | |
	| |____ / . \ _| |_| |____| |____   | |  | | |__| | |__| |
	|______/_/ \_\_____|______|______|  |_|  |_|\____/|_____/ 
                                                          
  	^ Leet ASCII art. For documentation, refer to:

  	http://www.exilemod.com/wiki/developer-toolbox/loot-table-compiler/
*/
	
///////////////////////////////////////////////////////////////////////////////
// Food & Drinks
///////////////////////////////////////////////////////////////////////////////

> Food
1, Exile_Item_CookingPot
5, Exile_Item_CanOpener
1, Exile_Item_Matches
5, Exile_Item_EMRE						// 75% Hunger
6, Exile_Item_GloriousKnakworst			// 60% Hunger
7, Exile_Item_Surstromming				// 55% Hunger
7, Exile_Item_SausageGravy				// 50% Hunger
7, Exile_Item_ChristmasTinner			// 40% Hunger
7, Exile_Item_MacasCheese				// 40% Hunger
7, Exile_Item_BBQSandwich				// 40% Hunger
7, Exile_Item_CatFood					// 40% Hunger
7, Exile_Item_Dogfood					// 30% Hunger
7, Exile_Item_BeefParts					// 30% Hunger
7, Exile_Item_Cheathas					// 30% Hunger
7, Exile_Item_DsNuts					// 30% Hunger
7, Exile_Item_Noodles					// 25% Hunger
8, Exile_Item_CockONut					// 20% Hunger
8, Exile_Item_SeedAstics				// 20% Hunger
9, Exile_Item_Raisins					// 15% Hunger
9, Exile_Item_Moobar					// 10% Hunger
0, Exile_Item_InstantCoffee				//  5% Hunger

> Drinks
1, Exile_Item_Beer							// +75% Thirst
1, Exile_Item_EnergyDrink					// +75% Thirst
1, Exile_Item_PlasticBottleFreshWater		// +80% Thirst
1, Exile_Item_PowerDrink					// +95% Thirst
2, Exile_Item_MountainDupe					// +50% Thirst, spawns always twice!	
2, Exile_Item_ChocolateMilk					// +35% Thirst
3, Exile_Item_PlasticBottleDirtyWater		// +10% Thirst

///////////////////////////////////////////////////////////////////////////////
// Weapons & Attachments
///////////////////////////////////////////////////////////////////////////////

> Pistols
1, Exile_Weapon_Colt1911   	// Colt 1911
1, Exile_Weapon_Makarov		// Makarov
1, Exile_Weapon_Taurus		// Taurus
1, Exile_Weapon_TaurusGold	// Taurus (Gold)
1, hgun_P07_khk_F			// P07 9 mm (Khaki)
1, hgun_Pistol_01_F			// PM 9 mm
1, hgun_Pistol_heavy_01_F	// 4-five .45
1, hgun_Pistol_heavy_02_F	// Zubr .45
1, hgun_Pistol_Signal_F		// Starter Pistol
2, hgun_ACPC2_F				// ACP-C2 .45
2, hgun_P07_F				// P07 9 mm
2, hgun_Rook40_F			// Rook-40 9 mm
2, Exile_Weapon_SA61		// SA61


> PistolAmmo
1, 6Rnd_GreenSignal_F					// Starter Pistol
1, 6Rnd_RedSignal_F						// Starter Pistol 
1, 16Rnd_9x21_Mag						// PDW2000, P07, ROOK-40
2, 6Rnd_45ACP_Cylinder					// Zubr
4, 10Rnd_9x21_Mag						// PM 9 mm
4, 11Rnd_45ACP_Mag						// 4-five
4, 30Rnd_9x21_Mag						// Sting, PDW2000, P07, ROOK-40
4, 9Rnd_45ACP_Mag						// ACP-C2
4, Exile_Magazine_6Rnd_45ACP			// Taurus
4, Exile_Magazine_7Rnd_45ACP			// Colt 1911
4, Exile_Magazine_8Rnd_9x18				// Makarov
4, Exile_Magazine_10Rnd_765x17_SA61		// SA61
4, Exile_Magazine_20Rnd_765x17_SA61		// SA61

> PistolAttachments
1, optic_MRD
1, optic_Yorris		// No one needs this crap
2, muzzle_snds_acp
2, muzzle_snds_L

> Shotguns
4, Exile_Weapon_M1014	//M1014
1, CUP_sgun_AA12		//AA12
4, CUP_sgun_Saiga12K	//SAIGA

> ShotgunAmmo
1, Exile_Magazine_8Rnd_74Slug		//M1014

> SMG
1, SMG_01_F		// Vermin SMG .45 ACP
1, SMG_02_F		// Sting 9 mm
1, SMG_05_F		// Protector 9mm
1, hgun_PDW2000_F	// PDW2000 9 mm
1, CUP_hgun_MicroUzi	
1, CUP_hgun_MicroUzi_snds
1, CUP_hgun_SA61
1, CUP_smg_bizon
1, CUP_smg_bizon_snds
1, CUP_smg_EVO
1, CUP_smg_EVO_MRad_Flashlight
1, CUP_smg_EVO_MRad_Flashlight_Snds
1, CUP_smg_MP5A5
1, CUP_smg_MP5SD6


> SMGAmmo
1, 30Rnd_45ACP_Mag_SMG_01					// Vermin SMG
1, 30Rnd_45ACP_Mag_SMG_01_Tracer_Green		// Vermin SMG
1, 30Rnd_9x21_Mag_SMG_02					// Sting, Protector
1, 30Rnd_9x21_Mag_SMG_02_Tracer_Red        // Sting, Protector
1, 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow     // Sting, Protector
1, 30Rnd_9x21_Mag_SMG_02_Tracer_Green      // Sting, Protector

> SMGAttachments
1, optic_Holosight_smg
1, optic_Holosight_smg_blk_F
1, optic_ACO_grn_smg
1, optic_Aco_smg
1, optic_ACO_grn
1, optic_Aco

> Rifles
1, arifle_Katiba_GL_F										// Katiba GL 6.5 mm
2, arifle_Mk20_GL_F											// Mk20 EGLM 5.56 mm
1, arifle_MX_GL_Black_F										// MX 3GL 6.5 mm (Black)
1, arifle_MX_GL_F											// MX 3GL 6.5 mm
1, arifle_MXM_F												// MXM 6.5 mm
2, arifle_TRG21_GL_F										// TRG-21 EGLM 5.56 mm
2, Exile_Weapon_AK107_GL	
2, Exile_Weapon_AK74_GL
2, arifle_AK12_GL_F            								 // AK-12 GL 7.62 mm
2, arifle_AKM_F              							   	// AKM 7.62 mm
2, arifle_AKM_FL_F          							   	// AKM 7.62 mm
2, arifle_AKS_F              							  	// AKS
1, arifle_ARX_blk_F           							 	// Type 115 6.5 mm (Black)
1, arifle_ARX_ghex_F       								    // Type 115 6.5 mm (Green Hex)
1, arifle_ARX_hex_F             							// Type 115 6.5 mm (Hex)
2, arifle_CTAR_blk_F            							// CAR-95 5.8 mm (Black)
2, arifle_CTAR_ghex_F										// CAR-95 5.8 mm (Green Hex)
2, arifle_CTAR_GL_blk_F         							// CAR-95 GL 5.8 mm (Black)
2, arifle_CTAR_hex_F										// CAR-95 5.8 mm (Hex)
2, arifle_CTARS_blk_F          		 						// CAR-95-1 5.8mm (Black)
2, arifle_CTARS_ghex_F										// CAR-95-1 5.8mm (Green Hex)
2, arifle_CTARS_hex_F										// CAR-95-1 5.8mm (Hex)
1, arifle_Katiba_F											// Katiba 6.5 mm
2, arifle_Mk20_F											// Mk20 5.56 mm
2, arifle_Mk20C_F											// Mk20C 5.56 mm
1, arifle_MX_Black_F										// MX 6.5 mm (Black)
1, arifle_MX_F												// MX 6.5 mm
1, arifle_MXC_Black_F										// MXC 6.5 mm (Black)
1, arifle_MXC_F												// MXC 6.5 mm
1, arifle_MXM_Black_F										// MXM 6.5 mm (Black)
2, arifle_SDAR_F											// SDAR 5.56 mm
2, arifle_SPAR_01_blk_F         							// SPAR-16 5.56 mm (Black)
2, arifle_SPAR_01_GL_blk_F      							// SPAR-16 GL 5.56 mm (Black)
2, arifle_SPAR_01_GL_khk_F      							// SPAR-16 GL 5.56 mm (Khaki)
2, arifle_SPAR_01_GL_snd_F      							// SPAR-16 GL 5.56 mm (Sand)
2, arifle_SPAR_01_khk_F         							// SPAR-16 5.56 mm (Khaki)
2, arifle_SPAR_01_snd_F         							// SPAR-16 5.56 mm (Sand)
2, arifle_SPAR_02_blk_F         							// SPAR-16S 5.56 mm (Black)
2, arifle_SPAR_02_khk_F         							// SPAR-16S 5.56 mm (Khaki)
2, arifle_SPAR_02_snd_F         							// SPAR-16S 5.56 mm (Sand)
1, arifle_SPAR_03_blk_F         							// SPAR-17 7.62 mm (Black)
1, arifle_SPAR_03_khk_F         							// SPAR-17 7.62 mm (Khaki)
1, arifle_SPAR_03_snd_F         							// SPAR-17 7.62 mm (Sand)
2, arifle_TRG20_F											// TRG-20 5.56 mm
2, arifle_TRG21_F											// TRG-21 5.56 mm
2, Exile_Weapon_AK107	
2, Exile_Weapon_AK74
1, Exile_Weapon_DMR		
1, arifle_MXM_khk_F  										// MXM 6.5 mm (Khaki)
2, Exile_Weapon_AK47				
1, Exile_Weapon_AKS_Gold	
1, Exile_Weapon_SVD
1, Exile_Weapon_SVDCamo
1, Exile_Weapon_VSSVintorez
1, arifle_MX_GL_khk_F										// MX 3GL 6.5 mm (Khaki)
2, arifle_AK12_F          									// AK-12 7.62 mm
1, Exile_Weapon_CZ550
1, arifle_MX_khk_F   										// MX 6.5 mm (Khaki)
1, arifle_MXC_khk_F  										// MXC 6.5 mm (Khaki)
2, Exile_Weapon_M4											// M4
2, Exile_Weapon_M16A4										// M16A4
2, Exile_Weapon_M16A2										// M16A2
2, Exile_Weapon_LeeEnfield
1, CUP_srifle_CZ750											//CZ750
0, CUP_srifle_CZ750_SOS_bipod								//CZ750
2, CUP_arifle_AK107											//AK107
2, CUP_arifle_AK107_GL										//AK107
0, CUP_arifle_AK107_GL_kobra								//AK107
0, CUP_arifle_AK107_GL_pso									//AK107
0, CUP_arifle_AK107_kobra									//AK107
0, CUP_arifle_AK107_pso										//AK107
1, CUP_arifle_AK47											//AK47
2, CUP_arifle_AK74											//AK74
1, CUP_arifle_AK74_GL										//AK74
0, CUP_arifle_AK74_GL_kobra									//AK74
2, CUP_arifle_AK74M											//AK74M
2, CUP_arifle_AK74M_GL										//AK74
0, CUP_arifle_AK74M_GL_kobra								//AK74
0, CUP_arifle_AK74M_GL_pso									//AK74
0, CUP_arifle_AK74M_kobra									//AK74
0, CUP_arifle_AK74M_pso										//AK74
1, CUP_arifle_AKM											//AKM
1, CUP_arifle_AKS											//AKS74
0, CUP_arifle_AKS74_Goshawk									//AKS74
0, CUP_arifle_AKS74_kobra									//AKS74
0, CUP_arifle_AKS74_NSPU									//AKS74
0, CUP_arifle_AKS74_pso										//AKS74
2, CUP_arifle_AKS74U										//AKS74U
0, CUP_arifle_AKS74UN_kobra_snds							//AK474
1, CUP_arifle_AKS_Gold										//ROSYJSKI OLIGARCHA
2, CUP_arifle_CZ805_A1										//CZ805 5,56
0, CUP_arifle_CZ805_A1_Aco_Laser							//CZ805 5,56
0, CUP_arifle_CZ805_A1_Holo_Laser							//CZ805 5,56
0, CUP_arifle_CZ805_A1_MRCO_Laser							//CZ805 5,56
0, CUP_arifle_CZ805_A1_ZDDot_Laser							//CZ805 5,56
2, CUP_arifle_CZ805_A2										//CZ805 5,56
0, CUP_arifle_CZ805_A2_Aco_Laser							//CZ805 5,56
0, CUP_arifle_CZ805_A2_Holo_Laser							//CZ805 5,56
0, CUP_arifle_CZ805_A2_MRCO_Laser							//CZ805 5,56
0, CUP_arifle_CZ805_A2_ZDDot_Flashlight_Snds				//CZ805 5,56
1, CUP_arifle_CZ805_B										//CZ805 7,62
1, CUP_arifle_CZ805_B_GL									//CZ805GL 7,62
1, CUP_arifle_CZ805_GL										//CZ805GL 5,56
0, CUP_arifle_CZ805_GL_Hamr_Laser							//CZ805GL 5,56
0, CUP_arifle_CZ805_GL_ZDDot_Laser							//CZ805 5,56
0, CUP_arifle_CZ805B_GL_ACOG_Laser							//CZ805 7,62
1, CUP_arifle_FNFAL											//FNFAL 7,62
1, CUP_arifle_FNFAL5061										//FAFAL 7,62
1, CUP_arifle_FNFAL5062										//FNFAL 7,62
0, CUP_arifle_FNFAL_ANPVS4									//FNFAL 7,62
1, CUP_arifle_FNFAL_OSW										//FNFAL 7,62
1, CUP_arifle_FNFAL_railed									//FNFAL 7,62
0, CUP_arifle_G36A											//G36A 5,56
0, CUP_arifle_G36A_camo										//G36A 5,56
2, CUP_arifle_G36C											//G36C 5,56
2, CUP_arifle_G36C_camo										//G36C 5,56
0, CUP_arifle_G36C_camo_holo_snds							//G36C 5,56
0, CUP_arifle_G36C_holo_snds								//G36C 5,56
0, CUP_arifle_G36K											//G36K 5,56
0, CUP_arifle_G36K_camo										//G36K 5,56
2, CUP_arifle_L85A2											//L85A2 5,56
0, CUP_arifle_L85A2_ACOG_Laser								//L85A2 5,56
0, CUP_arifle_L85A2_CWS_Laser								//L85A2 5,56
2, CUP_arifle_L85A2_G										//L85A2 5,56
2, CUP_arifle_L85A2_GL										//L85A2GL 5,56
0, CUP_arifle_L85A2_GL_ACOG_Laser							//L85A2 5,56
0, CUP_arifle_L85A2_GL_Holo_Laser							//L85A2 5,56
0, CUP_arifle_L85A2_GL_SUSAT_Laser							//L85A2 5,56
0, CUP_arifle_L85A2_Holo_laser								//L85A2 5,56
2, CUP_arifle_L85A2_NG										//L85A2 5,56
0, CUP_arifle_L85A2_SUSAT_Laser								//L85A2 5,56
2, CUP_arifle_L86A2											//L85A2 5,56
0, CUP_arifle_L86A2_ACOG									//L85A2 5,56
2, CUP_arifle_M16A2											//M16A2 5,56
2, CUP_arifle_M16A2_GL										//M16A2 5,56
0, CUP_arifle_M16A4_ACOG_Laser								//M16A2 5,56
0, CUP_arifle_M16A4_Aim_Laser								//M16A2 5,56
2, CUP_arifle_M16A4_Base									//M16A4 5,56
2, CUP_arifle_M16A4_GL										//M16A4 5,56
0, CUP_arifle_M16A4_GL_ACOG_Laser 							//M16A4 5,56
2, CUP_arifle_M16A4_GL_Laser								//M16A4GL 5,56
2, CUP_arifle_M4A1											//M4A1 5,56
0, CUP_arifle_M4A1_Aim										//M4A1 5,56
0, CUP_arifle_M4A1_Aim_Laser_snds							//M4A1 5,56
2, CUP_arifle_M4A1_black									//M4A1 5,56
0, CUP_arifle_M4A1_BUIS_camo_GL								//M4A1GL 5,56
0, CUP_arifle_M4A1_BUIS_desert_GL							//M4A1GL 5,56
0, CUP_arifle_M4A1_BUIS_GL									//M4A1GL 5,56
2, CUP_arifle_M4A1_camo										//M4A1 5,56
0, CUP_arifle_M4A1_camo_Aim									//M4A1 5,56
0, CUP_arifle_M4A1_camo_AIM_snds							//M4A1 5,56
0, CUP_arifle_M4A1_camo_GL_Holo_Flashlight					//M4A1GL 5,56
0, CUP_arifle_M4A1_camo_GL_Holo_Flashlight_Snds				//M4A1GL 5,56
2, CUP_arifle_M4A1_desert									//M4A1 5,56
0, CUP_arifle_M4A1_GL_ACOG_Flashlight 						//M4A1GL 5,56
0, CUP_arifle_M4A1_GL_Holo_Flashlight						//M4A1GL 5,56
0, CUP_arifle_M4A1_Holo										//M4A1 5,56
0, CUP_arifle_M4A1_Holo_Laser								//M4A1 5,56
0, CUP_arifle_M4A1_LeupoldMk4CQT_Laser						//M4A1 5,56
0, CUP_arifle_M4A1_LeupoldMk4MRT							//M4A1 5,56
0, CUP_arifle_M4A1_M203_ACOG_Laser							//M4A1 5,56
0, CUP_arifle_M4A1_M203_ANPAS13c1_Laser 					//M4A1 5,56
0, CUP_arifle_M4A1_M203_Holo_Laser							//M4A1 5,56
2, CUP_arifle_M4A3_desert									//M4A3 5,56
0, CUP_arifle_M4A3_desert_Aim_Flashlight 					//M4A3 5,56
0, CUP_arifle_M4A3_desert_GL_ACOG_Laser	 					//M4A3 5,56
2, CUP_arifle_MG36											//MG36 5,56
2, CUP_arifle_MG36_camo										//MG36 5,56
0, CUP_arifle_MG36_camo_holo								//MG36 5,56
0, CUP_arifle_MG36_holo										//MG36 5,56
2, CUP_arifle_Mk16_CQC										//MK16 5,56
2, CUP_arifle_Mk16_CQC_EGLM									//MK16GL 5,56
0, CUP_arifle_Mk16_CQC_EGLM_Holo_Laser_mfsup				//MK16GL 5,56
2, CUP_arifle_Mk16_CQC_FG									//MK16 5,56
0, CUP_arifle_Mk16_CQC_FG_Aim_Laser_snds					//MK16 5,56
2, CUP_arifle_Mk16_CQC_SFG									//MK16 5,56
0, CUP_arifle_Mk16_CQC_SFG_Holo								//MK16 5,56
0, CUP_arifle_Mk16_LeupoldMk4MRT							//MK16 5,56
2, CUP_arifle_Mk16_STD										//MK16 5,56
2, CUP_arifle_Mk16_STD_EGLM									//MK16GL 5,56
0, CUP_arifle_Mk16_STD_EGLM_ACOG_Laser						//MK16GL 5,56
0, CUP_arifle_Mk16_STD_EGLM_ANPAS13c1_Laser_mfsup			//MK16GL 5,56
2, CUP_arifle_Mk16_STD_FG									//MK16 5,56
0, CUP_arifle_Mk16_STD_FG_Holo_Laser						//MK16 5,56
0, CUP_arifle_Mk16_STD_FG_LeupoldMk4CQT_Laser				//MK16 5,56
2, CUP_arifle_Mk16_STD_SFG									//MK16 5,56
2, CUP_arifle_Mk16_SV										//MK16 5,56
1, CUP_arifle_Mk17_CQC										//MK16 7,62
1, CUP_arifle_Mk17_CQC_EGLM									//MK16GL 7,62
1, CUP_arifle_Mk17_CQC_FG									//MK16 7,62
1, CUP_arifle_Mk17_CQC_SFG									//MK16 7,62
0, CUP_arifle_Mk17_CQC_SFG_Aim_mfsup						//MK17 7,62
1, CUP_arifle_Mk17_STD										//MK17 7,62
0, CUP_arifle_Mk17_STD_EGL_ElcanSpecter_Laser				//MK17GL 7,62
1, CUP_arifle_Mk17_STD_EGLM									//MK17GL 7,62
1, CUP_arifle_Mk17_STD_FG									//MK17 7,62
0, CUP_arifle_Mk17_STD_FG_Aim_Laser_snds					//MK17 7,62
0, CUP_arifle_Mk17_STD_FG_ANPAS13c1_Laser_Snds				//MK17 7,62
1, CUP_arifle_Mk17_STD_SFG									//MK17 7,62
1, CUP_arifle_Mk20											//MK20 7,62
0, CUP_arifle_Mk20_LeupoldMk4MRT							//MK20 7,62
0, CUP_arifle_Mk20_SB11420_snds								//MK20 7,60
1, CUP_arifle_Sa58P											//SA58P 7,62
1, CUP_arifle_Sa58P_des										//SA58P 7,62
1, CUP_arifle_Sa58RIS1										//SA58R 7,62
0, CUP_arifle_Sa58RIS1_Aco_Laser							//SA58R 7,62
0, CUP_arifle_Sa58RIS1_camo_Aco_Laser						//SA58R 7,62
1, CUP_arifle_Sa58RIS1_des									//SA58R 7,62
1, CUP_arifle_Sa58RIS2										//SA58R 7,62
0, CUP_arifle_Sa58RIS2_Arco_Laser							//SA58R 7,62
1, CUP_arifle_Sa58RIS2_camo									//SA58R	7,62
0, CUP_arifle_Sa58RIS2_camo_Arco_Laser						//SA58R 7,62
1, CUP_arifle_Sa58RIS2_gl									//SA58RGL 7,62
1, CUP_arifle_Sa58V											//SA58V 7,62
0, CUP_arifle_Sa58V_ACOG_Laser								//SA58V 7,62
0, CUP_arifle_Sa58V_Aim_Laser								//SA58V 7,62
1, CUP_arifle_Sa58V_camo									//SA58V 7,62
0, CUP_arifle_XM8_Carbine									//XM8 5,56
0, CUP_arifle_XM8_Carbine_FG								//XM8 5,56
0, CUP_arifle_XM8_Carbine_GL								//XM8GL 5,56
0, CUP_arifle_XM8_Compact									//XM8 5,56
0, CUP_arifle_XM8_Compact_Holo_Flashlight					//XM8 5,56
2, CUP_arifle_XM8_Compact_Rail								//XM8 5,56
2, CUP_arifle_XM8_Railed									//XM8 5,56
0, CUP_arifle_XM8_Railed_ANPAS13c1_Laser					//XM8 5,56
0, CUP_arifle_XM8_Railed_ANPAS13c1_Laser_snds				//XM8 5,56
0, CUP_arifle_XM8_Railed_Holo_Laser_snds					//XM8 5,56
0, CUP_arifle_xm8_SAW										//XM8 5,56
0, CUP_arifle_xm8_sharpshooter								//XM8 5,56
1, CUP_srifle_M14											//M14 7,62



> RifleAmmo
1, 20Rnd_556x45_UW_mag						// SDAR
1, 30Rnd_556x45_Stanag						// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16
1, 30Rnd_556x45_Stanag_green				// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16
1, 30Rnd_556x45_Stanag_red					// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16
1, 30Rnd_556x45_Stanag_Tracer_Green			// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16
1, 30Rnd_556x45_Stanag_Tracer_Red			// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16
1, 30Rnd_556x45_Stanag_Tracer_Yellow		// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16
1, 30Rnd_65x39_caseless_green				// Katiba, Type 115
1, 30Rnd_65x39_caseless_green_mag_Tracer	// Katiba, Type 115
1, 30Rnd_65x39_caseless_mag					// MX/C/M/SW/3GL
1, 30Rnd_65x39_caseless_mag_Tracer			// MX/C/M/SW/3GL
1, Exile_Magazine_10Rnd_303					// Lee-Enfield
1, Exile_Magazine_30Rnd_762x39_AK			// AK
1, Exile_Magazine_30Rnd_545x39_AK			// AK
1, Exile_Magazine_30Rnd_545x39_AK_Green		// AK
1, Exile_Magazine_30Rnd_545x39_AK_Red		// AK
1, Exile_Magazine_30Rnd_545x39_AK_White		// AK
1, Exile_Magazine_30Rnd_545x39_AK_Yellow	// AK
1, Exile_Magazine_20Rnd_762x51_DMR			// DMR
1, Exile_Magazine_20Rnd_762x51_DMR_Yellow	// DMR
1, Exile_Magazine_20Rnd_762x51_DMR_Red		// DMR
1, Exile_Magazine_20Rnd_762x51_DMR_Green	// DMR
1, Exile_Magazine_20Rnd_762x51_DMR_White	// DMR
1, Exile_Magazine_5Rnd_22LR					// CZ550
1, Exile_Magazine_10Rnd_762x54				// SVD
1, Exile_Magazine_10Rnd_9x39				// VSS
1, Exile_Magazine_20Rnd_9x39				// VSS
1, 30Rnd_762x39_Mag_F						// AK-11, AKM
1, 30Rnd_762x39_Mag_Green_F                 // AK-11, AKM
1, 30Rnd_762x39_Mag_Tracer_F                // AK-11, AKM
1, 30Rnd_762x39_Mag_Tracer_Green_F          // AK-11, AKM
1, 30Rnd_762x39_AK47_M						// AKS
1, 30Rnd_545x39_Mag_F						// AKS
1, 30Rnd_545x39_Mag_Green_F					// AKS
1, 30Rnd_545x39_Mag_Tracer_F				// AKS
1, 30Rnd_545x39_Mag_Tracer_Green_F			// AKS
1, 10Rnd_50BW_Mag_F							// Type 115
1, 30Rnd_580x42_Mag_F						// CAR-95
1, 30Rnd_580x42_Mag_Tracer_F				// CAR-95
1, 100Rnd_580x42_Mag_F						// CAR-95-1
1, 100Rnd_580x42_Mag_Tracer_F				// CAR-95-1
1, 150Rnd_556x45_Drum_Mag_F					// SPAR-16S 
1, 150Rnd_556x45_Drum_Mag_Tracer_F			// SPAR-16S 
1, 20Rnd_762x51_Mag							// SPAR-17
1, 1550Rnd_20mm_Tracer_Red					// M61 VULCAN
1, 300Rnd_20mm_Tracer_Red					// M16 VULCAN
1, 1550Rnd_20mm_Tracer_Yellow				// M16 VULCAN
1, 300Rnd_20mm_Tracer_Yellow				// M16 VULVAN
1, 1550Rnd_20mm_Tracer_Green				// M16 VULVAN
1, 300Rnd_20mm_Tracer_Green					// M16 VULVAN
1, 300Rnd_25mm_Tracer_Red					// M16 VULVAN
1, 300Rnd_25mm_Tracer_Yellow
1, 300Rnd_25mm_Tracer_Green
1, 21Rnd_AAA_RIM_116 
1, 8Rnd_AAA_RIM_7
1, 6Rnd_GreenSignal_F
1, 6Rnd_RedSignal_F
1, CUP_30Rnd_545x39_AK_M
1, CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M
1, CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M
1, CUP_30Rnd_TE1_White_Tracer_545x39_AK_M
1, CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M
1, CUP_30Rnd_Subsonic_545x39_AK_M
1, CUP_30Rnd_762x39_AK47_M
1, CUP_30Rnd_Sa58_M
1, CUP_30Rnd_Sa58_M_TracerG
1, CUP_30Rnd_Sa58_M_TracerY
1, CUP_10x_303_M
1, CUP_30Rnd_556x45_Stanag
1, CUP_20Rnd_556x45_Stanag
1, CUP_30Rnd_556x45_G36
1, CUP_30Rnd_TE1_Red_Tracer_556x45_G36
1, CUP_30Rnd_TE1_Green_Tracer_556x45_G36
1, CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36
1, CUP_100Rnd_556x45_BetaCMag
1, CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag
1, CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag
1, CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag
1, CUP_20Rnd_762x51_FNFAL_M
1, CUP_20Rnd_762x51_L129_M
1, CUP_20Rnd_762x51_B_SCAR
1, CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR
1, CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR
1, CUP_20Rnd_TE1_White_Tracer_762x51_SCAR
1, CUP_20Rnd_762x51_CZ805B
1, CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B
1, CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B
1, CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B
1, CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B
1, CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M
1, CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M
1, CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
1, CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
1, CUP_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
1, CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
1, CUP_200Rnd_TE1_LRT4_Red_Tracer_762x51_Belt_M
1, CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
1, CUP_200Rnd_TE4_Green_Tracer_556x45_M249
1, CUP_200Rnd_TE4_Red_Tracer_556x45_M249
1, CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249
1, CUP_200Rnd_TE1_Red_Tracer_556x45_M249
1, CUP_100Rnd_TE4_Green_Tracer_556x45_M249
1, CUP_100Rnd_TE4_Red_Tracer_556x45_M249
1, CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249
1, CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1
1, CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1
1, CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1
1, CUP_50Rnd_UK59_762x54R_Tracer
1, CUP_1Rnd_HE_GP25_M
1, CUP_FlareWhite_GP25_M
1, CUP_FlareGreen_GP25_M
1, CUP_FlareRed_GP25_M
1, CUP_FlareYellow_GP25_M
1, CUP_IlumFlareWhite_GP25_M
1, CUP_IlumFlareRed_GP25_M
1, CUP_IlumFlareGreen_GP25_M
1, CUP_1Rnd_SMOKE_GP25_M
1, CUP_1Rnd_SmokeRed_GP25_M
1, CUP_1Rnd_SmokeGreen_GP25_M
1, CUP_1Rnd_SmokeYellow_GP25_M
1, CUP_1Rnd_HE_M203
1, CUP_1Rnd_HEDP_M203
1, CUP_FlareWhite_M203
1, CUP_FlareGreen_M203
1, CUP_FlareRed_M203
1, CUP_FlareYellow_M203
1, CUP_1Rnd_StarFlare_White_M203
1, CUP_1Rnd_StarFlare_Red_M203
1, CUP_1Rnd_StarFlare_Green_M203
1, CUP_1Rnd_StarCluster_White_M203
1, CUP_1Rnd_StarCluster_Red_M203
1, CUP_1Rnd_StarCluster_Green_M203
1, CUP_1Rnd_Smoke_M203
1, CUP_1Rnd_SmokeRed_M203
1, CUP_1Rnd_SmokeGreen_M203
1, CUP_1Rnd_SmokeYellow_M203
1, CUP_6Rnd_HE_GP25_M
1, CUP_6Rnd_HE_M203
1, CUP_6Rnd_FlareWhite_M203
1, CUP_6Rnd_FlareGreen_M203	
1, CUP_6Rnd_FlareRed_M203
1, CUP_6Rnd_FlareYellow_M203
1, CUP_6Rnd_Smoke_M203
1, CUP_6Rnd_SmokeRed_M203
1, CUP_6Rnd_SmokeGreen_M203
1, CUP_6Rnd_SmokeYellow_M203
1, CUP_64Rnd_9x19_Bizon_M
1, CUP_64Rnd_Green_Tracer_9x19_Bizon_M
1, CUP_64Rnd_Red_Tracer_9x19_Bizon_M
1, CUP_64Rnd_White_Tracer_9x19_Bizon_M
1, CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M
1, CUP_30Rnd_9x19_MP5
1, CUP_10Rnd_B_765x17_Ball_M
1, CUP_20Rnd_B_765x17_Ball_M
1, CUP_30Rnd_9x19_EVO
1, CUP_30Rnd_9x19_UZI
1, CUP_5Rnd_127x108_KSVK_M
1, CUP_10Rnd_762x54_SVD_M
1, CUP_10Rnd_9x39_SP5_VSS_M
1, CUP_20Rnd_9x39_SP5_VSS_M
1, CUP_5Rnd_127x99_as50_M
1, CUP_20Rnd_762x51_DMR
1, CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR
1, CUP_20Rnd_TE1_Red_Tracer_762x51_DMR
1, CUP_20Rnd_TE1_Green_Tracer_762x51_DMR
1, CUP_20Rnd_TE1_White_Tracer_762x51_DMR
1, CUP_5Rnd_762x51_M24
1, CUP_20Rnd_762x51_B_M110
1, CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110
1, CUP_20Rnd_TE1_Red_Tracer_762x51_M110
1, CUP_20Rnd_TE1_Green_Tracer_762x51_M110
1, CUP_20Rnd_TE1_White_Tracer_762x51_M110
1, CUP_10Rnd_127x99_M107
1, CUP_10Rnd_762x51_CZ750
1, CUP_10Rnd_762x51_CZ750_Tracer
1, CUP_5Rnd_86x70_L115A1
1, CUP_5Rnd_762x67_G22
1, CUP_5x_22_LR_17_HMR_M
1, CUP_8Rnd_B_Saiga12_74Slug_M
1, CUP_8Rnd_B_Saiga12_74Pellets_M
1, CUP_20Rnd_B_AA12_Pellets
1, CUP_20Rnd_B_AA12_74Slug
1, CUP_20Rnd_B_AA12_HE
1, CUP_8Rnd_B_Beneli_74Slug
1, CUP_8Rnd_B_Beneli_74Pellets
1, CUP_8Rnd_9x18_Makarov_M
1, CUP_8Rnd_9x18_MakarovSD_M
1, CUP_6Rnd_45ACP_M
1, CUP_17Rnd_9x19_glock17
1, CUP_7Rnd_45ACP_1911
1, CUP_10Rnd_9x19_Compact
1, CUP_18Rnd_9x19_Phantom
1, CUP_15Rnd_9x19_M9
1, CUP_100Rnd_TE3_LRT5_Green_Tracer_127x107_DSHKM_M
1, CUP_100Rnd_TE3_LRT5_127x107_DSHKM_M
1, CUP_50Rnd_TE3_LRT5_127x107_DSHKM_M
1, CUP_150Rnd_TE3_LRT5_127x107_DSHKM_M
1, CUP_150Rnd_127x108_KORD_M
1, CUP_50Rnd_127x108_KORD_M
1, CUP_750Rnd_TE2_Red_Tracer_M197_20mm_AP_M
1, CUP_750Rnd_TE2_Green_Tracer_M197_20mm_AP_M
1, CUP_750Rnd_TE2_Yellow_Tracer_M197_20mm_AP_M
1, CUP_750Rnd_TE2_Red_Tracer_M197_20mm_HEI_M
1, CUP_750Rnd_TE2_Yellow_Tracer_M197_20mm_HEI_M
1, CUP_750Rnd_TE2_Red_Tracer_M197_20mm_API_M
1, CUP_750Rnd_TE2_Green_Tracer_M197_20mm_API_M
1, CUP_750Rnd_TE2_Yellow_Tracer_M197_20mm_API_M
1, CUP_1200Rnd_TE1_Red_Tracer_M621_20mm_HE_M
1, CUP_750Rnd_TE1_Green_Tracer_GI2_20mm_HE_M
1, CUP_20Rnd_TE1_Red_Tracer_120mmHE_M256_Cannon_M
1, CUP_20Rnd_TE1_Red_Tracer_120mmSABOT_M256_Cannon_M
1, CUP_12Rnd_TE1_Red_Tracer_105mmHE_M68_Cannon_M
1, CUP_20Rnd_TE1_Red_Tracer_105mmSABOT_M68_Cannon_M
1, CUP_1200Rnd_TE4_White_Tracer_762x51_M240_M
1, CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M
1, CUP_500Rnd_TE2_Green_Tracer_145x115_KPVT_M
1, CUP_50Rnd_TE2_LRT4_Green_Tracer_145x115_KPVT_M
1, CUP_4000Rnd_TE5_White_Tracer_762x51_M134_M
1, CUP_100Rnd_TE4_White_Tracer_762x51_M240_M
1, CUP_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M
1, CUP_1200Rnd_TE1_Green_Tracer_30x113mm_M789_HEDP_M
1, CUP_1200Rnd_TE1_Yellow_Tracer_30x113mm_M789_HEDP_M
1, CUP_1200Rnd_TE1_White_Tracer_30x113mm_M789_HEDP_M

> RifleAttachments
2, muzzle_snds_M
2, muzzle_snds_H
2, muzzle_snds_H_khk_F
2, muzzle_snds_H_snd_F
2, muzzle_snds_58_blk_F
2, muzzle_snds_m_khk_F
2, muzzle_snds_m_snd_F
2, muzzle_snds_58_wdm_F
2, muzzle_snds_65_TI_blk_F
2, muzzle_snds_65_TI_hex_F
2, muzzle_snds_65_TI_ghex_F
2, muzzle_snds_H_MG_blk_F
2, muzzle_snds_H_MG_khk_F
2, optic_Arco
2, optic_Arco_blk_F
2, optic_Arco_ghex_F
2, optic_Hamr
2, optic_Hamr_khk_F
2, optic_Holosight
2, optic_Holosight_blk_F
2, optic_Holosight_khk_F
2, acc_flashlight
2, acc_pointer_IR
2, optic_MRCO
2, optic_DMS
2, optic_DMS_ghex_F
2, optic_ERCO_blk_F
2, optic_ERCO_khk_F
2, optic_ERCO_snd_F
1, optic_NVS
0, CUP_optic_MAAWS_Scope			// MAAWS
0, CUP_optic_SMAW_Scope				// SMAW
1, CUP_optic_PSO_1
1, CUP_optic_Kobra
0, CUP_optic_GOSHAWK
1, CUP_optic_NSPU
1, CUP_optic_PechenegScope
0, CUP_muzzle_PBS4
0, CUP_muzzle_PB6P9
0, CUP_muzzle_Bizon
0, CUP_acc_Glock17_Flashlight
0, CUP_muzzle_snds_M9
1, CUP_muzzle_snds_MicroUzi
1, CUP_optic_SB_3_12x50_PMII
0, CUP_optic_AN_PAS_13c2			// THERMAL SCOPE
1, CUP_optic_HoloBlack
1, CUP_optic_HoloWdl
1, CUP_optic_HoloDesert
1, CUP_optic_Eotech533
1, CUP_optic_Eotech533Grey
1, CUP_optic_CompM4
1, CUP_optic_SUSAT
1, CUP_optic_ACOG
0, CUP_optic_CWS
1, CUP_optic_Leupold_VX3
1, CUP_optic_AN_PVS_10
1, CUP_optic_CompM2_Black
1, CUP_optic_CompM2_Woodland
1, CUP_optic_CompM2_Woodland2
1, CUP_optic_CompM2_Desert
1, CUP_optic_RCO
1, CUP_optic_RCO_desert
1, CUP_optic_LeupoldM3LR
1, CUP_optic_LeupoldMk4_10x40_LRT_Desert
1, CUP_optic_LeupoldMk4_10x40_LRT_Woodland
1, CUP_optic_ElcanM145
0, CUP_optic_AN_PAS_13c1			// THERMAL SCOPE
1, CUP_optic_LeupoldMk4_CQ_T
1, CUP_optic_ELCAN_SpecterDR
1, CUP_optic_LeupoldMk4_MRT_tan
1, CUP_optic_SB_11_4x20_PM
1, CUP_optic_ZDDot
1, CUP_optic_MRad
1, CUP_optic_TrijiconRx01_desert
1, CUP_optic_TrijiconRx01_black
1, CUP_optic_AN_PVS_4
1, CUP_optic_Elcan
1, CUP_optic_Elcan_reflex
1, CUP_acc_ANPEQ_15
1, CUP_acc_ANPEQ_2
1, CUP_acc_Flashlight
1, CUP_acc_Flashlight_wdl
1, CUP_acc_Flashlight_desert
1, CUP_acc_XM8_light_module
1, CUP_acc_ANPEQ_2_camo
1, CUP_acc_ANPEQ_2_desert
1, CUP_acc_ANPEQ_2_grey
1, CUP_acc_CZ_M3X
1, CUP_acc_LLM
1, CUP_bipod_Harris_1A2_L
1, CUP_bipod_VLTOR_Modpod
1, CUP_muzzle_snds_AWM
1, CUP_muzzle_snds_G36_black
1, CUP_muzzle_snds_G36_desert
1, CUP_muzzle_snds_L85
1, CUP_acc_sffh
1, CUP_acc_bfa
1, CUP_muzzle_snds_M110
1, CUP_muzzle_snds_M14
1, CUP_muzzle_snds_M16_camo
1, CUP_muzzle_snds_M16
1, CUP_muzzle_snds_Mk12
1, CUP_optic_PGO7V
1, CUP_optic_PGO7V2
1, CUP_optic_PGO7V3
1, CUP_optic_NSPU_RPG
1, CUP_muzzleFlash2SCAR_L
1, CUP_muzzle_snds_SCAR_L
1, CUP_muzzle_mfsup_SCAR_L
1, CUP_muzzle_snds_SCAR_H
1, CUP_muzzle_mfsup_SCAR_H
1, CUP_muzzle_snds_XM8
0, CUP_Binocular_Vector				// ?????????????
0, CUP_Laserdesignator				// LASERDESIGNATOR
0, CUP_LRTV_ACR						// ?????????????

//0, optic_tws

> LMG
3, arifle_MX_SW_Black_F			// MX SW 6.5 mm (Black)
3, arifle_MX_SW_F				// MX SW 6.5 mm
3, LMG_Mk200_F					// Mk200 6.5 mm
3, LMG_Zafir_F					// Zafir 7.62 mm
4, Exile_Weapon_RPK
4, Exile_Weapon_PK
4, Exile_Weapon_PKP
4, LMG_03_F						//= LIM-85 5.56 mm
4, CUP_arifle_RPK74				//RPK74 5,45
4, CUP_arifle_RPK74_45			//RPK74 5,45
4, CUP_arifle_RPK74M			//RPK74 5,45
4, CUP_lmg_L110A1				//L110A1 5,56
0, CUP_lmg_L110A1_Aim_Laser		//L110A1 5,56
3, CUP_lmg_L7A2					//L7A2 7,62
3, CUP_lmg_M240					//M240 7,62
0, CUP_lmg_M240_ElcanM143		//M240 7,62
0, CUP_lmg_M249_ANPAS13c2_Laser	//M249 5,56
4, CUP_lmg_M249_E2				//M249 5,56
0, CUP_lmg_M249_ElcanM145_Laser	//M249 5,56
4, CUP_lmg_M249_Laser			//M249 5,56
4, CUP_lmg_m249_para			//M249 5,56
4, CUP_lmg_m249_pip1			//M249 5,56
0, CUP_lmg_m249_pip2			//M249 5,56
0, CUP_lmg_m249_pip3			//M249 5,56
0, CUP_lmg_m249_pip4			//M249 5,56
4, CUP_lmg_m249_SQuantoon		//M249 5,56
3, CUP_lmg_M60E4				//M249 5,56
4, CUP_lmg_minimi				//MINIMI 5,56
4, CUP_lmg_minimi_railed		//MINIMI 5,56
4, CUP_lmg_minimipara			//MINIMI 5,56
3, CUP_lmg_Mk48_des				//MK48 7,62
0, CUP_lmg_Mk48_des_Aim_Laser	//MK48 7,62
3, CUP_lmg_Mk48_wdl				//MK48 7,62
0, CUP_lmg_Mk48_wdl_Aim_Laser	//MK48 7,62
3, CUP_lmg_Pecheneg				//PKP 7,62
0, CUP_lmg_Pecheneg_PScope		//PKP 7,62
3, CUP_lmg_PKM					//PKM 7,62
3, CUP_lmg_UK59					//UK59 7,62


> LMGAmmo
2, 100Rnd_65x39_caseless_mag			// MX SW
3, 100Rnd_65x39_caseless_mag_Tracer		// MX SW
3, 150Rnd_762x54_Box					// Zafir
1, 150Rnd_762x54_Box_Tracer				// Zafir
3, 130Rnd_338_Mag
3, 150Rnd_93x64_Mag
1, Exile_Magazine_45Rnd_545x39_RPK_Green
1, Exile_Magazine_75Rnd_545x39_RPK_Green
1, Exile_Magazine_100Rnd_762x54_PK_Green
//10, 200Rnd_65x39_Belt					// Mk200
//10, 200Rnd_65x39_Belt_Tracer_Green	// Mk200
//10, 200Rnd_65x39_Belt_Tracer_Red		// Mk200
//10, 200Rnd_65x39_Belt_Tracer_Yellow	// Mk200
1, 200Rnd_556x45_Box_F					// LIM-85 	
1, 200Rnd_556x45_Box_Red_F         		// LIM-85	
1, 200Rnd_556x45_Box_Tracer_F      		// LIM-85	
1, 200Rnd_556x45_Box_Tracer_Red_F  		// LIM-85	

> Snipers
3, srifle_DMR_01_F					// Rahim 7.62 mm
3, srifle_EBR_F						// Mk18 ABR 7.62 mm
1, srifle_GM6_ghex_F   				// GM6 Lynx 12.7 mm (Green Hex)
3, srifle_DMR_07_blk_F     			// CMR-76 6.5 mm (Black)
3, srifle_DMR_07_hex_F     			// CMR-76 6.5 mm (Hex)
3, srifle_DMR_07_ghex_F    			// CMR-76 6.5 mm (Green Hex)
3, CUP_arifle_Mk20					//MK20 7,62
0, CUP_arifle_Mk20_LeupoldMk4MRT	//MK20 7,62
0, CUP_arifle_Mk20_SB11420_snds		//MK20 7,62
1, CUP_srifle_AWM_des				//LAPUA .338
0, CUP_srifle_AWM_des_SBPMII		//LAPUA .338
1, CUP_srifle_AWM_wdl				//LAPUA .338
0, CUP_srifle_AWM_wdl_SBPMII		//LAPUA.338
0, CUP_srifle_CZ550					//CZ550 9,3
3, CUP_srifle_CZ550_rail			//CZ550 9,3
3, CUP_srifle_CZ750					//CZ750 9,3
0, CUP_srifle_CZ750_SOS_bipod		//CZ750 7,62
1, CUP_srifle_G22_des				//LAPUA .338
0, CUP_srifle_G22_des_SBPMII		//LAPUA .338
3, CUP_srifle_M110					//M110 7,62
0, CUP_srifle_M110_ANPAS13c2		//M110 7,62
1, CUP_srifle_M110_ANPVS10			//M110 7,62
3, CUP_srifle_M24_des				//M24 7,62
0, CUP_srifle_M24_des_LeupoldMk4LRT	//M24 7,62
0, CUP_srifle_M24_ghillie			//M24 7,62
1, CUP_srifle_M24_ghillie_bipod		//M24 7,62
3, CUP_srifle_M24_wdl				//M24 7,62
0, CUP_srifle_M24_wdl_LeupoldMk4LRT	//M24 7,62
3, CUP_srifle_M40A3					//M40A3 7,62
1, CUP_srifle_M40A3_bipod			//M40A3 7,62
4, CUP_srifle_Mk12SPR				//MK12SPRR 5,56
0, CUP_srifle_Mk12SPR_LeupoldM3LR	//MK12SPRR 5,56
3, CUP_srifle_SVD					//SVD 7,62
3, CUP_srifle_SVD_des				//SVD 7,62
0, CUP_srifle_SVD_des_ghillie_pso	//SVD 7,62
0, CUP_srifle_SVD_Des_pso			//SVD 7,62
0, CUP_srifle_SVD_NSPU				//SVD 7,62
0, CUP_srifle_SVD_pso				//SVD 7,62
0, CUP_srifle_SVD_wdl_ghillie		//SVD 7,62
3, CUP_srifle_VSSVintorez			//VSS 9,00
0, CUP_srifle_VSSVintorez_pso		//VSS 9,00

> SniperAmmo
1, Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag 			// GM6 Lynx 12.7mm
1, Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag		// KSVK
1, Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag			// KSVK
1, Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag 				// GM6 Lynx 12.7 mm
1, Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag			// M107
2, Exile_Magazine_7Rnd_408_Bullet_Cam_Mag 					// M320 LRR .408	
3, Exile_Magazine_10Rnd_338_Bullet_Cam_Mag 					// MAR-10 .338	
3, Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag 		// Cyrus 9.3mm	
2, Exile_Magazine_5Rnd_127x108_APDS_KSVK					// KSVK
1, 5Rnd_127x108_APDS_Mag									// GM6 Lynx 
2, 5Rnd_127x108_Mag											// GM6 Lynx
2, Exile_Magazine_10Rnd_127x99_m107							// M107
2, Exile_Magazine_5Rnd_127x108_KSVK 						// KSVK
2, 7Rnd_408_Mag												// M320 LRR
4, 10Rnd_762x54_Mag											// Rahim
4, 20Rnd_762x51_Mag											// Mk18 ABR
4, 20Rnd_650x39_Cased_Mag_F									// CMR-76

> SniperAttachments
1, muzzle_snds_B_khk_F
1, muzzle_snds_B_snd_F
1, muzzle_snds_B
1, optic_LRPS
1, optic_LRPS_ghex_F
1, optic_LRPS_tna_F
1, optic_SOS
1, optic_SOS_khk_F
1, optic_DMS
//0, optic_tws
//0, optic_tws_mg

> DLCRifles
4, srifle_DMR_03_F				//MK1EMR
4, srifle_DMR_03_khaki_F		//MK1EMR
4, srifle_DMR_03_tan_F			//MK1EMR
4, srifle_DMR_03_woodland_F		//MK1EMR
4, srifle_DMR_06_camo_F			//Mk14
4, srifle_DMR_06_olive_F		//Mk14
3, srifle_DMR_02_camo_F			//MAR10
3, srifle_DMR_02_F				//MAR10
3, srifle_DMR_02_sniper_F		//MAR10
4, srifle_DMR_04_F				//ASP1KIR
4, srifle_DMR_04_Tan_F			//ASP1KIR
3, srifle_DMR_05_blk_F			//CYRUS
3, srifle_DMR_05_hex_F			//CYRUS
3, srifle_DMR_05_tan_F			//CYRUS

> DLCAmmo
1, 150Rnd_93x64_Mag			//Navid
2, 130Rnd_338_Mag			//SPMG
4, 10Rnd_127x54_Mag			//ASP1KIR
4, 20Rnd_762x51_Mag			//MK1EMR
3, 10Rnd_338_Mag			//MAR10
3, 10Rnd_93x64_DMR_05_Mag	//CYRUS

> DLCOptics
1, optic_AMS
1, optic_AMS_khk
1, optic_AMS_snd
1, optic_KHS_blk
1, optic_KHS_hex
1, optic_KHS_old
1, optic_KHS_tan

> DLCSupressor
1, muzzle_snds_338_black
1, muzzle_snds_338_green
1, muzzle_snds_338_sand
1, muzzle_snds_93mmg
1, muzzle_snds_93mmg_tan
1, muzzle_snds_B

> EpicWeapons
1, MMG_01_hex_F				//Navid
1, MMG_01_tan_F				//Navid
1, MMG_02_black_F			//SPMG
1, MMG_02_camo_F			//SPMG
1, MMG_02_sand_F			//SPMG
1, CUP_srifle_AS50					//AS50 12,7
0, CUP_srifle_AS50_AMPAS13c2		//AS50 12,7
0, CUP_srifle_AS50_SBPMII			//AS50 12,7
1, CUP_srifle_ksvk					//KSVK 12,7
0, CUP_srifle_ksvk_PSO3				//KSVK 12,7
0, CUP_srifle_M107_ANPAS13c2		//M107 12,7
1, CUP_srifle_M107_Base				//M107 12,7
0, CUP_srifle_M107_LeupoldVX3		//M107 12,7
1, Exile_Weapon_m107				// M107
1, Exile_Weapon_ksvk				// KSVK
1, srifle_GM6_F						// GM6 Lynx 12.7 mm
1, srifle_LRR_F						// M320 LRR .408
1, srifle_LRR_tna_F    				// M320 LRR .408 (Tropic)

> Bipods
1, bipod_03_F_oli
1, bipod_03_F_blk
1, bipod_02_F_tan
1, bipod_02_F_hex
1, bipod_02_F_blk
1, bipod_01_F_snd
1, bipod_01_F_mtp
1, bipod_01_F_blk
1, bipod_01_F_khk

> HEGrenades
1, 3Rnd_HE_Grenade_shell
3, 1Rnd_HE_Grenade_shell

> UGLFlares
1, 3Rnd_UGL_FlareGreen_F
1, 3Rnd_UGL_FlareRed_F
1, 3Rnd_UGL_FlareWhite_F
1, 3Rnd_UGL_FlareYellow_F
3, UGL_FlareGreen_F
3, UGL_FlareRed_F
3, UGL_FlareWhite_F
3, UGL_FlareYellow_F
// No Infrared for now
//UGL_FlareCIR_F
//3Rnd_UGL_FlareCIR_F

> UGLSmokes
1, 3Rnd_Smoke_Grenade_shell
1, 3Rnd_SmokeBlue_Grenade_shell
1, 3Rnd_SmokeGreen_Grenade_shell
1, 3Rnd_SmokeOrange_Grenade_shell
1, 3Rnd_SmokePurple_Grenade_shell
1, 3Rnd_SmokeRed_Grenade_shell
1, 3Rnd_SmokeYellow_Grenade_shell
3, 1Rnd_Smoke_Grenade_shell
3, 1Rnd_SmokeBlue_Grenade_shell
3, 1Rnd_SmokeGreen_Grenade_shell
3, 1Rnd_SmokeOrange_Grenade_shell
3, 1Rnd_SmokePurple_Grenade_shell
3, 1Rnd_SmokeRed_Grenade_shell
3, 1Rnd_SmokeYellow_Grenade_shell

> HandGrenades
1, HandGrenade
1, MiniGrenade

> Explosives
1, SatchelCharge_Remote_Mag
3, APERSBoundingMine_Range_Mag
3, APERSMine_Range_Mag
3, APERSTripMine_Wire_Mag
3, DemoCharge_Remote_Mag
3, IEDLandSmall_Remote_Mag
3, IEDUrbanSmall_Remote_Mag
1, ATMine_Range_Mag
3, SLAMDirectionalMine_Wire_Mag
3, ClaymoreDirectionalMine_Remote_Mag
3, IEDUrbanBig_Remote_Mag
3, IEDLandBig_Remote_Mag

///////////////////////////////////////////////////////////////////////////////
// Clothing & Gear
///////////////////////////////////////////////////////////////////////////////

//Civilian

> CivilianItems
1, Exile_Item_MobilePhone
3, Binocular
2, ItemGPS
0, ItemRadio
2, ItemWatch
0, ItemMap
3, Exile_Item_Heatpack

> CivilianClothing
1, U_NikosAgedBody
1, U_NikosBody
1, U_OrestesBody
5, U_C_Man_casual_1_F               // Casual Clothes (Navy)
5, U_C_Man_casual_2_F               // Casual Clothes (Blue)
5, U_C_Man_casual_3_F               // Casual Clothes (Green)
5, U_C_Man_casual_4_F               // Summer Clothes (Sky)
5, U_C_Man_casual_5_F               // Summer Clothes (Yellow)
5, U_C_Man_casual_6_F               // Summer Clothes (Red)
5, U_C_man_sport_1_F                // Sport Clothes (Beach)
5, U_C_man_sport_2_F                // Sport Clothes (Orange)
5, U_C_man_sport_3_F                // Sport Clothes (Blue)
5, U_I_C_Soldier_Bandit_1_F         // Bandit Clothes (Polo Shirt)
5, U_I_C_Soldier_Bandit_2_F         // Bandit Clothes (Skull)
5, U_I_C_Soldier_Bandit_3_F         // Bandit Clothes (Tee)
5, U_I_C_Soldier_Bandit_4_F         // Bandit Clothes (Checkered)
5, U_I_C_Soldier_Bandit_5_F         // Bandit Clothes (Tank Top)
7, U_C_Poloshirt_blue
7, U_C_Poloshirt_burgundy
7, U_C_Poloshirt_salmon
7, U_C_Poloshirt_stripped
7, U_C_Poloshirt_tricolour
9, U_C_HunterBody_grn
9, U_C_Journalist
9, U_C_Poor_1
9, U_C_Poor_2
9, U_C_Poor_shorts_1
9, U_C_Scientist
9, U_Rangemaster

> CivilianBackpacks
1, B_Kitbag_cbr
1, B_Kitbag_mcamo
1, B_Kitbag_sgg
1, B_AssaultPack_blk
1, B_AssaultPack_cbr
1, B_AssaultPack_dgtl
1, B_AssaultPack_khk
1, B_AssaultPack_mcamo
1, B_AssaultPack_rgr
1, B_AssaultPack_sgg
1, B_AssaultPack_tna_F 
1, B_HuntingBackpack
1, B_OutdoorPack_blu
1, B_OutdoorPack_tan
1, B_OutdoorPack_blk

> CivilianVests
1, V_Press_F
1, V_TacVest_blk_POLICE
2, V_Rangemaster_belt

> CivilianHeadgear
1, H_Bandanna_surfer
1, H_Beret_blk_POLICE
1, H_Cap_blk
1, H_Cap_blk_Raven
1, H_Cap_blu
1, H_Cap_grn
1, H_Cap_headphones
1, H_Cap_oli
1, H_Cap_press
1, H_Cap_red
1, H_Cap_tan
1, H_Hat_blue
1, H_Hat_brown
1, H_Hat_checker
1, H_Hat_grey
1, H_Hat_tan
1, H_StrawHat
1, H_StrawHat_dark

//Guerilla

> GuerillaItems
1, Rangefinder
0, ItemCompass
5, NVGoggles
5, NVGoggles_tna_F
5, O_NVGoggles_ghex_F
5, O_NVGoggles_hex_F
5, O_NVGoggles_urb_F

> GuerillaClothing
1, U_I_G_resistanceLeader_F
3, U_I_C_Soldier_Camo_F             // Syndikat Uniform
3, U_I_C_Soldier_Para_1_F           // Paramilitary Garb (Tee)
3, U_I_C_Soldier_Para_2_F           // Paramilitary Garb (Jacket)
3, U_I_C_Soldier_Para_3_F           // Paramilitary Garb (Shirt)
3, U_I_C_Soldier_Para_4_F           // Paramilitary Garb (Tank Top)
3, U_I_C_Soldier_Para_5_F           // Paramilitary Garb (Shorts)
4, U_IG_leader
5, U_IG_Guerilla3_1
5, U_IG_Guerilla3_2
6, U_IG_Guerilla1_1
6, U_IG_Guerilla2_1
6, U_IG_Guerilla2_2
6, U_IG_Guerilla2_3

> GuerillaBackpacks
1, B_Bergen_blk
1, B_Bergen_mcamo
1, B_Bergen_rgr
1, B_Bergen_sgg
1, B_FieldPack_ghex_F 
2, B_ViperHarness_base_F         
2, B_ViperHarness_blk_F          
2, B_ViperHarness_ghex_F         
2, B_ViperHarness_hex_F          
2, B_ViperHarness_khk_F          
2, B_ViperHarness_oli_F          
3, B_ViperLightHarness_base_F    
3, B_ViperLightHarness_blk_F     
3, B_ViperLightHarness_ghex_F    
3, B_ViperLightHarness_hex_F     
3, B_ViperLightHarness_khk_F     
3, B_ViperLightHarness_oli_F    
5, B_FieldPack_blk
5, B_FieldPack_cbr
5, B_FieldPack_ocamo
5, B_FieldPack_oucamo

> GuerillaVests
1, V_I_G_resistanceLeader_F
2, V_BandollierB_blk
2, V_BandollierB_cbr
2, V_BandollierB_khk
2, V_BandollierB_oli
2, V_BandollierB_rgr
2, V_Chestrig_blk
2, V_Chestrig_khk
2, V_Chestrig_oli
2, V_Chestrig_rgr
2, V_HarnessO_brn
2, V_HarnessO_gry
2, V_HarnessOGL_brn
2, V_HarnessOGL_gry
2, V_HarnessOSpec_brn
2, V_HarnessOSpec_gry

> GuerillaHeadgear
1, H_Beret_02
1, H_Beret_blk
1, H_Beret_brn_SF
1, H_Beret_Colonel
1, H_Beret_grn
1, H_Beret_grn_SF
1, H_Beret_ocamo
1, H_Beret_red
2, H_Booniehat_tna_F   
2, H_Cap_blk_Syndikat_F       
2, H_Cap_grn_Syndikat_F       
2, H_Cap_oli_Syndikat_F       
2, H_Cap_tan_Syndikat_F       
2, H_FakeHeadgear_Syndikat_F    
2, H_MilCap_gen_F             
2, H_MilCap_ghex_F 
2, H_MilCap_tna_F             
2, H_Shemag_khk
2, H_Shemag_olive
2, H_Shemag_olive_hs
2, H_Shemag_tan
2, H_ShemagOpen_khk
2, H_ShemagOpen_tan  
2, H_TurbanO_blk
2, H_Watchcap_camo
2, H_Watchcap_sgg
3, H_Bandanna_camo
3, H_Bandanna_cbr
3, H_Bandanna_gry
3, H_Bandanna_khk
3, H_Bandanna_khk_hs
3, H_Bandanna_mcamo
3, H_Bandanna_sgg
3, H_BandMask_blk
3, H_Cap_brn_SPECOPS
3, H_Cap_khaki_specops_UK
3, H_Cap_tan_specops_US
3, H_Hat_camo
3, H_Watchcap_blk
3, H_Watchcap_khk
0, Exile_Headgear_GasMask
4, H_Booniehat_dgtl
4, H_Booniehat_dirty
4, H_Booniehat_grn
4, H_Booniehat_indp
4, H_Booniehat_khk
4, H_Booniehat_khk_hs
4, H_Booniehat_mcamo
4, H_Booniehat_tan


//Military

> MilitaryClothing
2, U_B_Wetsuit						// Wetsuit [NATO]
2, U_I_OfficerUniform				// Combat Fatigues [AAF] (Tee)
2, U_I_Wetsuit						// Wetsuit [AAF]
2, U_O_CombatUniform_ocamo			// Heli Pilot Coveralls
2, U_O_CombatUniform_oucamo			// Fatigues (Urban) [CSAT]
2, U_O_OfficerUniform_ocamo			// Officer Fatigues (Hex)
2, U_O_SpecopsUniform_blk			// Recon Fatigues (Black)
2, U_O_SpecopsUniform_ocamo			// Recon Fatigues (Hex)
2, U_O_V_Soldier_Viper_F            // Special Purpose Suit (Green Hex)
2, U_O_V_Soldier_Viper_hex_F        // Special Purpose Suit (Hex)
2, U_O_Wetsuit						// Wetsuit [CSAT]
3, U_B_SpecopsUniform_sgg			// Specop Fatigues (Sage)
4, U_B_HeliPilotCoveralls			// Heli Pilot Coveralls
4, U_B_PilotCoveralls				// Pilot Coveralls [NATO]
4, U_I_CombatUniform				// Combat Fatigues [AAF]
4, U_I_CombatUniform_shortsleeve	// Combat Fatigues [AAF]
4, U_I_CombatUniform_tshirt			// Combat Fatigues [AAF] (Tee)
4, U_I_HeliPilotCoveralls			// Heli Pilot Coveralls
4, U_I_pilotCoveralls				// Pilot Coveralls [AAF]
4, U_O_PilotCoveralls				// Pilot Coveralls [CSAT]
5, U_B_CombatUniform_mcam			// Combat Fatigues (MTP)
5, U_B_CombatUniform_mcam_tshirt	// Combat Fatigues (MTP) (Tee)
5, U_B_CombatUniform_mcam_vest		// Recon Fatigues (MTP)
5, U_B_CombatUniform_mcam_worn		// Worn Combat Fatigues (MTP)
5, U_B_CTRG_1						// CTRG Combat Uniform (UBACS)
5, U_B_CTRG_2						// CTRG Combat Uniform (UBACS2)
5, U_B_CTRG_3						// CTRG Combat Uniform (Tee)
5, U_B_CTRG_Soldier_2_F             // CTRG Stealth Uniform (Tee)
5, U_B_CTRG_Soldier_3_F             // CTRG Stealth Uniform (Rolled-up)
5, U_B_CTRG_Soldier_F               // CTRG Stealth Uniform
5, U_B_CTRG_Soldier_urb_1_F         // CTRG Urban Uniform
5, U_B_CTRG_Soldier_urb_2_F         // CTRG Urban Uniform (Tee)
5, U_B_CTRG_Soldier_urb_3_F         // CTRG Urban Uniform (Rolled-up)
5, U_B_GEN_Commander_F              // Gendarmerie Commander Uniform
5, U_B_GEN_Soldier_F                // Gendarmerie Uniform
5, U_B_T_Soldier_AR_F               // Combat Fatigues (Tropic, Tee)
5, U_B_T_Soldier_SL_F               // Recon Fatigues (Tropic)
5, U_O_T_Officer_F                  // Officer Fatigues (Green Hex) [CSAT]
5, U_O_T_Soldier_F                  // Fatigues (Green Hex) [CSAT]

> MilitaryBackpacks
1, B_Bergen_Base_F				
1, B_Bergen_dgtl_F               
1, B_Bergen_hex_F                
1, B_Bergen_mcamo_F              
1, B_Bergen_tna_F  
2, B_Carryall_mcamo
2, B_Carryall_ocamo
2, B_Carryall_oucamo
2, B_Carryall_khk
2, B_Carryall_oli
2, B_Carryall_cbr
2, B_Carryall_ghex_F  

> MilitaryVests
1, V_PlateCarrierH_CTRG
1, V_PlateCarrierL_CTRG
2, V_PlateCarrier1_blk
2, V_PlateCarrier1_rgr
2, V_PlateCarrier2_rgr
2, V_PlateCarrier3_rgr
2, V_PlateCarrierGL_rgr
2, V_PlateCarrierIA1_dgtl
2, V_PlateCarrierIA2_dgtl
2, V_PlateCarrierIAGL_dgtl
2, V_PlateCarrierSpec_rgr

> MilitaryHeadgear
1, H_CrewHelmetHeli_B
1, H_CrewHelmetHeli_I
1, H_CrewHelmetHeli_O
1, H_HelmetB_camo
1, H_HelmetCrew_B
1, H_HelmetCrew_I
1, H_HelmetCrew_O
1, H_HelmetLeaderO_ocamo
1, H_HelmetLeaderO_oucamo
1, H_HelmetO_ghex_F 
1, H_HelmetO_ocamo
1, H_HelmetO_oucamo
1, H_HelmetSpecO_blk
1, H_HelmetSpecO_ocamo
1, H_PilotHelmetFighter_B
1, H_PilotHelmetFighter_I
1, H_PilotHelmetFighter_O
1, H_PilotHelmetHeli_B
1, H_PilotHelmetHeli_I
1, H_PilotHelmetHeli_O
2, H_BandMask_demon
2, H_BandMask_khk
2, H_BandMask_reaper
2, H_Beret_gen_F  
2, H_Helmet_Skate    
2, H_HelmetB_black
2, H_HelmetB_desert
2, H_HelmetB_Enh_tna_F        
2, H_HelmetB_grass
2, H_HelmetB_light_black
2, H_HelmetB_light_desert
2, H_HelmetB_light_grass
2, H_HelmetB_light_sand
2, H_HelmetB_light_snakeskin
2, H_HelmetB_Light_tna_F 	
2, H_HelmetB_sand
2, H_HelmetB_snakeskin
2, H_HelmetB_TI_tna_F   
2, H_HelmetB_tna_F   		 
2, H_HelmetCrew_O_ghex_F 
2, H_HelmetIA_camo
2, H_HelmetIA_net
2, H_HelmetLeaderO_ghex_F
2, H_HelmetSpecO_ghex_F       
3, H_HelmetB
3, H_HelmetB_light
3, H_HelmetB_paint
3, H_HelmetB_plain_blk
3, H_HelmetIA
3, H_HelmetSpecB
3, H_HelmetSpecB_blk
3, H_HelmetSpecB_paint1
3, H_HelmetSpecB_paint2
0, Exile_Headgear_GasMask
4, H_MilCap_blue
4, H_MilCap_dgtl
4, H_MilCap_mcamo
4, H_MilCap_ocamo
4, H_MilCap_oucamo
4, H_MilCap_rucamo

> Ghillies
1, U_B_GhillieSuit			// Ghillie Suit [NATO]
1, U_O_GhillieSuit			// Ghillie Suit [CSAT]
1, U_I_GhillieSuit			// Ghillie Suit [AAF]

> DLCGhillies
1, U_B_FullGhillie_ard		
1, U_B_FullGhillie_lsh
1, U_B_FullGhillie_sard
1, U_O_FullGhillie_ard
1, U_O_FullGhillie_lsh
1, U_O_FullGhillie_sard
1, U_I_FullGhillie_ard
1, U_I_FullGhillie_lsh
1, U_I_FullGhillie_sard
5, U_B_T_Sniper_F                   // Ghillie Suit (Tropic) [NATO]
5, U_B_T_Soldier_F        			// Ghillie Suit (Tropic) [NATO]
5, U_B_T_FullGhillie_tna_F          // Full Ghillie (Jungle) [NATO]
5, U_O_T_Sniper_F                   // Ghillie Suit (Green Hex) [CSAT]
5, U_O_T_FullGhillie_tna_F          // Full Ghillie (Jungle) [CSAT]

> DLCVests
1, V_PlateCarrierGL_blk
1, V_PlateCarrierGL_mtp
1, V_PlateCarrierGL_rgr
1, V_PlateCarrierIAGL_dgtl
1, V_PlateCarrierIAGL_oli
1, V_PlateCarrierSpec_blk
1, V_PlateCarrierSpec_mtp
1, V_PlateCarrierSpec_rgr
1, V_TacChestrig_grn_F         
1, V_TacChestrig_oli_F         
1, V_TacChestrig_cbr_F         
1, V_PlateCarrier1_tna_F       
1, V_PlateCarrier2_tna_F       
1, V_PlateCarrierSpec_tna_F    
1, V_PlateCarrierGL_tna_F      
1, V_HarnessO_ghex_F           
1, V_HarnessOGL_ghex_F         
1, V_BandollierB_ghex_F        
1, V_TacVest_gen_F             
1, V_PlateCarrier1_rgr_noflag_F
1, V_PlateCarrier2_rgr_noflag_F

> Rebreathers
1, V_RebreatherB
1, V_RebreatherIR
1, V_RebreatherIA

///////////////////////////////////////////////////////////////////////////////
// Other Items
///////////////////////////////////////////////////////////////////////////////

> MedicalItems
1, Exile_Item_InstaDoc
4, Exile_Item_Bandage
4, Exile_Item_Vishpirin
2, Exile_Item_Heatpack

> IndustrialItems
0, Exile_Item_ThermalScannerPro
2, Exile_Item_Knife
3, Exile_Item_Cement
3, Exile_Item_FloodLightKit
3, Exile_Item_PortableGeneratorKit
4, Exile_Item_CamoTentKit
4, Exile_Item_MetalBoard
4, Exile_Item_Foolbox
4, Exile_Item_Sand
5, Exile_Item_Grinder
5, Exile_Item_MetalScrews
5, Exile_Melee_SledgeHammer
5, Exile_Item_ExtensionCord
5, Exile_Item_LightBulb
5, Exile_Item_WaterCanisterEmpty
5, Exile_Melee_Shovel
5, Exile_Item_JunkMetal
5, Exile_Item_Handsaw
5, Exile_Item_Pliers
5, Exile_Item_ScrewDriver
5, Exile_Melee_Axe
1, Laserbatteries									//Batteries for Laser Designator
1, CUP_item_Money									// MONEY

> Vehicle
3, Exile_Item_FuelCanisterFull
3, Exile_Item_FuelCanisterEmpty
1, Exile_Item_DuctTape

// Throwables

> Chemlights
1, Chemlight_blue
1, Chemlight_green
1, Chemlight_red
1, Chemlight_yellow

> RoadFlares
1, FlareGreen_F
1, FlareRed_F
1, FlareWhite_F
1, FlareYellow_F

> SmokeGrenades
1, SmokeShell
1, SmokeShellRed
1, SmokeShellGreen
1, SmokeShellYellow
1, SmokeShellPurple
1, SmokeShellBlue
1, SmokeShellOrange

> Restraints
1, Exile_Item_ZipTie

> Electronics
1, Exile_Item_Laptop
1, Exile_Item_BaseCameraKit

 // Trash or items not currently being used

> Trash
1, Exile_Item_Magazine01					// NOT USABLE
1, Exile_Item_Magazine02					// NOT USABLE
1, Exile_Item_Magazine03					// NOT USABLE
1, Exile_Item_Magazine04					// NOT USABLE
4, Exile_Item_Can_Empty
4, Exile_Item_PlasticBottleEmpty			// Nothing :)
4, Exile_Item_ToiletPaper

> Unused
1, Exile_Item_CordlessScrewdriver
1, Exile_Item_FireExtinguisher
1, Exile_Item_Rope
0, Exile_Item_Carwheel
1, Exile_Item_Defibrillator
1, Exile_Item_SleepingMat
1, Exile_Item_Wrench
1, Exile_Item_OilCanister
1, Exile_Item_Hammer