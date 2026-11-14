#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D1018
// Address: 0x3d1018 - 0x3d1a80
void sub_003D1018_0x3d1018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1018_0x3d1018");
#endif

    switch (ctx->pc) {
        case 0x3d1018u: goto label_3d1018;
        case 0x3d101cu: goto label_3d101c;
        case 0x3d1020u: goto label_3d1020;
        case 0x3d1024u: goto label_3d1024;
        case 0x3d1028u: goto label_3d1028;
        case 0x3d102cu: goto label_3d102c;
        case 0x3d1030u: goto label_3d1030;
        case 0x3d1034u: goto label_3d1034;
        case 0x3d1038u: goto label_3d1038;
        case 0x3d103cu: goto label_3d103c;
        case 0x3d1040u: goto label_3d1040;
        case 0x3d1044u: goto label_3d1044;
        case 0x3d1048u: goto label_3d1048;
        case 0x3d104cu: goto label_3d104c;
        case 0x3d1050u: goto label_3d1050;
        case 0x3d1054u: goto label_3d1054;
        case 0x3d1058u: goto label_3d1058;
        case 0x3d105cu: goto label_3d105c;
        case 0x3d1060u: goto label_3d1060;
        case 0x3d1064u: goto label_3d1064;
        case 0x3d1068u: goto label_3d1068;
        case 0x3d106cu: goto label_3d106c;
        case 0x3d1070u: goto label_3d1070;
        case 0x3d1074u: goto label_3d1074;
        case 0x3d1078u: goto label_3d1078;
        case 0x3d107cu: goto label_3d107c;
        case 0x3d1080u: goto label_3d1080;
        case 0x3d1084u: goto label_3d1084;
        case 0x3d1088u: goto label_3d1088;
        case 0x3d108cu: goto label_3d108c;
        case 0x3d1090u: goto label_3d1090;
        case 0x3d1094u: goto label_3d1094;
        case 0x3d1098u: goto label_3d1098;
        case 0x3d109cu: goto label_3d109c;
        case 0x3d10a0u: goto label_3d10a0;
        case 0x3d10a4u: goto label_3d10a4;
        case 0x3d10a8u: goto label_3d10a8;
        case 0x3d10acu: goto label_3d10ac;
        case 0x3d10b0u: goto label_3d10b0;
        case 0x3d10b4u: goto label_3d10b4;
        case 0x3d10b8u: goto label_3d10b8;
        case 0x3d10bcu: goto label_3d10bc;
        case 0x3d10c0u: goto label_3d10c0;
        case 0x3d10c4u: goto label_3d10c4;
        case 0x3d10c8u: goto label_3d10c8;
        case 0x3d10ccu: goto label_3d10cc;
        case 0x3d10d0u: goto label_3d10d0;
        case 0x3d10d4u: goto label_3d10d4;
        case 0x3d10d8u: goto label_3d10d8;
        case 0x3d10dcu: goto label_3d10dc;
        case 0x3d10e0u: goto label_3d10e0;
        case 0x3d10e4u: goto label_3d10e4;
        case 0x3d10e8u: goto label_3d10e8;
        case 0x3d10ecu: goto label_3d10ec;
        case 0x3d10f0u: goto label_3d10f0;
        case 0x3d10f4u: goto label_3d10f4;
        case 0x3d10f8u: goto label_3d10f8;
        case 0x3d10fcu: goto label_3d10fc;
        case 0x3d1100u: goto label_3d1100;
        case 0x3d1104u: goto label_3d1104;
        case 0x3d1108u: goto label_3d1108;
        case 0x3d110cu: goto label_3d110c;
        case 0x3d1110u: goto label_3d1110;
        case 0x3d1114u: goto label_3d1114;
        case 0x3d1118u: goto label_3d1118;
        case 0x3d111cu: goto label_3d111c;
        case 0x3d1120u: goto label_3d1120;
        case 0x3d1124u: goto label_3d1124;
        case 0x3d1128u: goto label_3d1128;
        case 0x3d112cu: goto label_3d112c;
        case 0x3d1130u: goto label_3d1130;
        case 0x3d1134u: goto label_3d1134;
        case 0x3d1138u: goto label_3d1138;
        case 0x3d113cu: goto label_3d113c;
        case 0x3d1140u: goto label_3d1140;
        case 0x3d1144u: goto label_3d1144;
        case 0x3d1148u: goto label_3d1148;
        case 0x3d114cu: goto label_3d114c;
        case 0x3d1150u: goto label_3d1150;
        case 0x3d1154u: goto label_3d1154;
        case 0x3d1158u: goto label_3d1158;
        case 0x3d115cu: goto label_3d115c;
        case 0x3d1160u: goto label_3d1160;
        case 0x3d1164u: goto label_3d1164;
        case 0x3d1168u: goto label_3d1168;
        case 0x3d116cu: goto label_3d116c;
        case 0x3d1170u: goto label_3d1170;
        case 0x3d1174u: goto label_3d1174;
        case 0x3d1178u: goto label_3d1178;
        case 0x3d117cu: goto label_3d117c;
        case 0x3d1180u: goto label_3d1180;
        case 0x3d1184u: goto label_3d1184;
        case 0x3d1188u: goto label_3d1188;
        case 0x3d118cu: goto label_3d118c;
        case 0x3d1190u: goto label_3d1190;
        case 0x3d1194u: goto label_3d1194;
        case 0x3d1198u: goto label_3d1198;
        case 0x3d119cu: goto label_3d119c;
        case 0x3d11a0u: goto label_3d11a0;
        case 0x3d11a4u: goto label_3d11a4;
        case 0x3d11a8u: goto label_3d11a8;
        case 0x3d11acu: goto label_3d11ac;
        case 0x3d11b0u: goto label_3d11b0;
        case 0x3d11b4u: goto label_3d11b4;
        case 0x3d11b8u: goto label_3d11b8;
        case 0x3d11bcu: goto label_3d11bc;
        case 0x3d11c0u: goto label_3d11c0;
        case 0x3d11c4u: goto label_3d11c4;
        case 0x3d11c8u: goto label_3d11c8;
        case 0x3d11ccu: goto label_3d11cc;
        case 0x3d11d0u: goto label_3d11d0;
        case 0x3d11d4u: goto label_3d11d4;
        case 0x3d11d8u: goto label_3d11d8;
        case 0x3d11dcu: goto label_3d11dc;
        case 0x3d11e0u: goto label_3d11e0;
        case 0x3d11e4u: goto label_3d11e4;
        case 0x3d11e8u: goto label_3d11e8;
        case 0x3d11ecu: goto label_3d11ec;
        case 0x3d11f0u: goto label_3d11f0;
        case 0x3d11f4u: goto label_3d11f4;
        case 0x3d11f8u: goto label_3d11f8;
        case 0x3d11fcu: goto label_3d11fc;
        case 0x3d1200u: goto label_3d1200;
        case 0x3d1204u: goto label_3d1204;
        case 0x3d1208u: goto label_3d1208;
        case 0x3d120cu: goto label_3d120c;
        case 0x3d1210u: goto label_3d1210;
        case 0x3d1214u: goto label_3d1214;
        case 0x3d1218u: goto label_3d1218;
        case 0x3d121cu: goto label_3d121c;
        case 0x3d1220u: goto label_3d1220;
        case 0x3d1224u: goto label_3d1224;
        case 0x3d1228u: goto label_3d1228;
        case 0x3d122cu: goto label_3d122c;
        case 0x3d1230u: goto label_3d1230;
        case 0x3d1234u: goto label_3d1234;
        case 0x3d1238u: goto label_3d1238;
        case 0x3d123cu: goto label_3d123c;
        case 0x3d1240u: goto label_3d1240;
        case 0x3d1244u: goto label_3d1244;
        case 0x3d1248u: goto label_3d1248;
        case 0x3d124cu: goto label_3d124c;
        case 0x3d1250u: goto label_3d1250;
        case 0x3d1254u: goto label_3d1254;
        case 0x3d1258u: goto label_3d1258;
        case 0x3d125cu: goto label_3d125c;
        case 0x3d1260u: goto label_3d1260;
        case 0x3d1264u: goto label_3d1264;
        case 0x3d1268u: goto label_3d1268;
        case 0x3d126cu: goto label_3d126c;
        case 0x3d1270u: goto label_3d1270;
        case 0x3d1274u: goto label_3d1274;
        case 0x3d1278u: goto label_3d1278;
        case 0x3d127cu: goto label_3d127c;
        case 0x3d1280u: goto label_3d1280;
        case 0x3d1284u: goto label_3d1284;
        case 0x3d1288u: goto label_3d1288;
        case 0x3d128cu: goto label_3d128c;
        case 0x3d1290u: goto label_3d1290;
        case 0x3d1294u: goto label_3d1294;
        case 0x3d1298u: goto label_3d1298;
        case 0x3d129cu: goto label_3d129c;
        case 0x3d12a0u: goto label_3d12a0;
        case 0x3d12a4u: goto label_3d12a4;
        case 0x3d12a8u: goto label_3d12a8;
        case 0x3d12acu: goto label_3d12ac;
        case 0x3d12b0u: goto label_3d12b0;
        case 0x3d12b4u: goto label_3d12b4;
        case 0x3d12b8u: goto label_3d12b8;
        case 0x3d12bcu: goto label_3d12bc;
        case 0x3d12c0u: goto label_3d12c0;
        case 0x3d12c4u: goto label_3d12c4;
        case 0x3d12c8u: goto label_3d12c8;
        case 0x3d12ccu: goto label_3d12cc;
        case 0x3d12d0u: goto label_3d12d0;
        case 0x3d12d4u: goto label_3d12d4;
        case 0x3d12d8u: goto label_3d12d8;
        case 0x3d12dcu: goto label_3d12dc;
        case 0x3d12e0u: goto label_3d12e0;
        case 0x3d12e4u: goto label_3d12e4;
        case 0x3d12e8u: goto label_3d12e8;
        case 0x3d12ecu: goto label_3d12ec;
        case 0x3d12f0u: goto label_3d12f0;
        case 0x3d12f4u: goto label_3d12f4;
        case 0x3d12f8u: goto label_3d12f8;
        case 0x3d12fcu: goto label_3d12fc;
        case 0x3d1300u: goto label_3d1300;
        case 0x3d1304u: goto label_3d1304;
        case 0x3d1308u: goto label_3d1308;
        case 0x3d130cu: goto label_3d130c;
        case 0x3d1310u: goto label_3d1310;
        case 0x3d1314u: goto label_3d1314;
        case 0x3d1318u: goto label_3d1318;
        case 0x3d131cu: goto label_3d131c;
        case 0x3d1320u: goto label_3d1320;
        case 0x3d1324u: goto label_3d1324;
        case 0x3d1328u: goto label_3d1328;
        case 0x3d132cu: goto label_3d132c;
        case 0x3d1330u: goto label_3d1330;
        case 0x3d1334u: goto label_3d1334;
        case 0x3d1338u: goto label_3d1338;
        case 0x3d133cu: goto label_3d133c;
        case 0x3d1340u: goto label_3d1340;
        case 0x3d1344u: goto label_3d1344;
        case 0x3d1348u: goto label_3d1348;
        case 0x3d134cu: goto label_3d134c;
        case 0x3d1350u: goto label_3d1350;
        case 0x3d1354u: goto label_3d1354;
        case 0x3d1358u: goto label_3d1358;
        case 0x3d135cu: goto label_3d135c;
        case 0x3d1360u: goto label_3d1360;
        case 0x3d1364u: goto label_3d1364;
        case 0x3d1368u: goto label_3d1368;
        case 0x3d136cu: goto label_3d136c;
        case 0x3d1370u: goto label_3d1370;
        case 0x3d1374u: goto label_3d1374;
        case 0x3d1378u: goto label_3d1378;
        case 0x3d137cu: goto label_3d137c;
        case 0x3d1380u: goto label_3d1380;
        case 0x3d1384u: goto label_3d1384;
        case 0x3d1388u: goto label_3d1388;
        case 0x3d138cu: goto label_3d138c;
        case 0x3d1390u: goto label_3d1390;
        case 0x3d1394u: goto label_3d1394;
        case 0x3d1398u: goto label_3d1398;
        case 0x3d139cu: goto label_3d139c;
        case 0x3d13a0u: goto label_3d13a0;
        case 0x3d13a4u: goto label_3d13a4;
        case 0x3d13a8u: goto label_3d13a8;
        case 0x3d13acu: goto label_3d13ac;
        case 0x3d13b0u: goto label_3d13b0;
        case 0x3d13b4u: goto label_3d13b4;
        case 0x3d13b8u: goto label_3d13b8;
        case 0x3d13bcu: goto label_3d13bc;
        case 0x3d13c0u: goto label_3d13c0;
        case 0x3d13c4u: goto label_3d13c4;
        case 0x3d13c8u: goto label_3d13c8;
        case 0x3d13ccu: goto label_3d13cc;
        case 0x3d13d0u: goto label_3d13d0;
        case 0x3d13d4u: goto label_3d13d4;
        case 0x3d13d8u: goto label_3d13d8;
        case 0x3d13dcu: goto label_3d13dc;
        case 0x3d13e0u: goto label_3d13e0;
        case 0x3d13e4u: goto label_3d13e4;
        case 0x3d13e8u: goto label_3d13e8;
        case 0x3d13ecu: goto label_3d13ec;
        case 0x3d13f0u: goto label_3d13f0;
        case 0x3d13f4u: goto label_3d13f4;
        case 0x3d13f8u: goto label_3d13f8;
        case 0x3d13fcu: goto label_3d13fc;
        case 0x3d1400u: goto label_3d1400;
        case 0x3d1404u: goto label_3d1404;
        case 0x3d1408u: goto label_3d1408;
        case 0x3d140cu: goto label_3d140c;
        case 0x3d1410u: goto label_3d1410;
        case 0x3d1414u: goto label_3d1414;
        case 0x3d1418u: goto label_3d1418;
        case 0x3d141cu: goto label_3d141c;
        case 0x3d1420u: goto label_3d1420;
        case 0x3d1424u: goto label_3d1424;
        case 0x3d1428u: goto label_3d1428;
        case 0x3d142cu: goto label_3d142c;
        case 0x3d1430u: goto label_3d1430;
        case 0x3d1434u: goto label_3d1434;
        case 0x3d1438u: goto label_3d1438;
        case 0x3d143cu: goto label_3d143c;
        case 0x3d1440u: goto label_3d1440;
        case 0x3d1444u: goto label_3d1444;
        case 0x3d1448u: goto label_3d1448;
        case 0x3d144cu: goto label_3d144c;
        case 0x3d1450u: goto label_3d1450;
        case 0x3d1454u: goto label_3d1454;
        case 0x3d1458u: goto label_3d1458;
        case 0x3d145cu: goto label_3d145c;
        case 0x3d1460u: goto label_3d1460;
        case 0x3d1464u: goto label_3d1464;
        case 0x3d1468u: goto label_3d1468;
        case 0x3d146cu: goto label_3d146c;
        case 0x3d1470u: goto label_3d1470;
        case 0x3d1474u: goto label_3d1474;
        case 0x3d1478u: goto label_3d1478;
        case 0x3d147cu: goto label_3d147c;
        case 0x3d1480u: goto label_3d1480;
        case 0x3d1484u: goto label_3d1484;
        case 0x3d1488u: goto label_3d1488;
        case 0x3d148cu: goto label_3d148c;
        case 0x3d1490u: goto label_3d1490;
        case 0x3d1494u: goto label_3d1494;
        case 0x3d1498u: goto label_3d1498;
        case 0x3d149cu: goto label_3d149c;
        case 0x3d14a0u: goto label_3d14a0;
        case 0x3d14a4u: goto label_3d14a4;
        case 0x3d14a8u: goto label_3d14a8;
        case 0x3d14acu: goto label_3d14ac;
        case 0x3d14b0u: goto label_3d14b0;
        case 0x3d14b4u: goto label_3d14b4;
        case 0x3d14b8u: goto label_3d14b8;
        case 0x3d14bcu: goto label_3d14bc;
        case 0x3d14c0u: goto label_3d14c0;
        case 0x3d14c4u: goto label_3d14c4;
        case 0x3d14c8u: goto label_3d14c8;
        case 0x3d14ccu: goto label_3d14cc;
        case 0x3d14d0u: goto label_3d14d0;
        case 0x3d14d4u: goto label_3d14d4;
        case 0x3d14d8u: goto label_3d14d8;
        case 0x3d14dcu: goto label_3d14dc;
        case 0x3d14e0u: goto label_3d14e0;
        case 0x3d14e4u: goto label_3d14e4;
        case 0x3d14e8u: goto label_3d14e8;
        case 0x3d14ecu: goto label_3d14ec;
        case 0x3d14f0u: goto label_3d14f0;
        case 0x3d14f4u: goto label_3d14f4;
        case 0x3d14f8u: goto label_3d14f8;
        case 0x3d14fcu: goto label_3d14fc;
        case 0x3d1500u: goto label_3d1500;
        case 0x3d1504u: goto label_3d1504;
        case 0x3d1508u: goto label_3d1508;
        case 0x3d150cu: goto label_3d150c;
        case 0x3d1510u: goto label_3d1510;
        case 0x3d1514u: goto label_3d1514;
        case 0x3d1518u: goto label_3d1518;
        case 0x3d151cu: goto label_3d151c;
        case 0x3d1520u: goto label_3d1520;
        case 0x3d1524u: goto label_3d1524;
        case 0x3d1528u: goto label_3d1528;
        case 0x3d152cu: goto label_3d152c;
        case 0x3d1530u: goto label_3d1530;
        case 0x3d1534u: goto label_3d1534;
        case 0x3d1538u: goto label_3d1538;
        case 0x3d153cu: goto label_3d153c;
        case 0x3d1540u: goto label_3d1540;
        case 0x3d1544u: goto label_3d1544;
        case 0x3d1548u: goto label_3d1548;
        case 0x3d154cu: goto label_3d154c;
        case 0x3d1550u: goto label_3d1550;
        case 0x3d1554u: goto label_3d1554;
        case 0x3d1558u: goto label_3d1558;
        case 0x3d155cu: goto label_3d155c;
        case 0x3d1560u: goto label_3d1560;
        case 0x3d1564u: goto label_3d1564;
        case 0x3d1568u: goto label_3d1568;
        case 0x3d156cu: goto label_3d156c;
        case 0x3d1570u: goto label_3d1570;
        case 0x3d1574u: goto label_3d1574;
        case 0x3d1578u: goto label_3d1578;
        case 0x3d157cu: goto label_3d157c;
        case 0x3d1580u: goto label_3d1580;
        case 0x3d1584u: goto label_3d1584;
        case 0x3d1588u: goto label_3d1588;
        case 0x3d158cu: goto label_3d158c;
        case 0x3d1590u: goto label_3d1590;
        case 0x3d1594u: goto label_3d1594;
        case 0x3d1598u: goto label_3d1598;
        case 0x3d159cu: goto label_3d159c;
        case 0x3d15a0u: goto label_3d15a0;
        case 0x3d15a4u: goto label_3d15a4;
        case 0x3d15a8u: goto label_3d15a8;
        case 0x3d15acu: goto label_3d15ac;
        case 0x3d15b0u: goto label_3d15b0;
        case 0x3d15b4u: goto label_3d15b4;
        case 0x3d15b8u: goto label_3d15b8;
        case 0x3d15bcu: goto label_3d15bc;
        case 0x3d15c0u: goto label_3d15c0;
        case 0x3d15c4u: goto label_3d15c4;
        case 0x3d15c8u: goto label_3d15c8;
        case 0x3d15ccu: goto label_3d15cc;
        case 0x3d15d0u: goto label_3d15d0;
        case 0x3d15d4u: goto label_3d15d4;
        case 0x3d15d8u: goto label_3d15d8;
        case 0x3d15dcu: goto label_3d15dc;
        case 0x3d15e0u: goto label_3d15e0;
        case 0x3d15e4u: goto label_3d15e4;
        case 0x3d15e8u: goto label_3d15e8;
        case 0x3d15ecu: goto label_3d15ec;
        case 0x3d15f0u: goto label_3d15f0;
        case 0x3d15f4u: goto label_3d15f4;
        case 0x3d15f8u: goto label_3d15f8;
        case 0x3d15fcu: goto label_3d15fc;
        case 0x3d1600u: goto label_3d1600;
        case 0x3d1604u: goto label_3d1604;
        case 0x3d1608u: goto label_3d1608;
        case 0x3d160cu: goto label_3d160c;
        case 0x3d1610u: goto label_3d1610;
        case 0x3d1614u: goto label_3d1614;
        case 0x3d1618u: goto label_3d1618;
        case 0x3d161cu: goto label_3d161c;
        case 0x3d1620u: goto label_3d1620;
        case 0x3d1624u: goto label_3d1624;
        case 0x3d1628u: goto label_3d1628;
        case 0x3d162cu: goto label_3d162c;
        case 0x3d1630u: goto label_3d1630;
        case 0x3d1634u: goto label_3d1634;
        case 0x3d1638u: goto label_3d1638;
        case 0x3d163cu: goto label_3d163c;
        case 0x3d1640u: goto label_3d1640;
        case 0x3d1644u: goto label_3d1644;
        case 0x3d1648u: goto label_3d1648;
        case 0x3d164cu: goto label_3d164c;
        case 0x3d1650u: goto label_3d1650;
        case 0x3d1654u: goto label_3d1654;
        case 0x3d1658u: goto label_3d1658;
        case 0x3d165cu: goto label_3d165c;
        case 0x3d1660u: goto label_3d1660;
        case 0x3d1664u: goto label_3d1664;
        case 0x3d1668u: goto label_3d1668;
        case 0x3d166cu: goto label_3d166c;
        case 0x3d1670u: goto label_3d1670;
        case 0x3d1674u: goto label_3d1674;
        case 0x3d1678u: goto label_3d1678;
        case 0x3d167cu: goto label_3d167c;
        case 0x3d1680u: goto label_3d1680;
        case 0x3d1684u: goto label_3d1684;
        case 0x3d1688u: goto label_3d1688;
        case 0x3d168cu: goto label_3d168c;
        case 0x3d1690u: goto label_3d1690;
        case 0x3d1694u: goto label_3d1694;
        case 0x3d1698u: goto label_3d1698;
        case 0x3d169cu: goto label_3d169c;
        case 0x3d16a0u: goto label_3d16a0;
        case 0x3d16a4u: goto label_3d16a4;
        case 0x3d16a8u: goto label_3d16a8;
        case 0x3d16acu: goto label_3d16ac;
        case 0x3d16b0u: goto label_3d16b0;
        case 0x3d16b4u: goto label_3d16b4;
        case 0x3d16b8u: goto label_3d16b8;
        case 0x3d16bcu: goto label_3d16bc;
        case 0x3d16c0u: goto label_3d16c0;
        case 0x3d16c4u: goto label_3d16c4;
        case 0x3d16c8u: goto label_3d16c8;
        case 0x3d16ccu: goto label_3d16cc;
        case 0x3d16d0u: goto label_3d16d0;
        case 0x3d16d4u: goto label_3d16d4;
        case 0x3d16d8u: goto label_3d16d8;
        case 0x3d16dcu: goto label_3d16dc;
        case 0x3d16e0u: goto label_3d16e0;
        case 0x3d16e4u: goto label_3d16e4;
        case 0x3d16e8u: goto label_3d16e8;
        case 0x3d16ecu: goto label_3d16ec;
        case 0x3d16f0u: goto label_3d16f0;
        case 0x3d16f4u: goto label_3d16f4;
        case 0x3d16f8u: goto label_3d16f8;
        case 0x3d16fcu: goto label_3d16fc;
        case 0x3d1700u: goto label_3d1700;
        case 0x3d1704u: goto label_3d1704;
        case 0x3d1708u: goto label_3d1708;
        case 0x3d170cu: goto label_3d170c;
        case 0x3d1710u: goto label_3d1710;
        case 0x3d1714u: goto label_3d1714;
        case 0x3d1718u: goto label_3d1718;
        case 0x3d171cu: goto label_3d171c;
        case 0x3d1720u: goto label_3d1720;
        case 0x3d1724u: goto label_3d1724;
        case 0x3d1728u: goto label_3d1728;
        case 0x3d172cu: goto label_3d172c;
        case 0x3d1730u: goto label_3d1730;
        case 0x3d1734u: goto label_3d1734;
        case 0x3d1738u: goto label_3d1738;
        case 0x3d173cu: goto label_3d173c;
        case 0x3d1740u: goto label_3d1740;
        case 0x3d1744u: goto label_3d1744;
        case 0x3d1748u: goto label_3d1748;
        case 0x3d174cu: goto label_3d174c;
        case 0x3d1750u: goto label_3d1750;
        case 0x3d1754u: goto label_3d1754;
        case 0x3d1758u: goto label_3d1758;
        case 0x3d175cu: goto label_3d175c;
        case 0x3d1760u: goto label_3d1760;
        case 0x3d1764u: goto label_3d1764;
        case 0x3d1768u: goto label_3d1768;
        case 0x3d176cu: goto label_3d176c;
        case 0x3d1770u: goto label_3d1770;
        case 0x3d1774u: goto label_3d1774;
        case 0x3d1778u: goto label_3d1778;
        case 0x3d177cu: goto label_3d177c;
        case 0x3d1780u: goto label_3d1780;
        case 0x3d1784u: goto label_3d1784;
        case 0x3d1788u: goto label_3d1788;
        case 0x3d178cu: goto label_3d178c;
        case 0x3d1790u: goto label_3d1790;
        case 0x3d1794u: goto label_3d1794;
        case 0x3d1798u: goto label_3d1798;
        case 0x3d179cu: goto label_3d179c;
        case 0x3d17a0u: goto label_3d17a0;
        case 0x3d17a4u: goto label_3d17a4;
        case 0x3d17a8u: goto label_3d17a8;
        case 0x3d17acu: goto label_3d17ac;
        case 0x3d17b0u: goto label_3d17b0;
        case 0x3d17b4u: goto label_3d17b4;
        case 0x3d17b8u: goto label_3d17b8;
        case 0x3d17bcu: goto label_3d17bc;
        case 0x3d17c0u: goto label_3d17c0;
        case 0x3d17c4u: goto label_3d17c4;
        case 0x3d17c8u: goto label_3d17c8;
        case 0x3d17ccu: goto label_3d17cc;
        case 0x3d17d0u: goto label_3d17d0;
        case 0x3d17d4u: goto label_3d17d4;
        case 0x3d17d8u: goto label_3d17d8;
        case 0x3d17dcu: goto label_3d17dc;
        case 0x3d17e0u: goto label_3d17e0;
        case 0x3d17e4u: goto label_3d17e4;
        case 0x3d17e8u: goto label_3d17e8;
        case 0x3d17ecu: goto label_3d17ec;
        case 0x3d17f0u: goto label_3d17f0;
        case 0x3d17f4u: goto label_3d17f4;
        case 0x3d17f8u: goto label_3d17f8;
        case 0x3d17fcu: goto label_3d17fc;
        case 0x3d1800u: goto label_3d1800;
        case 0x3d1804u: goto label_3d1804;
        case 0x3d1808u: goto label_3d1808;
        case 0x3d180cu: goto label_3d180c;
        case 0x3d1810u: goto label_3d1810;
        case 0x3d1814u: goto label_3d1814;
        case 0x3d1818u: goto label_3d1818;
        case 0x3d181cu: goto label_3d181c;
        case 0x3d1820u: goto label_3d1820;
        case 0x3d1824u: goto label_3d1824;
        case 0x3d1828u: goto label_3d1828;
        case 0x3d182cu: goto label_3d182c;
        case 0x3d1830u: goto label_3d1830;
        case 0x3d1834u: goto label_3d1834;
        case 0x3d1838u: goto label_3d1838;
        case 0x3d183cu: goto label_3d183c;
        case 0x3d1840u: goto label_3d1840;
        case 0x3d1844u: goto label_3d1844;
        case 0x3d1848u: goto label_3d1848;
        case 0x3d184cu: goto label_3d184c;
        case 0x3d1850u: goto label_3d1850;
        case 0x3d1854u: goto label_3d1854;
        case 0x3d1858u: goto label_3d1858;
        case 0x3d185cu: goto label_3d185c;
        case 0x3d1860u: goto label_3d1860;
        case 0x3d1864u: goto label_3d1864;
        case 0x3d1868u: goto label_3d1868;
        case 0x3d186cu: goto label_3d186c;
        case 0x3d1870u: goto label_3d1870;
        case 0x3d1874u: goto label_3d1874;
        case 0x3d1878u: goto label_3d1878;
        case 0x3d187cu: goto label_3d187c;
        case 0x3d1880u: goto label_3d1880;
        case 0x3d1884u: goto label_3d1884;
        case 0x3d1888u: goto label_3d1888;
        case 0x3d188cu: goto label_3d188c;
        case 0x3d1890u: goto label_3d1890;
        case 0x3d1894u: goto label_3d1894;
        case 0x3d1898u: goto label_3d1898;
        case 0x3d189cu: goto label_3d189c;
        case 0x3d18a0u: goto label_3d18a0;
        case 0x3d18a4u: goto label_3d18a4;
        case 0x3d18a8u: goto label_3d18a8;
        case 0x3d18acu: goto label_3d18ac;
        case 0x3d18b0u: goto label_3d18b0;
        case 0x3d18b4u: goto label_3d18b4;
        case 0x3d18b8u: goto label_3d18b8;
        case 0x3d18bcu: goto label_3d18bc;
        case 0x3d18c0u: goto label_3d18c0;
        case 0x3d18c4u: goto label_3d18c4;
        case 0x3d18c8u: goto label_3d18c8;
        case 0x3d18ccu: goto label_3d18cc;
        case 0x3d18d0u: goto label_3d18d0;
        case 0x3d18d4u: goto label_3d18d4;
        case 0x3d18d8u: goto label_3d18d8;
        case 0x3d18dcu: goto label_3d18dc;
        case 0x3d18e0u: goto label_3d18e0;
        case 0x3d18e4u: goto label_3d18e4;
        case 0x3d18e8u: goto label_3d18e8;
        case 0x3d18ecu: goto label_3d18ec;
        case 0x3d18f0u: goto label_3d18f0;
        case 0x3d18f4u: goto label_3d18f4;
        case 0x3d18f8u: goto label_3d18f8;
        case 0x3d18fcu: goto label_3d18fc;
        case 0x3d1900u: goto label_3d1900;
        case 0x3d1904u: goto label_3d1904;
        case 0x3d1908u: goto label_3d1908;
        case 0x3d190cu: goto label_3d190c;
        case 0x3d1910u: goto label_3d1910;
        case 0x3d1914u: goto label_3d1914;
        case 0x3d1918u: goto label_3d1918;
        case 0x3d191cu: goto label_3d191c;
        case 0x3d1920u: goto label_3d1920;
        case 0x3d1924u: goto label_3d1924;
        case 0x3d1928u: goto label_3d1928;
        case 0x3d192cu: goto label_3d192c;
        case 0x3d1930u: goto label_3d1930;
        case 0x3d1934u: goto label_3d1934;
        case 0x3d1938u: goto label_3d1938;
        case 0x3d193cu: goto label_3d193c;
        case 0x3d1940u: goto label_3d1940;
        case 0x3d1944u: goto label_3d1944;
        case 0x3d1948u: goto label_3d1948;
        case 0x3d194cu: goto label_3d194c;
        case 0x3d1950u: goto label_3d1950;
        case 0x3d1954u: goto label_3d1954;
        case 0x3d1958u: goto label_3d1958;
        case 0x3d195cu: goto label_3d195c;
        case 0x3d1960u: goto label_3d1960;
        case 0x3d1964u: goto label_3d1964;
        case 0x3d1968u: goto label_3d1968;
        case 0x3d196cu: goto label_3d196c;
        case 0x3d1970u: goto label_3d1970;
        case 0x3d1974u: goto label_3d1974;
        case 0x3d1978u: goto label_3d1978;
        case 0x3d197cu: goto label_3d197c;
        case 0x3d1980u: goto label_3d1980;
        case 0x3d1984u: goto label_3d1984;
        case 0x3d1988u: goto label_3d1988;
        case 0x3d198cu: goto label_3d198c;
        case 0x3d1990u: goto label_3d1990;
        case 0x3d1994u: goto label_3d1994;
        case 0x3d1998u: goto label_3d1998;
        case 0x3d199cu: goto label_3d199c;
        case 0x3d19a0u: goto label_3d19a0;
        case 0x3d19a4u: goto label_3d19a4;
        case 0x3d19a8u: goto label_3d19a8;
        case 0x3d19acu: goto label_3d19ac;
        case 0x3d19b0u: goto label_3d19b0;
        case 0x3d19b4u: goto label_3d19b4;
        case 0x3d19b8u: goto label_3d19b8;
        case 0x3d19bcu: goto label_3d19bc;
        case 0x3d19c0u: goto label_3d19c0;
        case 0x3d19c4u: goto label_3d19c4;
        case 0x3d19c8u: goto label_3d19c8;
        case 0x3d19ccu: goto label_3d19cc;
        case 0x3d19d0u: goto label_3d19d0;
        case 0x3d19d4u: goto label_3d19d4;
        case 0x3d19d8u: goto label_3d19d8;
        case 0x3d19dcu: goto label_3d19dc;
        case 0x3d19e0u: goto label_3d19e0;
        case 0x3d19e4u: goto label_3d19e4;
        case 0x3d19e8u: goto label_3d19e8;
        case 0x3d19ecu: goto label_3d19ec;
        case 0x3d19f0u: goto label_3d19f0;
        case 0x3d19f4u: goto label_3d19f4;
        case 0x3d19f8u: goto label_3d19f8;
        case 0x3d19fcu: goto label_3d19fc;
        case 0x3d1a00u: goto label_3d1a00;
        case 0x3d1a04u: goto label_3d1a04;
        case 0x3d1a08u: goto label_3d1a08;
        case 0x3d1a0cu: goto label_3d1a0c;
        case 0x3d1a10u: goto label_3d1a10;
        case 0x3d1a14u: goto label_3d1a14;
        case 0x3d1a18u: goto label_3d1a18;
        case 0x3d1a1cu: goto label_3d1a1c;
        case 0x3d1a20u: goto label_3d1a20;
        case 0x3d1a24u: goto label_3d1a24;
        case 0x3d1a28u: goto label_3d1a28;
        case 0x3d1a2cu: goto label_3d1a2c;
        case 0x3d1a30u: goto label_3d1a30;
        case 0x3d1a34u: goto label_3d1a34;
        case 0x3d1a38u: goto label_3d1a38;
        case 0x3d1a3cu: goto label_3d1a3c;
        case 0x3d1a40u: goto label_3d1a40;
        case 0x3d1a44u: goto label_3d1a44;
        case 0x3d1a48u: goto label_3d1a48;
        case 0x3d1a4cu: goto label_3d1a4c;
        case 0x3d1a50u: goto label_3d1a50;
        case 0x3d1a54u: goto label_3d1a54;
        case 0x3d1a58u: goto label_3d1a58;
        case 0x3d1a5cu: goto label_3d1a5c;
        case 0x3d1a60u: goto label_3d1a60;
        case 0x3d1a64u: goto label_3d1a64;
        case 0x3d1a68u: goto label_3d1a68;
        case 0x3d1a6cu: goto label_3d1a6c;
        case 0x3d1a70u: goto label_3d1a70;
        case 0x3d1a74u: goto label_3d1a74;
        case 0x3d1a78u: goto label_3d1a78;
        case 0x3d1a7cu: goto label_3d1a7c;
        default: break;
    }

    ctx->pc = 0x3d1018u;

