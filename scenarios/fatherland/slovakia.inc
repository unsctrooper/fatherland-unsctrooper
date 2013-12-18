    ############################## 
     # Country definition for SLO # 
     ############################## 
  
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = SLO 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
    puppet                 = GER
    control                = GER
   # Resource Reserves 
   energy                 = 200 
metal                  = 200
rare_materials         = 200
   supplies               = 500 
   money                  = 10 
   manpower               = 60
   capital                = 208 
  diplomacy =
  { relation = { tag = ENG value = -100 }
    relation = { tag = FIN value = 25 }
    relation = { tag = U01 value = -100 }
    relation = { tag = GER value = 200 }
    relation = { tag = HUN value = -50 }
    relation = { tag = ITA value = 125 }
    relation = { tag = ROM value = 150 }
    relation = { tag = SOV value = -100 }
  }
   SpyInfo                = {  country = "SLO" NumberOfSpies = 7  } 
   nationalprovinces      = {  208 211 212 214  } 
   ownedprovinces         = {  208 211 212 214  } 
   controlledprovinces    = {  208 211 212 214  } 
   claimedprovinces    = {  213 210 209 215  }
   # Eastern Minor Tech '36 
   # Group C 1936 techs 
   # ###################### 
   techapps               = { 
#Early Infantry Division  
1010  1020 1030 1040 1050 1060 1070 1080 1090
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 1970 1980
#Great War Hospital System 
14000 14010 14020
#Engineers
1830 1840 1850 1860
#Tankette 
7600 7610 2620 2010 2630 2640 2646 2650 2030
#Basic Armoured Car  
2860 2870 2880 2020 2150
#Great War Heavy Field Artillery 
2290 2300 2310
#Early Static Anti-Air Artillery 
2800 2450 21180 21190 21200
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020
#Interwar Bomber 
4600 4610 4620 4630 4120
#Multirole fighter
4300 4310 4320 4330
#ww1 strategic bomber
4800 4810 4820
#Medicine
5600 5610 5620 5630
#Computers & cryptografi
5310 54010 54020 54030 5316 5326
#Manufactoring
5810 5820 5050 5830 5060
#Mechanized Agriculture 
5700 5710 5010
#Improved Construction Engineering 
5800 5080 5090 
#rocket
5560

# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Land Doctrines
6560
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010  
 }
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 2 
     political_left    = 3 
     free_market       = 3 
     freedom           = 3 
     professional_army = 6 
     defense_lobby     = 9 
     interventionism   = 8 
    } 
   headofstate            = {  type = 9 id = 280011  } 
   headofgovernment       = {  type = 9 id = 280014  } 
   foreignminister        = {  type = 9 id = 280018  } 
   armamentminister       = {  type = 9 id = 280021  } 
   ministerofsecurity     = {  type = 9 id = 280028  } 
   ministerofintelligence = {  type = 9 id = 280033  } 
   chiefofstaff           = {  type = 9 id = 280038  } 
   chiefofarmy            = {  type = 9 id = 280040  } 
   chiefofnavy            = {  type = 9 id = 280043  } 
   chiefofair             = {  type = 9 id = 280045  }
   dormant_ministers      = {  280001 280026  } # Andrej Hlinka, Janko Jesenský 
   dormant_leaders      = { 280015 280016 } # Milan Rastislav Štefánik ( Already dead in 1919 ! ) , Ludvik Svoboda-Czechoslovak army and partisans leader

###Slovak OOB###
  landunit =
  { id       = { type = 26000 id = 1 }
    name     = "SGS"
    leader   = 280011 # Augustín Malár
    location = 208
    division =
    { id            = { type = 26000 id = 2 }
      name          = "Slovensky Generálny Stáb"
      strength      = 100
      type          = hq
      model         = 2
    }
  }
  landunit =
  { id       = { type = 26000 id = 3 }
    name     = "Hlinkova Garda"
    leader   = 280014 # Karol Sidor
    location = 208
    division =
    { id            = { type = 26000 id = 4 }
      name          = "Hlinkova Garda"
      strength      = 100
      type          = militia
      model         = 5
    }
  }
  landunit =
  { id       = { type = 26000 id = 5 }
    name     = "I. Armáda"
    leader   = 280003 # Ferdinand Èatloš
    location = 211
    division =
    { id            = { type = 26000 id = 6 }
      name          = "1. Pesia divízia 'Jánosík'"
      strength      = 100
      type          = infantry
      model         = 10
      extra = artillery 
      brigade_model = 10
    }
    division =
    { id            = { type = 26000 id = 7 }
      name          = "2. Pesia divízia 'Skultéty'"
      strength      = 100
      type          = infantry
      model         = 10
    } 
    division =
    { id            = { type = 26000 id = 8 }
      name          = "3. Pesia divízia 'Rázus'"
      strength      = 100
      type          = infantry
      model         = 10
      extra = engineer 
      brigade_model = 5
    }
  }
  landunit =
  { id       = { type = 26000 id = 9 }
    name     = "II. Armáda"
    leader   = 280017 # Jozef Turanec
    location = 214
    division =
    { id            = { type = 26000 id = 10 }
      name          = "4. Pesia divízia 'Sládkovic'"
      strength      = 100
      type          = infantry
      model         = 10
    }
    division =
    { id            = { type = 26000 id = 11 }
      name          = "5. Pesia divízia 'Tajovsky'"
      strength      = 100
      type          = infantry
      model         = 10
    } 
    division =
    { id            = { type = 26000 id = 12 }
      name          = "6. Pesia divízia 'Stúr'"
      strength      = 100
      type          = infantry
      model         = 10
      extra = light_armor_brigade
      brigade_model = 7
    }
  }

  ### Volga Coalition Troops ###
	
landdivision = { dormant = yes id = { type = 26000 id = 50 } name = "Volga oddelenie " type = militia model = 6 }
  
}