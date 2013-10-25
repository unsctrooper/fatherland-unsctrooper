##############################
# Country definition for CHI #
##############################

province = { id = 1307   # Huaihua
   ic       = -2
 } 
 
 province = { id = 1338   # Shanghai
   ic       = -3
 } 
 
 province = { id = 1264   # Lanzhou
   ic       = -2
 } 
 
 province = { id = 1217   # Anshan
   ic       = -2
 } 
 
  province = { id = 1299   # Chongqing
   ic       = -1
 } 
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CHI 	
 ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes} }	
   capital                = 1299 # Chongqing 
   # Resource Reserves 
energy                 = 5000
metal                  = 5000
rare_materials         = 500
   oil                    = 500 
   supplies               = 500 
   money                  = 10 
   manpower               = 3670
   transports             = 100 
   escorts                = 2 
    
  diplomacy =
  { 
	relation = { tag = CHC value = -150 }
    relation = { tag = ENG value = 100 }
    relation = { tag = ITA value = 25 }
    relation = { tag = JAP value = -100 }
    relation = { tag = SIK value = -125 }
    relation = { tag = USA value = 100 }
  }
 
   SpyInfo                = {  country = "CHI" NumberOfSpies = 5  } 
   # Fujian   
   nationalprovinces      = {   
 #Nationalist China at Start 
 1333 1261 1303 1339 1323 1321 1334 1336 1340 1341 1319  1322 1324 1325 1326 1316 1317 1344 1342 1337  1338 1345 1346 1347 1348  1357 1358  1359 1360 1354  1353 1318 1355 1309  1311 1312 1310  1304   1302  1258 1262 1257  1296 1292 1293 1297 1298  1305 1306 1291 1313 1307  1308  1356  1349     1335    1314 1315    1267    1320   1299  1343  1300 1301 1350 1351 1352      
  
 #Yunnan          
 1389 1390 1384 1385 1386 1387 1388 
  
 #Guanxi Clique  
  1378  1365  1376 1377  1375 510 1380 1381 1382 1383  1369 1370 1373  1379 1367 1374 1368  
  
 #Shanxi       
  1241 1247 1246 1251  1242 1254  1331 1332  1252 1253 1248 1249 1250 1327  1243 1244 1245  1328 1329  1330   
  
 #Manchoukou 
 1202 1204 1212 1205 1199 1203 1200 1206 1213 1237  1207 1220 1218 2750 1236 1201 1208 1209     1210 1211 1214   1215  1216 1235 1217 1197 1198   
  
 #Xibei san ma            
 1269 1268 1270 1271 1264 1263 1272 1265 1266 1283 1284 1285   
  
 #Tibet       
 1294 1290 1286 1287 1288 1289 1295 
  
 #Sinkiang        
 1273 1279 1280 1281 1277 1274 1275 1282 
  
 #India        
 1278 1276  
  
 #Communist China      
 1259 1260 1255 1256 
  
 #Japan In China     
 1219 1238  1240 1239 
  
 #European Possessions     
  1371 1372  
   
 #Taiwan     
  1361 1362 1363 1364    
  
 #Mongolia 
 1120 1124 1125 1123 1121 1122 
  
                             } 
  ownedprovinces         = {    
 #Nationalist China at start 1356 
  1303    1325 1326 1316 1347 1357 1359 1354 1355 1309 1311 1312 1310 1304 1302    1305 1306 1313 1307 
 1308 1356 1349   1267  1299  1301 1351 1368 1374              
   1389  1384 1385 1373 
 1387 1386 1388           1352 
 #Liu Wenhui
 1293 1292 1390 1291 1300 1298 1297 1296 1261
 #Guangxi
 1378  1376 1377  1380 1381 1382 1383    1379 
 #North China
 1250 1245 1252 1249
 
  #Taiwan    
  1361 1362 1363 1364   
   #Areas previously held by Japan     
             1328       1333 1334  1339 1336  1337 1338 1344  1345 1343 1350 1353 
 1318 1369 1365 1370 1346 1348    1367 1358 1360 1375
 1268 1256 1270 1271 1264 1263 1262 1272 1265 1266 1283 1284 1285
 
 # New Civil War Front
 1219 1220 1215 1211 1212 1217 1214 1207 1119 1205 1204 1202 1208 1216 1235 1236 1243 1250 1252 1249 1253
 

                             } 
   # Fujian   
   controlledprovinces    = {   
#Nationalist China at start 1356 
  1303    1325 1326 1316 1347 1357 1359 1354 1355 1309 1311 1312 1310 1304 1302    1305 1306 1313 1307 
 1308 1356 1349   1267  1299  1301 1351 1368 1374              
   1389  1384 1385 1373 
 1387 1386 1388           1352 
  #Liu Wenhui
 1293 1292 1390 1291 1300 1298 1297 1296 1261
  #Guangxi
 1378  1376 1377  1380 1381 1382 1383    1379 
#North China
 1250 1245 1236 1252 1249
 
  #Taiwan    
  1361 1362 1363 1364   
   #Areas previously held by Japan      
             1328       1333 1334  1339 1336  1337 1338 1344  1345 1343 1350 1353 
 1318 1369 1365 1370 1346 1348    1367 1358 1360 1375
 1268 1256 1270 1271 1264 1263 1262 1272 1265 1266 1283 1284 1285
  # New Civil War Front
 1219 1220 1215 1211 1212 1217 1214 1207 1119 1205 1204 1202 1208 1216 1235 1236 1243 1250 1252 1249 1253
 1335 1342 1340 1341 1317 1320 1324 1322 1257 1315 1314 1258  1260 1269 1237 1218 1199

                
     } 
   # ROTW Minor Tech '36 
   # Group E 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = { 
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 1070 1080 1090 1100
1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260
#Motorized division
1396
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 1350
# Armoured Car  
2860 2870 2880 2020 2150
# Field Artillery 
2290 2300 2310 2900 2910 2920 2930 2940
# Tank 
7600 7610 2620 2010 2630 2640 2646 2650
#Interwar Light Cruiser 
3110 3120 3130 3140
#Early Heavy Cruiser 
3210 3220 3230
#Interwar Fighter  
4500 4510 4520 4530 4540 4550 4010 4020
#Interwar Bomber 
4600 4610 4620 4630 4120
# Manufacturing
5810 5080
# Construction Engineering 
5800
# Agriculture
5700 5710 5010
# Cryptography
5310 5316
#Naval Doctrines
8010 8020 8040 8050 8060 8070 8080
#Interbellum Supply 
1910 1920 1930 1940 1950 1960

