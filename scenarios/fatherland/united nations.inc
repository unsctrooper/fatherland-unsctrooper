 
 ############################## 
 # Country definition for ALS # 
 ############################## 
  
 country = 
 {  tag                    = ALS
ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes NEIN = yes RES = yes } }

   control = USA

   # Resource Reserves 
   energy                 = 240
   metal                  = 120
   rare_materials         = 60
   transports             = 100
   oil                    = 200 
   supplies               = 200 
   money                  = 10 
   manpower               = 10
   capital                = 1795 # New York
       
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 8
     political_left    = 4
     freedom           = 7 
     free_market       = 8
     professional_army = 7
     defense_lobby     = 9 
     interventionism   = 9 
    } 
   nationalprovinces      = { 1795 } 
   ownedprovinces         = { 1795 } 
   controlledprovinces    = { 1795 } 
   	# Germany 1944.12 techs 
	# ###################### 
	techapps = { 
	
	# Manufacturing
	5810 5820 5050 5830 5060 5070 5130 5040 5110
	# Assembly Line
	5140 5150 5160 5170 5180
	# Construction Engineering 
	5800 5080 5090 5100
	# Computers & cryptography
	5310 54010 54020 54030 5320 5330 5340 5316 5326 5327 5350 5360 5370 5380 5390 5400 7140 7150
	# Agriculture 
	5700 5710 5010 5020 5030 
	# Oil Refining
	5190 5200 5210 5220 5230 5240 53020 53040
	# Atomic Research
	5470 5480 5490 5500
	# Exp. Rocket
	5560 
	# Medicine
	5600 5610 5620 5630 5640 5650
	# Radar
	5410 5416 5417 5420 5426 5430 5440
	# Specialised Equipment
	5920 5960 5970 5930 5940 5950 5980 5990

	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1130 1140
	# Mountain Division 
	1160  1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1280
	# Airborne Infantry
	1670 1680 1690 1700
	# Motorized Infantry
	1396 1400 1410 1420 1430
	# Cavalry 
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1530
	# Mechanized Inf
	1470 1480 1490
	# Engineers
	1830 1840 1850 1860 1870 1880 
	# Supply
	1910 1920 1930 1940 1950 1960 1970 1980 1990 199100 199110 199130 199140 199150

	# Light / Early Tank 
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2060
	# Medium Tank
	2070 2080 2090 2140 11000
	# Heavy Tank
	2100 2110 2120 2126
	# Armoured Car  
	2860 2870 2880 2020 2150 2160 2890
	# Tank Destroyer
	2170 2180 2850 2190
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2340 2360
	# Anti-tank Artillery
	2400 2410 2420 2430
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200 2460 2470 2480 2490
	# Anti-Air Artillery Brigade 
	2810 2820 2510 2520 2530
	# Self-Propelled Artillery
	2220 2230 2240 2250
	# Rocket Artillery
	2970 2370 2380
	# SP Anti-Air Artillery Brigade
	22910 22920 22930
	# SP Rocket Artillery
	2980 2260 2270

	# Hospital System 
	14000 14010 14020 14030 14040
	# Great War Land Doctrines (central powers)
	6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910
	# WW2 Land Doctrines
	6210 6220 6230 6240 6250 6260 6270 6280 6290 6900 14100

	# Light Cruiser 
	3110 3120 3130 3140 3150 3160 12010
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460 3470 3480
	# Battlecruiser
	3310 3320 3330 3340 3350
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 3260 12020
	# Destroyer 
	3010 3020 3030 3040 3050 3060 3070 12000 3080
	# Submarine 
	3610 3620 3630 3640 3650 3660 3670 3680 3710
	# Light Carrier 
	12100 12110 12120 12130
	# Aircraft Carrier 
	3510 3520 3530
	# Torpedo & ASW 18
	3720 3730 3736 3740 3750 3760 3900 3910 3770
	# Troopships
	3810 3820 3830

	# Multirole fighter
	4300 4310 4320 4330 4340 4040 4070 4100 4350
	# CAS
	4400 4170 4280 4450 4180
	# Strategic bomber
	4800 4810 4820 4220 4230 4240
	# Navalbomber
	4700 4710 4190 4200 4210
	# Interceptor  
	4500 4510 4520 4530 4540 4550 4010 4020 4030 4060 4090 15000 15010 
	# Tactical Bomber
	4600 4610 4620 4630 4120 4130 4140 4150 4160 15100
	# Seaplanes
	4740 4750 4760 4770 4780 4790 4850 4860
	# Escort Fighter
	4050 4080 4110 4116
	# CAG
	4900 4910 4920 4930 4940
	# Air Transport 
	4290 4250 4260 4270 15180

	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470
	9010 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9190 9200 9210 9220 9230 9240 9250 9260 9270
	9280 9350 9360 9290 9300 9310 9370 9390 9400 9380 9320 9330 9340 9410 9420 27000 

	#Naval Doctrines
	8010 8020 8030 8040 8050 8060 8070 8080 81380
	# Amphib
	82300 82310
	# Naval Logistics
	82500 82510 82520
	# Naval Interdiction
	8500 8510 8520 8550 8560 8600 8570
	# Trade Interdiction Submarine
	8610 8620 8630 8640 8650 8660
	# Indirect Approach
	81300 81310 81320 81330 81340 81350 81360 81370
	# Naval Supremacy
	8100 8110 8120 8150 8160 8170 8200 8210

	# Turbojet Engine
	15500
	# Rocket Tech
	7550 7560 7570 7580 7590 7100 7110 7120 7010 7020
	#Goliath Tanks
	7620 7630
	} 
