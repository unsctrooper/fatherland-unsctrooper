 
 ############################## 
 # Country definition for UPE # 
 ############################## 
  
 country = 
 {  tag                    = UPE
 	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes } }	

energy                 = 360
metal                  = 180
rare_materials         = 90
oil                    = 100 
supplies               = 100 
money                  = 50 
capital                = 1103
manpower               = 250
dissent                = 10
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 2 
     free_market       = 1
     professional_army = 8 
     defense_lobby     = 10 
     interventionism   = 1
    } 
	
   nationalprovinces      = {  1101 1102 1100 1103 1099 1097 1098 1104 1105 1106 1107 } 
   ownedprovinces         = {  1101 1102 1100 1103 1099 1097 1098 1104 1105 1106 1107 } 
   controlledprovinces    = {  1101 1102 1100 1103 1099 1097 1098 1104 1105 1106 1107 504 506 505 507 1108 1112 1109 } 
   claimedprovinces       = {  506 507 505 500 498 504 1114 1117 1118 1116 503 1110 1108 1113 1115 1111 502 499 1109 1112 501 }
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

# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
 } 
 inventions = { 3000027 }
   diplomacy = { } 
   SpyInfo                = {  country = "UPE" NumberOfSpies = 2  } 
   headofstate            = {  type = 9 id = 550059  } 
   headofgovernment       = {  type = 9 id = 550060  } 
   foreignminister        = {  type = 9 id = 550061  } 
   armamentminister       = {  type = 9 id = 550062  } 
   ministerofsecurity     = {  type = 9 id = 550063  } 
   ministerofintelligence = {  type = 9 id = 550064  } 
   chiefofstaff           = {  type = 9 id = 550065  } 
   chiefofarmy            = {  type = 9 id = 550066  } 
   chiefofnavy            = {  type = 9 id = 550067  } 
   chiefofair             = {  type = 9 id = 550068  } 
  
 landunit = {
 id = { type = 17345  id = 1 }
 name = "1. Ordu"
 location = 505
  	division = {
   	id = { type = 17345  id = 2 }
   	name = "1. Süvari Tümeni"
   	strength = 70
   	type = cavalry
	model = 6
             }
  	division = {
   	id = { type = 17345  id = 3 }
   	name = "2. Süvari Tümeni"
   	strength = 70
   	type = cavalry
	model = 6
             }
  	division = {
   	id = { type = 17345  id = 4 }
   	name = "3. Piyade Tümeni"
   	strength = 70
   	type = cavalry
	model = 6
        }
	}
landunit = {
 id = { type = 17345  id = 5 }
 name = "2. Ordu"
 location = 507
  	division = {
   	id = { type = 17345  id = 6 }
   	name = "4. Piyade Tümeni"
   	strength = 100
	model = 4
   	type = militia
}
}
landunit = {
 id = { type = 17345  id = 7 }
 name = "3. Ordu"
 location = 1101
  	division = {
   	id = { type = 17345  id = 8 }
   	name = "5. Piyade Tümeni"
   	strength = 100
	model = 4
   	type = militia
}
}
landunit = {
 id = { type = 17345  id = 19 }
 name = "4. Ordu"
 location = 1097
  	division = {
   	id = { type = 17345  id = 20 }
   	name = "6. Piyade Tümeni"
   	strength = 100
	model = 4
   	type = militia
}
}
landunit = {
 id = { type = 17345  id = 9 }
 name = "5. Ordu"
 location = 1112
  	division = {
   	id = { type = 17345  id = 10 }
   	name = "7. Piyade Tümeni"
   	strength = 100
	model = 4
   	type = militia
}
  	division = {
   	id = { type = 17345  id = 11 }
   	name = "8. Piyade Tümeni"
   	strength = 100
	model = 4
   	type = militia
}
  	division = {
   	id = { type = 17345  id = 12 }
   	name = "9. Piyade Tümeni"
   	strength = 100
	model = 4
   	type = militia
}
}
landunit = {
 id = { type = 17345  id = 13 }
 name = "6. Ordu"
 location = 1109
  	division = {
   	id = { type = 17345  id = 14 }
   	name = "10. Piyade Tümeni"
   	strength = 80
   	type = infantry
	model = 6
   	extra = artillery 
        }
  	division = {
   	id = { type = 17345  id = 15 }
   	name = "11. Piyade Tümeni"
   	strength = 80
   	type = infantry
	model = 6
   	extra = artillery 
        }
        }
landunit = {
 id = { type = 17345  id = 16 }
 name = "7. Ordu"
 location = 1108
  	division = {
   	id = { type = 17345  id = 17 }
   	name = "12. Piyade Tümeni"
   	strength = 80
   	type = infantry
	model = 6
   	extra = artillery 
        }
  	division = {
   	id = { type = 17345  id = 18 }
   	name = "13. Piyade Tümeni"
   	strength = 80
   	type = infantry
	model = 6
   	extra = artillery 
        }
        }
landunit = {
 id = { type = 17345  id = 21 }
 name = "8. Ordu"
 location = 1103
  	division = {
   	id = { type = 17345  id = 22 }
   	name = "14. Piyade Tümeni"
   	strength = 80
   	type = infantry
	model = 6
   	extra = artillery 
        }
  	division = {
   	id = { type = 17345  id = 23 }
   	name = "15. Piyade Tümeni"
   	strength = 80
   	type = infantry
	model = 6
   	extra = artillery 
        }
  	division = {
   	id = { type = 17345  id = 24 }
   	name = "16. Piyade Tümeni"
   	strength = 80
   	type = infantry
	model = 6
   	extra = artillery 
        }
        }
landunit = {
 id = { type = 17345  id = 25 }
 name = "9. Ordu"
 location = 1103
  	division = {
   	id = { type = 17345  id = 26 }
   	name = "17. Piyade Tümeni"
   	strength = 80
   	type = infantry
	model = 6
   	extra = artillery 
        }
  	division = {
   	id = { type = 17345  id = 27 }
   	name = "18. Piyade Tümeni"
   	strength = 80
   	type = infantry
	model = 6
   	extra = artillery 
        }
  	division = {
   	id = { type = 17345  id = 28 }
   	name = "19. Piyade Tümeni"
   	strength = 80
   	type = infantry
	model = 6
   	extra = artillery 
        }
        }
		}