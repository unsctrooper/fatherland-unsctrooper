##############################
# Country definition for GER #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = GER
  ai                 = "GER_1948.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes RES = yes NEIN = yes } }
  belligerence       = 10
  capital            = 163 # Berlin
  manpower           = 2500
  # Resource Reserves
  energy         = 35000
  metal          = 10000
  rare_materials = 3000
  oil            = 2500
  supplies       = 1800
  money          = 1500
  transports     = 280
  escorts        = 75

  diplomacy = {
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
    relation = {
      tag        = TUR
      value      = 50
      guaranteed = { year = 1948 month = january day = 1 }
    }
    relation = { tag = IRE value = 0 }
    relation = {
      tag        = TRA
      value      = 50
      guaranteed = { year = 1948 month = january day = 1 }
    }
    relation = { tag = POR value = 65 }
    relation = { tag = SPA value = 85 }
    relation = {
      tag        = SCH
      value      = -25
      guaranteed = { year = 1948 month = january day = 1 }
    }
    relation = {
      tag        = FRA
      value      = 50
      guaranteed = { year = 1948 month = january day = 1 }
    }
    relation = { tag = SWE value = 50 }
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
    relation = { tag = SOV value = -200 }
    relation = { tag = CHC value = -200 }
    relation = { tag = MON value = -200 }
    relation = { tag = SIB value = -200 }
    relation = { tag = U57 value = -200 }
    relation = { tag = U59 value = 0 }
    relation = { tag = UPE value = 50 }
    relation = {
      tag        = ITA
      value      = 180
      guaranteed = { year = 1948 month = january day = 1 }
    }
    relation = {
      tag        = CRO
      value      = 120
      access     = yes
      guaranteed = { year = 1948 month = january day = 1 }
    }
    relation = { tag = HUN value = 180 }
    relation = { tag = ROM value = 150 }
    relation = { tag = BUL value = 175 }
    relation = { tag = FIN value = 120 }
    relation = { tag = MTN value = 100 }
    relation = { tag = BLR value = 200 access = yes }
    relation = { tag = SLO value = 200 access = yes }
    relation = { tag = SER value = 200 access = yes }
    relation = { tag = UTC value = 150 access = yes }
    relation = { tag = U58 value = 200 access = yes }
    relation = {
      tag        = DEN
      value      = 200
      access     = yes
      guaranteed = { year = 1948 month = january day = 1 }
    }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 8 }
  SpyInfo                = { country = "SPA" NumberOfSpies = 8 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 3 }
  SpyInfo                = { country = "GER" NumberOfSpies = 15 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 2 }
  SpyInfo                = { country = "TUR" NumberOfSpies = 12 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 10 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 6 }

  nationalprovinces      = { 126 145 127 131 142 147 141 137 174 171 176 146 148 154 151 152 153 156 169 157 163 162 158 183 159 172 170 173 177 138 134 132 178 175 179 167 164 184 182 155 161 185 165 166 168 133 144 160 180 136 139 135 129 128 130 181 225 224 221 149 150 140 261 207 199 198 196 201 143 189 190 191 192 195 194 186 187 193 188 200 206 205 197 202 204 203 110 109 226 230 222 231 232 227 223 104 105 107 }
  ownedprovinces         = { 126 145 127 131 142 147 141 137 174 171 176 146 148 154 151 152 153 156 169 163 162 158 183 159 172 170 173 177 138 134 132 178 175 179 167 164 184 133 182 155 161 185 165 166 168 150 144 160 180 136 139 135 129 128 130 149 140 181 221 224 225 261 143 189 190 191 192 195 194 186 187 193 188 200 206 205 197 204 203 207 199 202 198 196 201 110 109 226 230 222 104 105 107 377 382 383 553 98 97 106 96 101 102 103 69 68 37 39 336 346 227 231 252 223 229 250 253 254 255 50 53 45 43 44 46 554 555 556 557 558 559 562 563 567 568 569 570 571 572 574 576 577 578 579 584 668 656 677 678 679 682 669 665 650 651 658 652 654 657 580 674 675 670 683 }
  controlledprovinces    = { 126 145 127 131 142 147 141 137 174 171 176 146 148 154 151 152 153 156 169 163 162 158 183 159 172 170 173 177 138 134 132 178 175 179 167 164 184 133 182 155 161 185 165 166 168 150 144 160 180 136 139 135 129 128 130 149 140 181 221 224 225 261 207 199 202 198 196 201 143 189 190 191 192 195 194 186 187 193 188 200 206 205 197 204 203 110 109 226 230 222 104 105 107 377 382 383 553 101 102 103 106 96 97 98 69 68 37 39 336 346 227 231 252 223 229 250 253 254 255 50 53 45 43 44 46 554 555 556 557 558 559 562 563 567 568 569 570 571 572 574 576 577 578 579 584 668 656 677 678 679 682 669 665 650 651 658 652 654 657 580 674 675 670 683 }
  claimedprovinces       = { 346 252 229 250 253 254 255 336 553 377 382 }

  techapps               = { 5700 5710 5010 5020 5030 5040 5810 5820 5050 5830 5060 5070 5130 5140 5150 5160 5180 5170 5110 5800 5080 5090 5100 5316 5326 5327 5310 54010 54020 54030 5320 5350 5360 5330 5370 5380 5340 5390 5400 7140 7150 53060 16000 5600 5610 5620 5630 5640 5650 5660 5190 5200 5210 5220 5230 5240 53020 53040 5560 7550 7560 7570 7580 7590 7100 15500 7110 7120 5410 5416 5417 5420 5426 5430 5440 5466 5450 5920 5930 5960 5970 5980 5990 2800 2450 21180 21190 21200 2460 2470 2480 2490 2500 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1130 1140 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1280 1290 1560 1570 1580 1590 1600 1670 1680 1690 1700 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1530 1540 1396 1400 1410 1420 1430 1470 1480 1490 7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070 2080 2090 2060 2140 6900 2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2340 2360 2810 2820 2510 2520 2530 2400 2410 2420 2970 2370 2380 2860 2870 2880 2020 2150 2160 2170 2180 2850 2190 2100 2110 2120 2130 2220 2230 2240 2250 22910 22920 22930 2980 2260 2270 1830 1840 1850 1860 1870 1880 1910 1920 1930 1940 1950 1960 1970 1980 1990 199130 199100 199140 199110 199150 3610 3620 3630 3640 3650 3660 3670 3680 3710 3010 3020 3030 3040 3050 3060 3070 12000 3110 3120 3130 3140 3150 3160 12010 12150 3210 3220 3230 3240 3250 3260 12020 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 12040 12100 12110 12120 12130 3510 3520 3530 3540 3550 3810 3820 3830 3840 3720 3730 3736 3740 3750 3760 3770 3780 3900 3910 3920 3930 4500 4510 4520 4530 4540 4550 4010 4020 4030 4060 4090 15000 15010 4300 4310 4320 4330 4340 4040 4280 4100 4350 4400 4170 4450 4180 15120 4600 4610 4620 4630 4120 4130 4140 4150 4160 4800 4810 4820 4230 4240 4700 4710 4190 4200 4210 15140 4290 4250 4260 4270 15180 4740 4750 4760 4770 4780 4790 4850 4860 4050 4080 4110 4900 4910 4920 4930 4940 4950 14000 14010 14020 14030 14040 6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 6210 6220 6260 6240 6270 6290 14100 8010 8020 8030 8040 8050 8060 8070 8080 82300 82500 8500 8510 8520 8550 8600 8610 8900 8910 8920 8930 8940 8950 8960 8970 8100 8110 8120 8150 8160 8170 8200 8210 81650 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9050 9060 9070 9090 9100 9110 9120 9130 9140 9190 9200 9210 9220 9230 9240 5470 5480 5490 5500 5510 5520 }
  inventions             = { 3000027 3000028 3000031 3000017 3000018 3000019 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 1
    freedom           = 1
    free_market       = 2
    professional_army = 7
    defense_lobby     = 10
    interventionism   = 10
  }
  headofstate            = { type = 9 id = 1 } # Adolf Hitler
  headofgovernment       = { type = 9 id = 23 } # Martin Bormann
  foreignminister        = { type = 9 id = 35 } # Joachim von Ribbentrop
  armamentminister       = { type = 9 id = 65 } # Albert Speer
  ministerofsecurity     = { type = 9 id = 86 } # Heinrich Himmler
  ministerofintelligence = { type = 9 id = 274 } # Reinhard Heydrich
  chiefofstaff           = { type = 9 id = 132 } # Alfred Jodl
  chiefofarmy            = { type = 9 id = 146 } # Walther von Brauchitsch
  chiefofnavy            = { type = 9 id = 161 } # Karl Dönitz
  chiefofair             = { type = 9 id = 10 } # Hermann Göring

  landunit = {
    id       = { type = 14500 id = 1 }
    name     = "Oberkommando des Heeres"
    location = 163
    leader   = 153
    division = {
      id             = { type = 14500 id = 2 }
      name           = "Oberkommando des Heeres"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 413 }
    name     = "LXXXIX. Armeekorps"
    location = 67
    division = {
      id             = { type = 14500 id = 414 }
      name           = "245. Garrison-Division"
      type           = garrison
      model          = 12
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 132 }
    name     = "9. Armee"
    location = 68
    leader   = 319
    division = {
      id             = { type = 14500 id = 133 }
      name           = "A.O.K. 9"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
      strength       = 75
    }
    division = {
      id             = { type = 14500 id = 134 }
      name           = "17. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 419 }
    name     = "Marineoberkommando West"
    location = 69
    division = {
      id             = { type = 14500 id = 420 }
      name           = "265. Infanterie-Division (mot)"
      type           = motorized
      model          = 3
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 360 }
    name     = "LXVI. Armeekorps"
    location = 57
    division = {
      id             = { type = 14500 id = 162 }
      name           = "68. Garrison-Division"
      type           = garrison
      model          = 12
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 421 }
    name     = "Festungs Lorient"
    location = 39
    division = {
      id             = { type = 14500 id = 440 }
      name           = "Festungs Lorient"
      type           = garrison
      model          = 6
      strength       = 65
    }
  }
  landunit = {
    id       = { type = 14500 id = 17 }
    name     = "Marine Oberkommando West"
    location = 37
    division = {
      id             = { type = 14500 id = 18 }
      name           = "702. Infanterie-Division"
      type           = marine
      model          = 6
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 408 }
    name     = "LXXX. Armeekorps"
    location = 43
    division = {
      id             = { type = 14500 id = 412 }
      name           = "347. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 389 }
    name     = "LXXX. Armeekorps"
    location = 46
    division = {
      id             = { type = 14500 id = 402 }
      name           = "526. Division"
      type           = infantry
      model          = 12
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 128 }
    name     = "XXVII. Armeekorps"
    location = 53
    division = {
      id             = { type = 14500 id = 130 }
      name           = "35. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 104 }
    name     = "VI. Armeekorps"
    location = 44
    division = {
      id             = { type = 14500 id = 107 }
      name           = "131. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = anti_air
      brigade_model  = 5
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 100 }
    name     = "XXVIII. Armeekorps"
    location = 49
    division = {
      id             = { type = 14500 id = 103 }
      name           = "203. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 417 }
    name     = "Marineoberkommando West"
    location = 51
    division = {
      id             = { type = 14500 id = 418 }
      name           = "226. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = anti_air
      brigade_model  = 5
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 70 }
    name     = "XVI. Armeekorps"
    location = 52
    division = {
      id             = { type = 14500 id = 29 }
      name           = "A.O.K. 18"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 72 }
      name           = "81. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 13 }
    name     = "LXXI. Armeekorps"
    location = 125
    division = {
      id             = { type = 14500 id = 16 }
      name           = "210. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 22 }
    name     = "LXX. Armeekorps"
    location = 114
    division = {
      id             = { type = 14500 id = 23 }
      name           = "274. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = artillery
      brigade_model  = 11
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 54 }
    name     = "XXXVIII. Armeekorps"
    location = 115
    division = {
      id             = { type = 14500 id = 57 }
      name           = "329. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 58 }
    name     = "L. Armeekorps"
    location = 122
    division = {
      id             = { type = 14500 id = 59 }
      name           = "24. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 25
    }
    division = {
      id             = { type = 14500 id = 61 }
      name           = "290. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 308 }
    name     = "Wehrm. Befehlshaber Dänemark"
    location = 217
    division = {
      id             = { type = 14500 id = 309 }
      name           = "166. Reserve-Division"
      type           = garrison
      model          = 6
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 14500 id = 3 }
    name     = "Armee Norwegen"
    location = 483
    leader   = 293
    division = {
      id             = { type = 14500 id = 4 }
      name           = "A.O.K. 21"
      type           = hq
      model          = 5
      extra          = police
      brigade_model  = 3
      strength       = 25
    }
    division = {
      id             = { type = 14500 id = 62 }
      name           = "389. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 31 }
    name     = "I. Armeekorps"
    location = 491
    division = {
      id             = { type = 14500 id = 33 }
      name           = "225. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 45 }
    name     = "II. Armeekorps"
    location = 493
    division = {
      id             = { type = 14500 id = 49 }
      name           = "263. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 5 }
    name     = "20. Gebirgsarmee"
    location = 495
    leader   = 565
    division = {
      id             = { type = 14500 id = 6 }
      name           = "A.O.K. 20"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 4
      strength       = 70
    }
    division = {
      id             = { type = 14500 id = 274 }
      name           = "5. Gebirgsjäger-Division"
      type           = bergsjaeger
      model          = 12
      strength       = 80
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 8 }
      name           = "7. Gebirgsjäger-Division"
      type           = bergsjaeger
      model          = 12
      strength       = 80
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 14500 id = 263 }
    name     = "Kommandantur d. Festung Kreta"
    location = 382
    division = {
      id             = { type = 14500 id = 264 }
      name           = "133. Festungs-Division"
      type           = garrison
      model          = 6
      strength       = 35
    }
    division = {
      id             = { type = 14500 id = 193 }
      name           = "3. Gebirgsjäger-Division"
      type           = bergsjaeger
      model          = 12
      strength       = 80
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 356 }
      name           = "3. Fallschirmjäger-Division"
      type           = paratrooper
      model          = 3
      strength       = 80
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 14500 id = 229 }
    name     = "12. Armee (Serbien)"
    location = 338
    leader   = 44
    division = {
      id             = { type = 14500 id = 230 }
      name           = "Pz. A.O.K. 2"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
      strength       = 75
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 35 }
      name           = "218. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 65
    }
    division = {
      id             = { type = 14500 id = 13333 }
      name           = "117. Jäger-Division"
      type           = infantry
      model          = 12
      extra          = engineer
      brigade_model  = 5
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 14500 id = 260 }
    name     = "XV. Gebirgskorps"
    location = 358
    division = {
      id             = { type = 14500 id = 247 }
      name           = "369. Kroatische Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 80
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 14500 id = 265 }
    name     = "Kommandantur d. Ost Ägäis"
    location = 383
    division = {
      id             = { type = 14500 id = 266 }
      name           = "Kommandantur d. Ost Ägäis"
      type           = garrison
      model          = 6
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 248 }
    name     = "XXI. Gebirgskorps"
    location = 346
    division = {
      id             = { type = 14500 id = 251 }
      name           = "41. Festungs-Division"
      type           = garrison
      model          = 6
      strength       = 50
    }
    division = {
      id             = { type = 14500 id = 252 }
      name           = "104. Jäger-Division"
      type           = infantry
      model          = 12
      extra          = engineer
      brigade_model  = 5
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 14500 id = 170 }
    name     = "17. Armee"
    location = 702
    leader   = 247
    division = {
      id             = { type = 14500 id = 171 }
      name           = "A.O.K. 17"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
      strength       = 75
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 272 }
      name           = "162. Infanterie-Div. 'Turkestan'"
      type           = infantry
      model          = 12
      strength       = 80
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 14501 id = 95 }
    name     = "206. Sicherungs-Division"
    location = 589
    division = {
      id             = { type = 14500 id = 95 }
      name           = "206. Sicherungs-Division"
      type           = garrison
      model          = 6
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14501 id = 30 }
    name     = "52. Sicherungs-Division"
    location = 254
    leader   = 248
    division = {
      id             = { type = 14500 id = 30 }
      name           = "52. Sicherungs-Division"
      type           = garrison
      model          = 6
      extra          = police
      brigade_model  = 2
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 14501 id = 69 }
    name     = "221. Sicherungs-Division"
    location = 600
    division = {
      id             = { type = 14500 id = 69 }
      name           = "221. Sicherungs-Division"
      type           = garrison
      model          = 6
      extra          = police
      brigade_model  = 2
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 312 }
    name     = "XXII. Gebirgskorps"
    location = 707
    division = {
      id             = { type = 14500 id = 315 }
      name           = "2. Gebirgsjäger-Division"
      type           = bergsjaeger
      model          = 12
      strength       = 80
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 237 }
      name           = "1. Gebirgsjäger-Division"
      type           = bergsjaeger
      model          = 12
      strength       = 80
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 302 }
      name           = "114. Jäger-Division"
      type           = infantry
      model          = 12
      extra          = engineer
      brigade_model  = 5
      strength       = 80
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 14500 id = 182 }
    name     = "XXXXIX. Gebirgskorps"
    location = 713
    division = {
      id             = { type = 14500 id = 183 }
      name           = "1. Skijäger-Division"
      type           = infantry
      model          = 12
      extra          = engineer
      brigade_model  = 5
      strength       = 80
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 14500 id = 191 }
    name     = "XVII. Armeekorps"
    location = 695
    division = {
      id             = { type = 14500 id = 194 }
      name           = "4. Gebirgsjäger-Division"
      type           = bergsjaeger
      model          = 12
      strength       = 80
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 14500 id = 136 }
    name     = "VIII. Armeekorps"
    location = 189
    division = {
      id             = { type = 14500 id = 305 }
      name           = "188. Reserve-Gebirgsjäger-Division"
      type           = bergsjaeger
      model          = 12
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 14500 id = 304 }
    name     = "XCVII. z.b.V. Korps"
    location = 669
    division = {
      id             = { type = 14500 id = 7 }
      name           = "6. Gebirgsjäger-Division"
      type           = bergsjaeger
      model          = 12
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 111 }
      name           = "28. Jäger-Division"
      type           = infantry
      model          = 12
      extra          = engineer
      brigade_model  = 5
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 185 }
      name           = "101. Jäger-Division"
      type           = infantry
      model          = 12
      extra          = engineer
      brigade_model  = 5
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 14500 id = 175 }
    name     = "LIX. Armeekorps"
    location = 668
    division = {
      id             = { type = 14500 id = 203 }
      name           = "118. Jäger-Division"
      type           = infantry
      model          = 12
      extra          = engineer
      brigade_model  = 5
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 124 }
      name           = "5. Jäger-Division"
      type           = infantry
      model          = 12
      extra          = engineer
      brigade_model  = 5
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 285 }
      name           = "157. Gebirgsjäger-Division"
      type           = bergsjaeger
      model          = 12
      strength       = 100
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 14500 id = 187 }
    name     = "XI. Armeekorps"
    location = 683
    division = {
      id             = { type = 14500 id = 291 }
      name           = "42. Jäger-Division"
      type           = infantry
      model          = 12
      extra          = engineer
      brigade_model  = 5
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 186 }
      name           = "254. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = tank_destroyer
      brigade_model  = 3
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 189 }
      name           = "100. Jäger-Division"
      type           = infantry
      model          = 12
      extra          = engineer
      brigade_model  = 5
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 14500 id = 198 }
    name     = "III. Hadsereg"
    location = 572
    division = {
      id             = { type = 14500 id = 199 }
      name           = "Panzer-Division 'Tatra'"
      type           = armor
      model          = 3
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 784 }
      name           = "83. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = artillery
      brigade_model  = 11
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 64 }
      name           = "93. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = tank_destroyer
      brigade_model  = 3
      strength       = 75
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 14500 id = 63 }
    name     = "VI. Korps"
    location = 674
    division = {
      id             = { type = 14500 id = 67 }
      name           = "4. Panzer-Division"
      type           = armor
      model          = 3
      strength       = 75
      experience     = 30
    }
    division = {
      id             = { type = 14500 id = 68 }
      name           = "12. Panzer-Division"
      type           = armor
      model          = 3
      extra          = anti_air
      brigade_model  = 5
      strength       = 75
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 14500 id = 400 }
    name     = "1. Armee"
    location = 658
    leader   = 326
    division = {
      id             = { type = 14500 id = 401 }
      name           = "A.O.K. 1"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
      strength       = 70
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 406 }
      name           = "25. Panzergrenadier-Division"
      type           = mechanized
      model          = 1
      strength       = 75
      experience     = 30
    }
    division = {
      id             = { type = 14500 id = 407 }
      name           = "21. Panzer-Division"
      type           = armor
      model          = 3
      strength       = 75
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 14500 id = 363 }
    name     = "II. Panzerkorps"
    location = 679
    division = {
      id             = { type = 14500 id = 235 }
      name           = "3. Kavallerie-Brigade"
      type           = cavalry
      model          = 12
      strength       = 75
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 14500 id = 37 }
    name     = "III. Panzerkorps"
    location = 555
    division = {
      id             = { type = 14500 id = 40 }
      name           = "121. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = artillery
      brigade_model  = 11
      strength       = 75
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 14500 id = 300 }
    name     = "LXXIII. z.b.V. Korps"
    location = 579
    division = {
      id             = { type = 14500 id = 181 }
      name           = "154. Feldausbildung-Division"
      type           = infantry
      model          = 12
      extra          = police
      brigade_model  = 2
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14500 id = 165 }
    name     = "XXXXII. Armeekorps"
    location = 262
    division = {
      id             = { type = 14500 id = 166 }
      name           = "72. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = tank_destroyer
      brigade_model  = 3
      strength       = 75
      experience     = 30
    }
    division = {
      id             = { type = 14500 id = 167 }
      name           = "88. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = tank_destroyer
      brigade_model  = 3
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 168 }
      name           = "291. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = tank_destroyer
      brigade_model  = 3
      strength       = 75
      experience     = 30
    }
    division = {
      id             = { type = 14500 id = 238 }
      name           = "92. Grenadier-Brigade (mot)"
      type           = motorized
      model          = 3
      extra          = artillery
      brigade_model  = 11
      strength       = 80
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 169 }
      name           = "342. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = artillery
      brigade_model  = 11
      strength       = 75
      experience     = 10
    }
  }
  landunit = {
    id       = { type = 14500 id = 340 }
    name     = "XII. Korps"
    location = 617
    division = {
      id             = { type = 14500 id = 426 }
      name           = "A.O.K. 19"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
      strength       = 70
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 342 }
      name           = "176. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = tank_destroyer
      brigade_model  = 3
      strength       = 75
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 427 }
      name           = "106. Panzer-Brigade"
      type           = armor
      model          = 3
      extra          = sp_artillery
      brigade_model  = 3
      strength       = 75
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 14500 id = 216 }
    name     = "6. Armee"
    location = 599
    leader   = 73
    division = {
      id             = { type = 14500 id = 217 }
      name           = "A.O.K. 6"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
      strength       = 75
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 218 }
      name           = "1. Panzer-Division"
      type           = armor
      model          = 3
      strength       = 75
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 219 }
      name           = "3. Panzer-Division"
      type           = armor
      model          = 3
      extra          = sp_artillery
      brigade_model  = 3
      strength       = 75
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 220 }
      name           = "6. Panzer-Division"
      type           = armor
      model          = 3
      strength       = 75
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 221 }
      name           = "8. Panzer-Division"
      type           = armor
      model          = 3
      strength       = 75
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 222 }
      name           = "23. Panzer-Division"
      type           = armor
      model          = 3
      strength       = 75
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 223 }
      name           = "4. Kavallerie-Brigade"
      type           = cavalry
      model          = 12
      strength       = 75
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 225 }
      name           = "357. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 14500 id = 211 }
    name     = "IV. Panzerkorps"
    location = 244
    division = {
      id             = { type = 14500 id = 204 }
      name           = "211. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = anti_air
      brigade_model  = 5
      strength       = 65
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 213 }
      name           = "24. Panzer-Division"
      type           = armor
      model          = 3
      extra          = heavy_armor
      brigade_model  = 4
      strength       = 80
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 14500 id = 317 }
    name     = "Oberbefehlshaber West Reserve"
    location = 131
    leader   = 334
    division = {
      id             = { type = 14500 id = 319 }
      name           = "70. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = tank_destroyer
      brigade_model  = 3
      strength       = 25
    }
    division = {
      id             = { type = 14500 id = 321 }
      name           = "604. z.b.V. Division"
      type           = infantry
      model          = 12
      extra          = artillery
      brigade_model  = 11
      strength       = 25
    }
    division = {
      id             = { type = 14500 id = 313 }
      name           = "233. Reserve-Panzer-Division"
      type           = armor
      model          = 3
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 14500 id = 328 }
    name     = "1. Fallschirm-Armee"
    location = 145
    leader   = 239
    division = {
      id             = { type = 14500 id = 329 }
      name           = "Fsch. A.O.K. 1"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
      strength       = 75
    }
    division = {
      id             = { type = 14500 id = 330 }
      name           = "7. Fallschirmjäger-Division"
      type           = paratrooper
      model          = 3
      strength       = 50
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 331 }
      name           = "606. z.b.V. Division"
      type           = infantry
      model          = 12
      extra          = artillery
      brigade_model  = 11
      strength       = 25
    }
    division = {
      id             = { type = 14500 id = 332 }
      name           = "84. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 25
    }
    division = {
      id             = { type = 14500 id = 333 }
      name           = "180. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = tank_destroyer
      brigade_model  = 3
      strength       = 25
    }
    division = {
      id             = { type = 14500 id = 334 }
      name           = "190. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = artillery
      brigade_model  = 11
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 392 }
    name     = "LXXX. Armeekorps"
    location = 185
    division = {
      id             = { type = 14500 id = 393 }
      name           = "5. Fallschirmjäger-Division"
      type           = paratrooper
      model          = 3
      strength       = 50
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 395 }
      name           = "Führer-Grenadier-Division"
      type           = mechanized
      model          = 1
      strength       = 25
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 14500 id = 41 }
    name     = "X. Armeekorps"
    location = 179
    division = {
      id             = { type = 14500 id = 42 }
      name           = "30. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = artillery
      brigade_model  = 11
      strength       = 25
    }
    division = {
      id             = { type = 14500 id = 44 }
      name           = "132. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = artillery
      brigade_model  = 11
      strength       = 25
    }
    division = {
      id             = { type = 14500 id = 46 }
      name           = "14. Panzer-Division"
      type           = armor
      model          = 3
      extra          = heavy_armor
      brigade_model  = 4
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 74 }
    name     = "Heeresgruppe Mitte Reserve"
    location = 184
    leader   = 223
    division = {
      id             = { type = 14500 id = 76 }
      name           = "7. Panzer-Division"
      type           = armor
      model          = 3
      strength       = 50
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 77 }
      name           = "18. Panzergrenadier-Division"
      type           = mechanized
      model          = 1
      strength       = 50
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 78 }
      name           = "605. z.b.V. Division"
      type           = infantry
      model          = 12
      extra          = tank_destroyer
      brigade_model  = 3
      strength       = 50
    }
    division = {
      id             = { type = 14500 id = 79 }
      name           = "20. Panzer-Division"
      type           = armor
      model          = 3
      strength       = 50
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 14500 id = 206 }
    name     = "8. Armee"
    location = 207
    leader   = 367
    division = {
      id             = { type = 14500 id = 207 }
      name           = "A.O.K. 8"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
      strength       = 75
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 209 }
      name           = "15. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 50
      experience     = 80
    }
  }
  landunit = {
    id       = { type = 14500 id = 322 }
    name     = "25. Armee"
    location = 138
    leader   = 612
    division = {
      id             = { type = 14500 id = 323 }
      name           = "A.O.K. 25"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
      strength       = 75
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 324 }
      name           = "2. Fallschirmjäger-Division"
      type           = paratrooper
      model          = 3
      strength       = 50
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 325 }
      name           = "6. Fallschirmjäger-Division"
      type           = paratrooper
      model          = 3
      strength       = 50
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 327 }
      name           = "711. Infanterie-Division"
      type           = infantry
      model          = 11
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 14501 id = 300 }
    name     = "LXXIII. z.b.V. Korps"
    location = 553
    division = {
      id             = { type = 14500 id = 303 }
      name           = "356. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 14500 id = 295 }
    name     = "LXXVI. Panzerkorps"
    location = 107
    division = {
      id             = { type = 14500 id = 296 }
      name           = "29. Panzergrenadier-Division"
      type           = mechanized
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14500 id = 297 }
      name           = "90. Panzergrenadier-Division"
      type           = mechanized
      model          = 1
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 14500 id = 160 }
    name     = "4. Panzerarmee"
    location = 235
    leader   = 552
    division = {
      id             = { type = 14500 id = 161 }
      name           = "Pz. A.O.K. 4"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
      strength       = 75
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 163 }
      name           = "168. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 118 }
    name     = "2. Armee"
    location = 190
    leader   = 360
    division = {
      id             = { type = 14500 id = 119 }
      name           = "A.O.K. 2"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
      strength       = 75
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 120 }
      name           = "14. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = tank_destroyer
      brigade_model  = 3
      strength       = 50
    }
    division = {
      id             = { type = 14500 id = 122 }
      name           = "292. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = tank_destroyer
      brigade_model  = 3
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 14500 id = 153 }
    name     = "XXXX. Panzerkorps"
    location = 224
    division = {
      id             = { type = 14500 id = 157 }
      name           = "19. Panzer-Division"
      type           = armor
      model          = 3
      strength       = 45
    }
    division = {
      id             = { type = 14500 id = 158 }
      name           = "25. Panzer-Division"
      type           = armor
      model          = 3
      strength       = 65
    }
  }
  landunit = {
    id       = { type = 14500 id = 281 }
    name     = "10. Armee"
    location = 195
    leader   = 183
    division = {
      id             = { type = 14500 id = 282 }
      name           = "A.O.K. 10"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
      strength       = 75
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 283 }
      name           = "26. Panzer-Division"
      type           = armor
      model          = 3
      strength       = 50
    }
    division = {
      id             = { type = 14500 id = 284 }
      name           = "98. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 14500 id = 96 }
    name     = "4. Armee"
    location = 177
    leader   = 141
    division = {
      id             = { type = 14500 id = 97 }
      name           = "A.O.K. 4"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
      strength       = 75
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 87 }
      name           = "56. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = tank_destroyer
      brigade_model  = 3
      strength       = 65
    }
    division = {
      id             = { type = 14500 id = 98 }
      name           = "5. Panzer-Division"
      type           = armor
      model          = 3
      strength       = 50
    }
    division = {
      id             = { type = 14500 id = 99 }
      name           = "Fallschirm Pz-Div. 'Hermann Göring'"
      type           = armor
      model          = 3
      extra          = heavy_armor
      brigade_model  = 4
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 146 }
    name     = "XXIV. Panzerkorps"
    location = 154
    division = {
      id             = { type = 14500 id = 150 }
      name           = "16. Panzer-Division"
      type           = armor
      model          = 3
      strength       = 35
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 151 }
      name           = "17. Panzer-Division"
      type           = armor
      model          = 3
      strength       = 50
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 152 }
      name           = "20. Panzergrenadier-Division"
      type           = mechanized
      model          = 1
      strength       = 50
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 14500 id = 278 }
    name     = "14. Armee"
    location = 677
    leader   = 345
    division = {
      id             = { type = 14500 id = 279 }
      name           = "A.O.K. 14"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
      strength       = 75
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 280 }
      name           = "232. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 371 }
    name     = "LVIII. Panzerkorps"
    location = 129
    division = {
      id             = { type = 14500 id = 372 }
      name           = "2. Panzer-Division"
      type           = armor
      model          = 3
      extra          = tank_destroyer
      brigade_model  = 3
      strength       = 30
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 373 }
      name           = "9. Panzer-Division"
      type           = armor
      model          = 3
      extra          = heavy_armor
      brigade_model  = 3
      strength       = 30
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 374 }
      name           = "116. Panzer-Division"
      type           = armor
      model          = 3
      strength       = 30
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 14500 id = 379 }
    name     = "XXXXVII. Panzerkorps"
    location = 109
    division = {
      id             = { type = 14500 id = 380 }
      name           = "130. Panzer-Lehr-Division"
      type           = armor
      model          = 3
      extra          = sp_artillery
      brigade_model  = 3
      strength       = 50
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 381 }
      name           = "Panzer-Führerbegleitdivision"
      type           = armor
      model          = 3
      extra          = sp_artillery
      brigade_model  = 3
      strength       = 25
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 382 }
      name           = "15. Panzergrenadier-Division"
      type           = mechanized
      model          = 1
      strength       = 25
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 14500 id = 383 }
    name     = "7. Armee"
    location = 116
    leader   = 27
    division = {
      id             = { type = 14500 id = 384 }
      name           = "A.O.K. 7"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
      strength       = 75
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 385 }
      name           = "11. Panzer-Division"
      type           = armor
      model          = 3
      strength       = 50
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 430 }
      name           = "198. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 65
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 14500 id = 179 }
    name     = "1. Panzerarmee"
    location = 38
    leader   = 129
    division = {
      id             = { type = 14500 id = 180 }
      name           = "Pz. A.O.K. 1"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
      strength       = 75
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 377 }
      name           = "3. Panzergrenadier-Division"
      type           = mechanized
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14500 id = 378 }
      name           = "26. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = tank_destroyer
      brigade_model  = 3
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 14500 id = 80 }
    name     = "LXXV. Armeekorps"
    location = 97
    leader   = 222
    division = {
      id             = { type = 14500 id = 81 }
      name           = "Pz. A.O.K. 3"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
      strength       = 75
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 85 }
      name           = "69. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 14500 id = 289 }
    name     = "I. Fallschirmjägerkorps"
    location = 134
    division = {
      id             = { type = 14500 id = 290 }
      name           = "1. Fallschirmjäger-Division"
      type           = paratrooper
      model          = 3
      strength       = 65
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 287 }
      name           = "4. Fallschirmjäger-Division"
      type           = paratrooper
      model          = 3
      strength       = 65
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 14500 id = 254 }
    name     = "XXXIV. z.b.V. Korps"
    location = 624
    division = {
      id             = { type = 14500 id = 338 }
      name           = "A.O.K. 15"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
      strength       = 65
    }
    division = {
      id             = { type = 14500 id = 259 }
      name           = "264. Infanterie-Division"
      type           = infantry
      model          = 11
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 14500 id = 115 }
    name     = "Panzerkorps 'Hermann Göring'"
    location = 185
    division = {
      id             = { type = 14500 id = 116 }
      name           = "Panzergrenadier-Div. 'Hermann Göring'"
      type           = mechanized
      model          = 1
      strength       = 30
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 110 }
      name           = "21. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = tank_destroyer
      brigade_model  = 3
      strength       = 50
    }
    division = {
      id             = { type = 14500 id = 275 }
      name           = "34. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 65
    }
  }
  landunit = {
    id       = { type = 14500 id = 123 }
    name     = "XXIII. Armeekorps"
    location = 201
    division = {
      id             = { type = 14500 id = 125 }
      name           = "7. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = tank_destroyer
      brigade_model  = 3
      strength       = 25
    }
    division = {
      id             = { type = 14500 id = 126 }
      name           = "129. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 352 }
    name     = "LXXXI. Armeekorps"
    location = 541
    leader   = 495
    division = {
      id             = { type = 14500 id = 353 }
      name           = "Pz. A.O.K. 6"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
      strength       = 75
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 245 }
      name           = "22. Infanterie-Division"
      type           = infantry
      model          = 12
      strength       = 75
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 14500 id = 337 }
    name     = "15. Armee Reserve"
    location = 153
    leader   = 355
    division = {
      id             = { type = 14500 id = 368 }
      name           = "Pz. A.O.K. 5"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
      strength       = 75
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 316 }
      name           = "6. Infanterie-Division"
      type           = infantry
      model          = 12
      extra          = artillery
      brigade_model  = 11
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14500 id = 234 }
    name     = "Befehlshaber des Ersatzheer"
    location = 147
    division = {
      id             = { type = 14500 id = 71 }
      name           = "21. Luftwaffen-Feld-Division"
      type           = infantry
      model          = 12
      strength       = 55
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 14500 id = 314 }
    name     = "Befehlshaber des Ersatzheer"
    location = 152
    division = {
      id             = { type = 14500 id = 257 }
      name           = "11. Luftwaffen-Feld-Division"
      type           = infantry
      model          = 12
      strength       = 60
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 14500 id = 433 }
    name     = "Festungs-Kdr. Warschau"
    location = 232
    division = {
      id             = { type = 14500 id = 143 }
      name           = "Festungs-Kdr. Warschau"
      type           = garrison
      model          = 5
      strength       = 65
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14502 id = 149 }
    name     = "391. Sicherungs-Division"
    location = 242
    leader   = 223
    division = {
      id             = { type = 14500 id = 149 }
      name           = "391. Sicherungs-Division"
      type           = garrison
      model          = 5
      extra          = police
      brigade_model  = 2
      strength       = 56
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14501 id = 433 }
    name     = "286. Sicherungs-Division"
    location = 641
    division = {
      id             = { type = 14500 id = 91 }
      name           = "286. Sicherungs-Division"
      type           = garrison
      model          = 5
      extra          = police
      brigade_model  = 2
      strength       = 65
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14501 id = 48 }
    name     = "213. Sicherungs-Division"
    location = 597
    division = {
      id             = { type = 14500 id = 48 }
      name           = "213. Sicherungs-Division"
      type           = garrison
      model          = 5
      extra          = police
      brigade_model  = 2
      strength       = 65
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14501 id = 113 }
    name     = "403. Sicherungs-Division (Kursk)"
    location = 604
    division = {
      id             = { type = 14500 id = 113 }
      name           = "221. Sicherungs-Division"
      type           = garrison
      model          = 5
      extra          = police
      brigade_model  = 2
      strength       = 65
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14501 id = 112 }
    name     = "444. Sicherungs-Division"
    location = 636
    division = {
      id             = { type = 14500 id = 112 }
      name           = "444. Sicherungs-Division"
      type           = garrison
      model          = 5
      extra          = police
      brigade_model  = 2
      strength       = 65
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14501 id = 114 }
    name     = "454. Sicherungs-Division"
    location = 635
    division = {
      id             = { type = 14500 id = 114 }
      name           = "454. Sicherungs-Division"
      type           = garrison
      model          = 5
      extra          = police
      brigade_model  = 2
      strength       = 65
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14500 id = 50 }
    name     = "16. Armee"
    location = 566
    leader   = 136
    division = {
      id             = { type = 14500 id = 51 }
      name           = "A.O.K. 16"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 4
      strength       = 75
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 52 }
      name           = "201. Sicherungs-Division"
      type           = garrison
      model          = 5
      extra          = police
      brigade_model  = 2
      strength       = 40
      locked         = yes
    }
    division = {
      id             = { type = 14500 id = 53 }
      name           = "207. Sicherungs-Division"
      type           = garrison
      model          = 5
      extra          = police
      brigade_model  = 2
      strength       = 65
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14501 id = 117 }
    name     = "281. Sicherungs-Division"
    location = 270
    division = {
      id             = { type = 14500 id = 117 }
      name           = "281. Sicherungs-Division"
      type           = garrison
      model          = 5
      extra          = police
      brigade_model  = 2
      strength       = 40
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14501 id = 121 }
    name     = "285. Sicherungs-Division"
    location = 264
    division = {
      id             = { type = 14500 id = 121 }
      name           = "285. Sicherungs-Division"
      type           = garrison
      model          = 5
      extra          = police
      brigade_model  = 2
      strength       = 40
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14501 id = 715 }
    name     = "Russische Befreiungsarmee (VS-KONR)"
    location = 572
    leader   = 576
    division = {
      id             = { type = 14500 id = 715 }
      name           = "600. Russische Infanterie-Div."
      type           = infantry
      model          = 11
      strength       = 75
    }
    division = {
      id             = { type = 14500 id = 716 }
      name           = "650. Russische Infanterie-Div."
      type           = infantry
      model          = 11
      strength       = 75
    }
    division = {
      id             = { type = 14500 id = 717 }
      name           = "700. Russische Infanterie-Div."
      type           = infantry
      model          = 11
      strength       = 75
    }
  }

  navalunit = {
    id       = { type = 14500 id = 801 }
    name     = "Kriegsmarine"
    location = 147
    base     = 147
    division = {
      id             = { type = 14500 id = 802 }
      name           = "Schlesien"
      type           = battleship
      model          = 1
      extra1         = naval_anti_air_l
      extra2         = naval_fire_controll_l
      extra3         = naval_torpedoes_s
      brigade_model1 = 3
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division = {
      id             = { type = 14500 id = 803 }
      name           = "Gneisenau"
      type           = battlecruiser
      model          = 3
      extra1         = naval_anti_air_l
      extra2         = naval_fire_controll_l
      extra3         = naval_torpedoes_s
      extra4         = naval_radar_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 3
    }
    division = {
      id             = { type = 14500 id = 804 }
      name           = "Graf Zeppelin"
      type           = carrier
      model          = 2
      extra1         = cag
      brigade_model1 = 6
    }
    division = {
      id             = { type = 14500 id = 805 }
      name           = "Peter Strasser"
      type           = carrier
      model          = 3
      extra1         = cag
      brigade_model1 = 6
    }
    division = {
      id             = { type = 14500 id = 806 }
      name           = "Lützow"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      extra2         = naval_torpedoes_s
      brigade_model1 = 5
      brigade_model2 = 0
    }
    division = {
      id             = { type = 14500 id = 807 }
      name           = "Admiral Scheer"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      extra2         = naval_torpedoes_s
      brigade_model1 = 5
      brigade_model2 = 0
    }
    division = {
      id             = { type = 14500 id = 808 }
      name           = "Prinz Eugen"
      type           = heavy_cruiser
      model          = 5
      extra1         = floatplane
      extra2         = naval_torpedoes_s
      brigade_model1 = 5
      brigade_model2 = 0
    }
    division = {
      id             = { type = 14500 id = 809 }
      name           = "Admiral Hipper"
      type           = heavy_cruiser
      model          = 5
      extra1         = floatplane
      extra2         = naval_torpedoes_s
      brigade_model1 = 5
      brigade_model2 = 0
    }
    division = {
      id             = { type = 14500 id = 810 }
      name           = "Nürnberg"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 14500 id = 811 }
      name           = "Emden"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14500 id = 812 }
      name           = "Köln"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14500 id = 813 }
      name           = "1. Zerstörergeschwader"
      type           = destroyer
      model          = 6
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
    }
    division = {
      id             = { type = 14500 id = 814 }
      name           = "2. Zerstörergeschwader"
      type           = destroyer
      model          = 5
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      strength       = 20
    }
    division = {
      id             = { type = 14500 id = 815 }
      name           = "3. Zerstörergeschwader"
      type           = destroyer
      model          = 6
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      strength       = 20
    }
    division = {
      id             = { type = 14500 id = 816 }
      name           = "4. Zerstörergeschwader"
      type           = destroyer
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
    }
    division = {
      id             = { type = 14500 id = 817 }
      name           = "5. Zerstörergeschwader"
      type           = destroyer
      model          = 7
      extra1         = naval_anti_air_s
      brigade_model1 = 3
    }
    division = {
      id             = { type = 14500 id = 818 }
      name           = "6. Zerstörergeschwader"
      type           = destroyer
      model          = 7
      extra1         = naval_anti_air_s
      brigade_model1 = 3
      strength       = 60
    }
    division = {
      id             = { type = 14500 id = 819 }
      name           = "7. Zerstörergeschwader"
      type           = destroyer
      model          = 7
      extra1         = naval_anti_air_s
      brigade_model1 = 3
      strength       = 40
    }
    division = {
      id             = { type = 14500 id = 820 }
      name           = "8. Zerstörergeschwader"
      type           = destroyer
      model          = 7
      extra1         = naval_asw
      brigade_model1 = 3
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 821 }
      name           = "9. Zerstörergeschwader"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 822 }
      name           = "10. Zerstörergeschwader"
      type           = destroyer
      model          = 7
      extra1         = naval_asw
      brigade_model1 = 3
    }
    division = {
      id             = { type = 14500 id = 823 }
      name           = "1. Truppentransporterflottille"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14500 id = 824 }
      name           = "2. Truppentransporterflottille"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14500 id = 825 }
      name           = "3. Truppentransporterflottille"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14500 id = 826 }
      name           = "4. Truppentransporterflottille"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14500 id = 827 }
      name           = "5. Truppentransporterflottille"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14500 id = 828 }
      name           = "6. Truppentransporterflottille"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14500 id = 829 }
      name           = "7. Truppentransporterflottille"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14500 id = 830 }
      name           = "8. Truppentransporterflottille"
      type           = transport
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 14500 id = 831 }
    name     = "1. U Boot Flotte"
    location = 37
    base     = 37
    division = {
      id             = { type = 14500 id = 832 }
      name           = "1. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 833 }
      name           = "2. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 834 }
      name           = "3. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 835 }
      name           = "4. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 836 }
      name           = "5. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 837 }
      name           = "6. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 838 }
      name           = "7. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 839 }
      name           = "8. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 840 }
      name           = "9. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 841 }
      name           = "10. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
  }
  navalunit = {
    id       = { type = 14500 id = 842 }
    name     = "2. U Boot Flotte"
    location = 39
    base     = 39
    division = {
      id             = { type = 14500 id = 843 }
      name           = "11. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 844 }
      name           = "12. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 845 }
      name           = "13. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 846 }
      name           = "14. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 847 }
      name           = "15. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 848 }
      name           = "16. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 849 }
      name           = "17. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 850 }
      name           = "18. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 851 }
      name           = "19. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 852 }
      name           = "20. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
  }
  navalunit = {
    id       = { type = 14500 id = 853 }
    name     = "3. U Boot Flotte"
    location = 69
    base     = 69
    division = {
      id             = { type = 14500 id = 854 }
      name           = "21. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 855 }
      name           = "22. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 856 }
      name           = "23. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 857 }
      name           = "24. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 858 }
      name           = "25. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 859 }
      name           = "26. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 860 }
      name           = "27. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 861 }
      name           = "28. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 862 }
      name           = "29. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 863 }
      name           = "30. Unterseeboots-Division"
      type           = submarine
      model          = 7
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
  }
  navalunit = {
    id       = { type = 14500 id = 864 }
    name     = "4. U Boot Flotte"
    location = 152
    base     = 152
    division = {
      id             = { type = 14500 id = 865 }
      name           = "31. Unterseeboots-Division"
      type           = submarine
      model          = 6
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 866 }
      name           = "32. Unterseeboots-Division"
      type           = submarine
      model          = 6
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 867 }
      name           = "33. Unterseeboots-Division"
      type           = submarine
      model          = 6
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 868 }
      name           = "34. Unterseeboots-Division"
      type           = submarine
      model          = 6
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 869 }
      name           = "35. Unterseeboots-Division"
      type           = submarine
      model          = 6
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 870 }
      name           = "36. Unterseeboots-Division"
      type           = submarine
      model          = 6
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 871 }
      name           = "37. Unterseeboots-Division"
      type           = submarine
      model          = 6
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 872 }
      name           = "38. Unterseeboots-Division"
      type           = submarine
      model          = 6
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 873 }
      name           = "39. Unterseeboots-Division"
      type           = submarine
      model          = 6
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 874 }
      name           = "40. Unterseeboots-Division"
      type           = submarine
      model          = 6
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
  }
  navalunit = {
    id       = { type = 14500 id = 875 }
    name     = "5. U Boot Flotte"
    location = 226
    base     = 226
    division = {
      id             = { type = 14500 id = 876 }
      name           = "41. Unterseeboots-Division"
      type           = submarine
      model          = 6
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 877 }
      name           = "42. Unterseeboots-Division"
      type           = submarine
      model          = 6
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 878 }
      name           = "43. Unterseeboots-Division"
      type           = submarine
      model          = 6
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 879 }
      name           = "44. Unterseeboots-Division"
      type           = submarine
      model          = 6
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 880 }
      name           = "45. Unterseeboots-Division"
      type           = submarine
      model          = 6
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 881 }
      name           = "46. Unterseeboots-Division"
      type           = submarine
      model          = 6
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 882 }
      name           = "47. Unterseeboots-Division"
      type           = submarine
      model          = 6
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 883 }
      name           = "48. Unterseeboots-Division"
      type           = submarine
      model          = 6
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 884 }
      name           = "49. Unterseeboots-Division"
      type           = submarine
      model          = 6
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
    division = {
      id             = { type = 14500 id = 885 }
      name           = "50. Unterseeboots-Division"
      type           = submarine
      model          = 6
      extra1         = naval_torpedoes_s
      brigade_model1 = 0
      experience     = 60
    }
  }
  navalunit = {
    id       = { type = 10848 id = 5200 }
    name     = "Schwarzmeer-Flotte"
    location = 641
    base     = 641
    division = {
      id             = { type = 10848 id = 5201 }
      name           = "Kaiser Barbarossa"
      type           = battleship
      model          = 2
      extra1         = floatplane
      extra2         = naval_improved_hull_l
      extra3         = naval_fire_controll_l
      extra4         = naval_anti_air_l
      brigade_model1 = 4
      brigade_model2 = 0
      brigade_model3 = 0
      brigade_model4 = 0
    }
    division = {
      id             = { type = 10848 id = 8500 }
      name           = "von Bock"
      type           = heavy_cruiser
      model          = 5
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 10848 id = 8502 }
      name           = "von Leeb"
      type           = heavy_cruiser
      model          = 5
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 10848 id = 5202 }
      name           = "Paulus"
      type           = heavy_cruiser
      model          = 5
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 10848 id = 5203 }
      name           = "Hartmann"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 10848 id = 5204 }
      name           = "Barkhorn"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 10848 id = 5205 }
      name           = "Rall"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 10848 id = 5207 }
      name           = "1. Umgewandelt Zerstörergeschwader"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 10848 id = 5502 }
      name           = "2. Umgewandelt Zerstörergeschwader"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 10848 id = 5503 }
      name           = "3. Umgewandelt Zerstörergeschwader"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 10848 id = 5504 }
      name           = "4. Umgewandelt Zerstörergeschwader"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 10848 id = 5302 }
      name           = "1. Umgewandelt Unterseeboots-Division"
      type           = submarine
      model          = 4
    }
    division = {
      id             = { type = 10848 id = 6011 }
      name           = "2. Umgewandelt Unterseeboots-Division"
      type           = submarine
      model          = 4
    }
    division = {
      id             = { type = 10848 id = 5172 }
      name           = "3. Umgewandelt Unterseeboots-Division"
      type           = submarine
      model          = 4
    }
    division = {
      id             = { type = 10848 id = 5173 }
      name           = "4. Umgewandelt Unterseeboots-Division"
      type           = submarine
      model          = 4
    }
    division = {
      id             = { type = 10848 id = 6012 }
      name           = "5. Umgewandelt Unterseeboots-Division"
      type           = submarine
      model          = 4
    }
  }

  airunit = { 
    id       = { type = 14500 id = 600 }
    name     = "Luftflotte Reich"
    location = 163
    base     = 163
    division = {
      id             = { type = 14500 id = 601 }
      name           = "Jagdgeschwader 300"
      type           = interceptor
      model          = 12
      strength       = 80
    }
    division = {
      id             = { type = 14500 id = 602 }
      name           = "Jagdgeschwader 301"
      type           = multi_role
      model          = 9
      strength       = 80
    }
    division = {
      id             = { type = 14500 id = 603 }
      name           = "Jagdgeschwader 400"
      type           = interceptor
      model          = 12
      strength       = 80
    }
    division = {
      id             = { type = 14500 id = 604 }
      name           = "Kampfgeschwader 100"
      type           = tactical_bomber
      model          = 10
      extra          = escort
      brigade_model  = 2
      strength       = 80
    }
    division = {
      id             = { type = 14500 id = 605 }
      name           = "Kampfgeschwader 200"
      type           = tactical_bomber
      model          = 9
      extra          = escort
      brigade_model  = 2
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 606 }
      name           = "Nachtjagdgeschwader 1"
      type           = multi_role
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 607 }
      name           = "Nachtjagdgeschwader 2"
      type           = multi_role
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 608 }
      name           = "Nachtjagdgeschwader 3"
      type           = multi_role
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 609 }
      name           = "Nachtjagdgeschwader 4"
      type           = multi_role
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 610 }
      name           = "Nachtjagdgeschwader 5"
      type           = multi_role
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 611 }
      name           = "Nachtjagdgeschwader 6"
      type           = multi_role
      model          = 9
      strength       = 25
    }
    division = {
      id             = { type = 14500 id = 612 }
      name           = "Nachtjagdgeschwader 11"
      type           = multi_role
      model          = 9
      strength       = 50
    }
    division = {
      id             = { type = 14500 id = 613 }
      name           = "Nachtjagdgeschwader 100"
      type           = multi_role
      model          = 9
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 14500 id = 614 }
    name     = "Luftflotte I"
    location = 269
    base     = 269
    division = {
      id             = { type = 14500 id = 615 }
      name           = "JG 54 'Grünherz'"
      type           = interceptor
      model          = 12
      strength       = 80
    }
    division = {
      id             = { type = 14500 id = 616 }
      name           = "Transportgeschwader 1"
      type           = transport_plane
      model          = 4
      extra          = escort
      brigade_model  = 4
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 14500 id = 617 }
    name     = "Luftflotte II"
    location = 189
    base     = 189
    division = {
      id             = { type = 14500 id = 618 }
      name           = "Sturzkampfgeschwader 3"
      type           = cas
      model          = 5
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 14500 id = 619 }
    name     = "Luftflotte III"
    location = 122
    base     = 122
    division = {
      id             = { type = 14500 id = 620 }
      name           = "KG 51 'Edelweiß'"
      type           = multi_role
      model          = 9
      strength       = 40
    }
    division = {
      id             = { type = 14500 id = 621 }
      name           = "Lehrgeschwader 1"
      type           = tactical_bomber
      model          = 9
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 622 }
      name           = "KG 53 'Legion Condor'"
      type           = strategic_bomber
      model          = 9
      extra          = escort
      brigade_model  = 4
      strength       = 65
    }
  }
  airunit = { 
    id       = { type = 14500 id = 623 }
    name     = "Luftflotte III"
    location = 138
    base     = 138
    division = {
      id             = { type = 14500 id = 624 }
      name           = "JG 1 'Oesau'"
      type           = multi_role
      model          = 9
      strength       = 80
    }
    division = {
      id             = { type = 14500 id = 625 }
      name           = "Jagdgeschwader 4"
      type           = interceptor
      model          = 12
      strength       = 80
    }
    division = {
      id             = { type = 14500 id = 626 }
      name           = "JG 53 'Pik As'"
      type           = interceptor
      model          = 12
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 627 }
      name           = "JG 77 'Herz As'"
      type           = interceptor
      model          = 12
      strength       = 80
    }
    division = {
      id             = { type = 14500 id = 628 }
      name           = "KG 2 'Holzhammer'"
      type           = tactical_bomber
      model          = 9
      extra          = escort
      brigade_model  = 4
      strength       = 45
    }
    division = {
      id             = { type = 14500 id = 629 }
      name           = "Kampfgeschwader 66"
      type           = strategic_bomber
      model          = 6
      extra          = escort
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 630 }
      name           = "Kampfgeschwader 76"
      type           = strategic_bomber
      model          = 6
      extra          = escort
      brigade_model  = 3
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 14500 id = 631 }
    name     = "Luftflotte III"
    location = 145
    base     = 145
    division = {
      id             = { type = 14500 id = 632 }
      name           = "Jagdgeschwader 11"
      type           = interceptor
      model          = 12
      strength       = 80
    }
    division = {
      id             = { type = 14500 id = 633 }
      name           = "Sturzkampfgeschwader 4"
      type           = cas
      model          = 5
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 634 }
      name           = "Transportgeschwader 4"
      type           = transport_plane
      model          = 4
      extra          = escort
      brigade_model  = 4
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 14500 id = 635 }
    name     = "Luftflotte III"
    location = 134
    base     = 134
    division = {
      id             = { type = 14500 id = 636 }
      name           = "JG 2 'Richthofen'"
      type           = multi_role
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 637 }
      name           = "JG 3 'Udet'"
      type           = interceptor
      model          = 12
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 638 }
      name           = "JG 26 'Schlageter'"
      type           = multi_role
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 639 }
      name           = "Jagdgeschwader 27"
      type           = interceptor
      model          = 12
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 14500 id = 640 }
    name     = "Luftflotte IV"
    location = 195
    base     = 195
    division = {
      id             = { type = 14500 id = 641 }
      name           = "Jagdgeschwader 76"
      type           = interceptor
      model          = 12
      strength       = 80
    }
    division = {
      id             = { type = 14500 id = 642 }
      name           = "KG 4 'General Wever'"
      type           = tactical_bomber
      model          = 9
      extra          = escort
      brigade_model  = 4
      strength       = 80
    }
    division = {
      id             = { type = 14500 id = 643 }
      name           = "Schlachtgeschwader 2"
      type           = multi_role
      model          = 9
      strength       = 80
    }
    division = {
      id             = { type = 14500 id = 644 }
      name           = "Schnellkampfgeschwader 10"
      type           = multi_role
      model          = 9
      strength       = 80
    }
    division = {
      id             = { type = 14500 id = 645 }
      name           = "Transportgeschwader 2"
      type           = transport_plane
      model          = 4
      extra          = escort
      brigade_model  = 4
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 14500 id = 646 }
    name     = "Luftflotte V"
    location = 495
    base     = 495
    division = {
      id             = { type = 14500 id = 647 }
      name           = "JG 5 'Eismeer'"
      type           = interceptor
      model          = 12
      strength       = 80
    }
    division = {
      id             = { type = 14500 id = 648 }
      name           = "ZG 26 'Horst Wessel'"
      type           = multi_role
      model          = 9
      strength       = 80
    }
    division = {
      id             = { type = 14500 id = 649 }
      name           = "KG 26 'Löwen'"
      type           = strategic_bomber
      model          = 9
      extra          = escort
      brigade_model  = 4
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 14500 id = 650 }
    name     = "Luftflotte VI"
    location = 184
    base     = 184
    division = {
      id             = { type = 14500 id = 651 }
      name           = "JG 51 'Mölders'"
      type           = interceptor
      model          = 12
      strength       = 80
    }
    division = {
      id             = { type = 14500 id = 652 }
      name           = "Jagdgeschwader 52"
      type           = interceptor
      model          = 12
      strength       = 80
    }
    division = {
      id             = { type = 14500 id = 653 }
      name           = "Schlachtgeschwader 1"
      type           = multi_role
      model          = 9
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 14500 id = 654 }
    name     = "Luftflotte VI"
    location = 232
    base     = 232
    division = {
      id             = { type = 14500 id = 655 }
      name           = "Schlachtgeschwader 3"
      type           = multi_role
      model          = 9
      strength       = 80
    }
    division = {
      id             = { type = 14500 id = 656 }
      name           = "Sturzkampfgeschwader 77"
      type           = cas
      model          = 5
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 14500 id = 657 }
    name     = "1. V2 Batterie"
    location = 43
    base     = 43
    division = {
      id             = { type = 14500 id = 658 }
      name           = "1. V2 Batterie"
      type           = flying_rocket
      model          = 0
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 14500 id = 659 }
    name     = "2. V2 Batterie"
    location = 43
    base     = 43
    division = {
      id             = { type = 14500 id = 660 }
      name           = "2. V2 Batterie"
      type           = flying_rocket
      model          = 0
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 14500 id = 661 }
    name     = "3. V2 Batterie"
    location = 43
    base     = 43
    division = {
      id             = { type = 14500 id = 662 }
      name           = "3. V2 Batterie"
      type           = flying_rocket
      model          = 0
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 14500 id = 663 }
    name     = "4. V2 Batterie"
    location = 115
    base     = 115
    division = {
      id             = { type = 14500 id = 664 }
      name           = "4. V2 Batterie"
      type           = flying_rocket
      model          = 0
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 14500 id = 665 }
    name     = "5. V2 Batterie"
    location = 122
    base     = 122
    division = {
      id             = { type = 14500 id = 666 }
      name           = "5. V2 Batterie"
      type           = flying_rocket
      model          = 0
      strength       = 100
    }
  }

  landdivision = { dormant = yes id = { type = 14500 id = 32 } name = "1. Volksgrenadier-Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 47 } name = "2. Volksgrenadier-Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 82 } name = "3. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 83 } name = "4. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 88 } name = "5. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 89 } name = "6. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 90 } name = "7. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 101 } name = "8. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 102 } name = "9. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 105 } name = "10. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 106 } name = "11. Volksgrenadier-Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 129 } name = "12. Volksgrenadier-Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 137 } name = "13. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 138 } name = "14. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 141 } name = "15. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 172 } name = "16. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 173 } name = "17. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 174 } name = "18. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 176 } name = "19. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 224 } name = "20. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 345 } name = "21. Volksgrenadier-Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 347 } name = "22. Volksgrenadier-Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 350 } name = "23. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 351 } name = "24. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 358 } name = "25. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 359 } name = "26. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 361 } name = "27. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 362 } name = "28. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 366 } name = "29. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 370 } name = "30. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 387 } name = "41. Volksgrenadier-Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 388 } name = "42. Volksgrenadier-Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 390 } name = "43. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 391 } name = "44. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 394 } name = "45. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 403 } name = "46. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 404 } name = "47. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 409 } name = "48. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 411 } name = "49. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 415 } name = "50. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 416 } name = "61. Volksgrenadier-Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 428 } name = "62. Volksgrenadier-Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 431 } name = "63. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 706 } name = "64. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 702 } name = "65. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
  landdivision = { dormant = yes id = { type = 14500 id = 704 } name = "66. Volksgrenadier Division"  type = infantry model = 12 strength = 65 max_strength = 70 } 
}