inventions = { 3000027 3000028 3000031 3000017 3000018 }
   diplomacy = {
     relation = { tag = USA value = 150  } 
     relation = { tag = GER value = -150  } 
     relation = { tag = AXI value = -150  } 
	 relation = { tag = SOV value = 50 access = yes } 
    } 
   SpyInfo                = {  country = "ALS" NumberOfSpies = 1  } 
   #headofstate            = {  type = 9 id = 199101  } 
   #headofgovernment       = {  type = 9 id = 199102  } 
   #foreignminister        = {  type = 9 id = 199103  } 
   #armamentminister       = {  type = 9 id = 199104  } 
   #ministerofsecurity     = {  type = 9 id = 199105  } 
   #ministerofintelligence = {  type = 9 id = 199106  } 
   #chiefofstaff           = {  type = 9 id = 199107  } 
   #chiefofarmy            = {  type = 9 id = 199108  } 
   #chiefofnavy            = {  type = 9 id = 199109  } 
   #chiefofair             = {  type = 9 id = 199110  }
  
landunit = {
 id = { type = 17346  id = 29 }
 name = "General Staff of the UN"
 location = 1795
  	division = {
   	id = { type = 17346  id = 30 }
   	name = "1. Joint Anglo-American HQ"
   	strength = 75
   	type = hq
	model = 4
        }
  	division = {
   	id = { type = 17346  id = 31 }
   	name = "1. Anglo-American Exp. Force"
   	strength = 75
   	type = motorized
	model = 3
        }
  	division = {
   	id = { type = 17346  id = 32 }
   	name = "American-Canadian Training Force"
   	strength = 75
   	type = mechanized
	model = 2
        }
	 division = {
   	id = { type = 17346 id = 33 }
       name     = "1. U.N. Peacekeepers Brigade" 
       type     = paratrooper 
       model    = 3
       strength = 80 
      }
	  }
	 
#############################
# UN Command for Central Asia
#############################

landdivision = {
 		dormant = yes

	     id = { type = 17346 id = 60 } 
		name = "1. UN Command Central Asia Brigade"
			type = armor
			model = 4
			experience = 35
			extra = engineer	
			brigade_model1 = 5			
			}
		
landdivision = {
 		dormant = yes

	     id = { type = 17346 id = 61 } 
		name = "2. UN Command Central Asia Brigade"
			type = motorized
			model = 3
			experience = 35
			extra = sp_artillery
		}

	 
	 
}