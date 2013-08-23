# #############################
# Communist Korea
# #############################

country = {
	tag = PRK
	energy = 2000
	metal = 2000
	rare_materials = 1000
	oil = 2000
	supplies = 5000
	
	manpower = 400
	
	capital = 1221
	
	ai_settings = {
		flags = { 
			MOB1 = 1
			MOB2 = 1
			MOB3 = 1
			MOB4 = 1
			MOB5 = 1
			MOB6 = 1
			MOB7 = 1
			MOB8 = 1
			MOB9 = 1
			block_demobilization = 1
		}
	}
	
	diplomacy = {
		relation = { tag = SOV value = 100 }
		relation = { tag = USA value = -100 }
		relation = { tag = KOR value = -100 }
		relation = { tag = CHC value = 200 access = yes }
	}
	
	nationalprovinces = { 1230 1232 1231 1233 1228 1229 1223 1221 1222 1225 1226 1227 1224 }
	ownedprovinces = { 1223 1221 1222 1225 1226 1227 1224 }
	controlledprovinces = { 1223 1221 1222 1225 1226 1227 1224 }
	
	techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1130 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1280 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1410 1420 1470 1480 1530 1540 1560 1570 1580 1590 1600 1610 1620 1670 1680 1690 1830 1840 1850 1860 1870 1880 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2030 2040 2050 2060 2070 2080 2090 2100 2110 2120 2126 2130 2140 2150 2160 2170 2180 2190 2220 2230 2240 2250 2260 2270 2290 2300 2310 2320 2330 2340 2360 2370 2380 2400 2410 2420 2430 2450 2460 2470 2480 2490 2510 2520 2530 2620 2630 2640 2646 2650 2800 2810 2820 2850 2860 2870 2880 2900 2910 2920 2930 2940 2970 2980 3010 3020 3030 3040 3050 3060 3070 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 3480 3490 3510 3520 3530 3540 3550 3610 3620 3630 3640 3650 3660 3670 3720 3730 3736 3740 3750 3760 3810 3820 3830 3840 3900 3910 4010 4020 4030 4040 4050 4060 4070 4080 4090 4100 4110 4120 4130 4140 4150 4160 4170 4190 4200 4210 4220 4230 4240 4250 4260 4270 4280 4290 4300 4310 4320 4330 4340 4400 4450 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4860 4900 4910 4920 4930 4940 4950 5010 5020 5030 5050 5060 5070 5080 5090 5100 5130 5140 5150 5160 5170 5180 5190 5200 5210 5220 5230 5240 5310 5316 5320 5326 5327 5330 5340 5350 5360 5370 5380 5390 5400 5410 5416 5417 5420 5426 5430 5560 5600 5610 5620 5630 5640 5700 5710 5800 5810 5820 5830 5920 5930 5940 5950 5960 5970 5980 5990 6300 6310 6320 6330 6340 6350 6360 6370 6500 6510 6530 6550 6570 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6900 6910 7550 7560 7570 7600 7610 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8220 8230 8500 8510 8520 8550 8560 8570 8600 9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 9250 9260 9270 9280 9290 9300 9310 9320 9330 9340 9350 9360 9370 9380 9390 9400 9410 9420 12000 12010 12020 12100 12110 12120 12130 12140 13060 13070 13080 14000 14010 14020 14030 14040 14060 21180 21190 21200 22910 22920 22930 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 54010 54020 54030 81300 81310 81320 81330 81340 81350 81360 81370 81380 81650 81700 81710 81720 81730 81740 81750 81850 81860 81870 81880 81890 81900 82300 82310 82320 82330 82500 82510 82520 199100 199110 199130 199140 199150 }
	inventions = { 3000011 3000012 3000018 3000027 3000028 3000031 }
	
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 2
		political_left = 10
		freedom = 3
		free_market = 2
		professional_army = 9
		defense_lobby = 2
		interventionism = 6
	}
	
	dormant_ministers = { }
	
	headofstate = { type = 9 id = 735001 }
	headofgovernment = { type = 9 id = 735002 }
	foreignminister = { type = 9 id = 735003 }
	armamentminister = { type = 9 id = 735004 }
	ministerofsecurity = { type = 9 id = 735005 }
	ministerofintelligence = { type = 9 id = 735006 }
	chiefofstaff = { type = 9 id = 735007 }
	chiefofarmy = { type = 9 id = 735008 }
	chiefofnavy = { type = 9 id = 735009 }
	chiefofair = { type = 9 id = 735010 }
	
	landunit = {
		id = { type = 9096 id = 1 }
		name = "I DPRK Corps"
		location = 1221
		division = {
			id = { type = 9096 id = 2 }
			name = "1st Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 3 }
			name = "2nd Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 18 }
			name = "1. Mountain Division"
			type = bergsjaeger
			model = 11
		}
		division = {
			id = { type = 9096 id = 19 }
			name = "2. Mountain Division"
			type = bergsjaeger
			model = 11
		}
		division = {
			id = { type = 9096 id = 100 }
			name = "3. Mountain Division"
			type = bergsjaeger
			model = 11
		}
		division = {
			id = { type = 9096 id = 20 }
			name = "1. DPRK HQ"
			type = hq
			model = 3
		}
	}
	landunit = {
		id = { type = 9096 id = 4 }
		name = "II DPRK Corps"
		location = 1225
		division = {
			id = { type = 9096 id = 5 }
			name = "3rd Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 6 }
			name = "4th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 103 }
			name = "38th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 101 }
			name = "2. DPRK HQ"
			type = hq
			model = 3
		}
	}
	landunit = {
		id = { type = 9096 id = 7 }
		name = "III DPRK Corps"
		location = 1227
		division = {
			id = { type = 9096 id = 8 }
			name = "5th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 9 }
			name = "6th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 102 }
			name = "3. DPRK HQ"
			type = hq
			model = 3
		}
	}
	landunit = {
		id = { type = 9096 id = 10 }
		name = "IV DPRK Corps"
		location = 1224
		division = {
			id = { type = 9096 id = 11 }
			name = "7th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 12 }
			name = "8th Division"
			type = infantry
			model = 11
		}
	}
	landunit = {
		id = { type = 9096 id = 13 }
		name = "V DPRK Corps"
		location = 1222
		division = {
			id = { type = 9096 id = 14 }
			name = "7th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 15 }
			name = "8th Division"
			type = infantry
			model = 11
		}
	}
	landunit = {
		id = { type = 9096 id = 21 }
		name = "VI DPRK Corps"
		location = 1223
		division = {
			id = { type = 9096 id = 16 }
			name = "7th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 17 }
			name = "8th Division"
			type = infantry
			model = 11
		}
	}
	
	landunit = {
		id = { type = 9096 id = 30 }
		name = "VII DPRK Corps"
		location = 1222
		division = {
			id = { type = 9096 id = 31 }
			name = "9th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 32 }
			name = "10th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 33 }
			name = "11th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 34 }
			name = "12th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 35 }
			name = "13th Division"
			type = infantry
			model = 11
		}
	}
	landunit = {
		id = { type = 9096 id = 36 }
		name = "VIII DPRK Corps"
		location = 1223
		division = {
			id = { type = 9096 id = 37 }
			name = "14th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 38 }
			name = "15th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 39 }
			name = "16th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 40 }
			name = "17th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 41 }
			name = "18th Division"
			type = infantry
			model = 11
		}
	}
	landunit = {
		id = { type = 9096 id = 42 }
		name = "IX DPRK Corps"
		location = 1222
		division = {
			id = { type = 9096 id = 43 }
			name = "19th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 44 }
			name = "20th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 45 }
			name = "21th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 46 }
			name = "22th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 47 }
			name = "23th Division"
			type = infantry
			model = 11
		}
	}
	landunit = {
		id = { type = 9096 id = 48 }
		name = "X DPRK Corps"
		location = 1223
		division = {
			id = { type = 9096 id = 49 }
			name = "24th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 50 }
			name = "25th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 51 }
			name = "26th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 52 }
			name = "27th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 53 }
			name = "28th Division"
			type = infantry
			model = 11
		}
	}
	landunit = {
		id = { type = 9096 id = 54 }
		name = "XI DPRK Corps"
		location = 1222
		division = {
			id = { type = 9096 id = 55 }
			name = "29th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 56 }
			name = "30th Division"
			type = motorized
			model = 2
		}
		division = {
			id = { type = 9096 id = 57 }
			name = "31st Division"
			type = armor
			model = 2
		}
	}
	landunit = {
		id = { type = 9096 id = 58 }
		name = "XII DPRK Corps"
		location = 1223
		division = {
			id = { type = 9096 id = 59 }
			name = "32nd Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 60 }
			name = "33rd Division"
			type = motorized
			model = 2
		}
		division = {
			id = { type = 9096 id = 61 }
			name = "34th Division"
			type = armor
			model = 2
		}
	}
	landunit = {
		id = { type = 9096 id = 62 }
		name = "XIII DPRK Corps"
		location = 1222
		division = {
			id = { type = 9096 id = 63 }
			name = "35th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9096 id = 64 }
			name = "36th Division"
			type = motorized
			model = 2
		}
		division = {
			id = { type = 9096 id = 65 }
			name = "37th Division"
			type = armor
			model = 2
		}
	}
}
