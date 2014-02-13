 
 ############################## 
 # Country definition for SIK # 
 ############################## 
  
 country = 
 {  tag                    = SIK 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes} }	
   # Resource Reserves 
    puppet = UPE
	name = SIK44
	flag_ext = _eastturkestan	
    energy                 = 240
    metal                  = 120
    rare_materials         = 60
   oil                    = 5000 
   supplies               = 2000 
   money                  = 10 
   capital                = 1281 
   manpower               = 50 
   dissent                = 40 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 4 
     political_left    = 8
     freedom           = 3 
     free_market       = 3 
     professional_army = 6
     defense_lobby     = 5 
     interventionism   = 5 
    } 
   nationalprovinces      = {  1273 1274 1275 1276 1277 1278 1279 1280 1281 1282  } 
   ownedprovinces         = {  1273 1274 1275 1276 1277 1279 1280 1281 1282  } 
   controlledprovinces    = {  1273 1274 1275 1276 1277 1279  1280 1281 1282  } 
   # ROTW Minor Tech '36 
   # Group E 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {  
#Interwar Fighter  
4500 4510 4520 4530
#Interwar Armoured Car  
2860
#Light Field Artillery  
2290
#SW Tank 
7600 7610
#Great War Infantry Division  
1010 1020 1030 1040 1050 1060 1070 1080
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Agriculture
5700 
#Landdoctrine ww2 - rest
6500 6510 6530 6910
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
  } 
  inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = CHC value = 40  } 
		relation = {  tag = SOV value = 50  } 
     relation = {  tag = TAN value = 50  } 
     relation = {  tag = CHI value = -10  } 
    } 
   SpyInfo                = {  country = "SIK" NumberOfSpies = 4  } 
	headofstate = { type = 9 id = 420100 }
	headofgovernment = { type = 9 id = 420101 }
	foreignminister = { type = 9 id = 420011 }
	armamentminister = { type = 9 id = 420012 }
	ministerofsecurity = { type = 9 id = 420015 }
	ministerofintelligence = { type = 9 id = 420016 }
	chiefofstaff = { type = 9 id = 420019 }
	chiefofarmy = { type = 9 id = 420020 }
	chiefofnavy = { type = 9 id = 420009 }
	chiefofair = { type = 9 id = 420010 }
	
	### OOB ###
	
   landunit = 
   {  location = 1281 
     name     = "Xin'jiang Jüntuan 1" 
     id       = {  type = 25600 id = 1  } 
     Division = 
     {  id   = {  type = 25600 id = 2  } 
       name = "1 Xin'jiang Shi" 
       type = infantry 
	   strength = 80
	   model    = 8
      } 
     Division = 
     {  id   = {  type = 25600 id = 3  } 
       name = "7 Xin'jiang Lü" 
       type = militia 
	   strength = 80
	   model    = 5
      } 
     Division = 
     {  id   = {  type = 25600 id = 4  } 
       name = "8 Xin'jiang Lü" 
       type = militia 
	   strength = 80
	   model    = 5
      } 
    } 
   landunit = 
   {  location = 1281 
     name     = "Xin'jiang Jüntuan 2" 
     id       = {  type = 25600 id = 5  } 
     Division = 
     {  id   = {  type = 25600 id = 6  } 
       name = "5 Xin'jiang Shi" 
       type = infantry 
	   strength = 80
	   model    = 8
      } 
     Division = 
     {  id   = {  type = 25600 id = 7  } 
       name = "9 Xin'jiang Lü" 
       type = militia 
	   strength = 80
	   model    = 5
      } 
     Division = 
     {  id   = {  type = 25600 id = 8  } 
       name = "3 Xin'jiang Lü" 
       type = militia 
	   strength = 80
	   model    = 5
      } 
    } 	
   landunit = 
   {  location = 1281 
     name     = "Xin'jiang Jüntuan 2" 
     id       = {  type = 25600 id = 9  } 
     Division = 
     {  id   = {  type = 25600 id = 10  } 
       name = "11 Xin'jiang Shi" 
       type = cavalry 
	   strength = 75
	   model    = 10
      } 
     Division = 
     {  id   = {  type = 25600 id = 11  } 
       name = "13 Xin'jiang Lü" 
       type = cavalry 
	   strength = 75
	   model    = 10
      } 
    } 	
  } 
 