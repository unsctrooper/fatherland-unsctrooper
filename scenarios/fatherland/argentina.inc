# #############################
# Argentina
# #############################
# Buenos Aires

province = {
	id = 2050
	ic = 2
	energy = 4
	metal = 2
	rare_materials = 1
	manpower = 1
}

country = {
	tag = ARG
	energy = 5000
	metal = 5000
	rare_materials = 5000
	oil = 5000
	supplies = 5000
	manpower = 300
	capital = 2050
	
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 3
		political_left = 7
		free_market = 6
		freedom = 6
		professional_army = 7
		defense_lobby = 7
		interventionism = 7
	}
	
    ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
	
	SpyInfo = { country = "ARG" NumberOfSpies = 1 }
	SpyInfo = { country = "CAN" NumberOfSpies = 1 }
	SpyInfo = { country = "BRA" NumberOfSpies = 3 }
	
	nationalprovinces = { 2026 2027 2028 2029 2034 2035 2036 2037 2038 2039 2044 2048 2049 2050 2053 2054 2055 2056 }
	ownedprovinces = { 2026 2027 2028 2029 2034 2035 2036 2037 2038 2039 2044 2048 2049 2050 2053 2054 2055 2056 }
	controlledprovinces = { 2026 2027 2028 2029 2034 2035 2036 2037 2038 2039 2044 2048 2049 2050 2053 2054 2055 2056 }
	techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1130 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1280 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1410 1420 1470 1480 1530 1540 1560 1570 1580 1590 1600 1610 1620 1670 1680 1690 1830 1840 1850 1860 1870 1880 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2030 2040 2050 2060 2070 2080 2090 2100 2110 2120 2126 2130 2140 2150 2160 2170 2180 2190 2220 2230 2240 2250 2260 2270 2290 2300 2310 2320 2330 2340 2360 2370 2380 2400 2410 2420 2430 2450 2460 2470 2480 2490 2510 2520 2530 2620 2630 2640 2646 2650 2800 2810 2820 2850 2860 2870 2880 2900 2910 2920 2930 2940 2970 2980 3010 3020 3030 3040 3050 3060 3070 3080 3110 3120 3130 3140 3150 3160 3170 3210 3220 3230 3240 3250 3260 3270 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 3480 3490 3510 3520 3530 3540 3550 3610 3620 3630 3640 3650 3660 3670 3680 3710 3720 3730 3736 3740 3750 3760 3770 3810 3820 3830 3840 3900 3910 3920 3930 4010 4020 4030 4040 4050 4060 4070 4080 4090 4100 4110 4116 4120 4130 4140 4150 4160 4170 4180 4190 4200 4210 4220 4230 4240 4246 4250 4260 4270 4280 4290 4300 4310 4320 4330 4340 4350 4400 4450 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4860 4900 4910 4920 4930 4940 4950 5010 5020 5030 5040 5050 5060 5070 5080 5090 5100 5110 5130 5140 5150 5160 5170 5180 5190 5200 5210 5220 5230 5240 5310 5316 5320 5326 5327 5330 5340 5350 5360 5370 5380 5390 5400 5410 5416 5417 5420 5426 5430 5440 5450 5466 5470 5480 5490 5500 5510 5520 5560 5600 5610 5620 5630 5640 5650 5700 5710 5800 5810 5820 5830 5920 5930 5940 5950 5960 5970 5980 5990 6030 6110 6120 6130 6140 6170 6500 6510 6530 6540 6560 6580 6610 6620 6630 6640 6650 6660 6670 6680 6900 6910 7010 7020 7100 7110 7140 7550 7560 7570 7580 7590 7600 7610 7620 7630 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8220 8230 8240 8500 8510 8520 8550 8560 8570 8600 8900 8910 8920 8930 8940 8950 8960 8970 8980 9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 9250 9260 9310 9320 9330 9340 9350 9360 9370 9380 9390 9400 9410 9420 9430 9440 9450 9460 12000 12010 12020 12050 12060 12100 12110 12120 12130 12140 12150 13060 13070 13080 14000 14010 14020 14030 15000 15100 15140 15180 15500 21180 21190 21200 22910 22920 22930 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 53020 53040 54010 54020 54030 81650 81700 81710 81720 81730 81740 81750 81760 81850 81860 81870 81880 81890 81900 81910 82100 82300 82310 82320 82330 82500 82510 82520 199100 199110 199130 199140 199150 }
	inventions = { 3000011 3000012 3000015 3000016 3000017 3000018 3000027 3000028 3000031 }
	
	diplomacy = {
		relation = { tag = BOL value = 50 }
		relation = { tag = BRA value = -10 }
		relation = { tag = CHL value = -20 }
		relation = { tag = COL value = 10 }
		relation = { tag = ENG value = 75 }
		relation = { tag = ECU value = 10 }
		relation = { tag = PAR value = 50 }
		relation = { tag = PRU value = 20 }
		relation = { tag = URU value = -50 }
		relation = { tag = USA value = 75 }
		relation = { tag = VEN value = 10 }
	}
	
	dormant_ministers = { 165001 165002 165003 165004 165005 165006 165007 165008 165009 165010 165011 165025 165141 165017 165033 165031 165052 165103 165121 165116 165134 165020 165019 165013 165175 165183 165015 165027 165176 165035 165029 165045 165080 165100 165110 165122 165108 165130 165181 165150 165161 }
	                            
	dormant_leaders        = {  165014  }
	
	headofstate = { type = 9 id = 165024 }
	headofgovernment = { type = 9 id = 165300 }
	foreignminister = { type = 9 id = 165184 }
	armamentminister = { type = 9 id = 165084 }
	ministerofsecurity = { type = 9 id = 165107 }
	ministerofintelligence = { type = 9 id = 165186 }
	chiefofstaff = { type = 9 id = 165139 }
	chiefofarmy = { type = 9 id = 165152 }
	chiefofnavy = { type = 9 id = 165156 }
	chiefofair = { type = 9 id = 165167 }
	
	landunit = {
		id = { type = 10384 id = 1 }
		name = "I Cuerpo de Ejército"
		location = 2050
		division = {
			id = { type = 10384 id = 41 }
			name = "III Brigada 'Pellegrini'"
			strength = 75
			type = infantry
			extra = artillery
			brigade_model = 10
			model = 12
		}
		division = {
			id = { type = 10384 id = 2 }
			name = "II Brigada 'San Martín'"
			strength = 75
			type = infantry
			model = 12
		}
		division = {
			id = { type = 10384 id = 38 }
			name = "XIII División de Infantería"
			strength = 75
			type = infantry
			model = 12
		}
	}
		
	    landunit = {
		id = { type = 10384 id = 39 }
		name = "II Cuerpo de Ejército"
		location = 2050		
		division = {
			id = { type = 10384 id = 3 }
			name = "I Brigada 'Ing. Krausse'"
			strength = 75
			type = motorized
			model = 3
		}
		division = {
			id = { type = 10384 id = 4 }
			name = "Agrupación IV GN 'Misiones'"
			strength = 100
			type = motorized
			model = 3
		}
		division = {
			id = { type = 10384 id = 5 }
			name = "Agrupación VI GN 'Formosa'"
			strength = 75
			type = motorized
			model = 3
		}
	}
	    landunit = {
		id = { type = 10384 id = 40 }
		name = "III Cuerpo de Ejército"
		location = 2050		
		division = {
			id = { type = 10384 id = 44 }
			name = "I Brigada 'Ing. Krausse'"
			strength = 75
			type = motorized
			model = 3
		}
		division = {
			id = { type = 10384 id = 42 }
			name = "Agrupación IV GN 'Misiones'"
			strength = 75
			type = motorized
			model = 3
		}
		division = {
			id = { type = 10384 id = 43 }
			name = "Agrupación VI GN 'Formosa'"
			strength = 75
			type = motorized
			model = 3
		}
	}
	landunit = {
		id = { type = 10384 id = 7 }
		name = "II Cuerpo de Ejírcito"
		location = 2050
		division = {
			id = { type = 30051 id = 8 }
			name = "VI Brigada de Montaía 'Villegas'"
			strength = 75
			type = bergsjaeger
			model = 12
		}
	}
	navalunit = {
		id = { type = 10384 id = 15 }
		name = "Armada de Argentina"
		location = 2050
		base = 2050
		division = {
			id = { type = 10384 id = 16 }
			name = "ARA Moreno"
			type = battleship
			model = 7
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = none
			brigade_model1 = 0
			brigade_model2 = 0
			brigade_model3 = 0
			brigade_model4 = 1
			brigade_model5 = 0
		}
		division = {
			id = { type = 10384 id = 17 }
			name = "ARA Rivadavia"
			type = battleship
			model = 7
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = none
			brigade_model1 = 0
			brigade_model2 = 0
			brigade_model3 = 0
			brigade_model4 = 1
			brigade_model5 = 0
		}
		division = {
			id = { type = 10384 id = 18 }
			name = "ARA Veinticinco De Mayo"
			type = light_cruiser
			model = 5
			extra1 = naval_fire_controll_s
			extra2 = naval_anti_air_s
			brigade_model1 = 0
			brigade_model2 = 1
		}
		division = {
			id = { type = 10384 id = 19 }
			name = "ARA Almirante Brown"
			type = light_cruiser
			model = 5
			extra1 = naval_fire_controll_s
			extra2 = naval_anti_air_s
			brigade_model1 = 0
			brigade_model2 = 1
		}
		division = {
			id = { type = 10384 id = 20 }
			name = "ARA Independencia"
			type = light_cruiser
			model = 5
			extra1 = naval_fire_controll_s
			extra2 = naval_anti_air_s
			brigade_model1 = 0
			brigade_model2 = 1
		}
		division = {
			id = { type = 10384 id = 21 }
			name = "ARA La Libertad"
			type = light_cruiser
			model = 5
			extra1 = naval_fire_controll_s
			extra2 = naval_anti_air_s
			brigade_model1 = 0
			brigade_model2 = 1
		}
		division = {
			id = { type = 10384 id = 22 }
			name = "ARA La Argentina"
			type = light_cruiser
			model = 5
			extra1 = naval_fire_controll_s
			extra2 = naval_anti_air_s
			brigade_model1 = 0
			brigade_model2 = 1
		}
		division = {
			id = { type = 10384 id = 23 }
			name = "ARA Generale Belgrano"
			type = light_cruiser
			model = 5
			extra1 = naval_fire_controll_s
			extra2 = naval_anti_air_s
			brigade_model1 = 0
			brigade_model2 = 1
		}
		division = {
			id = { type = 10384 id = 24 }
			name = "ARA Generale Pueyrredon"
			type = light_cruiser
			model = 5
			extra1 = naval_fire_controll_s
			extra2 = naval_anti_air_s
			brigade_model1 = 0
			brigade_model2 = 1
		}
		division = {
			id = { type = 10384 id = 25 }
			name = "ARA San Martín"
			type = light_cruiser
			model = 5
			extra1 = naval_fire_controll_s
			extra2 = naval_anti_air_s
			brigade_model1 = 0
			brigade_model2 = 1
		}
		division = {
			id = { type = 10384 id = 26 }
			name = "Cervantes/Garay/Cristofero"
			type = destroyer
			model = 6
			extra1 = naval_anti_air_s
			brigade_model1 = 1
		}
		division = {
			id = { type = 10384 id = 27 }
			name = "Mendoza/Rioja/Tucumán"
			type = destroyer
			model = 6
			extra1 = naval_anti_air_s
			brigade_model1 = 1
		}
		division = {
			id = { type = 10384 id = 28 }
			name = "D6/D8/D10"
			type = destroyer
			model = 6
			extra1 = naval_anti_air_s
			brigade_model1 = 1
		}
		division = {
			id = { type = 10384 id = 29 }
			name = "S.Fe/Salta/S.del Estero"
			type = submarine
			model = 6
		}
		division = {
			id = { type = 10384 id = 30 }
			name = "ARA Cabo San Diego"
			type = transport
			model = 2
		}
		division = {
			id = { type = 10384 id = 31 }
			name = "ARA Cabo S.F. de Paula"
			type = transport
			model = 2
		}
		division = {
			id = { type = 10384 id = 32 }
			name = "ARA Cabo Buen Tiempo"
			type = transport
			model = 2
		}
		division = {
			id = { type = 10384 id = 33 }
			name = "ARA Cabo San Pablo"
			type = transport
			model = 2
		}
		division = {
			id = { type = 10384 id = 34 }
			name = "ARA Cabo San Sebastián"
			type = transport
			model = 2
		}
		division = {
			id = { type = 10384 id = 35 }
			name = "ARA Cabo San Vicente"
			type = transport
			model = 2
		}
	}
	airunit = {
		id = { type = 10384 id = 9 }
		name = "Aviación del Ejército"
		location = 2050
		base = 2050
		division = {
			id = { type = 10384 id = 10 }
			name = "Grupo Aérea Nro. 1"
			strength = 50
			type = interceptor
			model = 12
		}
		division = {
			id = { type = 10384 id = 36 }
			name = "Grupo Aérea Nro. 2"
			strength = 50
			type = interceptor
			model = 12
		}
		division = {
			id = { type = 10384 id = 37 }
			name = "Fuerza Aeronaval Nro. 1"
			strength = 75
			type = naval_bomber
			model = 5
		}
	}
}