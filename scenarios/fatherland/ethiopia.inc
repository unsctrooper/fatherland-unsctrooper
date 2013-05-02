# #############################
# Ethiopia
# #############################


country = {
	tag = ETH
	puppet = ENG
	
	energy = 500
	metal = 500
	rare_materials = 200
	oil = 200
	supplies = 200
	
	manpower = 50
	
	capital = 825
	
	ai_settings = {
		flags = { 
			MOB1 = 1
			MOB2 = 1
			MOB3 = 1
		}
	}
	
	nationalprovinces = { 818 819 820 821 822 823 824 825 826 827 828 829 830 831 }
	ownedprovinces = { 818 819 820 821 822 823 824 825 826 827 828 829 830 831 }
	controlledprovinces = { 818 819 820 821 822 823 824 825 826 827 828 829 830 831 }
	
	techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1560 1570 1580 1590 1600 1670 1680 1830 1840 1850 1860 1870 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2290 2300 2310 2450 2510 2620 2630 2640 2646 2800 2810 2820 2860 2870 2880 2900 2910 2920 2930 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3150 3210 3220 3230 3240 3250 3310 3320 3330 3410 3420 3430 3440 3450 3456 3460 3510 3520 3610 3620 3630 3640 3650 3720 3730 3736 3740 3750 3810 3820 3900 4010 4020 4120 4130 4220 4250 4290 4300 4310 4320 4330 4340 4400 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4900 4910 4920 5010 5020 5030 5050 5060 5070 5080 5090 5100 5130 5140 5150 5160 5180 5190 5200 5210 5220 5310 5316 5320 5326 5327 5330 5350 5360 5370 5380 5410 5416 5417 5420 5426 5600 5610 5620 5630 5640 5700 5710 5800 5810 5820 5830 5920 5930 5940 5950 5960 5970 5980 5990 6030 6110 6120 6130 6140 6170 6500 6510 6530 6540 6560 6580 6610 6620 6630 6640 6650 6660 6670 6680 6900 6910 7600 7610 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8500 8510 8520 8550 8560 8570 8600 8900 8910 8920 8930 8940 8950 9010 9020 9030 12100 12110 12120 12130 13060 13070 13080 14000 14010 14020 14030 21180 21190 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 54010 54020 54030 81650 82300 82500 199100 199130 }
	inventions = { 3000027 }
	
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 4
		political_left = 4
		free_market = 7
		freedom = 3
		professional_army = 3
		defense_lobby = 3
		interventionism = 2
	}
	
	dormant_ministers = { 245011 245015 245002 245017 }
	
	headofstate = { type = 9 id = 245001 }
	headofgovernment = { type = 9 id = 245014 }
	foreignminister = { type = 9 id = 245021 }
	armamentminister = { type = 9 id = 245028 }
	ministerofsecurity = { type = 9 id = 245034 }
	ministerofintelligence = { type = 9 id = 245040 }
	chiefofstaff = { type = 9 id = 245046 }
	chiefofarmy = { type = 9 id = 245051 }
	chiefofnavy = { type = 9 id = 245057 }
	chiefofair = { type = 9 id = 245062 }
	
	landunit = {
		id = { type = 31000 id = 1 }
		location = 825
		name = "Imperial Army"
		leader = 245006
		division = {
			id = { type = 31000 id = 2 }
			name = "Imperial Bodyguard"
			type = infantry
			strength = 30
			model = 10
		}
		division = {
			id = { type = 31000 id = 3 }
			name = "1. Division"
			type = infantry
			strength = 70
			model = 10
		}
		division = {
			id = { type = 31000 id = 4 }
			name = "2. Division"
			type = infantry
			strength = 70
			model = 10
		}
		division = {
			id = { type = 31000 id = 5 }
			name = "3. Division"
			type = infantry
			strength = 70
			model = 10
		}
		division = {
			id = { type = 31000 id = 6 }
			name = "4. Division"
			type = infantry
			strength = 70
			model = 10
		}
	}
	landunit = {
		id = { type = 31000 id = 11 }
		location = 825
		name = "Reserve Army"
		
		division = {
			id = { type = 31000 id = 13 }
			name = "1. Division"
			type = militia
			strength = 70
			model = 4
		}
		division = {
			id = { type = 31000 id = 14 }
			name = "2. Division"
			type = militia
			strength = 70
			model = 4
		}
		division = {
			id = { type = 31000 id = 15 }
			name = "3. Division"
			type = militia
			strength = 70
			model = 4
		}
		division = {
			id = { type = 31000 id = 16 }
			name = "4. Division"
			type = militia
			strength = 70
			model = 4
		}
		division = {
			id = { type = 31000 id = 17 }
			name = "5. Division"
			type = militia
			strength = 70
			model = 4
		}
	}
}
