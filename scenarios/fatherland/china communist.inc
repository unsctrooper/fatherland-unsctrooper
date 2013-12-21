 
 ############################## 
 # Country definition for CHC # 
 ############################## 
  
  province = { id = 1330   # Jinan
   ic       = 2
 } 

 province = { id = 1247   # Beijing
   ic       = 2
 } 
  
 province = { id = 1323   # Anyang
   ic       = 2
 } 
 
 province = { id = 1241   # Tianjin
   ic       = 2
 } 
 
  province = { id = 1254   # Hequ
   ic       = 2
 } 
 
  province = { id = 1331   # Yantai
   ic       = 2
 } 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CHC 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes} }	
   intrinsic_gov_type     = leninist 
   extra_tc               = 7 
   capital                = 1259 # Yan'an 
   # Resource Reserves 
energy                 = 240
metal                  = 120
rare_materials         = 60
   oil                    = 100 
   supplies               = 800 
   money                  = 50 
   manpower               = 2000
   dissent                = 20 
   diplomacy = 
   { 
	 relation = {  tag = JAP value = -100  } 
     relation = {  tag = CHI value = -150  }  
     relation = {  tag = SOV value = 100  } 
     relation = {  tag = MON value = 25  }
     relation = {  tag = U67 value = 50  } 
     relation = {  tag = SIK value = 40  }
	 relation = {  tag = PRK value = 200 access = yes }
    } 
   SpyInfo                = {  country = "CHC" NumberOfSpies = 3  } 
   nationalprovinces      = {   
  
 #Communist China at start      
 1255 1259 1260
  
 #Nationalist China  
 1160 1256 1257 1258 1261 1262 1267 1291 1292 1293 1296 1297 1298 1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1321 1322 1323 1324 1325 1326 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360      
  
 #Yunnan          
 1385 1386 1387 1388 1389 1390 
  
 #Guanxi Clique  
  510 1361 1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383  
  
 #Shanxi       
  1241 1242 1243 1244 1245 1246 1247 1248 1249 1250 1251 1252 1253 1254 1327 1328 1329 1330 1331 1332   
  
 #Manchoukou 
 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1220 1235 1236 1237 2750   
  
 #Xibei san ma            
 1263 1264 1265 1266 1268 1269 1270 1271 1272 1283 1284 1285   
  
 #Tibet       
 1286 1287 1288 1289 1290 1294 1295 
  
 #Sinkiang        
 1273 1274 1275 1277 1279 1280 1281 1282 
  
 #India        
 1276 1278  
  
 #Japan In China     
 1219 1238 1239 1240 
  
 #European Possessions     
  1371 1372  
   
 #Taiwan     
  1362 1363 1364  
  
  } 
  
	ownedprovinces         = {  
	# New Civil War Front
1331 1329 1332 1330 1244 1242 1323 1327 1319 1321 1248 1259 1254 1251 1239 1246 1247 1241 1240 1210 1209 1213 1206 1200 1198 1201 1203 1197 1238 1255 
1250 1243 1252 1249 1260 1237
	} 
	controlledprovinces    = {  
	# New Civil War Front
1331 1329 1332 1330 1244 1242 1323 1327 1319 1321 1248 1259 1254 1251 1239 1246 1247 1241 1240 1210 1209 1213 1206 1200 1198 1201 1203 1197 1238 1255 
1250 1243 1252 1249 1260 1237
	} 
	claimedprovinces = { 
	1455 1458 #Arunachal Pradesh
						}    
	# Group E 1941 techs 
	# ###################### 
	# GW fighter 
	techapps = {  
	# Interceptor
	4500 4510 4520 4530 4540 4550 4010  
	# Armoured Car  
	2860 2870 2880 2020   
	# Field Artillery  
	2290 2300 2310 2900 2910 2920
	# Tank 
	7600 7610 2620
	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090
	# Supply 
	1910 1920 1930 1940 1950 1960 1970
	# Mountain Division
	1160 1170 1180 1190 1200 1210 1220 1230 1240
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360
	#Engineers
	1830 1840
	# Construction Engineering 
	5800 5080
	# Manufacturing
	5810
	# Agriculture
	5700
	# Crypto
	5316
	
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	# Manpower Focus
	6570
	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010   
	}
	
