   
   ##############################   
   # Country definition for ICL #   
   ##############################   
      # NOTE : ORIGINALLY USA TAG
   #####################   
   # Country main data #   
   #####################   
      
   country =   
   {  tag                    = ICL   
  	ai_settings	= { flags = { MOB1 = yes } }	
     # Resource Reserves   
energy                 = 100
metal                  = 100
rare_materials         = 100  
     oil                    = 100   
     supplies               = 100   
     money                  = 100   
     manpower               = 3   
     transports             = 100   
     escorts                = 0   
     dissent = 0
     
     capital                = 1   

  diplomacy =
  { relation =
    { tag        = ARG
      value      = 75
    }
    relation = { tag = AST value = 150 }
    relation = { tag = BEL value = 75 }
    relation =
    { tag        = BOL
      value      = 85
    }
    relation =
    { tag        = BRA
      value      = 120
    }
    relation = { tag = CAN value = 200 }
    relation = { tag = CHI value = 100 }
    relation =
    { tag        = CHL
      value      = 100
    }
    relation =
    { tag        = COL
      value      = 75
    }
    relation =
    { tag        = COS
      value      = 100
    }
    relation =
    { tag        = CUB
      value      = 200
    }
    relation =
    { tag        = DOM
      value      = 125
    }
    relation =
    { tag        = ECU
      value      = 75
    }
    relation = { tag = ENG value = 150 }
    relation = { tag = FIN value = 90 }
    relation = { tag = U01 value = 65 }
    relation = { tag = GER value = -125 }
    relation =
    { tag        = GUA
      value      = 125
    }
    relation =
    { tag        = HAI
      value      = 100
    }
    relation = { tag = HOL value = 70 }
    relation =
    { tag        = HON
      value      = 100
    }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 120 }
    relation = { tag = JAP value = -125 }
    relation = { tag = LIB value = 200 }
    relation = { tag = MAN value = -200 }
    relation = { tag = MEN value = -200 }
    relation =
    { tag        = MEX
      value      = 125
    }
    relation = { tag = NEP value = 100 }
    relation =
    { tag        = NIC
      value      = 100
    }
    relation = { tag = NZL value = 125 }
    relation = { tag = OMN value = 100 }
    relation =
    { tag        = PAN
      value      = 175
    }
    relation =
    { tag        = PAR
      value      = 75
    }
    relation = { tag = PHI value = 200 }
    relation =
    { tag        = PRU
      value      = 75
    }
    relation = { tag = SAF value = 125 }
    relation =
    { tag        = SAL
      value      = 100
    }
    relation = { tag = SOV value = 175 }
    relation = { tag = SWE value = 75 }
    relation =
    { tag        = URU
      value      = 100
    }
    relation =
    { tag        = VEN
      value      = 125
    }
    relation = { tag = YEM value = 100 }
    relation = { tag = U05 value = 70  }  
  }   
     SpyInfo                = {  country = "ICL" NumberOfSpies = 5  }   
        
    nationalprovinces      = { 1 3 }  
    ownedprovinces         = { 1 3 }  				  
    controlledprovinces    = { 1 3 }  
				
	# Germany 1944.06 techs 
	# ###################### 
	techapps = { 
	
	# Manufacturing
	5810 5820 5050 5830 5060 5070 5130
	# Assembly Line
	5140 5150 5160 5170 5180
	# Construction Engineering 
	5800 5080 5090 5100
	# Computers & cryptography
	5310 54010 54020 54030 5320 5330 5340 5316 5326 5327 5350 5360 5370 5380
	# Agriculture 
	5700 5710 5010 5020 5030
	# Oil Refining
	5190 5200 5210 5220 5230
	# Atomic Research
	5470 5480 5490 5500
	# Exp. Rocket
	5560
	# Medicine
	5600 5610 5620 5630 5640
	# Radar
	5410 5416 5417 5420 5426 5430 5440
	# Specialised Equipment
	5920 5960 5970

	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120
	# Mountain Division 
	1160  1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270
	# Airborne Infantry
	1670 1680 1690
	# Motorized Infantry
	1396 1400 1410
	# Cavalry 
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1530
	# Mechanized Inf
	1470
	# Engineers
	1830 1840 1850 1860 1870
	# Supply
	1910 1920 1930 1940 1950 1960 1970 1980 1990 199100 199110 199130 199140

	# Light / Early Tank 
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2060
	# Medium Tank
	2070 2080 2090
	# Heavy Tank
	2100 2110 2120 2126
	# Armoured Car  
	2860 2870 2880 2020 2150 2160
	# Tank Destroyer
	2170 2180 2850
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2340
	# Anti-tank Artillery
	2400 2410 2420 2430
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200 2460 2470 2480
	# Anti-Air Artillery Brigade 
	2810 2820 2510 2520 2530
	# Self-Propelled Artillery
	2220 2230 2240
	# Rocket Artillery
	2970 2370
	# SP Anti-Air Artillery Brigade
	22910 22920 22930
	# SP Rocket Artillery
	2980 2260

	# Hospital System 
	14000 14010 14020 14030
	# Great War Land Doctrines (central powers)
	6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910
	# WW2 Land Doctrines
	6210 6220 6230 6240 6250 6260 6270 6280 6290 6900 

	# Light Cruiser 
	3110 3120 3130 3140 3150 3160
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460 3470 3480
	# Battlecruiser
	3310 3320 3330 3340 3350
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 3260 12020
	# Destroyer 
	3010 3020 3030 3040 3050 3060 3070 12000
	# Submarine 
	3610 3620 3630 3640 3650 3660 3670 3680
	# Light Carrier 
	12100 12110 12120 12130
	# Aircraft Carrier 
	3510 3520 3530
	# Torpedo & ASW 18
	3720 3730 3736 3740 3750 3760 3900 3910
	# Troopships
	3810 3820 3830

	# Multirole fighter
	4300 4310 4320 4330 4340 4040 4070 4100
	# CAS
	4400 4170 4280 4450
	# Strategic bomber
	4800 4810 4820 4220 4230
	# Navalbomber
	4700 4710 4190 4200 4210
	# Interceptor  
	4500 4510 4520 4530 4540 4550 4010 4020 4030 4060 4090
	# Tactical Bomber
	4600 4610 4620 4630 4120 4130 4140 4150 4160
	# Seaplanes
	4740 4750 4760 4770 4780 4790 4850 4860
	# Escort Fighter
	4050 4080 4110
	# CAG
	4900 4910 4920 4930 4940
	# Air Transport 
	4290 4250 4260 4270 15180

	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470
	9010 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9190 9200 9210 9220 9230 9240 9250 9260 9270
	9280 9350 9360 9290 9300 9310 9370 9390 9400 9380 9320 9330 9340 9410 9420

	#Naval Doctrines
	8010 8020 8030 8040 8050 8060 8070 8080
	# Amphib
	82300 82310
	# Naval Logistics
	82500
	# Naval Interdiction
	8500 8510 8520 8550 8560 8570 8600 
	# Trade Interdiction Submarine
	8610 8620 8630
	# Indirect Approach
	81300 81310 81320 81330 81340 81350 81360 81370
	# Naval Supremacy
	8100 8110 8120 8150 8160 8170 8200 8210

	# Rocket Tech
	7550 7560 7570 7580 7590 7100 7110 7010 7020
	#Goliath Tanks
	7620
	} 

blueprints = { 81880 81890 }

inventions = { 3000027 }
    policy =  
    {  date              = {  year = 1942 month = january day = 0  }  
     democratic        = 9 
      political_left    = 6  
      freedom           = 10  
      free_market       = 10  
      professional_army = 1  
      defense_lobby     = 3  
      interventionism   = 4  
     }  
	 
     #headofstate            = {  type = 9 id = 240001  }  
     #headofgovernment       = {  type = 9 id = 240232  }
     #foreignminister        = {  type = 9 id = 240003  }  
     #armamentminister       = {  type = 9 id = 240004  }  
     #ministerofsecurity     = {  type = 9 id = 240005  }  
     #ministerofintelligence = {  type = 9 id = 240098  }  
     #chiefofstaff           = {  type = 9 id = 240104  }  
     #chiefofarmy            = {  type = 9 id = 240109  }  
     #chiefofnavy            = {  type = 9 id = 240126  }  
    #chiefofair             = {  type = 9 id = 240129  }
    

 
   }  
  
