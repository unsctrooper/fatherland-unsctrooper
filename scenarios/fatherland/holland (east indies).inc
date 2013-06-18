 
 ############################## 
 # Country definition for HOL # 
 ############################## 
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 { 
 tag                    = HOL
 ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }	
   capital                = 1647
   manpower               = 25 
   # Resource Reserves 
energy                 = 1740
metal                  = 870
rare_materials         = 435
   oil                    = 500 
   supplies               = 500 
   money                  = 40 
   transports             = 250 
   escorts                = 21 
  diplomacy =
  { relation = { tag = BEL value = 200 }
    relation = { tag = CAN value = 80 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 200 }
    relation = { tag = GER value = -200 }
    relation = { tag = ITA value = -200 }
    relation = { tag = JAP value = -150 }
    relation = { tag = MEX value = 25 }
    relation = { tag = SWE value = 100 }
    relation = { tag = USA value = 70 }
  } 
   SpyInfo                = {  country = "HOL" NumberOfSpies = 6  } 
  
   nationalprovinces      = { 125 122 123 118 119 124 120 121 1647 } 
   
   ownedprovinces         = {  
	#Netherlands Antilles + Suriname
    1762  1999  1761 
	#East Indonesia
	1643 1644 1645 1615 1616 1619 1618 1620 1659 1660 1657 1658
	#Medan
	1642
	#RMS
	1622 1621
	#Central Java
	1647 1651 1649 1650
	#Indonesia
	# 1639 1640 1635 1634 1637 1636 1641 1638  1648     1654 1653 1652 1655 1656  
	#Borneo
	1629 1631 1630 1633 1632 1628 1623 1627
	#West Papua
	1599 1600 1601 1595 1596 1594 1598 1597 
} 
   controlledprovinces         = {  
	#Netherlands Antilles + Suriname
    1762  1999  1761 
	#East Indonesia
	1643 1644 1645 1615 1616 1619 1618 1620 1659 1660 1657 1658
	#Medan
	1642
	#RMS
	1622 1621
	#Central Java
	1647 1651 1649 1650
	#Indonesia
	#1639 1640 1635 1634 1637 1636 1641 1638  1648     1654 1653 1652 1655 1656          
	#Borneo
	1629 1631 1630 1633 1632 1628 1623 1627
	#West Papua
	1599 1600 1601 1595 1596 1594 1598 1597 }
	
	claimedprovinces = { 1761 1762 1999 #Netherland Antilles + Guyana (Suriname) 
	}
	
   # Semi-Major Tech '36 
   # Group C 1936 techs 
   # ###################### 
techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1130 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1280 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1410 1420 1470 1480 1530 1540 1560 1570 1580 1590 1600 1610 1620 1670 1680 1690 1830 1840 1850 1860 1870 1880 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2030 2040 2050 2060 2070 2080 2090 2100 2110 2120 2126 2130 2140 2150 2160 2170 2180 2190 2220 2230 2240 2250 2260 2270 2290 2300 2310 2320 2330 2340 2360 2370 2380 2400 2410 2420 2430 2450 2460 2470 2480 2490 2510 2520 2530 2620 2630 2640 2646 2650 2800 2810 2820 2850 2860 2870 2880 2900 2910 2920 2930 2940 2970 2980 3010 3020 3030 3040 3050 3060 3070 3080 3110 3120 3130 3140 3150 3160 3170 3210 3220 3230 3240 3250 3260 3270 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 3480 3490 3510 3520 3530 3540 3550 3560 3610 3620 3630 3640 3650 3660 3670 3680 3710 3720 3730 3736 3740 3750 3760 3770 3810 3820 3830 3840 3900 3910 3920 3930 4010 4020 4030 4040 4050 4060 4070 4080 4090 4100 4110 4116 4120 4130 4140 4150 4160 4170 4180 4190 4200 4210 4220 4230 4240 4246 4250 4260 4270 4280 4290 4300 4310 4320 4330 4340 4350 4400 4450 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4860 4900 4910 4920 4930 4940 4950 5010 5020 5030 5040 5050 5060 5070 5080 5090 5100 5110 5130 5140 5150 5160 5170 5180 5190 5200 5210 5220 5230 5240 5310 5316 5320 5326 5327 5330 5340 5350 5360 5370 5380 5390 5400 5410 5416 5417 5420 5426 5430 5440 5450 5466 5470 5480 5490 5500 5510 5520 5560 5600 5610 5620 5630 5640 5650 5700 5710 5800 5810 5820 5830 5920 5930 5940 5950 5960 5970 5980 5990 6030 6110 6120 6130 6140 6170 6200 6500 6510 6530 6540 6560 6580 6610 6620 6630 6640 6650 6660 6670 6680 6900 6910 7010 7020 7100 7110 7120 7140 7550 7560 7570 7580 7590 7600 7610 7620 7630 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8220 8230 8240 8250 8500 8510 8520 8550 8560 8570 8600 8900 8910 8920 8930 8940 8950 8960 8970 8980 9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 9250 9260 9310 9320 9330 9340 9350 9360 9370 9380 9390 9400 9410 9420 9430 9440 9450 9460 12000 12010 12020 12040 12050 12060 12100 12110 12120 12130 12140 12150 13060 13070 13080 14000 14010 14020 14030 14040 14070 15000 15100 15140 15180 15500 21180 21190 21200 22910 22920 22930 27000 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 53020 53040 54010 54020 54030 81050 81650 81700 81710 81720 81730 81740 81750 81760 81850 81860 81870 81880 81890 81900 81910 82100 82300 82310 82320 82330 82500 82510 82520 199100 199110 199130 199140 199150 }
inventions = { 3000011 3000012 3000015 3000016 3000017 3000018 3000027 3000028 3000031 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 8 
     political_left    = 4 
     free_market       = 9 
     freedom           = 10 
     professional_army = 5 
     defense_lobby     = 6 
     interventionism   = 2 
    } 
  headofstate            = {  type = 9 id = 15001  } 
  headofgovernment       = {  type = 9 id = 15021  } 
  foreignminister        = {  type = 9 id = 15038  } 
  armamentminister       = {  type = 9 id = 15051  } 
  ministerofsecurity     = {  type = 9 id = 15078  } 
  ministerofintelligence = {  type = 9 id = 15101  } 
  chiefofstaff           = {  type = 9 id = 15007  } 
  chiefofarmy            = {  type = 9 id = 15117  } 
  chiefofnavy            = {  type = 9 id = 15009  } 
  chiefofair             = {  type = 9 id = 15127  }

   landunit = 
   {  id       = {  type = 10100 id = 1  } 
     location = 1647 
     name     = "Koninklijk Nederlands Indisch Leger" 
     Division = 
     {  id   = {  type = 10100 id = 2  } 
       name = "Ie Divisie" 
	   strength     = 100
       type = infantry 
	   model = 11 
	   extra    = artillery
       brigade_model = 10
      } 
     Division = 
     {  id   = {  type = 10100 id = 3  } 
       name = "IIe Divisie" 
	   strength     = 100
       type = infantry
		model = 11 	
	   extra    = artillery
       brigade_model = 10		
      } 
     Division = 
     {  id   = {  type = 10100 id = 4  } 
       name = "IIIe Divisie" 
	   strength     = 100
       type = infantry 
	   model = 11 
	   extra    = artillery
       brigade_model = 10
      } 
    } 
	   landunit = 
   {  id       = {  type = 10100 id = 8  } 
     location = 1642
     name     = "K.N.I.L. Sumatra" 
     Division = 
     {  id   = {  type = 10100 id = 9  } 
       name = "IVe Divisie" 
	   strength     = 30
       type = infantry 
	   model = 11 
	   extra    = artillery
       brigade_model = 10
      } 
    } 
   navalunit = 
   {  id       = {  type = 10100 id = 5  } 
     location = 1647
     base     = 1647 
     name     = "Koninklijke Vloot" 
     Division = 
     {  id    = {  type = 10100 id = 6  } 
       name  = "2e Torpedobootjager Smaldeel" 
       type  = destroyer 
       model = 4
      } 
     Division = 
     {  id   = {  type = 10100 id = 7  } 
       name = "4e Transport Smaldeel" 
       type = transport 
	   model = 1 
      } 
    } 
	
	
   navalunit = 
   {  id       = {  type = 18500 id = 17  } 
     location = 1511 
     base     = 1511 
     name     = "Koninklijke Vloot" 
     Division = 
     {  id    = {  type = 18500 id = 2002  } 
       name  = "HrMs De Zeven Provinciën" 
       type  = light_cruiser 
       model = 5 
      } 
     Division = 
     {  id    = {  type = 18500 id = 2003  } 
       name  = "HrMs Eendracht" 
       type  = light_cruiser 
       model = 5 
      } 
     Division = 
     {  id    = {  type = 18500 id = 2000  } 
       name  = "HrMs Tromp" 
       type  = light_cruiser 
       model = 4 
      }
     Division = 
     {  id    = {  type = 18500 id = 2001  } 
       name  = "HrMs Jacob van Heemskerck" 
       type  = light_cruiser 
       model = 4 
      } 
     Division = 
     {  id    = {  type = 18500 id = 20  } 
       name  = "HrMs Sumatra" 
       type  = light_cruiser 
       model = 2
      } 
     Division = 
     {  id    = {  type = 18500 id = 21  } 
       name  = "1e Torpedobootjager Smaldeel" 
       type  = destroyer 
       model = 4
      }  
     Division = 
     {  id   = {  type = 18500 id = 23  } 
       name = "1e Transport Smaldeel" 
       type = transport 
	   model = 1 
      } 
     Division = 
     {  id   = {  type = 18500 id = 24  } 
       name = "2e Transport Smaldeel" 
       type = transport 
	   model = 1 
      } 
     Division = 
     {  id   = {  type = 18500 id = 25  } 
       name = "3e Transport Smaldeel" 
       type = transport 
	   model = 1 
      } 
    } 

	navalunit = { 
		id = { type = 18500 id = 1381 } 
		name = "3e Koninklijke Vloot" 
		location = 1511 
		base = 1511 
     Division = 
     {  id    = {  type = 18500 id = 39  } 
       name  = "1e Onderzeeboot Smaldeel" 
       type  = submarine 
       model = 2 
      } 
     Division = 
     {  id    = {  type = 18500 id = 40  } 
       name  = "2e Onderzeeboot Smaldeel" 
       type  = submarine 
       model = 2 
      } 
     Division = 
     {  id    = {  type = 18500 id = 41  } 
       name  = "3e Onderzeeboot Smaldeel" 
       type  = submarine 
       model = 3 
      } 
    }
  } 
 