label_3d1018:
    // 0x3d1018: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x3d1018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_3d101c:
    // 0x3d101c: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x3d101cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
label_3d1020:
    // 0x3d1020: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x3d1020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
label_3d1024:
    // 0x3d1024: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3d1024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d1028:
    // 0x3d1028: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x3d1028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
label_3d102c:
    // 0x3d102c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d102cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d1030:
    // 0x3d1030: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x3d1030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
label_3d1034:
    // 0x3d1034: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d1034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d1038:
    // 0x3d1038: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x3d1038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
label_3d103c:
    // 0x3d103c: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x3d103cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
label_3d1040:
    // 0x3d1040: 0x7fb60130  sq          $s6, 0x130($sp)
    ctx->pc = 0x3d1040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 22));
label_3d1044:
    // 0x3d1044: 0x7fb70120  sq          $s7, 0x120($sp)
    ctx->pc = 0x3d1044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 23));
label_3d1048:
    // 0x3d1048: 0x7fbe0110  sq          $fp, 0x110($sp)
    ctx->pc = 0x3d1048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 30));
label_3d104c:
    // 0x3d104c: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x3d104cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_3d1050:
    // 0x3d1050: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x3d1050u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_3d1054:
    // 0x3d1054: 0xc0f43c2  jal         func_3D0F08
