 ############################## 
 # Country definition for U58 # 
 ############################## 
  
 country = 
 {  tag                    = U58
   puppet = GER
   control = GER
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes NEIN = yes RES = yes } }
   # Resource Reserves 
   energy                 = 240
   metal                  = 120
   rare_materials         = 60
   transports             = 100
   oil                    = 200 
   supplies               = 200 
   money                  = 10 
   manpower               = 500
   capital                = 641 
   
	free = { ic = 15 supplies = 25 oil = 25 } 
       
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1
     political_left    = 1 
     freedom           = 1 
     free_market       = 1 
     professional_army = 8
     defense_lobby     = 10 
     interventionism   = 1 
    } 
   nationalprovinces      = { 641 } 
   ownedprovinces         = { 639 637 641 638 640 } 
   controlledprovinces    = { 639 637 641 638 640 } 
   claimedprovinces = { 639 637 638 640 }
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
   diplomacy = 
   {  relation = { tag = GER value = 200  } 
    } 
   SpyInfo                = {  country = "U58" NumberOfSpies = 1  } 
   #headofstate            = {  type = 9 id = 1105001  } 
   #headofgovernment       = {  type = 9 id = 1105002  } 
   #foreignminister        = {  type = 9 id = 1105003  } 
   #armamentminister       = {  type = 9 id = 1105004  } 
   #ministerofsecurity     = {  type = 9 id = 1105005  } 
   #ministerofintelligence = {  type = 9 id = 1105006  } 
   #chiefofstaff           = {  type = 9 id = 1105007  } 
   #chiefofarmy            = {  type = 9 id = 1105008  } 
   #chiefofnavy            = {  type = 9 id = 1105009  } 
   #chiefofair             = {  type = 9 id = 1105010  } 
     landunit = 
   { location = 336 
     name     = "8. SS-Kav.Div. 'Florian Geyer'" 
     id       = {  type = 14500 id = 11001  }
  division = 
     { id       = {  type = 14500 id = 11002  } 
       name     = "8. SS-Kav.Div. 'Florian Geyer'" 
       type     = cavalry 
       model    = 12 
       strength = 75 
      }
	}
  landunit = 
   { location = 329 
     name     = "IX. Armeekorps" 
     id       = {  type = 14500 id = 11003  } 
    division = 
     { id       = {  type = 14500 id = 11004  } 
       name     = "21. Waffen-SS Geb.Div. 'Skanderbeg'" 
       type     = bergsjaeger 
       model    = 12 
       strength = 80 
       experience = 40
      }
	division = 
     { id       = {  type = 14500 id = 11005  } 
       name     = "21. Albanische SS-Freiw.-Div." 
       type     = motorized 
       model    = 3 
       strength = 80 
       experience = 20
      } 
          division = 
     { id       = {  type = 14500 id = 11041 } 
       name     = "31. SS-Freiwilligen-Grenadier-Div." 
       type     = motorized 
       model    = 3 
       strength = 80 
       experience = 40
      }	  
    }

	landunit = 
   { location = 355 
     name     = "Heeresgruppe E Reserve" 
     id       = {  type = 14500 id = 11006 } 
	  division = 
     { id       = {  type = 14500 id = 11007  } 
       name     = "13. Waffen-SS Geb.Div. 'Handschar'" 
       type     = bergsjaeger 
       model    = 12 
       strength = 40 
       experience = 40
      } 
	  division = 
     { id       = {  type = 14500 id = 11008  } 
       name     = "7. SS-Freiw.-Geb.Div. 'Prinz Eugen'" 
       type     = bergsjaeger 
       model    = 12 
       strength = 40
       experience = 40
      }  
    }
	landunit = 
   { location = 572
     name     = "IX. Armeekorps" 
     id       = {  type = 14500 id = 11009  } 
	division = 
     { id       = {  type = 14500 id = 11010  } 
       name  = "32. SS-Freiw.Div. '30. Januar'"
       type     = motorized 
       model    = 3 
       strength = 75
      }
     division = 
     { id       = {  type = 14500 id = 11011  } 
       name     = "3. SS-Panzer-Div. 'Totenkopf'" 
       type     = armor 
       model    = 3 
       strength = 100
       extra    = heavy_armor
       brigade_model = 4 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 11012  } 
       name     = "4. SS-Pz.Gr.Div. 'Polizei'" 
       type     = mechanized 
       model    = 1 
       strength = 100
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 11013  } 
       name     = "5. SS-Panzer-Div. 'Wiking'" 
       type     = armor 
       model    = 3 
       strength = 100 
       extra    = heavy_armor
       brigade_model = 4 
       experience = 40
      }
	  }
	   landunit = 
   { location = 674 
     name     = "VI. SS-Korps" 
     id       = {  type = 14500 id = 11014  } 	  
	 division = 
     { id       = {  type = 14500 id = 11015  } 
       name     = "22. SS-Kav.Div. 'Maria Theresia'" 
       type     = cavalry 
       model    = 12 
       strength = 75 
       experience = 40
      }
	  }

    landunit = 
   { location = 658 
     name     = "1. SS-Armee" 
     id       = {  type = 14500 id = 11016  }   
     division = 
     { id       = {  type = 14500 id = 11017  } 
       name     = "17. SS-Pz.Gr.Div. 'Götz Berlichingen'" 
       type     = mechanized 
       model    = 1 
       strength = 75
       experience = 40
       extra    = sp_artillery
       brigade_model = 3
      }
	  }