#Multirole fighter
4300 4310 4320 
#ww1 strategic bomber
4800 4810 
#ww1 navalbomber
4700 4710
#Naval Infantry
#1560 
#Engineers
1830 1840 
# Destroyers
3010 3020
# Troopships
3810 3820
#Medicine
5600
#Improved Great War Hospital System
14000 14010 14020 14030


#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
9010 9040 9050 9090
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
6570 6300 6310 6320
5980
} 
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     free_market       = 9 
     freedom           = 4 
     professional_army = 6 
     defense_lobby     = 10 
     interventionism   = 8 
    } 
	wartime_ic_mod       = 0.9 # 1.2 	
   headofstate            = {  type = 9 id = 55001  } 
   headofgovernment       = {  type = 9 id = 55002  } 
   foreignminister        = {  type = 9 id = 55023  } 
   armamentminister       = {  type = 9 id = 55036  } 
   ministerofsecurity     = {  type = 9 id = 55053  } 
   ministerofintelligence = {  type = 9 id = 55065  } 
   chiefofstaff           = {  type = 9 id = 55074  } 
   chiefofarmy            = {  type = 9 id = 55081  } 
   chiefofnavy            = {  type = 9 id = 55086  } 
   chiefofair             = {  type = 9 id = 55093  } 
   dormant_ministers      = {  55001  }
   dormant_leaders        = {  55012 55303 55338 55370 55377 55003 55029 55018 55020  }
   dormant_teams          = {  55005  }
   landunit = 
   {  location = 1299 # Chongqing
     name     = "1. Juntuan" 
     id       = {  type = 22000 id = 1  } 
     Division = 
     { id         = {  type = 22000 id = 2  } 
       name       = "1. Bubing Shi" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 3  } 
       name       = "2. Bubing Shi" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1199 # Harbin
     name     = "3. Juntuan" 
     id       = {  type = 22000 id = 4  }
     Division = 
     { id         = {  type = 22000 id = 5  } 
       name       = "4. Bubing Shi" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 6  } 
       name       = "5. Bubing Shi" 
       type       = infantry 
	   strength  = 60
       model     = 8
      } 
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1253 # Linfen
     name     = "10. Juntuan" 
     id       = {  type = 22000 id = 7  }
     Division = 
     { id         = {  type = 22000 id = 8  } 
       name       = "6. Bubing Shi" 
       type       = infantry 
	   strength  = 60
       model     = 8
      } 
     Division = 
     { id         = {  type = 22000 id = 9  } 
       name       = "7. Bubing Shi" 
       type       = infantry 
	   strength  = 60
       model     = 8
      } 
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1236 # Chengde
     name     = "4. Juntuan" 
     id       = {  type = 22000 id = 10  }
     Division = 
     { id         = {  type = 22000 id = 11  } 
       name       = "8. Bubing Shi" 
       type       = infantry 
	   strength  = 60
       model     = 8
      } 
     Division = 
     { id         = {  type = 22000 id = 12  } 
       name       = "9. Bubing Shi" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 13  } 
       name       = "10. Bubing Shi" 
       type       = infantry 
	   strength  = 60
       model     = 8
      } 
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1256 # Baoji
     name     = "5. Juntuan" 
     id       = {  type = 22000 id = 14  }
     Division = 
     { id         = {  type = 22000 id = 15  } 
       name       = "1. Bubing Lü" 
       type       = militia 
	   strength  = 60
       model     = 5
      } 
     Division = 
     { id         = {  type = 22000 id = 16  } 
       name       = "2. Bubing Lü" 
       type       = militia 
	   strength  = 60
       model     = 5
      } 
     Division = 
     { id         = {  type = 22000 id = 17  } 
       name       = "3. Bubing Lü" 
       type       = militia 
	   strength  = 60
       model     = 5
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1339 # Souzhou
     name     = "6. Juntuan" 
     id       = {  type = 22000 id = 18  }
     Division = 
     { id         = {  type = 22000 id = 19  } 
       name       = "4. Bubing Lü" 
       type       = militia 
	   strength  = 60
       model     = 5
      } 
     Division = 
     { id         = {  type = 22000 id = 20  } 
       name       = "5. Bubing Lü" 
       type       = militia 
	   strength  = 60
       model     = 5
      } 
     Division = 
     { id         = {  type = 22000 id = 21  } 
       name       = "1. Guo Qibing Jun" 
       type       = cavalry 
	   strength  = 40
       model     = 10
	  extra = sp_artillery
	   brigade_model = 1
      }
     Division = 
     { id         = {  type = 22000 id = 22  } 
       name       = "6. Bubing Lü" 
       type       = militia 
	   strength  = 60
       model     = 5
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1324 # Zhengzhou
     name     = "7. Juntuan" 
     id       = {  type = 22000 id = 23  }
     Division = 
     { id         = {  type = 22000 id = 24  } 
       name       = "Xin 11. Bubing Shi" 
       type       = infantry 
	   strength  = 60
       model     = 8
      } 
     Division = 
     { id         = {  type = 22000 id = 25  } 
       name       = "7. Bubing Lü" 
       type       = militia 
	   strength  = 60
       model     = 5
      }
     Division = 
     { id         = {  type = 22000 id = 26  } 
       name       = "12. Bubing Shi" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     dig_in   = 20.000 
    }
 
   landunit = 
   {  location = 1271 # Wuzhong
     name     = "8. Juntuan" 
     id       = {  type = 22000 id = 70  }
     Division = 
     { id         = {  type = 22000 id = 71  } 
       name       = "8. Bubing Lü" 
       type       = militia 
	   strength  = 60
       model     = 5
      }
     Division = 
     { id         = {  type = 22000 id = 72  } 
       name       = "13. Bubing Shi" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 73  } 
       name       = "9. Bubing Lü" 
       type       = militia 
	   strength  = 60
       model     = 5
      }
     dig_in   = 20.000 
    }
	
	  landunit = 
   {  location = 1208 # Changchun
     name     = "9. Juntuan" 
     id       = {  type = 22000 id = 74  }
     Division = 
     { id         = {  type = 22000 id = 75  } 
       name       = "11. Bubing Shi" 
       type       = infantry 
	   strength  = 60
       model     = 8
	  	   extra = armored_car
	   brigade_model = 5
      }
	 Division = 
     { id         = {  type = 22000 id = 76  } 
       name       = "12. Bubing Shi" 
       type       = infantry 
	   strength  = 60
       model     = 8
	   extra = artillery
	   brigade_model = 10
      }
	 Division = 
     { id         = {  type = 22000 id = 77  } 
       name       = "1. KMT Manchuria HQ" 
       type       = hq 
	   strength  = 60
       model     = 5
      }
	  }
		  landunit = 
   {  location = 1205 # Mudanjiang
     name     = "12. Juntuan" 
     id       = {  type = 22000 id = 78  }
     Division = 
     { id         = {  type = 22000 id = 79  } 
       name       = "11. Bubing Shi" 
       type       = infantry 
	   strength  = 60
       model     = 8
	 	   extra = cavalry
	   brigade_model = 11
      }
	  Division = 
     { id         = {  type = 22000 id = 80  } 
       name       = "11. Bubing Lü" 
       type       = militia 
	   strength  = 60
       model     = 5
      }
	 	  Division = 
     { id         = {  type = 22000 id = 81  } 
       name       = "12. Bubing Lü" 
       type       = militia 
	   strength  = 60
       model     = 5
      }
	  }
			  landunit = 
   {  location = 1338 # Shanghai
     name     = "Shanghai Garrison" 
     id       = {  type = 22000 id = 90  }
     Division = 
     { id         = {  type = 22000 id = 91  } 
       name       = "13. Bubing Lü" 
       type       = militia 
	   strength  = 60
       model     = 5
      }
	  Division = 
     { id         = {  type = 22000 id = 92  } 
       name       = "14. Bubing Lü" 
       type       = militia 
	   strength  = 60
       model     = 5
      }
	 	  Division = 
     { id         = {  type = 22000 id = 93  } 
       name       = "15. Bubing Lü" 
       type       = militia 
	   strength  = 60
       model     = 5
      }
	   Division = 
     { id         = {  type = 22000 id = 94  } 
       name       = "16. Jun" 
       type       = garrison 
	   strength  = 60
       model     = 5
      }
	  }
  airunit =
  { location = 1297
    id       = { type = 22000 id = 300 }
    name     = "The Flying Tigers"
    base     = 1297
    division =
    { id    = { type = 22000 id = 301 }
      name  = "The Flying Tigers"
      type  = interceptor
      model = 6
    }
  }
  airunit =
  { location = 1297
    id       = { type = 22000 id = 302 }
    name     = "Zhongguo Kongjun"
    base     = 1297
    division =
    { id    = { type = 22000 id = 303 }
      name  = "1. Zhandouji"
      type  = interceptor
      model = 5
    }
    division =
    { id    = { type = 22000 id = 304 }
      name  = "1. Hongzhaji"
      type  = tactical_bomber
      model = 4
    }
    division =
    { id    = { type = 22000 id = 305 }
      name  = "1. Kongyunji"
      type  = transport_plane
      model = 4
    }
  }
  airunit =
  { location = 1297
    id       = { type = 22000 id = 306 }
    name     = "Zhongguo Kongjun"
    base     = 1297
    division =
    { id    = { type = 22000 id = 307 }
      name  = "Zhandouji Zhongdui"
      type  = interceptor
      model = 5
    }
  }
  
   navalunit =
  { location = 1338 # Shanghai
    id       = { type = 22000 id = 400 }
    name     = "ROC Navy"
    base     = 1338
    division =
    { id    = { type = 22000 id = 401 }
      name  = "'Kee Lung'"
      type  = destroyer
      model = 6
    }
	    division =
    { id    = { type = 22000 id = 402 }
      name  = "'Cheng Kung'"
      type  = destroyer
      model = 6
    }
		division =
    { id    = { type = 22000 id = 403 }
      name  = "'Hai Lung'"
      type  = submarine
      model = 5
    }
  }

} 
 