label_3d1058:
    if (ctx->pc == 0x3D1058u) {
        ctx->pc = 0x3D1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1054u;
        // 0x3d1058: 0xe7b401a0  swc1        $f20, 0x1A0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D105Cu;
        goto label_3d105c;
    }
    ctx->pc = 0x3D1054u;
    SET_GPR_U32(ctx, 31, 0x3D105Cu);
    ctx->pc = 0x3D1058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1054u;
    // 0x3d1058: 0xe7b401a0  swc1        $f20, 0x1A0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0F08u, 0x3D1054u, 0x3D105Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D105Cu;
label_3d105c:
    // 0x3d105c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3d1060:
    if (ctx->pc == 0x3D1060u) {
        ctx->pc = 0x3D1060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D105Cu;
        // 0x3d1060: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1064u;
        goto label_3d1064;
    }
    ctx->pc = 0x3D105Cu;
    {
        const bool branch_taken_0x3d105c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D105Cu;
        // 0x3d1060: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d105c) {
            ctx->pc = 0x3D106Cu;
            goto label_3d106c;
        }
    }
    ctx->pc = 0x3D1064u;
label_3d1064:
    // 0x3d1064: 0x10000250  b           . + 4 + (0x250 << 2)
label_3d1068:
    if (ctx->pc == 0x3D1068u) {
        ctx->pc = 0x3D1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1064u;
        // 0x3d1068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D106Cu;
        goto label_3d106c;
    }
    ctx->pc = 0x3D1064u;
    {
        const bool branch_taken_0x3d1064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1064u;
        // 0x3d1068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1064) {
            ctx->pc = 0x3D19A8u;
            goto label_3d19a8;
        }
    }
    ctx->pc = 0x3D106Cu;
label_3d106c:
    // 0x3d106c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d106cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d1070:
    // 0x3d1070: 0x2446b1e0  addiu       $a2, $v0, -0x4E20
    ctx->pc = 0x3d1070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
label_3d1074:
    // 0x3d1074: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x3d1074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3d1078:
    // 0x3d1078: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x3d1078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_3d107c:
    // 0x3d107c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_3d1080:
    if (ctx->pc == 0x3D1080u) {
        ctx->pc = 0x3D1080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D107Cu;
        // 0x3d1080: 0x62b821  addu        $s7, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1084u;
        goto label_3d1084;
    }
    ctx->pc = 0x3D107Cu;
    {
        const bool branch_taken_0x3d107c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D107Cu;
        // 0x3d1080: 0x62b821  addu        $s7, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d107c) {
            ctx->pc = 0x3D108Cu;
            goto label_3d108c;
        }
    }
    ctx->pc = 0x3D1084u;
label_3d1084:
    // 0x3d1084: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d1088:
    if (ctx->pc == 0x3D1088u) {
        ctx->pc = 0x3D1088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1084u;
        // 0x3d1088: 0xafa000e8  sw          $zero, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D108Cu;
        goto label_3d108c;
    }
    ctx->pc = 0x3D1084u;
    {
        const bool branch_taken_0x3d1084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1084u;
        // 0x3d1088: 0xafa000e8  sw          $zero, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1084) {
            ctx->pc = 0x3D10A4u;
            goto label_3d10a4;
        }
    }
    ctx->pc = 0x3D108Cu;
label_3d108c:
    // 0x3d108c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3d108cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3d1090:
    // 0x3d1090: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3d1090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3d1094:
    // 0x3d1094: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x3d1094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
label_3d1098:
    // 0x3d1098: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d1098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d109c:
    // 0x3d109c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_3d10a0:
    if (ctx->pc == 0x3D10A0u) {
        ctx->pc = 0x3D10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D109Cu;
        // 0x3d10a0: 0x8fa400e8  lw          $a0, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D10A4u;
        goto label_3d10a4;
    }
    ctx->pc = 0x3D109Cu;
    {
        const bool branch_taken_0x3d109c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D109Cu;
        // 0x3d10a0: 0x8fa400e8  lw          $a0, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d109c) {
            ctx->pc = 0x3D10C0u;
            goto label_3d10c0;
        }
    }
    ctx->pc = 0x3D10A4u;
label_3d10a4:
    // 0x3d10a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d10a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d10a8:
    // 0x3d10a8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3d10a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d10ac:
    // 0x3d10ac: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x3d10acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3d10b0:
    // 0x3d10b0: 0xc0f3bd0  jal         func_3CEF40
label_3d10b4:
    if (ctx->pc == 0x3D10B4u) {
        ctx->pc = 0x3D10B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D10B0u;
        // 0x3d10b4: 0x27a700e4  addiu       $a3, $sp, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D10B8u;
        goto label_3d10b8;
    }
    ctx->pc = 0x3D10B0u;
    SET_GPR_U32(ctx, 31, 0x3D10B8u);
    ctx->pc = 0x3D10B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D10B0u;
    // 0x3d10b4: 0x27a700e4  addiu       $a3, $sp, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CEF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CEF40u, 0x3D10B0u, 0x3D10B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D10B8u;
label_3d10b8:
    // 0x3d10b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3d10bc:
    if (ctx->pc == 0x3D10BCu) {
        ctx->pc = 0x3D10BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D10B8u;
        // 0x3d10bc: 0x8fa500e4  lw          $a1, 0xE4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D10C0u;
        goto label_3d10c0;
    }
    ctx->pc = 0x3D10B8u;
    {
        const bool branch_taken_0x3d10b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D10BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D10B8u;
        // 0x3d10bc: 0x8fa500e4  lw          $a1, 0xE4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d10b8) {
            ctx->pc = 0x3D10D0u;
            goto label_3d10d0;
        }
    }
    ctx->pc = 0x3D10C0u;
label_3d10c0:
    // 0x3d10c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3d10c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3d10c4:
    // 0x3d10c4: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x3d10c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_3d10c8:
    // 0x3d10c8: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x3d10c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_3d10cc:
    // 0x3d10cc: 0x8fa500e4  lw          $a1, 0xE4($sp)
    ctx->pc = 0x3d10ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_3d10d0:
    // 0x3d10d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d10d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d10d4:
    // 0x3d10d4: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x3d10d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3d10d8:
    // 0x3d10d8: 0xc0f40f0  jal         func_3D03C0
label_3d10dc:
    if (ctx->pc == 0x3D10DCu) {
        ctx->pc = 0x3D10DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D10D8u;
        // 0x3d10dc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D10E0u;
        goto label_3d10e0;
    }
    ctx->pc = 0x3D10D8u;
    SET_GPR_U32(ctx, 31, 0x3D10E0u);
    ctx->pc = 0x3D10DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D10D8u;
    // 0x3d10dc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D03C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D03C0u, 0x3D10D8u, 0x3D10E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D10E0u;
