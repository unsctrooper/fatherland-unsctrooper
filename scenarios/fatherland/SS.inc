##############################
# Country definition for U58 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U58
  puppet             = GER
  control            = GER
  ai                 = "U58_1948.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes NEIN = yes RES = yes } }
  capital            = 641 # Sevastopol
  manpower           = 500
  # Resource Reserves
  energy         = 240
  metal          = 120
  rare_materials = 60
  oil            = 200
  supplies       = 200
  money          = 10
  transports     = 100
  free = {
    ic             = 15
    oil            = 25
    supplies       = 25
  }

  diplomacy = {
    relation = { tag = GER value = 200 }
  }
  SpyInfo                = { country = "U58" NumberOfSpies = 1 }

  nationalprovinces      = { 637 638 639 640 641 }
  ownedprovinces         = { 637 638 639 640 641 }
  controlledprovinces    = { 637 638 639 640 641 }
  claimedprovinces       = { 637 638 639 640 641 }

  techapps               = { 5810 5820 5050 5830 5060 5070 5130 5040 5110 5140 5150 5160 5170 5180 5800 5080 5090 5100 5310 54010 54020 54030 5320 5330 5340 5316 5326 5327 5350 5360 5370 5380 5390 5400 7140 7150 5700 5710 5010 5020 5030 5190 5200 5210 5220 5230 5240 53020 53040 5470 5480 5490 5500 5560 5600 5610 5620 5630 5640 5650 5410 5416 5417 5420 5426 5430 5440 5920 5960 5970 5930 5940 5950 5980 5990 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1130 1140 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1280 1670 1680 1690 1700 1396 1400 1410 1420 1430 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1530 1470 1480 1490 1830 1840 1850 1860 1870 1880 1910 1920 1930 1940 1950 1960 1970 1980 1990 199100 199110 199130 199140 199150 7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2060 2070 2080 2090 2140 11000 2100 2110 2120 2126 2860 2870 2880 2020 2150 2160 2890 2170 2180 2850 2190 2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2340 2360 2400 2410 2420 2430 2800 2450 21180 21190 21200 2460 2470 2480 2490 2810 2820 2510 2520 2530 2220 2230 2240 2250 2970 2370 2380 22910 22920 22930 2980 2260 2270 14000 14010 14020 14030 14040 6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910 6210 6220 6230 6240 6250 6260 6270 6280 6290 6900 14100 3110 3120 3130 3140 3150 3160 12010 3410 3420 3430 3440 3450 3456 3460 3470 3480 3310 3320 3330 3340 3350 3210 3220 3230 3240 3250 3260 12020 3010 3020 3030 3040 3050 3060 3070 12000 3080 3610 3620 3630 3640 3650 3660 3670 3680 3710 12100 12110 12120 12130 3510 3520 3530 3720 3730 3736 3740 3750 3760 3900 3910 3770 3810 3820 3830 4300 4310 4320 4330 4340 4040 4070 4100 4350 4400 4170 4280 4450 4180 4800 4810 4820 4220 4230 4240 4700 4710 4190 4200 4210 4500 4510 4520 4530 4540 4550 4010 4020 4030 4060 4090 15000 15010 4600 4610 4620 4630 4120 4130 4140 4150 4160 15100 4740 4750 4760 4770 4780 4790 4850 4860 4050 4080 4110 4116 4900 4910 4920 4930 4940 4290 4250 4260 4270 15180 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9190 9200 9210 9220 9230 9240 9250 9260 9270 9280 9350 9360 9290 9300 9310 9370 9390 9400 9380 9320 9330 9340 9410 9420 27000 8010 8020 8030 8040 8050 8060 8070 8080 81380 82300 82310 82500 82510 82520 8500 8510 8520 8550 8560 8600 8570 8610 8620 8630 8640 8650 8660 81300 81310 81320 81330 81340 81350 81360 81370 8100 8110 8120 8150 8160 8170 8200 8210 15500 7550 7560 7570 7580 7590 7100 7110 7120 7010 7020 7620 7630 }
  inventions             = { 3000027 3000028 3000031 3000017 3000018 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 1
    freedom           = 1
    free_market       = 1
    professional_army = 8
    defense_lobby     = 10
    interventionism   = 10
  }
  headofstate            = { type = 9 id = 1105001 } # Heinrich Himmler
  headofgovernment       = { type = 9 id = 1105002 } # Reinhard Heydrich
  foreignminister        = { type = 9 id = 1105003 } # Werner Lorenz
  armamentminister       = { type = 9 id = 1105004 } # Oswald Pohl
  ministerofsecurity     = { type = 9 id = 1105005 } # Reinhard Heydrich
  ministerofintelligence = { type = 9 id = 1105006 } # Walther Darré
  chiefofstaff           = { type = 9 id = 1105007 } # Heinrich Himmler
  chiefofarmy            = { type = 9 id = 1105008 } # Heinrich Himmler
  chiefofnavy            = { type = 9 id = 1105009 } # Heinrich Himmler
  chiefofair             = { type = 9 id = 1105010 } # Heinrich Himmler

  landunit = {
    id       = { type = 14500 id = 11001 }
    name     = "8. SS-Kav.Div. 'Florian Geyer'"
    location = 336
    division = {
      id             = { type = 14500 id = 11002 }
      name           = "8. SS-Kav.Div. 'Florian Geyer'"
      type           = cavalry
      model          = 12
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 14500 id = 11003 }
    name     = "IX. Armeekorps"
    location = 329
    division = {
      id             = { type = 14500 id = 11004 }
      name           = "21. Waffen-SS Geb.Div. 'Skanderbeg'"
      type           = bergsjaeger
      model          = 12
      strength       = 80
      experience     = 40
      locked         = yes
    }
    division = {
      id             = { type = 14500 id = 11005 }
      name           = "21. Albanische SS-Freiw.-Div."
      type           = motorized
      model          = 3
      strength       = 80
      experience     = 20
      locked         = yes
    }
    division = {
      id             = { type = 14500 id = 11041 }
      name           = "31. SS-Freiwilligen-Grenadier-Div."
      type           = motorized
      model          = 3
      strength       = 80
      experience     = 40
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14500 id = 11006 }
    name     = "Heeresgruppe E Reserve"
    location = 355
    division = {
      id             = { type = 14500 id = 11007 }
      name           = "13. Waffen-SS Geb.Div. 'Handschar'"
      type           = bergsjaeger
      model          = 12
      strength       = 40
      experience     = 40
      locked         = yes
    }
    division = {
      id             = { type = 14500 id = 11008 }
      name           = "7. SS-Freiw.-Geb.Div. 'Prinz Eugen'"
      type           = bergsjaeger
      model          = 12
      strength       = 40
      experience     = 40
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14500 id = 11009 }
    name     = "IX. Armeekorps"
    location = 572
    division = {
      id             = { type = 14500 id = 11010 }
      name           = "32. SS-Freiw.Div. '30. Januar'"
      type           = motorized
      model          = 3
      strength       = 75
    }
    division = {
      id             = { type = 14500 id = 11011 }
      name           = "3. SS-Panzer-Div. 'Totenkopf'"
      type           = armor
      model          = 3
      extra          = heavy_armor
      brigade_model  = 4
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 11012 }
      name           = "4. SS-Pz.Gr.Div. 'Polizei'"
      type           = mechanized
      model          = 1
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 11013 }
      name           = "5. SS-Panzer-Div. 'Wiking'"
      type           = armor
      model          = 3
      extra          = heavy_armor
      brigade_model  = 4
      strength       = 100
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 14500 id = 11014 }
    name     = "VI. SS-Korps"
    location = 674
    division = {
      id             = { type = 14500 id = 11015 }
      name           = "22. SS-Kav.Div. 'Maria Theresia'"
      type           = cavalry
      model          = 12
      strength       = 75
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 14500 id = 11016 }
    name     = "1. SS-Armee"
    location = 658
    division = {
      id             = { type = 14500 id = 11017 }
      name           = "17. SS-Pz.Gr.Div. 'Götz Berlichingen'"
      type           = mechanized
      model          = 1
      extra          = sp_artillery
      brigade_model  = 3
      strength       = 75
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 14500 id = 11018 }
    name     = "II. SS-Panzerkorps"
    location = 679
    division = {
      id             = { type = 14500 id = 11019 }
      name           = "2. SS-Panzer-Div. 'Das Reich'"
      type           = armor
      model          = 3
      extra          = sp_artillery
      brigade_model  = 3
      strength       = 75
      experience     = 30
    }
    division = {
      id             = { type = 14500 id = 11020 }
      name           = "9. SS-Panzer-Div. 'Hohenstaufen'"
      type           = armor
      model          = 3
      extra          = sp_artillery
      brigade_model  = 3
      strength       = 75
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 14500 id = 11021 }
    name     = "III. SS-Panzerkorps"
    location = 122
    division = {
      id             = { type = 14500 id = 11022 }
      name           = "4. SS-Pz.Gr.Brig. 'Nederland'"
      type           = mechanized
      model          = 1
      strength       = 75
      experience     = 30
      locked         = yes
    }
    division = {
      id             = { type = 14500 id = 11023 }
      name           = "11. SS-Pz.Gr.Freiw.Div. 'Nordland'"
      type           = mechanized
      model          = 1
      strength       = 75
      experience     = 40
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14500 id = 11024 }
    name     = "LXXIII. z.b.V. Korps"
    location = 579
    division = {
      id             = { type = 14500 id = 11025 }
      name           = "16. SS-Pz.Gr.Div. 'Reichsführer SS'"
      type           = mechanized
      model          = 1
      extra          = tank_destroyer
      brigade_model  = 3
      strength       = 75
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 14500 id = 11026 }
    name     = "XII. SS-Korps"
    location = 177
    division = {
      id             = { type = 14500 id = 11027 }
      name           = "10. SS-Panzer-Div. 'Frundsberg'"
      type           = armor
      model          = 3
      extra          = sp_artillery
      brigade_model  = 3
      strength       = 75
      experience     = 20
      locked         = yes
    }
    division = {
      id             = { type = 14500 id = 11028 }
      name           = "12. SS-Panzer-Div. 'Hitlerjugend'"
      type           = armor
      model          = 3
      extra          = heavy_armor
      brigade_model  = 3
      strength       = 75
      experience     = 40
      locked         = yes
    }
    division = {
      id             = { type = 14500 id = 11029 }
      name           = "1. SS-Leibstandarte Adolf Hitler"
      type           = armor
      model          = 3
      extra          = sp_artillery
      brigade_model  = 3
      strength       = 75
      experience     = 30
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14500 id = 11030 }
    name     = "IV. SS-Panzerkorps"
    location = 244
    division = {
      id             = { type = 14500 id = 11033 }
      name           = "18. SS-Pz.Gr.Div. 'Horst Wessel'"
      type           = mechanized
      model          = 1
      strength       = 75
      experience     = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 11032 }
    name     = "XXXX. SS-Panzerkorps"
    location = 224
    division = {
      id             = { type = 14500 id = 11048 }
      name           = "10. SS-Panzer-Div. 'Frundsberg'"
      type           = armor
      model          = 3
      extra          = sp_artillery
      brigade_model  = 3
      strength       = 55
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14501 id = 11034 }
    name     = "25. Waffen-Gr.Div. d. SS 'Hunyadi'"
    location = 284
    division = {
      id             = { type = 14500 id = 11035 }
      name           = "25. Waffen-Gr.Div. d. SS 'Hunyadi'"
      type           = motorized
      model          = 3
      strength       = 65
      experience     = 20
      locked         = yes
    }
    division = {
      id             = { type = 14500 id = 11036 }
      name           = "26. Waffen-Gr.Div. d. SS 'Hungaria'"
      type           = motorized
      model          = 3
      strength       = 65
      experience     = 20
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14500 id = 11037 }
    name     = "28. SS-Freiw.-Div. 'Wallonien'"
    location = 108
    division = {
      id             = { type = 14500 id = 11038 }
      name           = "28. SS-Freiw.-Div. 'Wallonien'"
      type           = motorized
      model          = 3
      strength       = 50
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14500 id = 11039 }
    name     = "27. SS-Freiw.-Div. 'Langemark'"
    location = 117
    division = {
      id             = { type = 14500 id = 11040 }
      name           = "27. SS-Freiw.-Div. 'Langemark'"
      type           = motorized
      model          = 3
      strength       = 50
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14500 id = 11054 }
    name     = "1. Waffen-SS 'Galizien' Division"
    location = 633
    division = {
      id             = { type = 14500 id = 11042 }
      name           = "1. Waffen-SS 'Galizien' Division"
      type           = infantry
      model          = 11
      extra          = armored_car
      brigade_model  = 5
      strength       = 80
      experience     = 20
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14500 id = 11043 }
    name     = "Lettische SS-Freiw.-Div."
    location = 264
    division = {
      id             = { type = 14500 id = 11044 }
      name           = "15. Lettische SS-Freiw.-Div."
      type           = motorized
      model          = 2
      strength       = 45
      experience     = 80
      locked         = yes
    }
    division = {
      id             = { type = 14500 id = 11045 }
      name           = "19. Lettische SS-Freiw.-Div."
      type           = motorized
      model          = 2
      strength       = 65
      experience     = 80
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14500 id = 11046 }
    name     = "20. Estische SS-Freiw.-Div."
    location = 270
    division = {
      id             = { type = 14500 id = 11047 }
      name           = "20. Estische SS-Freiw.-Div."
      type           = motorized
      model          = 2
      strength       = 55
      experience     = 60
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14500 id = 11055 }
    name     = "1. Georgien Waffen-SS Legion"
    location = 707
    division = {
      id             = { type = 14500 id = 11049 }
      name           = "Georgian Waffen-SS Legion"
      type           = infantry
      model          = 11
      strength       = 75
      max_strength   = 75
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14500 id = 11050 }
    name     = "2. Georgien Waffen-SS Legion"
    location = 709
    division = {
      id             = { type = 14505 id = 11051 }
      name           = "342. Kaukasus SS Division"
      type           = motorized
      model          = 2
      extra          = sp_artillery
      brigade_model  = 3
      strength       = 35
      experience     = 60
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14500 id = 11052 }
    name     = "14. Galizische SS-Freiw.-Div."
    location = 242
    division = {
      id             = { type = 14500 id = 11053 }
      name           = "14. Galizische SS-Freiw.-Div."
      type           = motorized
      model          = 2
      strength       = 70
      experience     = 80
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14500 id = 11070 }
    name     = "SS. Kampfgruppe Nord"
    location = 641
    division = {
      id             = { type = 14500 id = 11071 }
      name           = "14. Galizische SS-Freiw.-Div."
      type           = bergsjaeger
      model          = 12
      strength       = 70
      experience     = 80
      locked         = yes
    }
  }
}
