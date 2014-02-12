 
 ############################## 
 # Country definition for JAP # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = JAP 
	ai_settings	= { flags = { MOB1 = yes } }	
 puppet = USA
 control = USA
   
   capital                = 1552 
   manpower               = 50 
   # Resource Reserves 
   energy                 = 5000 
   metal                  = 5000 
   rare_materials         = 30000 
   oil                    = 2000 
   supplies               = 5000 
   money                  = 120 
   transports             = 1220 
   escorts                = 81 
    
  diplomacy =
  { 
  relation = { tag = USA access = yes value = 200 }
  } 
   SpyInfo                = {  country = "JAP" NumberOfSpies = 9  } 
    
   # Sakhalin 
 nationalprovinces      = {    1544 1545 1549 1551 1550 1556 1552 1557 1558 1553 1554 1559 1560 1561 1562 1555 1547 1548 1546 } 
   ownedprovinces         = {  1544 1545 1549 1551 1550 1556 1552 1557 1558 1553 1554 1559 1560 1561 1562 1555 1547 1548 1546 } 
   controlledprovinces    = {  1544 1545 1549 1551 1550 1556 1552 1557 1558 1553 1554 1559 1560 1561 1562 1555 1547 1548 1546 } 
	# JAP 1944.06 techs 
	# ###################### 
	techapps = { 

	# Manufacturing
	5810 5820 5050 5830 5060 5070 5130
	# Assembly Line
	5140
	# Construction Engineering 
	5800 5080 5090 5100
	# Computers & cryptography
	5310 54010 54020 54030 5320 5360
	5316 5326 5327 5350
	# Agriculture
	5700 5710 5010 5020 5030
	# RADAR
	5410 5416 5417 5420 5426 5430
	# Oil Refining 
	5190 5200
	# Atomics
	5470 5480
	# Medicine
	5600 5610 5620
	# Rocket Test and Research Facility
	5560 7550
	# Specialised Equipment
	5940

	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120
	# Mountain
	1160 1170 1180 1190 1200 1210 1220 1230 1240 1250
	# Marines
	1560 1570 1580 1590 1600
	# Paratroopers
	1670 1680
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390
	# Engineers
	1830 1840 1850 1860 1870 
	# Interbellum 1930 Supply 
	1910 1920 1930 1940 1950 1960 1970 1980 1990 199130 199100

	# Tanks 
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2070 2050 
	# Armoured Car  
	2860 2870 2880 2020 2150
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940 2320
	# Anti-Tank Artillery 
	2400
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200 2460
	# Anti-Air Artillery Brigade 
	2810 2820 2510  

	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	# Light Infantry Land Doctrines
	6390 6400 6420 6410 6430 6440
	# Armored Division Formation
	6900
	# Hospital System 
	14000 14010 14020 14030

	# Light Cruiser 
	3110 3120 3130 3140 3150 3160 12010
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460 3470
	# Super Heavy Battleship
	3490
	# Battle Cruiser
	3310 3320 3330 3340 3350
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 3260
	# Destroyer 
	3010 3020 3030 3040 3050 3060 3070 12000
	# Submarine
	3610 3620 3630 3640 3650 3660 3670
	# Light carrier 
	12100 12110 12120 12130 12140
	# Fleet Carrier
	3510 3520 3530 3540 3550
	#Torpedo & ASW 18
	3720 3730 3736 3740 3750 3760 3900 3910 3770
	# Troopships
	3810 3820 3830

	# Naval Doctrines
	# Engagement Theories
	8010 8020 8030 8040 8050 8060 8070 8080
	# Naval Supremacy
	8100 8110 8120 8150 8160 8200 8210 8170
	# Naval Interdiction
	8500 8510 8520 8550 8560 8600 8610
	# Engagement Tactics - Fleet-in-Being column
	8900 8910 8920 8930 8940 8950 8960 8970 8980
	# Subsidiary Carrier Role
	81650
	# Aerial Supremacy column
	81700 81710 81720 81730 81740
	# Scouting Focus column
	81850 81860 81870 81880
	# Amphibious Warfare
	82300 82310 82320
	# Naval Logistics
	82500 82510

	# Close Air Support
	4400 4170 4280 4450
	# Interceptors
	4500 4510 4520 4530 4540 4550 4010 4020 4030 4060 4090
	# Escort Fighter
	4050
	# Tactical Bomber 
	4600 4610 4620 4630 4120 4130 4140 4150
	# Naval Bomber 
	4700 4710 4190 4200 4210
	# Transports
	4290 4250
	# Multirole fighter
	4300 4310 4320 4330 4340 4040 4070 4100
	# Seaplanes
	4740 4750 4760 4770 4780 4790 4850
	# Strategic bomber
	4800 4810 4820
	# CAG
	4900 4910 4920 4930 4940

	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9190
	9200 9210 9220 9350 9230 9240 
	} 

blueprints = { 81730 81740 } 
inventions = { 3000027 }

policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic = 9
		political_left = 4
		freedom = 8
		free_market = 9
		professional_army = 1
		defense_lobby = 1
		interventionism = 1 
    } 
headofstate = { type = 9 id = 50001 }
	headofgovernment = { type = 9 id = 50029 }
	foreignminister = { type = 9 id = 50038 }
	armamentminister = { type = 9 id = 50061 }
	ministerofsecurity = { type = 9 id = 50085 }
	ministerofintelligence = { type = 9 id = 50113 }
	chiefofstaff = { type = 9 id = 50134 }
	chiefofarmy = { type = 9 id = 50143 }
	chiefofnavy = { type = 9 id = 50147 }
	chiefofair = { type = 9 id = 50163 }
   dormant_ministers      = {  50002 50020 50013 50014 50021 50003 50042 50047 50039 50040 50041 50004 50005 50086 50087 50088 50095 50006 50114 50007 50008 50158
                               50015 50016 50044 50062 50072 50089 50096 50097 50098 50099 50100 50116 50121 50133 50142 50148 50156
                            }
  
  
  
  landunit = {
		location = 1552
		id = { type = 9061 id = 1 }
		name = "Tokio Defence Corps"
		division = {
			experience = 0
			id = { type = 9061 id = 2 }
			name = "1st Division"
			type = infantry
			model = 13
			strength = 100
		}
	}
	landunit = {
		location = 1553
		id = { type = 9061 id = 5 }
		name = "Osaka Defence Corps"
		division = {
			experience = 0
			id = { type = 9061 id = 6 }
			name = "1st Division"
			type = infantry
			model = 13
			strength = 100
		}
	}
	landunit = {
		location = 1545
		id = { type = 9061 id = 9 }
		name = "Sapporo Defence Corps"
		division = {
			experience = 0
			id = { type = 9061 id = 10 }
			name = "1st Division"
			type = infantry
			model = 13
			strength = 100
		}
	}
	
	# END
  } 
 