label_3d10e0:
    // 0x3d10e0: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x3d10e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_3d10e4:
    // 0x3d10e4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_3d10e8:
    if (ctx->pc == 0x3D10E8u) {
        ctx->pc = 0x3D10E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D10E4u;
        // 0x3d10e8: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D10ECu;
        goto label_3d10ec;
    }
    ctx->pc = 0x3D10E4u;
    {
        const bool branch_taken_0x3d10e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D10E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D10E4u;
        // 0x3d10e8: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d10e4) {
            ctx->pc = 0x3D10F8u;
            goto label_3d10f8;
        }
    }
    ctx->pc = 0x3D10ECu;
label_3d10ec:
    // 0x3d10ec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3d10ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3d10f0:
    // 0x3d10f0: 0x54400095  bnel        $v0, $zero, . + 4 + (0x95 << 2)
label_3d10f4:
    if (ctx->pc == 0x3D10F4u) {
        ctx->pc = 0x3D10F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D10F0u;
        // 0x3d10f4: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D10F8u;
        goto label_3d10f8;
    }
    ctx->pc = 0x3D10F0u;
    {
        const bool branch_taken_0x3d10f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d10f0) {
            ctx->pc = 0x3D10F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D10F0u;
            // 0x3d10f4: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D1348u;
            goto label_3d1348;
        }
    }
    ctx->pc = 0x3D10F8u;
label_3d10f8:
    // 0x3d10f8: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x3d10f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_3d10fc:
    // 0x3d10fc: 0x1840008a  blez        $v0, . + 4 + (0x8A << 2)
label_3d1100:
    if (ctx->pc == 0x3D1100u) {
        ctx->pc = 0x3D1100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D10FCu;
        // 0x3d1100: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1104u;
        goto label_3d1104;
    }
    ctx->pc = 0x3D10FCu;
    {
        const bool branch_taken_0x3d10fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3D1100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D10FCu;
        // 0x3d1100: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d10fc) {
            ctx->pc = 0x3D1328u;
            goto label_3d1328;
        }
    }
    ctx->pc = 0x3D1104u;
label_3d1104:
    // 0x3d1104: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3d1104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_3d1108:
    // 0x3d1108: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d1108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d110c:
    // 0x3d110c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3d110cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3d1110:
    // 0x3d1110: 0x2455b298  addiu       $s5, $v0, -0x4D68
    ctx->pc = 0x3d1110u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947480));
label_3d1114:
    // 0x3d1114: 0x2407002c  addiu       $a3, $zero, 0x2C
    ctx->pc = 0x3d1114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_3d1118:
    // 0x3d1118: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x3d1118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3d111c:
    // 0x3d111c: 0x2671818  mult        $v1, $s3, $a3
    ctx->pc = 0x3d111cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3d1120:
    // 0x3d1120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d1120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d1124:
    // 0x3d1124: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x3d1124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d1128:
    // 0x3d1128: 0xc1036da  jal         func_40DB68
label_3d112c:
    if (ctx->pc == 0x3D112Cu) {
        ctx->pc = 0x3D112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1128u;
        // 0x3d112c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1130u;
        goto label_3d1130;
    }
    ctx->pc = 0x3D1128u;
    SET_GPR_U32(ctx, 31, 0x3D1130u);
    ctx->pc = 0x3D112Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1128u;
    // 0x3d112c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D1128u, 0x3D1130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1130u;
label_3d1130:
    // 0x3d1130: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d1130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d1134:
    // 0x3d1134: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3d1134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3d1138:
    // 0x3d1138: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3d113c:
    if (ctx->pc == 0x3D113Cu) {
        ctx->pc = 0x3D113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1138u;
        // 0x3d113c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1140u;
        goto label_3d1140;
    }
    ctx->pc = 0x3D1138u;
    {
        const bool branch_taken_0x3d1138 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3D113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1138u;
        // 0x3d113c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1138) {
            ctx->pc = 0x3D1150u;
            goto label_3d1150;
        }
    }
    ctx->pc = 0x3D1140u;
label_3d1140:
    // 0x3d1140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d1140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d1144:
    // 0x3d1144: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d1144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3d1148:
    // 0x3d1148: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d114c:
    if (ctx->pc == 0x3D114Cu) {
        ctx->pc = 0x3D114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1148u;
        // 0x3d114c: 0x94840000  lhu         $a0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1150u;
        goto label_3d1150;
    }
    ctx->pc = 0x3D1148u;
    {
        const bool branch_taken_0x3d1148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1148u;
        // 0x3d114c: 0x94840000  lhu         $a0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1148) {
            ctx->pc = 0x3D1168u;
            goto label_3d1168;
        }
    }
    ctx->pc = 0x3D1150u;
label_3d1150:
    // 0x3d1150: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d1150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d1154:
    // 0x3d1154: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d1154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3d1158:
    // 0x3d1158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d1158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d115c:
    // 0x3d115c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d115cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3d1160:
    // 0x3d1160: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d1160u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3d1164:
    // 0x3d1164: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x3d1164u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_3d1168:
    // 0x3d1168: 0x4600ad03  div.s       $f20, $f21, $f0
    ctx->pc = 0x3d1168u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
label_3d116c:
    // 0x3d116c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x3d116cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3d1170:
    // 0x3d1170: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d1170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d1174:
    // 0x3d1174: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3d1174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3d1178:
    // 0x3d1178: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d1178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3d117c:
    // 0x3d117c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3d117cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d1180:
    // 0x3d1180: 0x30540007  andi        $s4, $v0, 0x7
    ctx->pc = 0x3d1180u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_3d1184:
    // 0x3d1184: 0x1000005e  b           . + 4 + (0x5E << 2)
label_3d1188:
    if (ctx->pc == 0x3D1188u) {
        ctx->pc = 0x3D1188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1184u;
        // 0x3d1188: 0x26760001  addiu       $s6, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D118Cu;
        goto label_3d118c;
    }
    ctx->pc = 0x3D1184u;
    {
        const bool branch_taken_0x3d1184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1184u;
        // 0x3d1188: 0x26760001  addiu       $s6, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1184) {
            ctx->pc = 0x3D1300u;
            goto label_3d1300;
        }
    }
    ctx->pc = 0x3D118Cu;
label_3d118c:
    // 0x3d118c: 0x0  nop
    ctx->pc = 0x3d118cu;
    // NOP
label_3d1190:
    // 0x3d1190: 0xc1036da  jal         func_40DB68
label_3d1194:
    if (ctx->pc == 0x3D1194u) {
        ctx->pc = 0x3D1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1190u;
        // 0x3d1194: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1198u;
        goto label_3d1198;
    }
    ctx->pc = 0x3D1190u;
    SET_GPR_U32(ctx, 31, 0x3D1198u);
    ctx->pc = 0x3D1194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1190u;
    // 0x3d1194: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D1190u, 0x3D1198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1198u;
label_3d1198:
    // 0x3d1198: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x3d1198u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3d119c:
    // 0x3d119c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x3d119cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_3d11a0:
    // 0x3d11a0: 0x28b1818  mult        $v1, $s4, $t3
    ctx->pc = 0x3d11a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3d11a4:
    // 0x3d11a4: 0x2529b2e0  addiu       $t1, $t1, -0x4D20
    ctx->pc = 0x3d11a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947552));
label_3d11a8:
    // 0x3d11a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3d11a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d11ac:
    // 0x3d11ac: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x3d11acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_3d11b0:
    // 0x3d11b0: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x3d11b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3d11b4:
    // 0x3d11b4: 0x24cc0006  addiu       $t4, $a2, 0x6
    ctx->pc = 0x3d11b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
label_3d11b8:
    // 0x3d11b8: 0x3508fff8  ori         $t0, $t0, 0xFFF8
    ctx->pc = 0x3d11b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65528);
label_3d11bc:
    // 0x3d11bc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3d11bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d11c0:
    // 0x3d11c0: 0x695021  addu        $t2, $v1, $t1
    ctx->pc = 0x3d11c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3d11c4:
    // 0x3d11c4: 0x754821  addu        $t1, $v1, $s5
    ctx->pc = 0x3d11c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_3d11c8:
    // 0x3d11c8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x3d11c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_3d11cc:
    // 0x3d11cc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x3d11ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3d11d0:
    // 0x3d11d0: 0x4b1018  mult        $v0, $v0, $t3
    ctx->pc = 0x3d11d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3d11d4:
    // 0x3d11d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d11d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d11d8:
    // 0x3d11d8: 0x684d0007  ldl         $t5, 0x7($v0)
    ctx->pc = 0x3d11d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
label_3d11dc:
    // 0x3d11dc: 0x6c4d0000  ldr         $t5, 0x0($v0)
    ctx->pc = 0x3d11dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_3d11e0:
    // 0x3d11e0: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x3d11e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3d11e4:
    // 0x3d11e4: 0xb3ad0017  sdl         $t5, 0x17($sp)
    ctx->pc = 0x3d11e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d11e8:
    // 0x3d11e8: 0xb7ad0010  sdr         $t5, 0x10($sp)
    ctx->pc = 0x3d11e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d11ec:
    // 0x3d11ec: 0xafae0018  sw          $t6, 0x18($sp)
    ctx->pc = 0x3d11ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 14));
label_3d11f0:
    // 0x3d11f0: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x3d11f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d11f4:
    // 0x3d11f4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3d11f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d11f8:
    // 0x3d11f8: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x3d11f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d11fc:
    // 0x3d11fc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3d11fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3d1200:
    // 0x3d1200: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x3d1200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3d1204:
    // 0x3d1204: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x3d1204u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3d1208:
    // 0x3d1208: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3d1208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d120c:
    // 0x3d120c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x3d120cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_3d1210:
    // 0x3d1210: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x3d1210u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3d1214:
    // 0x3d1214: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3d1214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d1218:
    // 0x3d1218: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x3d1218u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_3d121c:
    // 0x3d121c: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x3d121cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3d1220:
    // 0x3d1220: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x3d1220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d1224:
    // 0x3d1224: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3d1224u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3d1228:
    // 0x3d1228: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x3d1228u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3d122c:
    // 0x3d122c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x3d122cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d1230:
    // 0x3d1230: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3d1230u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3d1234:
    // 0x3d1234: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x3d1234u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3d1238:
    // 0x3d1238: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x3d1238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d123c:
    // 0x3d123c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x3d123cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_3d1240:
    // 0x3d1240: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x3d1240u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3d1244:
    // 0x3d1244: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x3d1244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d1248:
    // 0x3d1248: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x3d1248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d124c:
    // 0x3d124c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3d124cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3d1250:
    // 0x3d1250: 0xc5250004  lwc1        $f5, 0x4($t1)
    ctx->pc = 0x3d1250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3d1254:
    // 0x3d1254: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x3d1254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_3d1258:
    // 0x3d1258: 0xc5460004  lwc1        $f6, 0x4($t2)
    ctx->pc = 0x3d1258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3d125c:
    // 0x3d125c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3d125cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3d1260:
    // 0x3d1260: 0x46051942  mul.s       $f5, $f3, $f5
    ctx->pc = 0x3d1260u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_3d1264:
    // 0x3d1264: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x3d1264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d1268:
    // 0x3d1268: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x3d1268u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
label_3d126c:
    // 0x3d126c: 0xc5270008  lwc1        $f7, 0x8($t1)
    ctx->pc = 0x3d126cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3d1270:
    // 0x3d1270: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x3d1270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_3d1274:
    // 0x3d1274: 0xcc202a  slt         $a0, $a2, $t4
    ctx->pc = 0x3d1274u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_3d1278:
    // 0x3d1278: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x3d1278u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_3d127c:
    // 0x3d127c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3d127cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_3d1280:
    // 0x3d1280: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x3d1280u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
label_3d1284:
    // 0x3d1284: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3d1284u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3d1288:
    // 0x3d1288: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3d1288u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_3d128c:
    // 0x3d128c: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x3d128cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3d1290:
    // 0x3d1290: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x3d1290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3d1294:
    // 0x3d1294: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x3d1294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d1298:
    // 0x3d1298: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d1298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3d129c:
    // 0x3d129c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3d129cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3d12a0:
    // 0x3d12a0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3d12a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3d12a4:
    // 0x3d12a4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x3d12a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d12a8:
    // 0x3d12a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3d12a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3d12ac:
    // 0x3d12ac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3d12acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3d12b0:
    // 0x3d12b0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x3d12b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_3d12b4:
    // 0x3d12b4: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x3d12b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_3d12b8:
    // 0x3d12b8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3d12b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_3d12bc:
    // 0x3d12bc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3d12bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3d12c0:
    // 0x3d12c0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3d12c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3d12c4:
    // 0x3d12c4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3d12c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3d12c8:
    // 0x3d12c8: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x3d12c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_3d12cc:
    // 0x3d12cc: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x3d12ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_3d12d0:
    // 0x3d12d0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3d12d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_3d12d4:
    // 0x3d12d4: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x3d12d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_3d12d8:
    // 0x3d12d8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x3d12d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3d12dc:
    // 0x3d12dc: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x3d12dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_3d12e0:
    // 0x3d12e0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3d12e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3d12e4:
    // 0x3d12e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d12e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d12e8:
    // 0x3d12e8: 0x6bad0007  ldl         $t5, 0x7($sp)
    ctx->pc = 0x3d12e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
label_3d12ec:
    // 0x3d12ec: 0x6fad0000  ldr         $t5, 0x0($sp)
    ctx->pc = 0x3d12ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_3d12f0:
    // 0x3d12f0: 0xb06d0007  sdl         $t5, 0x7($v1)
    ctx->pc = 0x3d12f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d12f4:
    // 0x3d12f4: 0x1480ffb4  bnez        $a0, . + 4 + (-0x4C << 2)
label_3d12f8:
    if (ctx->pc == 0x3D12F8u) {
        ctx->pc = 0x3D12F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D12F4u;
        // 0x3d12f8: 0xb46d0000  sdr         $t5, 0x0($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D12FCu;
        goto label_3d12fc;
    }
    ctx->pc = 0x3D12F4u;
    {
        const bool branch_taken_0x3d12f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D12F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D12F4u;
        // 0x3d12f8: 0xb46d0000  sdr         $t5, 0x0($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d12f4) {
            ctx->pc = 0x3D11C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d11c8;
        }
    }
    ctx->pc = 0x3D12FCu;
label_3d12fc:
    // 0x3d12fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d12fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d1300:
    // 0x3d1300: 0xc10376a  jal         func_40DDA8