landunit = 
   { location = 679 
     name     = "II. SS-Panzerkorps" 
     id       = {  type = 14500 id = 11018  } 
     division = 
     { id       = {  type = 14500 id = 11019  } 
       name     = "2. SS-Panzer-Div. 'Das Reich'" 
       type     = armor 
       model    = 3 
       strength = 75
       experience = 30
       extra    = sp_artillery
       brigade_model = 3 
      }
     division = 
     { id       = {  type = 14500 id = 11020  } 
       name     = "9. SS-Panzer-Div. 'Hohenstaufen'" 
       type     = armor 
       model    = 3 
       strength = 75 
       experience = 30
       extra    = sp_artillery
       brigade_model = 3      
      }
	  }
	 landunit = 
   { location = 555 
     name     = "III. SS-Panzerkorps" 
     id       = {  type = 14500 id = 11021  } 
     division = 
     { id       = {  type = 14500 id = 11022  } 
       name     = "4. SS-Pz.Gr.Brig. 'Nederland'" 
       type     = mechanized 
       model    = 1 
       strength = 75 
       experience = 30
      }
     division = 
     { id       = {  type = 14500 id = 11023  } 
       name     = "11. SS-Pz.Gr.Freiw.Div. 'Nordland'" 
       type     = mechanized 
       model    = 1 
       strength = 75 
       experience = 40
      }
	  }
	landunit = 
   { location = 579 
     name     = "LXXIII. z.b.V. Korps" 
     id       = {  type = 14500 id = 11024  } 
     division = 
     { id       = {  type = 14500 id = 11025  } 
       name     = "16. SS-Pz.Gr.Div. 'Reichsführer SS'" 
       type     = mechanized 
       model    = 1 
       strength = 75 
       experience = 40
       extra    = tank_destroyer
       brigade_model = 3
      }
	  }
	 landunit = 
   { location = 617									# Kiev 
     name     = "XII. SS-Korps" 
     id       = {  type = 14500 id = 11026  } 
       division = 
     { id       = {  type = 14500 id = 11027  } 
       name     = "10. SS-Panzer-Div. 'Frundsberg'" 
       type     = armor 
       model    = 3 
       strength = 75 
       experience = 20
       extra    = sp_artillery
       brigade_model = 3
      }
	 division = 
     { id       = {  type = 14500 id = 11028  } 
       name     = "12. SS-Panzer-Div. 'Hitlerjugend'" 
       type     = armor 
       model    = 3 
       strength = 75
       experience = 40
       extra    = heavy_armor
       brigade_model = 3
      }
	   division = 
     { id       = {  type = 14500 id = 11029  } 
       name     = "1. SS-Leibstandarte Adolf Hitler" 
       type     = armor 
       model    = 3 
       strength = 75
       experience = 30
       extra    = sp_artillery
       brigade_model = 3
      }
	  }
	   landunit = 
   { location = 244 
     name     = "IV. SS-Panzerkorps" 
     id       = {  type = 14500 id = 11030  } 
     division = 
     { id       = {  type = 14500 id = 11033  } 
       name     = "18. SS-Pz.Gr.Div. 'Horst Wessel'" 
       type     = mechanized 
       model    = 1 
       strength = 75 
       experience = 25
      }
	  }
	landunit = 
   { location = 224 
     name     = "XXXX. SS-Panzerkorps" 
     id       = {  type = 14500 id = 11032  } 
     division = 
     { id       = {  type = 14500 id = 11048  } 
       name     = "10. SS-Panzer-Div. 'Frundsberg'" 
       type     = armor 
       model    = 3
       strength = 55 
       extra    = sp_artillery
       brigade_model = 3
      }
	  }
