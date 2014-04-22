#####################
# Country definition for UK
# Review by Pako
#####################
 
##################### 
# Country main data # 
##################### 
  
country = {  
	tag = ENG 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
	capital = 29
	manpower = 135
	transports = 1600
	escorts = 150
	belligerence = 0
	
	# resources 
	energy = 5000
	metal = 5000
	rare_materials = 2500
	oil = 500
	supplies = 10000
	money = 500
	industrial_modifier = 1.05 # Marshall Plan boost simulation : 5%
	
	# spying	
	SpyInfo = { country = "ENG" NumberOfSpies = 12  } 
	SpyInfo = { country = "SPA" NumberOfSpies = 3 }
	SpyInfo = { country = "SOV" NumberOfSpies = 5 }
	SpyInfo = { country = "GER" NumberOfSpies = 7 }
	SpyInfo = { country = "HUN" NumberOfSpies = 2 }
	SpyInfo = { country = "TUR" NumberOfSpies = 10 }
	SpyInfo = { country = "SWE" NumberOfSpies = 8 }
	SpyInfo = { country = "ITA" NumberOfSpies = 6 }
	
	# policy and government	
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 10
		political_left = 8
		freedom = 10
		free_market = 8
		professional_army = 3
		defense_lobby = 6
		interventionism = 4
	}
	dissent = 4
	headofstate = { type = 9 id = 10014 }
	headofgovernment = { type = 9 id = 10019 }
	foreignminister = { type = 9 id = 10024 }
	armamentminister = { type = 9 id = 10044 }
	ministerofsecurity = { type = 9 id = 10065 }
	ministerofintelligence = { type = 9 id = 10080 }
	chiefofstaff = { type = 9 id = 10097 }
	chiefofarmy = { type = 9 id = 10106 }
	chiefofnavy = { type = 9 id = 10111 }
	chiefofair = { type = 9 id = 10118 }
	
	dormant_ministers = { 10001 10011 10002 10004 10005 10058 10006 10007 10008 10101 10102 10009 10109 10010 10017 10022 10091 10103 10105 10119 10059 10131 10141 10142 10093 10112 10039 }
	dormant_leaders = {  10083 10313  }
	
	# foreign diplomacy
	diplomacy = { 
		# Neutral AFG ARG BOL BRA CHI TRA DEN ECU IRE MEX MTN PAR PER POR SYR SWE URU PAK
		relation = { tag = AFG value = -75 }
		relation = { tag = CHI value = 80 }
		relation = { tag = SAU value = 100 guaranteed = { day = 01 month = january year = 1948 } }
		relation = { tag = SYR value = 30 }	
		relation = { tag = PAK value = -50 }
		relation = { tag = IND value = -50 }
		relation = { tag = ARG value = -20 }
		relation = { tag = URU value = 10 }
		relation = { tag = BOL value = 10 }
		relation = { tag = BRA value = -30 }
		relation = { tag = PAR value = 0 }
		relation = { tag = MEX value = 10 }
		relation = { tag = CHL value = 30 }
		relation = { tag = ECU value = 20 }			
		relation = { tag = TUR value = 50 guaranteed = { day = 01 month = january year = 1948 } }
		relation = { tag = IRE value = 50 }
		relation = { tag = TRA value = -100 } # Cossacks
		relation = { tag = POR value = 100 guaranteed = { day = 01 month = january year = 1948 } }
		relation = { tag = SPA value = -50 }
		relation = { tag = SCH value = 50 guaranteed = { day = 01 month = january year = 1948 } }
		relation = { tag = FRA value = -50 }	
		relation = { tag = SWE value = -10 }
		
		# Allies ENG USA U01 AST NZL CAN SAF BEL EGY IRQ JAP NEP NIC OMN
		relation = { tag = AST value = 200 access = yes guaranteed = { day = 01 month = january year = 1948 } }
		relation = { tag = BEL value = 200 access = yes }
		relation = { tag = BHU value = 200 access = yes guaranteed = { day = 01 month = january year = 1948 } }
		relation = { tag = CAN value = 200 access = yes guaranteed = { day = 01 month = january year = 1948 } }
		relation = { tag = EGY value = 50 }
		relation = { tag = ETH value = 50 }
		relation = { tag = U01 value = 200 access = yes guaranteed = { day = 01 month = january year = 1948 } } # Free France
		relation = { tag = HOL value = 200 access = yes guaranteed = { day = 01 month = january year = 1948 } }
		relation = { tag = IRQ value = 50 access = yes }	
		relation = { tag = NEP value = 200 access = yes guaranteed = { day = 01 month = january year = 1948 } }
		relation = { tag = NIC value = 200 }
		relation = { tag = NZL value = 200 access = yes guaranteed = { day = 01 month = january year = 1948 } }
		relation = { tag = OMN value = 50 access = yes }	
		relation = { tag = SAF value = 150 access = yes }
		relation = { tag = YEM value = 50 access = yes }
		relation = { tag = JAP value = 125 access = yes guaranteed = { day = 01 month = january year = 1948 } }
		relation = { tag = JOR value = 50 access = yes }
		
		# Comintern SOV CHC MON and Soviet Area (SIB,U57,U59,UPE)
		relation = { tag = SOV value = 50 }
		relation = { tag = CHC value = -100 }
		relation = { tag = MON value = 0 }
		relation = { tag = SIB value = 80 } # Siberia
		relation = { tag = U57 value = 65 } # Far Eastern Republic
		relation = { tag = U59 value = 10 } # Russian Empire
		relation = { tag = UPE value = -50 } # Turkestan		
		
		# Axis GER SLO ITA BUL CRO FIN MTN U44 UTC U46 U45 U41 U40 U42 WLL FLA HUN ROM SER BLR U58
		relation = { tag = ITA value = -180 }
		relation = { tag = CRO value = -120 }
		relation = { tag = HUN value = -180 }
		relation = { tag = ROM value = -150 }
		relation = { tag = BUL value = -175 }
		relation = { tag = FIN value = 20 }
		relation = { tag = MTN value = -100 }
		relation = { tag = BLR value = -200 }
		
		# Puppets inside the Axis
		relation = { tag = SLO value = -100 }
		relation = { tag = SER value = -100  }
		relation = { tag = UTC value = -150 }  # Lokot Republic
		relation = { tag = U58 value = -200 } # SS
		
		# Puppets outside the Axis
		relation = { tag = DEN value = -100}
		
}
  
	# provinces setup
    nationalprovinces = {  29 9 5 4 6 7 12 11 10 36 35 13 14 15 18 17 16 24 25 28  
					  19 26 27 20 23 22 21 8 }
		
  claimedprovinces = {  
   # Palestine
   1172 1011 1010 1008 1009 1013 
   # Kuweit
   1041
   # Hong Kong
   1371 
   }

   ownedprovinces         = {  
   
   #Great Britain
   29 9 5 4 6 7 12 11 10 36 35 13 14 15 18 17 16 24 25 28 19 26 27 20 23 22 21 8
   
     #British Empire 
	 429 348 1011 1010  387 388 1773 1760 1772 1774 1753 1754 1755 1771 1038 2086 1757 1770 1763 1764 1769 1758 2045 1998 1997 1782 1766 1759 900 874 979 964 937 952 955 956 
   939 929 940 941 930 931 803 804 813 814 805 832 811 812 843 841 842 848 844 807 810 806 808 809 932 859 860 871 869 870 866 867 933 861 
   863 864 997 849 850 851 938 993 896           1039 1510 1511   1509 1728 1729      
   1749 1746  1172 1008 1009   1053 1051 840 998 1611 877 1041 1013    1613 1614   845  852 
        839 865 862 936 934 935 954 953 868 2 815 816 817 834 835 836 837 838            
		#818 819 820 821 822 823 824 825 826 827 828 829 830 831 Ethiopia 

		
750 751 752 753 754 755 756 757 758 759 760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777 #Libya 
 1371 #Hong Kong
 1432 1435 1436 1437 1438 1624 1625 1626 1433 1434 #Malaya & Singapore 
 1588 1589  1593    1590 1591 1592 1682 1678 1679 1680 1750 1687 #Pacific
}
 
   controlledprovinces    = {   #Great Britain
   29 9 5 4 6 7 12 11 10 36 35 13 14 15 18 17 16 24 25 28 19 26 27 20 23 22 21 8
   
  #British Empire 
	 429 348 1011 1010  387 388 1773 1760 1772 1774 1753 1754 1755 1771 1038 2086 1757 1770 1763 1764 1769 1758 2045 1998 1997 1782 1766 1759 900 874 979 964 937 952 955 956 
   939 929 940 941 930 931 803 804 813 814 805 832 811 812 843 841 842 848 844 807 810 806 808 809 932 859 860 871 869 870 866 867 933 861 
   863 864 997 849 850 851 938 993 896           1039 1510 1511   1509 1728 1729      
   1749 1746  1172 1008 1009   1053 1051 840 998 1611 877 1041 1013    1613 1614   845  852 
        839 865 862 936 934 935 954 953 868 2 815 816 817 834 835 836 837 838            
		#818 819 820 821 822 823 824 825 826 827 828 829 830 831 Ethiopia
		
750 751 752 753 754 755 756 757 758 759 760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777 #Libya  
 1371 #Hong Kong
 1432 1435 1436 1437 1438 1624 1625 1626  1433 1434 #Malaya & Singapore
 1588 1589  1593    1590 1591 1592 1682 1678 1679 1680 1750 1687 # Pacific
		} 
						
	
	techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1130 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1280 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1410 1420 1470 1480 1530 1540 1560 1570 1580 1590 1600 1610 1620 1670 1680 1690 1700 1830 1840 1850 1860 1870 1880 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2030 2040 2050 2060 2070 2080 2090 2100 2110 2120 2126 2130 2140 2150 2160 2170 2180 2190 2220 2230 2240 2250 2260 2270 2290 2300 2310 2320 2330 2340 2360 2370 2380 2400 2410 2420 2430 2450 2460 2470 2480 2490 2510 2520 2530 2620 2630 2640 2646 2650 2800 2810 2820 2850 2860 2870 2880 2900 2910 2920 2930 2940 2970 2980 3010 3020 3030 3040 3050 3060 3070 3080 3110 3120 3130 3140 3150 3160 3170 3210 3220 3230 3240 3250 3260 3270 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 3480 3490 3510 3520 3530 3540 3550 3560 3610 3620 3630 3640 3650 3660 3670 3680 3710 3720 3730 3736 3740 3750 3760 3770 3780 3810 3820 3830 3840 3900 3910 3920 3930 4010 4020 4030 4040 4050 4060 4070 4080 4090 4100 4110 4116 4120 4130 4140 4150 4160 4170 4180 4190 4200 4210 4220 4230 4240 4246 4250 4260 4270 4280 4290 4300 4310 4320 4330 4340 4350 4400 4450 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4860 4900 4910 4920 4930 4940 4950 4960 5010 5020 5030 5040 5050 5060 5070 5080 5090 5100 5110 5130 5140 5150 5160 5170 5180 5190 5200 5210 5220 5230 5240 5310 5316 5320 5326 5327 5330 5340 5350 5360 5370 5380 5390 5400 5410 5416 5417 5420 5426 5430 5440 5450 5466 5470 5480 5490 5560 5600 5610 5620 5630 5640 5650 5700 5710 5800 5810 5820 5830 5920 5930 5940 5950 5960 5970 5980 5990 6030 6110 6120 6130 6140 6170 6200 6500 6510 6530 6540 6560 6580 6610 6620 6630 6640 6650 6660 6670 6680 6900 6910 7010 7020 7100 7110 7120 7140 7150 7550 7560 7570 7580 7590 7600 7610 7620 7630 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8220 8230 8240 8250 8260 8500 8510 8520 8550 8560 8570 8600 8900 8910 8920 8930 8940 8950 8960 8970 8980 9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 9250 9260 9310 9320 9330 9340 9350 9360 9370 9380 9390 9400 9410 9420 9430 9440 9450 9460 12000 12010 12020 12040 12050 12060 12100 12110 12120 12130 12140 12150 12160 13060 13070 13080 14000 14010 14020 14030 14040 14070 15000 15010 15060 15100 15140 15180 15500 21180 21190 21200 22910 22920 22930 27000 27010 27070 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 53020 53040 54010 54020 54030 81050 81060 81650 81700 81710 81720 81730 81740 81750 81760 81850 81860 81870 81880 81890 81900 81910 82100 82110 82300 82310 82320 82330 82500 82510 82520 199100 199110 199130 199140 199150 
	
	13390 3890
	
	# Industry Nuclear (possible research by event)
	5470 5480 5490 5500 5510 # 5520 5530 5540
	# Secret Weapons Nuclear(possible research by event)
	# 7170 7180 7190 16010	
	
	}
	
	inventions = { 3000011 3000012 3000015 3000016 3000017 3000018 3000019 3000020 3000027 3000028 3000031 }

  
	landunit = {
		id = { type = 30251 id = 1 }
		name = "I Corps"
		location = 15
		division = {
			type = motorized
			model = 3
			id = { type = 30254 id = 1 }
			name = "3rd Infantry Division"
			extra = engineer
			brigade_model = 5
		}
		division = {
			type = motorized
			model = 3
			id = { type = 30254 id = 2 }
			name = "49th (West Riding) Infantry Division"
			extra = sp_artillery
			brigade_model = 3
		}
		division = {
			type = motorized
			model = 3
			id = { type = 30254 id = 3 }
			name = "53rd (Welsh) Infantry Division"
			extra = artillery
			brigade_model = 11
		}
		division = {
			type = motorized
			model = 3
			id = { type = 30254 id = 4 }
			name = "52nd (Lowland) Infantry Division"
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = motorized
			model = 3
			id = { type = 30254 id = 5 }
			name = "Guards Infantry Division"
			extra = light_armor_brigade
			brigade_model = 7
		}
				division = {
			type = motorized
			model = 3
			id = { type = 30254 id = 35 }
			name = "13th Infantry Division"
			extra = sp_artillery
			brigade_model = 3
		}
		division = {
			type = motorized
			model = 3
			id = { type = 30254 id = 36 }
			name = "51rd Infantry Division"
			extra = artillery
			brigade_model = 11
		}
		division = {
			type = motorized
			model = 3
			id = { type = 30254 id = 37 }
			name = "61nd Infantry Division"
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = motorized
			model = 3
			id = { type = 30254 id = 38 }
			name = "6th Infranty Division"
			extra = light_armor_brigade
			brigade_model = 7
		}
	}
	landunit = {
		id = { type = 30251 id = 11 }
		name = "Paratroop Division"
		location = 7
		division = {
			type = paratrooper
			model = 2
			id = { type = 30254 id = 39 }
			name = "1st Parachute Brigade"
			strength = 50
			max_strength = 50
		}
		division = {
			type = paratrooper
			model = 2
			id = { type = 30254 id = 40 }
			name = "2nd Parachute Brigade"
			strength = 50
			max_strength = 50
		}
		division = {
			type = paratrooper
			model = 2
			id = { type = 30254 id = 41 }
			name = "3nd Parachute Brigade"
			strength = 50
			max_strength = 50
		}
	}
		landunit = {
		id = { type = 30251 id = 12 }
		name = "Marine Division"
		location = 5
		division = {
			type = marine
			model = 5
			id = { type = 30254 id = 42 }
			name = "1st Marine Brigade"
			extra = engineer
			strength = 50
			max_strength = 50
		}
		division = {
			type = marine
			model = 5
			id = { type = 30254 id = 43 }
			name = "2nd Marine Brigade"
			extra = engineer
			strength = 50
			max_strength = 50
		}
		division = {
			type = marine
			model = 5
			id = { type = 30254 id = 44 }
			name = "3nd Marine Brigade"
			extra = engineer
			strength = 50
			max_strength = 50
		}
	}
	landunit = {
		id = { type = 30251 id = 2 }
		name = "VIII Corps"
		location = 29
		division = {
			type = armor
			model = 3
			id = { type = 30254 id = 7 }
			name = "7th Armoured Division"
			extra = heavy_armor
			brigade_model = 3
		}
		division = {
			type = armor
			model = 3
			id = { type = 30254 id = 8 }
			name = "11th Armoured Division"
			extra = tank_destroyer
			brigade_model = 3
		}
		division = {
			type = motorized
			model = 3
			id = { type = 30254 id = 9 }
			name = "55th (West Lancashire) Infantry Division"
			extra = artillery
			brigade_model = 11
		}
		division = {
			type = infantry
			model = 12
			id = { type = 30254 id = 10 }
			name = "77th Infantry Division "
			extra = artillery
			brigade_model = 11
		}
		division = {
			type = motorized
			model = 3
			id = { type = 30254 id = 11 }
			name = "15th (Scottish) Infantry Division"
			
			extra = engineer
			brigade_model = 5
		}
	}
	landunit = {
		id = { type = 30251 id = 3 }
		name = "XXX Corps"
		location = 25
		division = {
			type = motorized
			model = 3
			id = { type = 30254 id = 12 }
			name = "43rd (Wessex) Infantry Division"
			
			extra = engineer
			brigade_model = 5
		}
		division = {
			type = motorized
			model = 3
			id = { type = 30254 id = 13 }
			name = "5th Infantry Division"
			
			extra = artillery
			brigade_model = 11
		}
		division = {
			type = motorized
			model = 3
			id = { type = 30254 id = 14 }
			name = "51st (Highland) Infantry Division"
			
			extra = engineer
			brigade_model = 5
		}
		division = {
			type = armor
			model = 3
			id = { type = 30254 id = 15 }
			name = "Guards Armoured Division"
			extra = heavy_armor
			brigade_model = 3
		}
		division = {
			type = motorized
			model = 3
			id = { type = 30254 id = 16 }
			name = "305th Infantry Brigade"
			strength = 35
			max_strength = 35
			
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = motorized
			model = 3
			id = { type = 30254 id = 17 }
			name = "301st Infantry Division"
			strength = 35
			max_strength = 35
			
			extra = tank_destroyer
			brigade_model = 3
		}
	}
	landunit = {
		id = { type = 30251 id = 4 }
		name = "West Command HQ"
		location = 17
		division = {
			type = hq
			model = 4
			id = { type = 30254 id = 18 }
			name = "West Command HQ"
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 12
			id = { type = 30254 id = 45 }
			name = "71th Infantry Division "
			extra = artillery
			brigade_model = 11
		}
		division = {
			type = infantry
			model = 12
			id = { type = 30254 id = 46 }
			name = "44th Infantry Division "
			extra = artillery
			brigade_model = 11
		}
	}
	landunit = {
		id = { type = 30251 id = 5 }
		name = "East Command HQ"
		location = 28
		division = {
			type = hq
			model = 4
			id = { type = 30254 id = 19 }
			name = "East Command HQ"
		}
		division = {
			type = infantry
			model = 12
			id = { type = 30254 id = 47 }
			name = "33th Infantry Division "
			extra = artillery
			brigade_model = 11
		}
		division = {
			type = infantry
			model = 12
			id = { type = 30254 id = 48 }
			name = "21th Infantry Division "
			extra = artillery
			brigade_model = 11
		}
	}
	landunit = {
		id = { type = 30251 id = 6 }
		name = "V Corps"
		location = 16
		division = {
			type = armor
			model = 3
			id = { type = 30254 id = 20 }
			name = "6th Armoured Division"
			
			extra = heavy_armor
			brigade_model = 3
		}
		division = {
			type = motorized
			model = 3
			id = { type = 30254 id = 21 }
			name = "56th (London) Infantry Division"
			extra = light_armor_brigade
			brigade_model = 7
		}
		division = {
			type = motorized
			model = 3
			id = { type = 30254 id = 22 }
			name = "78th Infantry Division"
			
			extra = light_armor_brigade
			brigade_model = 7
		}
	}
	landunit = {
		id = { type = 30251 id = 8 }
		name = "X Corps"
		location = 24
		division = {
			type = mechanized
			model = 1
			id = { type = 30254 id = 25 }
			name = "10th Mechanized Division"
			
			extra = sp_artillery
			brigade_model = 3
		}
		division = {
			type = mechanized
			model = 1
			id = { type = 30254 id = 26 }
			name = "4th Mechanized Division"
			
			extra = tank_destroyer
			brigade_model = 3
		}
		division = {
			type = mechanized
			model = 1
			id = { type = 30254 id = 27 }
			name = "1st Mechanized Division"
			extra = sp_artillery			
			brigade_model = 11
		}
	}
	landunit = {
		id = { type = 30251 id = 9 }
		name = "14th Army HQ"
		location = 1432
		division = {
			type = hq
			model = 4
			id = { type = 30254 id = 29 }
			name = "14th Army HQ"
			extra = engineer
			brigade_model = 5
		}
		division = {
			type = infantry
			model = 12
			id = { type = 30254 id = 49 }
			name = "4th Infantry Division "
			extra = artillery
			brigade_model = 11
		}
		division = {
			type = infantry
			model = 12
			id = { type = 30254 id = 50 }
			name = "11th Infantry Division "
			extra = artillery
			brigade_model = 11
		}
	}
	landunit = {
		id = { type = 30251 id = 10 }
		name = "XV Corps"
		location = 29
		division = {
			type = motorized
			model = 3
			id = { type = 30254 id = 30 }
			name = "82nd Infantry Division"
		}
		division = {
			type = mechanized
			model = 1
			id = { type = 30254 id = 31 }
			name = "81st Mechanized Division"
		}
		division = {
			type = mechanized
			model = 1
			id = { type = 30254 id = 32 }
			name = "26th Mechanized Division"
		}
		division = {
			type = armor
			model = 3
			id = { type = 30254 id = 33 }
			name = "11th Armored Division"
			extra = sp_artillery
			brigade_model = 3
		}
		division = {
			type = armor
			model = 3
			id = { type = 30254 id = 34 }
			name = "12th Armored Division"
			extra = sp_artillery
			brigade_model = 3
		}
	}
	landunit = {
		id = { type = 30251 id = 13 }
		name = "Norwich Garrison"
		location = 25
		division = {
			type = garrison
			model = 5
			id = { type = 30254 id = 75 }
			name = "Beach Defense"
            experience = 20
			locked = yes
		}
		division = {
			type = garrison
			model = 5
			id = { type = 30254 id = 73 }
			name = "Beach Defense"
            experience = 20
			locked = yes
		}
		division = {
			type = garrison
			model = 5
			id = { type = 30254 id = 74 }
			name = "Beach Defense"
            experience = 20
			locked = yes
		}
	}
	landunit = {
		id = { type = 30251 id = 14 }
		name = "Dover Garrison"
		location = 26
		division = {
			type = garrison
			model = 5
			id = { type = 30254 id = 60 }
			name = "Beach Defense"
            experience = 20
			locked = yes
		}
		division = {
			type = garrison
			model = 5
			id = { type = 30254 id = 61 }
			name = "Beach Defense"
            experience = 20
			locked = yes
		}
		division = {
			type = garrison
			model = 5
			id = { type = 30254 id = 62 }
			name = "Beach Defense"
            experience = 20
			locked = yes
		}
	}
	landunit = {
		id = { type = 30251 id = 15 }
		name = "Portsmouth Garrison"
		location = 27
		division = {
			type = garrison
			model = 5
			id = { type = 30254 id = 63 }
			name = "Beach Defense"
            experience = 20
			locked = yes
		}
		division = {
			type = garrison
			model = 5
			id = { type = 30254 id = 64 }
			name = "Beach Defense"
            experience = 20
			locked = yes
		}
		division = {
			type = garrison
			model = 5
			id = { type = 30254 id = 65 }
			name = "Beach Defense"
            experience = 20
			locked = yes
		}
	}
	landunit = {
		id = { type = 30251 id = 16 }
		name = "Plymouth Garrison"
		location = 23
		division = {
			type = garrison
			model = 5
			id = { type = 30254 id = 66 }
			name = "Beach Defense"
            experience = 20
			locked = yes
		}
		division = {
			type = garrison
			model = 5
			id = { type = 30254 id = 67 }
			name = "Beach Defense"
            experience = 20
			locked = yes
		}
	}
	landunit = {
		id = { type = 30251 id = 17 }
		name = "Cardiff Garrison"
		location = 22
		division = {
			type = garrison
			model = 5
			id = { type = 30254 id = 68 }
			name = "Beach Defense"
            experience = 20
			locked = yes
		}
	}
	landunit = {
		id = { type = 30251 id = 18 }
		name = "Manchester Garrison"
		location = 17
		division = {
			type = garrison
			model = 5
			id = { type = 30254 id = 69 }
			name = "Beach Defense"
            experience = 20
			locked = yes
		}
	}
	landunit = {
		id = { type = 30251 id = 19 }
		name = "Edinburgh Garrison"
		location = 11
		division = {
			type = garrison
			model = 5
			id = { type = 30254 id = 70 }
			name = "Beach Defense"
            experience = 20
			locked = yes
		}
	}
	landunit = {
		id = { type = 30251 id = 20 }
		name = "Glasgow Garrison"
		location = 12
		division = {
			type = garrison
			model = 5
			id = { type = 30254 id = 71 }
			name = "Beach Defense"
            experience = 20
			locked = yes
		}
	}
	landunit = {
		id = { type = 30251 id = 21 }
		name = "Belfast Garrison"
		location = 36
		division = {
			type = garrison
			model = 5
			id = { type = 30254 id = 72 }
			name = "Beach Defense"
            experience = 20
		    locked = yes
		}
	}
	
	# ######################################################
	# ############# Active Fleets ###########################
	# #######################################################
	# Home Fleet #
	

	navalunit = {
		name = "Home Fleet"
		id = { type = 30252 id = 1 }
		location = 5 # Scapa Flow
		base = 5 # Scapa Flow
		division = {
			
			id = { type = 30255 id = 110 }
			name = "HMS Illustrious"
			type = carrier
			model = 5
			extra1 = cag
			brigade_model1 = 5
		}
		division = {
			experience = 0
			id = { type = 30255 id = 304 }
			name = "HMS Ocean"
			type = escort_carrier
			model = 6
			extra1 = none
			brigade_model1 = 3
		}
		division = {
			experience = 0
			id = { type = 30255 id = 305 }
			name = "HMS Pioneer"
			type = escort_carrier
			model = 6
			extra1 = none
			brigade_model1 = 3
		}
		division = {
			
			id = { type = 30255 id = 100 }
			name = "HMS Queen Elizabeth"
			type = battleship
			model = 8
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = naval_radar_l
			brigade_model1 = 1
			brigade_model2 = 1
			brigade_model3 = 0
			brigade_model4 = 2
			brigade_model5 = 2
		}
		division = {
			
			id = { type = 30255 id = 75 }
			name = "HMS Swiftsure"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 31 }
			name = "HMS Birmingham"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 37 }
			name = "HMS Bellona"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 72 }
			name = "HMS Black Prince"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 73 }
			name = "HMS Diadem"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 55 }
			name = "HMS Danae"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 10 }
			name = "1st Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_asw
			brigade_model1 = 2
		}
		division = {
			
			id = { type = 30255 id = 11 }
			name = "2nd Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			
			id = { type = 30255 id = 12 }
			name = "3rd Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			
			id = { type = 30255 id = 13 }
			name = "4th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_asw
			brigade_model1 = 2
		}
		division = {
			
			id = { type = 30255 id = 14 }
			name = "5th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_asw
			brigade_model1 = 2
		}
	} ####################################################
	# Reserve Fleet - Clyde#
	

	navalunit = {
		name = "Reserve Fleet"
		id = { type = 30252 id = 2 }
		location = 36 # Glasgow
		base = 36
		division = {
			
			id = { type = 30255 id = 6 }
			name = "HMS Kent"
			type = heavy_cruiser
			model = 6
			extra1 = none
			extra2 = none
			extra3 = none
			brigade_model1 = 0
			brigade_model2 = 0
			brigade_model3 = 0
		}
		division = {
			
			id = { type = 30255 id = 56 }
			name = "HMS Hawkins"
			type = heavy_cruiser
			model = 6
			extra1 = none
			extra2 = none
			extra3 = none
			brigade_model1 = 0
			brigade_model2 = 0
			brigade_model3 = 0
		}
		division = {
			
			id = { type = 30255 id = 24 }
			name = "HMS Cardiff"
			type = light_cruiser
			model = 6
			extra1 = none
			extra2 = none
			brigade_model1 = 0
			brigade_model2 = 0
		}
		division = {
			
			id = { type = 30255 id = 38 }
			name = "6th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_asw
			brigade_model1 = 2
		}
		division = {
			
			id = { type = 30255 id = 39 }
			name = "7th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_asw
			brigade_model1 = 2
		}
	} ####################################################
	# Devonport #
	

	navalunit = {
		name = "Devonport Yards"
		id = { type = 30252 id = 306 }
		location = 27 # Portsmouth
		base = 27
		division = {
			
			id = { type = 30255 id = 2 }
			name = "HMS Furious"
			type = carrier
			model = 5
			extra1 = cag
			brigade_model1 = 5
		}
		division = {
			
			id = { type = 30255 id = 1 }
			name = "HMS Argus"
			type = escort_carrier
			model = 6
			extra1 = none
			brigade_model1 = 3
		}
		division = {
			
			id = { type = 30255 id = 112 }
			name = "HMS Valiant"
			type = battleship
			model = 8
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = naval_radar_l
			brigade_model1 = 0
			brigade_model2 = 1
			brigade_model3 = 0
			brigade_model4 = 2
			brigade_model5 = 2
		}
		division = {
			
			id = { type = 30255 id = 23 }
			name = "HMS Norfolk"
			type = heavy_cruiser
			model = 6
		}
		division = {
			
			id = { type = 30255 id = 69 }
			name = "HMS Mauritius"
			type = light_cruiser
			model = 6
			extra1 = naval_fire_controll_s
			extra2 = naval_radar_s
			brigade_model1 = 1
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 63 }
			name = "HMS Ajax"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 61 }
			name = "HMS Despatch"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
	} ####################################################
	# Chatham #
	

	navalunit = {
		name = "Chatham Naval Yard"
		id = { type = 30252 id = 307 }
		location = 26 # Dover
		base = 26
		division = {
			
			id = { type = 30255 id = 57 }
			name = "HMS Frobisher"
			type = heavy_cruiser
			model = 6
			extra1 = none
			extra2 = none
			extra3 = none
			brigade_model1 = 0
			brigade_model2 = 0
			brigade_model3 = 0
		}
		division = {
			
			id = { type = 30255 id = 118 }
			name = "HMS Kenya"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 58 }
			name = "HMS Arethusa"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 40 }
			name = "HMS Dido"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 41 }
			name = "HMS Phoebe"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 67 }
			name = "HMS Scylla"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 104 }
			name = "HMS Delhi"
			type = light_cruiser
			model = 6
			extra1 = none
			extra2 = none
			brigade_model1 = 0
			brigade_model2 = 0
		}
	} ####################################################
	# Plymouth Reserve #
	

	navalunit = {
		name = "Plymouth Reserve"
		id = { type = 30252 id = 308 }
		location = 20 # Plymouth
		base = 20
		division = {
			
			id = { type = 30255 id = 105 }
			name = "HMS Caledon"
			type = light_cruiser
			model = 6
			extra1 = none
			extra2 = none
			brigade_model1 = 0
			brigade_model2 = 0
		}
		division = {
			
			id = { type = 30255 id = 25 }
			name = "HMS Capetown"
			type = light_cruiser
			model = 6
			extra1 = none
			extra2 = none
			brigade_model1 = 0
			brigade_model2 = 0
		}
		division = {
			
			id = { type = 30255 id = 70 }
			name = "HMS Ceres"
			type = light_cruiser
			model = 6
			extra1 = none
			extra2 = none
			brigade_model1 = 0
			brigade_model2 = 0
		}
		division = {
			
			id = { type = 30255 id = 80 }
			name = "HMS Colombo"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		} ####################################################
		# Mediterrean Fleet #
	}
	navalunit = {
		name = "Mediterranean Squadron"
		id = { type = 30252 id = 3 }
		location = 388 # Cyprus
		base = 388
		division = {
			
			id = { type = 30255 id = 64 }
			name = "HMS Orion"
			type = light_cruiser
			model = 6
			extra1 = none
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 68 }
			name = "HMS Sirius"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 43 }
			name = "8th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_asw
			brigade_model1 = 2
		}
		division = {
			
			id = { type = 30255 id = 44 }
			name = "9th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_asw
			brigade_model1 = 2
		}
		division = {
			
			id = { type = 30255 id = 45 }
			name = "10th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_asw
			brigade_model1 = 2
		}
		division = {
			
			id = { type = 30255 id = 46 }
			name = "11th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_asw
			brigade_model1 = 2
		}
		division = {
			
			id = { type = 30255 id = 47 }
			name = "12th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_asw
			brigade_model1 = 2
		}
		division = {
			
			id = { type = 30255 id = 48 }
			name = "13th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_asw
			brigade_model1 = 2
		}
		division = {
			
			id = { type = 30255 id = 49 }
			name = "14th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_asw
			brigade_model1 = 2
		}
	} ####################################################
	

	navalunit = {
		name = "Force A"
		id = { type = 30252 id = 4 }
		location = 27 # Portsmouth/Southampton
		base = 27
		division = {
			
			id = { type = 30255 id = 50 }
			name = "HMS Warspite"
			type = battleship
			model = 8
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = naval_radar_l
			brigade_model1 = 1
			brigade_model2 = 1
			brigade_model3 = 0
			brigade_model4 = 2
			brigade_model5 = 2
		}
		division = {
			
			id = { type = 30255 id = 53 }
			name = "HMS Rodney"
			type = battleship
			model = 8
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = naval_radar_l
			brigade_model1 = 0
			brigade_model2 = 1
			brigade_model3 = 2
			brigade_model4 = 2
			brigade_model5 = 2
		}
		division = {
			
			id = { type = 30255 id = 109 }
			name = "HMS Suffolk"
			type = heavy_cruiser
			model = 6
		}
	} ####################################################
	

	navalunit = {
		name = "Egypt Squadron"
		id = { type = 30252 id = 5 }
		location = 789 # Alexandria
		base = 789
		division = {
			
			id = { type = 30255 id = 29 }
			name = "HMS Liverpool"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 106 }
			name = "HMS Aurora"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 83 }
			name = "15th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			
			id = { type = 30255 id = 84 }
			name = "16th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_radar_s
			brigade_model1 = 1
		}
		division = {
			
			id = { type = 30255 id = 85 }
			name = "17th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			
			id = { type = 30255 id = 86 }
			name = "18th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			
			id = { type = 30255 id = 81 }
			name = "19th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			
			id = { type = 30255 id = 82 }
			name = "20th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			
			id = { type = 30255 id = 79 }
			name = "21st Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_radar_s
			brigade_model1 = 1
		}
		division = {
			
			id = { type = 30255 id = 87 }
			name = "22nd Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_radar_s
			brigade_model1 = 1
		}
		division = {
			
			id = { type = 30255 id = 88 }
			name = "23rd Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_radar_s
			brigade_model1 = 1
		}
		division = {
			
			id = { type = 30255 id = 89 }
			name = "24th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			
			id = { type = 30255 id = 90 }
			name = "25th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			
			id = { type = 30255 id = 91 }
			name = "26th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_fire_controll_s
			brigade_model1 = 1
		}
		division = {
			
			id = { type = 30255 id = 92 }
			name = "27th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			
			id = { type = 30255 id = 76 }
			name = "34th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = none
			brigade_model1 = 0
		}
		division = {
			
			id = { type = 30255 id = 77 }
			name = "35th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = none
			brigade_model1 = 0
		}
		division = {
			
			id = { type = 30255 id = 78 }
			name = "36th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_radar_s
			brigade_model1 = 1
		}
	} ####################################################
	# East Indies Taskforce #
	

	navalunit = {
		name = "East Indies Force"
		id = { type = 30252 id = 6 }
		location = 1511 # Colombo
		base = 1511
		division = {
			
			id = { type = 30255 id = 94 }
			name = "HMS Ceylon"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 93 }
			name = "HMS Nigeria"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 95 }
			name = "28th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			
			id = { type = 30255 id = 96 }
			name = "29th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_radar_s
			brigade_model1 = 1
		}
		division = {
			
			id = { type = 30255 id = 97 }
			name = "30th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
	} ####################################################
	# Eastern Fleet#
	

	navalunit = {
		name = "Eastern Fleet"
		id = { type = 30252 id = 7 }
		location = 1511 # Colombo
		base = 1511
		division = {
			
			id = { type = 30255 id = 16 }
			name = "HMS Anson"
			type = battleship
			model = 8
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = naval_radar_l
			brigade_model1 = 1
			brigade_model2 = 1
			brigade_model3 = 0
			brigade_model4 = 2
			brigade_model5 = 2
		}
		division = {
			
			id = { type = 30255 id = 17 }
			name = "HMS Howe"
			type = battleship
			model = 8
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = naval_radar_l
			brigade_model1 = 1
			brigade_model2 = 1
			brigade_model3 = 0
			brigade_model4 = 2
			brigade_model5 = 2
		}
		division = {
			
			id = { type = 30255 id = 102 }
			name = "HMS Caradoc"
			type = light_cruiser
			model = 6
			extra1 = naval_fire_controll_s
			extra2 = naval_radar_s
			brigade_model1 = 1
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 120 }
			name = "33rd Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_asw
			brigade_model1 = 2
		}
	} ####################################################
	# Hong Kong Taskforce #
	

	navalunit = {
		name = "China Fleet"
		id = { type = 30252 id = 8 }
		location = 1371 # Hong Kong
		base = 1371
		division = {
			
			id = { type = 30255 id = 74 }
			name = "HMS Implacable"
			type = carrier
			model = 5
			extra1 = cag
			brigade_model1 = 5
		}
		division = {
			
			id = { type = 30255 id = 99 }
			name = "HMS Indomitable"
			type = carrier
			model = 5
			extra1 = cag
			brigade_model1 = 5
		}
		division = {
			experience = 0
			id = { type = 30255 id = 300 }
			name = "HMS Colossus"
			type = escort_carrier
			model = 6
			extra1 = none
			brigade_model1 = 3
		}
		division = {
			experience = 0
			id = { type = 30255 id = 303 }
			name = "HMS Glory"
			type = escort_carrier
			model = 6
			extra1 = none
			brigade_model1 = 3
		}
		division = {
			experience = 0
			id = { type = 30255 id = 301 }
			name = "HMS Vengeance"
			type = escort_carrier
			model = 6
			extra1 = none
			brigade_model1 = 3
		}
		division = {
			
			id = { type = 30255 id = 66 }
			name = "HMS Belfast"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 30 }
			name = "HMS Bermuda"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 71 }
			name = "HMS Argonaut"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 35 }
			name = "HMS Euryalus"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 107 }
			name = "31st Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_asw
			brigade_model1 = 2
		}
	} ####################################################
	# Indian Ocean Fleet#
	

	navalunit = {
		name = "Indian Ocean Squadron"
		id = { type = 30252 id = 9 }
		location = 1509 # Trincomalee
		base = 1509
		division = {
			
			id = { type = 30255 id = 114 }
			name = "HMS London"
			type = heavy_cruiser
			model = 6
		}
		division = {
			
			id = { type = 30255 id = 34 }
			name = "HMS Cleopatra"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
	} ####################################################
	# Far East Fleet#
	

	navalunit = {
		name = "Far East Fleet"
		id = { type = 30252 id = 10 }
		location = 1729 # Vanua Levu
		base = 1729
		division = {
			
			id = { type = 30255 id = 111 }
			name = "HMS Indefatigable"
			type = carrier
			extra1 = cag
			model = 5
			brigade_model1 = 5
		}
		division = {
			
			id = { type = 30255 id = 3 }
			name = "HMS Formidable"
			type = carrier
			model = 5
			extra1 = cag
			brigade_model1 = 5
		}
		division = {
			
			id = { type = 30255 id = 98 }
			name = "HMS Victorious"
			type = carrier
			model = 5
			extra1 = cag
			brigade_model1 = 5
		}
		division = {
			
			id = { type = 30255 id = 15 }
			name = "HMS Unicorn"
			type = carrier
			model = 5
			extra1 = cag
			brigade_model1 = 5
		}
		division = {
			
			id = { type = 30255 id = 4 }
			name = "HMS Duke of York"
			type = battleship
			model = 8
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = naval_radar_l
			brigade_model1 = 1
			brigade_model2 = 1
			brigade_model3 = 0
			brigade_model4 = 2
			brigade_model5 = 2
		}
		division = {
			
			id = { type = 30255 id = 18 }
			name = "HMS King George V"
			type = battleship
			model = 8
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = naval_radar_l
			brigade_model1 = 1
			brigade_model2 = 1
			brigade_model3 = 0
			brigade_model4 = 2
			brigade_model5 = 2
		}
		division = {
			
			id = { type = 30255 id = 22 }
			name = "HMS Erebus, Roberts & Abercrombie"
			type = battleship
			model = 8
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = naval_radar_l
			brigade_model1 = 0
			brigade_model2 = 1
			brigade_model3 = 1
			brigade_model4 = 2
			brigade_model5 = 2
		}
		division = {
			
			id = { type = 30255 id = 5 }
			name = "HMS Berwick"
			type = heavy_cruiser
			model = 6
		}
		division = {
			
			id = { type = 30255 id = 9 }
			name = "HMS Devonshire"
			type = heavy_cruiser
			model = 6
		}
		division = {
			
			id = { type = 30255 id = 32 }
			name = "HMS Newfoundland"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 119 }
			name = "32nd Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_asw
			brigade_model1 = 2
		}
	} ####################################################
	

	navalunit = {
		name = "Malaya Force"
		id = { type = 30252 id = 309 }
		location = 1432 # Singapore
		base = 1432
		division = {
			experience = 0
			id = { type = 30255 id = 302 }
			name = "HMS Venerable"
			type = escort_carrier
			model = 6
			extra1 = none
			brigade_model1 = 3
		}
		division = {
			
			id = { type = 30255 id = 54 }
			name = "HMS Nelson"
			type = battleship
			model = 8
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = naval_radar_l
			brigade_model1 = 0
			brigade_model2 = 1
			brigade_model3 = 0
			brigade_model4 = 2
			brigade_model5 = 2
		}
		division = {
			
			id = { type = 30255 id = 117 }
			name = "HMS Cumberland"
			type = heavy_cruiser
			model = 6
		}
		division = {
			
			id = { type = 30255 id = 113 }
			name = "HMS Sussex"
			type = heavy_cruiser
			model = 6
		}
		division = {
			
			id = { type = 30255 id = 7 }
			name = "HMS Jamaica"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 42 }
			name = "HMS Royalist"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
	} ####################################################
	

	navalunit = {
		name = "Rosyth Navy Yard"
		id = { type = 30252 id = 310 }
		location = 5
		base = 5
		division = {
			
			id = { type = 30255 id = 101 }
			name = "HMS Renown"
			type = battlecruiser
			model = 4
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = naval_anti_air_l
			extra4 = naval_radar_l
			brigade_model1 = 1
			brigade_model2 = 1
			brigade_model3 = 2
			brigade_model4 = 2
		}
		division = {
			
			id = { type = 30255 id = 108 }
			name = "HMS Newcastle"
			type = light_cruiser
			model = 6
			extra1 = naval_fire_controll_s
			extra2 = naval_radar_s
			brigade_model1 = 1
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 8 }
			name = "HMS Sheffield"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 59 }
			name = "HMS Emerald"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 26 }
			name = "HMS Dauntless"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 28 }
			name = "HMS Diomede"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
	} ####################################################
	

	navalunit = {
		name = "Tynemouth Yards"
		id = { type = 30252 id = 311 }
		location = 25 # Norwich
		base = 25
		division = {
			
			id = { type = 30255 id = 65 }
			name = "HMS Glasgow"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			
			id = { type = 30255 id = 36 }
			name = "HMS Leander"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
	} ####################################################
	# 1st Submarine Squadron#
	

	navalunit = {
		name = "1st Submarine Squadron"
		id = { type = 30252 id = 11 }
		location = 23 # Plymouth
		base = 23
		division = {
			
			id = { type = 30255 id = 121 }
			name = "1st Submarine Flotilla"
			type = submarine
			model = 7
		}
		division = {
			
			id = { type = 30255 id = 122 }
			name = "2nd Submarine Flotilla"
			type = submarine
			model = 7
		}
		division = {
			
			id = { type = 30255 id = 123 }
			name = "24st Submarine Flotilla"
			type = submarine
			model = 7
		}
		division = {
			
			id = { type = 30255 id = 124 }
			name = "25th Submarine Flotilla"
			type = submarine
			model = 7
		}
	} ####################################################
	# 3rd Submarine Squadron - Holy Loch #
	

	navalunit = {
		name = "3rd Submarine Squadron"
		id = { type = 30252 id = 12 }
		location = 36 # Belfast
		base = 36
		division = {
			
			id = { type = 30255 id = 125 }
			name = "3rd Submarine Flotilla"
			type = submarine
			model = 7
		}
		division = {
			
			id = { type = 30255 id = 126 }
			name = "4th Submarine Flotilla"
			type = submarine
			model = 7
		}
		division = {
			
			id = { type = 30255 id = 127 }
			name = "5th Submarine Flotilla"
			type = submarine
			model = 7
		}
		division = {
			
			id = { type = 30255 id = 128 }
			name = "6th Submarine Flotilla"
			type = submarine
			model = 7
		}
		division = {
			
			id = { type = 30255 id = 129 }
			name = "7th Submarine Flotilla"
			type = submarine
			model = 7
		}
	} ####################################################
	# 4th Submarine Squadron - Trincomalee #
	

	navalunit = {
		name = "4th Submarine Squadron"
		id = { type = 30252 id = 13 }
		location = 1509 # Trincomalee
		base = 1509
		division = {
			
			id = { type = 30255 id = 130 }
			name = "8th Submarine Flotilla"
			type = submarine
			model = 7
		}
		division = {
			
			id = { type = 30255 id = 131 }
			name = "9th Submarine Flotilla"
			type = submarine
			model = 7
		}
		division = {
			
			id = { type = 30255 id = 132 }
			name = "10th Submarine Flotilla"
			type = submarine
			model = 7
		}
	} ####################################################
	# 5th Submarine Squadron#
	

	navalunit = {
		name = "5th Submarine Squadron"
		id = { type = 30252 id = 14 }
		location = 27 # Portsmouth
		base = 27
		division = {
			
			id = { type = 30255 id = 133 }
			name = "11th Submarine Flotilla"
			type = submarine
			model = 7
		}
		division = {
			
			id = { type = 30255 id = 134 }
			name = "12th Submarine Flotilla"
			type = submarine
			model = 7
		}
		division = {
			
			id = { type = 30255 id = 135 }
			name = "13th Submarine Flotilla"
			type = submarine
			model = 7
		}
	} ####################################################
	# 6th Submarine Squadron - Blyth #
	

	navalunit = {
		name = "6th Submarine Squadron"
		id = { type = 30252 id = 15 }
		location = 23 # Plymouth
		base = 23
		division = {
			
			id = { type = 30255 id = 136 }
			name = "14th Submarine Flotilla"
			type = submarine
			model = 7
		}
	} ####################################################
	# 7th Submarine Squadron - Rothesay#
	

	navalunit = {
		name = "7th Submarine Squadron"
		id = { type = 30252 id = 16 }
		location = 36 # Belfast
		base = 36
		division = {
			
			id = { type = 30255 id = 137 }
			name = "15th Submarine Flotilla"
			type = submarine
			model = 7
		}
		division = {
			
			id = { type = 30255 id = 138 }
			name = "16th Submarine Flotilla"
			type = submarine
			model = 7
		}
		division = {
			
			id = { type = 30255 id = 139 }
			name = "17th Submarine Flotilla"
			type = submarine
			model = 7
		}
		division = {
			
			id = { type = 30255 id = 140 }
			name = "18th Submarine Flotilla"
			type = submarine
			model = 7
		}
	} ####################################################
	# 8th Submarine Squadron - Trincomalee#
	

	navalunit = {
		name = "8th Submarine Squadron"
		id = { type = 30252 id = 17 }
		location = 1511 # Colombo
		base = 1511
		division = {
			
			id = { type = 30255 id = 141 }
			name = "19th Submarine Flotilla"
			type = submarine
			model = 7
		}
		division = {
			
			id = { type = 30255 id = 142 }
			name = "20th Submarine Flotilla"
			type = submarine
			model = 7
		}
	} ####################################################
	# 9th Submarine Squadron - Dundee#
	

	navalunit = {
		name = "9th Submarine Squadron"
		id = { type = 30252 id = 18 }
		location = 7 # Aberdeen
		base = 7
		division = {
			
			id = { type = 30255 id = 143 }
			name = "21th Submarine Flotilla"
			type = submarine
			model = 7
		}
		division = {
			
			id = { type = 30255 id = 144 }
			name = "22th Submarine Flotilla"
			type = submarine
			model = 7
		}
	} ####################################################
	# 10th Submarine Squadron - Maddalena#
	

	navalunit = {
		name = "10th Submarine Squadron"
		id = { type = 30252 id = 19 }
		location = 5
		base = 5
		division = {
			
			id = { type = 30255 id = 145 }
			name = "23th Submarine Flotilla"
			type = submarine
			model = 7
		}
	} ####################################################
	

	navalunit = {
		name = "1st Transport Squadron"
		id = { type = 30252 id = 20 }
		location = 5 # Scapa Flow
		base = 5
		division = {
			
			id = { type = 30255 id = 146 }
			name = "Suffolk Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 147 }
			name = "Trojan Star Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 148 }
			name = "Queen Mary Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 149 }
			name = "Nieuw Amsterdam Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 150 }
			name = "Strathenden Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 151 }
			name = "Fort Edmonton Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 152 }
			name = "Lars Bay Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 153 }
			name = "Fort Langley Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 154 }
			name = "King Ethelred Flotilla"
			type = transport
			model = 3
		}
	} ####################################################
	

	navalunit = {
		name = "2nd Transport Squadron"
		id = { type = 30252 id = 21 }
		location = 5 # Scapa Flow
		base = 5
		division = {
			
			id = { type = 30255 id = 155 }
			name = "Dominion Monarch Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 156 }
			name = "Empire Arquebus Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 157 }
			name = "Hororata Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 158 }
			name = "Henry the VIII Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 159 }
			name = "The Bishops Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 160 }
			name = "Empire of India Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 161 }
			name = "Empire of Africa Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 162 }
			name = "Royal Caledonian Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 163 }
			name = "Royal Sovereign Flotilla"
			type = transport
			model = 3
		}
	} ####################################################
	

	navalunit = {
		name = "3rd Transport Squadron"
		id = { type = 30252 id = 22 }
		location = 27 # Portsmouth
		base = 27
		division = {
			
			id = { type = 30255 id = 164 }
			name = "Queen Elizabeth Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 165 }
			name = "Empress of Canada Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 166 }
			name = "Clan Macauley Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 167 }
			name = "Samfleet Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 168 }
			name = "Samfreedom Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 169 }
			name = "Samfoyle Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 170 }
			name = "Samconstant Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 171 }
			name = "Samleyte Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 172 }
			name = "Samfaithful Flotilla"
			type = transport
			model = 3
		}
	} ####################################################
	

	navalunit = {
		name = "4th Transport Squadron"
		id = { type = 30252 id = 23 }
		location = 388 # Cyprus
		base = 388
		division = {
			
			id = { type = 30255 id = 173 }
			name = "Empire Captain Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 174 }
			name = "Andes Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 175 }
			name = "Empire Charmain Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 176 }
			name = "Samoresby Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 177 }
			name = "1st Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 178 }
			name = "2nd Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 179 }
			name = "3rd Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 180 }
			name = "4th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 181 }
			name = "5th Transport Flotilla"
			type = transport
			model = 3
		}
	} ####################################################
	

	navalunit = {
		name = "5th Transport Squadron"
		id = { type = 30252 id = 24 }
		location = 388 # Cyprus
		base = 388
		division = {
			
			id = { type = 30255 id = 182 }
			name = "Essex Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 183 }
			name = "Maloja Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 184 }
			name = "Empire Chieftain Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 185 }
			name = "6th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 186 }
			name = "7th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 187 }
			name = "8th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 188 }
			name = "9th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 189 }
			name = "10th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 190 }
			name = "11th Transport Flotilla"
			type = transport
			model = 3
		}
	} ####################################################
	

	navalunit = {
		name = "6th Transport Squadron"
		id = { type = 30252 id = 25 }
		location = 1432 # Singapore
		base = 1432
		division = {
			
			id = { type = 30255 id = 191 }
			name = "Stirling Castle Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 192 }
			name = "Empire Splendour Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 193 }
			name = "Sam Torch Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 194 }
			name = "12th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 195 }
			name = "13th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 196 }
			name = "14th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 197 }
			name = "15th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 198 }
			name = "16th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 199 }
			name = "17th Transport Flotilla"
			type = transport
			model = 3
		}
	} ####################################################
	

	navalunit = {
		name = "7th Transport Squadron"
		id = { type = 30252 id = 26 }
		location = 1415 # Rangoon
		base = 1415
		division = {
			
			id = { type = 30255 id = 200 }
			name = "Resolution Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 201 }
			name = "Fort Dunvegan Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 202 }
			name = "Durham Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 203 }
			name = "18th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 204 }
			name = "19th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 205 }
			name = "20th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 206 }
			name = "21st Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 207 }
			name = "22nd Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			
			id = { type = 30255 id = 208 }
			name = "23rd Transport Flotilla"
			type = transport
			model = 3
		}
	} ######################################################
	# ############# ROYAL AIR FORCE 1944 OOB###################
	# #########################################################
	

	airunit = {
		location = 26
		base = 26
		id = { type = 30253 id = 1 }
		name = "10th Group"
		division = {
			
			id = { type = 30256 id = 1 }
			name = "No.126 Squadron"
			strength = 100
			type = multi_role
			model = 8
		}
		division = {
			
			id = { type = 30256 id = 2 }
			name = "No.165 Squadron"
			strength = 100
			type = multi_role
			model = 8
		}
		division = {
			
			id = { type = 30256 id = 3 }
			name = "No.406 Squadron RCAF"
			strength = 100
			type = tactical_bomber
			model = 9
		}
		division = {
			
			id = { type = 30256 id = 4 }
			name = "No.464 Squadron RAAF"
			strength = 100
			type = tactical_bomber
			model = 9
		}
	}
	airunit = {
		location = 26
		base = 26
		id = { type = 30253 id = 2 }
		name = "11th Group"
		division = {
			
			id = { type = 30256 id = 5 }
			name = "No.1 Squadron"
			strength = 100
			type = multi_role
			model = 8
		}
		division = {
			
			id = { type = 30256 id = 6 }
			name = "No.501 Squadron"
			strength = 100
			type = multi_role
			model = 8
		}
		division = {
			
			id = { type = 30256 id = 7 }
			name = "No.219 Squadron"
			strength = 100
			type = tactical_bomber
			model = 9
		}
		division = {
			
			id = { type = 30256 id = 8 }
			name = "No.29 Squadron"
			strength = 100
			type = tactical_bomber
			model = 9
		}
	}
	airunit = {
		location = 26
		base = 26
		id = { type = 30253 id = 3 }
		name = "2nd TAF/1"
		division = {
			
			id = { type = 30256 id = 9 }
			name = "No.3 Squadron"
			strength = 100
			type = multi_role
			model = 8
		}
		division = {
			
			id = { type = 30256 id = 10 }
			name = "No.33 Squadron"
			strength = 100
			type = multi_role
			model = 8
		}
		division = {
			
			id = { type = 30256 id = 11 }
			name = "No.245 Squadron"
			strength = 100
			type = multi_role
			model = 8
		}
		division = {
			
			id = { type = 30256 id = 12 }
			name = "No.694 Squadron"
			strength = 100
			type = multi_role
			model = 8
		}
	}
	airunit = {
		location = 27
		base = 27
		id = { type = 30253 id = 4 }
		name = "2nd TAF/2"
		division = {
			
			id = { type = 30256 id = 13 }
			name = "No.65 Squadron"
			strength = 100
			type = multi_role
			model = 8
		}
		division = {
			
			id = { type = 30256 id = 14 }
			name = "No.181 Squadron"
			strength = 100
			type = multi_role
			model = 8
		}
		division = {
			
			id = { type = 30256 id = 15 }
			name = "No.401 Squadron RCAF"
			strength = 100
			type = multi_role
			model = 8
		}
		division = {
			
			id = { type = 30256 id = 16 }
			name = "No.610 Squadron"
			strength = 100
			type = multi_role
			model = 8
		}
	}
	airunit = {
		location = 26
		base = 26
		id = { type = 30253 id = 5 }
		name = "12th Group"
		division = {
			
			id = { type = 30256 id = 17 }
			name = "No.168 Squadron"
			strength = 75
			type = multi_role
			model = 8
		}
		division = {
			
			id = { type = 30256 id = 18 }
			name = "No.25 Squadron"
			strength = 75
			type = tactical_bomber
			model = 9
		}
		division = {
			
			id = { type = 30256 id = 19 }
			name = "No.264 Squadron"
			strength = 100
			type = tactical_bomber
			model = 9
		}
		division = {
			
			id = { type = 30256 id = 20 }
			name = "No.303 Squadron"
			strength = 100
			type = multi_role
			model = 8
		}
	}
	airunit = {
		location = 26
		base = 26
		id = { type = 30253 id = 6 }
		name = "13th Group"
		division = {
			
			id = { type = 30256 id = 21 }
			name = "No.504 Squadron"
			strength = 100
			type = interceptor
			model = 11
		}
		division = {
			
			id = { type = 30256 id = 22 }
			name = "No.412 Squadron RCAF"
			strength = 100
			type = interceptor
			model = 11
		}
		division = {
			
			id = { type = 30256 id = 23 }
			name = "No.308 Squadron"
			strength = 100
			type = interceptor
			model = 11
		}
	}
	airunit = {
		location = 26
		base = 26
		id = { type = 30253 id = 7 }
		name = "14th Group"
		division = {
			
			id = { type = 30256 id = 24 }
			name = "No.118 Squadron"
			strength = 100
			type = interceptor
			model = 11
		}
		division = {
			
			id = { type = 30256 id = 25 }
			name = "No.441 Squadron RCAF"
			strength = 100
			type = interceptor
			model = 11
		}
		division = {
			
			id = { type = 30256 id = 26 }
			name = "No.331 Squadron"
			strength = 100
			type = interceptor
			model = 11
		}
	}
	airunit = {
		location = 5
		base = 5
		id = { type = 30253 id = 8 }
		name = "38th Group"
		division = {
			
			id = { type = 30256 id = 27 }
			name = "No.190 Squadron"
			strength = 100
			type = naval_bomber
			model = 5
		}
		division = {
			
			id = { type = 30256 id = 28 }
			name = "No.297 Squadron"
			strength = 100
			type = naval_bomber
			model = 5
		}
		division = {
			
			id = { type = 30256 id = 29 }
			name = "No.570 Squadron"
			strength = 100
			type = naval_bomber
			model = 5
		}
	}
	airunit = {
		location = 26
		base = 26
		id = { type = 30253 id = 9 }
		name = "No.603 Squadron"
		division = {
			
			id = { type = 30256 id = 30 }
			name = "No.603 Squadron"
			strength = 100
			type = interceptor
			model = 11
		}
	}
	airunit = {
		location = 348
		base = 348
		id = { type = 30253 id = 10 }
		name = "No.43 Squadron"
		division = {
			
			id = { type = 30256 id = 31 }
			name = "No.43 Squadron"
			strength = 100
			type = interceptor
			model = 11
		}
	}
	

	airunit = {
		location = 26
		base = 26
		id = { type = 30253 id = 11 }
		name = "1/SEAC Air Forces"
		division = {
			
			id = { type = 30256 id = 32 }
			name = "17/.67./81. Squadron"
			strength = 100
			type = multi_role
			model = 8
		}
		division = {
			
			id = { type = 30256 id = 33 }
			name = "136./155. Squadron"
			strength = 100
			type = multi_role
			model = 8
		}
		division = {
			
			id = { type = 30256 id = 34 }
			name = "607./615. Squadron"
			strength = 100
			type = multi_role
			model = 8
		}
		division = {
			
			id = { type = 30256 id = 35 }
			name = "28./30. Squadron"
			strength = 100
			type = multi_role
			model = 8
		}
	}
	airunit = {
		location = 388
		base = 388
		id = { type = 30253 id = 12 }
		name = "2/SEAC Air Forces"
		division = {
			
			id = { type = 30256 id = 36 }
			name = "5./11./20. Squadron"
			strength = 100
			type = multi_role
			model = 8
		}
		division = {
			
			id = { type = 30256 id = 37 }
			name = "42./34./42. Squadron"
			strength = 100
			type = cas
			model = 4
		}
		division = {
			
			id = { type = 30256 id = 38 }
			name = "60./79. Squadron"
			strength = 100
			type = cas
			model = 4
		}
		division = {
			
			id = { type = 30256 id = 39 }
			name = "No.183 Squadron"
			strength = 100
			type = multi_role
			model = 8
		}
	}
	airunit = {
		location = 26
		base = 26
		id = { type = 30253 id = 13 }
		name = "3/SEAC Air Forces"
		division = {
			
			id = { type = 30256 id = 40 }
			name = "200./203./215. Squadron"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
		division = {
			
			id = { type = 30256 id = 41 }
			name = "99./159. Squadron"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
		division = {
			
			id = { type = 30256 id = 42 }
			name = "292./355./356. Squadron"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
		division = {
			
			id = { type = 30256 id = 43 }
			name = "No.429 Squadron RCAF"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
	}
	airunit = {
		location = 26
		base = 26
		id = { type = 30253 id = 14 }
		name = "4/SEAC Air Forces"
		division = {
			
			id = { type = 30256 id = 44 }
			name = "27./47./88. Squadron"
			strength = 100
			type = naval_bomber
			model = 5
		}
		division = {
			
			id = { type = 30256 id = 45 }
			name = "176./177./211. Squadron"
			strength = 100
			type = naval_bomber
			model = 5
		}
	}
	airunit = {
		location = 789
		base = 789
		id = { type = 30253 id = 15 }
		name = "5/SEAC Air Forces"
		division = {
			
			id = { type = 30256 id = 46 }
			name = "31./62./117. Squadron"
			strength = 100
			type = transport_plane
			model = 4
		}
		division = {
			
			id = { type = 30256 id = 47 }
			name = "194./435./436. Squadron"
			strength = 100
			type = transport_plane
			model = 4
		}
		division = {
			
			id = { type = 30256 id = 48 }
			name = "45. Squadron"
			strength = 40
			type = tactical_bomber
			model = 9
		}
		division = {
			
			id = { type = 30256 id = 49 }
			name = "No.692 Squadron"
			strength = 100
			type = tactical_bomber
			model = 9
		}
	}
	

	airunit = {
		location = 20
		base = 20
		id = { type = 30253 id = 16 }
		name = "1st Group"
		division = {
			
			id = { type = 30256 id = 50 }
			name = "No.12 Squadron"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
		division = {
			
			id = { type = 30256 id = 51 }
			name = "No.103 Squadron"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
		division = {
			
			id = { type = 30256 id = 52 }
			name = "No.300 Squadron"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
		division = {
			
			id = { type = 30256 id = 53 }
			name = "No.576 Squadron"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
	}
	airunit = {
		location = 18
		base = 18
		id = { type = 30253 id = 17 }
		name = "3rd Group"
		division = {
			
			id = { type = 30256 id = 54 }
			name = "No.15 Squadron"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
		division = {
			
			id = { type = 30256 id = 55 }
			name = "No.115 Squadron"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
		division = {
			
			id = { type = 30256 id = 56 }
			name = "No.218 Squadron"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
		division = {
			
			id = { type = 30256 id = 57 }
			name = "No.106 Squadron"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
	}
	airunit = {
		location = 25
		base = 25
		id = { type = 30253 id = 18 }
		name = "4th Group"
		division = {
			
			id = { type = 30256 id = 58 }
			name = "No.10 Squadron"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
		division = {
			
			id = { type = 30256 id = 59 }
			name = "No.76 Squadron"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
		division = {
			
			id = { type = 30256 id = 60 }
			name = "No.78 Squadron"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
		division = {
			
			id = { type = 30256 id = 61 }
			name = "No.640 Squadron"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
	}
	airunit = {
		location = 18
		base = 18
		id = { type = 30253 id = 19 }
		name = "5th Group"
		division = {
			
			id = { type = 30256 id = 62 }
			name = "No.9 Squadron"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
		division = {
			
			id = { type = 30256 id = 63 }
			name = "No.49 Squadron"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
		division = {
			
			id = { type = 30256 id = 64 }
			name = "No.467 Squadron"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
		division = {
			
			id = { type = 30256 id = 65 }
			name = "No.619 Squadron"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
	}
	airunit = {
		location = 26
		base = 26
		id = { type = 30253 id = 20 }
		name = "6th Group"
		division = {
			
			id = { type = 30256 id = 66 }
			name = "No.408 Squadron RCAF"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
		division = {
			
			id = { type = 30256 id = 67 }
			name = "No.424 Squadron RCAF"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
		division = {
			
			id = { type = 30256 id = 68 }
			name = "No.427 Squadron RCAF"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
		division = {
			
			id = { type = 30256 id = 69 }
			name = "No.432 Squadron RCAF"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
	}
	airunit = {
		location = 26
		base = 26
		id = { type = 30253 id = 21 }
		name = "8th Group"
		division = {
			
			id = { type = 30256 id = 70 }
			name = "No.7 Squadron"
			strength = 75
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
		division = {
			
			id = { type = 30256 id = 71 }
			name = "No.156 Squadron"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
		division = {
			
			id = { type = 30256 id = 72 }
			name = "No.582 Squadron"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
		division = {
			
			id = { type = 30256 id = 73 }
			name = "No.346 Squadron"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
	}
	airunit = {
		id = { type = 30253 id = 22 }
		name = "16th Group"
		location = 26
		base = 26
		division = {
			
			id = { type = 30256 id = 74 }
			name = "No.313 Squadron"
			strength = 100
			type = multi_role
			model = 8
		}
		division = {
			
			id = { type = 30256 id = 75 }
			name = "No.64 Squadron"
			strength = 100
			type = multi_role
			model = 8
		}
		division = {
			
			id = { type = 30256 id = 76 }
			name = "No.332 Squadron"
			strength = 100
			type = multi_role
			model = 8
		}
		division = {
			
			id = { type = 30256 id = 77 }
			name = "No.132 Squadron"
			strength = 100
			type = multi_role
			model = 8
		}
	}
	airunit = {
		id = { type = 30253 id = 23 }
		name = "18th Group"
		location = 26
		base = 26
		division = {
			
			id = { type = 30256 id = 78 }
			name = "No.184 Squadron"
			strength = 100
			type = interceptor
			model = 11
		}
		division = {
			
			id = { type = 30256 id = 79 }
			name = "No.80 Squadron"
			strength = 100
			type = interceptor
			model = 11
		}
		division = {
			
			id = { type = 30256 id = 80 }
			name = "No.137 Squadron"
			strength = 100
			type = interceptor
			model = 11
		}
		division = {
			
			id = { type = 30256 id = 81 }
			name = "No.416 Squadron RCAF"
			strength = 100
			type = interceptor
			model = 11
		}
	}
	airunit = {
		id = { type = 30253 id = 523 }
		name = "Meteor Mk III"
		location = 26
		base = 26
		division = {
			
			id = { type = 30256 id = 578 }
			name = "Meteor Mk I Group"
			type = interceptor
			model = 11
		}
	}
	airunit = {
		id = { type = 30253 id = 24 }
		name = "9th Group"
		location = 26
		base = 26
		division = {
			
			id = { type = 30256 id = 82 }
			name = "82./84./110. Squadron"
			strength = 100
			type = cas
			model = 4
		}
		division = {
			
			id = { type = 30256 id = 83 }
			name = "258./261./273. Squadron"
			strength = 100
			type = cas
			model = 4
		}
		division = {
			
			id = { type = 30256 id = 84 }
			name = "135./146./152. Squadron"
			strength = 100
			type = cas
			model = 4
		}
		division = {
			
			id = { type = 30256 id = 85 }
			name = "113./123./134. Squadron"
			strength = 100
			type = cas
			model = 4
		}
	}
	airunit = {
		id = { type = 30253 id = 25 }
		name = "7th Group"
		location = 10
		base = 10
		division = {
			
			id = { type = 30256 id = 86 }
			name = "No.61 Squadron"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
		division = {
			
			id = { type = 30256 id = 87 }
			name = "No.625 Squadron"
			strength = 100
			type = strategic_bomber
			model = 6
			extra = escort
			brigade_model = 3
		}
	}
}