label_3d1304:
    if (ctx->pc == 0x3D1304u) {
        ctx->pc = 0x3D1304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1300u;
        // 0x3d1304: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1308u;
        goto label_3d1308;
    }
    ctx->pc = 0x3D1300u;
    SET_GPR_U32(ctx, 31, 0x3D1308u);
    ctx->pc = 0x3D1304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1300u;
    // 0x3d1304: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3D1300u, 0x3D1308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1308u;
label_3d1308:
    // 0x3d1308: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3d1308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3d130c:
    // 0x3d130c: 0x5440ffa0  bnel        $v0, $zero, . + 4 + (-0x60 << 2)
label_3d1310:
    if (ctx->pc == 0x3D1310u) {
        ctx->pc = 0x3D1310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D130Cu;
        // 0x3d1310: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1314u;
        goto label_3d1314;
    }
    ctx->pc = 0x3D130Cu;
    {
        const bool branch_taken_0x3d130c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d130c) {
            ctx->pc = 0x3D1310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D130Cu;
            // 0x3d1310: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D1190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d1190;
        }
    }
    ctx->pc = 0x3D1314u;
label_3d1314:
    // 0x3d1314: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x3d1314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_3d1318:
    // 0x3d1318: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x3d1318u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d131c:
    // 0x3d131c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x3d131cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3d1320:
    // 0x3d1320: 0x1440ff7d  bnez        $v0, . + 4 + (-0x83 << 2)
label_3d1324:
    if (ctx->pc == 0x3D1324u) {
        ctx->pc = 0x3D1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1320u;
        // 0x3d1324: 0x2407002c  addiu       $a3, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1328u;
        goto label_3d1328;
    }
    ctx->pc = 0x3D1320u;
    {
        const bool branch_taken_0x3d1320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1320u;
        // 0x3d1324: 0x2407002c  addiu       $a3, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1320) {
            ctx->pc = 0x3D1118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d1118;
        }
    }
    ctx->pc = 0x3D1328u;
label_3d1328:
    // 0x3d1328: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3d1328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_3d132c:
    // 0x3d132c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_3d1330:
    if (ctx->pc == 0x3D1330u) {
        ctx->pc = 0x3D1330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D132Cu;
        // 0x3d1330: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1334u;
        goto label_3d1334;
    }
    ctx->pc = 0x3D132Cu;
    {
        const bool branch_taken_0x3d132c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D132Cu;
        // 0x3d1330: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d132c) {
            ctx->pc = 0x3D1344u;
            goto label_3d1344;
        }
    }
    ctx->pc = 0x3D1334u;
label_3d1334:
    // 0x3d1334: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x3d1334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_3d1338:
    // 0x3d1338: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3d1338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_3d133c:
    // 0x3d133c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3d133cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3d1340:
    // 0x3d1340: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x3d1340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_3d1344:
    // 0x3d1344: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3d1344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3d1348:
    // 0x3d1348: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3d1348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3d134c:
    // 0x3d134c: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3d134cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_3d1350:
    // 0x3d1350: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3d1350u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d1354:
    // 0x3d1354: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3d1354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d1358:
    // 0x3d1358: 0x24a6e880  addiu       $a2, $a1, -0x1780
    ctx->pc = 0x3d1358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
label_3d135c:
    // 0x3d135c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3d135cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3d1360:
    // 0x3d1360: 0x8cc20108  lw          $v0, 0x108($a2)
    ctx->pc = 0x3d1360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 264)));
label_3d1364:
    // 0x3d1364: 0x8c74000c  lw          $s4, 0xC($v1)
    ctx->pc = 0x3d1364u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3d1368:
    // 0x3d1368: 0x8c750010  lw          $s5, 0x10($v1)
    ctx->pc = 0x3d1368u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3d136c:
    // 0x3d136c: 0x2842018  mult        $a0, $s4, $a0
    ctx->pc = 0x3d136cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3d1370:
    // 0x3d1370: 0x2a40018  mult        $zero, $s5, $a0
    ctx->pc = 0x3d1370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3d1374:
    // 0x3d1374: 0x2012  mflo        $a0
    ctx->pc = 0x3d1374u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_3d1378:
    // 0x3d1378: 0x40f809  jalr        $v0
label_3d137c:
    if (ctx->pc == 0x3D137Cu) {
        ctx->pc = 0x3D137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1378u;
        // 0x3d137c: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1380u;
        goto label_3d1380;
    }
    ctx->pc = 0x3D1378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D1380u);
        ctx->pc = 0x3D137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1378u;
        // 0x3d137c: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1378u, 0x3D1380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D1380u;
label_3d1380:
    // 0x3d1380: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x3d1380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_3d1384:
    // 0x3d1384: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3d1384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d1388:
    // 0x3d1388: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3d1388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_3d138c:
    // 0x3d138c: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x3d138cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3d1390:
    // 0x3d1390: 0x5860015a  blezl       $v1, . + 4 + (0x15A << 2)
label_3d1394:
    if (ctx->pc == 0x3D1394u) {
        ctx->pc = 0x3D1394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1390u;
        // 0x3d1394: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1398u;
        goto label_3d1398;
    }
    ctx->pc = 0x3D1390u;
    {
        const bool branch_taken_0x3d1390 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3d1390) {
            ctx->pc = 0x3D1394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D1390u;
            // 0x3d1394: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D18FCu;
            goto label_3d18fc;
        }
    }
    ctx->pc = 0x3D1398u;
label_3d1398:
    // 0x3d1398: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x3d1398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
label_3d139c:
    // 0x3d139c: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x3d139cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3d13a0:
    // 0x3d13a0: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x3d13a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_3d13a4:
    // 0x3d13a4: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x3d13a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_3d13a8:
    // 0x3d13a8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x3d13a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3d13ac:
    // 0x3d13ac: 0x0  nop
    ctx->pc = 0x3d13acu;
    // NOP
label_3d13b0:
    // 0x3d13b0: 0x1380c0  sll         $s0, $s3, 3
    ctx->pc = 0x3d13b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_3d13b4:
    // 0x3d13b4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3d13b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3d13b8:
    // 0x3d13b8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3d13b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3d13bc:
    // 0x3d13bc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3d13bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3d13c0:
    // 0x3d13c0: 0x94450006  lhu         $a1, 0x6($v0)
    ctx->pc = 0x3d13c0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_3d13c4:
    // 0x3d13c4: 0xc0e3df2  jal         func_38F7C8
label_3d13c8:
    if (ctx->pc == 0x3D13C8u) {
        ctx->pc = 0x3D13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D13C4u;
        // 0x3d13c8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D13CCu;
        goto label_3d13cc;
    }
    ctx->pc = 0x3D13C4u;
    SET_GPR_U32(ctx, 31, 0x3D13CCu);
    ctx->pc = 0x3D13C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D13C4u;
    // 0x3d13c8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F7C8u, 0x3D13C4u, 0x3D13CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D13CCu;
label_3d13cc:
    // 0x3d13cc: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x3d13ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3d13d0:
    // 0x3d13d0: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x3d13d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_3d13d4:
    // 0x3d13d4: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x3d13d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_3d13d8:
    // 0x3d13d8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x3d13d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3d13dc:
    // 0x3d13dc: 0xa7a30030  sh          $v1, 0x30($sp)
    ctx->pc = 0x3d13dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 3));
label_3d13e0:
    // 0x3d13e0: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x3d13e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3d13e4:
    // 0x3d13e4: 0xa7a40032  sh          $a0, 0x32($sp)
    ctx->pc = 0x3d13e4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 50), (uint16_t)GPR_U32(ctx, 4));
label_3d13e8:
    // 0x3d13e8: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x3d13e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_3d13ec:
    // 0x3d13ec: 0xa7a30034  sh          $v1, 0x34($sp)
    ctx->pc = 0x3d13ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 52), (uint16_t)GPR_U32(ctx, 3));
label_3d13f0:
    // 0x3d13f0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3d13f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_3d13f4:
    // 0x3d13f4: 0x97a30032  lhu         $v1, 0x32($sp)
    ctx->pc = 0x3d13f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 50)));
label_3d13f8:
    // 0x3d13f8: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x3d13f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3d13fc:
    // 0x3d13fc: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x3d13fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3d1400:
    // 0x3d1400: 0x712818  mult        $a1, $v1, $s1
    ctx->pc = 0x3d1400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3d1404:
    // 0x3d1404: 0x97a90034  lhu         $t1, 0x34($sp)
    ctx->pc = 0x3d1404u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 52)));
label_3d1408:
    // 0x3d1408: 0x97a80032  lhu         $t0, 0x32($sp)
    ctx->pc = 0x3d1408u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 50)));
label_3d140c:
    // 0x3d140c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3d140cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3d1410:
    // 0x3d1410: 0x97a70034  lhu         $a3, 0x34($sp)
    ctx->pc = 0x3d1410u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 52)));
label_3d1414:
    // 0x3d1414: 0xc4860000  lwc1        $f6, 0x0($a0)
    ctx->pc = 0x3d1414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3d1418:
    // 0x3d1418: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x3d1418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3d141c:
    // 0x3d141c: 0x1112018  mult        $a0, $t0, $s1
    ctx->pc = 0x3d141cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3d1420:
    // 0x3d1420: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3d1420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d1424:
    // 0x3d1424: 0x1312818  mult        $a1, $t1, $s1
    ctx->pc = 0x3d1424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3d1428:
    // 0x3d1428: 0xf11818  mult        $v1, $a3, $s1
    ctx->pc = 0x3d1428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3d142c:
    // 0x3d142c: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x3d142cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_3d1430:
    // 0x3d1430: 0x864021  addu        $t0, $a0, $a2
    ctx->pc = 0x3d1430u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3d1434:
    // 0x3d1434: 0xa64821  addu        $t1, $a1, $a2
    ctx->pc = 0x3d1434u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3d1438:
    // 0x3d1438: 0x97a40032  lhu         $a0, 0x32($sp)
    ctx->pc = 0x3d1438u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 50)));
label_3d143c:
    // 0x3d143c: 0xe7a60070  swc1        $f6, 0x70($sp)
    ctx->pc = 0x3d143cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3d1440:
    // 0x3d1440: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x3d1440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3d1444:
    // 0x3d1444: 0x911818  mult        $v1, $a0, $s1
    ctx->pc = 0x3d1444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3d1448:
    // 0x3d1448: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x3d1448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d144c:
    // 0x3d144c: 0xc5250004  lwc1        $f5, 0x4($t1)
    ctx->pc = 0x3d144cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3d1450:
    // 0x3d1450: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x3d1450u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_3d1454:
    // 0x3d1454: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x3d1454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3d1458:
    // 0x3d1458: 0xe7a50074  swc1        $f5, 0x74($sp)
    ctx->pc = 0x3d1458u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3d145c:
    // 0x3d145c: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x3d145cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3d1460:
    // 0x3d1460: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x3d1460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d1464:
    // 0x3d1464: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x3d1464u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_3d1468:
    // 0x3d1468: 0xe7a40078  swc1        $f4, 0x78($sp)
    ctx->pc = 0x3d1468u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3d146c:
    // 0x3d146c: 0x97a30030  lhu         $v1, 0x30($sp)
    ctx->pc = 0x3d146cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
label_3d1470:
    // 0x3d1470: 0x712818  mult        $a1, $v1, $s1
    ctx->pc = 0x3d1470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3d1474:
    // 0x3d1474: 0x97a40032  lhu         $a0, 0x32($sp)
    ctx->pc = 0x3d1474u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 50)));
label_3d1478:
    // 0x3d1478: 0x97a80030  lhu         $t0, 0x30($sp)
    ctx->pc = 0x3d1478u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
label_3d147c:
    // 0x3d147c: 0x97a70032  lhu         $a3, 0x32($sp)
    ctx->pc = 0x3d147cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 50)));
label_3d1480:
    // 0x3d1480: 0x97a90030  lhu         $t1, 0x30($sp)
    ctx->pc = 0x3d1480u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
label_3d1484:
    // 0x3d1484: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x3d1484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3d1488:
    // 0x3d1488: 0x912818  mult        $a1, $a0, $s1
    ctx->pc = 0x3d1488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3d148c:
    // 0x3d148c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3d148cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d1490:
    // 0x3d1490: 0xf11818  mult        $v1, $a3, $s1
    ctx->pc = 0x3d1490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3d1494:
    // 0x3d1494: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x3d1494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3d1498:
    // 0x3d1498: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3d1498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d149c:
    // 0x3d149c: 0x1112818  mult        $a1, $t0, $s1
    ctx->pc = 0x3d149cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3d14a0:
    // 0x3d14a0: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x3d14a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3d14a4:
    // 0x3d14a4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3d14a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3d14a8:
    // 0x3d14a8: 0x97a30032  lhu         $v1, 0x32($sp)
    ctx->pc = 0x3d14a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 50)));
label_3d14ac:
    // 0x3d14ac: 0xa64021  addu        $t0, $a1, $a2
    ctx->pc = 0x3d14acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3d14b0:
    // 0x3d14b0: 0x712018  mult        $a0, $v1, $s1
    ctx->pc = 0x3d14b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3d14b4:
    // 0x3d14b4: 0xe7a2007c  swc1        $f2, 0x7C($sp)
    ctx->pc = 0x3d14b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_3d14b8:
    // 0x3d14b8: 0x1312818  mult        $a1, $t1, $s1
    ctx->pc = 0x3d14b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3d14bc:
    // 0x3d14bc: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x3d14bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d14c0:
    // 0x3d14c0: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x3d14c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d14c4:
    // 0x3d14c4: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x3d14c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3d14c8:
    // 0x3d14c8: 0xa64821  addu        $t1, $a1, $a2
    ctx->pc = 0x3d14c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3d14cc:
    // 0x3d14cc: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x3d14ccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_3d14d0:
    // 0x3d14d0: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x3d14d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3d14d4:
    // 0x3d14d4: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x3d14d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d14d8:
    // 0x3d14d8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3d14d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d14dc:
    // 0x3d14dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3d14dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3d14e0:
    // 0x3d14e0: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x3d14e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3d14e4:
    // 0x3d14e4: 0x46012d02  mul.s       $f20, $f5, $f1
    ctx->pc = 0x3d14e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_3d14e8:
    // 0x3d14e8: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x3d14e8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3d14ec:
    // 0x3d14ec: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x3d14ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_3d14f0:
    // 0x3d14f0: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x3d14f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3d14f4:
    // 0x3d14f4: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x3d14f4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_3d14f8:
    // 0x3d14f8: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x3d14f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_3d14fc:
    // 0x3d14fc: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x3d14fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_3d1500:
    // 0x3d1500: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x3d1500u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