landunit = 
   { location = 284 
     name     = "25. Waffen-Gr.Div. d. SS 'Hunyadi'" 
     id       = {  type = 14501 id = 11034  } 
	  	   division = 
     { id       = {  type = 14500 id = 11035  } 
       name     = "25. Waffen-Gr.Div. d. SS 'Hunyadi'" 
       type     = motorized 
       model    = 3 
       strength = 65 
       experience = 20
      }
	division = 
     { id       = {  type = 14500 id = 11036  } 
       name     = "26. Waffen-Gr.Div. d. SS 'Hungaria'"  
       type     = motorized 
       model    = 3 
       strength = 65 
       experience = 20
      }
   }
# Walloon Waffen-SS
landunit = 
   { location = 108 
     name     = "28. SS-Freiw.-Div. 'Wallonien'"  
     id       = {  type = 14500 id = 11037  } 
     division = 
     { id       = {  type = 14500 id = 11038  } 
       name     = "28. SS-Freiw.-Div. 'Wallonien'" 
       type     = motorized 
       model    = 3
       strength = 50
      }
    }
# Flemish Waffen-SS
landunit = 
   { location = 117 
     name     = "27. SS-Freiw.-Div. 'Langemark'"  
     id       = {  type = 14500 id = 11039  } 
     division = 
     { id       = {  type = 14500 id = 11040  } 
       name     = "27. SS-Freiw.-Div. 'Langemark'"  
       type     = motorized 
       model    = 3 
       strength = 50
      }
    }
	landunit = 
   { location = 633 # Kupyansk 
     name     = "1. Waffen-SS 'Galizien' Division" 
     id       = {  type = 14500 id = 11054 } 
    division = 
     { id       = {  type = 14500 id = 11042 } 
       name     = "1. Waffen-SS 'Galizien' Division" 
       type     = infantry
       model    = 11
       strength = 80 
	   extra = armored_car
	   brigade_model = 5
       experience = 20
      }	
	  } 
	  
   landunit = 
   { location = 264 
     name     = "Lettische SS-Freiw.-Div." 
     id       = {  type = 14500 id = 11043  } 
    division = 
     { id       = {  type = 14500 id = 11044  } 
       name     = "15. Lettische SS-Freiw.-Div." 
       type     = motorized 
       model    = 2 
       strength = 45 
       experience = 80
      }
	  division = 
     { id       = {  type = 14500 id = 11045  } 
       name     = "19. Lettische SS-Freiw.-Div." 
       type     = motorized 
       model    = 2 
       strength = 65 
       experience = 80
      }
} 

landunit = 
   { location = 270 
     name     = "20. Estische SS-Freiw.-Div." 
     id       = {  type = 14500 id = 11046   } 
     division = 
     { id       = {  type = 14500 id = 11047   } 
       name     = "20. Estische SS-Freiw.-Div." 
       type     = motorized 
       model    = 2 
       strength = 55 
       experience = 60
      }
    }
	
	landunit = 
   { location = 707 # Tskhinvali
     name     = "1. Georgien Waffen-SS Legion" 
     id       = {  type = 14500 id = 11055 } 
    division = 
     { id       = {  type = 14500 id = 11049  } 
       name     = "Georgian Waffen-SS Legion" 
       type     = infantry 
       model    = 11
       strength = 75
	   max_strength = 75
      }
	  }	
	  
	landunit = 
   { location = 709 # Tskhinvali
     name     = "2. Georgien Waffen-SS Legion" 
     id       = {  type = 14500 id = 11050 } 
    division = 
     { id       = {  type = 14505 id = 11051  } 
       name     = "342. Kaukasus SS Division" 
       type     = motorized 
       model    = 2 
       strength = 35
		extra = sp_artillery
		brigade_model = 3
        experience = 60
      }
	  }	
	  
   landunit = 
   { location = 242 
     name     = "14. Galizische SS-Freiw.-Div." 
     id       = {  type = 14500 id = 11052  }
 division = 
     { id       = {  type = 14500 id = 11053 } 
       name     = "14. Galizische SS-Freiw.-Div." 
       type     = motorized 
       model    = 2 
       strength = 70
       experience = 80
		}
	 }
  } 
 