inventions = { 3000027 }
   blueprints             = {  } 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 10 
     free_market       = 1 
     freedom           = 2 
     professional_army = 6 
     defense_lobby     = 10 
     interventionism   = 5 
    } 
   headofstate            = {  type = 9 id = 260001  } 
   headofgovernment       = {  type = 9 id = 260002  } 
   foreignminister        = {  type = 9 id = 260003  } 
   armamentminister       = {  type = 9 id = 260018  } 
   ministerofsecurity     = {  type = 9 id = 260022  } 
   ministerofintelligence = {  type = 9 id = 260026  } 
   chiefofstaff           = {  type = 9 id = 260029  } 
   chiefofarmy            = {  type = 9 id = 260031  } 
   chiefofnavy            = {  type = 9 id = 260009  } 
   chiefofair             = {  type = 9 id = 260010  } 
   # ###### 
   # COMMUNSIT CHINA OOB
   # 7000 from First Red Army arrived Oct 35 (15 divisions at 5% strength up to 20% by Jan 36)
   # 2 other units did not arrive until 1 year later
   # ###### 
   landunit = 
   {  location = 1259 # Yan'an 
     name     = "1. Fangmianjun" 
     id       = {  type = 24000 id = 1  } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 2  } 
       name       = "1. Zhidui" 
       type       = bergsjaeger 
       strength  = 50 
       model      = 8 
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 3  } 
       name       = "2. Zhidui" 
       type       = bergsjaeger 
       strength  = 50 
       model      = 8 
	   extra = artillery
	   brigade_model = 10
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 4  } 
       name       = "3. Zhidui" 
       type       = bergsjaeger 
       strength  = 50 
       model      = 8 
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 5  } 
       name       = "1. Bubing Shi" 
       type       = infantry 
       strength  = 50
       model      = 8 
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 6  } 
       name       = "2. Bubing Shi" 
       type       = infantry 
       strength  = 50
       model      = 8 
      } 
     dig_in   = 20.000 
    } 
   landunit = 
   {  location = 1255 
     name     = "2. Fangmianjun" 
     id       = {  type = 24000 id = 7  } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 8  } 
       name       = "3. Bubing Shi" 
       type       = infantry 
       strength  = 50
       model      = 8 
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 9  } 
       name       = "4. Bubing Shi" 
       type       = infantry 
       strength  = 50
       model      = 8 
      } 
     dig_in   = 20.000 
    } 
   landunit = 
   {  location = 1247 # Beijing 
     name     = "3. Fangmianjun" 
     id       = {  type = 24000 id = 10  } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 11  } 
       name       = "1. Bubing Lü" 
       type       = militia 
       strength  = 60
       model      = 5
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 12  } 
       name       = "2. Bubing Lü" 
       type       = militia 
       strength  = 60
       model      = 5
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 13  } 
       name       = "3. Bubing Lü" 
       type       = militia 
       strength  = 60
       model      = 5
      } 
	  }
	     landunit = 
   {  location = 1246 # Zhanguyan 
     name     = "4. Fangmianjun" 
     id       = {  type = 24000 id = 14  } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 15  } 
       name       = "4. Bubing Lü" 
       type       = militia 
       strength  = 60
       model      = 5
      } 
	      Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 16  } 
       name       = "5. Bubing Shi" 
       type       = infantry 
       strength  = 60
       model      = 8
      } 
	  Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 17  } 
       name       = "5. Bubing Lü" 
       type       = militia 
       strength  = 60
       model      = 5
      } 
     dig_in   = 20.000
    } 
   landunit = 
   {  location = 1327 # Heze
     name     = "15. Juntuan" 
     id       = {  type = 24000 id = 18  } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 19  } 
       name       = "6. Bubing Lü" 
       type       = militia 
       strength  = 60
       model      = 5
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 20  } 
       name       = "6. Bubing Shi" 
       type       = infantry 
       strength  = 50
       model      = 8
      } 
	  }
   landunit = 
   {  location = 1329 # Weifang
     name     = "16. Juntuan" 
     id       = {  type = 24000 id = 21  } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 22  } 
       name       = "7. Bubing Shi" 
       type       = infantry 
       strength  = 50
       model      = 8 
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 23  } 
       name       = "8. Bubing Shi" 
       type       = infantry 
       strength  = 50
       model      = 8
      } 
     dig_in   = 20.000 
	     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 35  } 
       name       = "12. Bubing Shi" 
       type       = infantry 
       strength  = 50
       model      = 8
      } 
    } 
	   landunit = 
   {  location = 1213 # Baicheng
     name     = "1. Manchuria Guerilla Base" 
     id       = {  type = 24000 id = 24  } 
     Division = 
     { 
       id         = {  type = 24000 id = 25  } 
       name       = "7. Bubing Lü" 
       type       = militia 
       strength  = 60
       model      = 5
      } 
	  Division = 
     { 
       id         = {  type = 24000 id = 26  } 
       name       = "9. Bubing Shi" 
       type       = infantry 
       strength  = 60
       model      = 8
      } 
     Division = 
     {
       id         = {  type = 24000 id = 27  } 
       name       = "4. Zhidui" 
       type       = bergsjaeger 
       strength  = 60
       model      = 8
	   extra = artillery
	   brigade_model = 10
      } 
	  }
	 	   landunit = 
   {  location = 1203 # Qiqihaer
     name     = "2. Manchuria Guerilla Base" 
     id       = {  type = 24000 id = 28  } 
     Division = 
     {  
       id         = {  type = 24000 id = 29  } 
       name       = "10. Bubing Shi" 
       type       = infantry 
       strength  = 60
       model      = 8
      } 
	  Division = 
     {  
       id         = {  type = 24000 id = 30  } 
       name       = "11. Bubing Shi" 
       type       = infantry 
       strength  = 60
       model      = 8
      } 
     Division = 
     {
       id         = {  type = 24000 id = 31  } 
       name       = "5. Zhidui" 
       type       = bergsjaeger 
       strength  = 60
       model      = 8
      } 
	      Division = 
     {
       id         = {  type = 24000 id = 32  } 
       name       = "1. Manchuria HQ" 
       type       = hq 
       strength  = 60
       model      = 3
      } 
  } 
  
  	 	   landunit = 
   {  location = 1237 # Ulanyanqada
     name     = "3. Manchuria Guerilla Base" 
     id       = {  type = 24000 id = 34  } 
     Division = 
     {  
       id         = {  type = 24000 id = 35  } 
       name       = "12. Bubing Shi" 
       type       = infantry 
       strength  = 60
       model      = 8
      } 
	 Division = 
     {  
       id         = {  type = 24000 id = 36  } 
       name       = "13. Bubing Shi" 
       type       = infantry 
       strength  = 60
       model      = 8
      } 
}
  	 	   landunit = 
   {  location = 1252 # Tayiuan
     name     = "2. Capital Guerilla Base" 
     id       = {  type = 24000 id = 37  } 
     Division = 
     {  
       id         = {  type = 24000 id = 38  } 
       name       = "14. Bubing Shi" 
       type       = militia 
       strength  = 60
       model      = 5
      } 
	 Division = 
     {  
       id         = {  type = 24000 id = 39  } 
       name       = "15. Bubing Shi" 
       type       = militia 
       strength  = 60
       model      = 5
      } 
}


    airunit =
  { location = 1247 # Beijing
    id       = { type = 24000 id = 300 }
    name     = "Zhongguo Renmin Jiefangjun Kongjun"
    base     = 1247
    division =
    { id    = { type = 24000 id = 301 }
      name  = "1. Interceptor Wing"
      type  = interceptor
      model = 6
    }
    division =
    { id    = { type = 24000 id = 302 }
      name  = "1. Bomber Wing"
      type  = tactical_bomber
      model = 6
    }
  }

 }