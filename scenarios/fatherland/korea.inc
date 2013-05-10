# #############################
# Nationalist Korea
# #############################

country = {
	tag = KOR
	energy = 5000
	metal = 5000
	rare_materials = 5000
	oil = 3000
	supplies = 5000
	
	transports = 40
	escorts = 5
	
	manpower = 300
	
	capital = 1228
	
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 5
		political_left = 3
		free_market = 7
		freedom = 5
		professional_army = 9
		defense_lobby = 7
		interventionism = 5
	}
	
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
		relation = { tag = USA value = 150 access = yes }
		relation = { tag = PRK value = -100 }
	}
	
	nationalprovinces = { 1230 1232 1231 1233 1228 1229 1223 1221 1222 1225 1226 1227 1224 }
	ownedprovinces = { 1230 1232 1231 1233 1228 1229 }
	controlledprovinces = { 1230 1232 1231 1233 1228 1229 }
	
	techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1130 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1280 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1410 1420 1470 1480 1530 1560 1570 1580 1590 1600 1610 1670 1680 1690 1830 1840 1850 1860 1870 1880 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2030 2040 2050 2070 2080 2100 2110 2150 2170 2220 2290 2300 2310 2320 2330 2400 2410 2420 2450 2460 2470 2510 2520 2620 2630 2640 2646 2650 2800 2810 2820 2860 2870 2880 2900 2910 2920 2930 2940 2970 2980 3010 3020 3030 3040 3050 3060 3070 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 3480 3490 3510 3520 3530 3540 3550 3610 3620 3630 3640 3650 3660 3670 3720 3730 3736 3740 3750 3760 3810 3820 3830 3840 3900 3910 4010 4020 4030 4040 4050 4060 4070 4080 4090 4100 4110 4120 4130 4140 4150 4160 4170 4190 4200 4210 4220 4230 4240 4250 4260 4270 4280 4290 4300 4310 4320 4330 4340 4400 4450 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4860 4900 4910 4920 4930 4940 4950 5010 5020 5030 5050 5060 5070 5080 5090 5100 5130 5140 5150 5160 5170 5180 5190 5200 5210 5220 5230 5240 5310 5316 5320 5326 5327 5330 5340 5350 5360 5370 5380 5390 5400 5410 5416 5417 5420 5426 5430 5560 5600 5610 5620 5630 5640 5700 5710 5800 5810 5820 5830 5920 5930 5940 5950 5960 5970 5980 5990 6300 6310 6320 6330 6340 6350 6360 6370 6500 6510 6530 6550 6570 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6900 6910 7550 7560 7570 7600 7610 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8220 8230 8500 8510 8520 8550 8560 8570 8600 9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 9250 9260 9270 9280 9290 9300 9310 9320 9330 9340 9350 9360 9370 9380 9390 9400 9410 9420 12000 12010 12020 12100 12110 12120 12130 12140 13060 13070 13080 14000 14010 14020 14030 14040 14060 21180 21190 21200 22910 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 54010 54020 54030 81300 81310 81320 81330 81340 81350 81360 81370 81380 81650 81700 81710 81720 81730 81740 81750 81850 81860 81870 81880 81890 81900 82300 82310 82320 82330 82500 82510 82520 199100 199110 199130 199140 }
	inventions = { 3000011 3000012 3000018 3000027 3000028 3000031 }
	
	headofstate = { type = 9 id = 265001 }
	headofgovernment = { type = 9 id = 265026 }
	foreignminister = { type = 9 id = 265003 }
	armamentminister = { type = 9 id = 265004 }
	ministerofsecurity = { type = 9 id = 265005 }
	ministerofintelligence = { type = 9 id = 265006 }
	chiefofstaff = { type = 9 id = 265007 }
	chiefofarmy = { type = 9 id = 265008 }
	chiefofnavy = { type = 9 id = 265009 }
	chiefofair = { type = 9 id = 265010 }
	
	landunit = {
		id = { type = 9064 id = 1 }
		name = "I Korean Corps"
		location = 1228
		division = {
			id = { type = 9064 id = 2 }
			name = "1st Division"
			type = mechanized
			model = 0
		}
		division = {
			id = { type = 9064 id = 3 }
			name = "2nd Division"
			type = mechanized
			model = 0
		}
		division = {
			id = { type = 9064 id = 10 }
			name = "ROK HQ"
			type = hq
			model = 3
		}
	}
	landunit = {
		id = { type = 9064 id = 4 }
		name = "II Korean Corps"
		location = 1233
		division = {
			id = { type = 9064 id = 5 }
			name = "3rd Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9064 id = 6 }
			name = "4th Division"
			type = infantry
			model = 11
		}
	}
	landunit = {
		id = { type = 9064 id = 7 }
		name = "III Korean Corps"
		location = 1232
		division = {
			id = { type = 9064 id = 8 }
			name = "5th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9064 id = 9 }
			name = "6th Division"
			type = infantry
			model = 11
		}
	}
	landunit = {
		id = { type = 9064 id = 11 }
		name = "IV Korean Corps"
		location = 1232
		division = {
			id = { type = 9064 id = 12 }
			name = "7th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9064 id = 13 }
			name = "8th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9064 id = 14 }
			name = "9th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9064 id = 15 }
			name = "10th Division"
			type = infantry
			model = 11
		}
	}
	landunit = {
		id = { type = 9064 id = 16 }
		name = "V Korean Corps"
		location = 1232
		division = {
			id = { type = 9064 id = 17 }
			name = "11th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9064 id = 18 }
			name = "12th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9064 id = 19 }
			name = "13th Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 9064 id = 20 }
			name = "14th Division"
			type = infantry
			model = 11
		}
	}
}
