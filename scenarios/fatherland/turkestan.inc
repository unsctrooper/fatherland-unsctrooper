 
 ############################## 
 # Country definition for UPE # 
 ############################## 
  
 country = 
 {  tag                    = UPE
 	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes RES = yes } }	

energy                 = 360
metal                  = 180
rare_materials         = 90
oil                    = 100 
supplies               = 100 
money                  = 50 
capital                = 1103
manpower               = 250
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 2 
     free_market       = 1
     professional_army = 8 
     defense_lobby     = 10 
     interventionism   = 1
    } 
	
   nationalprovinces      = {  1101 1102 1100 1103 1099 1097 1098 1104 1105 1106 1107 } 
   ownedprovinces         = {  1101 1102 1100 1103 1099 1097 1098 1104 1105 1106 1107 } 
   controlledprovinces    = {  1101 1102 1100 1103 1099 1097 1098 1104 1105 1106 1107 504 506 505 507 1108 1112 1109 } 
   claimedprovinces       = {  506 507 505 500 498 504 1114 1117 1118 1116 503 1110 1108 1113 1115 1111 502 499 1109 1112 501 1273 1274 1275 1276 1277 1279 1280 1281 1282 }
   # ROTW Minor Tech '36 
   # Group E 1936 techs 
   # ###################### 
   # GW fighter 
   	techapps               = {  

	# Manufacturing
	5810 5820 5050 5830 5060 5070
	# Construction Engineering 
	5800 5080 5090 
	# Agriculture  
	5700 5710 5010 5020 5030
	# Computers & cryptography
	5310 54010 54020 54030 5316 5320 5326 5327 5350
	# Medicine
	5600 5610 5620

	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100
	# Mountain Division 
	1160 1170 1180 1190 1200 1210 1220 1230 1240 1250
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380
	# Engineers
	1830 1840 1850 1860
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980 1990 199130

	# Tanks
	7600 7610 2620 2010 2630 2640 2646 2650 2030
	# Armoured Car  
	2860 2870 2880 2020 2150
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940 2320
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200 2460
	# Anti-Air Artillery Brigade 
	2810 2820 2510 2520

	# Hospital System
	14000 14010 14020 14030
	# Great War Land Doctrines (central powers)
	6500 6510 6530 6550 6590 6600 6620 6650 6670 6680 6690 6700 6710 6910
	# Grand Battle Plan Doctrine
	6560 6030 6120 6110 6130

	# Destroyers
	3010 3020
	# Torpedo & ASW 18
	3720 3730 3736 3740 3900
	# Troopships
	3810 3820
	
	# Naval Doctrines
	8010 8020 8040 8050 8060 8070 8080 8500 8900 8100 8110 8120 82500

	# Interceptor Fighter  
	4500 4510 4520 4530 4540 4550 4010 4020 4030
	# Multirole Fighter
	4300 4310 4320 4330 4340
	# Tactical Bomber
	4600 4610 4620 4630 4120 4130 4140
	# Strategic Bomber
	4800 4810 4820
	# Naval Bomber
	4700 4710

	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
	9040 9090 9100 9110 9120
	9190
	
	}
 inventions = { 3000027 }
   diplomacy = { } 
   SpyInfo                = {  country = "UPE" NumberOfSpies = 2  } 
   headofstate            = {  type = 9 id = 550059  } 
   headofgovernment       = {  type = 9 id = 550060  } 
   foreignminister        = {  type = 9 id = 550061  } 
   armamentminister       = {  type = 9 id = 550062  } 
   ministerofsecurity     = {  type = 9 id = 550063  } 
   ministerofintelligence = {  type = 9 id = 550064  } 
   chiefofstaff           = {  type = 9 id = 550065  } 
   chiefofarmy            = {  type = 9 id = 550066  } 
   chiefofnavy            = {  type = 9 id = 550067  } 
   chiefofair             = {  type = 9 id = 550068  } 
  
 landunit = {
 id = { type = 17345  id = 1 }
 name = "1. Ordu"
 location = 505
  	division = {
   	id = { type = 17345  id = 2 }
   	name = "1. Süvari Tümeni"
   	strength = 70
   	type = cavalry
	model = 10
             }
  	division = {
   	id = { type = 17345  id = 3 }
   	name = "2. Süvari Tümeni"
   	strength = 70
   	type = cavalry
	model = 10
             }
  	division = {
   	id = { type = 17345  id = 4 }
   	name = "3. Piyade Tümeni"
   	strength = 70
   	type = cavalry
	model = 10
        }
	}
