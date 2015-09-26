#####################
# Country definition for GER
# Review by Pako
#####################

#####################
# Country main data 
#####################
  
country = {
	tag = GER 
	ai = "GER_1948.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes RES = yes NEIN = yes } }
	capital = 163 # Berlin (obviously! :D)
	manpower = 2500
	transports = 135 
	escorts = 50 
	belligerence = 10
	dissent = 0

	# resources 
	energy = 35000
	metal = 10000
	rare_materials = 3000
	oil = 2500 
	supplies = 1800 
	money = 1500

	# spying
	SpyInfo = { country = "ENG" NumberOfSpies = 8  } 
	SpyInfo = { country = "SPA" NumberOfSpies = 8 }
	SpyInfo = { country = "SOV" NumberOfSpies = 3 }
	SpyInfo = { country = "GER" NumberOfSpies = 15 }
	SpyInfo = { country = "HUN" NumberOfSpies = 2 }
	SpyInfo = { country = "TUR" NumberOfSpies = 12 }
	SpyInfo = { country = "SWE" NumberOfSpies = 10 }
	SpyInfo = { country = "ITA" NumberOfSpies = 6 }
	
	# policy and government	
	policy = {  
		date = {  year = 0 month = january day = 0  } 
		democratic = 1 
		political_left = 1 
		free_market = 2 
		freedom = 1 
		professional_army = 7
		defense_lobby = 10 
		interventionism = 10 
	}
	
	headofstate = {  type = 9 id = 1   } 
	headofgovernment = {  type = 9 id = 23  } 
	foreignminister = {  type = 9 id = 35  } 
	armamentminister = {  type = 9 id = 65  } 
	ministerofsecurity = {  type = 9 id = 86  } 
	ministerofintelligence = {  type = 9 id = 274 } 
	chiefofstaff = {  type = 9 id = 132 } 
	chiefofarmy = {  type = 9 id = 146 } 
	chiefofnavy = {  type = 9 id = 161 } 
	chiefofair = {  type = 9 id = 10  } 
	# dormant_ministers = {  }
	# dormant_leaders = {  }
	# dormant_teams = {  21  } 
   
   	# foreign diplomacy
	diplomacy = { 
		# Neutral AFG ARG BOL BRA CHI TRA DEN ECU IRE MEX MTN PAR PER POR SYR SWE URU PAK
		relation = { tag = AFG value = 0 }
		relation = { tag = CHI value = 25 }
		relation = { tag = SAU value = -25 }
		relation = { tag = SYR value = 10 }	
		relation = { tag = PAK value = 50 }
		relation = { tag = IND value = 0 }
		relation = { tag = ARG value = 75 }
		relation = { tag = URU value = 30 }
		relation = { tag = BOL value = 10 }
		relation = { tag = BRA value = -30 }
		relation = { tag = PAR value = 0 }
		relation = { tag = MEX value = -25 }
		relation = { tag = CHL value = 30 }
		relation = { tag = ECU value = 25 }			
		relation = { tag = TUR value = 50 guaranteed = { day = 01 month = january year = 1948 } }
		relation = { tag = IRE value = 0 }
		relation = { tag = TRA value = 50 guaranteed = { day = 01 month = january year = 1948 } } # Cossacks
		relation = { tag = POR value = 65 }
		relation = { tag = SPA value = 85 }
		relation = { tag = SCH value = -25 guaranteed = { day = 01 month = january year = 1948 } }
		relation = { tag = FRA value = 50 guaranteed = { day = 01 month = january year = 1948 } }	
		relation = { tag = SWE value = 50 }


		# Allies ENG USA U01 AST NZL CAN SAF BEL EGY IRQ JAP NEP NIC OMN
		relation = { tag = AST value = -200 }
		relation = { tag = BEL value = -200 }
		relation = { tag = BHU value = -200 }
		relation = { tag = CAN value = -200 }
		relation = { tag = EGY value = -200 }
		relation = { tag = ENG value = -200 }
		relation = { tag = ETH value = -200 }
		relation = { tag = U01 value = -200 }
		relation = { tag = HOL value = -200 }
		relation = { tag = IRQ value = -50 }	
		relation = { tag = NEP value = -200 }
		relation = { tag = NIC value = -200 }
		relation = { tag = NZL value = -200 }
		relation = { tag = OMN value = -50 }	
		relation = { tag = SAF value = -200 }
		relation = { tag = YEM value = -50 }
		relation = { tag = JAP value = -125 }

		# Comintern SOV CHC MON and Soviet Area (SIB,U57,U59,UPE)
		relation = { tag = SOV value = -200 }
		relation = { tag = CHC value = -200 }
		relation = { tag = MON value = -200 }
		relation = { tag = SIB value = -200 } # Siberia
		relation = { tag = U57 value = -200 } # Far Eastern Republic
		relation = { tag = U59 value = 0 } # Russian Empire
		relation = { tag = UPE value = 50 } # Turkestan		
		
		# Axis GER SLO ITA BUL CRO FIN MTN U44 UTC U46 U45 U41 U40 U42 WLL FLA HUN ROM SER BLR U58
		relation = { tag = AXI value = 200 access = yes guaranteed = { day = 1 month = january year = 1948 } }
		relation = { tag = ITA value = 180 guaranteed = { day = 1 month = january year = 1948 } }
		relation = { tag = CRO value = 120 access = yes guaranteed = { day = 1 month = january year = 1948 } }
		relation = { tag = HUN value = 180 }
		relation = { tag = ROM value = 150 }
		relation = { tag = BUL value = 175 }
		relation = { tag = FIN value = 120 }
		relation = { tag = MTN value = 100 }
		relation = { tag = BLR value = 200 access = yes }
		
		# Puppets inside the Axis
		relation = { tag = SLO value = 200 access = yes }
		relation = { tag = SER value = 200 access = yes }
		relation = { tag = UTC value = 150 access = yes}  # Lokot Republic
		relation = { tag = U58 value = 200 access = yes } # SS
		
		# Puppets outside the Axis
		relation = { tag = DEN value = 200 access = yes guaranteed = { day = 01 month = january year = 1948 } }
		
  }
   
    # provinces setup
	nationalprovinces = {  
		# Germany proper
		126  145  127  131  142  147  141  137  174  171  176  146  148  154   
        151  152  153 156 169 157 163 162 158 183 159 172 170 173 177 138 134 132 178 175 179 167 164 184        
        182 155 161 185 165 166 168 133 144 160 180 136 139 135 129 128 130 181 225 224  221 149 150 140
		# Other National Provinces
		261 # Memelgebiet
		207 199 198 196 201 # Protectorate of Bohemia and Moravia   
		143 189 190 191 192 195 194 186 187 193 188 # Austria/Ostmark
		200 206 205 197 202 204 203 # Sudetenland
		110 # Eupen
		109 # Luxembourg
		226 230 222 231 232 227 223 # Poland (cores)
		104 105 107 # Alsace

    } 
   ownedprovinces = {  
		126  145  127  131  142  147  141  137  174  171  176  146  148  
		154  151  152  153 156 169 163 162 158 183 159 172 170 173 177 138
        134 132 178 175 179 167 164 184 133 
        182 155 161 185 165 166 168 150  
        144 160 180 136 139 135 129 128 130 149 140 181 221  224 225                
     
		# National Provinces
		261 # Memelgebiet
		143 189 190 191 192 195 194 186 187 193 188 # Austria/Ostmark
		200 206 205 197 204 203 # Sudetenland
		207 199 202 198 196 201 # Protectorate of Bohemia and Moravia   
		110 # Eupen
		109 # Luxembourg
		226 230 222 # Poland (cores)
		104 105 107 # Alsace
		
		# Non-National provinces
		382 370 # Military Administration of Greece
		553 # Military Administration of Leningrad
		98 97 106 96 # Military Administation of France (Zone réservée)
		101 102 103 # Military Administation of France (Zone interdite)
		69 68   37  39   # 45 43 44 46 53 50 67 57 38 40 41 42# Military Administration of France (Atlantic Wall)
		336 # Banat region of Serbia 
		346 # Maribor
		227 231 252 223 229 250 253 254 255 # Poland (claims)
	    50 53 45 43 44 46 # Brussels
	
		# Occupied Russia 
		554 555 556 557 558 559 562 563 567 568 569 570 571 572 574 576 577 578 579
		 584 668   656 677 678 679 682 # Muscovy
		669 665 # Controlled by Germany, technically in South Russia but borders Soviet Union
		650   651 658       652 654    657   580   # South and Central Russia
		674 # Tatarstan province
		675 # Chuvash Republic
		670 683 # Mordovia  
 
		}  
							 
   controlledprovinces    = {  126  145  127  131  142  147  141  137  174  171  176  146  148  
		154  151  152  153 156 169 163 162 158 183 159 172 170 173 177 138
		134 132 178 175 179 167 164 184 133 
         182 155 161 185 165 166 168 150  
         144 160 180 136 139 135 129 128 130 149 140            
         181 221  224 225                
		 
		#National Provinces
		261 # Memelgebiet
		207 199 202 198 196 201 #Protectorate of Bohemia and Moravia
		143 189 190 191 192 195 194 186 187 193 188 # Austria/Ostmark
		200 206 205 197 204 203 # Sudetenland
		110 # Eupen
		109 # Luxembourg
		226 230 222 # Poland (cores)
		104 105 107 # Alsace
		
		#Non-National provinces
		382 370 # Military Administration of Greece
		553 # Military Administration of Leningrad
		101 102 103 106 96 97 98 # Military Administation of France (Zone interdite)
		69 68   37  39  # 42 43 44 46 45 50 53 67 57 40 41 38# Military Administration of France (Atlantic Wall)
		336 # Banat&Bor region of Serbia 
		346 # Maribor
		227 231 252 223 229 250 253 254 255 # Poland (claims)
	    50 53 45 43 44 46 # Brussels

		# Occupied Russia
		# Muscovy
		554 555 556 557 558 559 562 563 567 568 569 570 571 572 574 576 577 578 579
		 584 668   656 677 678 679 682
		669 665 # Controlled by Germany, technically in South Russia but borders Soviet Union
		#South and Central Russia        
		650   651 658       652 654    657   580   
		674 # Tatarstan province
		675 # Chuvash Republic
		670 683 # Mordovia   
	} 
	claimedprovinces = { 
		# 846 847 849 851 848 850 883 884 882 886 885 948 950 955 908 909 910 919 911 928 925 933 936  # Afrika
		# 1605 1602 1668 1667 1727 1726 1725 1665 1587 1675 1674 1681 1677 1603 1610 1234 1666 1669 1670 1671 1676 1684 1685 1686 # Pacific
		# 1731 # Asia
		# 1328 # Qingdao
		346 # Maribor
		252 229 250 253 254 255 # Poland
		336 # Banat
		553 # Military Administration of Leningrad
		377 # Military Administration of Athens
		382 # Military Administration of Crete
	}	

#####################
# GER 1948 Techs
#####################
	
	techapps = {  
	
		# Agriculture 
		5700 5710 5010 5020 5030 5040
		# Production
		5810 5820 5050 5830 5060 5070 5130 5140 5150 5160 5180 5170 5110
		# Construction 
		5800 5080 5090 5100
		# Computers
		5316 5326 5327 5310 54010 54020 54030 5320 5350 5360 5330 5370 5380 5340 5390 5400 7140 7150 53060 16000
		# Medicine
		5600 5610 5620 5630 5640 5650 5660
		# Oil Refining
		5190 5200 5210 5220 5230 5240 53020 53040
		# Rocket
		5560 7550 7560 7570 7580 7590 7100 15500 7110 7120 
		# Radar
		5410 5416 5417 5420 5426 5430 5440 5466 5450

		# Equipment
		5920 5930 5960 5970 5980 5990 
		
		# Static Anti-Air Artillery 
		2800 2450 21180 21190 21200 2460 2470 2480 2490 2500
		
		# Infantry Division  
		1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1130 1140
		# Mountain Division
		1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1280 1290
		# Marines
		1560 1570 1580 1590 1600 
		# Paratroopers
		1670 1680 1690 1700
		# Cavalry
		13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1530 1540
		# Motorized Infantry
		1396 1400 1410 1420 1430 
		# Mechanized
		1470 1480 1490
		# Tanks 
		7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070 2080 2090 2060 2140 
		# Tank Division Activation
		6900 
		
		# Artillery
		2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2340 2360 
		# Anti-Air Artillery
		2810 2820 2510 2520 2530
		# Anti-Tank Artillery
		2400 2410 2420	
		# Rocket Artillery
		2970 2370 2380 
		
		# Armored Car 
		2860 2870 2880 2020 2150 2160 
		# Tank Destroyer
		2170 2180 2850 2190 
		# Heavy Tanks
		2100 2110 2120 2130 
		# SP Artillery
		2220 2230 2240 2250
		# SP Anti-Air
		22910 22920 22930 
		# SP Rocket Artillery
		2980 2260 2270 
		# Engineers
		1830 1840 1850 1860 1870 1880
		
		# Supply 
		1910 1920 1930 1940 1950 1960 1970 1980 1990 199130 199100 199140 199110 199150
		
		# Submarine 
		3610 3620 3630 3640 3650 3660 3670 3680 3710 
		# Destroyer 
		3010 3020 3030 3040 3050 3060 3070 12000
		# Light Cruiser 
		3110 3120 3130 3140 3150 3160 12010	12150
		# Heavy Cruiser 
		3210 3220 3230 3240 3250 3260 12020 
		# Battlecruiser  
		3310 3320 3330 3340 3350	
		# Battleship 
		3410 3420 3430 3440 3450 3456 3460 3470 12040	
		# Escort carrier 
		12100 12110 12120 12130 
		# Carrier
		3510 3520 3530 3540	3550
		# Troopships
		3810 3820 3830 3840
		# Torpedo
		3720 3730 3736 3740 3750 3760 3770 3780
		# ASW
		3900 3910 3920 3930
		
		# Interceptor Fighter  
		4500 4510 4520 4530 4540 4550 4010 4020 4030 4060 4090 15000 15010
		# Multirole fighter
		4300 4310 4320 4330 4340 4040 4280 4100 4350 
		# Close Air Support
		4400 4170 4450 4180 15120 
		# Tactical Bomber 
		4600 4610 4620 4630 4120 4130 4140 4150 4160
		# Strategic Bomber
		4800 4810 4820 4230 4240
		# Naval Bomber
		4700 4710 4190 4200 4210 15140
		# Transport 
		4290 4250 4260 4270 15180
		
		# Seaplanes
		4740 4750 4760 4770 4780 4790 4850 4860	
		# Escort fighter
		4050 4080 4110
		# CAG
		4900 4910 4920 4930 4940 4950 

		# Hospital System 
		14000 14010 14020 14030 14040
		
		# Great War Land Doctrines
		6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 

		# WWII Land Doctrines
		# 6560 6030 6120 6110 6130
		6210 6220 6260 6240 6270 6290 
		
		# Modern
		14100
		
		# Naval Doctrines
		# Engagement Theories
		8010 8020 8030 8040 8050 8060 8070 8080
		# Amphibious Warfare
		82300
		# Logistic Support
		82500
		# Naval Interdiction
		8500 8510 8520 8550
		# Trade Interdiction Submarine
		8600 8610
		# Engagement Tactics - Fleet-in-Being column
		8900 8910 8920 8930 8940 8950 8960 8970
		# Naval Supremacy
		8100 8110 8120 8150 8160 8170 8200 8210
		# Carrier
		81650
		
		# Air Doctrines
		27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 
		9040 9050 9060 9070 9090 9100 9110 9120 9130 9140 9190 9200 9210 9220 9230 9240
	
		# Industry Nuclear (possible research by event)
		5470 5480 5490 5500 5510 5520 # 5530 5540
		# Secret Weapons Nuclear(possible research by event)
		# 7170 7180 7190 16010	
	}

	inventions = { 3000027 3000028 3000031 3000017 3000018 3000019 }
	# inventions = { 3000011 3000012 3000015 3000016 3000017 3000018 3000019 3000020 3000027 3000028 3000031 }
	

#####################
# GER 1948 Order Of Battle
#####################

   # ARMY HIGH COMMAND
   landunit = 
   { location = 163 
     name     = "Oberkommando des Heeres" 
     leader   = 153 # Keitel W.
     id       = {  type = 14500 id = 1  } 
     division = 
     { id       = {  type = 14500 id = 2  } 
       name     = "Oberkommando des Heeres" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = anti_air
       brigade_model = 5
      }
    }


##### French Atlantic Wall
landunit = 
   { location = 67 								# Spanish border 
     name     = "LXXXIX. Armeekorps" 
     id       = {  type = 14500 id = 413  } 
     division = 
     { id       = {  type = 14500 id = 414  } 
       name     = "245. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25
      }
     
       
    }
   landunit = 
   { location = 68 								  # Bordeaux
     name     = "9. Armee" 
     leader   = 319 # von Lüttwitz
     id       = {  type = 14500 id = 132  } 
     division = 
     { id       = {  type = 14500 id = 133  } 
       name     = "A.O.K. 9" 
       type     = hq 
       model    = 5 
       strength = 75 
       extra    = anti_air
       brigade_model = 5
      }
     division = 
     { id       = {  type = 14500 id = 134  } 
       name     = "17. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
     division = 
     { id       = {  type = 14500 id = 135  } 
       name     = "214. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
       
    }
 landunit = 
   { location = 69 							#	La Rochelle
     name     = "Marineoberkommando West" 
     id       = {  type = 14500 id = 419  } 
     division = 
     { id       = {  type = 14500 id = 420  } 
       name     = "265. Infanterie-Division (mot)" 
       type     = motorized 
       model    = 3 
       strength = 25
      }
	  division = 
     { id       = {  type = 14500 id = 9  } 
       name     = "230. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25
      }
       
    }
	  landunit = 				
   { location = 57								# Nantes 
     name     = "LXVI. Armeekorps" 
     id       = {  type = 14500 id = 360  } 
  division = 
     { id       = {  type = 14500 id = 162  } 
       name     = "68. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
      
    }
	landunit = 
   { location = 40 			# Saint Nazirre
     name     = "LXXXV. Armeekorps" 
     id       = {  type = 14500 id = 386  } 
     division = 
     { id       = {  type = 14500 id = 43  } 
       name     = "87. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
      
    }
 # Navy High Command West
   landunit = 
   { location = 39 							# Lorient
     name     = "Festungs Lorient" 
     id       = {  type = 14500 id = 421  } 
     division = 
     { id       = {  type = 14500 id = 440  } 
       name     = "Festungs Lorient" 
       type     = garrison 
       model    = 6 
       strength = 65 
      }
       
    }
	     landunit = 
   { location = 37								# Brest 
     name     = "Marine Oberkommando West" 
     id       = {  type = 14500 id = 17  } 
     division = 
     { id       = {  type = 14500 id = 18  } 
       name     = "702. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
	division = 
     { id       = {  type = 14500 id = 422  } 
       name     = "319. Infanterie-Division" 
       type     = infantry 
       model    = 12
       strength = 25
      }
    }	
	  landunit = 
   { location = 43							# Cherbourg 
     name     = "LXXX. Armeekorps" 
     id       = {  type = 14500 id = 408  } 
     
     division = 
     { id       = {  type = 14500 id = 412  } 
       name     = "347. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25
      }
       
    }
   landunit = 																							
   { location = 46							# Bayeux 
     name     = "LXXX. Armeekorps" 
     id       = {  type = 14500 id = 389  } 
     division = 
     { id       = {  type = 14500 id = 402  } 
       name     = "526. Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
       
    }
   landunit = 
   { location = 53								# Dieppe 
     name     = "XXVII. Armeekorps" 
     id       = {  type = 14500 id = 128  } 
     
     division = 
     { id       = {  type = 14500 id = 130  } 
       name     = "35. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
     division = 
     { id       = {  type = 14500 id = 131  } 
       name     = "252. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
    }
	 landunit = 
   { location = 44					# Caen 
     name     = "VI. Armeekorps" 
     id       = {  type = 14500 id = 104  } 
     
     division = 
     { id       = {  type = 14500 id = 107  } 
       name     = "131. Infanterie-Division" 
       type     = infantry 
       model    = 12 
	   extra    = anti_air
       brigade_model = 5
       strength = 25 
      }
       
    }
	   landunit = 
   { location = 49							# Calais 
     name     = "XXVIII. Armeekorps" 
     id       = {  type = 14500 id = 100  } 
     
     division = 
     { id       = {  type = 14500 id = 103  } 
       name     = "203. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
	division = 
     { id       = {  type = 14500 id = 84  } 
       name     = "1. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25  
      }
       
    }
	landunit = 
   { location = 51 
     name     = "Marineoberkommando West" # Dunkirk
     id       = {  type = 14500 id = 417  } 
     division = 
     { id       = {  type = 14500 id = 418  } 
       name     = "226. Infanterie-Division" 
       type     = infantry 
       model    = 12
	   extra    = anti_air
       brigade_model = 5
       strength = 25
      }
	  division = 
     { id       = {  type = 14500 id = 73  } 
       name     = "281. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
       
    }
	
# LOW COUNTRIES and occupation of France
  landunit = 
   { location = 52					# Lille 
     name     = "XVI. Armeekorps" 
     id       = {  type = 14500 id = 70  } 
    
	   division = 
     { id       = {  type = 14500 id = 29  } 
       name     = "A.O.K. 18" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = anti_air
       brigade_model = 4
      }
     division = 
     { id       = {  type = 14500 id = 72  } 
       name     = "81. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      } 
       
    }	
	landunit = 
   { location = 125							# Amsterdam 
     name     = "LXXI. Armeekorps" 
     id       = {  type = 14500 id = 13  } 
     division = 
     { id       = {  type = 14500 id = 14  } 
       name     = "163. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25
      }
     division = 
     { id       = {  type = 14500 id = 15  } 
       name     = "199. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25
      }
     division = 
     { id       = {  type = 14500 id = 16  } 
       name     = "210. Infanterie-Division" 
       type     = infantry 
       model    = 12
       strength = 25
      }
       
    }
	   landunit = 				
   { location = 114						# Bruges 
     name     = "LXX. Armeekorps" 
     id       = {  type = 14500 id = 22  } 
     division = 
     { id       = {  type = 14500 id = 23  } 
       name     = "274. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25
       extra    = artillery
       brigade_model = 11
      }
     division = 
     { id       = {  type = 14500 id = 24  } 
       name     = "280. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
    }
	   landunit = 
   { location = 115						# Antwerp 
     name     = "XXXVIII. Armeekorps" 
     id       = {  type = 14500 id = 54  } 
     division = 
     { id       = {  type = 14500 id = 55  } 
       name     = "205. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
     division = 
     { id       = {  type = 14500 id = 56  } 
       name     = "215. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
	  division = 
     { id       = {  type = 14500 id = 60  } 
       name     = "122. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
     division = 
     { id       = {  type = 14500 id = 57  } 
       name     = "329. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
       
    }
   landunit = 
   { location = 122							# Rotterdam 
     name     = "L. Armeekorps" 
     id       = {  type = 14500 id = 58  } 
     division = 
     { id       = {  type = 14500 id = 59  } 
       name     = "24. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
     division = 
     { id       = {  type = 14500 id = 61  } 
       name     = "290. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }

       
    }
	   # DENMARK OCCUPATION FORCE
   landunit = 
   { location = 217 
     name     = "Wehrm. Befehlshaber Dänemark" 
     id       = {  type = 14500 id = 308  } 
     division = 
     { id       = {  type = 14500 id = 309  } 
       name     = "166. Reserve-Division" 
       type     = infantry 
       model    = 12
       strength = 10
      }
    }
   landunit = 
   { location = 220 
     name     = "Wehrm. Befehlshaber Dänemark" 
     id       = {  type = 14500 id = 310  } 
     division = 
     { id       = {  type = 14500 id = 311  } 
       name     = "160. Reserve-Division" 
       type     = infantry 
       model    = 12 
       strength = 10
      }
    }
	#Norway occupation force
	 # ARMY OF NORWAY
   landunit = 	
   { location = 483 							# Oslo
     name     = "Armee Norwegen" 
     leader   = 293 # von Falkenhorst
     id       = {  type = 14500 id = 3  } 
     division = 
     { id       = {  type = 14500 id = 4  } 
       name     = "A.O.K. 21" 
       type     = hq 
       model    = 5 
       extra    = police
       brigade_model = 3
       strength = 25 
      }
	division = 
     { id       = {  type = 14500 id = 62  } 
       name     = "389. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
    }
	   landunit = 
   { location = 485 					# South Norway
     name     = "XXXIII. Armeekorps" 
     id       = {  type = 14500 id = 20  } 
     division = 
     { id       = {  type = 14500 id = 21  } 
       name     = "295. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25   
      }
    }
	landunit = 
   { location = 491							# Bergen 
     name     = "I. Armeekorps" 
     id       = {  type = 14500 id = 31  } 

     division = 
     { id       = {  type = 14500 id = 33  } 
       name     = "225. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
     
       
    }
	 landunit = 
   { location = 493							# Trondheim 
     name     = "II. Armeekorps" 
     id       = {  type = 14500 id = 45  } 
 
     division = 
     { id       = {  type = 14500 id = 49  } 
       name     = "263. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
       
    }
	
   landunit = 
   { location = 495							# Narvik 
     name     = "20. Gebirgsarmee" 
     leader   = 565 # Rendulic
     id       = {  type = 14500 id = 5  } 
     division = 
     { id       = {  type = 14500 id = 6  } 
       name     = "A.O.K. 20" 
       type     = hq 
       model    = 5
       strength = 70 
       extra    = anti_air
       brigade_model = 4
      }
	  division = 
     { id       = {  type = 14500 id = 274  } 
       name     = "5. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 12 
       strength = 80 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 8  } 
       name     = "7. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 12
       strength = 80 
       experience = 40
      }
       
    }
####################  
#### Army in the Balkans
#########################	
landunit = 
   { location = 382 								#Crete
     name     = "Kommandantur d. Festung Kreta" 
     id       = {  type = 14500 id = 263  } 
     division = 
     { id       = {  type = 14500 id = 264  } 
       name     = "133. Festungs-Division" 
       type     = garrison 
       model    = 6 
       strength = 35 
      }
	division = 
     { id       = {  type = 14500 id = 193  } 
       name     = "3. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 12 
       strength = 80 
       experience = 40
      }
	division = 
     { id       = {  type = 14500 id = 356  } 
       name     = "3. Fallschirmjäger-Division" 
       type     = paratrooper 
       model    = 3 
       strength = 80
       experience = 40
      }
    }
   landunit = 
   { location = 377							#Athens 
     name     = "LXVII. Armeekorps" 
     leader   = 248 # Schörner
     id       = {  type = 14500 id = 26  } 
    division = 
     { id       = {  type = 14500 id = 12  } 
       name     = "169. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 80
      }
     division = 
     { id       = {  type = 14500 id = 357  } 
       name     = "89. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 93  } 
       name     = "607. z.b.V. Division" 
       type     = infantry 
       model    = 12
       strength = 65 
      }
     division = 
     { id       = {  type = 14500 id = 94  } 
       name     = "58. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 65 
      }
       
    }
	landunit = 
   { location = 338					# Belgrado 
     name     = "12. Armee (Serbien)" 
     leader   = 44 # de Angelis
     id       = {  type = 14500 id = 229  } 
     division = 
     { id       = {  type = 14500 id = 230  } 
       name     = "Pz. A.O.K. 2" 
       type     = hq 
       model    = 5 
       strength = 75 
       extra    = anti_air
       brigade_model = 5
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 232  } 
       name     = "44. Infanterie-Division" 
       type     = infantry 
       model    = 12
       strength = 65 
      }
     division = 
     { id       = {  type = 14500 id = 233  } 
       name     = "71. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 65 
      }
	division = 
     { id       = {  type = 14500 id = 11  } 
       name     = "270. Infanterie-Division" 
       type     = infantry 
       model    = 12
       strength = 80
      }
	 division = 
     { id       = {  type = 14500 id = 35  } 
       name     = "218. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 65 
      }
       division = 
     { id       = {  type = 14500 id = 13333  } 
       name     = "117. Jäger-Division" 
       type     = infantry 
       model    = 12 
       strength = 40 
       extra    = engineer
       brigade_model = 5
      }     
    }
landunit = 
   { location = 358 
     name     = "XV. Gebirgskorps" 
     id       = {  type = 14500 id = 260  } 
     division = 
     { id       = {  type = 14500 id = 261  } 
       name     = "373. Kroatische Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 80
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 262  } 
       name     = "392. Kroatische Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 80
       experience = 20
      }
	 division = 
     { id       = {  type = 14500 id = 247  } 
       name     = "369. Kroatische Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 80 
       experience = 20
      }
       
    }
	   landunit = 
   { location = 383
     name     = "Kommandantur d. Ost Ägäis" 
     id       = {  type = 14500 id = 265  } 
     division = 
     { id       = {  type = 14500 id = 266  } 
       name     = "Kommandantur d. Ost Ägäis" 
       type     = garrison 
       model    = 6 
       strength = 25 
      }
    }
	####################
	# Carinthia
	####################
   landunit = 	
   { location = 346 
     name     = "XXI. Gebirgskorps" 
     id       = {  type = 14500 id = 248  } 
     division = 
     { id       = {  type = 14500 id = 251  } 
       name     = "41. Festungs-Division" 
       type     = garrison 
       model    = 6 
       strength = 50 
      }
     division = 
     { id       = {  type = 14500 id = 252  } 
       name     = "104. Jäger-Division" 
       type     = infantry 
       model    = 12 
       strength = 50
       extra    = engineer
       brigade_model = 5
      }
     division = 
     { id       = {  type = 14500 id = 253  } 
       name     = "297. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 50 
      }
       
    }
	
	##### ANTI-PARTISAN DIVISIONS IN EASTERN EUROPE#####
	 # 17th Army
   landunit = 
   { location = 702 
     name     = "17. Armee" 
     leader   = 247 # Schulz F.
     id       = {  type = 14500 id = 170  } 
     division = 
     { id       = {  type = 14500 id = 171  } 
       name     = "A.O.K. 17" 
       type     = hq 
       model    = 5 
       strength = 75 
       extra    = anti_air
       brigade_model = 5
       experience = 20
      }
	     division = 
     { id       = {  type = 14500 id = 272  } 
       name     = "162. Infanterie-Div. 'Turkestan'" 
       type     = infantry 
       model    = 12 
       strength = 80 
       experience = 20
      }  
     
       
    }
	 landunit = 									# In Belarus
   { location = 589 
     name     = "206. Sicherungs-Division" 
     #leader   = 136 # Hilpert
     id       = {  type = 14501 id = 95  } 
	division = 
     { id       = {  type = 14500 id = 95  } 
       name     = "206. Sicherungs-Division" 
       type     = garrison 
       model    = 6 
       strength = 100 
      }
	}
	   landunit = 
   { location = 254
     name     = "52. Sicherungs-Division" 
     leader   = 248 # Schörner
     id       = {  type = 14501 id = 30  } 

	   division = 
     { id       = {  type = 14500 id = 30  } 
       name     = "52. Sicherungs-Division" 
       type     = garrison 
       model    = 6 
       strength = 100
       extra    = police
       brigade_model = 2
       experience = 20
      }
       
    }
	 landunit = 									# In Belarus
   { location = 600 
     name     = "221. Sicherungs-Division" 
     #leader   = 136 # Hilpert
     id       = {  type = 14501 id = 69  } 
 division = 
     { id       = {  type = 14500 id = 69  } 
       name     = "221. Sicherungs-Division" 
       type     = garrison 
       model    = 6 
       strength = 100 
	   extra    = police
	   brigade_model = 2
      }
	}

#########################
# Caucasus front
#########################
  landunit = 
   { location = 707						# Baku
     name     = "XXII. Gebirgskorps" 
     id       = {  type = 14500 id = 312  } 
     division = 
     { id       = {  type = 14500 id = 315  } 
       name     = "2. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 12 
       strength = 80 
       experience = 20
      }
	   division = 
     { id       = {  type = 14500 id = 237  } 
       name     = "1. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 12 
       strength = 80 
       experience = 40
      }
	division = 
     { id       = {  type = 14500 id = 302  } 
       name     = "114. Jäger-Division" 
       type     = infantry 
       model    = 12 
       strength = 80 
       extra    = engineer
       brigade_model = 5
       experience = 20
      }
    }
landunit = 
   { location = 713							# Baku 					
     name     = "XXXXIX. Gebirgskorps" 
     id       = {  type = 14500 id = 182  } 
     division = 
     { id       = {  type = 14500 id = 183  } 
       name     = "1. Skijäger-Division" 
       type     = infantry 
       model    = 12
       strength = 80 
       extra    = engineer
       brigade_model = 5
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 184  } 
       name     = "97. Jäger-Division" 
       type     = infantry 
       model    = 12 
       strength = 80 
       experience = 20
      }
       
    }
  landunit = 
   { location = 695							# Sochi 
     name     = "XVII. Armeekorps" 
     id       = {  type = 14500 id = 191  } 
     division = 
     { id       = {  type = 14500 id = 194  } 
       name     = "4. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 12 
       strength = 80 
       experience = 40
      }
       
    }
	
	
	
	
### Mountain Reserve troops
  landunit = 
   { location = 189 
     name     = "VIII. Armeekorps" 
     id       = {  type = 14500 id = 136  } 
      division = 
     { id       = {  type = 14500 id = 305  } 
       name     = "188. Reserve-Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 12 
       strength = 10
      }
       
    }	
	
	
########################
# Occupation of Russia
#######################
 landunit = 
   { location = 669 
     name     = "XCVII. z.b.V. Korps" 
     id       = {  type = 14500 id = 304  } 
    division = 
     { id       = {  type = 14500 id = 7  } 
       name     = "6. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 12 
       strength = 100
       experience = 40
      }
      division = 
     { id       = {  type = 14500 id = 111  } 
       name     = "28. Jäger-Division" 
       type     = infantry 
       model    = 12 
       strength = 100 
       extra    = engineer
       brigade_model = 5
       experience = 20
      }
	  division = 
     { id       = {  type = 14500 id = 185  } 
       name     = "101. Jäger-Division" 
       type     = infantry 
       model    = 12
       strength = 100
       extra    = engineer
       brigade_model = 5
       experience = 20
      }
       
    }
	landunit = 
   { location = 668 
     name     = "LIX. Armeekorps" 
     id       = {  type = 14500 id = 175  } 
     
   division = 
     { id       = {  type = 14500 id = 203  } 
       name     = "118. Jäger-Division" 
       type     = infantry 
       model    = 12
       strength = 100 
       extra    = engineer
       brigade_model = 5
       experience = 20
      }
    division = 
     { id       = {  type = 14500 id = 124  } 
       name     = "5. Jäger-Division" 
       type     = infantry 
       model    = 12 
       strength = 100 
       extra    = engineer
       brigade_model = 5
       experience = 20
      }
	  division = 
     { id       = {  type = 14500 id = 285  } 
       name     = "157. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 12
       strength = 100 
       experience = 40
      }
       
    }
	landunit = 
   { location = 683 
     name     = "XI. Armeekorps" 
     id       = {  type = 14500 id = 187  } 
    	  
	division = 
     { id       = {  type = 14500 id = 291  } 
       name     = "42. Jäger-Division" 
       type     = infantry 
       model    = 12 
       strength = 100 
       extra    = engineer
       brigade_model = 5
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 186  } 
       name     = "254. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 100 
       extra    = tank_destroyer
       brigade_model = 3 
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 189  } 
       name     = "100. Jäger-Division" 
       type     = infantry 
       model    = 12 
       strength = 100 
       extra    = engineer
       brigade_model = 5
       experience = 20
      }   
       
    }
	landunit = 
   { location = 572
     name     = "III. Hadsereg" 
     id       = {  type = 14500 id = 198  } 
     division = 
     { id       = {  type = 14500 id = 199  } 
       name     = "Panzer-Division 'Tatra'" 
       type     = armor 
       model    = 3 
       strength = 100
       experience = 40
      }
	 division = 
     { id       = {  type = 14500 id = 784  } 
       name     = "83. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 100 
	   extra    = artillery
       brigade_model = 11
       experience = 20
      }
	 division = 
     { id       = {  type = 14500 id = 64  } 
       name     = "93. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 75 
       extra    = tank_destroyer
       brigade_model = 3 
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 202  } 
       name     = "96. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 75 
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 205  } 
       name     = "711. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 75
       experience = 20
      }
    }
	   landunit = 
   { location = 674 
     name     = "VI. Korps" 
     id       = {  type = 14500 id = 63  } 
     division = 
     { id       = {  type = 14500 id = 67  } 
       name     = "4. Panzer-Division" 
       type     = armor 
       model    = 3 
       strength = 75 
       experience = 30
      }
     division = 
     { id       = {  type = 14500 id = 68  } 
       name     = "12. Panzer-Division" 
       type     = armor 
       model    = 3 
       strength = 75 
       extra    = anti_air
       brigade_model = 5
       experience = 30
      }
    }
	 landunit = 
   { location = 658 
     name     = "1. Armee" 
     leader   = 326 # von Obstfelder
     id       = {  type = 14500 id = 400  } 
     division = 
     { id       = {  type = 14500 id = 401  } 
       name     = "A.O.K. 1" 
       type     = hq 
       model    = 5 
       strength = 70 
       extra    = anti_air
       brigade_model = 5
       experience = 20
      }    
     division = 
     { id       = {  type = 14500 id = 406  } 
       name     = "25. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 1
       strength = 75 
       experience = 30
      }
     division = 
     { id       = {  type = 14500 id = 407  } 
       name     = "21. Panzer-Division" 
       type     = armor 
       model    = 3 
       strength = 75
       experience = 30
      }
       
    }
	   # 18th Army
   landunit = 
   { location = 563 
     name     = "18. Armee" 
     leader   = 189 # Loch
     id       = {  type = 14500 id = 28  } 
	      division = 
     { id       = {  type = 14500 id = 27  } 
       name     = "Feldausbildung-Division 'Nord'" 
       type     = infantry 
       model    = 12
       strength = 100
       extra    = police
       brigade_model = 2
      }     
    }
landunit = 
   { location = 679 
     name     = "II. Panzerkorps" 
     id       = {  type = 14500 id = 363  } 
	    division = 
     { id       = {  type = 14500 id = 235  } 
       name     = "3. Kavallerie-Brigade" 
       type     = cavalry 
       model    = 12 
       strength = 75
       experience = 40
      }  
    }
	 landunit = 
   { location = 555 
     name     = "III. Panzerkorps" 
     id       = {  type = 14500 id = 37  } 
     division = 
     { id       = {  type = 14500 id = 40  } 
       name     = "121. Infanterie-Division" 
       type     = infantry 
       model    = 12
       strength = 75 
       extra    = artillery
       brigade_model = 11
       experience = 40
      }      
    }
   landunit = 
   { location = 654 
     name     = "Heeresgruppe Süd Reserve" 
     leader   = 75 # Friessner
     id       = {  type = 14500 id = 195  } 
     division = 
     { id       = {  type = 14500 id = 197  } 
       name     = "153. Feldausbildung-Division" 
       type     = infantry 
       model    = 12 
       strength = 75 
       extra    = police
       brigade_model = 2
      }
    }
	landunit = 
   { location = 579 
     name     = "LXXIII. z.b.V. Korps" 
     id       = {  type = 14500 id = 300  } 
	     division = 
     { id       = {  type = 14500 id = 181  } 
       name     = "154. Feldausbildung-Division" 
       type     = infantry 
       model    = 12 
       strength = 100 
       extra    = police
       brigade_model = 2
      }
 division = 
     { id       = {  type = 14500 id = 432  } 
       name     = "716. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 75
       experience = 20
      }
       
    }
	   landunit = 
   { location = 262 
     name     = "XXXXII. Armeekorps" 
     id       = {  type = 14500 id = 165  } 
     division = 
     { id       = {  type = 14500 id = 166  } 
       name     = "72. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 75 
       extra    = tank_destroyer
       brigade_model = 3 
       experience = 30
      }
     division = 
     { id       = {  type = 14500 id = 167  } 
       name     = "88. Infanterie-Division" 
       type     = infantry 
       model    = 12 
	   extra    = tank_destroyer
       brigade_model = 3 
       strength = 100 
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 168  } 
       name     = "291. Infanterie-Division" 
       type     = infantry 
       model    = 12 
	   extra    = tank_destroyer
       brigade_model = 3 
       strength = 75 
       experience = 30
      }
	     division = 
     { id       = {  type = 14500 id = 238  } 
       name     = "92. Grenadier-Brigade (mot)" 
       type     = motorized 
       model    = 3
       strength = 80
       extra    = artillery
       brigade_model = 11
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 169  } 
       name     = "342. Infanterie-Division" 
       type     = infantry 
       model    = 12 
	   extra    = artillery
       brigade_model = 11 
       strength = 75
       experience = 10
      }
       
    }
	############# KIEV
	 landunit = 
   { location = 617									# Kiev 
     name     = "XII. Korps" 
     id       = {  type = 14500 id = 340  } 
	 division = 
     { id       = {  type = 14500 id = 426  } 
       name     = "A.O.K. 19" 
       type     = hq 
       model    = 5 
       strength = 70 
       extra    = anti_air
       brigade_model = 5
       experience = 40
      }
	 division = 
     { id       = {  type = 14500 id = 341  } 
       name     = "59. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 75
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 342  } 
       name     = "176. Infanterie-Division" 
       type     = infantry 
       model    = 12 
	   extra    = tank_destroyer
       brigade_model = 3
       strength = 75
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 343  } 
       name     = "183. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 100
       experience = 15
      }
	division = 
     { id       = {  type = 14500 id = 427  } 
       name     = "106. Panzer-Brigade" 
       type     = armor 
       model    = 3 
       strength = 75
       experience = 40
       extra    = sp_artillery
       brigade_model = 3
      }
     
     division = 
     { id       = {  type = 14500 id = 429  } 
       name     = "189. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 75
       experience = 15
      }
       
    }
	# 6th Army
   landunit = 
   { location = 599
     name     = "6. Armee" 
     leader   = 73 # Fretter-Pico
     id       = {  type = 14500 id = 216  } 
     division = 
     { id       = {  type = 14500 id = 217  } 
       name     = "A.O.K. 6" 
       type     = hq 
       model    = 5 
       strength = 75 
       extra    = anti_air
       brigade_model = 5
       experience = 20
      }
	   division = 
     { id       = {  type = 14500 id = 10  } 
       name     = "140. z.b.V. Division" 
       type     = infantry 
       model    = 12 
       strength = 75
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 218  } 
       name     = "1. Panzer-Division" 
       type     = armor 
       model    = 3 
       strength = 75 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 219  } 
       name     = "3. Panzer-Division" 
       type     = armor 
       model    = 3 
       strength = 75 
       extra    = sp_artillery
       brigade_model = 3
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 220  } 
       name     = "6. Panzer-Division" 
       type     = armor 
       model    = 3 
       strength = 75 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 221  } 
       name     = "8. Panzer-Division" 
       type     = armor 
       model    = 3 
       strength = 75 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 222  } 
       name     = "23. Panzer-Division" 
       type     = armor 
       model    = 3 
       strength = 75 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 223  } 
       name     = "4. Kavallerie-Brigade" 
       type     = cavalry 
       model    = 12 
       strength = 75
       experience = 20
      }
     
     division = 
     { id       = {  type = 14500 id = 225  } 
       name     = "357. Infanterie-Division" 
       type     = infantry 
       model    = 12
       strength = 100
       experience = 15
      }
   
       
    }
	   landunit = 
   { location = 244 
     name     = "IV. Panzerkorps" 
     id       = {  type = 14500 id = 211  } 
     division = 
     { id       = {  type = 14500 id = 204  } 
       name     = "211. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 65 
       extra    = anti_air
       brigade_model = 5
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 213  } 
       name     = "24. Panzer-Division" 
       type     = armor 
       model    = 3 
       strength = 80 
       extra    = heavy_armor
       brigade_model = 4 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 214  } 
       name     = "46. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 65 
       experience = 15
      }     
    }
	  # GERMAN ARMY RESERVE COLOGNE
   landunit = 
   { location = 131 
     name     = "Oberbefehlshaber West Reserve" 
     leader   = 334 # von Rundstedt
     id       = {  type = 14500 id = 317  } 
     division = 
     { id       = {  type = 14500 id = 319  } 
       name     = "70. Infanterie-Division" 
       type     = infantry 
       model    = 12
	   extra    = tank_destroyer
       brigade_model = 3
       strength = 25 
      }
     division = 
     { id       = {  type = 14500 id = 321  } 
       name     = "604. z.b.V. Division" 
       type     = infantry 
       model    = 12
	   extra    = artillery
       brigade_model = 11
       strength = 25 
      }
	  division = 
     { id       = {  type = 14500 id = 313  } 
       name     = "233. Reserve-Panzer-Division" 
       type     = armor 
       model    = 3 
       strength = 10
      }
    }
	# 1st Parachute Army
   landunit = 
   { location = 145 
     name     = "1. Fallschirm-Armee" 
     leader   = 239 # Schlemm
     id       = {  type = 14500 id = 328  } 
     division = 
     { id       = {  type = 14500 id = 329  } 
       name     = "Fsch. A.O.K. 1" 
       type     = hq 
       model    = 5 
       strength = 75 
       extra    = anti_air
       brigade_model = 5
      }
     division = 
     { id       = {  type = 14500 id = 330  } 
       name     = "7. Fallschirmjäger-Division" 
       type     = paratrooper 
       model    = 3 
       strength = 50 
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 331  } 
       name     = "606. z.b.V. Division" 
       type     = infantry 
       model    = 12
	   extra    = artillery
       brigade_model = 11
       strength = 25 
      }
     division = 
     { id       = {  type = 14500 id = 332  } 
       name     = "84. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25
      }
     division = 
     { id       = {  type = 14500 id = 333  } 
       name     = "180. Infanterie-Division" 
       type     = infantry 
       model    = 12
	   extra    = tank_destroyer
       brigade_model = 3 
       strength = 25
      }
     division = 
     { id       = {  type = 14500 id = 334  } 
       name     = "190. Infanterie-Division" 
       type     = infantry 
       model    = 12 
	   extra    = artillery
       brigade_model = 11
       strength = 25
      }
       
    }
	landunit = 
   { location = 185 
     name     = "LXXX. Armeekorps" 
     id       = {  type = 14500 id = 392  } 
     division = 
     { id       = {  type = 14500 id = 393  } 
       name     = "5. Fallschirmjäger-Division" 
       type     = paratrooper 
       model    = 3
       strength = 50
       experience = 20
        
      }
     
     division = 
     { id       = {  type = 14500 id = 395  } 
       name     = "Führer-Grenadier-Division" 
       type     = mechanized 
       model    = 1 
       strength = 25 
       experience = 20
        
      }
       
    }
	landunit = 
   { location = 179 
     name     = "X. Armeekorps" 
     id       = {  type = 14500 id = 41  } 
     division = 
     { id       = {  type = 14500 id = 42  } 
       name     = "30. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
	   extra    = artillery
       brigade_model = 11
      }
    
     division = 
     { id       = {  type = 14500 id = 44  } 
       name     = "132. Infanterie-Division" 
       type     = infantry 
       model    = 12
       strength = 25 
	   extra    = artillery
       brigade_model = 11
      }
	      division = 
     { id       = {  type = 14500 id = 46  } 
       name     = "14. Panzer-Division" 
       type     = armor 
       model    = 3 
       strength = 25
       extra    = heavy_armor
       brigade_model = 4 
      }

     
       
    }
	# ARMY GROUP CENTER
   landunit = 
   { location = 184 
     name     = "Heeresgruppe Mitte Reserve" 
     leader   = 223 # Reinhardt
     id       = {  type = 14500 id = 74  } 
     division = 
     { id       = {  type = 14500 id = 76  } 
       name     = "7. Panzer-Division" 
       type     = armor 
       model    = 3 
       strength = 50 
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 77  } 
       name     = "18. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 1 
       strength = 50
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 78  } 
       name     = "605. z.b.V. Division" 
       type     = infantry 
       model    = 12 
       strength = 50 
	   extra    = tank_destroyer
       brigade_model = 3
      }
     division = 
     { id       = {  type = 14500 id = 79  } 
       name     = "20. Panzer-Division" 
       type     = armor 
       model    = 3 
       strength = 50 
       experience = 20
      }
    }
	  # 8th Army
   landunit = 
   { location = 207 
     name     = "8. Armee" 
     leader   = 367 # Wöhler
     id       = {  type = 14500 id = 206  } 
     division = 
     { id       = {  type = 14500 id = 207  } 
       name     = "A.O.K. 8" 
       type     = hq 
       model    = 5 
       strength = 75 
       extra    = anti_air
       brigade_model = 5
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 209  } 
       name     = "15. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 50 
       experience = 80
      }
	
     division = 
     { id       = {  type = 14500 id = 210  } 
       name     = "76. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 50 
      }
       
    }
	  # ARMY GROUP H
   # 25th Army
   landunit = 
   { location = 138 
     name     = "25. Armee" 
     leader   = 612 # Christiansen
     id       = {  type = 14500 id = 322  } 
     division = 
     { id       = {  type = 14500 id = 323  } 
       name     = "A.O.K. 25" 
       type     = hq 
       model    = 5 
       strength = 75 
       extra    = anti_air
       brigade_model = 5
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 324  } 
       name     = "2. Fallschirmjäger-Division" 
       type     = paratrooper 
       model    = 3 
       strength = 50 
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 325  } 
       name     = "6. Fallschirmjäger-Division" 
       type     = paratrooper 
       model    = 3 
       strength = 50
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 326  } 
       name     = "346. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 50
      }
     division = 
     { id       = {  type = 14500 id = 327  } 
       name     = "711. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 50
      }
       
    }
		   landunit = 
   { location = 553 
     name     = "LXXIII. z.b.V. Korps" 
     id       = {  type = 14501 id = 300  } 

     division = 
     { id       = {  type = 14500 id = 303  } 
       name     = "356. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 50 
      }
       
    }