label_3d1504:
    // 0x3d1504: 0x4604a501  sub.s       $f20, $f20, $f4
    ctx->pc = 0x3d1504u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[4]);
label_3d1508:
    // 0x3d1508: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x3d1508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3d150c:
    // 0x3d150c: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x3d150cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3d1510:
    // 0x3d1510: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3d1510u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3d1514:
    // 0x3d1514: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x3d1514u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_3d1518:
    // 0x3d1518: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x3d1518u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_3d151c:
    // 0x3d151c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d151cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d1520:
    // 0x3d1520: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3d1520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_3d1524:
    // 0x3d1524: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x3d1524u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
label_3d1528:
    // 0x3d1528: 0xc0f539e  jal         func_3D4E78
label_3d152c:
    if (ctx->pc == 0x3D152Cu) {
        ctx->pc = 0x3D152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1528u;
        // 0x3d152c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1530u;
        goto label_3d1530;
    }
    ctx->pc = 0x3D1528u;
    SET_GPR_U32(ctx, 31, 0x3D1530u);
    ctx->pc = 0x3D152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1528u;
    // 0x3d152c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E78u, 0x3D1528u, 0x3D1530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1530u;
label_3d1530:
    // 0x3d1530: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x3d1530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d1534:
    // 0x3d1534: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3d1534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3d1538:
    // 0x3d1538: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3d1538u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3d153c:
    // 0x3d153c: 0xc0f539e  jal         func_3D4E78
label_3d1540:
    if (ctx->pc == 0x3D1540u) {
        ctx->pc = 0x3D1540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D153Cu;
        // 0x3d1540: 0x4601a502  mul.s       $f20, $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1544u;
        goto label_3d1544;
    }
    ctx->pc = 0x3D153Cu;
    SET_GPR_U32(ctx, 31, 0x3D1544u);
    ctx->pc = 0x3D1540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D153Cu;
    // 0x3d1540: 0x4601a502  mul.s       $f20, $f20, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E78u, 0x3D153Cu, 0x3D1544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1544u;
label_3d1544:
    // 0x3d1544: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x3d1544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d1548:
    // 0x3d1548: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3d1548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_3d154c:
    // 0x3d154c: 0x24a5b1e0  addiu       $a1, $a1, -0x4E20
    ctx->pc = 0x3d154cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947296));
label_3d1550:
    // 0x3d1550: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3d1550u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3d1554:
    // 0x3d1554: 0xc4a20048  lwc1        $f2, 0x48($a1)
    ctx->pc = 0x3d1554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d1558:
    // 0x3d1558: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x3d1558u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_3d155c:
    // 0x3d155c: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x3d155cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d1560:
    // 0x3d1560: 0x0  nop
    ctx->pc = 0x3d1560u;
    // NOP
label_3d1564:
    // 0x3d1564: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3d1568:
    if (ctx->pc == 0x3D1568u) {
        ctx->pc = 0x3D1568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1564u;
        // 0x3d1568: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D156Cu;
        goto label_3d156c;
    }
    ctx->pc = 0x3D1564u;
    {
        const bool branch_taken_0x3d1564 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D1568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1564u;
        // 0x3d1568: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1564) {
            ctx->pc = 0x3D1570u;
            goto label_3d1570;
        }
    }
    ctx->pc = 0x3D156Cu;
label_3d156c:
    // 0x3d156c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d156cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d1570:
    // 0x3d1570: 0x144000dc  bnez        $v0, . + 4 + (0xDC << 2)
label_3d1574:
    if (ctx->pc == 0x3D1574u) {
        ctx->pc = 0x3D1574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1570u;
        // 0x3d1574: 0x26760001  addiu       $s6, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1578u;
        goto label_3d1578;
    }
    ctx->pc = 0x3D1570u;
    {
        const bool branch_taken_0x3d1570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1570u;
        // 0x3d1574: 0x26760001  addiu       $s6, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1570) {
            ctx->pc = 0x3D18E4u;
            goto label_3d18e4;
        }
    }
    ctx->pc = 0x3D1578u;
label_3d1578:
    // 0x3d1578: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x3d1578u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d157c:
    // 0x3d157c: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x3d157cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3d1580:
    // 0x3d1580: 0x141042  srl         $v0, $s4, 1
    ctx->pc = 0x3d1580u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
label_3d1584:
    // 0x3d1584: 0x151842  srl         $v1, $s5, 1
    ctx->pc = 0x3d1584u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
label_3d1588:
    // 0x3d1588: 0x328d0001  andi        $t5, $s4, 0x1
    ctx->pc = 0x3d1588u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_3d158c:
    // 0x3d158c: 0x32ac0001  andi        $t4, $s5, 0x1
    ctx->pc = 0x3d158cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3d1590:
    // 0x3d1590: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x3d1590u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
label_3d1594:
    // 0x3d1594: 0x1836025  or          $t4, $t4, $v1
    ctx->pc = 0x3d1594u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
label_3d1598:
    // 0x3d1598: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x3d1598u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3d159c:
    // 0x3d159c: 0x260702d  daddu       $t6, $s3, $zero
    ctx->pc = 0x3d159cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d15a0:
    // 0x3d15a0: 0x27a800a4  addiu       $t0, $sp, 0xA4
    ctx->pc = 0x3d15a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_3d15a4:
    // 0x3d15a4: 0x27b80064  addiu       $t8, $sp, 0x64
    ctx->pc = 0x3d15a4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_3d15a8:
    // 0x3d15a8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3d15a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d15ac:
    // 0x3d15ac: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3d15acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d15b0:
    // 0x3d15b0: 0x6800005  bltz        $s4, . + 4 + (0x5 << 2)
label_3d15b4:
    if (ctx->pc == 0x3D15B4u) {
        ctx->pc = 0x3D15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D15B0u;
        // 0x3d15b4: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D15B8u;
        goto label_3d15b8;
    }
    ctx->pc = 0x3D15B0u;
    {
        const bool branch_taken_0x3d15b0 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x3D15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D15B0u;
        // 0x3d15b4: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d15b0) {
            ctx->pc = 0x3D15C8u;
            goto label_3d15c8;
        }
    }
    ctx->pc = 0x3D15B8u;
label_3d15b8:
    // 0x3d15b8: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x3d15b8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d15bc:
    // 0x3d15bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3d15bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3d15c0:
    // 0x3d15c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3d15c4:
    if (ctx->pc == 0x3D15C4u) {
        ctx->pc = 0x3D15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D15C0u;
        // 0x3d15c4: 0x94c20000  lhu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D15C8u;
        goto label_3d15c8;
    }
    ctx->pc = 0x3D15C0u;
    {
        const bool branch_taken_0x3d15c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D15C0u;
        // 0x3d15c4: 0x94c20000  lhu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d15c0) {
            ctx->pc = 0x3D15D8u;
            goto label_3d15d8;
        }
    }
    ctx->pc = 0x3D15C8u;
label_3d15c8:
    // 0x3d15c8: 0x448d0800  mtc1        $t5, $f1
    ctx->pc = 0x3d15c8u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d15cc:
    // 0x3d15cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3d15ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3d15d0:
    // 0x3d15d0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3d15d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3d15d4:
    // 0x3d15d4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x3d15d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_3d15d8:
    // 0x3d15d8: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3d15d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3d15dc:
    // 0x3d15dc: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x3d15dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3d15e0:
    // 0x3d15e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3d15e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3d15e4:
    // 0x3d15e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d15e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d15e8:
    // 0x3d15e8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3d15e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d15ec:
    // 0x3d15ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3d15ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3d15f0:
    // 0x3d15f0: 0x6a00005  bltz        $s5, . + 4 + (0x5 << 2)
label_3d15f4:
    if (ctx->pc == 0x3D15F4u) {
        ctx->pc = 0x3D15F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D15F0u;
        // 0x3d15f4: 0xe5200000  swc1        $f0, 0x0($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D15F8u;
        goto label_3d15f8;
    }
    ctx->pc = 0x3D15F0u;
    {
        const bool branch_taken_0x3d15f0 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x3D15F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D15F0u;
        // 0x3d15f4: 0xe5200000  swc1        $f0, 0x0($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d15f0) {
            ctx->pc = 0x3D1608u;
            goto label_3d1608;
        }
    }
    ctx->pc = 0x3D15F8u;
label_3d15f8:
    // 0x3d15f8: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x3d15f8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d15fc:
    // 0x3d15fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3d15fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3d1600:
    // 0x3d1600: 0x10000005  b           . + 4 + (0x5 << 2)
label_3d1604:
    if (ctx->pc == 0x3D1604u) {
        ctx->pc = 0x3D1604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1600u;
        // 0x3d1604: 0x94c20000  lhu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1608u;
        goto label_3d1608;
    }
    ctx->pc = 0x3D1600u;
    {
        const bool branch_taken_0x3d1600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1600u;
        // 0x3d1604: 0x94c20000  lhu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1600) {
            ctx->pc = 0x3D1618u;
            goto label_3d1618;
        }
    }
    ctx->pc = 0x3D1608u;
label_3d1608:
    // 0x3d1608: 0x448c0800  mtc1        $t4, $f1
    ctx->pc = 0x3d1608u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d160c:
    // 0x3d160c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3d160cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3d1610:
    // 0x3d1610: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3d1610u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3d1614:
    // 0x3d1614: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x3d1614u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_3d1618:
    // 0x3d1618: 0x25ce000c  addiu       $t6, $t6, 0xC
    ctx->pc = 0x3d1618u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12));
label_3d161c:
    // 0x3d161c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x3d161cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3d1620:
    // 0x3d1620: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x3d1620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_3d1624:
    // 0x3d1624: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3d1624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3d1628:
    // 0x3d1628: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x3d1628u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_3d162c:
    // 0x3d162c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d162cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3d1630:
    // 0x3d1630: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x3d1630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3d1634:
    // 0x3d1634: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3d1634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d1638:
    // 0x3d1638: 0x6f1818  mult        $v1, $v1, $t7
    ctx->pc = 0x3d1638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3d163c:
    // 0x3d163c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x3d163cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_3d1640:
    // 0x3d1640: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x3d1640u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_3d1644:
    // 0x3d1644: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3d1644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3d1648:
    // 0x3d1648: 0x1d8102a  slt         $v0, $t6, $t8
    ctx->pc = 0x3d1648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
label_3d164c:
    // 0x3d164c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d164cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3d1650:
    // 0x3d1650: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x3d1650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_3d1654:
    // 0x3d1654: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x3d1654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3d1658:
    // 0x3d1658: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x3d1658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_3d165c:
    // 0x3d165c: 0x8c6b0008  lw          $t3, 0x8($v1)
    ctx->pc = 0x3d165cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3d1660:
    // 0x3d1660: 0xb1470007  sdl         $a3, 0x7($t2)
    ctx->pc = 0x3d1660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d1664:
    // 0x3d1664: 0xb5470000  sdr         $a3, 0x0($t2)
    ctx->pc = 0x3d1664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d1668:
    // 0x3d1668: 0xad4b0008  sw          $t3, 0x8($t2)
    ctx->pc = 0x3d1668u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 11));
label_3d166c:
    // 0x3d166c: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_3d1670:
    if (ctx->pc == 0x3D1670u) {
        ctx->pc = 0x3D1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D166Cu;
        // 0x3d1670: 0x254a000c  addiu       $t2, $t2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1674u;
        goto label_3d1674;
    }
    ctx->pc = 0x3D166Cu;
    {
        const bool branch_taken_0x3d166c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D166Cu;
        // 0x3d1670: 0x254a000c  addiu       $t2, $t2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d166c) {
            ctx->pc = 0x3D17E0u;
            goto label_3d17e0;
        }
    }
    ctx->pc = 0x3D1674u;
label_3d1674:
    // 0x3d1674: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x3d1674u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3d1678:
    // 0x3d1678: 0x6800005  bltz        $s4, . + 4 + (0x5 << 2)
label_3d167c:
    if (ctx->pc == 0x3D167Cu) {
        ctx->pc = 0x3D167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1678u;
        // 0x3d167c: 0x94c20000  lhu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1680u;
        goto label_3d1680;
    }
    ctx->pc = 0x3D1678u;
    {
        const bool branch_taken_0x3d1678 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x3D167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1678u;
        // 0x3d167c: 0x94c20000  lhu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1678) {
            ctx->pc = 0x3D1690u;
            goto label_3d1690;
        }
    }
    ctx->pc = 0x3D1680u;
label_3d1680:
    // 0x3d1680: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x3d1680u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d1684:
    // 0x3d1684: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3d1684u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3d1688:
    // 0x3d1688: 0x10000005  b           . + 4 + (0x5 << 2)
label_3d168c:
    if (ctx->pc == 0x3D168Cu) {
        ctx->pc = 0x3D168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1688u;
        // 0x3d168c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1690u;
        goto label_3d1690;
    }
    ctx->pc = 0x3D1688u;
    {
        const bool branch_taken_0x3d1688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1688u;
        // 0x3d168c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1688) {
            ctx->pc = 0x3D16A0u;
            goto label_3d16a0;
        }
    }
    ctx->pc = 0x3D1690u;
label_3d1690:
    // 0x3d1690: 0x448d0800  mtc1        $t5, $f1
    ctx->pc = 0x3d1690u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d1694:
    // 0x3d1694: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3d1694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3d1698:
    // 0x3d1698: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3d1698u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3d169c:
    // 0x3d169c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3d169cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3d16a0:
    // 0x3d16a0: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x3d16a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3d16a4:
    // 0x3d16a4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3d16a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3d16a8:
    // 0x3d16a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d16a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d16ac:
    // 0x3d16ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3d16acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d16b0:
    // 0x3d16b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3d16b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3d16b4:
    // 0x3d16b4: 0x6a00005  bltz        $s5, . + 4 + (0x5 << 2)
label_3d16b8:
    if (ctx->pc == 0x3D16B8u) {
        ctx->pc = 0x3D16B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D16B4u;
        // 0x3d16b8: 0xe5600000  swc1        $f0, 0x0($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D16BCu;
        goto label_3d16bc;
    }
    ctx->pc = 0x3D16B4u;
    {
        const bool branch_taken_0x3d16b4 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x3D16B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D16B4u;
        // 0x3d16b8: 0xe5600000  swc1        $f0, 0x0($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d16b4) {
            ctx->pc = 0x3D16CCu;
            goto label_3d16cc;
        }
    }
    ctx->pc = 0x3D16BCu;
