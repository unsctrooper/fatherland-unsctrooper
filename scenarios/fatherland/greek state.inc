 ############################## 
 # Country definition for GRE # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 

  country = 
 {  tag                    = GRE
 	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }	
	
	name = "Hellenic State"
    puppet                 = GER
    control                = GER
   
   manpower               = 100
   capital                = 377 
   # Resource Reserves 
energy                 = 1100
metal                  = 900
rare_materials         = 1000
   transports = 100
   oil                    = 150 
   supplies               = 200 
   money                  = 25 
   dissent                = 5

   diplomacy = {
	relation = { tag = BUL value = -20 }
	relation = { tag = ITA value = 100 }
	relation = { tag = GER value = 50 }
	relation = { tag = TUR value = 10 }
	relation = { tag = ROM value = 50 }
	relation = { tag = CRO value = 50 }
	 }
	 
	SpyInfo                = {  country = "GRE" NumberOfSpies = 3  }
	
	nationalprovinces = { 366 365 370 367 369 371 368 375 376 374 377 372 373 383 381 363 364 360 } 
	ownedprovinces = { 366 365 367 369 371 368 375 376 374 377 372 373 383 381 } 
	controlledprovinces = { 366 365 367 369 371 368 375 376 374 377 372 373 383 381 } 
	
	techapps               = {
	# Manufacturing
	5810 5820 5050 5830 5060 5070
	# Construction Engineering 
	5800 5080 5090 
	# Agriculture 
	5700 5710 5010 5020 5030
	# Computers & cryptography
	5310 54010 54020 54030 5316 5326 5327 5350 5320
	# Oil Refining 
	5190 
	# Medicine
	5600 5610 5620 5630

	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 
	# Mountain Division 
	1160 1170 1180 1190 1200 1210 1220 1230 1240
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390
	# Motorized Inf
	1396
	# Engineers
	1830 1840 1850 1860
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980 1990

	# Tanks
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070
	# Armoured Car  
	2860 2870 2880 2020 2150
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940 2320
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200
	# Anti-Air Artillery Brigade 
	2810 2820 2510 2520
	# Anti-Tank Artillery 
	2400
	
	# Hospital System 
	14000 14010 14020 14030
	# Great War Land Doctrines (central powers)
	6500 6510 6530 6550 6590 6600 6620 6650 6670 6680 6690 6700 6710 6910
	# Armored Division Formation
	6900
	# Grand Battle Plan
	6560 6030 6120 6110

	# Interceptor Fighter  
	4500 4510 4520 4530 4540 4550 4010 4020 4030
	# Multirole Fighter
	4300 4310 4320 4330 4340
	# Strategic Bomber
	4800 4810 4820
	# Naval Bomber
	4700 4710
	# Tactical Bomber 
	4600 4610 4620 4630 4120 4130

	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
	9040 9050 9090 9100 9110 9120 9130 9140 9190 9230
	
	}
	
inventions = { 3000027 }

   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 3 
     free_market       = 4 
     freedom           = 3 
     professional_army = 6 
     defense_lobby     = 5
     interventionism   = 4
    } 

	   # Greek State Army
   landunit = 
   {  id       = {  type = 20601 id = 1  } 
     name     = "Vasilikos Ellinikou Stratou" 
     location = 377 
	Division = 
   {  id       = {  type = 20601 id = 2  } 
       name     = "Vasilikos tmíma omada" 
       strength     = 50
       type     = hq
	   model = 4
      } 
	Division = 
   {  id       = {  type = 20601 id = 3 } 
       name     = "1.Vasilikos tmíma diairesi" 
       strength     = 50
       type     = bergsjaeger
	   model = 11
	   extra = artillery
      } 
    } 
	
   landunit = 
   {  id       = {  type = 20601 id = 4 } 
     name     = "2. Vasilikos Ellinikou Stratou" 
     location = 366 
	Division = 
   {  id       = {  type = 20601 id = 5 } 
       name     = "2. Vasilikos tmíma diairesi" 
       strength     = 50
       type     = infantry
	   model = 11
	   extra = artillery
      } 
	  Division =
	{  id       = {  type = 20601 id = 6 } 
       name     = "3. Vasilikos tmíma diairesi" 
       strength     = 50
       type     = infantry
	   model = 11
      } 
}

}
