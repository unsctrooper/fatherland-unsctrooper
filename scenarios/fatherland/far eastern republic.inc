 
 ############################## 
 # Country definition for U57 #
 # Far Eastern Republic       #
 ############################## 
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = U57 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes} }	
   # Resource Reserves 
	energy                 = 3000
	metal                  = 3500
	rare_materials         = 1000
    oil                    = 300 
    supplies               = 3000 
    money                  = 10 
    capital                = 1191 
    manpower               = 100
    transports             = 100 
    escorts                = 2 
 diplomacy =
  { relation = { tag = AST value = 65 }
    relation = { tag = BEL value = 65 }
    relation = { tag = BUL value = 50 }
    relation = { tag = SLO value = 50 }
    relation = { tag = ENG value = 85 }
    relation = { tag = U01 value = 85 }
    relation = { tag = GER value = 50 }
    relation = { tag = HOL value = 65 }
    relation = { tag = HUN value = 50 }
    relation = { tag = IRE value = 50 }
    relation = { tag = ITA value = 50 }
    relation = { tag = JAP value = 0 }
    relation = { tag = NZL value = 50 }
    relation = { tag = POR value = 50 }
    relation = { tag = ROM value = 50 }
    relation = { tag = SAF value = 50 }
    relation = { tag = SOV value = 75 }
    relation = { tag = SPA value = 35 }
    relation = { tag = SWE value = 50 }
    relation = { tag = USA value = 50 }
  } 
   SpyInfo                = {  country = "U57" NumberOfSpies = 5  } 
   nationalprovinces      = { 1169 1168 1170 1176 1171 1174 1175 1188 1187 1185 1190 1195 1194 1192 1196 1193 1191 1189 1186 } 
   ownedprovinces         = { 1169 1168 1170 1176 1171 1174 1175 1188 1187 1185 1190 1195 1194 1192 1196 1193 1191 1189 1186 } 
   controlledprovinces    = { 1169 1168 1170 1176 1171 1174 1175 1188 1187 1185 1190 1195 1194 1192 1196 1193 1191 1189 1186 } 
   claimedprovinces = {  }

	# Taken from Finland 1944.12 techs, seems good for another frozen country, and old enough.
	# ###################### 
	techapps = {
	# Manufacturing
	5810 5820 5050 5830 5060 5070
	# Construction Engineering 
	5800 5080 5090 
	# Agriculture  
	5700 5710 5010 5020 5030
	# Computers & Cryptography
	5310 54010 54020 54030 5316 5326 5327 5350
	# Oil Refining 
	5190
	# Medicine
	5600 5610 5620 5630
	# Winter equipment
	5920

	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110
	# Mountain Division 
	1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390
	# Engineers
	1830 1840 1850 1860
	# Supply 
	1910 1920 1930 1940 1950 1960

	# Tanks
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040
	# Armoured Car  
	2860 2870 2880 2020 2150
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940 2320
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200 2460
	# Anti-Air Artillery Brigade 
	2810 2820 2510 2520
	# Anti-Tank Artillery 
	2400 2410

	# Hospital System 
	14000 14010 14020 14030
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910
	# WWII Land Doctrines
	6390 6400 6420 6410 6430

	# Destroyer 
	3010 3020 3030 3040 3050 
	# Heavy Cruiser 
	3210 3220 3230
	# Submarine 
	3610 3620 3630 3640 3650
	# Torpedo & ASW 18
	3720 3730 3736 3740 3750 3900
	# Troopships
	3810 3820

	# Naval Doctrines
	8010 8020 8040 8050 8070 8080 8100 8200 8500

	# Interceptor Fighter  
	4500 4510 4520 4530 4540 4550 4010 4020 4030
	# Tactical Bomber 
	4600 4610 4620 4630 4120 4130

	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
	9040 9050 9090 9100 9110 9120 9130 9140 9190 9230 

	}
	
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 9 
     free_market       = 1 
     freedom           = 3
     professional_army = 6 
     defense_lobby     = 5 
     interventionism   = 2 
    } 
   headofstate            = {  type = 9 id = 1100001  } 
   headofgovernment       = {  type = 9 id = 1100002  } 
   foreignminister        = {  type = 9 id = 1100003  } 
   armamentminister       = {  type = 9 id = 1100004  } 
   ministerofsecurity     = {  type = 9 id = 1100005  } 
   ministerofintelligence = {  type = 9 id = 1100006  } 
   chiefofstaff           = {  type = 9 id = 1100007  } 
   chiefofarmy            = {  type = 9 id = 1100008  } 
   chiefofnavy            = {  type = 9 id = 1100009  } 
   chiefofair             = {  type = 9 id = 1100010  }
   dormant_ministers      = {  
                            } 

   landunit = 
   {  id       = {  type = 10848 id =  245 } 
     name     = "Zabaikalskyi Voennyi Okrug" 
     location = 1169
     Division = 
     {  id       = {  type = 10848 id = 246  } 
       name     = "114-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
 }
   landunit = 
   {  id       = {  type = 10848 id = 1545  } 
     name     = "18-i Sibirskyi Korpus" 
     location = 1176
      Division = 
     {  id       = {  type = 10848 id = 1547  } 
       name     = "69-ya Motostrelkovaya Diviziya" 
       strength = 80 
       type     = motorized
	   model    = 1
       extra    = medium_armor
       brigade_model = 1 
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  318 } 
     name     = "25-ya Armiya" 
     location = 1190
     Division = 
     {  id       = {  type = 10848 id = 319  } 
       name     = "92-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   extra    = artillery
	   brigade_model = 8
      }
     Division = 
     {  id       = {  type = 10848 id = 320  } 
       name     = "32-ya Saratovskaya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
     Division = 
     {  id       = {  type = 10848 id = 321  } 
       name     = "40-ya Bogucharskaya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
     Division = 
     {  id       = {  type = 10848 id = 322  } 
       name     = "105-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  304 } 
     name     = "1-ya Armiya" 
     location = 1196
     Division = 
     {  id       = {  type = 10848 id = 306  } 
       name     = "21-ya Permskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   extra    = artillery
	   brigade_model = 8
      }
     Division = 
     {  id       = {  type = 10848 id = 309  } 
       name     = "59-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 9
	   extra    = artillery
	   brigade_model = 8
      }
      Division = 
     {  id       = {  type = 10848 id = 312  } 
       name     = "8-ya Dalnevostochnaya Kavaleriiskaya Diviziya" 
       strength = 60 
       type     = cavalry
	   model    = 11
	extra = light_armor_brigade
	brigade_model = 3
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  1541 } 
     name     = "30-i Mekhanizirovannyi Korpus" 
     location = 1196
      Division = 
     {  id       = {  type = 10848 id = 1544  } 
       name     = "239-ya Motostrelkovaya Diviziya" 
       strength = 80 
       type     = motorized
	   model    = 1
       extra    = medium_armor
       brigade_model = 1 
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  296 } 
     name     = "Dalnevostochnyi Front" 
     location = 1191
     Division = 
     {  id       = {  type = 10848 id = 297  } 
       name     = "Dalnevostochnyi Front" 
       strength = 80 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 0
	   }
     Division = 
     {  id       = {  type = 10848 id = 298  } 
       name     = "35-ya Sibirskaya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
     Division = 
     {  id       = {  type = 10848 id = 299  } 
       name     = "66-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
     Division = 
     {  id       = {  type = 10848 id = 300  } 
       name     = "78-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  301 } 
     name     = "Dalnevostochnyi Front" 
     location = 1191
     Division = 
     {  id       = {  type = 10848 id = 302  } 
       name     = "79-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = infantry 
	   model    = 9
      }
     Division = 
     {  id       = {  type = 10848 id = 303  } 
       name     = "101-ya Strelkovaya Diviziya" 
       strength = 70 
       type     = bergsjaeger 
	   model    = 9
      }
 }
 # Air OOB
 
airunit = { 
	id = { type = 10848 id = 7004 } 
	name = "Dal'nii Vostok Vozdushnogo Komandovaniya" 
	location = 1191 # Vladivostok 
	base = 1191 # Vladivostok 

	division = { 
	id = { type = 10848 id = 7005 } 
		name = "29.IABR" 
		strength = 80 
		type = interceptor 
		model = 7 
			}
	division = { 
	id = { type = 10848 id = 7006 } 
		name = "79.IABR" 
		strength = 80 
		type = interceptor 
		model = 7 
			}
	division = { 
	id = { type = 10848 id = 7007 } 
		name = "31.TBABR" 
		strength = 50 
		type = tactical_bomber 
		model = 5 
			}
	}
# Naval OOB

	navalunit = {
		id = { type = 10848 id = 5515 } 
		name = "Tikhookeanskiy Flot" 
		location = 1191 
		base = 1191 
		division = { 
			id = { type = 10848 id = 6001 } 
			name = "1. Divizion Esmintsev" 
			type = destroyer 
			model = 3 
			}
		division = { 
			id = { type = 10848 id = 6015 } 
			name = "2. Divizion Esmintsev" 
			type = destroyer 
			model = 3 
			}
		division = { 
			id = { type = 10848 id = 6021 } 
			name = "1. Divizion Podlodok" 
			type = submarine 
			model = 4 
			}  
		division = { 
			id = { type = 10848 id = 6022 } 
			name = "2. Divizion Podlodok" 
			type = submarine 
			model = 4 
			}  
		division = { 
			id = { type = 10848 id = 6023 } 
			name = "3. Divizion Podlodok" 
			type = submarine 
			model = 4 
			}  
		division = { 
			id = { type = 10848 id = 6024 } 
			name = "4. Divizion Podlodok" 
			type = submarine 
			model = 4 
			}  
		division = { 
			id = { type = 10848 id = 6025 } 
			name = "5. Divizion Podlodok" 
			type = submarine 
			model = 4 
			}  
		division = { 
			id = { type = 10848 id = 6026 } 
			name = "6. Divizion Podlodok" 
			type = submarine 
			model = 4 
			}  
		division = { 
			id = { type = 10848 id = 5514 } 
			name = "1. Transportnaya Flotiliya" 
			type = transport 
			model = 2 
			} 
		} 	
	}