label_3d16bc:
    // 0x3d16bc: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x3d16bcu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d16c0:
    // 0x3d16c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3d16c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3d16c4:
    // 0x3d16c4: 0x10000005  b           . + 4 + (0x5 << 2)
label_3d16c8:
    if (ctx->pc == 0x3D16C8u) {
        ctx->pc = 0x3D16C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D16C4u;
        // 0x3d16c8: 0x94c20000  lhu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D16CCu;
        goto label_3d16cc;
    }
    ctx->pc = 0x3D16C4u;
    {
        const bool branch_taken_0x3d16c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D16C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D16C4u;
        // 0x3d16c8: 0x94c20000  lhu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d16c4) {
            ctx->pc = 0x3D16DCu;
            goto label_3d16dc;
        }
    }
    ctx->pc = 0x3D16CCu;
label_3d16cc:
    // 0x3d16cc: 0x448c0800  mtc1        $t4, $f1
    ctx->pc = 0x3d16ccu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d16d0:
    // 0x3d16d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3d16d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3d16d4:
    // 0x3d16d4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3d16d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3d16d8:
    // 0x3d16d8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x3d16d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_3d16dc:
    // 0x3d16dc: 0x25090008  addiu       $t1, $t0, 0x8
    ctx->pc = 0x3d16dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_3d16e0:
    // 0x3d16e0: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x3d16e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3d16e4:
    // 0x3d16e4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3d16e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3d16e8:
    // 0x3d16e8: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x3d16e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_3d16ec:
    // 0x3d16ec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d16ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3d16f0:
    // 0x3d16f0: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x3d16f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3d16f4:
    // 0x3d16f4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3d16f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d16f8:
    // 0x3d16f8: 0x6f1818  mult        $v1, $v1, $t7
    ctx->pc = 0x3d16f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3d16fc:
    // 0x3d16fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3d16fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3d1700:
    // 0x3d1700: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d1700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3d1704:
    // 0x3d1704: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x3d1704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_3d1708:
    // 0x3d1708: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x3d1708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3d170c:
    // 0x3d170c: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x3d170cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_3d1710:
    // 0x3d1710: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3d1710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3d1714:
    // 0x3d1714: 0xb1470007  sdl         $a3, 0x7($t2)
    ctx->pc = 0x3d1714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d1718:
    // 0x3d1718: 0xb5470000  sdr         $a3, 0x0($t2)
    ctx->pc = 0x3d1718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d171c:
    // 0x3d171c: 0x6800005  bltz        $s4, . + 4 + (0x5 << 2)
label_3d1720:
    if (ctx->pc == 0x3D1720u) {
        ctx->pc = 0x3D1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D171Cu;
        // 0x3d1720: 0xad420008  sw          $v0, 0x8($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1724u;
        goto label_3d1724;
    }
    ctx->pc = 0x3D171Cu;
    {
        const bool branch_taken_0x3d171c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x3D1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D171Cu;
        // 0x3d1720: 0xad420008  sw          $v0, 0x8($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d171c) {
            ctx->pc = 0x3D1734u;
            goto label_3d1734;
        }
    }
    ctx->pc = 0x3D1724u;
label_3d1724:
    // 0x3d1724: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x3d1724u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d1728:
    // 0x3d1728: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3d1728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3d172c:
    // 0x3d172c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3d1730:
    if (ctx->pc == 0x3D1730u) {
        ctx->pc = 0x3D1730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D172Cu;
        // 0x3d1730: 0x94c20002  lhu         $v0, 0x2($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1734u;
        goto label_3d1734;
    }
    ctx->pc = 0x3D172Cu;
    {
        const bool branch_taken_0x3d172c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D172Cu;
        // 0x3d1730: 0x94c20002  lhu         $v0, 0x2($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d172c) {
            ctx->pc = 0x3D1744u;
            goto label_3d1744;
        }
    }
    ctx->pc = 0x3D1734u;
label_3d1734:
    // 0x3d1734: 0x448d0800  mtc1        $t5, $f1
    ctx->pc = 0x3d1734u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d1738:
    // 0x3d1738: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3d1738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3d173c:
    // 0x3d173c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3d173cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3d1740:
    // 0x3d1740: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x3d1740u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_3d1744:
    // 0x3d1744: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x3d1744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3d1748:
    // 0x3d1748: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x3d1748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3d174c:
    // 0x3d174c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3d174cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3d1750:
    // 0x3d1750: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d1750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d1754:
    // 0x3d1754: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3d1754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d1758:
    // 0x3d1758: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3d1758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3d175c:
    // 0x3d175c: 0x6a00005  bltz        $s5, . + 4 + (0x5 << 2)
label_3d1760:
    if (ctx->pc == 0x3D1760u) {
        ctx->pc = 0x3D1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D175Cu;
        // 0x3d1760: 0xe5600008  swc1        $f0, 0x8($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1764u;
        goto label_3d1764;
    }
    ctx->pc = 0x3D175Cu;
    {
        const bool branch_taken_0x3d175c = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x3D1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D175Cu;
        // 0x3d1760: 0xe5600008  swc1        $f0, 0x8($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d175c) {
            ctx->pc = 0x3D1774u;
            goto label_3d1774;
        }
    }
    ctx->pc = 0x3D1764u;
label_3d1764:
    // 0x3d1764: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x3d1764u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d1768:
    // 0x3d1768: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3d1768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3d176c:
    // 0x3d176c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3d1770:
    if (ctx->pc == 0x3D1770u) {
        ctx->pc = 0x3D1770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D176Cu;
        // 0x3d1770: 0x94c20002  lhu         $v0, 0x2($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1774u;
        goto label_3d1774;
    }
    ctx->pc = 0x3D176Cu;
    {
        const bool branch_taken_0x3d176c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D176Cu;
        // 0x3d1770: 0x94c20002  lhu         $v0, 0x2($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d176c) {
            ctx->pc = 0x3D1784u;
            goto label_3d1784;
        }
    }
    ctx->pc = 0x3D1774u;
label_3d1774:
    // 0x3d1774: 0x448c0800  mtc1        $t4, $f1
    ctx->pc = 0x3d1774u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d1778:
    // 0x3d1778: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3d1778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3d177c:
    // 0x3d177c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3d177cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3d1780:
    // 0x3d1780: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x3d1780u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_3d1784:
    // 0x3d1784: 0x25ce0018  addiu       $t6, $t6, 0x18
    ctx->pc = 0x3d1784u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 24));
label_3d1788:
    // 0x3d1788: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x3d1788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3d178c:
    // 0x3d178c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x3d178cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_3d1790:
    // 0x3d1790: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3d1790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3d1794:
    // 0x3d1794: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x3d1794u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_3d1798:
    // 0x3d1798: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d1798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3d179c:
    // 0x3d179c: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x3d179cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3d17a0:
    // 0x3d17a0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3d17a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d17a4:
    // 0x3d17a4: 0x6f1818  mult        $v1, $v1, $t7
    ctx->pc = 0x3d17a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3d17a8:
    // 0x3d17a8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3d17a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3d17ac:
    // 0x3d17ac: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x3d17acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_3d17b0:
    // 0x3d17b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3d17b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3d17b4:
    // 0x3d17b4: 0x1d8102a  slt         $v0, $t6, $t8
    ctx->pc = 0x3d17b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
label_3d17b8:
    // 0x3d17b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d17b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3d17bc:
    // 0x3d17bc: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x3d17bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_3d17c0:
    // 0x3d17c0: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x3d17c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3d17c4:
    // 0x3d17c4: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x3d17c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_3d17c8:
    // 0x3d17c8: 0x8c690008  lw          $t1, 0x8($v1)
    ctx->pc = 0x3d17c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3d17cc:
    // 0x3d17cc: 0xb1470013  sdl         $a3, 0x13($t2)
    ctx->pc = 0x3d17ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d17d0:
    // 0x3d17d0: 0xb547000c  sdr         $a3, 0xC($t2)
    ctx->pc = 0x3d17d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d17d4:
    // 0x3d17d4: 0xad490014  sw          $t1, 0x14($t2)
    ctx->pc = 0x3d17d4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 9));
label_3d17d8:
    // 0x3d17d8: 0x1440ffa7  bnez        $v0, . + 4 + (-0x59 << 2)
label_3d17dc:
    if (ctx->pc == 0x3D17DCu) {
        ctx->pc = 0x3D17DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D17D8u;
        // 0x3d17dc: 0x254a0018  addiu       $t2, $t2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D17E0u;
        goto label_3d17e0;
    }
    ctx->pc = 0x3D17D8u;
    {
        const bool branch_taken_0x3d17d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D17DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D17D8u;
        // 0x3d17dc: 0x254a0018  addiu       $t2, $t2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d17d8) {
            ctx->pc = 0x3D1678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d1678;
        }
    }
    ctx->pc = 0x3D17E0u;
label_3d17e0:
    // 0x3d17e0: 0x8e470020  lw          $a3, 0x20($s2)
    ctx->pc = 0x3d17e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3d17e4:
    // 0x3d17e4: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
label_3d17e8:
    if (ctx->pc == 0x3D17E8u) {
        ctx->pc = 0x3D17E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D17E4u;
        // 0x3d17e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D17ECu;
        goto label_3d17ec;
    }
    ctx->pc = 0x3D17E4u;
    {
        const bool branch_taken_0x3d17e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D17E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D17E4u;
        // 0x3d17e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d17e4) {
            ctx->pc = 0x3D17F8u;
            goto label_3d17f8;
        }
    }
    ctx->pc = 0x3D17ECu;
label_3d17ec:
    // 0x3d17ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3d17ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d17f0:
    // 0x3d17f0: 0xc104d74  jal         func_4135D0
label_3d17f4:
    if (ctx->pc == 0x3D17F4u) {
        ctx->pc = 0x3D17F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D17F0u;
        // 0x3d17f4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D17F8u;
        goto label_3d17f8;
    }
    ctx->pc = 0x3D17F0u;
    SET_GPR_U32(ctx, 31, 0x3D17F8u);
    ctx->pc = 0x3D17F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D17F0u;
    // 0x3d17f4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4135D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4135D0u, 0x3D17F0u, 0x3D17F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D17F8u;
label_3d17f8:
    // 0x3d17f8: 0xc7a500a8  lwc1        $f5, 0xA8($sp)
    ctx->pc = 0x3d17f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3d17fc:
    // 0x3d17fc: 0xc7a400ac  lwc1        $f4, 0xAC($sp)
    ctx->pc = 0x3d17fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3d1800:
    // 0x3d1800: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x3d1800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d1804:
    // 0x3d1804: 0xc7a300b4  lwc1        $f3, 0xB4($sp)
    ctx->pc = 0x3d1804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d1808:
    // 0x3d1808: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x3d1808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d180c:
    // 0x3d180c: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x3d180cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_3d1810:
    // 0x3d1810: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x3d1810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d1814:
    // 0x3d1814: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x3d1814u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_3d1818:
    // 0x3d1818: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x3d1818u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_3d181c:
    // 0x3d181c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x3d181cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_3d1820:
    // 0x3d1820: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3d1820u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3d1824:
    // 0x3d1824: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3d1824u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3d1828:
    // 0x3d1828: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x3d1828u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d182c:
    // 0x3d182c: 0x0  nop
    ctx->pc = 0x3d182cu;
    // NOP
label_3d1830:
    // 0x3d1830: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_3d1834:
    if (ctx->pc == 0x3D1834u) {
        ctx->pc = 0x3D1834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1830u;
        // 0x3d1834: 0x8fa400ec  lw          $a0, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1838u;
        goto label_3d1838;
    }
    ctx->pc = 0x3D1830u;
    {
        const bool branch_taken_0x3d1830 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D1834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1830u;
        // 0x3d1834: 0x8fa400ec  lw          $a0, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1830) {
            ctx->pc = 0x3D18B4u;
            goto label_3d18b4;
        }
    }
    ctx->pc = 0x3D1838u;
label_3d1838:
    // 0x3d1838: 0x6ba700b7  ldl         $a3, 0xB7($sp)
    ctx->pc = 0x3d1838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3d183c:
    // 0x3d183c: 0x6fa700b0  ldr         $a3, 0xB0($sp)
    ctx->pc = 0x3d183cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_3d1840:
    // 0x3d1840: 0xb3a700d7  sdl         $a3, 0xD7($sp)
    ctx->pc = 0x3d1840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d1844:
    // 0x3d1844: 0xb7a700d0  sdr         $a3, 0xD0($sp)
    ctx->pc = 0x3d1844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d1848:
    // 0x3d1848: 0x6bae00af  ldl         $t6, 0xAF($sp)
    ctx->pc = 0x3d1848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_3d184c:
    // 0x3d184c: 0x6fae00a8  ldr         $t6, 0xA8($sp)
    ctx->pc = 0x3d184cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_3d1850:
    // 0x3d1850: 0xb3ae00b7  sdl         $t6, 0xB7($sp)
    ctx->pc = 0x3d1850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d1854:
    // 0x3d1854: 0xb7ae00b0  sdr         $t6, 0xB0($sp)
    ctx->pc = 0x3d1854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d1858:
    // 0x3d1858: 0x6ba400d7  ldl         $a0, 0xD7($sp)
    ctx->pc = 0x3d1858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3d185c:
    // 0x3d185c: 0x6fa400d0  ldr         $a0, 0xD0($sp)
    ctx->pc = 0x3d185cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3d1860:
    // 0x3d1860: 0xb3a400af  sdl         $a0, 0xAF($sp)
    ctx->pc = 0x3d1860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d1864:
    // 0x3d1864: 0xb7a400a8  sdr         $a0, 0xA8($sp)
    ctx->pc = 0x3d1864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d1868:
    // 0x3d1868: 0x6bab005f  ldl         $t3, 0x5F($sp)
    ctx->pc = 0x3d1868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3d186c:
    // 0x3d186c: 0x6fab0058  ldr         $t3, 0x58($sp)
    ctx->pc = 0x3d186cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3d1870:
    // 0x3d1870: 0x8fad0060  lw          $t5, 0x60($sp)
    ctx->pc = 0x3d1870u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_3d1874:
    // 0x3d1874: 0xb3ab00c7  sdl         $t3, 0xC7($sp)
    ctx->pc = 0x3d1874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d1878:
    // 0x3d1878: 0xb7ab00c0  sdr         $t3, 0xC0($sp)
    ctx->pc = 0x3d1878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d187c:
    // 0x3d187c: 0xafad00c8  sw          $t5, 0xC8($sp)
    ctx->pc = 0x3d187cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 13));
