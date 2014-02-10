 
 ############################## 
 # Country definition for SIB # 
 ############################## 
  
 country = 
 {  tag                    = SIB
 	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes} }	


energy                 = 360
metal                  = 180
rare_materials         = 90
oil                    = 100 
supplies               = 100 
money                  = 50 
capital                = 1157
manpower               = 250
dissent                = 5
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 8 
     freedom           = 2 
     free_market       = 2 
     professional_army = 6 
     defense_lobby     = 7 
     interventionism   = 9 
    } 
	
   nationalprovinces      = {  1069 1070 1161 1163 1164 1165 1166 1155 1177 1180 1182 1178 1179 1181 1183 1184 1157 1158 1148 1152 1154 1156 } 
   ownedprovinces         = {  1069 1070 1161 1163 1164 1165 1166 1155 1177 1180 1182 1178 1179 1181 1183 1184 1157 1158 1148 1152 1154 1156 } 
   controlledprovinces    = {  1069 1070 1161 1163 1164 1165 1166 1155 1177 1180 1182 1178 1179 1181 1183 1184 1157 1158 1148 1152 1154 1156 } 
   # ROTW Minor Tech '36 
   # Group E 1936 techs 
   # ###################### 
   # GW fighter 
	techapps = {

	# Manufacturing
	5810 5820 5830 5050 5060 5070 5130
	# Assembly Line
	5140 5160 5180
	# Construction Engineering 
	5800 5080 5090 5100
	# Computers & cryptografi
	5310 54010 54020 54030 5320 5316 5326 5327 5350 5360
	# Agriculture  
	5700 5710 5010 5020 5030
	# Radar
	5410 5416 5417
	# Oil Refining 
	5190 5200
	# Atomics
	5470 5480
	# Medicine
	5600 5610 5620 5630
	# Rocket
	5560
	# Specialised Equipment
	5920
	
	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1130
	# Mountain Division 
	1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1280
	# Marines
	1560 1570 1580 1590 1600 1610 1620
	# Paratroopers
	1670 1680
	# Motorized Inf
	1396 1400 1410 1420
	# Cavalry
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1530
	# Mechanized Inf
	1470
	# Engineers
	1830 1840 1850 1860 1870 1880
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980 1990 199100 199130 199140

	# Early/Light Tank 
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2100 2110
	# Medium Tank
	2070 2080 2090 
	# Armoured Car  
	2860 2870 2880 2020 2150
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2340
	# Self-Propelled Artillery
	2220 2230 2240
	# Self-Propelled Rocket
	2980
	# Anti-tank Artillery
	2400 2410 2420
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200 2460
	# Anti-air Brig
	2810 2820 2510 2520 2530
	# Tank Destroyer
	2170 2180 2190
	#Rocket Artillery
	2970
 
 	# Hospital System 
	14000 14010 14020 14030 14040
	# Great War Land Doctrines (central powers)
	6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910
	# Land Doctrines
	6570 6300 6900 6310 6320 6330 6340 6350 6370 6360

	# Light Cruiser 
	3110 3120 3130 3140 3150 3160 
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460 3470 3480
	# Battlecruiser  
	3310 3320 3330 3340
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 3260 12020
	# Destroyer 
	3010 3020 3030 3040 3050 3060 3070 12000
	# Submarine 
	3610 3620 3630 3640 3650 3660 3670
	# Light Carrier
	12100 12110 12120 12130
	# Fleet Carrier
	3510
	# Torpedo & ASW 18
	3720 3730 3736 3740 3750 3760 3900 3910
	# Troopships
	3810 3820 3830

	# Naval Doctrines 
	# Theory
	8010 8020 8030 8040 8050 8060 8070 8080
	# Amphib
	82300
	# Logistics
	82500
	# Naval Interdiction
	8500 8510 8550 8560 8600 8610 8520
	# Indirect Approach
	81300 81310 81320 81330 81340 81350 81360
	# Naval Supremacy
	8100 8110 8120 8150 8160 8200 8210 8170

	# CAS
	4400 4170 4280 4450
	# Inteceptor  
	4500 4510 4520 4530 4540 4550 4010 4020 4030 4060
	# Tactical Bomber 
	4600 4610 4620 4630 4120 4130 4140
	# Multirole fighter
	4300 4310 4320 4330 4340 4040 4070 4100
	# Escort Fighter
	4050 4080
	# Strategic bomber
	4800 4810 4820 4220 4230
	# Navalbomber
	4700 4710 4190
	# Transports
	4290 4250
	# Seaplanes
	4740 4750 4760 4770 4780 4790 4850
	
	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
	9010 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240
 	} 