landunit = {
 id = { type = 17345  id = 5 }
 name = "2. Ordu"
 location = 1103
  	division = {
   	id = { type = 17345  id = 6 }
   	name = "4. Piyade Tümeni"
   	strength = 100
	model = 5
   	type = militia
}
}
landunit = {
 id = { type = 17345  id = 7 }
 name = "3. Ordu"
 location = 1101
  	division = {
   	id = { type = 17345  id = 8 }
   	name = "5. Piyade Tümeni"
   	strength = 100
	model = 5
   	type = militia
}
}
landunit = {
 id = { type = 17345  id = 19 }
 name = "4. Ordu"
 location = 1097
  	division = {
   	id = { type = 17345  id = 20 }
   	name = "6. Piyade Tümeni"
   	strength = 100
	model = 5
   	type = militia
}
}
landunit = {
 id = { type = 17345  id = 9 }
 name = "5. Ordu"
 location = 1112
  	division = {
   	id = { type = 17345  id = 10 }
   	name = "7. Piyade Tümeni"
   	strength = 100
	model = 5
   	type = militia
}
  	division = {
   	id = { type = 17345  id = 11 }
   	name = "8. Piyade Tümeni"
   	strength = 100
	model = 5
   	type = militia
}
  	division = {
   	id = { type = 17345  id = 12 }
   	name = "9. Piyade Tümeni"
   	strength = 100
	model = 5
   	type = militia
}
}
landunit = {
 id = { type = 17345  id = 13 }
 name = "6. Ordu"
 location = 1109
  	division = {
   	id = { type = 17345  id = 14 }
   	name = "10. Piyade Tümeni"
   	strength = 80
   	type = infantry
	model = 8
   	extra = artillery 
        }
  	division = {
   	id = { type = 17345  id = 15 }
   	name = "11. Piyade Tümeni"
   	strength = 80
   	type = infantry
	model = 8
   	extra = artillery 
        }
        }
landunit = {
 id = { type = 17345  id = 16 }
 name = "7. Ordu"
 location = 1108
  	division = {
   	id = { type = 17345  id = 17 }
   	name = "12. Piyade Tümeni"
   	strength = 80
   	type = infantry
	model = 8
   	extra = artillery 
        }
  	division = {
   	id = { type = 17345  id = 18 }
   	name = "13. Piyade Tümeni"
   	strength = 80
   	type = infantry
	model = 8
   	extra = artillery 
        }
        }
landunit = {
 id = { type = 17345  id = 21 }
 name = "8. Ordu"
 location = 1103
  	division = {
   	id = { type = 17345  id = 22 }
   	name = "14. Piyade Tümeni"
   	strength = 80
   	type = infantry
	model = 8
   	extra = artillery 
        }
  	division = {
   	id = { type = 17345  id = 23 }
   	name = "15. Piyade Tümeni"
   	strength = 80
   	type = infantry
	model = 8
   	extra = artillery 
        }
  	division = {
   	id = { type = 17345  id = 24 }
   	name = "16. Piyade Tümeni"
   	strength = 80
   	type = infantry
	model = 8
   	extra = artillery 
        }
        }
landunit = {
 id = { type = 17345  id = 25 }
 name = "9. Ordu"
 location = 1103
  	division = {
   	id = { type = 17345  id = 26 }
   	name = "17. Piyade Tümeni"
   	strength = 80
   	type = infantry
	model = 8
   	extra = artillery 
        }
  	division = {
   	id = { type = 17345  id = 27 }
   	name = "18. Piyade Tümeni"
   	strength = 80
   	type = infantry
	model = 8
   	extra = artillery 
        }
  	division = {
   	id = { type = 17345  id = 28 }
   	name = "19. Piyade Tümeni"
   	strength = 80
   	type = infantry
	model = 8
   	extra = artillery 
        }
        }
		}