label_3d1880:
    // 0x3d1880: 0x6ba20053  ldl         $v0, 0x53($sp)
    ctx->pc = 0x3d1880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3d1884:
    // 0x3d1884: 0x6fa2004c  ldr         $v0, 0x4C($sp)
    ctx->pc = 0x3d1884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3d1888:
    // 0x3d1888: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x3d1888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3d188c:
    // 0x3d188c: 0xb3a2005f  sdl         $v0, 0x5F($sp)
    ctx->pc = 0x3d188cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d1890:
    // 0x3d1890: 0xb7a20058  sdr         $v0, 0x58($sp)
    ctx->pc = 0x3d1890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d1894:
    // 0x3d1894: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x3d1894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_3d1898:
    // 0x3d1898: 0x6ba700c7  ldl         $a3, 0xC7($sp)
    ctx->pc = 0x3d1898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3d189c:
    // 0x3d189c: 0x6fa700c0  ldr         $a3, 0xC0($sp)
    ctx->pc = 0x3d189cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_3d18a0:
    // 0x3d18a0: 0x8fa900c8  lw          $t1, 0xC8($sp)
    ctx->pc = 0x3d18a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3d18a4:
    // 0x3d18a4: 0xb3a70053  sdl         $a3, 0x53($sp)
    ctx->pc = 0x3d18a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d18a8:
    // 0x3d18a8: 0xb7a7004c  sdr         $a3, 0x4C($sp)
    ctx->pc = 0x3d18a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d18ac:
    // 0x3d18ac: 0xafa90054  sw          $t1, 0x54($sp)
    ctx->pc = 0x3d18acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 9));
label_3d18b0:
    // 0x3d18b0: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x3d18b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_3d18b4:
    // 0x3d18b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d18b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d18b8:
    // 0x3d18b8: 0xc0f1f8a  jal         func_3C7E28
label_3d18bc:
    if (ctx->pc == 0x3D18BCu) {
        ctx->pc = 0x3D18BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D18B8u;
        // 0x3d18bc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D18C0u;
        goto label_3d18c0;
    }
    ctx->pc = 0x3D18B8u;
    SET_GPR_U32(ctx, 31, 0x3D18C0u);
    ctx->pc = 0x3D18BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D18B8u;
    // 0x3d18bc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7E28u, 0x3D18B8u, 0x3D18C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D18C0u;
label_3d18c0:
    // 0x3d18c0: 0x8fae00ec  lw          $t6, 0xEC($sp)
    ctx->pc = 0x3d18c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_3d18c4:
    // 0x3d18c4: 0x8faf00f0  lw          $t7, 0xF0($sp)
    ctx->pc = 0x3d18c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_3d18c8:
    // 0x3d18c8: 0x4e1023  subu        $v0, $v0, $t6
    ctx->pc = 0x3d18c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
label_3d18cc:
    // 0x3d18cc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3d18ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d18d0:
    // 0x3d18d0: 0x4f1018  mult        $v0, $v0, $t7
    ctx->pc = 0x3d18d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3d18d4:
    // 0x3d18d4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3d18d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3d18d8:
    // 0x3d18d8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3d18d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_3d18dc:
    // 0x3d18dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d18dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d18e0:
    // 0x3d18e0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x3d18e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_3d18e4:
    // 0x3d18e4: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x3d18e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3d18e8:
    // 0x3d18e8: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x3d18e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d18ec:
    // 0x3d18ec: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x3d18ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3d18f0:
    // 0x3d18f0: 0x5440feaf  bnel        $v0, $zero, . + 4 + (-0x151 << 2)
label_3d18f4:
    if (ctx->pc == 0x3D18F4u) {
        ctx->pc = 0x3D18F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D18F0u;
        // 0x3d18f4: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D18F8u;
        goto label_3d18f8;
    }
    ctx->pc = 0x3D18F0u;
    {
        const bool branch_taken_0x3d18f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d18f0) {
            ctx->pc = 0x3D18F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D18F0u;
            // 0x3d18f4: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D13B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d13b0;
        }
    }
    ctx->pc = 0x3D18F8u;
label_3d18f8:
    // 0x3d18f8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d18f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3d18fc:
    // 0x3d18fc: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x3d18fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3d1900:
    // 0x3d1900: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3d1900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3d1904:
    // 0x3d1904: 0x40f809  jalr        $v0
label_3d1908:
    if (ctx->pc == 0x3D1908u) {
        ctx->pc = 0x3D1908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1904u;
        // 0x3d1908: 0x8fa400ec  lw          $a0, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D190Cu;
        goto label_3d190c;
    }
    ctx->pc = 0x3D1904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D190Cu);
        ctx->pc = 0x3D1908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1904u;
        // 0x3d1908: 0x8fa400ec  lw          $a0, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1904u, 0x3D190Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D190Cu;
label_3d190c:
    // 0x3d190c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3d190cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_3d1910:
    // 0x3d1910: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
label_3d1914:
    if (ctx->pc == 0x3D1914u) {
        ctx->pc = 0x3D1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1910u;
        // 0x3d1914: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1918u;
        goto label_3d1918;
    }
    ctx->pc = 0x3D1910u;
    {
        const bool branch_taken_0x3d1910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d1910) {
            ctx->pc = 0x3D1914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D1910u;
            // 0x3d1914: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D196Cu;
            goto label_3d196c;
        }
    }
    ctx->pc = 0x3D1918u;
label_3d1918:
    // 0x3d1918: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x3d1918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_3d191c:
    // 0x3d191c: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_3d1920:
    if (ctx->pc == 0x3D1920u) {
        ctx->pc = 0x3D1920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D191Cu;
        // 0x3d1920: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1924u;
        goto label_3d1924;
    }
    ctx->pc = 0x3D191Cu;
    {
        const bool branch_taken_0x3d191c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3D1920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D191Cu;
        // 0x3d1920: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d191c) {
            ctx->pc = 0x3D1954u;
            goto label_3d1954;
        }
    }
    ctx->pc = 0x3D1924u;
label_3d1924:
    // 0x3d1924: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d1924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d1928:
    // 0x3d1928: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x3d1928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3d192c:
    // 0x3d192c: 0x0  nop
    ctx->pc = 0x3d192cu;
    // NOP
label_3d1930:
    // 0x3d1930: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3d1930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3d1934:
    // 0x3d1934: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3d1934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3d1938:
    // 0x3d1938: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3d1938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d193c:
    // 0x3d193c: 0xc103684  jal         func_40DA10
label_3d1940:
    if (ctx->pc == 0x3D1940u) {
        ctx->pc = 0x3D1940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D193Cu;
        // 0x3d1940: 0x2631002c  addiu       $s1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1944u;
        goto label_3d1944;
    }
    ctx->pc = 0x3D193Cu;
    SET_GPR_U32(ctx, 31, 0x3D1944u);
    ctx->pc = 0x3D1940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D193Cu;
    // 0x3d1940: 0x2631002c  addiu       $s1, $s1, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3D193Cu, 0x3D1944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1944u;
label_3d1944:
    // 0x3d1944: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x3d1944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_3d1948:
    // 0x3d1948: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x3d1948u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3d194c:
    // 0x3d194c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_3d1950:
    if (ctx->pc == 0x3D1950u) {
        ctx->pc = 0x3D1950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D194Cu;
        // 0x3d1950: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1954u;
        goto label_3d1954;
    }
    ctx->pc = 0x3D194Cu;
    {
        const bool branch_taken_0x3d194c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D194Cu;
        // 0x3d1950: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d194c) {
            ctx->pc = 0x3D1930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d1930;
        }
    }
    ctx->pc = 0x3D1954u;
label_3d1954:
    // 0x3d1954: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3d1954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3d1958:
    // 0x3d1958: 0x2483e880  addiu       $v1, $a0, -0x1780
    ctx->pc = 0x3d1958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_3d195c:
    // 0x3d195c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3d195cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3d1960:
    // 0x3d1960: 0x40f809  jalr        $v0
label_3d1964:
    if (ctx->pc == 0x3D1964u) {
        ctx->pc = 0x3D1964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1960u;
        // 0x3d1964: 0x8fa400e0  lw          $a0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1968u;
        goto label_3d1968;
    }
    ctx->pc = 0x3D1960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D1968u);
        ctx->pc = 0x3D1964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1960u;
        // 0x3d1964: 0x8fa400e0  lw          $a0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1960u, 0x3D1968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D1968u;
label_3d1968:
    // 0x3d1968: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x3d1968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d196c:
    // 0x3d196c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d196cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d1970:
    // 0x3d1970: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x3d1970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3d1974:
    // 0x3d1974: 0x8fc4020c  lw          $a0, 0x20C($fp)
    ctx->pc = 0x3d1974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 524)));
label_3d1978:
    // 0x3d1978: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x3d1978u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_3d197c:
    // 0x3d197c: 0xacc40018  sw          $a0, 0x18($a2)
    ctx->pc = 0x3d197cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 4));
label_3d1980:
    // 0x3d1980: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x3d1980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3d1984:
    // 0x3d1984: 0x8fc7020c  lw          $a3, 0x20C($fp)
    ctx->pc = 0x3d1984u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 524)));
label_3d1988:
    // 0x3d1988: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x3d1988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_3d198c:
    // 0x3d198c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d198cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d1990:
    // 0x3d1990: 0xaca30054  sw          $v1, 0x54($a1)
    ctx->pc = 0x3d1990u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 3));
label_3d1994:
    // 0x3d1994: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x3d1994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d1998:
    // 0x3d1998: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d1998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3d199c:
    // 0x3d199c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x3d199cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_3d19a0:
    // 0x3d19a0: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x3d19a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3d19a4:
    // 0x3d19a4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x3d19a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_3d19a8:
    // 0x3d19a8: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x3d19a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_3d19ac:
    // 0x3d19ac: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x3d19acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_3d19b0:
    // 0x3d19b0: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x3d19b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_3d19b4:
    // 0x3d19b4: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x3d19b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_3d19b8:
    // 0x3d19b8: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x3d19b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_3d19bc:
    // 0x3d19bc: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x3d19bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_3d19c0:
    // 0x3d19c0: 0x7bb60130  lq          $s6, 0x130($sp)
    ctx->pc = 0x3d19c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3d19c4:
    // 0x3d19c4: 0x7bb70120  lq          $s7, 0x120($sp)
    ctx->pc = 0x3d19c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3d19c8:
    // 0x3d19c8: 0x7bbe0110  lq          $fp, 0x110($sp)
    ctx->pc = 0x3d19c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3d19cc:
    // 0x3d19cc: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x3d19ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_3d19d0:
    // 0x3d19d0: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x3d19d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3d19d4:
    // 0x3d19d4: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x3d19d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d19d8:
    // 0x3d19d8: 0x3e00008  jr          $ra
label_3d19dc:
    if (ctx->pc == 0x3D19DCu) {
        ctx->pc = 0x3D19DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D19D8u;
        // 0x3d19dc: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D19E0u;
        goto label_3d19e0;
    }
    ctx->pc = 0x3D19D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D19DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D19D8u;
        // 0x3d19dc: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D19D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D19E0u;
label_3d19e0:
    // 0x3d19e0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3d19e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d19e4:
    // 0x3d19e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d19e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3d19e8:
    // 0x3d19e8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3d19e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d19ec:
    // 0x3d19ec: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3d19ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d19f0:
    // 0x3d19f0: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x3d19f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d19f4:
    // 0x3d19f4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3d19f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_3d19f8:
    // 0x3d19f8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3d19f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_3d19fc:
    // 0x3d19fc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x3d19fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_3d1a00:
    // 0x3d1a00: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3d1a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3d1a04:
    // 0x3d1a04: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x3d1a04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_3d1a08:
    // 0x3d1a08: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3d1a08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_3d1a0c:
    // 0x3d1a0c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3d1a0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_3d1a10:
    // 0x3d1a10: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d1a10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3d1a14:
    // 0x3d1a14: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3d1a14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3d1a18:
    // 0x3d1a18: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d1a18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3d1a1c:
    // 0x3d1a1c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3d1a1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3d1a20:
    // 0x3d1a20: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3d1a20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3d1a24:
    // 0x3d1a24: 0x65402b  sltu        $t0, $v1, $a1
    ctx->pc = 0x3d1a24u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3d1a28:
    // 0x3d1a28: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d1a28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_3d1a2c:
    // 0x3d1a2c: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x3d1a2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3d1a30:
    // 0x3d1a30: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x3d1a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_3d1a34:
    // 0x3d1a34: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3d1a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_3d1a38:
    // 0x3d1a38: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x3d1a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_3d1a3c:
    // 0x3d1a3c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3d1a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3d1a40:
    // 0x3d1a40: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x3d1a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_3d1a44:
    // 0x3d1a44: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3d1a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d1a48:
    // 0x3d1a48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3d1a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d1a4c:
    // 0x3d1a4c: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x3d1a4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_3d1a50:
    // 0x3d1a50: 0xe2400b  movn        $t0, $a3, $v0
    ctx->pc = 0x3d1a50u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 7));
label_3d1a54:
    // 0x3d1a54: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x3d1a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_3d1a58:
    // 0x3d1a58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d1a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3d1a5c:
    // 0x3d1a5c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3d1a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d1a60:
    // 0x3d1a60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3d1a60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d1a64:
    // 0x3d1a64: 0x0  nop
    ctx->pc = 0x3d1a64u;
    // NOP
label_3d1a68:
    // 0x3d1a68: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3d1a6c:
    if (ctx->pc == 0x3D1A6Cu) {
        ctx->pc = 0x3D1A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A68u;
        // 0x3d1a6c: 0x25080003  addiu       $t0, $t0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1A70u;
        goto label_3d1a70;
    }
    ctx->pc = 0x3D1A68u;
    {
        const bool branch_taken_0x3d1a68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d1a68) {
            ctx->pc = 0x3D1A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D1A68u;
            // 0x3d1a6c: 0x25080003  addiu       $t0, $t0, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D1A70u;
            goto label_3d1a70;
        }
    }
    ctx->pc = 0x3D1A70u;
label_3d1a70:
    // 0x3d1a70: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x3d1a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3d1a74:
    // 0x3d1a74: 0x3e00008  jr          $ra
label_3d1a78:
    if (ctx->pc == 0x3D1A78u) {
        ctx->pc = 0x3D1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A74u;
        // 0x3d1a78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1A7Cu;
        goto label_3d1a7c;
    }
    ctx->pc = 0x3D1A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A74u;
        // 0x3d1a78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D1A7Cu;
label_3d1a7c:
    // 0x3d1a7c: 0x0  nop
    ctx->pc = 0x3d1a7cu;
    // NOP
    ctx->pc = 0x3d1a80u;
}