landunit = 
   { location = 107 
     name     = "LXXVI. Panzerkorps" 
     id       = {  type = 14500 id = 295  } 
     division = 
     { id       = {  type = 14500 id = 296  } 
       name     = "29. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 1 
       strength = 50 
      }
     division = 
     { id       = {  type = 14500 id = 297  } 
       name     = "90. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 1 
       strength = 50 
      }
     division = 
     { id       = {  type = 14500 id = 298  } 
       name     = "278. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 50 
      }
     division = 
     { id       = {  type = 14500 id = 299  } 
       name     = "715. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 50
      }
       
    }
	# 4th Panzer Army
   landunit = 
   { location = 235 
     name     = "4. Panzerarmee" 
     leader   = 552 # Gräser C.
     id       = {  type = 14500 id = 160  } 
     division = 
     { id       = {  type = 14500 id = 161  } 
       name     = "Pz. A.O.K. 4" 
       type     = hq 
       model    = 5 
       strength = 75 
       extra    = anti_air
       brigade_model = 5
       experience = 20
      }
     
     division = 
     { id       = {  type = 14500 id = 163  } 
       name     = "168. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
     division = 
     { id       = {  type = 14500 id = 164  } 
       name     = "304. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
       
    }
		# 2nd Army
   landunit = 
   { location = 190 
     name     = "2. Armee" 
     leader   = 360 # Weiss
     id       = {  type = 14500 id = 118  } 
     division = 
     { id       = {  type = 14500 id = 119  } 
       name     = "A.O.K. 2" 
       type     = hq 
       model    = 5 
       strength = 75 
       extra    = anti_air
       brigade_model = 5
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 120  } 
       name     = "14. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 50 
       extra    = tank_destroyer
       brigade_model = 3 
      }
     division = 
     { id       = {  type = 14500 id = 122  } 
       name     = "292. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 50 
       extra    = tank_destroyer
       brigade_model = 3
      }
       
    }
	landunit = 
   { location = 224 
     name     = "XXXX. Panzerkorps" 
     id       = {  type = 14500 id = 153  } 
     division = 
     { id       = {  type = 14500 id = 154  } 
       name     = "602. z.b.V. Division" 
       type     = infantry 
       model    = 12 
       strength = 50 
      }
     division = 
     { id       = {  type = 14500 id = 155  } 
       name     = "608. z.b.V. Division" 
       type     = infantry 
       model    = 12 
       strength = 50 
      }
     division = 
     { id       = {  type = 14500 id = 156  } 
       name     = "344. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 50
      }
     division = 
     { id       = {  type = 14500 id = 157  } 
       name     = "19. Panzer-Division" 
       type     = armor 
       model    = 3 
       strength = 45 
      }
     division = 
     { id       = {  type = 14500 id = 158  } 
       name     = "25. Panzer-Division" 
       type     = armor 
       model    = 3 
       strength = 65 
      }
    }
	# 10th Army
   landunit = 
   { location = 195 
     name     = "10. Armee" 
     leader   = 183 # Lemelsen
     id       = {  type = 14500 id = 281  } 
     division = 
     { id       = {  type = 14500 id = 282  } 
       name     = "A.O.K. 10" 
       type     = hq 
       model    = 5
       strength = 75 
       extra    = anti_air
       brigade_model = 5
       experience = 20
      }
	division = 
     { id       = {  type = 14500 id = 34  } 
       name     = "32. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 65
      }  
     division = 
     { id       = {  type = 14500 id = 36  } 
       name     = "11. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 65 
       extra    = artillery
       brigade_model = 11
      }
     division = 
     { id       = {  type = 14500 id = 283  } 
       name     = "26. Panzer-Division" 
       type     = armor 
       model    = 3 
       strength = 50 
      }
     division = 
     { id       = {  type = 14500 id = 284  } 
       name     = "98. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 50 
      }
      division = 
     { id       = {  type = 14500 id = 178  } 
       name     = "371. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 65 
      }
       
    }
	  # 4th Army
   landunit = 
   { location = 177 
     name     = "4. Armee" 
     leader   = 141 # Hossbach
     id       = {  type = 14500 id = 96  } 
     division = 
     { id       = {  type = 14500 id = 97  } 
       name     = "A.O.K. 4" 
       type     = hq 
       model    = 5 
       strength = 75 
       extra    = anti_air
       brigade_model = 5
       experience = 20
      }
	    division = 
     { id       = {  type = 14500 id = 87  } 
       name     = "56. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 3 
      }
     division = 
     { id       = {  type = 14500 id = 98  } 
       name     = "5. Panzer-Division" 
       type     = armor 
       model    = 3 
       strength = 50 
      }
     division = 
     { id       = {  type = 14500 id = 99  } 
       name     = "Fallschirm Pz-Div. 'Hermann Göring'" 
       type     = armor 
       model    = 3 
       strength = 25 
       extra    = heavy_armor
       brigade_model = 4 
      }
       
    }
	# ARMY GROUP A
   landunit = 
   { location = 154 
     name     = "XXIV. Panzerkorps" 
     id       = {  type = 14500 id = 146  } 
     division = 
     { id       = {  type = 14500 id = 147  } 
       name     = "601. z.b.V. Division" 
       type     = infantry 
       model    = 12 
       strength = 50 
      }
	   division = 
     { id       = {  type = 14500 id = 139  } 
       name     = "251. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
     division = 
     { id       = {  type = 14500 id = 142  } 
       name     = "73. Infanterie-Division" 
       type     = infantry 
       model    = 12
       strength = 25 
      }
     division = 
     { id       = {  type = 14500 id = 148  } 
       name     = "603. z.b.V. Division" 
       type     = infantry 
       model    = 12 
       strength = 50 
      }
     division = 
     { id       = {  type = 14500 id = 150  } 
       name     = "16. Panzer-Division" 
       type     = armor 
       model    = 3 
       strength = 35 
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 151  } 
       name     = "17. Panzer-Division" 
       type     = armor 
       model    = 3 
       strength = 50 
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 152  } 
       name     = "20. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 1 
       strength = 50 
       experience = 20
      }
       
    }
	  landunit = 
   { location = 173 
     name     = "LXIII. Armeekorps" 
     id       = {  type = 14500 id = 435  } 
     division = 
     { id       = {  type = 14500 id = 436  } 
       name     = "159. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25
      }
     division = 
     { id       = {  type = 14500 id = 437  } 
       name     = "269. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25
      }
     division = 
     { id       = {  type = 14500 id = 438  } 
       name     = "338. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25
      }
       
    }
   # 14th Army
   landunit = 
   { location = 677 
     name     = "14. Armee" 
     leader   = 345 # von Tippelskirch
     id       = {  type = 14500 id = 278  } 
     division = 
     { id       = {  type = 14500 id = 279  } 
       name     = "A.O.K. 14" 
       type     = hq 
       model    = 5 
       strength = 75 
       extra    = anti_air
       brigade_model = 5
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 280  } 
       name     = "232. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
	    division = 
     { id       = {  type = 14500 id = 354  } 
       name     = "12. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25
        
      }
       
    }
	 landunit = 
   { location = 129 
     name     = "LVIII. Panzerkorps" 
     id       = {  type = 14500 id = 371  } 
     division = 
     { id       = {  type = 14500 id = 372  } 
       name     = "2. Panzer-Division" 
       type     = armor 
       model    = 3 
       strength = 30 
       experience = 20
       extra    = tank_destroyer
       brigade_model = 3
        
      }
     division = 
     { id       = {  type = 14500 id = 373  } 
       name     = "9. Panzer-Division" 
       type     = armor 
       model    = 3 
       strength = 30 
       experience = 20
       extra    = heavy_armor
       brigade_model = 3
        
      }
     division = 
     { id       = {  type = 14500 id = 374  } 
       name     = "116. Panzer-Division" 
       type     = armor 
       model    = 3 
       strength = 30
       experience = 20
        
      }
       
    }
	landunit = 
   { location = 109 
     name     = "XXXXVII. Panzerkorps" 
     id       = {  type = 14500 id = 379  } 
     division = 
     { id       = {  type = 14500 id = 380  } 
       name     = "130. Panzer-Lehr-Division" 
       type     = armor 
       model    = 3 
       strength = 50
       experience = 20
       extra    = sp_artillery
       brigade_model = 3
        
      }
     division = 
     { id       = {  type = 14500 id = 381  } 
       name     = "Panzer-Führerbegleitdivision" 
       type     = armor 
       model    = 3 
       strength = 25
       experience = 20
       extra    = sp_artillery
       brigade_model = 3
        
      }
     division = 
     { id       = {  type = 14500 id = 382  } 
       name     = "15. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 1 
       strength = 25 
       experience = 20
        
      }
       
    }
	 # 7th Army
   landunit = 
   { location = 116 
     name     = "7. Armee" 
     leader   = 27 # Brandenberger
     id       = {  type = 14500 id = 383  } 
     division = 
     { id       = {  type = 14500 id = 384  } 
       name     = "A.O.K. 7" 
       type     = hq 
       model    = 5
       strength = 75 
       extra    = anti_air
       brigade_model = 5
       experience = 20
        
      }
     division = 
     { id       = {  type = 14500 id = 385  } 
       name     = "11. Panzer-Division" 
       type     = armor 
       model    = 3 
       strength = 50 
       experience = 40
        
      }
	  division = 
     { id       = {  type = 14500 id = 430  } 
       name     = "198. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 65 
       experience = 20
      }
       
    }  
     # 1st Panzer Army
   landunit = 
   { location = 38 
     name     = "1. Panzerarmee" 
     leader   = 129 # Heinrici
     id       = {  type = 14500 id = 179  } 
     division = 
     { id       = {  type = 14500 id = 180  } 
       name     = "Pz. A.O.K. 1" 
       type     = hq 
       model    = 5 
       strength = 75 
       extra    = anti_air
       brigade_model = 5
       experience = 20
      }
	   division = 
     { id       = {  type = 14500 id = 377  } 
       name     = "3. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 1 
       strength = 50 
        
      }
     division = 
     { id       = {  type = 14500 id = 378  } 
       name     = "26. Infanterie-Division" 
       type     = infantry 
       model    = 12
       strength = 50 
       extra    = tank_destroyer
       brigade_model = 3 
        
      }
       
    }
	landunit = 
   { location = 97 
     name     = "LXXV. Armeekorps" 
     leader   = 222 # Raus
     id       = {  type = 14500 id = 80  } 
     division = 
     { id       = {  type = 14500 id = 81  } 
       name     = "Pz. A.O.K. 3" 
       type     = hq 
       model    = 5 
       strength = 75 
       extra    = anti_air
       brigade_model = 5
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 85  } 
       name     = "69. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 50
      }
	  division = 
     { id       = {  type = 14500 id = 277  } 
       name     = "148. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 50
      }
       
    }
	landunit = 
   { location = 134 
     name     = "I. Fallschirmjägerkorps" 
     id       = {  type = 14500 id = 289  } 
     division = 
     { id       = {  type = 14500 id = 290  } 
       name     = "1. Fallschirmjäger-Division" 
       type     = paratrooper 
       model    = 3 
       strength = 65 
       experience = 20
      }
	    division = 
     { id       = {  type = 14500 id = 287  } 
       name     = "4. Fallschirmjäger-Division" 
       type     = paratrooper 
       model    = 3 
       strength = 65 
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 288  } 
       name     = "94. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25
      }
      division = 
     { id       = {  type = 14500 id = 188  } 
       name     = "75. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
     division = 
     { id       = {  type = 14500 id = 292  } 
       name     = "65. Infanterie-Division" 
       type     = infantry 
       model    = 12
       strength = 25 
      }
     division = 
     { id       = {  type = 14500 id = 293  } 
       name     = "334. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
     division = 
     { id       = {  type = 14500 id = 294  } 
       name     = "362. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
       
    }
	  landunit = 
   { location = 624						# Crimea-Taurida 
     name     = "XXXIV. z.b.V. Korps" 
     id       = {  type = 14500 id = 254  } 
     division = 
     { id       = {  type = 14500 id = 338  } 
       name     = "A.O.K. 15" 
       type     = hq 
       model    = 5 
       strength = 65 
       extra    = anti_air
       brigade_model = 5
      }
     division = 
     { id       = {  type = 14500 id = 246  } 
       name     = "181. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 50 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 259  } 
       name     = "264. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 50 
      }
       
    }
	landunit = 
   { location = 185 
     name     = "Panzerkorps 'Hermann Göring'" 
     id       = {  type = 14500 id = 115  } 
     division = 
     { id       = {  type = 14500 id = 116  } 
       name     = "Panzergrenadier-Div. 'Hermann Göring'" 
       type     = mechanized 
       model    = 1 
       strength = 30 
       experience = 20
      }
	   division = 
      { id       = {  type = 14500 id = 110  } 
       name     = "21. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 50
       extra    = tank_destroyer
       brigade_model = 3
      }
	   division = 
	    { id       = {  type = 14500 id = 275  } 
       name     = "34. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 65 
      }
       
    }
	landunit = 
   { location = 201 
     name     = "XXIII. Armeekorps" 
     id       = {  type = 14500 id = 123  } 
       division = 
     { id       = {  type = 14500 id = 177  } 
       name     = "359. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
     division =   
      { id       = {  type = 14500 id = 125  } 
       name     = "7. Infanterie-Division" 
       type     = infantry
		model    = 12 	   
      strength = 25 
       extra    = tank_destroyer
       brigade_model = 3 
      }
     division = 
     { id       = {  type = 14500 id = 126  } 
       name     = "129. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
     division = 
     { id       = {  type = 14500 id = 127  } 
       name     = "299. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
       
    }
	   landunit = # Finnish-Soviet border
   { location = 541 
     name     = "LXXXI. Armeekorps" 
     leader   = 495 # Dietrich
     id       = {  type = 14500 id = 352  } 
     division = 
     { id       = {  type = 14500 id = 353  } 
       name     = "Pz. A.O.K. 6" 
       type     = hq 
       model    = 5 
       strength = 75 
       extra    = anti_air
       brigade_model = 5
       experience = 20
        
      }
   division = 
     { id       = {  type = 14500 id = 346  } 
       name     = "353. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 75
       experience = 20
      }
     	  division = 
     { id       = {  type = 14500 id = 245  } 
       name     = "22. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 75 
       experience = 20
      }
       
    }
	   # ARMY GROUP B
   # 15th Army
   landunit = 
   { location = 153
     name     = "15. Armee Reserve" 
     leader   = 355 # von Zangen
     id       = {  type = 14500 id = 337  } 
         division = 
     { id       = {  type = 14500 id = 368  } 
       name     = "Pz. A.O.K. 5" 
       type     = hq 
       model    = 5
       strength = 75 
       extra    = anti_air
       brigade_model = 5
       experience = 20
        
      }
  division = 
     { id       = {  type = 14500 id = 316  } 
       name     = "6. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25
       extra    = artillery
       brigade_model = 11
      }
     division = 
     { id       = {  type = 14500 id = 307  } 
       name     = "710. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
	division = 
     { id       = {  type = 14500 id = 306  } 
       name     = "237. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
	division = 
     { id       = {  type = 14500 id = 700  } 
       name     = "23. Infanterie-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
	division = 
     { id       = {  type = 14500 id = 703  } 
       name     = "182. Reserve-Division" 
       type     = infantry 
       model    = 12 
       strength = 25 
      }
       
    }
landunit = 
   { location = 147 
     name     = "Befehlshaber des Ersatzheer" 
     id       = {  type = 14500 id = 234  } 
 
     	    division = 
     { id       = {  type = 14500 id = 19  } 
       name     = "14. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 12
       strength = 70 
       max_strength = 70
      }
	       division = 
     { id       = {  type = 14500 id = 66  } 
       name     = "12. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 12 
       strength = 55 
       max_strength = 70
      }
	   division = 
     { id       = {  type = 14500 id = 71  } 
       name     = "21. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 12 
       strength = 55 
       max_strength = 70
      }

       
    }
	 landunit = 
   { location = 152 
     name     = "Befehlshaber des Ersatzheer" 
     id       = {  type = 14500 id = 314  } 
	division = 
     { id       = {  type = 14500 id = 257  } 
       name     = "11. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 12 
       strength = 60 
       max_strength = 70
      }
    }
   ### GARRISONS IN POLAND ###
landunit = 
   { location = 232 
     name     = "Festungs-Kdr. Warschau" 
     id       = {  type = 14500 id = 433  } 
         division = 
     { id       = {  type = 14500 id = 143  } 
       name     = "Festungs-Kdr. Warschau" 
       type     = garrison 
       model    = 5 
       strength = 65
	   locked = yes
      }
       
    } 
   landunit = 
   { location = 242 
     name     = "391. Sicherungs-Division" 
     leader   = 223 # Reinhardt
     id       = {  type = 14502 id = 149  }
	division = 
     { id       = {  type = 14500 id = 149  } 
       name     = "391. Sicherungs-Division" 
       type     = garrison 
       model    = 5 
       strength = 56 
       extra    = police
       brigade_model = 2
	   locked = yes
      }
	 }
   landunit = 
   { location = 641									# Crimea 
     name     = "286. Sicherungs-Division" 
     id       = {  type = 14501 id = 433  }
 division = 
     { id       = {  type = 14500 id = 91  } 
       name     = "286. Sicherungs-Division" 
       type     = garrison 
       model    = 5 
       strength = 65
       extra    = police
       brigade_model = 2
	   locked = yes
      }
       
	}
 # Anti-Partisan units in the Ukraine
 landunit = 									
   { location = 597 
     name     = "213. Sicherungs-Division" 
     #leader   = 136 # Hilpert
     id       = {  type = 14501 id = 48  } 
	division = 
     { id       = {  type = 14500 id = 48  } 
       name     = "213. Sicherungs-Division" 
       type     = garrison 
       model    = 5 
       strength = 65 
	   extra    = police
	   brigade_model = 2
	   locked = yes
      }
	}
 landunit = 									
   { location = 604 
     name     = "403. Sicherungs-Division (Kursk)" 
     #leader   = 136 # Hilpert
     id       = {  type = 14501 id = 113  } 
 division = 
     { id       = {  type = 14500 id = 113  } 
       name     = "221. Sicherungs-Division" 
       type     = garrison 
       model    = 5 
       strength = 65 
	   extra    = police
	   brigade_model = 2
	   locked = yes
      }
	}
 landunit = 									
   { location = 636 
     name     = "444. Sicherungs-Division" 
     #leader   = 136 # Hilpert
     id       = {  type = 14501 id = 112  } 
 division = 
     { id       = {  type = 14500 id = 112  } 
       name     = "444. Sicherungs-Division" 
       type     = garrison 
       model    = 5 
       strength = 65 
	   extra    = police
	   brigade_model = 2
	   locked = yes
      }
	}
 landunit = 									
   { location = 635 
     name     = "454. Sicherungs-Division" 
     #leader   = 136 # Hilpert
     id       = {  type = 14501 id = 114  } 
 division = 
     { id       = {  type = 14500 id = 114  } 
       name     = "454. Sicherungs-Division" 
       type     = garrison 
       model    = 5 
       strength = 65 
	   extra    = police
	   brigade_model = 2
	   locked = yes
      }
	}
 # 16th Army in Ostland
   landunit = 
   { location = 566 
     name     = "16. Armee" 
     leader   = 136 # Hilpert
     id       = {  type = 14500 id = 50  } 
     division = 
     { id       = {  type = 14500 id = 51  } 
       name     = "A.O.K. 16" 
       type     = hq 
       model    = 5 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 52  } 
       name     = "201. Sicherungs-Division" 
       type     = garrison 
       model    = 5 
       strength = 40 
       extra    = police
       brigade_model = 2
	    locked = yes
      }
     division = 
     { id       = {  type = 14500 id = 53  } 
       name     = "207. Sicherungs-Division" 
       type     = garrison 
       model    = 5 
       strength = 65 
       extra    = police
       brigade_model = 2
	    locked = yes
      }
       
    }
   landunit = 
   { location = 270 
     name     = "281. Sicherungs-Division" 
     #leader   = 136 # Hilpert
     id       = {  type = 14501 id = 117  } 
     division = 
     { id       = {  type = 14500 id = 117  } 
       name     = "281. Sicherungs-Division" 
       type     = garrison 
       model    = 5 
       strength = 40 
       extra    = police
       brigade_model = 2
	    locked = yes
      }
}
   landunit = 
   { location = 264 
     name     = "285. Sicherungs-Division" 
     #leader   = 136 # Hilpert
     id       = {  type = 14501 id = 121  } 
     division = 
     { id       = {  type = 14500 id = 121  } 
       name     = "285. Sicherungs-Division" 
       type     = garrison 
       model    = 5 
       strength = 40 
       extra    = police
       brigade_model = 2
	   locked = yes
      }	}
		
# Russian Liberation Army
landunit = 
   { location = 572 
     name     = "Russische Befreiungsarmee (VS-KONR)" 
     id       = {  type = 14501 id = 715 } 
	 leader = 576
     division = 
     { id       = {  type = 14500 id = 715  } 
       name     = "600. Russische Infanterie-Div."  
       type     = infantry 
       model    = 11
       strength = 75 
      }
	 division = 
     { id       = {  type = 14500 id = 716  } 
       name     = "650. Russische Infanterie-Div."  
       type     = infantry 
       model    = 11
       strength = 75 
      }
	 division = 
     { id       = {  type = 14500 id = 717  } 
       name     = "700. Russische Infanterie-Div."  
       type     = infantry 
       model    = 11
       strength = 75 
      }
}	
##########################################
   ## Luftwaffe

  # NATIONAL AIR FLEET
  airunit =
  { location = 163
    base     = 163
    id       = { type = 14500 id = 600 }
    name     = "Luftflotte Reich"
    division =
    { id         = { type = 14500 id = 601 }
      name       = "Jagdgeschwader 300"
      strength   = 80
      type       = interceptor
      model      = 12 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 602 }
      name       = "Jagdgeschwader 301"
      strength   = 80
      type       = multi_role
      model      = 9 # Fw 190
    }
    division =
    { id         = { type = 14500 id = 603 }
      name       = "Jagdgeschwader 400"
      strength   = 80
      type       = interceptor
      model      = 12 # Me 163A
    }
    division =
    { id         = { type = 14500 id = 604 }
      name       = "Kampfgeschwader 100"
      strength   = 80
      type       = tactical_bomber
      model      = 10 # He 177A
      extra      = escort
      brigade_model = 2
    }
    division =
    { id         = { type = 14500 id = 605 }
      name       = "Kampfgeschwader 200"
      strength   = 100
      type       = tactical_bomber
      model      = 9 # Various
      extra      = escort
      brigade_model = 2
    }
    division =
    { id         = { type = 14500 id = 606 }
      name       = "Nachtjagdgeschwader 1"
      strength   = 100
      type       = multi_role
      model      = 9 # He 219A
    }
    division =
    { id         = { type = 14500 id = 607 }
      name       = "Nachtjagdgeschwader 2"
      strength   = 100
      type       = multi_role
      model      = 9 # Ju 88
    }
    division =
    { id         = { type = 14500 id = 608 }
      name       = "Nachtjagdgeschwader 3"
      strength   = 100
      type       = multi_role
      model      = 9 # Bf 110G
    }
    division =
    { id         = { type = 14500 id = 609 }
      name       = "Nachtjagdgeschwader 4"
      strength   = 100
      type       = multi_role
      model      = 9 # Bf 110G
    }
    division =
    { id         = { type = 14500 id = 610 }
      name       = "Nachtjagdgeschwader 5"
      strength   = 100
      type       = multi_role
      model      = 9 # Bf 110G
    }
    division =
    { id         = { type = 14500 id = 611 }
      name       = "Nachtjagdgeschwader 6"
      strength   = 25
      type       = multi_role
      model      = 9 # Bf 110G
    }
    division =
    { id         = { type = 14500 id = 612 }
      name       = "Nachtjagdgeschwader 11"
      strength   = 50
      type       = multi_role
      model      = 9 # Bf 110
    }
    division =
    { id         = { type = 14500 id = 613 }
      name       = "Nachtjagdgeschwader 100"
      strength   = 50
      type       = multi_role
      model      = 9 # Bf 110
    }
  }
  # 1ST AIR FLEET
  airunit =
  { location = 269
    base     = 269
    id       = { type = 14500 id = 614 }
    name     = "Luftflotte I"
    division =
    { id         = { type = 14500 id = 615 }
      name       = "JG 54 'Grünherz'"
      strength   = 80
      type       = interceptor
      model      = 12 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 616 }
      name       = "Transportgeschwader 1"
      strength   = 80
      type       = transport_plane
      model      = 4 # Ju 52
      extra      = escort
      brigade_model = 4
    }
  }
  # 2ND AIR FLEET
  airunit =
  { location = 189
    base     = 189
    id       = { type = 14500 id = 617 }
    name     = "Luftflotte II"
    division =
    { id         = { type = 14500 id = 618 }
      name       = "Sturzkampfgeschwader 3"
      strength   = 80
      type       = cas
      model      = 5
    }
  }
  # 3RD AIR FLEET
  airunit =
  { location = 122
    base     = 122
    id       = { type = 14500 id = 619 }
    name     = "Luftflotte III"
    division =
    { id         = { type = 14500 id = 620 }
      name       = "KG 51 'Edelweiß'"
      strength   = 40
      type       = multi_role
      model      = 9 # Me 262
    }
    division =
    { id         = { type = 14500 id = 621 }
      name       = "Lehrgeschwader 1"
      strength   = 100
      type       = tactical_bomber
      model      = 9 # Ju 88A
      extra      = escort
      brigade_model = 4
    }
    division =
    { id         = { type = 14500 id = 622 }
      name       = "KG 53 'Legion Condor'"
      strength   = 65
      type       = strategic_bomber
      model      = 9 # He 111H
      extra      = escort
      brigade_model = 4
    }
  }
  airunit =
  { location = 138
    base     = 138
    id       = { type = 14500 id = 623 }
    name     = "Luftflotte III"
    division =
    { id         = { type = 14500 id = 624 }
      name       = "JG 1 'Oesau'"
      strength   = 80
      type       = multi_role
      model      = 9 # Fw 190D
    }
    division =
    { id         = { type = 14500 id = 625 }
      name       = "Jagdgeschwader 4"
      strength   = 80
      type       = interceptor
      model      = 12 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 626 }
      name       = "JG 53 'Pik As'"
      strength   = 100
      type       = interceptor
      model      = 12 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 627 }
      name       = "JG 77 'Herz As'"
      strength   = 80
      type       = interceptor
      model      = 12 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 628 }
      name       = "KG 2 'Holzhammer'"
      strength   = 45
      type       = tactical_bomber
      model      = 9 # Ju 188
      extra      = escort
      brigade_model = 4
    }
    division =
    { id         = { type = 14500 id = 629 }
      name       = "Kampfgeschwader 66"
      strength   = 100
      type       = strategic_bomber
      model      = 6 
      extra      = escort
      brigade_model = 3
    }
    division =
    { id         = { type = 14500 id = 630 }
      name       = "Kampfgeschwader 76"
      strength   = 100
      type       = strategic_bomber
      model      = 6 # Ar 234A
      extra      = escort
      brigade_model = 3
    }
  }
  airunit =
  { location = 145
    base     = 145
    id       = { type = 14500 id = 631 }
    name     = "Luftflotte III"
    division =
    { id         = { type = 14500 id = 632 }
      name       = "Jagdgeschwader 11"
      strength   = 80
      type       = interceptor
      model      = 12 # Bf 109
    }
    division =
    { id         = { type = 14500 id = 633 }
      name       = "Sturzkampfgeschwader 4"
      strength   = 100
      type       = cas
      model      = 5 # Hs 129
    }
    division =
    { id         = { type = 14500 id = 634 }
      name       = "Transportgeschwader 4"
      strength   = 80
      type       = transport_plane
      model      = 4 # Ju 52
      extra      = escort
      brigade_model = 4
    }
  }
  airunit =
  { location = 134
    base     = 134
    id       = { type = 14500 id = 635 }
    name     = "Luftflotte III"
    division =
    { id         = { type = 14500 id = 636 }
      name       = "JG 2 'Richthofen'"
      strength   = 100
      type       = multi_role
      model      = 9 # Fw 190D
    }
    division =
    { id         = { type = 14500 id = 637 }
      name       = "JG 3 'Udet'"
      strength   = 100
      type       = interceptor
      model      = 12 # Bf 109
    }
    division =
    { id         = { type = 14500 id = 638 }
      name       = "JG 26 'Schlageter'"
      strength   = 100
      type       = multi_role
      model      = 9 # Fw 190D
    }
    division =
    { id         = { type = 14500 id = 639 }
      name       = "Jagdgeschwader 27"
      strength   = 80
      type       = interceptor
      model      = 12 # Bf 109G
    }
  }
  # 4TH AIR FLEET
  airunit =
  { location = 195
    base     = 195
    id       = { type = 14500 id = 640 }
    name     = "Luftflotte IV"
    division =
    { id         = { type = 14500 id = 641 }
      name       = "Jagdgeschwader 76"
      strength   = 80
      type       = interceptor
      model      = 12 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 642 }
      name       = "KG 4 'General Wever'"
      strength   = 80
      type       = tactical_bomber
      model      = 9 # He 111H
      extra      = escort
      brigade_model = 4
    }
    division =
    { id         = { type = 14500 id = 643 }
      name       = "Schlachtgeschwader 2"
      strength   = 80
      type       = multi_role
      model      = 9 # Fw 190D
    }
    division =
    { id         = { type = 14500 id = 644 }
      name       = "Schnellkampfgeschwader 10"
      strength   = 80
      type       = multi_role
      model      = 9 # Fw 190D
    }
    division =
    { id         = { type = 14500 id = 645 }
      name       = "Transportgeschwader 2"
      strength   = 80
      type       = transport_plane
      model      = 4 # Ju 52
      extra      = escort
      brigade_model = 4
    }
  }
  # 5TH AIR FLEET
  airunit =
  { location = 495
    base     = 495
    id       = { type = 14500 id = 646 }
    name     = "Luftflotte V"
    division =
    { id         = { type = 14500 id = 647 }
      name       = "JG 5 'Eismeer'"
      strength   = 80
      type       = interceptor
      model      = 12 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 648 }
      name       = "ZG 26 'Horst Wessel'"
      strength   = 80
      type       = multi_role
      model      = 9 # Me 410
    }
    division =
    { id         = { type = 14500 id = 649 }
      name       = "KG 26 'Löwen'"
      strength   = 80
      type       = strategic_bomber
      model      = 9 # Ju 88A
      extra      = escort
      brigade_model = 4
    }
  }
  # 6TH AIR FLEET
  airunit =
  { location = 184
    base     = 184
    id       = { type = 14500 id = 650 }
    name     = "Luftflotte VI"
    division =
    { id         = { type = 14500 id = 651 }
      name       = "JG 51 'Mölders'"
      strength   = 80
      type       = interceptor
      model      = 12 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 652 }
      name       = "Jagdgeschwader 52"
      strength   = 80
      type       = interceptor
      model      = 12 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 653 }
      name       = "Schlachtgeschwader 1"
      strength   = 80
      type       = multi_role
      model      = 9 # Fw 190D
    }
  }
  airunit =
  { location = 232
    base     = 232
    id       = { type = 14500 id = 654 }
    name     = "Luftflotte VI"
    division =
    { id         = { type = 14500 id = 655 }
      name       = "Schlachtgeschwader 3"
      strength   = 80
      type       = multi_role
      model      = 9 # Fw 190D
    }
    division =
    { id         = { type = 14500 id = 656 }
      name       = "Sturzkampfgeschwader 77"
      strength   = 80
      type       = cas
      model      = 5 # Ju 87G
    }
  }
  # V2 BATTERIES
  airunit =
  { location = 43
    base     = 43
    id       = { type = 14500 id = 657 }
    name     = "1. V2 Batterie"
    division =
    { id         = { type = 14500 id = 658 }
      name       = "1. V2 Batterie"
      strength   = 100
      type       = flying_rocket
      model      = 0
    }
  }
  airunit =
  { location = 43
    base     = 43
    id       = { type = 14500 id = 659 }
    name     = "2. V2 Batterie"
    division =
    { id         = { type = 14500 id = 660 }
      name       = "2. V2 Batterie"
      strength   = 100
      type       = flying_rocket
      model      = 0
    }
  }
  airunit =
  { location = 43
    base     = 43
    id       = { type = 14500 id = 661 }
    name     = "3. V2 Batterie"
    division =
    { id         = { type = 14500 id = 662 }
      name       = "3. V2 Batterie"
      strength   = 100
      type       = flying_rocket
      model      = 0
    }
  }
  airunit =
  { location = 115
    base     = 115
    id       = { type = 14500 id = 663 }
    name     = "4. V2 Batterie"
    division =
    { id         = { type = 14500 id = 664 }
      name       = "4. V2 Batterie"
      strength   = 100
      type       = flying_rocket
      model      = 0
    }
  }
  airunit =
  { location = 122
    base     = 122
    id       = { type = 14500 id = 665 }
    name     = "5. V2 Batterie"
    division =
    { id         = { type = 14500 id = 666 }
      name       = "5. V2 Batterie"
      strength   = 100
      type       = flying_rocket
      model      = 0
    }
  }
  
 
