 
 ############################## 
 # Country definition for TRK # 
 ############################## 
  
 country = 
 {  tag                    = U59
 	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes} }	

energy                 = 360
metal                  = 180
rare_materials         = 90
oil                    = 100 
supplies               = 100 
money                  = 50 
capital                = 1142
manpower               = 50
dissent                = 5
vp = 1
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 3 
     free_market       = 3 
     professional_army = 6 
     defense_lobby     = 10 
     interventionism   = 3 
    } 

	
   nationalprovinces      = {  1142 } 
   ownedprovinces         = {  1142 1143 1144 1145 1146 1147 } 
   controlledprovinces    = {  1142 1143 1144 1145 1146 1147 } 
   claimedprovinces       = {  1143 1144 1145 1146 1147 } 
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
   diplomacy = { 
   relation = { tag = MON value = 50 }
   relation = { tag = SIB value = -50 } 
   relation = { tag = SOV value = -50 }  
   } 
   SpyInfo                = {  country = "U59" NumberOfSpies = 2  } 
   headofstate            = {  type = 9 id = 1110001 } 
   headofgovernment       = {  type = 9 id = 1110002 } 
   foreignminister        = {  type = 9 id = 1110003 } 
   armamentminister       = {  type = 9 id = 1110004 } 
   ministerofsecurity     = {  type = 9 id = 1110005 } 
   ministerofintelligence = {  type = 9 id = 1110006 } 
   chiefofstaff           = {  type = 9 id = 1110007 } 
   chiefofarmy            = {  type = 9 id = 1110008 } 
   chiefofnavy            = {  type = 9 id = 1110009 } 
   chiefofair             = {  type = 9 id = 1110010 } 
  
  ############ White Russian Army ###########
  
   landunit = 
   { location = 1142
     name     = "3-y Armeyskiy Korpus" 
     id       = {  type = 23601 id = 1  } 
    division = 
     { id       = {  type = 23601 id = 2  } 
       name     = "2-ya Mobilnaya Diviziya" 
       type     = motorized 
       model    = 2 
       strength = 100
       experience = 40
      }
	  division = 
     { id       = {  type = 23601 id = 3  } 
       name     = "11-ya Pekhotnaya Diviziya" 
       type     = infantry
       model    = 11 
       strength = 80
       experience = 60
      }
	  division = 
     { id       = {  type = 23601 id = 4  } 
       name     = "9-ya Pekhotnaya Diviziya" 
       type     = infantry
       model    = 11 
       strength = 80
       experience = 60
      }
	  }
   landunit = 
   { location = 1142
     name     = "1-y Armeyskiy Korpus" 
     id       = {  type = 23601 id = 5  } 
    division = 
     { id       = {  type = 23601 id = 6  } 
       name     = "7-ya Pekhotnaya Diviziya" 
       type     = infantry 
       model    = 11
	   extra    = artillery
       brigade_model = 11
       strength = 80
       experience = 20
      }
	  division = 
     { id       = {  type = 23601 id = 7  } 
       name     = "14-ya Pekhotnaya Diviziya" 
       type     = infantry
       model    = 11 
	   extra    = artillery
       brigade_model = 11
       strength = 80
       experience = 20
      }
	  division = 
     { id       = {  type = 23601 id = 8  } 
       name     = "3-ya Pekhotnaya Diviziya" 
       type     = infantry
       model    = 11 
	   extra    = artillery
       brigade_model = 11
       strength = 80
       experience = 20
      }
	  }
   landunit = 
   { location = 1143
     name     = "2-y Armeyskiy Korpus" 
     id       = {  type = 23601 id = 9  } 
    division = 
     { id       = {  type = 23601 id = 10  } 
       name     = "5-ya Pekhotnaya Diviziya" 
       type     = infantry 
       model    = 11
       strength = 80
       experience = 20
      }
	  division = 
     { id       = {  type = 23601 id = 11  } 
       name     = "17-ya Pekhotnaya Diviziya" 
       type     = infantry
       model    = 11 
       strength = 80
       experience = 20
      }
	  division = 
     { id       = {  type = 23601 id = 12  } 
       name     = "16-ya Pekhotnaya Diviziya" 
       type     = infantry
       model    = 11 
	   extra    = artillery
       brigade_model = 11
       strength = 80
       experience = 20
      }
	  }
   landunit = 
   { location = 1144
     name     = "7-y Armeyskiy Korpus" 
     id       = {  type = 23601 id = 16  } 
    division = 
     { id       = {  type = 23601 id = 17  } 
       name     = "3-ya Diviziya Opolcheniya" 
       type     = militia 
       model    = 5
	   extra    = artillery
       brigade_model = 11
       strength = 75
       experience = 40
      }
	  }
   landunit = 
   { location = 1145
     name     = "8-y Armeyskiy Korpus" 
     id       = {  type = 23601 id = 18  } 
    division = 
     { id       = {  type = 23601 id = 19  } 
       name     = "5-ya Diviziya Opolcheniya" 
       type     = militia 
       model    = 5
	   extra    = artillery
       brigade_model = 11
       strength = 75
       experience = 40
      }
	  }
   landunit = 
   { location = 1146
     name     = "9-y Armeyskiy Korpus" 
     id       = {  type = 23601 id = 20 } 
    division = 
     { id       = {  type = 23601 id = 21  } 
       name     = "7-ya Diviziya Opolcheniya" 
       type     = militia 
       model    = 5
	   extra    = artillery
       brigade_model = 11
       strength = 75
       experience = 40
      }
	  }
   landunit = 
   { location = 1147
     name     = "6-y Armeyskiy Korpus" 
     id       = {  type = 23601 id = 22  } 
    division = 
     { id       = {  type = 23601 id = 23  } 
       name     = "1-ya Diviziya Opolcheniya" 
       type     = militia 
       model    = 5
	   extra    = artillery
       brigade_model = 11
       strength = 75
       experience = 40
      }
	  }
  airunit =
  { location = 1143
    base     = 1143
    id       = { type = 23601 id = 13 }
    name     = "Novo Vozdushnogo Komandovaniya"
    division =
    { id         = { type = 23601 id = 14 }
      name       = "3-y Vozd. Otryad"
      strength   = 25
      type       = interceptor
      model      = 12 
    }
    division =
    { id         = { type = 23601 id = 15 }
      name       = "1-y Vozd. Otryad"
      strength   = 25
      type       = multi_role
      model      = 9
    }
} 
}
 