inventions = { 3000027 }
   diplomacy = { 
   relation = { tag = MON value = 0 }
   relation = { tag = CHC value = -50 } 
   relation = { tag = CHI value = -50 } 
   relation = { tag = SOV value = -50 }    
   } 
   SpyInfo                = {  country = "SIB" NumberOfSpies = 2  } 
   headofstate            = {  type = 9 id = 520037  } 
   headofgovernment       = {  type = 9 id = 520038  } 
   foreignminister        = {  type = 9 id = 520039  } 
   armamentminister       = {  type = 9 id = 520040  } 
   ministerofsecurity     = {  type = 9 id = 520041  } 
   ministerofintelligence = {  type = 9 id = 520042  } 
   chiefofstaff           = {  type = 9 id = 520043  } 
   chiefofarmy            = {  type = 9 id = 520044  } 
   chiefofnavy            = {  type = 9 id = 520045  } 
   chiefofair             = {  type = 9 id = 520046  } 
   
  #### Zhdanov Army ####
  ######################
    landunit = 
   {  id       = {  type = 50001 id =  1 } 
     name     = "10-i Mekhanizirovannyi Korpus" 
     location = 1156
      Division = 
     {  id       = {  type = 50001 id = 2  } 
       name     = "21-ya Tankovaya Diviziya" 
       strength = 65 
       type     = light_armor
	   model    = 0 
      }
      Division = 
     {  id       = {  type = 50001 id = 3  } 
       name     = "24-ya Tankovaya Diviziya" 
       strength = 65 
       type     = light_armor
	   model    = 0 
      }
      Division = 
     {  id       = {  type = 50001 id = 4  } 
       name     = "198-ya Motostrelkovaya Diviziya" 
       strength = 80 
       type     = motorized
	   model    = 1 
      }
 } 
   landunit = 
   {  id       = {  type = 50001 id =  5 } 
     name     = "Leningradskyi Voennyi Okrug" 
     location = 1156  
     Division = 
     {  id       = {  type = 50001 id = 6  } 
       name     = "Leningradskyi Voennyi Okrug" 
       strength = 80 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 2
	   }
     Division = 
     {  id       = {  type = 50001 id = 7  } 
       name     = "177-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
      }
     Division = 
     {  id       = {  type = 50001 id = 8  } 
       name     = "191-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
      }
     Division = 
     {  id       = {  type = 50001 id = 9  } 
       name     = "8-ya Minskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
      }
 }
 landunit = 
   {  id       = {  type = 50001 id =  17 } 
    name     = "15-ya Armiya" 
    location = 1183
    Division = 
    {  id       = {  type = 50001 id = 18  } 
     name     = "34-ya Srednevolzhskaya Strelkovaya Diviziya" 
     strength = 80 
     type     = infantry 
	 model    = 9
     }
 }
   landunit = 
   {  id       = {  type = 50001 id =  19 } 
     name     = "17-ya Armiya" 
     location = 1148
      Division = 
     {  id       = {  type = 50001 id = 20  } 
       name     = "57-ya Tankovaya Diviziya" 
       strength = 20 
       type     = light_armor
	   model    = 0
      }
      Division = 
     {  id       = {  type = 50001 id = 21  } 
       name     = "61-ya Tankovaya Diviziya" 
       strength = 20 
       type     = light_armor
	   model    = 0 
      }
     Division = 
     {  id       = {  type = 50001 id = 22  } 
       name     = "36-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
     Division = 
     {  id       = {  type = 50001 id = 23  } 
       name     = "57-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      } 
     Division = 
     {  id       = {  type = 50001 id = 24  } 
       name     = "82-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      } 
 }
   landunit = 
   {  id       = {  type = 50001 id =  25 } 
     name     = "7-ya Armiya" 
     location = 1148
      Division = 
     {  id       = {  type = 50001 id = 26  } 
       name     = "14-ya Tankovaya Diviziya" 
       strength = 10 
       type     = armor
	   model    = 1
      }
      Division = 
     {  id       = {  type = 50001 id = 27  } 
       name     = "33-ya Tankovaya Diviziya" 
       strength = 10 
       type     = armor
	   model    = 1
      }
      Division = 
     {  id       = {  type = 50001 id = 28  } 
       name     = "122-ya Motostrelkovaya Diviziya" 
       strength = 25
       type     = motorized
	   model    = 1
      }
 }
   landunit = 
   {  id       = {  type = 50001 id =  29 } 
     name     = "13-ya Armiya" 
     location = 1148
      Division = 
     {  id       = {  type = 50001 id = 30  } 
       name     = "45-ya Strelkovaya Diviziya" 
       strength = 75
       type     = infantry
	   model    = 9
      }
      Division = 
     {  id       = {  type = 50001 id = 31  } 
       name     = "42-ya Strelkovaya Diviziya" 
       strength = 75
       type     = infantry
	   model    = 9
      }
      Division = 
     {  id       = {  type = 50001 id = 32  } 
       name     = "41-ya Strelkovaya Diviziya" 
       strength = 75
       type     = motorized
	   model    = 1
      }
 }
   landunit = 
   {  id       = {  type = 50001 id =  33 } 
     name     = "21-ya Armiya" 
     location = 1148
      Division = 
     {  id       = {  type = 50001 id = 34  } 
       name     = "33-ya Strelkovaya Diviziya" 
       strength = 75 
       type     = infantry
	   model    = 9
      }
      Division = 
     {  id       = {  type = 50001 id = 35  } 
       name     = "34-ya Strelkovaya Diviziya" 
       strength = 75 
       type     = infantry
	   model    = 9
      }
      Division = 
     {  id       = {  type = 50001 id = 36  } 
       name     = "65-ya Motostrelkovaya Diviziya" 
       strength = 75
       type     = motorized
	   model    = 1
      }
 }
   landunit = 
   { location = 1156
     name     = "17-ya Armiya" 
     id       = {  type = 50001 id = 37  } 
    division = 
     { id       = {  type = 50001 id = 38  } 
       name     = "82-ya Strelkovaya Diviziya" 
       type     = infantry 
       model    = 11
       strength = 80
       experience = 20
      }
	  division = 
     { id       = {  type = 50001 id = 39  } 
       name     = "83-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 11 
       strength = 80
       experience = 20
      }
	  division = 
     { id       = {  type = 50001 id = 40  } 
       name     = "84-ya Strelkovaya Diviziya"  
       type     = infantry
       model    = 11 
	   extra    = artillery
       brigade_model = 11
       strength = 80
       experience = 20
      }
	  }
airunit = { 
	id = { type = 50001 id = 10 } 
	name = "Leningradskaya Vozdushnogo Komandovaniya" 
	location = 542 # Leningrad
	base = 542 # Leningrad 

	division = { 
	id = { type = 50001 id = 11 } 
		name = "1.LBABR" 
		strength = 80 
		type = multi_role 
		model = 4 
			}
	division = { 
	id = { type = 50001 id = 12 } 
		name = "2.IABR" 
		strength = 80 
		type = interceptor 
		model = 7 
			}
	division = { 
	id = { type = 50001 id = 13 } 
		name = "23.TBABR" 
		strength = 80 
		type = tactical_bomber 
		model = 6 
			}
	division = { 
	id = { type = 50001 id = 14 } 
		name = "40.TBABR" 
		strength = 80 
		type = tactical_bomber 
		model = 5 
			}
	division = { 
	id = { type = 50001 id = 15 } 
		name = "41.TBABR" 
		strength = 80 
		type = tactical_bomber 
		model = 5 
			}
	division = { 
	id = { type = 50001 id = 16 } 
		name = "3.TBABR" 
		strength = 80 
		type = strategic_bomber 
		model = 2 
			}
	}
  
  
  
  
  
  
  
  
  } 
 