##########################
# Volskgrenadier divisions
# Can be activated through events
# Volsgrendier have 6 infantry battalions instead of the 9 of an infantry division, which is why they have lower strength
##########################
    #Phase 1:
	landdivision = { dormant = yes id = { type = 14500 id = 32 } name = "1. Volksgrenadier-Division" type = infantry model = 12 strength = 65  max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 47 } name = "2. Volksgrenadier-Division" type = infantry model = 12 strength = 65  max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 82 } name = "3. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 83 } name = "4. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 88 } name = "5. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
    landdivision = { dormant = yes id = { type = 14500 id = 89 } name = "6. Volksgrenadier Division" type = infantry  model = 12 strength = 65 max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 90 } name = "7. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 101 } name = "8. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
    landdivision = { dormant = yes id = { type = 14500 id = 102 } name = "9. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 105 } name = "10. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }   
    #Phase 2:
	landdivision = { dormant = yes id = { type = 14500 id = 106 } name = "11. Volksgrenadier-Division" type = infantry model = 12 strength = 65  max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 129 } name = "12. Volksgrenadier-Division" type = infantry model = 12 strength = 65  max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 137 } name = "13. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 138 } name = "14. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 141 } name = "15. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
    landdivision = { dormant = yes id = { type = 14500 id = 172 } name = "16. Volksgrenadier Division" type = infantry  model = 12 strength = 65 max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 173 } name = "17. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 174 } name = "18. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
    landdivision = { dormant = yes id = { type = 14500 id = 176 } name = "19. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 224 } name = "20. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }  
	#Phase 3:
	landdivision = { dormant = yes id = { type = 14500 id = 345 } name = "21. Volksgrenadier-Division" type = infantry model = 12 strength = 65  max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 347 } name = "22. Volksgrenadier-Division" type = infantry model = 12 strength = 65  max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 350 } name = "23. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 351 } name = "24. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 358 } name = "25. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
    landdivision = { dormant = yes id = { type = 14500 id = 359 } name = "26. Volksgrenadier Division" type = infantry  model = 12 strength = 65 max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 361 } name = "27. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 362 } name = "28. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
    landdivision = { dormant = yes id = { type = 14500 id = 366 } name = "29. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 370 } name = "30. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }   
    #Phase 4:
	landdivision = { dormant = yes id = { type = 14500 id = 387 } name = "41. Volksgrenadier-Division" type = infantry model = 12 strength = 65  max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 388 } name = "42. Volksgrenadier-Division" type = infantry model = 12 strength = 65  max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 390 } name = "43. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 391 } name = "44. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 394 } name = "45. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
    landdivision = { dormant = yes id = { type = 14500 id = 403 } name = "46. Volksgrenadier Division" type = infantry  model = 12 strength = 65 max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 404 } name = "47. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 409 } name = "48. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
    landdivision = { dormant = yes id = { type = 14500 id = 411 } name = "49. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 415 } name = "50. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }   
	#Phase 5:
	landdivision = { dormant = yes id = { type = 14500 id = 416 } name = "61. Volksgrenadier-Division" type = infantry model = 12 strength = 65  max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 428 } name = "62. Volksgrenadier-Division" type = infantry model = 12 strength = 65  max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 431 } name = "63. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 706 } name = "64. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
	landdivision = { dormant = yes id = { type = 14500 id = 702 } name = "65. Volksgrenadier Division" type = infantry model = 12 strength = 65 max_strength = 70 }
    landdivision = { dormant = yes id = { type = 14500 id = 704 } name = "66. Volksgrenadier Division" type = infantry  model = 12 strength = 65 max_strength = 70 }
	
	 ################
  # Kreigsmarine #
  ################
  
  	navalunit = 
	{  name     = "Kriegsmarine" 
     id       = {  type = 14500 id = 801  } 
     location = 147 
     base     = 147 
     Division = 
     {  id    = {  type = 14500 id = 802  } 
       name  = "Schlesien" 
       type  = battleship 
       model = 1
	extra1 = naval_anti_air_l
	brigade_model1 = 3
	extra2 = naval_fire_controll_l
	brigade_model2 = 1
	extra3 = naval_torpedoes_s
	brigade_model3 = 0
      } 
     Division = 
     {  id    = {  type = 14500 id = 803  } 
       name  = "Gneisenau" 
       type  = Battlecruiser
       model = 3
	extra1 = naval_anti_air_l
	brigade_model1 = 0
	extra2 = naval_fire_controll_l
	brigade_model2 = 1
	extra3 = naval_torpedoes_s
	brigade_model3 = 0
	extra4 = naval_radar_l
	brigade_model4 = 3
      } 
     Division = 
     {  id    = {  type = 14500 id = 804  } 
       name  = "Graf Zeppelin" 
       type  = carrier 
       model = 2
	extra1 = cag
	brigade_model1 = 6
      } 
     Division = 
     {  id    = {  type = 14500 id = 805  } 
       name  = "Peter Strasser" 
       type  = carrier 
       model = 3 
	extra1 = cag
	brigade_model1 = 6
      } 
     Division = 
     {  id    = {  type = 14500 id = 806  } 
       name  = "Lützow" 
       type  = heavy_cruiser 
       model = 4 
	extra1 = floatplane
	brigade_model1 = 5
	extra2 = naval_torpedoes_s
	brigade_model2 = 0
      } 
     Division = 
     {  id    = {  type = 14500 id = 807  } 
       name  = "Admiral Scheer" 
       type  = heavy_cruiser 
       model = 4 
	extra1 = floatplane
	brigade_model1 = 5
	extra2 = naval_torpedoes_s
	brigade_model2 = 0
      } 
     Division = 
     {  id    = {  type = 14500 id = 808  } 
       name  = "Prinz Eugen" 
       type  = heavy_cruiser 
       model = 5 
	extra1 = floatplane
	brigade_model1 = 5
	extra2 = naval_torpedoes_s
	brigade_model2 = 0
      } 
     Division = 
     {  id    = {  type = 14500 id = 809  } 
       name  = "Admiral Hipper" 
       type  = heavy_cruiser 
       model = 5 
	extra1 = floatplane
	brigade_model1 = 5
	extra2 = naval_torpedoes_s
	brigade_model2 = 0
      } 
     Division = 
     {  id    = {  type = 14500 id = 810  } 
       name  = "Nürnberg" 
       type  = light_cruiser 
       model = 4 
      } 
	  Division = 
     {  id    = {  type = 14500 id = 811  } 
       name  = "Emden" 
       type  = light_cruiser 
       model = 3 
      } 
	  Division = 
     {  id    = {  type = 14500 id = 812  } 
       name  = "Köln" 
       type  = light_cruiser 
       model = 3 
      } 
     Division = 
     {  id    = {  type = 14500 id = 813  } 
       name  = "1. Zerstörergeschwader" 
       type  = destroyer 
       model = 6 
	extra1 = naval_torpedoes_s
	brigade_model1 = 0
      } 
     Division = 
     {  id    = {  type = 14500 id = 814  } 
       name  = "2. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
	   strength = 20
	extra1 = naval_torpedoes_s
	brigade_model1 = 0
      } 
     Division = 
     {  id    = {  type = 14500 id = 815  } 
       name  = "3. Zerstörergeschwader" 
       type  = destroyer 
       model = 6 
	   strength = 20
	extra1 = naval_torpedoes_s
	brigade_model1 = 0
      } 
     Division = 
     {  id    = {  type = 14500 id = 816  } 
       name  = "4. Zerstörergeschwader" 
       type  = destroyer 
       model = 7
	extra1 = naval_torpedoes_s
	brigade_model1 = 0
      } 
     Division = 
     {  id    = {  type = 14500 id = 817  } 
       name  = "5. Zerstörergeschwader" 
       type  = destroyer 
       model = 7 
	extra1 = naval_anti_air_s
	brigade_model1 = 3
      } 
     Division = 
     {  id    = {  type = 14500 id = 818  } 
       name  = "6. Zerstörergeschwader" 
       type  = destroyer 
       model = 7 
	strength = 60
	extra1 = naval_anti_air_s
	brigade_model1 = 3
      } 
	 Division = 
     {  id    = {  type = 14500 id = 819  } 
       name  = "7. Zerstörergeschwader" 
       type  = destroyer 
       model = 7 
	strength = 40
	extra1 = naval_anti_air_s
	brigade_model1 = 3
      } 
	 Division = 
     {  id    = {  type = 14500 id = 820  } 
       name  = "8. Zerstörergeschwader" 
       type  = destroyer 
       model = 7 
	strength = 10
	extra1 = naval_asw
	brigade_model1 = 3
      } 
	 Division = 
     {  id    = {  type = 14500 id = 821  } 
       name  = "9. Zerstörergeschwader" 
       type  = destroyer 
       model = 8 
	strength = 10
	extra1 = naval_asw
	brigade_model1 = 3
      }   
	 Division = 
     {  id    = {  type = 14500 id = 822  } 
       name  = "10. Zerstörergeschwader" 
       type  = destroyer 
       model = 7 
	extra1 = naval_asw
	brigade_model1 = 3
      } 
     Division = 
     {  id    = {  type = 14500 id = 823  } 
       name  = "1. Truppentransporterflottille" 
       type = transport
	model = 1 
      } 
     Division = 
     {  id    = {  type = 14500 id = 824  } 
       name  = "2. Truppentransporterflottille" 
       type = transport 
	model = 1 
      } 
     Division = 
     {  id    = {  type = 14500 id = 825  } 
       name  = "3. Truppentransporterflottille" 
       type = transport 
	model = 1 
      } 
     Division = 
     {  id    = {  type = 14500 id = 826  } 
       name  = "4. Truppentransporterflottille" 
       type = transport
	model = 1 
      } 
     Division = 
     {  id    = {  type = 14500 id = 827  } 
       name  = "5. Truppentransporterflottille" 
       type = transport 
	model = 1 
      } 
     Division = 
     {  id    = {  type = 14500 id = 828  } 
       name  = "6. Truppentransporterflottille" 
       type = transport 
	model = 1 
      } 
     Division = 
     {  id    = {  type = 14500 id = 829  } 
       name  = "7. Truppentransporterflottille" 
       type = transport
	model = 1 
      } 
     Division = 
     {  id    = {  type = 14500 id = 830  } 
       name  = "8. Truppentransporterflottille" 
       type = transport 
	model = 1 
      } 
    }
	navalunit = 
	{  name     = "1. U Boot Flotte" 
     id       = {  type = 14500 id = 831  } 
     location = 37 
     base     = 37 
	 division =
	{ id    = {  type = 14500 id = 832  } 
       name  = "1. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 833  } 
       name  = "2. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 834  } 
       name  = "3. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 835  } 
       name  = "4. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 836  } 
       name  = "5. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	
	 division =
	{ id    = {  type = 14500 id = 837  } 
       name  = "6. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 838  } 
       name  = "7. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 839  } 
       name  = "8. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 840  } 
       name  = "9. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 841  } 
       name  = "10. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	}
	navalunit = 
	{  name     = "2. U Boot Flotte" 
     id       = {  type = 14500 id = 842  } 
     location = 39 
     base     = 39 
	 division =
	{ id    = {  type = 14500 id = 843  } 
       name  = "11. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 844  } 
       name  = "12. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 845  } 
       name  = "13. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 846  } 
       name  = "14. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 847  } 
       name  = "15. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	
	 division =
	{ id    = {  type = 14500 id = 848  } 
       name  = "16. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 849  } 
       name  = "17. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 850  } 
       name  = "18. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 851  } 
       name  = "19. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 852  } 
       name  = "20. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	}
	navalunit = 
	{  name     = "3. U Boot Flotte" 
     id       = {  type = 14500 id = 853  } 
     location = 69 
     base     = 69 
	 division =
	{ id    = {  type = 14500 id = 854  } 
       name  = "21. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 855  } 
       name  = "22. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 856  } 
       name  = "23. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 857  } 
       name  = "24. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 858  } 
       name  = "25. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	
	 division =
	{ id    = {  type = 14500 id = 859  } 
       name  = "26. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 860  } 
       name  = "27. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 861  } 
       name  = "28. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 862  } 
       name  = "29. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 863  } 
       name  = "30. Unterseeboots-Division" 
       type  = submarine 
       model = 7
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	}
	navalunit = 
	{  name     = "4. U Boot Flotte" 
     id       = {  type = 14500 id = 864  } 
     location = 152 
     base     = 152 
	 division =
	{ id    = {  type = 14500 id = 865  } 
       name  = "31. Unterseeboots-Division" 
       type  = submarine 
       model = 6
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 866  } 
       name  = "32. Unterseeboots-Division" 
       type  = submarine 
       model = 6
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 867  } 
       name  = "33. Unterseeboots-Division" 
       type  = submarine 
       model = 6
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 868  } 
       name  = "34. Unterseeboots-Division" 
       type  = submarine 
       model = 6
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 869  } 
       name  = "35. Unterseeboots-Division" 
       type  = submarine 
       model = 6
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	
	 division =
	{ id    = {  type = 14500 id = 870  } 
       name  = "36. Unterseeboots-Division" 
       type  = submarine 
       model = 6
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 871  } 
       name  = "37. Unterseeboots-Division" 
       type  = submarine 
       model = 6
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 872  } 
       name  = "38. Unterseeboots-Division" 
       type  = submarine 
       model = 6
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 873  } 
       name  = "39. Unterseeboots-Division" 
       type  = submarine 
       model = 6
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 874  } 
       name  = "40. Unterseeboots-Division" 
       type  = submarine 
       model = 6
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	}
		navalunit = 
	{  name     = "5. U Boot Flotte" 
     id       = {  type = 14500 id = 875  } 
     location = 226 
     base     = 226 
	 division =
	{ id    = {  type = 14500 id = 876  } 
       name  = "41. Unterseeboots-Division" 
       type  = submarine 
       model = 6
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 877  } 
       name  = "42. Unterseeboots-Division" 
       type  = submarine 
       model = 6
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 878  } 
       name  = "43. Unterseeboots-Division" 
       type  = submarine 
       model = 6
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 879  } 
       name  = "44. Unterseeboots-Division" 
       type  = submarine 
       model = 6
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 880  } 
       name  = "45. Unterseeboots-Division" 
       type  = submarine 
       model = 6
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	
	 division =
	{ id    = {  type = 14500 id = 881  } 
       name  = "46. Unterseeboots-Division" 
       type  = submarine 
       model = 6
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 882  } 
       name  = "47. Unterseeboots-Division" 
       type  = submarine 
       model = 6
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 883  } 
       name  = "48. Unterseeboots-Division" 
       type  = submarine 
       model = 6
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 884  } 
       name  = "49. Unterseeboots-Division" 
       type  = submarine 
       model = 6
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	 division =
	{ id    = {  type = 14500 id = 885  } 
       name  = "50. Unterseeboots-Division" 
       type  = submarine 
       model = 6
       experience = 60
	   extra1 = naval_torpedoes_s
	brigade_model1 = 0
      }
	} 						
	navalunit = { 
		id = { type = 10848 id = 5200 } 
		name = "Schwarzmeer-Flotte" 
		location = 641 
		base = 641 
		division = { 
			id = { type = 10848 id = 5201 } 
			name = "Kaiser Barbarossa" 
			type = battleship 
			model = 2 
			extra1 = floatplane
			brigade_model1 = 4
			extra2 = naval_improved_hull_l
			brigade_model2 = 0
			extra3 = naval_fire_controll_l
			brigade_model3 = 0
			extra4 = naval_anti_air_l
			brigade_model4 = 0			
			} 
		division = { 
			id = { type = 10848 id = 8500 } 
			name = "von Bock" 
			type = heavy_cruiser
			model = 5 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 10848 id = 8502 } 
			name = "von Leeb" 
			type = heavy_cruiser
			model = 5 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 10848 id = 5202 } 
			name = "Paulus" 
			type = heavy_cruiser 
			model = 5 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 10848 id = 5203 } 
			name = "Hartmann" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 10848 id = 5204 } 
			name = "Barkhorn" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 10848 id = 5205 } 
			name = "Rall" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 10848 id = 5207 } 
			name = "1. Umgewandelt Zerstörergeschwader" 
			type = destroyer 
			model = 4 
			}
		division = { 
			id = { type = 10848 id = 5502 } 
			name = "2. Umgewandelt Zerstörergeschwader" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 10848 id = 5503 } 
			name = "3. Umgewandelt Zerstörergeschwader" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 10848 id = 5504 } 
			name = "4. Umgewandelt Zerstörergeschwader" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 10848 id = 5302 } 
			name = "1. Umgewandelt Unterseeboots-Division" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 10848 id = 6011 } 
			name = "2. Umgewandelt Unterseeboots-Division" 
			type = submarine 
			model = 4 
			}
		division = { 
			id = { type = 10848 id = 5172 } 
			name = "3. Umgewandelt Unterseeboots-Division" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 10848 id = 5173 } 
			name = "4. Umgewandelt Unterseeboots-Division" 
			type = submarine 
			model = 4 
			}
		division = { 
			id = { type = 10848 id = 6012 } 
			name = "5. Umgewandelt Unterseeboots-Division" 
			type = submarine 
			model = 4 
			}
		} 
	#
	############
	# END
	###########
	}
