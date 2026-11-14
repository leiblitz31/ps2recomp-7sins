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

// Function: sub_004E12D8
// Address: 0x4e12d8 - 0x4e27e8
void sub_004E12D8_0x4e12d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E12D8_0x4e12d8");
#endif

    switch (ctx->pc) {
        case 0x4e12d8u: goto label_4e12d8;
        case 0x4e12dcu: goto label_4e12dc;
        case 0x4e12e0u: goto label_4e12e0;
        case 0x4e12e4u: goto label_4e12e4;
        case 0x4e12e8u: goto label_4e12e8;
        case 0x4e12ecu: goto label_4e12ec;
        case 0x4e12f0u: goto label_4e12f0;
        case 0x4e12f4u: goto label_4e12f4;
        case 0x4e12f8u: goto label_4e12f8;
        case 0x4e12fcu: goto label_4e12fc;
        case 0x4e1300u: goto label_4e1300;
        case 0x4e1304u: goto label_4e1304;
        case 0x4e1308u: goto label_4e1308;
        case 0x4e130cu: goto label_4e130c;
        case 0x4e1310u: goto label_4e1310;
        case 0x4e1314u: goto label_4e1314;
        case 0x4e1318u: goto label_4e1318;
        case 0x4e131cu: goto label_4e131c;
        case 0x4e1320u: goto label_4e1320;
        case 0x4e1324u: goto label_4e1324;
        case 0x4e1328u: goto label_4e1328;
        case 0x4e132cu: goto label_4e132c;
        case 0x4e1330u: goto label_4e1330;
        case 0x4e1334u: goto label_4e1334;
        case 0x4e1338u: goto label_4e1338;
        case 0x4e133cu: goto label_4e133c;
        case 0x4e1340u: goto label_4e1340;
        case 0x4e1344u: goto label_4e1344;
        case 0x4e1348u: goto label_4e1348;
        case 0x4e134cu: goto label_4e134c;
        case 0x4e1350u: goto label_4e1350;
        case 0x4e1354u: goto label_4e1354;
        case 0x4e1358u: goto label_4e1358;
        case 0x4e135cu: goto label_4e135c;
        case 0x4e1360u: goto label_4e1360;
        case 0x4e1364u: goto label_4e1364;
        case 0x4e1368u: goto label_4e1368;
        case 0x4e136cu: goto label_4e136c;
        case 0x4e1370u: goto label_4e1370;
        case 0x4e1374u: goto label_4e1374;
        case 0x4e1378u: goto label_4e1378;
        case 0x4e137cu: goto label_4e137c;
        case 0x4e1380u: goto label_4e1380;
        case 0x4e1384u: goto label_4e1384;
        case 0x4e1388u: goto label_4e1388;
        case 0x4e138cu: goto label_4e138c;
        case 0x4e1390u: goto label_4e1390;
        case 0x4e1394u: goto label_4e1394;
        case 0x4e1398u: goto label_4e1398;
        case 0x4e139cu: goto label_4e139c;
        case 0x4e13a0u: goto label_4e13a0;
        case 0x4e13a4u: goto label_4e13a4;
        case 0x4e13a8u: goto label_4e13a8;
        case 0x4e13acu: goto label_4e13ac;
        case 0x4e13b0u: goto label_4e13b0;
        case 0x4e13b4u: goto label_4e13b4;
        case 0x4e13b8u: goto label_4e13b8;
        case 0x4e13bcu: goto label_4e13bc;
        case 0x4e13c0u: goto label_4e13c0;
        case 0x4e13c4u: goto label_4e13c4;
        case 0x4e13c8u: goto label_4e13c8;
        case 0x4e13ccu: goto label_4e13cc;
        case 0x4e13d0u: goto label_4e13d0;
        case 0x4e13d4u: goto label_4e13d4;
        case 0x4e13d8u: goto label_4e13d8;
        case 0x4e13dcu: goto label_4e13dc;
        case 0x4e13e0u: goto label_4e13e0;
        case 0x4e13e4u: goto label_4e13e4;
        case 0x4e13e8u: goto label_4e13e8;
        case 0x4e13ecu: goto label_4e13ec;
        case 0x4e13f0u: goto label_4e13f0;
        case 0x4e13f4u: goto label_4e13f4;
        case 0x4e13f8u: goto label_4e13f8;
        case 0x4e13fcu: goto label_4e13fc;
        case 0x4e1400u: goto label_4e1400;
        case 0x4e1404u: goto label_4e1404;
        case 0x4e1408u: goto label_4e1408;
        case 0x4e140cu: goto label_4e140c;
        case 0x4e1410u: goto label_4e1410;
        case 0x4e1414u: goto label_4e1414;
        case 0x4e1418u: goto label_4e1418;
        case 0x4e141cu: goto label_4e141c;
        case 0x4e1420u: goto label_4e1420;
        case 0x4e1424u: goto label_4e1424;
        case 0x4e1428u: goto label_4e1428;
        case 0x4e142cu: goto label_4e142c;
        case 0x4e1430u: goto label_4e1430;
        case 0x4e1434u: goto label_4e1434;
        case 0x4e1438u: goto label_4e1438;
        case 0x4e143cu: goto label_4e143c;
        case 0x4e1440u: goto label_4e1440;
        case 0x4e1444u: goto label_4e1444;
        case 0x4e1448u: goto label_4e1448;
        case 0x4e144cu: goto label_4e144c;
        case 0x4e1450u: goto label_4e1450;
        case 0x4e1454u: goto label_4e1454;
        case 0x4e1458u: goto label_4e1458;
        case 0x4e145cu: goto label_4e145c;
        case 0x4e1460u: goto label_4e1460;
        case 0x4e1464u: goto label_4e1464;
        case 0x4e1468u: goto label_4e1468;
        case 0x4e146cu: goto label_4e146c;
        case 0x4e1470u: goto label_4e1470;
        case 0x4e1474u: goto label_4e1474;
        case 0x4e1478u: goto label_4e1478;
        case 0x4e147cu: goto label_4e147c;
        case 0x4e1480u: goto label_4e1480;
        case 0x4e1484u: goto label_4e1484;
        case 0x4e1488u: goto label_4e1488;
        case 0x4e148cu: goto label_4e148c;
        case 0x4e1490u: goto label_4e1490;
        case 0x4e1494u: goto label_4e1494;
        case 0x4e1498u: goto label_4e1498;
        case 0x4e149cu: goto label_4e149c;
        case 0x4e14a0u: goto label_4e14a0;
        case 0x4e14a4u: goto label_4e14a4;
        case 0x4e14a8u: goto label_4e14a8;
        case 0x4e14acu: goto label_4e14ac;
        case 0x4e14b0u: goto label_4e14b0;
        case 0x4e14b4u: goto label_4e14b4;
        case 0x4e14b8u: goto label_4e14b8;
        case 0x4e14bcu: goto label_4e14bc;
        case 0x4e14c0u: goto label_4e14c0;
        case 0x4e14c4u: goto label_4e14c4;
        case 0x4e14c8u: goto label_4e14c8;
        case 0x4e14ccu: goto label_4e14cc;
        case 0x4e14d0u: goto label_4e14d0;
        case 0x4e14d4u: goto label_4e14d4;
        case 0x4e14d8u: goto label_4e14d8;
        case 0x4e14dcu: goto label_4e14dc;
        case 0x4e14e0u: goto label_4e14e0;
        case 0x4e14e4u: goto label_4e14e4;
        case 0x4e14e8u: goto label_4e14e8;
        case 0x4e14ecu: goto label_4e14ec;
        case 0x4e14f0u: goto label_4e14f0;
        case 0x4e14f4u: goto label_4e14f4;
        case 0x4e14f8u: goto label_4e14f8;
        case 0x4e14fcu: goto label_4e14fc;
        case 0x4e1500u: goto label_4e1500;
        case 0x4e1504u: goto label_4e1504;
        case 0x4e1508u: goto label_4e1508;
        case 0x4e150cu: goto label_4e150c;
        case 0x4e1510u: goto label_4e1510;
        case 0x4e1514u: goto label_4e1514;
        case 0x4e1518u: goto label_4e1518;
        case 0x4e151cu: goto label_4e151c;
        case 0x4e1520u: goto label_4e1520;
        case 0x4e1524u: goto label_4e1524;
        case 0x4e1528u: goto label_4e1528;
        case 0x4e152cu: goto label_4e152c;
        case 0x4e1530u: goto label_4e1530;
        case 0x4e1534u: goto label_4e1534;
        case 0x4e1538u: goto label_4e1538;
        case 0x4e153cu: goto label_4e153c;
        case 0x4e1540u: goto label_4e1540;
        case 0x4e1544u: goto label_4e1544;
        case 0x4e1548u: goto label_4e1548;
        case 0x4e154cu: goto label_4e154c;
        case 0x4e1550u: goto label_4e1550;
        case 0x4e1554u: goto label_4e1554;
        case 0x4e1558u: goto label_4e1558;
        case 0x4e155cu: goto label_4e155c;
        case 0x4e1560u: goto label_4e1560;
        case 0x4e1564u: goto label_4e1564;
        case 0x4e1568u: goto label_4e1568;
        case 0x4e156cu: goto label_4e156c;
        case 0x4e1570u: goto label_4e1570;
        case 0x4e1574u: goto label_4e1574;
        case 0x4e1578u: goto label_4e1578;
        case 0x4e157cu: goto label_4e157c;
        case 0x4e1580u: goto label_4e1580;
        case 0x4e1584u: goto label_4e1584;
        case 0x4e1588u: goto label_4e1588;
        case 0x4e158cu: goto label_4e158c;
        case 0x4e1590u: goto label_4e1590;
        case 0x4e1594u: goto label_4e1594;
        case 0x4e1598u: goto label_4e1598;
        case 0x4e159cu: goto label_4e159c;
        case 0x4e15a0u: goto label_4e15a0;
        case 0x4e15a4u: goto label_4e15a4;
        case 0x4e15a8u: goto label_4e15a8;
        case 0x4e15acu: goto label_4e15ac;
        case 0x4e15b0u: goto label_4e15b0;
        case 0x4e15b4u: goto label_4e15b4;
        case 0x4e15b8u: goto label_4e15b8;
        case 0x4e15bcu: goto label_4e15bc;
        case 0x4e15c0u: goto label_4e15c0;
        case 0x4e15c4u: goto label_4e15c4;
        case 0x4e15c8u: goto label_4e15c8;
        case 0x4e15ccu: goto label_4e15cc;
        case 0x4e15d0u: goto label_4e15d0;
        case 0x4e15d4u: goto label_4e15d4;
        case 0x4e15d8u: goto label_4e15d8;
        case 0x4e15dcu: goto label_4e15dc;
        case 0x4e15e0u: goto label_4e15e0;
        case 0x4e15e4u: goto label_4e15e4;
        case 0x4e15e8u: goto label_4e15e8;
        case 0x4e15ecu: goto label_4e15ec;
        case 0x4e15f0u: goto label_4e15f0;
        case 0x4e15f4u: goto label_4e15f4;
        case 0x4e15f8u: goto label_4e15f8;
        case 0x4e15fcu: goto label_4e15fc;
        case 0x4e1600u: goto label_4e1600;
        case 0x4e1604u: goto label_4e1604;
        case 0x4e1608u: goto label_4e1608;
        case 0x4e160cu: goto label_4e160c;
        case 0x4e1610u: goto label_4e1610;
        case 0x4e1614u: goto label_4e1614;
        case 0x4e1618u: goto label_4e1618;
        case 0x4e161cu: goto label_4e161c;
        case 0x4e1620u: goto label_4e1620;
        case 0x4e1624u: goto label_4e1624;
        case 0x4e1628u: goto label_4e1628;
        case 0x4e162cu: goto label_4e162c;
        case 0x4e1630u: goto label_4e1630;
        case 0x4e1634u: goto label_4e1634;
        case 0x4e1638u: goto label_4e1638;
        case 0x4e163cu: goto label_4e163c;
        case 0x4e1640u: goto label_4e1640;
        case 0x4e1644u: goto label_4e1644;
        case 0x4e1648u: goto label_4e1648;
        case 0x4e164cu: goto label_4e164c;
        case 0x4e1650u: goto label_4e1650;
        case 0x4e1654u: goto label_4e1654;
        case 0x4e1658u: goto label_4e1658;
        case 0x4e165cu: goto label_4e165c;
        case 0x4e1660u: goto label_4e1660;
        case 0x4e1664u: goto label_4e1664;
        case 0x4e1668u: goto label_4e1668;
        case 0x4e166cu: goto label_4e166c;
        case 0x4e1670u: goto label_4e1670;
        case 0x4e1674u: goto label_4e1674;
        case 0x4e1678u: goto label_4e1678;
        case 0x4e167cu: goto label_4e167c;
        case 0x4e1680u: goto label_4e1680;
        case 0x4e1684u: goto label_4e1684;
        case 0x4e1688u: goto label_4e1688;
        case 0x4e168cu: goto label_4e168c;
        case 0x4e1690u: goto label_4e1690;
        case 0x4e1694u: goto label_4e1694;
        case 0x4e1698u: goto label_4e1698;
        case 0x4e169cu: goto label_4e169c;
        case 0x4e16a0u: goto label_4e16a0;
        case 0x4e16a4u: goto label_4e16a4;
        case 0x4e16a8u: goto label_4e16a8;
        case 0x4e16acu: goto label_4e16ac;
        case 0x4e16b0u: goto label_4e16b0;
        case 0x4e16b4u: goto label_4e16b4;
        case 0x4e16b8u: goto label_4e16b8;
        case 0x4e16bcu: goto label_4e16bc;
        case 0x4e16c0u: goto label_4e16c0;
        case 0x4e16c4u: goto label_4e16c4;
        case 0x4e16c8u: goto label_4e16c8;
        case 0x4e16ccu: goto label_4e16cc;
        case 0x4e16d0u: goto label_4e16d0;
        case 0x4e16d4u: goto label_4e16d4;
        case 0x4e16d8u: goto label_4e16d8;
        case 0x4e16dcu: goto label_4e16dc;
        case 0x4e16e0u: goto label_4e16e0;
        case 0x4e16e4u: goto label_4e16e4;
        case 0x4e16e8u: goto label_4e16e8;
        case 0x4e16ecu: goto label_4e16ec;
        case 0x4e16f0u: goto label_4e16f0;
        case 0x4e16f4u: goto label_4e16f4;
        case 0x4e16f8u: goto label_4e16f8;
        case 0x4e16fcu: goto label_4e16fc;
        case 0x4e1700u: goto label_4e1700;
        case 0x4e1704u: goto label_4e1704;
        case 0x4e1708u: goto label_4e1708;
        case 0x4e170cu: goto label_4e170c;
        case 0x4e1710u: goto label_4e1710;
        case 0x4e1714u: goto label_4e1714;
        case 0x4e1718u: goto label_4e1718;
        case 0x4e171cu: goto label_4e171c;
        case 0x4e1720u: goto label_4e1720;
        case 0x4e1724u: goto label_4e1724;
        case 0x4e1728u: goto label_4e1728;
        case 0x4e172cu: goto label_4e172c;
        case 0x4e1730u: goto label_4e1730;
        case 0x4e1734u: goto label_4e1734;
        case 0x4e1738u: goto label_4e1738;
        case 0x4e173cu: goto label_4e173c;
        case 0x4e1740u: goto label_4e1740;
        case 0x4e1744u: goto label_4e1744;
        case 0x4e1748u: goto label_4e1748;
        case 0x4e174cu: goto label_4e174c;
        case 0x4e1750u: goto label_4e1750;
        case 0x4e1754u: goto label_4e1754;
        case 0x4e1758u: goto label_4e1758;
        case 0x4e175cu: goto label_4e175c;
        case 0x4e1760u: goto label_4e1760;
        case 0x4e1764u: goto label_4e1764;
        case 0x4e1768u: goto label_4e1768;
        case 0x4e176cu: goto label_4e176c;
        case 0x4e1770u: goto label_4e1770;
        case 0x4e1774u: goto label_4e1774;
        case 0x4e1778u: goto label_4e1778;
        case 0x4e177cu: goto label_4e177c;
        case 0x4e1780u: goto label_4e1780;
        case 0x4e1784u: goto label_4e1784;
        case 0x4e1788u: goto label_4e1788;
        case 0x4e178cu: goto label_4e178c;
        case 0x4e1790u: goto label_4e1790;
        case 0x4e1794u: goto label_4e1794;
        case 0x4e1798u: goto label_4e1798;
        case 0x4e179cu: goto label_4e179c;
        case 0x4e17a0u: goto label_4e17a0;
        case 0x4e17a4u: goto label_4e17a4;
        case 0x4e17a8u: goto label_4e17a8;
        case 0x4e17acu: goto label_4e17ac;
        case 0x4e17b0u: goto label_4e17b0;
        case 0x4e17b4u: goto label_4e17b4;
        case 0x4e17b8u: goto label_4e17b8;
        case 0x4e17bcu: goto label_4e17bc;
        case 0x4e17c0u: goto label_4e17c0;
        case 0x4e17c4u: goto label_4e17c4;
        case 0x4e17c8u: goto label_4e17c8;
        case 0x4e17ccu: goto label_4e17cc;
        case 0x4e17d0u: goto label_4e17d0;
        case 0x4e17d4u: goto label_4e17d4;
        case 0x4e17d8u: goto label_4e17d8;
        case 0x4e17dcu: goto label_4e17dc;
        case 0x4e17e0u: goto label_4e17e0;
        case 0x4e17e4u: goto label_4e17e4;
        case 0x4e17e8u: goto label_4e17e8;
        case 0x4e17ecu: goto label_4e17ec;
        case 0x4e17f0u: goto label_4e17f0;
        case 0x4e17f4u: goto label_4e17f4;
        case 0x4e17f8u: goto label_4e17f8;
        case 0x4e17fcu: goto label_4e17fc;
        case 0x4e1800u: goto label_4e1800;
        case 0x4e1804u: goto label_4e1804;
        case 0x4e1808u: goto label_4e1808;
        case 0x4e180cu: goto label_4e180c;
        case 0x4e1810u: goto label_4e1810;
        case 0x4e1814u: goto label_4e1814;
        case 0x4e1818u: goto label_4e1818;
        case 0x4e181cu: goto label_4e181c;
        case 0x4e1820u: goto label_4e1820;
        case 0x4e1824u: goto label_4e1824;
        case 0x4e1828u: goto label_4e1828;
        case 0x4e182cu: goto label_4e182c;
        case 0x4e1830u: goto label_4e1830;
        case 0x4e1834u: goto label_4e1834;
        case 0x4e1838u: goto label_4e1838;
        case 0x4e183cu: goto label_4e183c;
        case 0x4e1840u: goto label_4e1840;
        case 0x4e1844u: goto label_4e1844;
        case 0x4e1848u: goto label_4e1848;
        case 0x4e184cu: goto label_4e184c;
        case 0x4e1850u: goto label_4e1850;
        case 0x4e1854u: goto label_4e1854;
        case 0x4e1858u: goto label_4e1858;
        case 0x4e185cu: goto label_4e185c;
        case 0x4e1860u: goto label_4e1860;
        case 0x4e1864u: goto label_4e1864;
        case 0x4e1868u: goto label_4e1868;
        case 0x4e186cu: goto label_4e186c;
        case 0x4e1870u: goto label_4e1870;
        case 0x4e1874u: goto label_4e1874;
        case 0x4e1878u: goto label_4e1878;
        case 0x4e187cu: goto label_4e187c;
        case 0x4e1880u: goto label_4e1880;
        case 0x4e1884u: goto label_4e1884;
        case 0x4e1888u: goto label_4e1888;
        case 0x4e188cu: goto label_4e188c;
        case 0x4e1890u: goto label_4e1890;
        case 0x4e1894u: goto label_4e1894;
        case 0x4e1898u: goto label_4e1898;
        case 0x4e189cu: goto label_4e189c;
        case 0x4e18a0u: goto label_4e18a0;
        case 0x4e18a4u: goto label_4e18a4;
        case 0x4e18a8u: goto label_4e18a8;
        case 0x4e18acu: goto label_4e18ac;
        case 0x4e18b0u: goto label_4e18b0;
        case 0x4e18b4u: goto label_4e18b4;
        case 0x4e18b8u: goto label_4e18b8;
        case 0x4e18bcu: goto label_4e18bc;
        case 0x4e18c0u: goto label_4e18c0;
        case 0x4e18c4u: goto label_4e18c4;
        case 0x4e18c8u: goto label_4e18c8;
        case 0x4e18ccu: goto label_4e18cc;
        case 0x4e18d0u: goto label_4e18d0;
        case 0x4e18d4u: goto label_4e18d4;
        case 0x4e18d8u: goto label_4e18d8;
        case 0x4e18dcu: goto label_4e18dc;
        case 0x4e18e0u: goto label_4e18e0;
        case 0x4e18e4u: goto label_4e18e4;
        case 0x4e18e8u: goto label_4e18e8;
        case 0x4e18ecu: goto label_4e18ec;
        case 0x4e18f0u: goto label_4e18f0;
        case 0x4e18f4u: goto label_4e18f4;
        case 0x4e18f8u: goto label_4e18f8;
        case 0x4e18fcu: goto label_4e18fc;
        case 0x4e1900u: goto label_4e1900;
        case 0x4e1904u: goto label_4e1904;
        case 0x4e1908u: goto label_4e1908;
        case 0x4e190cu: goto label_4e190c;
        case 0x4e1910u: goto label_4e1910;
        case 0x4e1914u: goto label_4e1914;
        case 0x4e1918u: goto label_4e1918;
        case 0x4e191cu: goto label_4e191c;
        case 0x4e1920u: goto label_4e1920;
        case 0x4e1924u: goto label_4e1924;
        case 0x4e1928u: goto label_4e1928;
        case 0x4e192cu: goto label_4e192c;
        case 0x4e1930u: goto label_4e1930;
        case 0x4e1934u: goto label_4e1934;
        case 0x4e1938u: goto label_4e1938;
        case 0x4e193cu: goto label_4e193c;
        case 0x4e1940u: goto label_4e1940;
        case 0x4e1944u: goto label_4e1944;
        case 0x4e1948u: goto label_4e1948;
        case 0x4e194cu: goto label_4e194c;
        case 0x4e1950u: goto label_4e1950;
        case 0x4e1954u: goto label_4e1954;
        case 0x4e1958u: goto label_4e1958;
        case 0x4e195cu: goto label_4e195c;
        case 0x4e1960u: goto label_4e1960;
        case 0x4e1964u: goto label_4e1964;
        case 0x4e1968u: goto label_4e1968;
        case 0x4e196cu: goto label_4e196c;
        case 0x4e1970u: goto label_4e1970;
        case 0x4e1974u: goto label_4e1974;
        case 0x4e1978u: goto label_4e1978;
        case 0x4e197cu: goto label_4e197c;
        case 0x4e1980u: goto label_4e1980;
        case 0x4e1984u: goto label_4e1984;
        case 0x4e1988u: goto label_4e1988;
        case 0x4e198cu: goto label_4e198c;
        case 0x4e1990u: goto label_4e1990;
        case 0x4e1994u: goto label_4e1994;
        case 0x4e1998u: goto label_4e1998;
        case 0x4e199cu: goto label_4e199c;
        case 0x4e19a0u: goto label_4e19a0;
        case 0x4e19a4u: goto label_4e19a4;
        case 0x4e19a8u: goto label_4e19a8;
        case 0x4e19acu: goto label_4e19ac;
        case 0x4e19b0u: goto label_4e19b0;
        case 0x4e19b4u: goto label_4e19b4;
        case 0x4e19b8u: goto label_4e19b8;
        case 0x4e19bcu: goto label_4e19bc;
        case 0x4e19c0u: goto label_4e19c0;
        case 0x4e19c4u: goto label_4e19c4;
        case 0x4e19c8u: goto label_4e19c8;
        case 0x4e19ccu: goto label_4e19cc;
        case 0x4e19d0u: goto label_4e19d0;
        case 0x4e19d4u: goto label_4e19d4;
        case 0x4e19d8u: goto label_4e19d8;
        case 0x4e19dcu: goto label_4e19dc;
        case 0x4e19e0u: goto label_4e19e0;
        case 0x4e19e4u: goto label_4e19e4;
        case 0x4e19e8u: goto label_4e19e8;
        case 0x4e19ecu: goto label_4e19ec;
        case 0x4e19f0u: goto label_4e19f0;
        case 0x4e19f4u: goto label_4e19f4;
        case 0x4e19f8u: goto label_4e19f8;
        case 0x4e19fcu: goto label_4e19fc;
        case 0x4e1a00u: goto label_4e1a00;
        case 0x4e1a04u: goto label_4e1a04;
        case 0x4e1a08u: goto label_4e1a08;
        case 0x4e1a0cu: goto label_4e1a0c;
        case 0x4e1a10u: goto label_4e1a10;
        case 0x4e1a14u: goto label_4e1a14;
        case 0x4e1a18u: goto label_4e1a18;
        case 0x4e1a1cu: goto label_4e1a1c;
        case 0x4e1a20u: goto label_4e1a20;
        case 0x4e1a24u: goto label_4e1a24;
        case 0x4e1a28u: goto label_4e1a28;
        case 0x4e1a2cu: goto label_4e1a2c;
        case 0x4e1a30u: goto label_4e1a30;
        case 0x4e1a34u: goto label_4e1a34;
        case 0x4e1a38u: goto label_4e1a38;
        case 0x4e1a3cu: goto label_4e1a3c;
        case 0x4e1a40u: goto label_4e1a40;
        case 0x4e1a44u: goto label_4e1a44;
        case 0x4e1a48u: goto label_4e1a48;
        case 0x4e1a4cu: goto label_4e1a4c;
        case 0x4e1a50u: goto label_4e1a50;
        case 0x4e1a54u: goto label_4e1a54;
        case 0x4e1a58u: goto label_4e1a58;
        case 0x4e1a5cu: goto label_4e1a5c;
        case 0x4e1a60u: goto label_4e1a60;
        case 0x4e1a64u: goto label_4e1a64;
        case 0x4e1a68u: goto label_4e1a68;
        case 0x4e1a6cu: goto label_4e1a6c;
        case 0x4e1a70u: goto label_4e1a70;
        case 0x4e1a74u: goto label_4e1a74;
        case 0x4e1a78u: goto label_4e1a78;
        case 0x4e1a7cu: goto label_4e1a7c;
        case 0x4e1a80u: goto label_4e1a80;
        case 0x4e1a84u: goto label_4e1a84;
        case 0x4e1a88u: goto label_4e1a88;
        case 0x4e1a8cu: goto label_4e1a8c;
        case 0x4e1a90u: goto label_4e1a90;
        case 0x4e1a94u: goto label_4e1a94;
        case 0x4e1a98u: goto label_4e1a98;
        case 0x4e1a9cu: goto label_4e1a9c;
        case 0x4e1aa0u: goto label_4e1aa0;
        case 0x4e1aa4u: goto label_4e1aa4;
        case 0x4e1aa8u: goto label_4e1aa8;
        case 0x4e1aacu: goto label_4e1aac;
        case 0x4e1ab0u: goto label_4e1ab0;
        case 0x4e1ab4u: goto label_4e1ab4;
        case 0x4e1ab8u: goto label_4e1ab8;
        case 0x4e1abcu: goto label_4e1abc;
        case 0x4e1ac0u: goto label_4e1ac0;
        case 0x4e1ac4u: goto label_4e1ac4;
        case 0x4e1ac8u: goto label_4e1ac8;
        case 0x4e1accu: goto label_4e1acc;
        case 0x4e1ad0u: goto label_4e1ad0;
        case 0x4e1ad4u: goto label_4e1ad4;
        case 0x4e1ad8u: goto label_4e1ad8;
        case 0x4e1adcu: goto label_4e1adc;
        case 0x4e1ae0u: goto label_4e1ae0;
        case 0x4e1ae4u: goto label_4e1ae4;
        case 0x4e1ae8u: goto label_4e1ae8;
        case 0x4e1aecu: goto label_4e1aec;
        case 0x4e1af0u: goto label_4e1af0;
        case 0x4e1af4u: goto label_4e1af4;
        case 0x4e1af8u: goto label_4e1af8;
        case 0x4e1afcu: goto label_4e1afc;
        case 0x4e1b00u: goto label_4e1b00;
        case 0x4e1b04u: goto label_4e1b04;
        case 0x4e1b08u: goto label_4e1b08;
        case 0x4e1b0cu: goto label_4e1b0c;
        case 0x4e1b10u: goto label_4e1b10;
        case 0x4e1b14u: goto label_4e1b14;
        case 0x4e1b18u: goto label_4e1b18;
        case 0x4e1b1cu: goto label_4e1b1c;
        case 0x4e1b20u: goto label_4e1b20;
        case 0x4e1b24u: goto label_4e1b24;
        case 0x4e1b28u: goto label_4e1b28;
        case 0x4e1b2cu: goto label_4e1b2c;
        case 0x4e1b30u: goto label_4e1b30;
        case 0x4e1b34u: goto label_4e1b34;
        case 0x4e1b38u: goto label_4e1b38;
        case 0x4e1b3cu: goto label_4e1b3c;
        case 0x4e1b40u: goto label_4e1b40;
        case 0x4e1b44u: goto label_4e1b44;
        case 0x4e1b48u: goto label_4e1b48;
        case 0x4e1b4cu: goto label_4e1b4c;
        case 0x4e1b50u: goto label_4e1b50;
        case 0x4e1b54u: goto label_4e1b54;
        case 0x4e1b58u: goto label_4e1b58;
        case 0x4e1b5cu: goto label_4e1b5c;
        case 0x4e1b60u: goto label_4e1b60;
        case 0x4e1b64u: goto label_4e1b64;
        case 0x4e1b68u: goto label_4e1b68;
        case 0x4e1b6cu: goto label_4e1b6c;
        case 0x4e1b70u: goto label_4e1b70;
        case 0x4e1b74u: goto label_4e1b74;
        case 0x4e1b78u: goto label_4e1b78;
        case 0x4e1b7cu: goto label_4e1b7c;
        case 0x4e1b80u: goto label_4e1b80;
        case 0x4e1b84u: goto label_4e1b84;
        case 0x4e1b88u: goto label_4e1b88;
        case 0x4e1b8cu: goto label_4e1b8c;
        case 0x4e1b90u: goto label_4e1b90;
        case 0x4e1b94u: goto label_4e1b94;
        case 0x4e1b98u: goto label_4e1b98;
        case 0x4e1b9cu: goto label_4e1b9c;
        case 0x4e1ba0u: goto label_4e1ba0;
        case 0x4e1ba4u: goto label_4e1ba4;
        case 0x4e1ba8u: goto label_4e1ba8;
        case 0x4e1bacu: goto label_4e1bac;
        case 0x4e1bb0u: goto label_4e1bb0;
        case 0x4e1bb4u: goto label_4e1bb4;
        case 0x4e1bb8u: goto label_4e1bb8;
        case 0x4e1bbcu: goto label_4e1bbc;
        case 0x4e1bc0u: goto label_4e1bc0;
        case 0x4e1bc4u: goto label_4e1bc4;
        case 0x4e1bc8u: goto label_4e1bc8;
        case 0x4e1bccu: goto label_4e1bcc;
        case 0x4e1bd0u: goto label_4e1bd0;
        case 0x4e1bd4u: goto label_4e1bd4;
        case 0x4e1bd8u: goto label_4e1bd8;
        case 0x4e1bdcu: goto label_4e1bdc;
        case 0x4e1be0u: goto label_4e1be0;
        case 0x4e1be4u: goto label_4e1be4;
        case 0x4e1be8u: goto label_4e1be8;
        case 0x4e1becu: goto label_4e1bec;
        case 0x4e1bf0u: goto label_4e1bf0;
        case 0x4e1bf4u: goto label_4e1bf4;
        case 0x4e1bf8u: goto label_4e1bf8;
        case 0x4e1bfcu: goto label_4e1bfc;
        case 0x4e1c00u: goto label_4e1c00;
        case 0x4e1c04u: goto label_4e1c04;
        case 0x4e1c08u: goto label_4e1c08;
        case 0x4e1c0cu: goto label_4e1c0c;
        case 0x4e1c10u: goto label_4e1c10;
        case 0x4e1c14u: goto label_4e1c14;
        case 0x4e1c18u: goto label_4e1c18;
        case 0x4e1c1cu: goto label_4e1c1c;
        case 0x4e1c20u: goto label_4e1c20;
        case 0x4e1c24u: goto label_4e1c24;
        case 0x4e1c28u: goto label_4e1c28;
        case 0x4e1c2cu: goto label_4e1c2c;
        case 0x4e1c30u: goto label_4e1c30;
        case 0x4e1c34u: goto label_4e1c34;
        case 0x4e1c38u: goto label_4e1c38;
        case 0x4e1c3cu: goto label_4e1c3c;
        case 0x4e1c40u: goto label_4e1c40;
        case 0x4e1c44u: goto label_4e1c44;
        case 0x4e1c48u: goto label_4e1c48;
        case 0x4e1c4cu: goto label_4e1c4c;
        case 0x4e1c50u: goto label_4e1c50;
        case 0x4e1c54u: goto label_4e1c54;
        case 0x4e1c58u: goto label_4e1c58;
        case 0x4e1c5cu: goto label_4e1c5c;
        case 0x4e1c60u: goto label_4e1c60;
        case 0x4e1c64u: goto label_4e1c64;
        case 0x4e1c68u: goto label_4e1c68;
        case 0x4e1c6cu: goto label_4e1c6c;
        case 0x4e1c70u: goto label_4e1c70;
        case 0x4e1c74u: goto label_4e1c74;
        case 0x4e1c78u: goto label_4e1c78;
        case 0x4e1c7cu: goto label_4e1c7c;
        case 0x4e1c80u: goto label_4e1c80;
        case 0x4e1c84u: goto label_4e1c84;
        case 0x4e1c88u: goto label_4e1c88;
        case 0x4e1c8cu: goto label_4e1c8c;
        case 0x4e1c90u: goto label_4e1c90;
        case 0x4e1c94u: goto label_4e1c94;
        case 0x4e1c98u: goto label_4e1c98;
        case 0x4e1c9cu: goto label_4e1c9c;
        case 0x4e1ca0u: goto label_4e1ca0;
        case 0x4e1ca4u: goto label_4e1ca4;
        case 0x4e1ca8u: goto label_4e1ca8;
        case 0x4e1cacu: goto label_4e1cac;
        case 0x4e1cb0u: goto label_4e1cb0;
        case 0x4e1cb4u: goto label_4e1cb4;
        case 0x4e1cb8u: goto label_4e1cb8;
        case 0x4e1cbcu: goto label_4e1cbc;
        case 0x4e1cc0u: goto label_4e1cc0;
        case 0x4e1cc4u: goto label_4e1cc4;
        case 0x4e1cc8u: goto label_4e1cc8;
        case 0x4e1cccu: goto label_4e1ccc;
        case 0x4e1cd0u: goto label_4e1cd0;
        case 0x4e1cd4u: goto label_4e1cd4;
        case 0x4e1cd8u: goto label_4e1cd8;
        case 0x4e1cdcu: goto label_4e1cdc;
        case 0x4e1ce0u: goto label_4e1ce0;
        case 0x4e1ce4u: goto label_4e1ce4;
        case 0x4e1ce8u: goto label_4e1ce8;
        case 0x4e1cecu: goto label_4e1cec;
        case 0x4e1cf0u: goto label_4e1cf0;
        case 0x4e1cf4u: goto label_4e1cf4;
        case 0x4e1cf8u: goto label_4e1cf8;
        case 0x4e1cfcu: goto label_4e1cfc;
        case 0x4e1d00u: goto label_4e1d00;
        case 0x4e1d04u: goto label_4e1d04;
        case 0x4e1d08u: goto label_4e1d08;
        case 0x4e1d0cu: goto label_4e1d0c;
        case 0x4e1d10u: goto label_4e1d10;
        case 0x4e1d14u: goto label_4e1d14;
        case 0x4e1d18u: goto label_4e1d18;
        case 0x4e1d1cu: goto label_4e1d1c;
        case 0x4e1d20u: goto label_4e1d20;
        case 0x4e1d24u: goto label_4e1d24;
        case 0x4e1d28u: goto label_4e1d28;
        case 0x4e1d2cu: goto label_4e1d2c;
        case 0x4e1d30u: goto label_4e1d30;
        case 0x4e1d34u: goto label_4e1d34;
        case 0x4e1d38u: goto label_4e1d38;
        case 0x4e1d3cu: goto label_4e1d3c;
        case 0x4e1d40u: goto label_4e1d40;
        case 0x4e1d44u: goto label_4e1d44;
        case 0x4e1d48u: goto label_4e1d48;
        case 0x4e1d4cu: goto label_4e1d4c;
        case 0x4e1d50u: goto label_4e1d50;
        case 0x4e1d54u: goto label_4e1d54;
        case 0x4e1d58u: goto label_4e1d58;
        case 0x4e1d5cu: goto label_4e1d5c;
        case 0x4e1d60u: goto label_4e1d60;
        case 0x4e1d64u: goto label_4e1d64;
        case 0x4e1d68u: goto label_4e1d68;
        case 0x4e1d6cu: goto label_4e1d6c;
        case 0x4e1d70u: goto label_4e1d70;
        case 0x4e1d74u: goto label_4e1d74;
        case 0x4e1d78u: goto label_4e1d78;
        case 0x4e1d7cu: goto label_4e1d7c;
        case 0x4e1d80u: goto label_4e1d80;
        case 0x4e1d84u: goto label_4e1d84;
        case 0x4e1d88u: goto label_4e1d88;
        case 0x4e1d8cu: goto label_4e1d8c;
        case 0x4e1d90u: goto label_4e1d90;
        case 0x4e1d94u: goto label_4e1d94;
        case 0x4e1d98u: goto label_4e1d98;
        case 0x4e1d9cu: goto label_4e1d9c;
        case 0x4e1da0u: goto label_4e1da0;
        case 0x4e1da4u: goto label_4e1da4;
        case 0x4e1da8u: goto label_4e1da8;
        case 0x4e1dacu: goto label_4e1dac;
        case 0x4e1db0u: goto label_4e1db0;
        case 0x4e1db4u: goto label_4e1db4;
        case 0x4e1db8u: goto label_4e1db8;
        case 0x4e1dbcu: goto label_4e1dbc;
        case 0x4e1dc0u: goto label_4e1dc0;
        case 0x4e1dc4u: goto label_4e1dc4;
        case 0x4e1dc8u: goto label_4e1dc8;
        case 0x4e1dccu: goto label_4e1dcc;
        case 0x4e1dd0u: goto label_4e1dd0;
        case 0x4e1dd4u: goto label_4e1dd4;
        case 0x4e1dd8u: goto label_4e1dd8;
        case 0x4e1ddcu: goto label_4e1ddc;
        case 0x4e1de0u: goto label_4e1de0;
        case 0x4e1de4u: goto label_4e1de4;
        case 0x4e1de8u: goto label_4e1de8;
        case 0x4e1decu: goto label_4e1dec;
        case 0x4e1df0u: goto label_4e1df0;
        case 0x4e1df4u: goto label_4e1df4;
        case 0x4e1df8u: goto label_4e1df8;
        case 0x4e1dfcu: goto label_4e1dfc;
        case 0x4e1e00u: goto label_4e1e00;
        case 0x4e1e04u: goto label_4e1e04;
        case 0x4e1e08u: goto label_4e1e08;
        case 0x4e1e0cu: goto label_4e1e0c;
        case 0x4e1e10u: goto label_4e1e10;
        case 0x4e1e14u: goto label_4e1e14;
        case 0x4e1e18u: goto label_4e1e18;
        case 0x4e1e1cu: goto label_4e1e1c;
        case 0x4e1e20u: goto label_4e1e20;
        case 0x4e1e24u: goto label_4e1e24;
        case 0x4e1e28u: goto label_4e1e28;
        case 0x4e1e2cu: goto label_4e1e2c;
        case 0x4e1e30u: goto label_4e1e30;
        case 0x4e1e34u: goto label_4e1e34;
        case 0x4e1e38u: goto label_4e1e38;
        case 0x4e1e3cu: goto label_4e1e3c;
        case 0x4e1e40u: goto label_4e1e40;
        case 0x4e1e44u: goto label_4e1e44;
        case 0x4e1e48u: goto label_4e1e48;
        case 0x4e1e4cu: goto label_4e1e4c;
        case 0x4e1e50u: goto label_4e1e50;
        case 0x4e1e54u: goto label_4e1e54;
        case 0x4e1e58u: goto label_4e1e58;
        case 0x4e1e5cu: goto label_4e1e5c;
        case 0x4e1e60u: goto label_4e1e60;
        case 0x4e1e64u: goto label_4e1e64;
        case 0x4e1e68u: goto label_4e1e68;
        case 0x4e1e6cu: goto label_4e1e6c;
        case 0x4e1e70u: goto label_4e1e70;
        case 0x4e1e74u: goto label_4e1e74;
        case 0x4e1e78u: goto label_4e1e78;
        case 0x4e1e7cu: goto label_4e1e7c;
        case 0x4e1e80u: goto label_4e1e80;
        case 0x4e1e84u: goto label_4e1e84;
        case 0x4e1e88u: goto label_4e1e88;
        case 0x4e1e8cu: goto label_4e1e8c;
        case 0x4e1e90u: goto label_4e1e90;
        case 0x4e1e94u: goto label_4e1e94;
        case 0x4e1e98u: goto label_4e1e98;
        case 0x4e1e9cu: goto label_4e1e9c;
        case 0x4e1ea0u: goto label_4e1ea0;
        case 0x4e1ea4u: goto label_4e1ea4;
        case 0x4e1ea8u: goto label_4e1ea8;
        case 0x4e1eacu: goto label_4e1eac;
        case 0x4e1eb0u: goto label_4e1eb0;
        case 0x4e1eb4u: goto label_4e1eb4;
        case 0x4e1eb8u: goto label_4e1eb8;
        case 0x4e1ebcu: goto label_4e1ebc;
        case 0x4e1ec0u: goto label_4e1ec0;
        case 0x4e1ec4u: goto label_4e1ec4;
        case 0x4e1ec8u: goto label_4e1ec8;
        case 0x4e1eccu: goto label_4e1ecc;
        case 0x4e1ed0u: goto label_4e1ed0;
        case 0x4e1ed4u: goto label_4e1ed4;
        case 0x4e1ed8u: goto label_4e1ed8;
        case 0x4e1edcu: goto label_4e1edc;
        case 0x4e1ee0u: goto label_4e1ee0;
        case 0x4e1ee4u: goto label_4e1ee4;
        case 0x4e1ee8u: goto label_4e1ee8;
        case 0x4e1eecu: goto label_4e1eec;
        case 0x4e1ef0u: goto label_4e1ef0;
        case 0x4e1ef4u: goto label_4e1ef4;
        case 0x4e1ef8u: goto label_4e1ef8;
        case 0x4e1efcu: goto label_4e1efc;
        case 0x4e1f00u: goto label_4e1f00;
        case 0x4e1f04u: goto label_4e1f04;
        case 0x4e1f08u: goto label_4e1f08;
        case 0x4e1f0cu: goto label_4e1f0c;
        case 0x4e1f10u: goto label_4e1f10;
        case 0x4e1f14u: goto label_4e1f14;
        case 0x4e1f18u: goto label_4e1f18;
        case 0x4e1f1cu: goto label_4e1f1c;
        case 0x4e1f20u: goto label_4e1f20;
        case 0x4e1f24u: goto label_4e1f24;
        case 0x4e1f28u: goto label_4e1f28;
        case 0x4e1f2cu: goto label_4e1f2c;
        case 0x4e1f30u: goto label_4e1f30;
        case 0x4e1f34u: goto label_4e1f34;
        case 0x4e1f38u: goto label_4e1f38;
        case 0x4e1f3cu: goto label_4e1f3c;
        case 0x4e1f40u: goto label_4e1f40;
        case 0x4e1f44u: goto label_4e1f44;
        case 0x4e1f48u: goto label_4e1f48;
        case 0x4e1f4cu: goto label_4e1f4c;
        case 0x4e1f50u: goto label_4e1f50;
        case 0x4e1f54u: goto label_4e1f54;
        case 0x4e1f58u: goto label_4e1f58;
        case 0x4e1f5cu: goto label_4e1f5c;
        case 0x4e1f60u: goto label_4e1f60;
        case 0x4e1f64u: goto label_4e1f64;
        case 0x4e1f68u: goto label_4e1f68;
        case 0x4e1f6cu: goto label_4e1f6c;
        case 0x4e1f70u: goto label_4e1f70;
        case 0x4e1f74u: goto label_4e1f74;
        case 0x4e1f78u: goto label_4e1f78;
        case 0x4e1f7cu: goto label_4e1f7c;
        case 0x4e1f80u: goto label_4e1f80;
        case 0x4e1f84u: goto label_4e1f84;
        case 0x4e1f88u: goto label_4e1f88;
        case 0x4e1f8cu: goto label_4e1f8c;
        case 0x4e1f90u: goto label_4e1f90;
        case 0x4e1f94u: goto label_4e1f94;
        case 0x4e1f98u: goto label_4e1f98;
        case 0x4e1f9cu: goto label_4e1f9c;
        case 0x4e1fa0u: goto label_4e1fa0;
        case 0x4e1fa4u: goto label_4e1fa4;
        case 0x4e1fa8u: goto label_4e1fa8;
        case 0x4e1facu: goto label_4e1fac;
        case 0x4e1fb0u: goto label_4e1fb0;
        case 0x4e1fb4u: goto label_4e1fb4;
        case 0x4e1fb8u: goto label_4e1fb8;
        case 0x4e1fbcu: goto label_4e1fbc;
        case 0x4e1fc0u: goto label_4e1fc0;
        case 0x4e1fc4u: goto label_4e1fc4;
        case 0x4e1fc8u: goto label_4e1fc8;
        case 0x4e1fccu: goto label_4e1fcc;
        case 0x4e1fd0u: goto label_4e1fd0;
        case 0x4e1fd4u: goto label_4e1fd4;
        case 0x4e1fd8u: goto label_4e1fd8;
        case 0x4e1fdcu: goto label_4e1fdc;
        case 0x4e1fe0u: goto label_4e1fe0;
        case 0x4e1fe4u: goto label_4e1fe4;
        case 0x4e1fe8u: goto label_4e1fe8;
        case 0x4e1fecu: goto label_4e1fec;
        case 0x4e1ff0u: goto label_4e1ff0;
        case 0x4e1ff4u: goto label_4e1ff4;
        case 0x4e1ff8u: goto label_4e1ff8;
        case 0x4e1ffcu: goto label_4e1ffc;
        case 0x4e2000u: goto label_4e2000;
        case 0x4e2004u: goto label_4e2004;
        case 0x4e2008u: goto label_4e2008;
        case 0x4e200cu: goto label_4e200c;
        case 0x4e2010u: goto label_4e2010;
        case 0x4e2014u: goto label_4e2014;
        case 0x4e2018u: goto label_4e2018;
        case 0x4e201cu: goto label_4e201c;
        case 0x4e2020u: goto label_4e2020;
        case 0x4e2024u: goto label_4e2024;
        case 0x4e2028u: goto label_4e2028;
        case 0x4e202cu: goto label_4e202c;
        case 0x4e2030u: goto label_4e2030;
        case 0x4e2034u: goto label_4e2034;
        case 0x4e2038u: goto label_4e2038;
        case 0x4e203cu: goto label_4e203c;
        case 0x4e2040u: goto label_4e2040;
        case 0x4e2044u: goto label_4e2044;
        case 0x4e2048u: goto label_4e2048;
        case 0x4e204cu: goto label_4e204c;
        case 0x4e2050u: goto label_4e2050;
        case 0x4e2054u: goto label_4e2054;
        case 0x4e2058u: goto label_4e2058;
        case 0x4e205cu: goto label_4e205c;
        case 0x4e2060u: goto label_4e2060;
        case 0x4e2064u: goto label_4e2064;
        case 0x4e2068u: goto label_4e2068;
        case 0x4e206cu: goto label_4e206c;
        case 0x4e2070u: goto label_4e2070;
        case 0x4e2074u: goto label_4e2074;
        case 0x4e2078u: goto label_4e2078;
        case 0x4e207cu: goto label_4e207c;
        case 0x4e2080u: goto label_4e2080;
        case 0x4e2084u: goto label_4e2084;
        case 0x4e2088u: goto label_4e2088;
        case 0x4e208cu: goto label_4e208c;
        case 0x4e2090u: goto label_4e2090;
        case 0x4e2094u: goto label_4e2094;
        case 0x4e2098u: goto label_4e2098;
        case 0x4e209cu: goto label_4e209c;
        case 0x4e20a0u: goto label_4e20a0;
        case 0x4e20a4u: goto label_4e20a4;
        case 0x4e20a8u: goto label_4e20a8;
        case 0x4e20acu: goto label_4e20ac;
        case 0x4e20b0u: goto label_4e20b0;
        case 0x4e20b4u: goto label_4e20b4;
        case 0x4e20b8u: goto label_4e20b8;
        case 0x4e20bcu: goto label_4e20bc;
        case 0x4e20c0u: goto label_4e20c0;
        case 0x4e20c4u: goto label_4e20c4;
        case 0x4e20c8u: goto label_4e20c8;
        case 0x4e20ccu: goto label_4e20cc;
        case 0x4e20d0u: goto label_4e20d0;
        case 0x4e20d4u: goto label_4e20d4;
        case 0x4e20d8u: goto label_4e20d8;
        case 0x4e20dcu: goto label_4e20dc;
        case 0x4e20e0u: goto label_4e20e0;
        case 0x4e20e4u: goto label_4e20e4;
        case 0x4e20e8u: goto label_4e20e8;
        case 0x4e20ecu: goto label_4e20ec;
        case 0x4e20f0u: goto label_4e20f0;
        case 0x4e20f4u: goto label_4e20f4;
        case 0x4e20f8u: goto label_4e20f8;
        case 0x4e20fcu: goto label_4e20fc;
        case 0x4e2100u: goto label_4e2100;
        case 0x4e2104u: goto label_4e2104;
        case 0x4e2108u: goto label_4e2108;
        case 0x4e210cu: goto label_4e210c;
        case 0x4e2110u: goto label_4e2110;
        case 0x4e2114u: goto label_4e2114;
        case 0x4e2118u: goto label_4e2118;
        case 0x4e211cu: goto label_4e211c;
        case 0x4e2120u: goto label_4e2120;
        case 0x4e2124u: goto label_4e2124;
        case 0x4e2128u: goto label_4e2128;
        case 0x4e212cu: goto label_4e212c;
        case 0x4e2130u: goto label_4e2130;
        case 0x4e2134u: goto label_4e2134;
        case 0x4e2138u: goto label_4e2138;
        case 0x4e213cu: goto label_4e213c;
        case 0x4e2140u: goto label_4e2140;
        case 0x4e2144u: goto label_4e2144;
        case 0x4e2148u: goto label_4e2148;
        case 0x4e214cu: goto label_4e214c;
        case 0x4e2150u: goto label_4e2150;
        case 0x4e2154u: goto label_4e2154;
        case 0x4e2158u: goto label_4e2158;
        case 0x4e215cu: goto label_4e215c;
        case 0x4e2160u: goto label_4e2160;
        case 0x4e2164u: goto label_4e2164;
        case 0x4e2168u: goto label_4e2168;
        case 0x4e216cu: goto label_4e216c;
        case 0x4e2170u: goto label_4e2170;
        case 0x4e2174u: goto label_4e2174;
        case 0x4e2178u: goto label_4e2178;
        case 0x4e217cu: goto label_4e217c;
        case 0x4e2180u: goto label_4e2180;
        case 0x4e2184u: goto label_4e2184;
        case 0x4e2188u: goto label_4e2188;
        case 0x4e218cu: goto label_4e218c;
        case 0x4e2190u: goto label_4e2190;
        case 0x4e2194u: goto label_4e2194;
        case 0x4e2198u: goto label_4e2198;
        case 0x4e219cu: goto label_4e219c;
        case 0x4e21a0u: goto label_4e21a0;
        case 0x4e21a4u: goto label_4e21a4;
        case 0x4e21a8u: goto label_4e21a8;
        case 0x4e21acu: goto label_4e21ac;
        case 0x4e21b0u: goto label_4e21b0;
        case 0x4e21b4u: goto label_4e21b4;
        case 0x4e21b8u: goto label_4e21b8;
        case 0x4e21bcu: goto label_4e21bc;
        case 0x4e21c0u: goto label_4e21c0;
        case 0x4e21c4u: goto label_4e21c4;
        case 0x4e21c8u: goto label_4e21c8;
        case 0x4e21ccu: goto label_4e21cc;
        case 0x4e21d0u: goto label_4e21d0;
        case 0x4e21d4u: goto label_4e21d4;
        case 0x4e21d8u: goto label_4e21d8;
        case 0x4e21dcu: goto label_4e21dc;
        case 0x4e21e0u: goto label_4e21e0;
        case 0x4e21e4u: goto label_4e21e4;
        case 0x4e21e8u: goto label_4e21e8;
        case 0x4e21ecu: goto label_4e21ec;
        case 0x4e21f0u: goto label_4e21f0;
        case 0x4e21f4u: goto label_4e21f4;
        case 0x4e21f8u: goto label_4e21f8;
        case 0x4e21fcu: goto label_4e21fc;
        case 0x4e2200u: goto label_4e2200;
        case 0x4e2204u: goto label_4e2204;
        case 0x4e2208u: goto label_4e2208;
        case 0x4e220cu: goto label_4e220c;
        case 0x4e2210u: goto label_4e2210;
        case 0x4e2214u: goto label_4e2214;
        case 0x4e2218u: goto label_4e2218;
        case 0x4e221cu: goto label_4e221c;
        case 0x4e2220u: goto label_4e2220;
        case 0x4e2224u: goto label_4e2224;
        case 0x4e2228u: goto label_4e2228;
        case 0x4e222cu: goto label_4e222c;
        case 0x4e2230u: goto label_4e2230;
        case 0x4e2234u: goto label_4e2234;
        case 0x4e2238u: goto label_4e2238;
        case 0x4e223cu: goto label_4e223c;
        case 0x4e2240u: goto label_4e2240;
        case 0x4e2244u: goto label_4e2244;
        case 0x4e2248u: goto label_4e2248;
        case 0x4e224cu: goto label_4e224c;
        case 0x4e2250u: goto label_4e2250;
        case 0x4e2254u: goto label_4e2254;
        case 0x4e2258u: goto label_4e2258;
        case 0x4e225cu: goto label_4e225c;
        case 0x4e2260u: goto label_4e2260;
        case 0x4e2264u: goto label_4e2264;
        case 0x4e2268u: goto label_4e2268;
        case 0x4e226cu: goto label_4e226c;
        case 0x4e2270u: goto label_4e2270;
        case 0x4e2274u: goto label_4e2274;
        case 0x4e2278u: goto label_4e2278;
        case 0x4e227cu: goto label_4e227c;
        case 0x4e2280u: goto label_4e2280;
        case 0x4e2284u: goto label_4e2284;
        case 0x4e2288u: goto label_4e2288;
        case 0x4e228cu: goto label_4e228c;
        case 0x4e2290u: goto label_4e2290;
        case 0x4e2294u: goto label_4e2294;
        case 0x4e2298u: goto label_4e2298;
        case 0x4e229cu: goto label_4e229c;
        case 0x4e22a0u: goto label_4e22a0;
        case 0x4e22a4u: goto label_4e22a4;
        case 0x4e22a8u: goto label_4e22a8;
        case 0x4e22acu: goto label_4e22ac;
        case 0x4e22b0u: goto label_4e22b0;
        case 0x4e22b4u: goto label_4e22b4;
        case 0x4e22b8u: goto label_4e22b8;
        case 0x4e22bcu: goto label_4e22bc;
        case 0x4e22c0u: goto label_4e22c0;
        case 0x4e22c4u: goto label_4e22c4;
        case 0x4e22c8u: goto label_4e22c8;
        case 0x4e22ccu: goto label_4e22cc;
        case 0x4e22d0u: goto label_4e22d0;
        case 0x4e22d4u: goto label_4e22d4;
        case 0x4e22d8u: goto label_4e22d8;
        case 0x4e22dcu: goto label_4e22dc;
        case 0x4e22e0u: goto label_4e22e0;
        case 0x4e22e4u: goto label_4e22e4;
        case 0x4e22e8u: goto label_4e22e8;
        case 0x4e22ecu: goto label_4e22ec;
        case 0x4e22f0u: goto label_4e22f0;
        case 0x4e22f4u: goto label_4e22f4;
        case 0x4e22f8u: goto label_4e22f8;
        case 0x4e22fcu: goto label_4e22fc;
        case 0x4e2300u: goto label_4e2300;
        case 0x4e2304u: goto label_4e2304;
        case 0x4e2308u: goto label_4e2308;
        case 0x4e230cu: goto label_4e230c;
        case 0x4e2310u: goto label_4e2310;
        case 0x4e2314u: goto label_4e2314;
        case 0x4e2318u: goto label_4e2318;
        case 0x4e231cu: goto label_4e231c;
        case 0x4e2320u: goto label_4e2320;
        case 0x4e2324u: goto label_4e2324;
        case 0x4e2328u: goto label_4e2328;
        case 0x4e232cu: goto label_4e232c;
        case 0x4e2330u: goto label_4e2330;
        case 0x4e2334u: goto label_4e2334;
        case 0x4e2338u: goto label_4e2338;
        case 0x4e233cu: goto label_4e233c;
        case 0x4e2340u: goto label_4e2340;
        case 0x4e2344u: goto label_4e2344;
        case 0x4e2348u: goto label_4e2348;
        case 0x4e234cu: goto label_4e234c;
        case 0x4e2350u: goto label_4e2350;
        case 0x4e2354u: goto label_4e2354;
        case 0x4e2358u: goto label_4e2358;
        case 0x4e235cu: goto label_4e235c;
        case 0x4e2360u: goto label_4e2360;
        case 0x4e2364u: goto label_4e2364;
        case 0x4e2368u: goto label_4e2368;
        case 0x4e236cu: goto label_4e236c;
        case 0x4e2370u: goto label_4e2370;
        case 0x4e2374u: goto label_4e2374;
        case 0x4e2378u: goto label_4e2378;
        case 0x4e237cu: goto label_4e237c;
        case 0x4e2380u: goto label_4e2380;
        case 0x4e2384u: goto label_4e2384;
        case 0x4e2388u: goto label_4e2388;
        case 0x4e238cu: goto label_4e238c;
        case 0x4e2390u: goto label_4e2390;
        case 0x4e2394u: goto label_4e2394;
        case 0x4e2398u: goto label_4e2398;
        case 0x4e239cu: goto label_4e239c;
        case 0x4e23a0u: goto label_4e23a0;
        case 0x4e23a4u: goto label_4e23a4;
        case 0x4e23a8u: goto label_4e23a8;
        case 0x4e23acu: goto label_4e23ac;
        case 0x4e23b0u: goto label_4e23b0;
        case 0x4e23b4u: goto label_4e23b4;
        case 0x4e23b8u: goto label_4e23b8;
        case 0x4e23bcu: goto label_4e23bc;
        case 0x4e23c0u: goto label_4e23c0;
        case 0x4e23c4u: goto label_4e23c4;
        case 0x4e23c8u: goto label_4e23c8;
        case 0x4e23ccu: goto label_4e23cc;
        case 0x4e23d0u: goto label_4e23d0;
        case 0x4e23d4u: goto label_4e23d4;
        case 0x4e23d8u: goto label_4e23d8;
        case 0x4e23dcu: goto label_4e23dc;
        case 0x4e23e0u: goto label_4e23e0;
        case 0x4e23e4u: goto label_4e23e4;
        case 0x4e23e8u: goto label_4e23e8;
        case 0x4e23ecu: goto label_4e23ec;
        case 0x4e23f0u: goto label_4e23f0;
        case 0x4e23f4u: goto label_4e23f4;
        case 0x4e23f8u: goto label_4e23f8;
        case 0x4e23fcu: goto label_4e23fc;
        case 0x4e2400u: goto label_4e2400;
        case 0x4e2404u: goto label_4e2404;
        case 0x4e2408u: goto label_4e2408;
        case 0x4e240cu: goto label_4e240c;
        case 0x4e2410u: goto label_4e2410;
        case 0x4e2414u: goto label_4e2414;
        case 0x4e2418u: goto label_4e2418;
        case 0x4e241cu: goto label_4e241c;
        case 0x4e2420u: goto label_4e2420;
        case 0x4e2424u: goto label_4e2424;
        case 0x4e2428u: goto label_4e2428;
        case 0x4e242cu: goto label_4e242c;
        case 0x4e2430u: goto label_4e2430;
        case 0x4e2434u: goto label_4e2434;
        case 0x4e2438u: goto label_4e2438;
        case 0x4e243cu: goto label_4e243c;
        case 0x4e2440u: goto label_4e2440;
        case 0x4e2444u: goto label_4e2444;
        case 0x4e2448u: goto label_4e2448;
        case 0x4e244cu: goto label_4e244c;
        case 0x4e2450u: goto label_4e2450;
        case 0x4e2454u: goto label_4e2454;
        case 0x4e2458u: goto label_4e2458;
        case 0x4e245cu: goto label_4e245c;
        case 0x4e2460u: goto label_4e2460;
        case 0x4e2464u: goto label_4e2464;
        case 0x4e2468u: goto label_4e2468;
        case 0x4e246cu: goto label_4e246c;
        case 0x4e2470u: goto label_4e2470;
        case 0x4e2474u: goto label_4e2474;
        case 0x4e2478u: goto label_4e2478;
        case 0x4e247cu: goto label_4e247c;
        case 0x4e2480u: goto label_4e2480;
        case 0x4e2484u: goto label_4e2484;
        case 0x4e2488u: goto label_4e2488;
        case 0x4e248cu: goto label_4e248c;
        case 0x4e2490u: goto label_4e2490;
        case 0x4e2494u: goto label_4e2494;
        case 0x4e2498u: goto label_4e2498;
        case 0x4e249cu: goto label_4e249c;
        case 0x4e24a0u: goto label_4e24a0;
        case 0x4e24a4u: goto label_4e24a4;
        case 0x4e24a8u: goto label_4e24a8;
        case 0x4e24acu: goto label_4e24ac;
        case 0x4e24b0u: goto label_4e24b0;
        case 0x4e24b4u: goto label_4e24b4;
        case 0x4e24b8u: goto label_4e24b8;
        case 0x4e24bcu: goto label_4e24bc;
        case 0x4e24c0u: goto label_4e24c0;
        case 0x4e24c4u: goto label_4e24c4;
        case 0x4e24c8u: goto label_4e24c8;
        case 0x4e24ccu: goto label_4e24cc;
        case 0x4e24d0u: goto label_4e24d0;
        case 0x4e24d4u: goto label_4e24d4;
        case 0x4e24d8u: goto label_4e24d8;
        case 0x4e24dcu: goto label_4e24dc;
        case 0x4e24e0u: goto label_4e24e0;
        case 0x4e24e4u: goto label_4e24e4;
        case 0x4e24e8u: goto label_4e24e8;
        case 0x4e24ecu: goto label_4e24ec;
        case 0x4e24f0u: goto label_4e24f0;
        case 0x4e24f4u: goto label_4e24f4;
        case 0x4e24f8u: goto label_4e24f8;
        case 0x4e24fcu: goto label_4e24fc;
        case 0x4e2500u: goto label_4e2500;
        case 0x4e2504u: goto label_4e2504;
        case 0x4e2508u: goto label_4e2508;
        case 0x4e250cu: goto label_4e250c;
        case 0x4e2510u: goto label_4e2510;
        case 0x4e2514u: goto label_4e2514;
        case 0x4e2518u: goto label_4e2518;
        case 0x4e251cu: goto label_4e251c;
        case 0x4e2520u: goto label_4e2520;
        case 0x4e2524u: goto label_4e2524;
        case 0x4e2528u: goto label_4e2528;
        case 0x4e252cu: goto label_4e252c;
        case 0x4e2530u: goto label_4e2530;
        case 0x4e2534u: goto label_4e2534;
        case 0x4e2538u: goto label_4e2538;
        case 0x4e253cu: goto label_4e253c;
        case 0x4e2540u: goto label_4e2540;
        case 0x4e2544u: goto label_4e2544;
        case 0x4e2548u: goto label_4e2548;
        case 0x4e254cu: goto label_4e254c;
        case 0x4e2550u: goto label_4e2550;
        case 0x4e2554u: goto label_4e2554;
        case 0x4e2558u: goto label_4e2558;
        case 0x4e255cu: goto label_4e255c;
        case 0x4e2560u: goto label_4e2560;
        case 0x4e2564u: goto label_4e2564;
        case 0x4e2568u: goto label_4e2568;
        case 0x4e256cu: goto label_4e256c;
        case 0x4e2570u: goto label_4e2570;
        case 0x4e2574u: goto label_4e2574;
        case 0x4e2578u: goto label_4e2578;
        case 0x4e257cu: goto label_4e257c;
        case 0x4e2580u: goto label_4e2580;
        case 0x4e2584u: goto label_4e2584;
        case 0x4e2588u: goto label_4e2588;
        case 0x4e258cu: goto label_4e258c;
        case 0x4e2590u: goto label_4e2590;
        case 0x4e2594u: goto label_4e2594;
        case 0x4e2598u: goto label_4e2598;
        case 0x4e259cu: goto label_4e259c;
        case 0x4e25a0u: goto label_4e25a0;
        case 0x4e25a4u: goto label_4e25a4;
        case 0x4e25a8u: goto label_4e25a8;
        case 0x4e25acu: goto label_4e25ac;
        case 0x4e25b0u: goto label_4e25b0;
        case 0x4e25b4u: goto label_4e25b4;
        case 0x4e25b8u: goto label_4e25b8;
        case 0x4e25bcu: goto label_4e25bc;
        case 0x4e25c0u: goto label_4e25c0;
        case 0x4e25c4u: goto label_4e25c4;
        case 0x4e25c8u: goto label_4e25c8;
        case 0x4e25ccu: goto label_4e25cc;
        case 0x4e25d0u: goto label_4e25d0;
        case 0x4e25d4u: goto label_4e25d4;
        case 0x4e25d8u: goto label_4e25d8;
        case 0x4e25dcu: goto label_4e25dc;
        case 0x4e25e0u: goto label_4e25e0;
        case 0x4e25e4u: goto label_4e25e4;
        case 0x4e25e8u: goto label_4e25e8;
        case 0x4e25ecu: goto label_4e25ec;
        case 0x4e25f0u: goto label_4e25f0;
        case 0x4e25f4u: goto label_4e25f4;
        case 0x4e25f8u: goto label_4e25f8;
        case 0x4e25fcu: goto label_4e25fc;
        case 0x4e2600u: goto label_4e2600;
        case 0x4e2604u: goto label_4e2604;
        case 0x4e2608u: goto label_4e2608;
        case 0x4e260cu: goto label_4e260c;
        case 0x4e2610u: goto label_4e2610;
        case 0x4e2614u: goto label_4e2614;
        case 0x4e2618u: goto label_4e2618;
        case 0x4e261cu: goto label_4e261c;
        case 0x4e2620u: goto label_4e2620;
        case 0x4e2624u: goto label_4e2624;
        case 0x4e2628u: goto label_4e2628;
        case 0x4e262cu: goto label_4e262c;
        case 0x4e2630u: goto label_4e2630;
        case 0x4e2634u: goto label_4e2634;
        case 0x4e2638u: goto label_4e2638;
        case 0x4e263cu: goto label_4e263c;
        case 0x4e2640u: goto label_4e2640;
        case 0x4e2644u: goto label_4e2644;
        case 0x4e2648u: goto label_4e2648;
        case 0x4e264cu: goto label_4e264c;
        case 0x4e2650u: goto label_4e2650;
        case 0x4e2654u: goto label_4e2654;
        case 0x4e2658u: goto label_4e2658;
        case 0x4e265cu: goto label_4e265c;
        case 0x4e2660u: goto label_4e2660;
        case 0x4e2664u: goto label_4e2664;
        case 0x4e2668u: goto label_4e2668;
        case 0x4e266cu: goto label_4e266c;
        case 0x4e2670u: goto label_4e2670;
        case 0x4e2674u: goto label_4e2674;
        case 0x4e2678u: goto label_4e2678;
        case 0x4e267cu: goto label_4e267c;
        case 0x4e2680u: goto label_4e2680;
        case 0x4e2684u: goto label_4e2684;
        case 0x4e2688u: goto label_4e2688;
        case 0x4e268cu: goto label_4e268c;
        case 0x4e2690u: goto label_4e2690;
        case 0x4e2694u: goto label_4e2694;
        case 0x4e2698u: goto label_4e2698;
        case 0x4e269cu: goto label_4e269c;
        case 0x4e26a0u: goto label_4e26a0;
        case 0x4e26a4u: goto label_4e26a4;
        case 0x4e26a8u: goto label_4e26a8;
        case 0x4e26acu: goto label_4e26ac;
        case 0x4e26b0u: goto label_4e26b0;
        case 0x4e26b4u: goto label_4e26b4;
        case 0x4e26b8u: goto label_4e26b8;
        case 0x4e26bcu: goto label_4e26bc;
        case 0x4e26c0u: goto label_4e26c0;
        case 0x4e26c4u: goto label_4e26c4;
        case 0x4e26c8u: goto label_4e26c8;
        case 0x4e26ccu: goto label_4e26cc;
        case 0x4e26d0u: goto label_4e26d0;
        case 0x4e26d4u: goto label_4e26d4;
        case 0x4e26d8u: goto label_4e26d8;
        case 0x4e26dcu: goto label_4e26dc;
        case 0x4e26e0u: goto label_4e26e0;
        case 0x4e26e4u: goto label_4e26e4;
        case 0x4e26e8u: goto label_4e26e8;
        case 0x4e26ecu: goto label_4e26ec;
        case 0x4e26f0u: goto label_4e26f0;
        case 0x4e26f4u: goto label_4e26f4;
        case 0x4e26f8u: goto label_4e26f8;
        case 0x4e26fcu: goto label_4e26fc;
        case 0x4e2700u: goto label_4e2700;
        case 0x4e2704u: goto label_4e2704;
        case 0x4e2708u: goto label_4e2708;
        case 0x4e270cu: goto label_4e270c;
        case 0x4e2710u: goto label_4e2710;
        case 0x4e2714u: goto label_4e2714;
        case 0x4e2718u: goto label_4e2718;
        case 0x4e271cu: goto label_4e271c;
        case 0x4e2720u: goto label_4e2720;
        case 0x4e2724u: goto label_4e2724;
        case 0x4e2728u: goto label_4e2728;
        case 0x4e272cu: goto label_4e272c;
        case 0x4e2730u: goto label_4e2730;
        case 0x4e2734u: goto label_4e2734;
        case 0x4e2738u: goto label_4e2738;
        case 0x4e273cu: goto label_4e273c;
        case 0x4e2740u: goto label_4e2740;
        case 0x4e2744u: goto label_4e2744;
        case 0x4e2748u: goto label_4e2748;
        case 0x4e274cu: goto label_4e274c;
        case 0x4e2750u: goto label_4e2750;
        case 0x4e2754u: goto label_4e2754;
        case 0x4e2758u: goto label_4e2758;
        case 0x4e275cu: goto label_4e275c;
        case 0x4e2760u: goto label_4e2760;
        case 0x4e2764u: goto label_4e2764;
        case 0x4e2768u: goto label_4e2768;
        case 0x4e276cu: goto label_4e276c;
        case 0x4e2770u: goto label_4e2770;
        case 0x4e2774u: goto label_4e2774;
        case 0x4e2778u: goto label_4e2778;
        case 0x4e277cu: goto label_4e277c;
        case 0x4e2780u: goto label_4e2780;
        case 0x4e2784u: goto label_4e2784;
        case 0x4e2788u: goto label_4e2788;
        case 0x4e278cu: goto label_4e278c;
        case 0x4e2790u: goto label_4e2790;
        case 0x4e2794u: goto label_4e2794;
        case 0x4e2798u: goto label_4e2798;
        case 0x4e279cu: goto label_4e279c;
        case 0x4e27a0u: goto label_4e27a0;
        case 0x4e27a4u: goto label_4e27a4;
        case 0x4e27a8u: goto label_4e27a8;
        case 0x4e27acu: goto label_4e27ac;
        case 0x4e27b0u: goto label_4e27b0;
        case 0x4e27b4u: goto label_4e27b4;
        case 0x4e27b8u: goto label_4e27b8;
        case 0x4e27bcu: goto label_4e27bc;
        case 0x4e27c0u: goto label_4e27c0;
        case 0x4e27c4u: goto label_4e27c4;
        case 0x4e27c8u: goto label_4e27c8;
        case 0x4e27ccu: goto label_4e27cc;
        case 0x4e27d0u: goto label_4e27d0;
        case 0x4e27d4u: goto label_4e27d4;
        case 0x4e27d8u: goto label_4e27d8;
        case 0x4e27dcu: goto label_4e27dc;
        case 0x4e27e0u: goto label_4e27e0;
        case 0x4e27e4u: goto label_4e27e4;
        default: break;
    }

    ctx->pc = 0x4e12d8u;

label_4e12d8:
    // 0x4e12d8: 0x55204149  bnel        $t1, $zero, . + 4 + (0x4149 << 2)
label_4e12dc:
    if (ctx->pc == 0x4E12DCu) {
        ctx->pc = 0x4E12DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E12D8u;
        // 0x4e12dc: 0x74616470  .word       0x74616470                   # INVALID     $v1, $at, 0x6470 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E12DC raw=0x74616470");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E12E0u;
        goto label_4e12e0;
    }
    ctx->pc = 0x4E12D8u;
    {
        const bool branch_taken_0x4e12d8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e12d8) {
            ctx->pc = 0x4E12DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E12D8u;
            // 0x4e12dc: 0x74616470  .word       0x74616470                   # INVALID     $v1, $at, 0x6470 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E12DC raw=0x74616470");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F1800u;
            return;
        }
    }
    ctx->pc = 0x4E12E0u;
label_4e12e0:
    // 0x4e12e0: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e12e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e12e4:
    // 0x4e12e4: 0x0  nop
    ctx->pc = 0x4e12e4u;
    // NOP
label_4e12e8:
    // 0x4e12e8: 0x70736944  .word       0x70736944                   # plzcw       $t5, $v1 # 00130140 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e12e8u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 13, out); }
label_4e12ec:
    // 0x4e12ec: 0x2079616c  addi        $t9, $v1, 0x616C
    ctx->pc = 0x4e12ecu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24940, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_4e12f0:
    // 0x4e12f0: 0x61647055  daddi       $a0, $t3, 0x7055
    ctx->pc = 0x4e12f0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28757; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, res); }
label_4e12f4:
    // 0x4e12f4: 0x6574  teq         $zero, $zero, 405
    ctx->pc = 0x4e12f4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e12f8:
    // 0x4e12f8: 0x6e756f53  ldr         $s5, 0x6F53($s3)
    ctx->pc = 0x4e12f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28499); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_4e12fc:
    // 0x4e12fc: 0x70552064  .word       0x70552064                   # INVALID     $v0, $s5, 0x2064 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e12fcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x4E12FC raw=0x70552064");
label_4e1300:
    // 0x4e1300: 0x65746164  daddiu      $s4, $t3, 0x6164
    ctx->pc = 0x4e1300u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24932);
label_4e1304:
    // 0x4e1304: 0x0  nop
    ctx->pc = 0x4e1304u;
    // NOP
label_4e1308:
    // 0x4e1308: 0xc3fa0000  ll          $k0, 0x0($ra)
    ctx->pc = 0x4e1308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 0); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_4e130c:
    // 0x4e130c: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e130cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x4E130C raw=0x43FA0000");
label_4e1310:
    // 0x4e1310: 0xc3fa0000  ll          $k0, 0x0($ra)
    ctx->pc = 0x4e1310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 0); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_4e1314:
    // 0x4e1314: 0x0  nop
    ctx->pc = 0x4e1314u;
    // NOP
label_4e1318:
    // 0x4e1318: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e1318u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x4E1318 raw=0x42C80000");
label_4e131c:
    // 0x4e131c: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e131cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x4E131C raw=0x42C80000");
label_4e1320:
    // 0x4e1320: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e1320u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x4E1320 raw=0x42C80000");
label_4e1324:
    // 0x4e1324: 0x0  nop
    ctx->pc = 0x4e1324u;
    // NOP
label_4e1328:
    // 0x4e1328: 0x0  nop
    ctx->pc = 0x4e1328u;
    // NOP
label_4e132c:
    // 0x4e132c: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x4e132cu;
    // CACHE instruction (ignored)
label_4e1330:
    // 0x4e1330: 0x0  nop
    ctx->pc = 0x4e1330u;
    // NOP
label_4e1334:
    // 0x4e1334: 0x0  nop
    ctx->pc = 0x4e1334u;
    // NOP
label_4e1338:
    // 0x4e1338: 0x7578756c  .word       0x7578756C                   # INVALID     $t3, $t8, 0x756C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1338u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1338 raw=0x7578756C");
label_4e133c:
    // 0x4e133c: 0x68737972  ldl         $s3, 0x7972($v1)
    ctx->pc = 0x4e133cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31090); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_4e1340:
    // 0x4e1340: 0x706f  .word       0x0000706F                   # dsubu       $t6, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1340u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_4e1344:
    // 0x4e1344: 0x0  nop
    ctx->pc = 0x4e1344u;
    // NOP
label_4e1348:
    // 0x4e1348: 0x6e656465  ldr         $a1, 0x6465($s3)
    ctx->pc = 0x4e1348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25701); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4e134c:
    // 0x4e134c: 0x62756c63  daddi       $s5, $s3, 0x6C63
    ctx->pc = 0x4e134cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)27747; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_4e1350:
    // 0x4e1350: 0x0  nop
    ctx->pc = 0x4e1350u;
    // NOP
label_4e1354:
    // 0x4e1354: 0x0  nop
    ctx->pc = 0x4e1354u;
    // NOP
label_4e1358:
    // 0x4e1358: 0x79616c70  lq          $at, 0x6C70($t3)
    ctx->pc = 0x4e1358u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 11), 27760)));
label_4e135c:
    // 0x4e135c: 0x66737265  daddiu      $s3, $s3, 0x7265
    ctx->pc = 0x4e135cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)29285);
label_4e1360:
    // 0x4e1360: 0x74616c  .word       0x0074616C                   # dadd        $t4, $v1, $s4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1360u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_4e1364:
    // 0x4e1364: 0x0  nop
    ctx->pc = 0x4e1364u;
    // NOP
label_4e1368:
    // 0x4e1368: 0x74736165  .word       0x74736165                   # INVALID     $v1, $s3, 0x6165 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1368u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1368 raw=0x74736165");
label_4e136c:
    // 0x4e136c: 0x676e6977  daddiu      $t6, $k1, 0x6977
    ctx->pc = 0x4e136cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26999);
label_4e1370:
    // 0x4e1370: 0x0  nop
    ctx->pc = 0x4e1370u;
    // NOP
label_4e1374:
    // 0x4e1374: 0x0  nop
    ctx->pc = 0x4e1374u;
    // NOP
label_4e1378:
    // 0x4e1378: 0x726f7073  .word       0x726F7073                   # INVALID     $s3, $t7, 0x7073 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1378u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4E1378 raw=0x726F7073");
label_4e137c:
    // 0x4e137c: 0x756c6374  .word       0x756C6374                   # INVALID     $t3, $t4, 0x6374 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e137cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E137C raw=0x756C6374");
label_4e1380:
    // 0x4e1380: 0x62  .word       0x00000062                   # neg         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1380u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_4e1384:
    // 0x4e1384: 0x0  nop
    ctx->pc = 0x4e1384u;
    // NOP
label_4e1388:
    // 0x4e1388: 0x61637365  daddi       $v1, $t3, 0x7365
    ctx->pc = 0x4e1388u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29541; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_4e138c:
    // 0x4e138c: 0x746f6772  .word       0x746F6772                   # INVALID     $v1, $t7, 0x6772 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e138cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E138C raw=0x746F6772");
label_4e1390:
    // 0x4e1390: 0x0  nop
    ctx->pc = 0x4e1390u;
    // NOP
label_4e1394:
    // 0x4e1394: 0x0  nop
    ctx->pc = 0x4e1394u;
    // NOP
label_4e1398:
    // 0x4e1398: 0x73657266  .word       0x73657266                   # INVALID     $k1, $a1, 0x7266 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1398u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4E1398 raw=0x73657266");
label_4e139c:
    // 0x4e139c: 0x6f727068  ldr         $s2, 0x7068($k1)
    ctx->pc = 0x4e139cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28776); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_4e13a0:
    // 0x4e13a0: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e13a0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_4e13a4:
    // 0x4e13a4: 0x0  nop
    ctx->pc = 0x4e13a4u;
    // NOP
label_4e13a8:
    // 0x4e13a8: 0x0  nop
    ctx->pc = 0x4e13a8u;
    // NOP
label_4e13ac:
    // 0x4e13ac: 0x0  nop
    ctx->pc = 0x4e13acu;
    // NOP
label_4e13b0:
    // 0x4e13b0: 0x4e1338  .word       0x004E1338                   # dsll        $v0, $t6, 12 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e13b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) << 12);
label_4e13b4:
    // 0x4e13b4: 0x4e1348  .word       0x004E1348                   # jr          $v0 # 000E1340 <InstrIdType: CPU_SPECIAL>
label_4e13b8:
    if (ctx->pc == 0x4E13B8u) {
        ctx->pc = 0x4E13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E13B4u;
        // 0x4e13b8: 0x4e1358  .word       0x004E1358                   # mult        $v0, $v0, $t6 # 00000340 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E13BCu;
        goto label_4e13bc;
    }
    ctx->pc = 0x4E13B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4E13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E13B4u;
        // 0x4e13b8: 0x4e1358  .word       0x004E1358                   # mult        $v0, $v0, $t6 # 00000340 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E13B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4E13BCu;
label_4e13bc:
    // 0x4e13bc: 0x4e1368  .word       0x004E1368                   # mfsa        $v0 # 004E0340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e13bcu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_4e13c0:
    // 0x4e13c0: 0x4e1378  .word       0x004E1378                   # dsll        $v0, $t6, 13 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e13c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) << 13);
label_4e13c4:
    // 0x4e13c4: 0x4e1388  .word       0x004E1388                   # jr          $v0 # 000E1380 <InstrIdType: CPU_SPECIAL>
label_4e13c8:
    if (ctx->pc == 0x4E13C8u) {
        ctx->pc = 0x4E13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E13C4u;
        // 0x4e13c8: 0x4e1398  .word       0x004E1398                   # mult        $v0, $v0, $t6 # 00000380 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E13CCu;
        goto label_4e13cc;
    }
    ctx->pc = 0x4E13C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4E13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E13C4u;
        // 0x4e13c8: 0x4e1398  .word       0x004E1398                   # mult        $v0, $v0, $t6 # 00000380 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E13C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4E13CCu;
label_4e13cc:
    // 0x4e13cc: 0x0  nop
    ctx->pc = 0x4e13ccu;
    // NOP
label_4e13d0:
    // 0x4e13d0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e13d0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e13d4:
    // 0x4e13d4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e13d4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e13d8:
    // 0x4e13d8: 0x696e615c  ldl         $t6, 0x615C($t3)
    ctx->pc = 0x4e13d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24924); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4e13dc:
    // 0x4e13dc: 0x615c736d  daddi       $gp, $t2, 0x736D
    ctx->pc = 0x4e13dcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29549; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, res); }
label_4e13e0:
    // 0x4e13e0: 0x726f7463  .word       0x726F7463                   # INVALID     $s3, $t7, 0x7463 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e13e0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4E13E0 raw=0x726F7463");
label_4e13e4:
    // 0x4e13e4: 0x75735c73  .word       0x75735C73                   # INVALID     $t3, $s3, 0x5C73 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e13e4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E13E4 raw=0x75735C73");
label_4e13e8:
    // 0x4e13e8: 0x6e615f62  ldr         $at, 0x5F62($s3)
    ctx->pc = 0x4e13e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24418); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4e13ec:
    // 0x4e13ec: 0x6d5c6d69  ldr         $gp, 0x6D69($t2)
    ctx->pc = 0x4e13ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 28009); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 28, (GPR_U64(ctx, 28) & keepMask) | (mem >> shift)); }
label_4e13f0:
    // 0x4e13f0: 0x5f6e5f30  .word       0x5F6E5F30                   # bgtzl       $k1, . + 4 + (0x5F30 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e13f4:
    if (ctx->pc == 0x4E13F4u) {
        ctx->pc = 0x4E13F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E13F0u;
        // 0x4e13f4: 0x6e617473  ldr         $at, 0x7473($s3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29811); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E13F8u;
        goto label_4e13f8;
    }
    ctx->pc = 0x4E13F0u;
    {
        const bool branch_taken_0x4e13f0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e13f0) {
            ctx->pc = 0x4E13F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E13F0u;
            // 0x4e13f4: 0x6e617473  ldr         $at, 0x7473($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29811); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F90B4u;
            return;
        }
    }
    ctx->pc = 0x4E13F8u;
label_4e13f8:
    // 0x4e13f8: 0x61775f64  daddi       $s7, $t3, 0x5F64
    ctx->pc = 0x4e13f8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24420; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
label_4e13fc:
    // 0x4e13fc: 0x31307469  andi        $s0, $t1, 0x7469
    ctx->pc = 0x4e13fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)29801);
label_4e1400:
    // 0x4e1400: 0x6d6e612e  ldr         $t6, 0x612E($t3)
    ctx->pc = 0x4e1400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24878); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_4e1404:
    // 0x4e1404: 0x0  nop
    ctx->pc = 0x4e1404u;
    // NOP
label_4e1408:
    // 0x4e1408: 0x0  nop
    ctx->pc = 0x4e1408u;
    // NOP
label_4e140c:
    // 0x4e140c: 0x0  nop
    ctx->pc = 0x4e140cu;
    // NOP
label_4e1410:
    // 0x4e1410: 0x6e5f306d  ldr         $ra, 0x306D($s2)
    ctx->pc = 0x4e1410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12397); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_4e1414:
    // 0x4e1414: 0x6174735f  daddi       $s4, $t3, 0x735F
    ctx->pc = 0x4e1414u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29535; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e1418:
    // 0x4e1418: 0x775f646e  .word       0x775F646E                   # INVALID     $k0, $ra, 0x646E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1418u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1418 raw=0x775F646E");
label_4e141c:
    // 0x4e141c: 0x30746961  andi        $s4, $v1, 0x6961
    ctx->pc = 0x4e141cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26977);
label_4e1420:
    // 0x4e1420: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x4e1420u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e1424:
    // 0x4e1424: 0x0  nop
    ctx->pc = 0x4e1424u;
    // NOP
label_4e1428:
    // 0x4e1428: 0x0  nop
    ctx->pc = 0x4e1428u;
    // NOP
label_4e142c:
    // 0x4e142c: 0x0  nop
    ctx->pc = 0x4e142cu;
    // NOP
label_4e1430:
    // 0x4e1430: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e1430u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e1434:
    // 0x4e1434: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e1434u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e1438:
    // 0x4e1438: 0x696e615c  ldl         $t6, 0x615C($t3)
    ctx->pc = 0x4e1438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24924); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4e143c:
    // 0x4e143c: 0x615c736d  daddi       $gp, $t2, 0x736D
    ctx->pc = 0x4e143cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29549; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, res); }
label_4e1440:
    // 0x4e1440: 0x726f7463  .word       0x726F7463                   # INVALID     $s3, $t7, 0x7463 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1440u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4E1440 raw=0x726F7463");
label_4e1444:
    // 0x4e1444: 0x75735c73  .word       0x75735C73                   # INVALID     $t3, $s3, 0x5C73 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1444u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1444 raw=0x75735C73");
label_4e1448:
    // 0x4e1448: 0x6e615f62  ldr         $at, 0x5F62($s3)
    ctx->pc = 0x4e1448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24418); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4e144c:
    // 0x4e144c: 0x775c6d69  .word       0x775C6D69                   # INVALID     $k0, $gp, 0x6D69 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e144cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E144C raw=0x775C6D69");
label_4e1450:
    // 0x4e1450: 0x5f6e5f30  .word       0x5F6E5F30                   # bgtzl       $k1, . + 4 + (0x5F30 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e1454:
    if (ctx->pc == 0x4E1454u) {
        ctx->pc = 0x4E1454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1450u;
        // 0x4e1454: 0x6e617473  ldr         $at, 0x7473($s3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29811); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1458u;
        goto label_4e1458;
    }
    ctx->pc = 0x4E1450u;
    {
        const bool branch_taken_0x4e1450 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e1450) {
            ctx->pc = 0x4E1454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1450u;
            // 0x4e1454: 0x6e617473  ldr         $at, 0x7473($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29811); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F9114u;
            return;
        }
    }
    ctx->pc = 0x4E1458u;
label_4e1458:
    // 0x4e1458: 0x61775f64  daddi       $s7, $t3, 0x5F64
    ctx->pc = 0x4e1458u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24420; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
label_4e145c:
    // 0x4e145c: 0x31307469  andi        $s0, $t1, 0x7469
    ctx->pc = 0x4e145cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)29801);
label_4e1460:
    // 0x4e1460: 0x6d6e612e  ldr         $t6, 0x612E($t3)
    ctx->pc = 0x4e1460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24878); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_4e1464:
    // 0x4e1464: 0x0  nop
    ctx->pc = 0x4e1464u;
    // NOP
label_4e1468:
    // 0x4e1468: 0x0  nop
    ctx->pc = 0x4e1468u;
    // NOP
label_4e146c:
    // 0x4e146c: 0x0  nop
    ctx->pc = 0x4e146cu;
    // NOP
label_4e1470:
    // 0x4e1470: 0x6e5f3077  ldr         $ra, 0x3077($s2)
    ctx->pc = 0x4e1470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_4e1474:
    // 0x4e1474: 0x6174735f  daddi       $s4, $t3, 0x735F
    ctx->pc = 0x4e1474u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29535; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e1478:
    // 0x4e1478: 0x775f646e  .word       0x775F646E                   # INVALID     $k0, $ra, 0x646E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1478u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1478 raw=0x775F646E");
label_4e147c:
    // 0x4e147c: 0x30746961  andi        $s4, $v1, 0x6961
    ctx->pc = 0x4e147cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26977);
label_4e1480:
    // 0x4e1480: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x4e1480u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e1484:
    // 0x4e1484: 0x0  nop
    ctx->pc = 0x4e1484u;
    // NOP
label_4e1488:
    // 0x4e1488: 0x0  nop
    ctx->pc = 0x4e1488u;
    // NOP
label_4e148c:
    // 0x4e148c: 0x0  nop
    ctx->pc = 0x4e148cu;
    // NOP
label_4e1490:
    // 0x4e1490: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e1490u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e1494:
    // 0x4e1494: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e1494u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e1498:
    // 0x4e1498: 0x696e615c  ldl         $t6, 0x615C($t3)
    ctx->pc = 0x4e1498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24924); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4e149c:
    // 0x4e149c: 0x615c736d  daddi       $gp, $t2, 0x736D
    ctx->pc = 0x4e149cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29549; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, res); }
label_4e14a0:
    // 0x4e14a0: 0x726f7463  .word       0x726F7463                   # INVALID     $s3, $t7, 0x7463 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e14a0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4E14A0 raw=0x726F7463");
label_4e14a4:
    // 0x4e14a4: 0x6f6e5c73  ldr         $t6, 0x5C73($k1)
    ctx->pc = 0x4e14a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 23667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_4e14a8:
    // 0x4e14a8: 0x6d79735f  ldr         $t9, 0x735F($t3)
    ctx->pc = 0x4e14a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
label_4e14ac:
    // 0x4e14ac: 0x735f645c  .word       0x735F645C                   # INVALID     $k0, $ra, 0x645C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e14acu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1C at 0x4E14AC raw=0x735F645C");
label_4e14b0:
    // 0x4e14b0: 0x646e6174  daddiu      $t6, $v1, 0x6174
    ctx->pc = 0x4e14b0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24948);
label_4e14b4:
    // 0x4e14b4: 0x69646d5c  ldl         $a0, 0x6D5C($t3)
    ctx->pc = 0x4e14b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 27996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4e14b8:
    // 0x4e14b8: 0x61775f61  daddi       $s7, $t3, 0x5F61
    ctx->pc = 0x4e14b8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24417; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
label_4e14bc:
    // 0x4e14bc: 0x612e6b6c  daddi       $t6, $t1, 0x6B6C
    ctx->pc = 0x4e14bcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)27500; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4e14c0:
    // 0x4e14c0: 0x6d6e  .word       0x00006D6E                   # dsub        $t5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e14c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_4e14c4:
    // 0x4e14c4: 0x0  nop
    ctx->pc = 0x4e14c4u;
    // NOP
label_4e14c8:
    // 0x4e14c8: 0x6169646d  daddi       $t1, $t3, 0x646D
    ctx->pc = 0x4e14c8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25709; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_4e14cc:
    // 0x4e14cc: 0x6c61775f  ldr         $at, 0x775F($v1)
    ctx->pc = 0x4e14ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4e14d0:
    // 0x4e14d0: 0x6b  .word       0x0000006B                   # sltu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e14d0u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_4e14d4:
    // 0x4e14d4: 0x0  nop
    ctx->pc = 0x4e14d4u;
    // NOP
label_4e14d8:
    // 0x4e14d8: 0x0  nop
    ctx->pc = 0x4e14d8u;
    // NOP
label_4e14dc:
    // 0x4e14dc: 0x0  nop
    ctx->pc = 0x4e14dcu;
    // NOP
label_4e14e0:
    // 0x4e14e0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e14e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e14e4:
    // 0x4e14e4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e14e4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e14e8:
    // 0x4e14e8: 0x696e615c  ldl         $t6, 0x615C($t3)
    ctx->pc = 0x4e14e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24924); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4e14ec:
    // 0x4e14ec: 0x615c736d  daddi       $gp, $t2, 0x736D
    ctx->pc = 0x4e14ecu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29549; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, res); }
label_4e14f0:
    // 0x4e14f0: 0x726f7463  .word       0x726F7463                   # INVALID     $s3, $t7, 0x7463 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e14f0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4E14F0 raw=0x726F7463");
label_4e14f4:
    // 0x4e14f4: 0x6f6e5c73  ldr         $t6, 0x5C73($k1)
    ctx->pc = 0x4e14f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 23667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_4e14f8:
    // 0x4e14f8: 0x6d79735f  ldr         $t9, 0x735F($t3)
    ctx->pc = 0x4e14f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
label_4e14fc:
    // 0x4e14fc: 0x735f645c  .word       0x735F645C                   # INVALID     $k0, $ra, 0x645C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e14fcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1C at 0x4E14FC raw=0x735F645C");
label_4e1500:
    // 0x4e1500: 0x646e6174  daddiu      $t6, $v1, 0x6174
    ctx->pc = 0x4e1500u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24948);
label_4e1504:
    // 0x4e1504: 0x6964775c  ldl         $a0, 0x775C($t3)
    ctx->pc = 0x4e1504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30556); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4e1508:
    // 0x4e1508: 0x61775f61  daddi       $s7, $t3, 0x5F61
    ctx->pc = 0x4e1508u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24417; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
label_4e150c:
    // 0x4e150c: 0x612e6b6c  daddi       $t6, $t1, 0x6B6C
    ctx->pc = 0x4e150cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)27500; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4e1510:
    // 0x4e1510: 0x6d6e  .word       0x00006D6E                   # dsub        $t5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1510u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_4e1514:
    // 0x4e1514: 0x0  nop
    ctx->pc = 0x4e1514u;
    // NOP
label_4e1518:
    // 0x4e1518: 0x61696477  daddi       $t1, $t3, 0x6477
    ctx->pc = 0x4e1518u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25719; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_4e151c:
    // 0x4e151c: 0x6c61775f  ldr         $at, 0x775F($v1)
    ctx->pc = 0x4e151cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4e1520:
    // 0x4e1520: 0x6b  .word       0x0000006B                   # sltu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1520u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_4e1524:
    // 0x4e1524: 0x0  nop
    ctx->pc = 0x4e1524u;
    // NOP
label_4e1528:
    // 0x4e1528: 0x0  nop
    ctx->pc = 0x4e1528u;
    // NOP
label_4e152c:
    // 0x4e152c: 0x0  nop
    ctx->pc = 0x4e152cu;
    // NOP
label_4e1530:
    // 0x4e1530: 0x6576656c  daddiu      $s6, $t3, 0x656C
    ctx->pc = 0x4e1530u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25964);
label_4e1534:
    // 0x4e1534: 0x75632e6c  .word       0x75632E6C                   # INVALID     $t3, $v1, 0x2E6C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1534u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1534 raw=0x75632E6C");
label_4e1538:
    // 0x4e1538: 0x6e657272  ldr         $a1, 0x7272($s3)
    ctx->pc = 0x4e1538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29298); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4e153c:
    // 0x4e153c: 0x75662e74  .word       0x75662E74                   # INVALID     $t3, $a2, 0x2E74 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e153cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E153C raw=0x75662E74");
label_4e1540:
    // 0x4e1540: 0x61706c6c  daddi       $s0, $t3, 0x6C6C
    ctx->pc = 0x4e1540u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27756; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_4e1544:
    // 0x4e1544: 0x616e6874  daddi       $t6, $t3, 0x6874
    ctx->pc = 0x4e1544u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26740; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4e1548:
    // 0x4e1548: 0x656d  .word       0x0000656D                   # daddu       $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1548u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e154c:
    // 0x4e154c: 0x0  nop
    ctx->pc = 0x4e154cu;
    // NOP
label_4e1550:
    // 0x4e1550: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e1550u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e1554:
    // 0x4e1554: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e1554u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e1558:
    // 0x4e1558: 0x7472705c  .word       0x7472705C                   # INVALID     $v1, $s2, 0x705C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1558u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1558 raw=0x7472705C");
label_4e155c:
    // 0x4e155c: 0x737973  tltu        $v1, $s3, 485
    ctx->pc = 0x4e155cu;
    if (GPR_U64(ctx, 3) < GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_4e1560:
    // 0x4e1560: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e1560u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e1564:
    // 0x4e1564: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e1564u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e1568:
    // 0x4e1568: 0x7472705c  .word       0x7472705C                   # INVALID     $v1, $s2, 0x705C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1568u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1568 raw=0x7472705C");
label_4e156c:
    // 0x4e156c: 0x5c737973  .word       0x5C737973                   # bgtzl       $v1, . + 4 + (0x7973 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4e1570:
    if (ctx->pc == 0x4E1570u) {
        ctx->pc = 0x4E1570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E156Cu;
        // 0x4e1570: 0x735f7866  .word       0x735F7866                   # INVALID     $k0, $ra, 0x7866 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4E1570 raw=0x735F7866");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1574u;
        goto label_4e1574;
    }
    ctx->pc = 0x4E156Cu;
    {
        const bool branch_taken_0x4e156c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e156c) {
            ctx->pc = 0x4E1570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E156Cu;
            // 0x4e1570: 0x735f7866  .word       0x735F7866                   # INVALID     $k0, $ra, 0x7866 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4E1570 raw=0x735F7866");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FFB3Cu;
            return;
        }
    }
    ctx->pc = 0x4E1574u;
label_4e1574:
    // 0x4e1574: 0x63656c65  daddi       $a1, $k1, 0x6C65
    ctx->pc = 0x4e1574u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e1578:
    // 0x4e1578: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4e1578u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e157c:
    // 0x4e157c: 0x0  nop
    ctx->pc = 0x4e157cu;
    // NOP
label_4e1580:
    // 0x4e1580: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e1580u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e1584:
    // 0x4e1584: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e1584u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e1588:
    // 0x4e1588: 0x7472705c  .word       0x7472705C                   # INVALID     $v1, $s2, 0x705C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1588u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1588 raw=0x7472705C");
label_4e158c:
    // 0x4e158c: 0x5c737973  .word       0x5C737973                   # bgtzl       $v1, . + 4 + (0x7973 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4e1590:
    if (ctx->pc == 0x4E1590u) {
        ctx->pc = 0x4E1590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E158Cu;
        // 0x4e1590: 0x725f7866  .word       0x725F7866                   # INVALID     $s2, $ra, 0x7866 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4E1590 raw=0x725F7866");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1594u;
        goto label_4e1594;
    }
    ctx->pc = 0x4E158Cu;
    {
        const bool branch_taken_0x4e158c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e158c) {
            ctx->pc = 0x4E1590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E158Cu;
            // 0x4e1590: 0x725f7866  .word       0x725F7866                   # INVALID     $s2, $ra, 0x7866 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4E1590 raw=0x725F7866");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FFB5Cu;
            return;
        }
    }
    ctx->pc = 0x4E1594u;
label_4e1594:
    // 0x4e1594: 0x73756665  .word       0x73756665                   # INVALID     $k1, $s5, 0x6665 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1594u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4E1594 raw=0x73756665");
label_4e1598:
    // 0x4e1598: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1598u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e159c:
    // 0x4e159c: 0x0  nop
    ctx->pc = 0x4e159cu;
    // NOP
label_4e15a0:
    // 0x4e15a0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e15a0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e15a4:
    // 0x4e15a4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e15a4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e15a8:
    // 0x4e15a8: 0x7472705c  .word       0x7472705C                   # INVALID     $v1, $s2, 0x705C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e15a8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E15A8 raw=0x7472705C");
label_4e15ac:
    // 0x4e15ac: 0x5c737973  .word       0x5C737973                   # bgtzl       $v1, . + 4 + (0x7973 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4e15b0:
    if (ctx->pc == 0x4E15B0u) {
        ctx->pc = 0x4E15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E15ACu;
        // 0x4e15b0: 0x725f7866  .word       0x725F7866                   # INVALID     $s2, $ra, 0x7866 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4E15B0 raw=0x725F7866");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E15B4u;
        goto label_4e15b4;
    }
    ctx->pc = 0x4E15ACu;
    {
        const bool branch_taken_0x4e15ac = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e15ac) {
            ctx->pc = 0x4E15B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E15ACu;
            // 0x4e15b0: 0x725f7866  .word       0x725F7866                   # INVALID     $s2, $ra, 0x7866 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4E15B0 raw=0x725F7866");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FFB7Cu;
            return;
        }
    }
    ctx->pc = 0x4E15B4u;
label_4e15b4:
    // 0x4e15b4: 0x78616c65  lq          $at, 0x6C65($v1)
    ctx->pc = 0x4e15b4u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 3), 27749)));
label_4e15b8:
    // 0x4e15b8: 0x0  nop
    ctx->pc = 0x4e15b8u;
    // NOP
label_4e15bc:
    // 0x4e15bc: 0x0  nop
    ctx->pc = 0x4e15bcu;
    // NOP
label_4e15c0:
    // 0x4e15c0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e15c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e15c4:
    // 0x4e15c4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e15c4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e15c8:
    // 0x4e15c8: 0x7472705c  .word       0x7472705C                   # INVALID     $v1, $s2, 0x705C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e15c8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E15C8 raw=0x7472705C");
label_4e15cc:
    // 0x4e15cc: 0x5c737973  .word       0x5C737973                   # bgtzl       $v1, . + 4 + (0x7973 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4e15d0:
    if (ctx->pc == 0x4E15D0u) {
        ctx->pc = 0x4E15D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E15CCu;
        // 0x4e15d0: 0x635f7866  daddi       $ra, $k0, 0x7866 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E15D4u;
        goto label_4e15d4;
    }
    ctx->pc = 0x4E15CCu;
    {
        const bool branch_taken_0x4e15cc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e15cc) {
            ctx->pc = 0x4E15D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E15CCu;
            // 0x4e15d0: 0x635f7866  daddi       $ra, $k0, 0x7866 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FFB9Cu;
            return;
        }
    }
    ctx->pc = 0x4E15D4u;
label_4e15d4:
    // 0x4e15d4: 0x676e6168  daddiu      $t6, $k1, 0x6168
    ctx->pc = 0x4e15d4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24936);
label_4e15d8:
    // 0x4e15d8: 0x706f7465  .word       0x706F7465                   # INVALID     $v1, $t7, 0x7465 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e15d8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4E15D8 raw=0x706F7465");
label_4e15dc:
    // 0x4e15dc: 0x0  nop
    ctx->pc = 0x4e15dcu;
    // NOP
label_4e15e0:
    // 0x4e15e0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e15e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e15e4:
    // 0x4e15e4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e15e4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e15e8:
    // 0x4e15e8: 0x7472705c  .word       0x7472705C                   # INVALID     $v1, $s2, 0x705C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e15e8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E15E8 raw=0x7472705C");
label_4e15ec:
    // 0x4e15ec: 0x5c737973  .word       0x5C737973                   # bgtzl       $v1, . + 4 + (0x7973 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4e15f0:
    if (ctx->pc == 0x4E15F0u) {
        ctx->pc = 0x4E15F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E15ECu;
        // 0x4e15f0: 0x635f7866  daddi       $ra, $k0, 0x7866 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E15F4u;
        goto label_4e15f4;
    }
    ctx->pc = 0x4E15ECu;
    {
        const bool branch_taken_0x4e15ec = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e15ec) {
            ctx->pc = 0x4E15F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E15ECu;
            // 0x4e15f0: 0x635f7866  daddi       $ra, $k0, 0x7866 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FFBBCu;
            return;
        }
    }
    ctx->pc = 0x4E15F4u;
label_4e15f4:
    // 0x4e15f4: 0x676e6168  daddiu      $t6, $k1, 0x6168
    ctx->pc = 0x4e15f4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24936);
label_4e15f8:
    // 0x4e15f8: 0x746f6265  .word       0x746F6265                   # INVALID     $v1, $t7, 0x6265 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e15f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E15F8 raw=0x746F6265");
label_4e15fc:
    // 0x4e15fc: 0x6d6f74  teq         $v1, $t5, 445
    ctx->pc = 0x4e15fcu;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_4e1600:
    // 0x4e1600: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e1600u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e1604:
    // 0x4e1604: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e1604u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e1608:
    // 0x4e1608: 0x7469625c  .word       0x7469625C                   # INVALID     $v1, $t1, 0x625C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1608u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1608 raw=0x7469625C");
label_4e160c:
    // 0x4e160c: 0x7370616d  .word       0x7370616D                   # INVALID     $k1, $s0, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e160cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4E160C raw=0x7370616D");
label_4e1610:
    // 0x4e1610: 0x3273705c  andi        $s3, $s3, 0x705C
    ctx->pc = 0x4e1610u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)28764);
label_4e1614:
    // 0x4e1614: 0x6475685c  daddiu      $s5, $v1, 0x685C
    ctx->pc = 0x4e1614u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26716);
label_4e1618:
    // 0x4e1618: 0x5c  .word       0x0000005C                   # dmult       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1618u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x4E1618 raw=0x0000005C");
label_4e161c:
    // 0x4e161c: 0x0  nop
    ctx->pc = 0x4e161cu;
    // NOP
label_4e1620:
    // 0x4e1620: 0x5f6e7077  .word       0x5F6E7077                   # bgtzl       $k1, . + 4 + (0x7077 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e1624:
    if (ctx->pc == 0x4E1624u) {
        ctx->pc = 0x4E1624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1620u;
        // 0x4e1624: 0x656c6573  daddiu      $t4, $t3, 0x6573 (Delay Slot)
        SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25971);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1628u;
        goto label_4e1628;
    }
    ctx->pc = 0x4E1620u;
    {
        const bool branch_taken_0x4e1620 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e1620) {
            ctx->pc = 0x4E1624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1620u;
            // 0x4e1624: 0x656c6573  daddiu      $t4, $t3, 0x6573 (Delay Slot)
            SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25971);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FD800u;
            return;
        }
    }
    ctx->pc = 0x4E1628u;
label_4e1628:
    // 0x4e1628: 0x615f7463  daddi       $ra, $t2, 0x7463
    ctx->pc = 0x4e1628u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29795; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_4e162c:
    // 0x4e162c: 0x5f616572  .word       0x5F616572                   # bgtzl       $k1, . + 4 + (0x6572 << 2) # 00010000 <InstrIdType: CPU_NORMAL>
label_4e1630:
    if (ctx->pc == 0x4E1630u) {
        ctx->pc = 0x4E1634u;
        goto label_4e1634;
    }
    ctx->pc = 0x4E162Cu;
    {
        const bool branch_taken_0x4e162c = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e162c) {
            ctx->pc = 0x4FABF8u;
            return;
        }
    }
    ctx->pc = 0x4E1634u;
label_4e1634:
    // 0x4e1634: 0x0  nop
    ctx->pc = 0x4e1634u;
    // NOP
label_4e1638:
    // 0x4e1638: 0x6f747561  ldr         $s4, 0x7561($k1)
    ctx->pc = 0x4e1638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30049); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_4e163c:
    // 0x4e163c: 0x65766173  daddiu      $s6, $t3, 0x6173
    ctx->pc = 0x4e163cu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24947);
label_4e1640:
    // 0x4e1640: 0x7337742e  .word       0x7337742E                   # INVALID     $t9, $s7, 0x742E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1640u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4E1640 raw=0x7337742E");
label_4e1644:
    // 0x4e1644: 0x0  nop
    ctx->pc = 0x4e1644u;
    // NOP
label_4e1648:
    // 0x4e1648: 0x0  nop
    ctx->pc = 0x4e1648u;
    // NOP
label_4e164c:
    // 0x4e164c: 0x0  nop
    ctx->pc = 0x4e164cu;
    // NOP
label_4e1650:
    // 0x4e1650: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e1650u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e1654:
    // 0x4e1654: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e1654u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e1658:
    // 0x4e1658: 0x7469625c  .word       0x7469625C                   # INVALID     $v1, $t1, 0x625C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1658u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1658 raw=0x7469625C");
label_4e165c:
    // 0x4e165c: 0x7370616d  .word       0x7370616D                   # INVALID     $k1, $s0, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e165cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4E165C raw=0x7370616D");
label_4e1660:
    // 0x4e1660: 0x3273705c  andi        $s3, $s3, 0x705C
    ctx->pc = 0x4e1660u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)28764);
label_4e1664:
    // 0x4e1664: 0x0  nop
    ctx->pc = 0x4e1664u;
    // NOP
label_4e1668:
    // 0x4e1668: 0x0  nop
    ctx->pc = 0x4e1668u;
    // NOP
label_4e166c:
    // 0x4e166c: 0x0  nop
    ctx->pc = 0x4e166cu;
    // NOP
label_4e1670:
    // 0x4e1670: 0x6475685c  daddiu      $s5, $v1, 0x685C
    ctx->pc = 0x4e1670u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26716);
label_4e1674:
    // 0x4e1674: 0x6e6f665c  ldr         $t7, 0x665C($s3)
    ctx->pc = 0x4e1674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26204); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e1678:
    // 0x4e1678: 0x6c625f64  ldr         $v0, 0x5F64($v1)
    ctx->pc = 0x4e1678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24420); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e167c:
    // 0x4e167c: 0x6b6361  .word       0x006B6361                   # addu        $t4, $v1, $t3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e167cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_4e1680:
    // 0x4e1680: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e1684:
    if (ctx->pc == 0x4E1684u) {
        ctx->pc = 0x4E1684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1680u;
        // 0x4e1684: 0x69766173  ldl         $s6, 0x6173($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24947); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1688u;
        goto label_4e1688;
    }
    ctx->pc = 0x4E1680u;
    {
        const bool branch_taken_0x4e1680 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e1680) {
            ctx->pc = 0x4E1684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1680u;
            // 0x4e1684: 0x69766173  ldl         $s6, 0x6173($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24947); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F571Cu;
            return;
        }
    }
    ctx->pc = 0x4E1688u;
label_4e1688:
    // 0x4e1688: 0x676e  .word       0x0000676E                   # dsub        $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1688u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_4e168c:
    // 0x4e168c: 0x0  nop
    ctx->pc = 0x4e168cu;
    // NOP
label_4e1690:
    // 0x4e1690: 0x5f747270  .word       0x5F747270                   # bgtzl       $k1, . + 4 + (0x7270 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e1694:
    if (ctx->pc == 0x4E1694u) {
        ctx->pc = 0x4E1694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1690u;
        // 0x4e1694: 0x6576656c  daddiu      $s6, $t3, 0x656C (Delay Slot)
        SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25964);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1698u;
        goto label_4e1698;
    }
    ctx->pc = 0x4E1690u;
    {
        const bool branch_taken_0x4e1690 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e1690) {
            ctx->pc = 0x4E1694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1690u;
            // 0x4e1694: 0x6576656c  daddiu      $s6, $t3, 0x656C (Delay Slot)
            SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25964);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE054u;
            return;
        }
    }
    ctx->pc = 0x4E1698u;
label_4e1698:
    // 0x4e1698: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1698u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_4e169c:
    // 0x4e169c: 0x0  nop
    ctx->pc = 0x4e169cu;
    // NOP
label_4e16a0:
    // 0x4e16a0: 0x5f747270  .word       0x5F747270                   # bgtzl       $k1, . + 4 + (0x7270 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e16a4:
    if (ctx->pc == 0x4E16A4u) {
        ctx->pc = 0x4E16A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E16A0u;
        // 0x4e16a4: 0x656c6f72  daddiu      $t4, $t3, 0x6F72 (Delay Slot)
        SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28530);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E16A8u;
        goto label_4e16a8;
    }
    ctx->pc = 0x4E16A0u;
    {
        const bool branch_taken_0x4e16a0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e16a0) {
            ctx->pc = 0x4E16A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E16A0u;
            // 0x4e16a4: 0x656c6f72  daddiu      $t4, $t3, 0x6F72 (Delay Slot)
            SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28530);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE064u;
            return;
        }
    }
    ctx->pc = 0x4E16A8u;
label_4e16a8:
    // 0x4e16a8: 0x0  nop
    ctx->pc = 0x4e16a8u;
    // NOP
label_4e16ac:
    // 0x4e16ac: 0x0  nop
    ctx->pc = 0x4e16acu;
    // NOP
label_4e16b0:
    // 0x4e16b0: 0x5f747270  .word       0x5F747270                   # bgtzl       $k1, . + 4 + (0x7270 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e16b4:
    if (ctx->pc == 0x4E16B4u) {
        ctx->pc = 0x4E16B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E16B0u;
        // 0x4e16b4: 0x74636573  .word       0x74636573                   # INVALID     $v1, $v1, 0x6573 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E16B4 raw=0x74636573");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E16B8u;
        goto label_4e16b8;
    }
    ctx->pc = 0x4E16B0u;
    {
        const bool branch_taken_0x4e16b0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e16b0) {
            ctx->pc = 0x4E16B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E16B0u;
            // 0x4e16b4: 0x74636573  .word       0x74636573                   # INVALID     $v1, $v1, 0x6573 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E16B4 raw=0x74636573");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE074u;
            return;
        }
    }
    ctx->pc = 0x4E16B8u;
label_4e16b8:
    // 0x4e16b8: 0x726f  .word       0x0000726F                   # dsubu       $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e16b8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_4e16bc:
    // 0x4e16bc: 0x0  nop
    ctx->pc = 0x4e16bcu;
    // NOP
label_4e16c0:
    // 0x4e16c0: 0x5f747270  .word       0x5F747270                   # bgtzl       $k1, . + 4 + (0x7270 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e16c4:
    if (ctx->pc == 0x4E16C4u) {
        ctx->pc = 0x4E16C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E16C0u;
        // 0x4e16c4: 0x656d6163  daddiu      $t5, $t3, 0x6163 (Delay Slot)
        SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24931);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E16C8u;
        goto label_4e16c8;
    }
    ctx->pc = 0x4E16C0u;
    {
        const bool branch_taken_0x4e16c0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e16c0) {
            ctx->pc = 0x4E16C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E16C0u;
            // 0x4e16c4: 0x656d6163  daddiu      $t5, $t3, 0x6163 (Delay Slot)
            SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24931);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE084u;
            return;
        }
    }
    ctx->pc = 0x4E16C8u;
label_4e16c8:
    // 0x4e16c8: 0x6172  tlt         $zero, $zero, 389
    ctx->pc = 0x4e16c8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e16cc:
    // 0x4e16cc: 0x0  nop
    ctx->pc = 0x4e16ccu;
    // NOP
label_4e16d0:
    // 0x4e16d0: 0x5f747270  .word       0x5F747270                   # bgtzl       $k1, . + 4 + (0x7270 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e16d4:
    if (ctx->pc == 0x4E16D4u) {
        ctx->pc = 0x4E16D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E16D0u;
        // 0x4e16d4: 0x6d657469  ldr         $a1, 0x7469($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29801); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E16D8u;
        goto label_4e16d8;
    }
    ctx->pc = 0x4E16D0u;
    {
        const bool branch_taken_0x4e16d0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e16d0) {
            ctx->pc = 0x4E16D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E16D0u;
            // 0x4e16d4: 0x6d657469  ldr         $a1, 0x7469($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29801); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE094u;
            return;
        }
    }
    ctx->pc = 0x4E16D8u;
label_4e16d8:
    // 0x4e16d8: 0x0  nop
    ctx->pc = 0x4e16d8u;
    // NOP
label_4e16dc:
    // 0x4e16dc: 0x0  nop
    ctx->pc = 0x4e16dcu;
    // NOP
label_4e16e0:
    // 0x4e16e0: 0x5f747270  .word       0x5F747270                   # bgtzl       $k1, . + 4 + (0x7270 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e16e4:
    if (ctx->pc == 0x4E16E4u) {
        ctx->pc = 0x4E16E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E16E0u;
        // 0x4e16e4: 0x6f746361  ldr         $s4, 0x6361($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E16E8u;
        goto label_4e16e8;
    }
    ctx->pc = 0x4E16E0u;
    {
        const bool branch_taken_0x4e16e0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e16e0) {
            ctx->pc = 0x4E16E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E16E0u;
            // 0x4e16e4: 0x6f746361  ldr         $s4, 0x6361($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE0A4u;
            return;
        }
    }
    ctx->pc = 0x4E16E8u;
label_4e16e8:
    // 0x4e16e8: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x4e16e8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e16ec:
    // 0x4e16ec: 0x0  nop
    ctx->pc = 0x4e16ecu;
    // NOP
label_4e16f0:
    // 0x4e16f0: 0x5f747270  .word       0x5F747270                   # bgtzl       $k1, . + 4 + (0x7270 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e16f4:
    if (ctx->pc == 0x4E16F4u) {
        ctx->pc = 0x4E16F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E16F0u;
        // 0x4e16f4: 0x6867696c  ldl         $a3, 0x696C($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E16F8u;
        goto label_4e16f8;
    }
    ctx->pc = 0x4E16F0u;
    {
        const bool branch_taken_0x4e16f0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e16f0) {
            ctx->pc = 0x4E16F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E16F0u;
            // 0x4e16f4: 0x6867696c  ldl         $a3, 0x696C($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE0B4u;
            return;
        }
    }
    ctx->pc = 0x4E16F8u;
label_4e16f8:
    // 0x4e16f8: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4e16f8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e16fc:
    // 0x4e16fc: 0x0  nop
    ctx->pc = 0x4e16fcu;
    // NOP
label_4e1700:
    // 0x4e1700: 0x5f747270  .word       0x5F747270                   # bgtzl       $k1, . + 4 + (0x7270 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e1704:
    if (ctx->pc == 0x4E1704u) {
        ctx->pc = 0x4E1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1700u;
        // 0x4e1704: 0x6e65706f  ldr         $a1, 0x706F($s3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1708u;
        goto label_4e1708;
    }
    ctx->pc = 0x4E1700u;
    {
        const bool branch_taken_0x4e1700 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e1700) {
            ctx->pc = 0x4E1704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1700u;
            // 0x4e1704: 0x6e65706f  ldr         $a1, 0x706F($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE0C4u;
            return;
        }
    }
    ctx->pc = 0x4E1708u;
label_4e1708:
    // 0x4e1708: 0x676e69  .word       0x00676E69                   # mtsa        $v1 # 00076E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e1708u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_4e170c:
    // 0x4e170c: 0x0  nop
    ctx->pc = 0x4e170cu;
    // NOP
label_4e1710:
    // 0x4e1710: 0x5f747270  .word       0x5F747270                   # bgtzl       $k1, . + 4 + (0x7270 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e1714:
    if (ctx->pc == 0x4E1714u) {
        ctx->pc = 0x4E1714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1710u;
        // 0x4e1714: 0x70796177  .word       0x70796177                   # psrah       $t4, $t9, 5 # 00600000 <InstrIdType: R5900_MMI> (Delay Slot)
        SET_GPR_VEC(ctx, 12, _mm_srai_epi16(GPR_VEC(ctx, 25), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1718u;
        goto label_4e1718;
    }
    ctx->pc = 0x4E1710u;
    {
        const bool branch_taken_0x4e1710 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e1710) {
            ctx->pc = 0x4E1714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1710u;
            // 0x4e1714: 0x70796177  .word       0x70796177                   # psrah       $t4, $t9, 5 # 00600000 <InstrIdType: R5900_MMI> (Delay Slot)
            SET_GPR_VEC(ctx, 12, _mm_srai_epi16(GPR_VEC(ctx, 25), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE0D4u;
            return;
        }
    }
    ctx->pc = 0x4E1718u;
label_4e1718:
    // 0x4e1718: 0x746e696f  .word       0x746E696F                   # INVALID     $v1, $t6, 0x696F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1718u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1718 raw=0x746E696F");
label_4e171c:
    // 0x4e171c: 0x0  nop
    ctx->pc = 0x4e171cu;
    // NOP
label_4e1720:
    // 0x4e1720: 0x5f747270  .word       0x5F747270                   # bgtzl       $k1, . + 4 + (0x7270 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e1724:
    if (ctx->pc == 0x4E1724u) {
        ctx->pc = 0x4E1724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1720u;
        // 0x4e1724: 0x7373696d  .word       0x7373696D                   # INVALID     $k1, $s3, 0x696D # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4E1724 raw=0x7373696D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1728u;
        goto label_4e1728;
    }
    ctx->pc = 0x4E1720u;
    {
        const bool branch_taken_0x4e1720 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e1720) {
            ctx->pc = 0x4E1724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1720u;
            // 0x4e1724: 0x7373696d  .word       0x7373696D                   # INVALID     $k1, $s3, 0x696D # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4E1724 raw=0x7373696D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE0E4u;
            return;
        }
    }
    ctx->pc = 0x4E1728u;
label_4e1728:
    // 0x4e1728: 0x6e6f69  .word       0x006E6F69                   # mtsa        $v1 # 000E6F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e1728u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_4e172c:
    // 0x4e172c: 0x0  nop
    ctx->pc = 0x4e172cu;
    // NOP
label_4e1730:
    // 0x4e1730: 0x65675f5f  daddiu      $a3, $t3, 0x5F5F
    ctx->pc = 0x4e1730u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24415);
label_4e1734:
    // 0x4e1734: 0x6972656e  ldl         $s2, 0x656E($t3)
    ctx->pc = 0x4e1734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25966); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_4e1738:
    // 0x4e1738: 0x5f5f63  .word       0x005F5F63                   # subu        $t3, $v0, $ra # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1738u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 31)));
label_4e173c:
    // 0x4e173c: 0x0  nop
    ctx->pc = 0x4e173cu;
    // NOP
label_4e1740:
    // 0x4e1740: 0x45444f4e  .word       0x45444F4E                   # INVALID     $t2, $a0, 0x4F4E # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e1740u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xE at 0x4E1740 raw=0x45444F4E");
label_4e1744:
    // 0x4e1744: 0x5f475542  .word       0x5F475542                   # bgtzl       $k0, . + 4 + (0x5542 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e1748:
    if (ctx->pc == 0x4E1748u) {
        ctx->pc = 0x4E1748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1744u;
        // 0x4e1748: 0x49544e45  .word       0x49544E45                   # INVALID     $t2, $s4, 0x4E45 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
        throw std::runtime_error("Unhandled COP2 format: 0xA at 0x4E1748 raw=0x49544E45");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E174Cu;
        goto label_4e174c;
    }
    ctx->pc = 0x4E1744u;
    {
        const bool branch_taken_0x4e1744 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e1744) {
            ctx->pc = 0x4E1748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1744u;
            // 0x4e1748: 0x49544e45  .word       0x49544E45                   # INVALID     $t2, $s4, 0x4E45 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
            throw std::runtime_error("Unhandled COP2 format: 0xA at 0x4E1748 raw=0x49544E45");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6C50u;
            return;
        }
    }
    ctx->pc = 0x4E174Cu;
label_4e174c:
    // 0x4e174c: 0x53454954  beql        $k0, $a1, . + 4 + (0x4954 << 2)
label_4e1750:
    if (ctx->pc == 0x4E1750u) {
        ctx->pc = 0x4E1754u;
        goto label_4e1754;
    }
    ctx->pc = 0x4E174Cu;
    {
        const bool branch_taken_0x4e174c = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x4e174c) {
            ctx->pc = 0x4F3CA0u;
            return;
        }
    }
    ctx->pc = 0x4E1754u;
label_4e1754:
    // 0x4e1754: 0x0  nop
    ctx->pc = 0x4e1754u;
    // NOP
label_4e1758:
    // 0x4e1758: 0x5f6c646d  .word       0x5F6C646D                   # bgtzl       $k1, . + 4 + (0x646D << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e175c:
    if (ctx->pc == 0x4E175Cu) {
        ctx->pc = 0x4E175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1758u;
        // 0x4e175c: 0x6576656c  daddiu      $s6, $t3, 0x656C (Delay Slot)
        SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25964);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1760u;
        goto label_4e1760;
    }
    ctx->pc = 0x4E1758u;
    {
        const bool branch_taken_0x4e1758 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e1758) {
            ctx->pc = 0x4E175Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1758u;
            // 0x4e175c: 0x6576656c  daddiu      $s6, $t3, 0x656C (Delay Slot)
            SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25964);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FA910u;
            return;
        }
    }
    ctx->pc = 0x4E1760u;
label_4e1760:
    // 0x4e1760: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1760u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_4e1764:
    // 0x4e1764: 0x0  nop
    ctx->pc = 0x4e1764u;
    // NOP
label_4e1768:
    // 0x4e1768: 0x5f6c646d  .word       0x5F6C646D                   # bgtzl       $k1, . + 4 + (0x646D << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e176c:
    if (ctx->pc == 0x4E176Cu) {
        ctx->pc = 0x4E176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1768u;
        // 0x4e176c: 0x74636573  .word       0x74636573                   # INVALID     $v1, $v1, 0x6573 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E176C raw=0x74636573");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1770u;
        goto label_4e1770;
    }
    ctx->pc = 0x4E1768u;
    {
        const bool branch_taken_0x4e1768 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e1768) {
            ctx->pc = 0x4E176Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1768u;
            // 0x4e176c: 0x74636573  .word       0x74636573                   # INVALID     $v1, $v1, 0x6573 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E176C raw=0x74636573");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FA920u;
            return;
        }
    }
    ctx->pc = 0x4E1770u;
label_4e1770:
    // 0x4e1770: 0x726f  .word       0x0000726F                   # dsubu       $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1770u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_4e1774:
    // 0x4e1774: 0x0  nop
    ctx->pc = 0x4e1774u;
    // NOP
label_4e1778:
    // 0x4e1778: 0x5f6c646d  .word       0x5F6C646D                   # bgtzl       $k1, . + 4 + (0x646D << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e177c:
    if (ctx->pc == 0x4E177Cu) {
        ctx->pc = 0x4E177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1778u;
        // 0x4e177c: 0x656d6163  daddiu      $t5, $t3, 0x6163 (Delay Slot)
        SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24931);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1780u;
        goto label_4e1780;
    }
    ctx->pc = 0x4E1778u;
    {
        const bool branch_taken_0x4e1778 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e1778) {
            ctx->pc = 0x4E177Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1778u;
            // 0x4e177c: 0x656d6163  daddiu      $t5, $t3, 0x6163 (Delay Slot)
            SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24931);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FA930u;
            return;
        }
    }
    ctx->pc = 0x4E1780u;
label_4e1780:
    // 0x4e1780: 0x6172  tlt         $zero, $zero, 389
    ctx->pc = 0x4e1780u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e1784:
    // 0x4e1784: 0x0  nop
    ctx->pc = 0x4e1784u;
    // NOP
label_4e1788:
    // 0x4e1788: 0x5f6c646d  .word       0x5F6C646D                   # bgtzl       $k1, . + 4 + (0x646D << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e178c:
    if (ctx->pc == 0x4E178Cu) {
        ctx->pc = 0x4E178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1788u;
        // 0x4e178c: 0x6d657469  ldr         $a1, 0x7469($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29801); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1790u;
        goto label_4e1790;
    }
    ctx->pc = 0x4E1788u;
    {
        const bool branch_taken_0x4e1788 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e1788) {
            ctx->pc = 0x4E178Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1788u;
            // 0x4e178c: 0x6d657469  ldr         $a1, 0x7469($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29801); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FA940u;
            return;
        }
    }
    ctx->pc = 0x4E1790u;
label_4e1790:
    // 0x4e1790: 0x0  nop
    ctx->pc = 0x4e1790u;
    // NOP
label_4e1794:
    // 0x4e1794: 0x0  nop
    ctx->pc = 0x4e1794u;
    // NOP
label_4e1798:
    // 0x4e1798: 0x5f6c646d  .word       0x5F6C646D                   # bgtzl       $k1, . + 4 + (0x646D << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e179c:
    if (ctx->pc == 0x4E179Cu) {
        ctx->pc = 0x4E179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1798u;
        // 0x4e179c: 0x6f746361  ldr         $s4, 0x6361($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E17A0u;
        goto label_4e17a0;
    }
    ctx->pc = 0x4E1798u;
    {
        const bool branch_taken_0x4e1798 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e1798) {
            ctx->pc = 0x4E179Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1798u;
            // 0x4e179c: 0x6f746361  ldr         $s4, 0x6361($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FA950u;
            return;
        }
    }
    ctx->pc = 0x4E17A0u;
label_4e17a0:
    // 0x4e17a0: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x4e17a0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e17a4:
    // 0x4e17a4: 0x0  nop
    ctx->pc = 0x4e17a4u;
    // NOP
label_4e17a8:
    // 0x4e17a8: 0x5f6c646d  .word       0x5F6C646D                   # bgtzl       $k1, . + 4 + (0x646D << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e17ac:
    if (ctx->pc == 0x4E17ACu) {
        ctx->pc = 0x4E17ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E17A8u;
        // 0x4e17ac: 0x6867696c  ldl         $a3, 0x696C($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E17B0u;
        goto label_4e17b0;
    }
    ctx->pc = 0x4E17A8u;
    {
        const bool branch_taken_0x4e17a8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e17a8) {
            ctx->pc = 0x4E17ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E17A8u;
            // 0x4e17ac: 0x6867696c  ldl         $a3, 0x696C($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FA960u;
            return;
        }
    }
    ctx->pc = 0x4E17B0u;
label_4e17b0:
    // 0x4e17b0: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4e17b0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e17b4:
    // 0x4e17b4: 0x0  nop
    ctx->pc = 0x4e17b4u;
    // NOP
label_4e17b8:
    // 0x4e17b8: 0x5f6c646d  .word       0x5F6C646D                   # bgtzl       $k1, . + 4 + (0x646D << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e17bc:
    if (ctx->pc == 0x4E17BCu) {
        ctx->pc = 0x4E17BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E17B8u;
        // 0x4e17bc: 0x6e65706f  ldr         $a1, 0x706F($s3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E17C0u;
        goto label_4e17c0;
    }
    ctx->pc = 0x4E17B8u;
    {
        const bool branch_taken_0x4e17b8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e17b8) {
            ctx->pc = 0x4E17BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E17B8u;
            // 0x4e17bc: 0x6e65706f  ldr         $a1, 0x706F($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FA970u;
            return;
        }
    }
    ctx->pc = 0x4E17C0u;
label_4e17c0:
    // 0x4e17c0: 0x676e69  .word       0x00676E69                   # mtsa        $v1 # 00076E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e17c0u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_4e17c4:
    // 0x4e17c4: 0x0  nop
    ctx->pc = 0x4e17c4u;
    // NOP
label_4e17c8:
    // 0x4e17c8: 0x5f6c646d  .word       0x5F6C646D                   # bgtzl       $k1, . + 4 + (0x646D << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e17cc:
    if (ctx->pc == 0x4E17CCu) {
        ctx->pc = 0x4E17CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E17C8u;
        // 0x4e17cc: 0x70796177  .word       0x70796177                   # psrah       $t4, $t9, 5 # 00600000 <InstrIdType: R5900_MMI> (Delay Slot)
        SET_GPR_VEC(ctx, 12, _mm_srai_epi16(GPR_VEC(ctx, 25), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E17D0u;
        goto label_4e17d0;
    }
    ctx->pc = 0x4E17C8u;
    {
        const bool branch_taken_0x4e17c8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e17c8) {
            ctx->pc = 0x4E17CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E17C8u;
            // 0x4e17cc: 0x70796177  .word       0x70796177                   # psrah       $t4, $t9, 5 # 00600000 <InstrIdType: R5900_MMI> (Delay Slot)
            SET_GPR_VEC(ctx, 12, _mm_srai_epi16(GPR_VEC(ctx, 25), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FA980u;
            return;
        }
    }
    ctx->pc = 0x4E17D0u;
label_4e17d0:
    // 0x4e17d0: 0x746e696f  .word       0x746E696F                   # INVALID     $v1, $t6, 0x696F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e17d0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E17D0 raw=0x746E696F");
label_4e17d4:
    // 0x4e17d4: 0x0  nop
    ctx->pc = 0x4e17d4u;
    // NOP
label_4e17d8:
    // 0x4e17d8: 0x5f6c646d  .word       0x5F6C646D                   # bgtzl       $k1, . + 4 + (0x646D << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e17dc:
    if (ctx->pc == 0x4E17DCu) {
        ctx->pc = 0x4E17DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E17D8u;
        // 0x4e17dc: 0x7373696d  .word       0x7373696D                   # INVALID     $k1, $s3, 0x696D # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4E17DC raw=0x7373696D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E17E0u;
        goto label_4e17e0;
    }
    ctx->pc = 0x4E17D8u;
    {
        const bool branch_taken_0x4e17d8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e17d8) {
            ctx->pc = 0x4E17DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E17D8u;
            // 0x4e17dc: 0x7373696d  .word       0x7373696D                   # INVALID     $k1, $s3, 0x696D # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4E17DC raw=0x7373696D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FA990u;
            return;
        }
    }
    ctx->pc = 0x4E17E0u;
label_4e17e0:
    // 0x4e17e0: 0x6e6f69  .word       0x006E6F69                   # mtsa        $v1 # 000E6F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e17e0u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_4e17e4:
    // 0x4e17e4: 0x0  nop
    ctx->pc = 0x4e17e4u;
    // NOP
label_4e17e8:
    // 0x4e17e8: 0x5f6c646d  .word       0x5F6C646D                   # bgtzl       $k1, . + 4 + (0x646D << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e17ec:
    if (ctx->pc == 0x4E17ECu) {
        ctx->pc = 0x4E17ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E17E8u;
        // 0x4e17ec: 0x69746361  ldl         $s4, 0x6361($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E17F0u;
        goto label_4e17f0;
    }
    ctx->pc = 0x4E17E8u;
    {
        const bool branch_taken_0x4e17e8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e17e8) {
            ctx->pc = 0x4E17ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E17E8u;
            // 0x4e17ec: 0x69746361  ldl         $s4, 0x6361($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FA9A0u;
            return;
        }
    }
    ctx->pc = 0x4E17F0u;
label_4e17f0:
    // 0x4e17f0: 0x6e6f  .word       0x00006E6F                   # dsubu       $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e17f0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_4e17f4:
    // 0x4e17f4: 0x0  nop
    ctx->pc = 0x4e17f4u;
    // NOP
label_4e17f8:
    // 0x4e17f8: 0x735f7866  .word       0x735F7866                   # INVALID     $k0, $ra, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e17f8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4E17F8 raw=0x735F7866");
label_4e17fc:
    // 0x4e17fc: 0x61757469  daddi       $s5, $t3, 0x7469
    ctx->pc = 0x4e17fcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29801; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_4e1800:
    // 0x4e1800: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4e1800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e1804:
    // 0x4e1804: 0x0  nop
    ctx->pc = 0x4e1804u;
    // NOP
label_4e1808:
    // 0x4e1808: 0x735f7866  .word       0x735F7866                   # INVALID     $k0, $ra, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1808u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4E1808 raw=0x735F7866");
label_4e180c:
    // 0x4e180c: 0x6c6c696b  ldr         $t4, 0x696B($v1)
    ctx->pc = 0x4e180cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26987); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_4e1810:
    // 0x4e1810: 0x0  nop
    ctx->pc = 0x4e1810u;
    // NOP
label_4e1814:
    // 0x4e1814: 0x0  nop
    ctx->pc = 0x4e1814u;
    // NOP
label_4e1818:
    // 0x4e1818: 0x675f7866  daddiu      $ra, $k0, 0x7866
    ctx->pc = 0x4e1818u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 26) + (int64_t)(int32_t)30822);
label_4e181c:
    // 0x4e181c: 0x65677561  daddiu      $a3, $t3, 0x7561
    ctx->pc = 0x4e181cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30049);
label_4e1820:
    // 0x4e1820: 0x0  nop
    ctx->pc = 0x4e1820u;
    // NOP
label_4e1824:
    // 0x4e1824: 0x0  nop
    ctx->pc = 0x4e1824u;
    // NOP
label_4e1828:
    // 0x4e1828: 0x615f7866  daddi       $ra, $t2, 0x7866
    ctx->pc = 0x4e1828u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_4e182c:
    // 0x4e182c: 0x616e6572  daddi       $t6, $t3, 0x6572
    ctx->pc = 0x4e182cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25970; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4e1830:
    // 0x4e1830: 0x0  nop
    ctx->pc = 0x4e1830u;
    // NOP
label_4e1834:
    // 0x4e1834: 0x0  nop
    ctx->pc = 0x4e1834u;
    // NOP
label_4e1838:
    // 0x4e1838: 0x615f7866  daddi       $ra, $t2, 0x7866
    ctx->pc = 0x4e1838u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_4e183c:
    // 0x4e183c: 0x616d696e  daddi       $t5, $t3, 0x696E
    ctx->pc = 0x4e183cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26990; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_4e1840:
    // 0x4e1840: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4e1840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e1844:
    // 0x4e1844: 0x0  nop
    ctx->pc = 0x4e1844u;
    // NOP
label_4e1848:
    // 0x4e1848: 0x615f7866  daddi       $ra, $t2, 0x7866
    ctx->pc = 0x4e1848u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_4e184c:
    // 0x4e184c: 0x6f6d696e  ldr         $t5, 0x696E($k1)
    ctx->pc = 0x4e184cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26990); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_4e1850:
    // 0x4e1850: 0x63656a62  daddi       $a1, $k1, 0x6A62
    ctx->pc = 0x4e1850u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27234; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e1854:
    // 0x4e1854: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4e1854u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e1858:
    // 0x4e1858: 0x6d5f7866  ldr         $ra, 0x7866($t2)
    ctx->pc = 0x4e1858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 30822); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_4e185c:
    // 0x4e185c: 0x6870726f  ldl         $s0, 0x726F($v1)
    ctx->pc = 0x4e185cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_4e1860:
    // 0x4e1860: 0x0  nop
    ctx->pc = 0x4e1860u;
    // NOP
label_4e1864:
    // 0x4e1864: 0x0  nop
    ctx->pc = 0x4e1864u;
    // NOP
label_4e1868:
    // 0x4e1868: 0x735f7866  .word       0x735F7866                   # INVALID     $k0, $ra, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1868u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4E1868 raw=0x735F7866");
label_4e186c:
    // 0x4e186c: 0x6b616570  ldl         $at, 0x6570($k1)
    ctx->pc = 0x4e186cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25968); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_4e1870:
    // 0x4e1870: 0x0  nop
    ctx->pc = 0x4e1870u;
    // NOP
label_4e1874:
    // 0x4e1874: 0x0  nop
    ctx->pc = 0x4e1874u;
    // NOP
label_4e1878:
    // 0x4e1878: 0x725f7866  .word       0x725F7866                   # INVALID     $s2, $ra, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1878u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4E1878 raw=0x725F7866");
label_4e187c:
    // 0x4e187c: 0x6a646165  ldl         $a0, 0x6165($s3)
    ctx->pc = 0x4e187cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24933); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4e1880:
    // 0x4e1880: 0x747375  .word       0x00747375                   # INVALID     $v1, $s4, 0x7375 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1880u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x4E1880 raw=0x00747375");
label_4e1884:
    // 0x4e1884: 0x0  nop
    ctx->pc = 0x4e1884u;
    // NOP
label_4e1888:
    // 0x4e1888: 0x735f7866  .word       0x735F7866                   # INVALID     $k0, $ra, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1888u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4E1888 raw=0x735F7866");
label_4e188c:
    // 0x4e188c: 0x646e756f  daddiu      $t6, $v1, 0x756F
    ctx->pc = 0x4e188cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)30063);
label_4e1890:
    // 0x4e1890: 0x0  nop
    ctx->pc = 0x4e1890u;
    // NOP
label_4e1894:
    // 0x4e1894: 0x0  nop
    ctx->pc = 0x4e1894u;
    // NOP
label_4e1898:
    // 0x4e1898: 0x745f7866  .word       0x745F7866                   # INVALID     $v0, $ra, 0x7866 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1898u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1898 raw=0x745F7866");
label_4e189c:
    // 0x4e189c: 0x69656b61  ldl         $a1, 0x6B61($t3)
    ctx->pc = 0x4e189cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 27489); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_4e18a0:
    // 0x4e18a0: 0x6d6574  teq         $v1, $t5, 405
    ctx->pc = 0x4e18a0u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_4e18a4:
    // 0x4e18a4: 0x0  nop
    ctx->pc = 0x4e18a4u;
    // NOP
label_4e18a8:
    // 0x4e18a8: 0x745f7866  .word       0x745F7866                   # INVALID     $v0, $ra, 0x7866 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e18a8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E18A8 raw=0x745F7866");
label_4e18ac:
    // 0x4e18ac: 0x70656b61  .word       0x70656B61                   # maddu1      $t5, $v1, $a1 # 00000340 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e18acu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 5); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_4e18b0:
    // 0x4e18b0: 0x79737472  lq          $s3, 0x7472($t3)
    ctx->pc = 0x4e18b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 11), 29810)));
label_4e18b4:
    // 0x4e18b4: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x4e18b4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e18b8:
    // 0x4e18b8: 0x635f7866  daddi       $ra, $k0, 0x7866
    ctx->pc = 0x4e18b8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_4e18bc:
    // 0x4e18bc: 0x676e6168  daddiu      $t6, $k1, 0x6168
    ctx->pc = 0x4e18bcu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24936);
label_4e18c0:
    // 0x4e18c0: 0x72617065  .word       0x72617065                   # INVALID     $s3, $at, 0x7065 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e18c0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4E18C0 raw=0x72617065");
label_4e18c4:
    // 0x4e18c4: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4e18c4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e18c8:
    // 0x4e18c8: 0x725f7866  .word       0x725F7866                   # INVALID     $s2, $ra, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e18c8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4E18C8 raw=0x725F7866");
label_4e18cc:
    // 0x4e18cc: 0x6562626f  daddiu      $v0, $t3, 0x626F
    ctx->pc = 0x4e18ccu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25199);
label_4e18d0:
    // 0x4e18d0: 0x7972  tlt         $zero, $zero, 485
    ctx->pc = 0x4e18d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e18d4:
    // 0x4e18d4: 0x0  nop
    ctx->pc = 0x4e18d4u;
    // NOP
label_4e18d8:
    // 0x4e18d8: 0x6c5f7866  ldr         $ra, 0x7866($v0)
    ctx->pc = 0x4e18d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 30822); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_4e18dc:
    // 0x4e18dc: 0x6c64616f  ldr         $a0, 0x616F($v1)
    ctx->pc = 0x4e18dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24943); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4e18e0:
    // 0x4e18e0: 0x6c657665  ldr         $a1, 0x7665($v1)
    ctx->pc = 0x4e18e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30309); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4e18e4:
    // 0x4e18e4: 0x0  nop
    ctx->pc = 0x4e18e4u;
    // NOP
label_4e18e8:
    // 0x4e18e8: 0x6d5f7866  ldr         $ra, 0x7866($t2)
    ctx->pc = 0x4e18e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 30822); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_4e18ec:
    // 0x4e18ec: 0x69737369  ldl         $s3, 0x7369($t3)
    ctx->pc = 0x4e18ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29545); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_4e18f0:
    // 0x4e18f0: 0x70786e6f  .word       0x70786E6F                   # INVALID     $v1, $t8, 0x6E6F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e18f0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x4E18F0 raw=0x70786E6F");
label_4e18f4:
    // 0x4e18f4: 0x0  nop
    ctx->pc = 0x4e18f4u;
    // NOP
label_4e18f8:
    // 0x4e18f8: 0x0  nop
    ctx->pc = 0x4e18f8u;
    // NOP
label_4e18fc:
    // 0x4e18fc: 0x0  nop
    ctx->pc = 0x4e18fcu;
    // NOP
label_4e1900:
    // 0x4e1900: 0x6d5f7866  ldr         $ra, 0x7866($t2)
    ctx->pc = 0x4e1900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 30822); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_4e1904:
    // 0x4e1904: 0x69737369  ldl         $s3, 0x7369($t3)
    ctx->pc = 0x4e1904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29545); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_4e1908:
    // 0x4e1908: 0x74736e6f  .word       0x74736E6F                   # INVALID     $v1, $s3, 0x6E6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1908u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1908 raw=0x74736E6F");
label_4e190c:
    // 0x4e190c: 0x747261  .word       0x00747261                   # addu        $t6, $v1, $s4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e190cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_4e1910:
    // 0x4e1910: 0x745f7866  .word       0x745F7866                   # INVALID     $v0, $ra, 0x7866 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1910u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1910 raw=0x745F7866");
label_4e1914:
    // 0x4e1914: 0x67676972  daddiu      $a3, $k1, 0x6972
    ctx->pc = 0x4e1914u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26994);
label_4e1918:
    // 0x4e1918: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1918u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e191c:
    // 0x4e191c: 0x0  nop
    ctx->pc = 0x4e191cu;
    // NOP
label_4e1920:
    // 0x4e1920: 0x705f7866  .word       0x705F7866                   # INVALID     $v0, $ra, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1920u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4E1920 raw=0x705F7866");
label_4e1924:
    // 0x4e1924: 0x6379616c  daddi       $t9, $k1, 0x616C
    ctx->pc = 0x4e1924u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24940; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, res); }
label_4e1928:
    // 0x4e1928: 0x656e69  .word       0x00656E69                   # mtsa        $v1 # 00056E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e1928u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_4e192c:
    // 0x4e192c: 0x0  nop
    ctx->pc = 0x4e192cu;
    // NOP
label_4e1930:
    // 0x4e1930: 0x655f7866  daddiu      $ra, $t2, 0x7866
    ctx->pc = 0x4e1930u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)30822);
label_4e1934:
    // 0x4e1934: 0x6c746978  ldr         $s4, 0x6978($v1)
    ctx->pc = 0x4e1934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27000); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_4e1938:
    // 0x4e1938: 0x6c657665  ldr         $a1, 0x7665($v1)
    ctx->pc = 0x4e1938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30309); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4e193c:
    // 0x4e193c: 0x0  nop
    ctx->pc = 0x4e193cu;
    // NOP
label_4e1940:
    // 0x4e1940: 0x735f7866  .word       0x735F7866                   # INVALID     $k0, $ra, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1940u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4E1940 raw=0x735F7866");
label_4e1944:
    // 0x4e1944: 0x69687465  ldl         $t0, 0x7465($t3)
    ctx->pc = 0x4e1944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29797); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e1948:
    // 0x4e1948: 0x74636174  .word       0x74636174                   # INVALID     $v1, $v1, 0x6174 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1948u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1948 raw=0x74636174");
label_4e194c:
    // 0x4e194c: 0x6e6f69  .word       0x006E6F69                   # mtsa        $v1 # 000E6F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e194cu;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_4e1950:
    // 0x4e1950: 0x665f7866  daddiu      $ra, $s2, 0x7866
    ctx->pc = 0x4e1950u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)30822);
label_4e1954:
    // 0x4e1954: 0x6f6c6c6f  ldr         $t4, 0x6C6F($k1)
    ctx->pc = 0x4e1954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 27759); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_4e1958:
    // 0x4e1958: 0x766e6977  .word       0x766E6977                   # INVALID     $s3, $t6, 0x6977 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1958u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1958 raw=0x766E6977");
label_4e195c:
    // 0x4e195c: 0x74617469  .word       0x74617469                   # INVALID     $v1, $at, 0x7469 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e195cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E195C raw=0x74617469");
label_4e1960:
    // 0x4e1960: 0x6e6f69  .word       0x006E6F69                   # mtsa        $v1 # 000E6F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e1960u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_4e1964:
    // 0x4e1964: 0x0  nop
    ctx->pc = 0x4e1964u;
    // NOP
label_4e1968:
    // 0x4e1968: 0x0  nop
    ctx->pc = 0x4e1968u;
    // NOP
label_4e196c:
    // 0x4e196c: 0x0  nop
    ctx->pc = 0x4e196cu;
    // NOP
label_4e1970:
    // 0x4e1970: 0x6c5f7866  ldr         $ra, 0x7866($v0)
    ctx->pc = 0x4e1970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 30822); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_4e1974:
    // 0x4e1974: 0x636e7561  daddi       $t6, $k1, 0x7561
    ctx->pc = 0x4e1974u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)30049; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4e1978:
    // 0x4e1978: 0x74636168  .word       0x74636168                   # INVALID     $v1, $v1, 0x6168 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1978u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1978 raw=0x74636168");
label_4e197c:
    // 0x4e197c: 0x6e6f69  .word       0x006E6F69                   # mtsa        $v1 # 000E6F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e197cu;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_4e1980:
    // 0x4e1980: 0x735f7866  .word       0x735F7866                   # INVALID     $k0, $ra, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1980u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4E1980 raw=0x735F7866");
label_4e1984:
    // 0x4e1984: 0x69736e65  ldl         $s3, 0x6E65($t3)
    ctx->pc = 0x4e1984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28261); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_4e1988:
    // 0x4e1988: 0x696c6962  ldl         $t4, 0x6962($t3)
    ctx->pc = 0x4e1988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26978); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_4e198c:
    // 0x4e198c: 0x7974  teq         $zero, $zero, 485
    ctx->pc = 0x4e198cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e1990:
    // 0x4e1990: 0x745f7866  .word       0x745F7866                   # INVALID     $v0, $ra, 0x7866 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1990u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1990 raw=0x745F7866");
label_4e1994:
    // 0x4e1994: 0x61747865  daddi       $s4, $t3, 0x7865
    ctx->pc = 0x4e1994u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)30821; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e1998:
    // 0x4e1998: 0x616e6572  daddi       $t6, $t3, 0x6572
    ctx->pc = 0x4e1998u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25970; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4e199c:
    // 0x4e199c: 0x0  nop
    ctx->pc = 0x4e199cu;
    // NOP
label_4e19a0:
    // 0x4e19a0: 0x615f7866  daddi       $ra, $t2, 0x7866
    ctx->pc = 0x4e19a0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_4e19a4:
    // 0x4e19a4: 0x616e6572  daddi       $t6, $t3, 0x6572
    ctx->pc = 0x4e19a4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25970; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4e19a8:
    // 0x4e19a8: 0x656d6163  daddiu      $t5, $t3, 0x6163
    ctx->pc = 0x4e19a8u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24931);
label_4e19ac:
    // 0x4e19ac: 0x68636172  ldl         $v1, 0x6172($v1)
    ctx->pc = 0x4e19acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24946); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4e19b0:
    // 0x4e19b0: 0x65676e61  daddiu      $a3, $t3, 0x6E61
    ctx->pc = 0x4e19b0u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28257);
label_4e19b4:
    // 0x4e19b4: 0x0  nop
    ctx->pc = 0x4e19b4u;
    // NOP
label_4e19b8:
    // 0x4e19b8: 0x6f5f7866  ldr         $ra, 0x7866($k0)
    ctx->pc = 0x4e19b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 30822); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_4e19bc:
    // 0x4e19bc: 0x65736666  daddiu      $s3, $t3, 0x6666
    ctx->pc = 0x4e19bcu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26214);
label_4e19c0:
    // 0x4e19c0: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4e19c0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e19c4:
    // 0x4e19c4: 0x0  nop
    ctx->pc = 0x4e19c4u;
    // NOP
label_4e19c8:
    // 0x4e19c8: 0x705f7866  .word       0x705F7866                   # INVALID     $v0, $ra, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e19c8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4E19C8 raw=0x705F7866");
label_4e19cc:
    // 0x4e19cc: 0x69747261  ldl         $s4, 0x7261($t3)
    ctx->pc = 0x4e19ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_4e19d0:
    // 0x4e19d0: 0x656c63  .word       0x00656C63                   # subu        $t5, $v1, $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e19d0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4e19d4:
    // 0x4e19d4: 0x0  nop
    ctx->pc = 0x4e19d4u;
    // NOP
label_4e19d8:
    // 0x4e19d8: 0x635f7866  daddi       $ra, $k0, 0x7866
    ctx->pc = 0x4e19d8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_4e19dc:
    // 0x4e19dc: 0x676e6168  daddiu      $t6, $k1, 0x6168
    ctx->pc = 0x4e19dcu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24936);
label_4e19e0:
    // 0x4e19e0: 0x626f6a65  daddi       $t7, $s3, 0x6A65
    ctx->pc = 0x4e19e0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)27237; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_4e19e4:
    // 0x4e19e4: 0x0  nop
    ctx->pc = 0x4e19e4u;
    // NOP
label_4e19e8:
    // 0x4e19e8: 0x705f7866  .word       0x705F7866                   # INVALID     $v0, $ra, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e19e8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4E19E8 raw=0x705F7866");
label_4e19ec:
    // 0x4e19ec: 0x6f69746f  ldr         $t1, 0x746F($k1)
    ctx->pc = 0x4e19ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29807); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e19f0:
    // 0x4e19f0: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e19f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_4e19f4:
    // 0x4e19f4: 0x0  nop
    ctx->pc = 0x4e19f4u;
    // NOP
label_4e19f8:
    // 0x4e19f8: 0x615f7172  daddi       $ra, $t2, 0x7172
    ctx->pc = 0x4e19f8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29042; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_4e19fc:
    // 0x4e19fc: 0x6f697463  ldr         $t1, 0x7463($k1)
    ctx->pc = 0x4e19fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29795); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e1a00:
    // 0x4e1a00: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1a00u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_4e1a04:
    // 0x4e1a04: 0x0  nop
    ctx->pc = 0x4e1a04u;
    // NOP
label_4e1a08:
    // 0x4e1a08: 0x645f7172  daddiu      $ra, $v0, 0x7172
    ctx->pc = 0x4e1a08u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)29042);
label_4e1a0c:
    // 0x4e1a0c: 0x74747369  .word       0x74747369                   # INVALID     $v1, $s4, 0x7369 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1a0cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1A0C raw=0x74747369");
label_4e1a10:
    // 0x4e1a10: 0x6168636f  daddi       $t0, $t3, 0x636F
    ctx->pc = 0x4e1a10u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25455; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_4e1a14:
    // 0x4e1a14: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x4e1a14u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e1a18:
    // 0x4e1a18: 0x645f7172  daddiu      $ra, $v0, 0x7172
    ctx->pc = 0x4e1a18u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)29042);
label_4e1a1c:
    // 0x4e1a1c: 0x74747369  .word       0x74747369                   # INVALID     $v1, $s4, 0x7369 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1a1cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1A1C raw=0x74747369");
label_4e1a20:
    // 0x4e1a20: 0x6574696f  daddiu      $s4, $t3, 0x696F
    ctx->pc = 0x4e1a20u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26991);
label_4e1a24:
    // 0x4e1a24: 0x6d  .word       0x0000006D                   # daddu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1a24u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e1a28:
    // 0x4e1a28: 0x735f7172  .word       0x735F7172                   # INVALID     $k0, $ra, 0x7172 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1a28u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x4E1A28 raw=0x735F7172");
label_4e1a2c:
    // 0x4e1a2c: 0x61757469  daddi       $s5, $t3, 0x7469
    ctx->pc = 0x4e1a2cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29801; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_4e1a30:
    // 0x4e1a30: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4e1a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e1a34:
    // 0x4e1a34: 0x0  nop
    ctx->pc = 0x4e1a34u;
    // NOP
label_4e1a38:
    // 0x4e1a38: 0x735f7172  .word       0x735F7172                   # INVALID     $k0, $ra, 0x7172 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1a38u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x4E1A38 raw=0x735F7172");
label_4e1a3c:
    // 0x4e1a3c: 0x6c6c696b  ldr         $t4, 0x696B($v1)
    ctx->pc = 0x4e1a3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26987); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_4e1a40:
    // 0x4e1a40: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x4e1a40u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e1a44:
    // 0x4e1a44: 0x0  nop
    ctx->pc = 0x4e1a44u;
    // NOP
label_4e1a48:
    // 0x4e1a48: 0x675f7172  daddiu      $ra, $k0, 0x7172
    ctx->pc = 0x4e1a48u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 26) + (int64_t)(int32_t)29042);
label_4e1a4c:
    // 0x4e1a4c: 0x65677561  daddiu      $a3, $t3, 0x7561
    ctx->pc = 0x4e1a4cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30049);
label_4e1a50:
    // 0x4e1a50: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x4e1a50u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e1a54:
    // 0x4e1a54: 0x0  nop
    ctx->pc = 0x4e1a54u;
    // NOP
label_4e1a58:
    // 0x4e1a58: 0x615f7172  daddi       $ra, $t2, 0x7172
    ctx->pc = 0x4e1a58u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29042; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_4e1a5c:
    // 0x4e1a5c: 0x616e6572  daddi       $t6, $t3, 0x6572
    ctx->pc = 0x4e1a5cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25970; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4e1a60:
    // 0x4e1a60: 0x0  nop
    ctx->pc = 0x4e1a60u;
    // NOP
label_4e1a64:
    // 0x4e1a64: 0x0  nop
    ctx->pc = 0x4e1a64u;
    // NOP
label_4e1a68:
    // 0x4e1a68: 0x735f7172  .word       0x735F7172                   # INVALID     $k0, $ra, 0x7172 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1a68u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x4E1A68 raw=0x735F7172");
label_4e1a6c:
    // 0x4e1a6c: 0x61666c65  daddi       $a2, $t3, 0x6C65
    ctx->pc = 0x4e1a6cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
label_4e1a70:
    // 0x4e1a70: 0x6f697463  ldr         $t1, 0x7463($k1)
    ctx->pc = 0x4e1a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29795); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e1a74:
    // 0x4e1a74: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1a74u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_4e1a78:
    // 0x4e1a78: 0x705f7172  .word       0x705F7172                   # INVALID     $v0, $ra, 0x7172 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1a78u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x4E1A78 raw=0x705F7172");
label_4e1a7c:
    // 0x4e1a7c: 0x6579616c  daddiu      $t9, $t3, 0x616C
    ctx->pc = 0x4e1a7cu;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24940);
label_4e1a80:
    // 0x4e1a80: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x4e1a80u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e1a84:
    // 0x4e1a84: 0x0  nop
    ctx->pc = 0x4e1a84u;
    // NOP
label_4e1a88:
    // 0x4e1a88: 0x735f7172  .word       0x735F7172                   # INVALID     $k0, $ra, 0x7172 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1a88u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x4E1A88 raw=0x735F7172");
label_4e1a8c:
    // 0x4e1a8c: 0x705f7865  .word       0x705F7865                   # INVALID     $v0, $ra, 0x7865 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1a8cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4E1A8C raw=0x705F7865");
label_4e1a90:
    // 0x4e1a90: 0x6579616c  daddiu      $t9, $t3, 0x616C
    ctx->pc = 0x4e1a90u;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24940);
label_4e1a94:
    // 0x4e1a94: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x4e1a94u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e1a98:
    // 0x4e1a98: 0x735f7172  .word       0x735F7172                   # INVALID     $k0, $ra, 0x7172 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1a98u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x4E1A98 raw=0x735F7172");
label_4e1a9c:
    // 0x4e1a9c: 0x705f7865  .word       0x705F7865                   # INVALID     $v0, $ra, 0x7865 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1a9cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4E1A9C raw=0x705F7865");
label_4e1aa0:
    // 0x4e1aa0: 0x6a6e  .word       0x00006A6E                   # dsub        $t5, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1aa0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_4e1aa4:
    // 0x4e1aa4: 0x0  nop
    ctx->pc = 0x4e1aa4u;
    // NOP
label_4e1aa8:
    // 0x4e1aa8: 0x615f7172  daddi       $ra, $t2, 0x7172
    ctx->pc = 0x4e1aa8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29042; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_4e1aac:
    // 0x4e1aac: 0x726f7463  .word       0x726F7463                   # INVALID     $s3, $t7, 0x7463 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1aacu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4E1AAC raw=0x726F7463");
label_4e1ab0:
    // 0x4e1ab0: 0x65707974  daddiu      $s0, $t3, 0x7974
    ctx->pc = 0x4e1ab0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)31092);
label_4e1ab4:
    // 0x4e1ab4: 0x0  nop
    ctx->pc = 0x4e1ab4u;
    // NOP
label_4e1ab8:
    // 0x4e1ab8: 0x0  nop
    ctx->pc = 0x4e1ab8u;
    // NOP
label_4e1abc:
    // 0x4e1abc: 0x0  nop
    ctx->pc = 0x4e1abcu;
    // NOP
label_4e1ac0:
    // 0x4e1ac0: 0x6d5f7172  ldr         $ra, 0x7172($t2)
    ctx->pc = 0x4e1ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 29042); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_4e1ac4:
    // 0x4e1ac4: 0x69737369  ldl         $s3, 0x7369($t3)
    ctx->pc = 0x4e1ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29545); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_4e1ac8:
    // 0x4e1ac8: 0x615f6e6f  daddi       $ra, $t2, 0x6E6F
    ctx->pc = 0x4e1ac8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)28271; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_4e1acc:
    // 0x4e1acc: 0x6c696176  ldr         $t1, 0x6176($v1)
    ctx->pc = 0x4e1accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24950); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e1ad0:
    // 0x4e1ad0: 0x656c6261  daddiu      $t4, $t3, 0x6261
    ctx->pc = 0x4e1ad0u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25185);
label_4e1ad4:
    // 0x4e1ad4: 0x0  nop
    ctx->pc = 0x4e1ad4u;
    // NOP
label_4e1ad8:
    // 0x4e1ad8: 0x625f7172  daddi       $ra, $s2, 0x7172
    ctx->pc = 0x4e1ad8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 18); int64_t imm = (int64_t)(int32_t)29042; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_4e1adc:
    // 0x4e1adc: 0x6c615f65  ldr         $at, 0x5F65($v1)
    ctx->pc = 0x4e1adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24421); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4e1ae0:
    // 0x4e1ae0: 0x656e6f  .word       0x00656E6F                   # dsubu       $t5, $v1, $a1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1ae0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) - GPR_U64(ctx, 5));
label_4e1ae4:
    // 0x4e1ae4: 0x0  nop
    ctx->pc = 0x4e1ae4u;
    // NOP
label_4e1ae8:
    // 0x4e1ae8: 0x6e5f7172  ldr         $ra, 0x7172($s2)
    ctx->pc = 0x4e1ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 29042); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_4e1aec:
    // 0x4e1aec: 0x68635f6f  ldl         $v1, 0x5F6F($v1)
    ctx->pc = 0x4e1aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24431); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4e1af0:
    // 0x4e1af0: 0x6f6e6f72  ldr         $t6, 0x6F72($k1)
    ctx->pc = 0x4e1af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28530); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_4e1af4:
    // 0x4e1af4: 0x0  nop
    ctx->pc = 0x4e1af4u;
    // NOP
label_4e1af8:
    // 0x4e1af8: 0x615f7172  daddi       $ra, $t2, 0x7172
    ctx->pc = 0x4e1af8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29042; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_4e1afc:
    // 0x4e1afc: 0x726f7463  .word       0x726F7463                   # INVALID     $s3, $t7, 0x7463 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1afcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4E1AFC raw=0x726F7463");
label_4e1b00:
    // 0x4e1b00: 0x73695f  .word       0x0073695F                   # ddivu       $t5, $v1, $s3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1b00u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E1B00 raw=0x0073695F");
label_4e1b04:
    // 0x4e1b04: 0x0  nop
    ctx->pc = 0x4e1b04u;
    // NOP
label_4e1b08:
    // 0x4e1b08: 0x755f7172  .word       0x755F7172                   # INVALID     $t2, $ra, 0x7172 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1b08u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1B08 raw=0x755F7172");
label_4e1b0c:
    // 0x4e1b0c: 0x636f6c6e  daddi       $t7, $k1, 0x6C6E
    ctx->pc = 0x4e1b0cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27758; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_4e1b10:
    // 0x4e1b10: 0x64656b  .word       0x0064656B                   # sltu        $t4, $v1, $a0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1b10u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4e1b14:
    // 0x4e1b14: 0x0  nop
    ctx->pc = 0x4e1b14u;
    // NOP
label_4e1b18:
    // 0x4e1b18: 0x0  nop
    ctx->pc = 0x4e1b18u;
    // NOP
label_4e1b1c:
    // 0x4e1b1c: 0x0  nop
    ctx->pc = 0x4e1b1cu;
    // NOP
label_4e1b20:
    // 0x4e1b20: 0x725f7172  .word       0x725F7172                   # INVALID     $s2, $ra, 0x7172 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1b20u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x4E1B20 raw=0x725F7172");
label_4e1b24:
    // 0x4e1b24: 0x74616c65  .word       0x74616C65                   # INVALID     $v1, $at, 0x6C65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1b24u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1B24 raw=0x74616C65");
label_4e1b28:
    // 0x4e1b28: 0x736e6f69  .word       0x736E6F69                   # INVALID     $k1, $t6, 0x6F69 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x4e1b28u;
    throw std::runtime_error("Unhandled MMI3 instruction: function 0x1D at 0x4E1B28 raw=0x736E6F69");
label_4e1b2c:
    // 0x4e1b2c: 0x706968  .word       0x00706968                   # mfsa        $t5 # 00700140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e1b2cu;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_4e1b30:
    // 0x4e1b30: 0x635f7172  daddi       $ra, $k0, 0x7172
    ctx->pc = 0x4e1b30u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)29042; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_4e1b34:
    // 0x4e1b34: 0x68746f6c  ldl         $s4, 0x6F6C($v1)
    ctx->pc = 0x4e1b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28524); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_4e1b38:
    // 0x4e1b38: 0x0  nop
    ctx->pc = 0x4e1b38u;
    // NOP
label_4e1b3c:
    // 0x4e1b3c: 0x0  nop
    ctx->pc = 0x4e1b3cu;
    // NOP
label_4e1b40:
    // 0x4e1b40: 0x615f7172  daddi       $ra, $t2, 0x7172
    ctx->pc = 0x4e1b40u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29042; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_4e1b44:
    // 0x4e1b44: 0x616e6572  daddi       $t6, $t3, 0x6572
    ctx->pc = 0x4e1b44u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25970; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4e1b48:
    // 0x4e1b48: 0x65707974  daddiu      $s0, $t3, 0x7974
    ctx->pc = 0x4e1b48u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)31092);
label_4e1b4c:
    // 0x4e1b4c: 0x0  nop
    ctx->pc = 0x4e1b4cu;
    // NOP
label_4e1b50:
    // 0x4e1b50: 0x735f7172  .word       0x735F7172                   # INVALID     $k0, $ra, 0x7172 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1b50u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x4E1B50 raw=0x735F7172");
label_4e1b54:
    // 0x4e1b54: 0x61757469  daddi       $s5, $t3, 0x7469
    ctx->pc = 0x4e1b54u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29801; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_4e1b58:
    // 0x4e1b58: 0x6c6f6674  ldr         $t7, 0x6674($v1)
    ctx->pc = 0x4e1b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26228); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e1b5c:
    // 0x4e1b5c: 0x65776f6c  daddiu      $s7, $t3, 0x6F6C
    ctx->pc = 0x4e1b5cu;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28524);
label_4e1b60:
    // 0x4e1b60: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1b60u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_4e1b64:
    // 0x4e1b64: 0x0  nop
    ctx->pc = 0x4e1b64u;
    // NOP
label_4e1b68:
    // 0x4e1b68: 0x665f7172  daddiu      $ra, $s2, 0x7172
    ctx->pc = 0x4e1b68u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)29042);
label_4e1b6c:
    // 0x4e1b6c: 0x6f6c6c6f  ldr         $t4, 0x6C6F($k1)
    ctx->pc = 0x4e1b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 27759); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_4e1b70:
    // 0x4e1b70: 0x676e6977  daddiu      $t6, $k1, 0x6977
    ctx->pc = 0x4e1b70u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26999);
label_4e1b74:
    // 0x4e1b74: 0x0  nop
    ctx->pc = 0x4e1b74u;
    // NOP
label_4e1b78:
    // 0x4e1b78: 0x0  nop
    ctx->pc = 0x4e1b78u;
    // NOP
label_4e1b7c:
    // 0x4e1b7c: 0x0  nop
    ctx->pc = 0x4e1b7cu;
    // NOP
label_4e1b80:
    // 0x4e1b80: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e1b80u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e1b84:
    // 0x4e1b84: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e1b84u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e1b88:
    // 0x4e1b88: 0x7474705c  .word       0x7474705C                   # INVALID     $v1, $s4, 0x705C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1b88u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1B88 raw=0x7474705C");
label_4e1b8c:
    // 0x4e1b8c: 0x73657079  .word       0x73657079                   # INVALID     $k1, $a1, 0x7079 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1b8cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x39 at 0x4E1B8C raw=0x73657079");
label_4e1b90:
    // 0x4e1b90: 0x5c  .word       0x0000005C                   # dmult       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1b90u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x4E1B90 raw=0x0000005C");
label_4e1b94:
    // 0x4e1b94: 0x0  nop
    ctx->pc = 0x4e1b94u;
    // NOP
label_4e1b98:
    // 0x4e1b98: 0x0  nop
    ctx->pc = 0x4e1b98u;
    // NOP
label_4e1b9c:
    // 0x4e1b9c: 0x0  nop
    ctx->pc = 0x4e1b9cu;
    // NOP
label_4e1ba0:
    // 0x4e1ba0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e1ba0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e1ba4:
    // 0x4e1ba4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e1ba4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e1ba8:
    // 0x4e1ba8: 0x7474705c  .word       0x7474705C                   # INVALID     $v1, $s4, 0x705C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1ba8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1BA8 raw=0x7474705C");
label_4e1bac:
    // 0x4e1bac: 0x73657079  .word       0x73657079                   # INVALID     $k1, $a1, 0x7079 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1bacu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x39 at 0x4E1BAC raw=0x73657079");
label_4e1bb0:
    // 0x4e1bb0: 0x73255c  .word       0x0073255C                   # dmult       $v1, $s3 # 00002540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1bb0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x4E1BB0 raw=0x0073255C");
label_4e1bb4:
    // 0x4e1bb4: 0x0  nop
    ctx->pc = 0x4e1bb4u;
    // NOP
label_4e1bb8:
    // 0x4e1bb8: 0x0  nop
    ctx->pc = 0x4e1bb8u;
    // NOP
label_4e1bbc:
    // 0x4e1bbc: 0x0  nop
    ctx->pc = 0x4e1bbcu;
    // NOP
label_4e1bc0:
    // 0x4e1bc0: 0x6576656c  daddiu      $s6, $t3, 0x656C
    ctx->pc = 0x4e1bc0u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25964);
label_4e1bc4:
    // 0x4e1bc4: 0x75632e6c  .word       0x75632E6C                   # INVALID     $t3, $v1, 0x2E6C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1bc4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1BC4 raw=0x75632E6C");
label_4e1bc8:
    // 0x4e1bc8: 0x6e657272  ldr         $a1, 0x7272($s3)
    ctx->pc = 0x4e1bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29298); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4e1bcc:
    // 0x4e1bcc: 0x75662e74  .word       0x75662E74                   # INVALID     $t3, $a2, 0x2E74 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1bccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1BCC raw=0x75662E74");
label_4e1bd0:
    // 0x4e1bd0: 0x61706c6c  daddi       $s0, $t3, 0x6C6C
    ctx->pc = 0x4e1bd0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27756; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_4e1bd4:
    // 0x4e1bd4: 0x616e6874  daddi       $t6, $t3, 0x6874
    ctx->pc = 0x4e1bd4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26740; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4e1bd8:
    // 0x4e1bd8: 0x656d  .word       0x0000656D                   # daddu       $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1bd8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e1bdc:
    // 0x4e1bdc: 0x0  nop
    ctx->pc = 0x4e1bdcu;
    // NOP
label_4e1be0:
    // 0x4e1be0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e1be0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e1be4:
    // 0x4e1be4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e1be4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e1be8:
    // 0x4e1be8: 0x7474705c  .word       0x7474705C                   # INVALID     $v1, $s4, 0x705C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1be8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1BE8 raw=0x7474705C");
label_4e1bec:
    // 0x4e1bec: 0x73657079  .word       0x73657079                   # INVALID     $k1, $a1, 0x7079 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1becu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x39 at 0x4E1BEC raw=0x73657079");
label_4e1bf0:
    // 0x4e1bf0: 0x2e73255c  sltiu       $s3, $s3, 0x255C
    ctx->pc = 0x4e1bf0u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9564) ? 1 : 0);
label_4e1bf4:
    // 0x4e1bf4: 0x626361  .word       0x00626361                   # addu        $t4, $v1, $v0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1bf4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e1bf8:
    // 0x4e1bf8: 0x6c6c6f63  ldr         $t4, 0x6F63($v1)
    ctx->pc = 0x4e1bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_4e1bfc:
    // 0x4e1bfc: 0x6f697369  ldr         $t1, 0x7369($k1)
    ctx->pc = 0x4e1bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29545); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e1c00:
    // 0x4e1c00: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1c00u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_4e1c04:
    // 0x4e1c04: 0x0  nop
    ctx->pc = 0x4e1c04u;
    // NOP
label_4e1c08:
    // 0x4e1c08: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1c08u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4e1c0c:
    // 0x4e1c0c: 0x0  nop
    ctx->pc = 0x4e1c0cu;
    // NOP
label_4e1c10:
    // 0x4e1c10: 0x0  nop
    ctx->pc = 0x4e1c10u;
    // NOP
label_4e1c14:
    // 0x4e1c14: 0x0  nop
    ctx->pc = 0x4e1c14u;
    // NOP
label_4e1c18:
    // 0x4e1c18: 0x44228000  dmfc1       $v0, $f16
    ctx->pc = 0x4e1c18u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x0 at 0x4E1C18 raw=0x44228000");
label_4e1c1c:
    // 0x4e1c1c: 0x44228000  dmfc1       $v0, $f16
    ctx->pc = 0x4e1c1cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x0 at 0x4E1C1C raw=0x44228000");
label_4e1c20:
    // 0x4e1c20: 0xc4228000  lwc1        $f2, -0x8000($at)
    ctx->pc = 0x4e1c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294934528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e1c24:
    // 0x4e1c24: 0x0  nop
    ctx->pc = 0x4e1c24u;
    // NOP
label_4e1c28:
    // 0x4e1c28: 0x0  nop
    ctx->pc = 0x4e1c28u;
    // NOP
label_4e1c2c:
    // 0x4e1c2c: 0x0  nop
    ctx->pc = 0x4e1c2cu;
    // NOP
label_4e1c30:
    // 0x4e1c30: 0x65746e49  daddiu      $s4, $t3, 0x6E49
    ctx->pc = 0x4e1c30u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28233);
label_4e1c34:
    // 0x4e1c34: 0x63616672  daddi       $at, $k1, 0x6672
    ctx->pc = 0x4e1c34u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26226; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_4e1c38:
    // 0x4e1c38: 0x70552065  .word       0x70552065                   # INVALID     $v0, $s5, 0x2065 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1c38u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4E1C38 raw=0x70552065");
label_4e1c3c:
    // 0x4e1c3c: 0x65746164  daddiu      $s4, $t3, 0x6164
    ctx->pc = 0x4e1c3cu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24932);
label_4e1c40:
    // 0x4e1c40: 0x0  nop
    ctx->pc = 0x4e1c40u;
    // NOP
label_4e1c44:
    // 0x4e1c44: 0x0  nop
    ctx->pc = 0x4e1c44u;
    // NOP
label_4e1c48:
    // 0x4e1c48: 0x0  nop
    ctx->pc = 0x4e1c48u;
    // NOP
label_4e1c4c:
    // 0x4e1c4c: 0x0  nop
    ctx->pc = 0x4e1c4cu;
    // NOP
label_4e1c50:
    // 0x4e1c50: 0x65746e49  daddiu      $s4, $t3, 0x6E49
    ctx->pc = 0x4e1c50u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28233);
label_4e1c54:
    // 0x4e1c54: 0x63616672  daddi       $at, $k1, 0x6672
    ctx->pc = 0x4e1c54u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26226; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_4e1c58:
    // 0x4e1c58: 0x65522065  daddiu      $s2, $t2, 0x2065
    ctx->pc = 0x4e1c58u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8293);
label_4e1c5c:
    // 0x4e1c5c: 0x7265646e  .word       0x7265646E                   # INVALID     $s3, $a1, 0x646E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1c5cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4E1C5C raw=0x7265646E");
label_4e1c60:
    // 0x4e1c60: 0x0  nop
    ctx->pc = 0x4e1c60u;
    // NOP
label_4e1c64:
    // 0x4e1c64: 0x0  nop
    ctx->pc = 0x4e1c64u;
    // NOP
label_4e1c68:
    // 0x4e1c68: 0x735f6975  .word       0x735F6975                   # INVALID     $k0, $ra, 0x6975 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1c68u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x4E1C68 raw=0x735F6975");
label_4e1c6c:
    // 0x4e1c6c: 0x63656c65  daddi       $a1, $k1, 0x6C65
    ctx->pc = 0x4e1c6cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e1c70:
    // 0x4e1c70: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4e1c70u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e1c74:
    // 0x4e1c74: 0x0  nop
    ctx->pc = 0x4e1c74u;
    // NOP
label_4e1c78:
    // 0x4e1c78: 0x0  nop
    ctx->pc = 0x4e1c78u;
    // NOP
label_4e1c7c:
    // 0x4e1c7c: 0x0  nop
    ctx->pc = 0x4e1c7cu;
    // NOP
label_4e1c80:
    // 0x4e1c80: 0x0  nop
    ctx->pc = 0x4e1c80u;
    // NOP
label_4e1c84:
    // 0x4e1c84: 0x0  nop
    ctx->pc = 0x4e1c84u;
    // NOP
label_4e1c88:
    // 0x4e1c88: 0x0  nop
    ctx->pc = 0x4e1c88u;
    // NOP
label_4e1c8c:
    // 0x4e1c8c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1c8cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4e1c90:
    // 0x4e1c90: 0x3a3a7453  xori        $k0, $s1, 0x7453
    ctx->pc = 0x4e1c90u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29779);
label_4e1c94:
    // 0x4e1c94: 0x6c6c7542  ldr         $t4, 0x7542($v1)
    ctx->pc = 0x4e1c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30018); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_4e1c98:
    // 0x4e1c98: 0x7465  .word       0x00007465                   # move        $t6, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1c98u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e1c9c:
    // 0x4e1c9c: 0x0  nop
    ctx->pc = 0x4e1c9cu;
    // NOP
label_4e1ca0:
    // 0x4e1ca0: 0x3a3a7453  xori        $k0, $s1, 0x7453
    ctx->pc = 0x4e1ca0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29779);
label_4e1ca4:
    // 0x4e1ca4: 0x47646e45  .word       0x47646E45                   # INVALID     $k1, $a0, 0x6E45 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e1ca4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x5 at 0x4E1CA4 raw=0x47646E45");
label_4e1ca8:
    // 0x4e1ca8: 0x656d61  .word       0x00656D61                   # addu        $t5, $v1, $a1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1ca8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4e1cac:
    // 0x4e1cac: 0x0  nop
    ctx->pc = 0x4e1cacu;
    // NOP
label_4e1cb0:
    // 0x4e1cb0: 0x735c7325  .word       0x735C7325                   # INVALID     $k0, $gp, 0x7325 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1cb0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4E1CB0 raw=0x735C7325");
label_4e1cb4:
    // 0x4e1cb4: 0x65657263  daddiu      $a1, $t3, 0x7263
    ctx->pc = 0x4e1cb4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29283);
label_4e1cb8:
    // 0x4e1cb8: 0x765c736e  .word       0x765C736E                   # INVALID     $s2, $gp, 0x736E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1cb8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1CB8 raw=0x765C736E");
label_4e1cbc:
    // 0x4e1cbc: 0x64696c73  daddiu      $t1, $v1, 0x6C73
    ctx->pc = 0x4e1cbcu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27763);
label_4e1cc0:
    // 0x4e1cc0: 0x32302565  andi        $s0, $s1, 0x2565
    ctx->pc = 0x4e1cc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9573);
label_4e1cc4:
    // 0x4e1cc4: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1cc4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_4e1cc8:
    // 0x4e1cc8: 0x0  nop
    ctx->pc = 0x4e1cc8u;
    // NOP
label_4e1ccc:
    // 0x4e1ccc: 0x0  nop
    ctx->pc = 0x4e1cccu;
    // NOP
label_4e1cd0:
    // 0x4e1cd0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e1cd0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e1cd4:
    // 0x4e1cd4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e1cd4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e1cd8:
    // 0x4e1cd8: 0x7469625c  .word       0x7469625C                   # INVALID     $v1, $t1, 0x625C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1cd8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1CD8 raw=0x7469625C");
label_4e1cdc:
    // 0x4e1cdc: 0x7370616d  .word       0x7370616D                   # INVALID     $k1, $s0, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1cdcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4E1CDC raw=0x7370616D");
label_4e1ce0:
    // 0x4e1ce0: 0x3273705c  andi        $s3, $s3, 0x705C
    ctx->pc = 0x4e1ce0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)28764);
label_4e1ce4:
    // 0x4e1ce4: 0x0  nop
    ctx->pc = 0x4e1ce4u;
    // NOP
label_4e1ce8:
    // 0x4e1ce8: 0x3a3a7453  xori        $k0, $s1, 0x7453
    ctx->pc = 0x4e1ce8u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29779);
label_4e1cec:
    // 0x4e1cec: 0x656d6147  daddiu      $t5, $t3, 0x6147
    ctx->pc = 0x4e1cecu;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24903);
label_4e1cf0:
    // 0x4e1cf0: 0x6c727443  ldr         $s2, 0x7443($v1)
    ctx->pc = 0x4e1cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29763); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_4e1cf4:
    // 0x4e1cf4: 0x0  nop
    ctx->pc = 0x4e1cf4u;
    // NOP
label_4e1cf8:
    // 0x4e1cf8: 0x656c6966  daddiu      $t4, $t3, 0x6966
    ctx->pc = 0x4e1cf8u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26982);
label_4e1cfc:
    // 0x4e1cfc: 0x656d616e  daddiu      $t5, $t3, 0x616E
    ctx->pc = 0x4e1cfcu;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
label_4e1d00:
    // 0x4e1d00: 0x0  nop
    ctx->pc = 0x4e1d00u;
    // NOP
label_4e1d04:
    // 0x4e1d04: 0x0  nop
    ctx->pc = 0x4e1d04u;
    // NOP
label_4e1d08:
    // 0x4e1d08: 0x0  nop
    ctx->pc = 0x4e1d08u;
    // NOP
label_4e1d0c:
    // 0x4e1d0c: 0x0  nop
    ctx->pc = 0x4e1d0cu;
    // NOP
label_4e1d10:
    // 0x4e1d10: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e1d10u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e1d14:
    // 0x4e1d14: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e1d14u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e1d18:
    // 0x4e1d18: 0x76656c5c  .word       0x76656C5C                   # INVALID     $s3, $a1, 0x6C5C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1d18u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1D18 raw=0x76656C5C");
label_4e1d1c:
    // 0x4e1d1c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4e1d20:
    if (ctx->pc == 0x4E1D20u) {
        ctx->pc = 0x4E1D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1D1Cu;
        // 0x4e1d20: 0x2e70616d  sltiu       $s0, $s3, 0x616D (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24941) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1D24u;
        goto label_4e1d24;
    }
    ctx->pc = 0x4E1D1Cu;
    {
        const bool branch_taken_0x4e1d1c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e1d1c) {
            ctx->pc = 0x4E1D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1D1Cu;
            // 0x4e1d20: 0x2e70616d  sltiu       $s0, $s3, 0x616D (Delay Slot)
            SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24941) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FCEB4u;
            return;
        }
    }
    ctx->pc = 0x4E1D24u;
label_4e1d24:
    // 0x4e1d24: 0x733774  teq         $v1, $s3, 221
    ctx->pc = 0x4e1d24u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_4e1d28:
    // 0x4e1d28: 0x3a3a7453  xori        $k0, $s1, 0x7453
    ctx->pc = 0x4e1d28u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29779);
label_4e1d2c:
    // 0x4e1d2c: 0x69726553  ldl         $s2, 0x6553($t3)
    ctx->pc = 0x4e1d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25939); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_4e1d30:
    // 0x4e1d30: 0x7a696c61  lq          $t1, 0x6C61($s3)
    ctx->pc = 0x4e1d30u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 19), 27745)));
label_4e1d34:
    // 0x4e1d34: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1d34u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e1d38:
    // 0x4e1d38: 0x656c6966  daddiu      $t4, $t3, 0x6966
    ctx->pc = 0x4e1d38u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26982);
label_4e1d3c:
    // 0x4e1d3c: 0x656d616e  daddiu      $t5, $t3, 0x616E
    ctx->pc = 0x4e1d3cu;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
label_4e1d40:
    // 0x4e1d40: 0x0  nop
    ctx->pc = 0x4e1d40u;
    // NOP
label_4e1d44:
    // 0x4e1d44: 0x0  nop
    ctx->pc = 0x4e1d44u;
    // NOP
label_4e1d48:
    // 0x4e1d48: 0x0  nop
    ctx->pc = 0x4e1d48u;
    // NOP
label_4e1d4c:
    // 0x4e1d4c: 0x0  nop
    ctx->pc = 0x4e1d4cu;
    // NOP
label_4e1d50:
    // 0x4e1d50: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e1d50u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e1d54:
    // 0x4e1d54: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e1d54u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e1d58:
    // 0x4e1d58: 0x76656c5c  .word       0x76656C5C                   # INVALID     $s3, $a1, 0x6C5C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1d58u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1D58 raw=0x76656C5C");
label_4e1d5c:
    // 0x4e1d5c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4e1d60:
    if (ctx->pc == 0x4E1D60u) {
        ctx->pc = 0x4E1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1D5Cu;
        // 0x4e1d60: 0x616a7970  daddi       $t2, $t3, 0x7970 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)31088; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1D64u;
        goto label_4e1d64;
    }
    ctx->pc = 0x4E1D5Cu;
    {
        const bool branch_taken_0x4e1d5c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e1d5c) {
            ctx->pc = 0x4E1D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1D5Cu;
            // 0x4e1d60: 0x616a7970  daddi       $t2, $t3, 0x7970 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)31088; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FCEF4u;
            return;
        }
    }
    ctx->pc = 0x4E1D64u;
label_4e1d64:
    // 0x4e1d64: 0x616d  .word       0x0000616D                   # daddu       $t4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1d64u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e1d68:
    // 0x4e1d68: 0x0  nop
    ctx->pc = 0x4e1d68u;
    // NOP
label_4e1d6c:
    // 0x4e1d6c: 0x0  nop
    ctx->pc = 0x4e1d6cu;
    // NOP
label_4e1d70:
    // 0x4e1d70: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e1d70u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e1d74:
    // 0x4e1d74: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e1d74u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e1d78:
    // 0x4e1d78: 0x76656c5c  .word       0x76656C5C                   # INVALID     $s3, $a1, 0x6C5C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1d78u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1D78 raw=0x76656C5C");
label_4e1d7c:
    // 0x4e1d7c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4e1d80:
    if (ctx->pc == 0x4E1D80u) {
        ctx->pc = 0x4E1D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1D7Cu;
        // 0x4e1d80: 0x746f7265  .word       0x746F7265                   # INVALID     $v1, $t7, 0x7265 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1D80 raw=0x746F7265");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1D84u;
        goto label_4e1d84;
    }
    ctx->pc = 0x4E1D7Cu;
    {
        const bool branch_taken_0x4e1d7c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e1d7c) {
            ctx->pc = 0x4E1D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1D7Cu;
            // 0x4e1d80: 0x746f7265  .word       0x746F7265                   # INVALID     $v1, $t7, 0x7265 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1D80 raw=0x746F7265");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FCF14u;
            return;
        }
    }
    ctx->pc = 0x4E1D84u;
label_4e1d84:
    // 0x4e1d84: 0x72646369  .word       0x72646369                   # pdivuw      $s3, $a0 # 00006000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x4e1d84u;
    { uint32_t rs0 = GPR_U32(ctx, 19); uint32_t rt0 = GPR_U32(ctx, 4); 
   if (rt0 != 0) { ctx->lo = rs0 / rt0; ctx->hi = rs0 % rt0; } 
   else { ctx->lo = 0xFFFFFFFF; ctx->hi = rs0; } 
   SET_GPR_U32(ctx, 12, ctx->lo); }
label_4e1d88:
    // 0x4e1d88: 0x6d6165  .word       0x006D6165                   # or          $t4, $v1, $t5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1d88u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
label_4e1d8c:
    // 0x4e1d8c: 0x0  nop
    ctx->pc = 0x4e1d8cu;
    // NOP
label_4e1d90:
    // 0x4e1d90: 0x43525426  .word       0x43525426                   # INVALID     $k0, $s2, 0x5426 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e1d90u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E1D90 raw=0x43525426");
label_4e1d94:
    // 0x4e1d94: 0x7061635f  .word       0x7061635F                   # INVALID     $v1, $at, 0x635F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1d94u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x4E1D94 raw=0x7061635F");
label_4e1d98:
    // 0x4e1d98: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4e1d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e1d9c:
    // 0x4e1d9c: 0x0  nop
    ctx->pc = 0x4e1d9cu;
    // NOP
label_4e1da0:
    // 0x4e1da0: 0x5f424726  .word       0x5F424726                   # bgtzl       $k0, . + 4 + (0x4726 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_4e1da4:
    if (ctx->pc == 0x4E1DA4u) {
        ctx->pc = 0x4E1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1DA0u;
        // 0x4e1da4: 0x65746f6e  daddiu      $s4, $t3, 0x6F6E (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28526);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1DA8u;
        goto label_4e1da8;
    }
    ctx->pc = 0x4E1DA0u;
    {
        const bool branch_taken_0x4e1da0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e1da0) {
            ctx->pc = 0x4E1DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1DA0u;
            // 0x4e1da4: 0x65746f6e  daddiu      $s4, $t3, 0x6F6E (Delay Slot)
            SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28526);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F3A3Cu;
            return;
        }
    }
    ctx->pc = 0x4E1DA8u;
label_4e1da8:
    // 0x4e1da8: 0x7478  dsll        $t6, $zero, 17
    ctx->pc = 0x4e1da8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << 17);
label_4e1dac:
    // 0x4e1dac: 0x0  nop
    ctx->pc = 0x4e1dacu;
    // NOP
label_4e1db0:
    // 0x4e1db0: 0x5f424726  .word       0x5F424726                   # bgtzl       $k0, . + 4 + (0x4726 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_4e1db4:
    if (ctx->pc == 0x4E1DB4u) {
        ctx->pc = 0x4E1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1DB0u;
        // 0x4e1db4: 0x666e6f63  daddiu      $t6, $s3, 0x6F63 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)28515);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1DB8u;
        goto label_4e1db8;
    }
    ctx->pc = 0x4E1DB0u;
    {
        const bool branch_taken_0x4e1db0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e1db0) {
            ctx->pc = 0x4E1DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1DB0u;
            // 0x4e1db4: 0x666e6f63  daddiu      $t6, $s3, 0x6F63 (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)28515);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F3A4Cu;
            return;
        }
    }
    ctx->pc = 0x4E1DB8u;
label_4e1db8:
    // 0x4e1db8: 0x6c6d7269  ldr         $t5, 0x7269($v1)
    ctx->pc = 0x4e1db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29289); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_4e1dbc:
    // 0x4e1dbc: 0x65766165  daddiu      $s6, $t3, 0x6165
    ctx->pc = 0x4e1dbcu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24933);
label_4e1dc0:
    // 0x4e1dc0: 0x0  nop
    ctx->pc = 0x4e1dc0u;
    // NOP
label_4e1dc4:
    // 0x4e1dc4: 0x0  nop
    ctx->pc = 0x4e1dc4u;
    // NOP
label_4e1dc8:
    // 0x4e1dc8: 0x6f746341  ldr         $s4, 0x6341($k1)
    ctx->pc = 0x4e1dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25409); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_4e1dcc:
    // 0x4e1dcc: 0x6d614e72  ldr         $at, 0x4E72($t3)
    ctx->pc = 0x4e1dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 20082); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4e1dd0:
    // 0x4e1dd0: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1dd0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e1dd4:
    // 0x4e1dd4: 0x0  nop
    ctx->pc = 0x4e1dd4u;
    // NOP
label_4e1dd8:
    // 0x4e1dd8: 0x0  nop
    ctx->pc = 0x4e1dd8u;
    // NOP
label_4e1ddc:
    // 0x4e1ddc: 0x0  nop
    ctx->pc = 0x4e1ddcu;
    // NOP
label_4e1de0:
    // 0x4e1de0: 0x7478656e  .word       0x7478656E                   # INVALID     $v1, $t8, 0x656E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1de0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1DE0 raw=0x7478656E");
label_4e1de4:
    // 0x4e1de4: 0x6576656c  daddiu      $s6, $t3, 0x656C
    ctx->pc = 0x4e1de4u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25964);
label_4e1de8:
    // 0x4e1de8: 0x746e656c  .word       0x746E656C                   # INVALID     $v1, $t6, 0x656C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1de8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1DE8 raw=0x746E656C");
label_4e1dec:
    // 0x4e1dec: 0x636e6172  daddi       $t6, $k1, 0x6172
    ctx->pc = 0x4e1decu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24946; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4e1df0:
    // 0x4e1df0: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1df0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e1df4:
    // 0x4e1df4: 0x0  nop
    ctx->pc = 0x4e1df4u;
    // NOP
label_4e1df8:
    // 0x4e1df8: 0x3a3a7453  xori        $k0, $s1, 0x7453
    ctx->pc = 0x4e1df8u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29779);
label_4e1dfc:
    // 0x4e1dfc: 0x756e654d  .word       0x756E654D                   # INVALID     $t3, $t6, 0x654D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1dfcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1DFC raw=0x756E654D");
label_4e1e00:
    // 0x4e1e00: 0x0  nop
    ctx->pc = 0x4e1e00u;
    // NOP
label_4e1e04:
    // 0x4e1e04: 0x0  nop
    ctx->pc = 0x4e1e04u;
    // NOP
label_4e1e08:
    // 0x4e1e08: 0x7265706f  .word       0x7265706F                   # INVALID     $s3, $a1, 0x706F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1e08u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x4E1E08 raw=0x7265706F");
label_4e1e0c:
    // 0x4e1e0c: 0x6f697461  ldr         $t1, 0x7461($k1)
    ctx->pc = 0x4e1e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e1e10:
    // 0x4e1e10: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1e10u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_4e1e14:
    // 0x4e1e14: 0x0  nop
    ctx->pc = 0x4e1e14u;
    // NOP
label_4e1e18:
    // 0x4e1e18: 0x7265706f  .word       0x7265706F                   # INVALID     $s3, $a1, 0x706F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1e18u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x4E1E18 raw=0x7265706F");
label_4e1e1c:
    // 0x4e1e1c: 0x6f697461  ldr         $t1, 0x7461($k1)
    ctx->pc = 0x4e1e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e1e20:
    // 0x4e1e20: 0x6f702e6e  ldr         $s0, 0x2E6E($k1)
    ctx->pc = 0x4e1e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 11886); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_4e1e24:
    // 0x4e1e24: 0x7473  tltu        $zero, $zero, 465
    ctx->pc = 0x4e1e24u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e1e28:
    // 0x4e1e28: 0x3a3a7453  xori        $k0, $s1, 0x7453
    ctx->pc = 0x4e1e28u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29779);
label_4e1e2c:
    // 0x4e1e2c: 0x696e694d  ldl         $t6, 0x694D($t3)
    ctx->pc = 0x4e1e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26957); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4e1e30:
    // 0x4e1e30: 0x656d6147  daddiu      $t5, $t3, 0x6147
    ctx->pc = 0x4e1e30u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24903);
label_4e1e34:
    // 0x4e1e34: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x4e1e34u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e1e38:
    // 0x4e1e38: 0x3a3a7453  xori        $k0, $s1, 0x7453
    ctx->pc = 0x4e1e38u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29779);
label_4e1e3c:
    // 0x4e1e3c: 0x73756150  .word       0x73756150                   # mfhi1       $t4 # 03750140 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1e3cu;
    SET_GPR_U64(ctx, 12, ctx->hi1);
label_4e1e40:
    // 0x4e1e40: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1e40u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e1e44:
    // 0x4e1e44: 0x0  nop
    ctx->pc = 0x4e1e44u;
    // NOP
label_4e1e48:
    // 0x4e1e48: 0x3a3a7453  xori        $k0, $s1, 0x7453
    ctx->pc = 0x4e1e48u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29779);
label_4e1e4c:
    // 0x4e1e4c: 0x79616c50  lq          $at, 0x6C50($t3)
    ctx->pc = 0x4e1e4cu;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 11), 27728)));
label_4e1e50:
    // 0x4e1e50: 0x0  nop
    ctx->pc = 0x4e1e50u;
    // NOP
label_4e1e54:
    // 0x4e1e54: 0x0  nop
    ctx->pc = 0x4e1e54u;
    // NOP
label_4e1e58:
    // 0x4e1e58: 0x74736f70  .word       0x74736F70                   # INVALID     $v1, $s3, 0x6F70 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1e58u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1E58 raw=0x74736F70");
label_4e1e5c:
    // 0x4e1e5c: 0x6e69632e  ldr         $t1, 0x632E($s3)
    ctx->pc = 0x4e1e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25390); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e1e60:
    // 0x4e1e60: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1e60u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e1e64:
    // 0x4e1e64: 0x0  nop
    ctx->pc = 0x4e1e64u;
    // NOP
label_4e1e68:
    // 0x4e1e68: 0x0  nop
    ctx->pc = 0x4e1e68u;
    // NOP
label_4e1e6c:
    // 0x4e1e6c: 0x0  nop
    ctx->pc = 0x4e1e6cu;
    // NOP
label_4e1e70:
    // 0x4e1e70: 0x6576656c  daddiu      $s6, $t3, 0x656C
    ctx->pc = 0x4e1e70u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25964);
label_4e1e74:
    // 0x4e1e74: 0x75632e6c  .word       0x75632E6C                   # INVALID     $t3, $v1, 0x2E6C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1e74u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1E74 raw=0x75632E6C");
label_4e1e78:
    // 0x4e1e78: 0x6e657272  ldr         $a1, 0x7272($s3)
    ctx->pc = 0x4e1e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29298); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4e1e7c:
    // 0x4e1e7c: 0x75662e74  .word       0x75662E74                   # INVALID     $t3, $a2, 0x2E74 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1e7cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1E7C raw=0x75662E74");
label_4e1e80:
    // 0x4e1e80: 0x61706c6c  daddi       $s0, $t3, 0x6C6C
    ctx->pc = 0x4e1e80u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27756; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_4e1e84:
    // 0x4e1e84: 0x616e6874  daddi       $t6, $t3, 0x6874
    ctx->pc = 0x4e1e84u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26740; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4e1e88:
    // 0x4e1e88: 0x656d  .word       0x0000656D                   # daddu       $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1e88u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e1e8c:
    // 0x4e1e8c: 0x0  nop
    ctx->pc = 0x4e1e8cu;
    // NOP
label_4e1e90:
    // 0x4e1e90: 0x7578756c  .word       0x7578756C                   # INVALID     $t3, $t8, 0x756C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1e90u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1E90 raw=0x7578756C");
label_4e1e94:
    // 0x4e1e94: 0x68737972  ldl         $s3, 0x7972($v1)
    ctx->pc = 0x4e1e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31090); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_4e1e98:
    // 0x4e1e98: 0x706f  .word       0x0000706F                   # dsubu       $t6, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1e98u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_4e1e9c:
    // 0x4e1e9c: 0x0  nop
    ctx->pc = 0x4e1e9cu;
    // NOP
label_4e1ea0:
    // 0x4e1ea0: 0x6e656465  ldr         $a1, 0x6465($s3)
    ctx->pc = 0x4e1ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25701); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4e1ea4:
    // 0x4e1ea4: 0x62756c63  daddi       $s5, $s3, 0x6C63
    ctx->pc = 0x4e1ea4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)27747; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_4e1ea8:
    // 0x4e1ea8: 0x0  nop
    ctx->pc = 0x4e1ea8u;
    // NOP
label_4e1eac:
    // 0x4e1eac: 0x0  nop
    ctx->pc = 0x4e1eacu;
    // NOP
label_4e1eb0:
    // 0x4e1eb0: 0x61637365  daddi       $v1, $t3, 0x7365
    ctx->pc = 0x4e1eb0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29541; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_4e1eb4:
    // 0x4e1eb4: 0x746f6772  .word       0x746F6772                   # INVALID     $v1, $t7, 0x6772 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1eb4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1EB4 raw=0x746F6772");
label_4e1eb8:
    // 0x4e1eb8: 0x0  nop
    ctx->pc = 0x4e1eb8u;
    // NOP
label_4e1ebc:
    // 0x4e1ebc: 0x0  nop
    ctx->pc = 0x4e1ebcu;
    // NOP
label_4e1ec0:
    // 0x4e1ec0: 0x73757274  .word       0x73757274                   # psllh       $t6, $s5, 9 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1ec0u;
    SET_GPR_VEC(ctx, 14, _mm_slli_epi16(GPR_VEC(ctx, 21), 9));
label_4e1ec4:
    // 0x4e1ec4: 0x70726374  .word       0x70726374                   # psllh       $t4, $s2, 13 # 00600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1ec4u;
    SET_GPR_VEC(ctx, 12, _mm_slli_epi16(GPR_VEC(ctx, 18), 13));
label_4e1ec8:
    // 0x4e1ec8: 0x0  nop
    ctx->pc = 0x4e1ec8u;
    // NOP
label_4e1ecc:
    // 0x4e1ecc: 0x0  nop
    ctx->pc = 0x4e1eccu;
    // NOP
label_4e1ed0:
    // 0x4e1ed0: 0x61657264  daddi       $a1, $t3, 0x7264
    ctx->pc = 0x4e1ed0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29284; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e1ed4:
    // 0x4e1ed4: 0x676e616d  daddiu      $t6, $k1, 0x616D
    ctx->pc = 0x4e1ed4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24941);
label_4e1ed8:
    // 0x4e1ed8: 0x7972  tlt         $zero, $zero, 485
    ctx->pc = 0x4e1ed8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e1edc:
    // 0x4e1edc: 0x0  nop
    ctx->pc = 0x4e1edcu;
    // NOP
label_4e1ee0:
    // 0x4e1ee0: 0x61657264  daddi       $a1, $t3, 0x7264
    ctx->pc = 0x4e1ee0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29284; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e1ee4:
    // 0x4e1ee4: 0x766e656d  .word       0x766E656D                   # INVALID     $s3, $t6, 0x656D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1ee4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1EE4 raw=0x766E656D");
label_4e1ee8:
    // 0x4e1ee8: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1ee8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x4E1EE8 raw=0x00000079");
label_4e1eec:
    // 0x4e1eec: 0x0  nop
    ctx->pc = 0x4e1eecu;
    // NOP
label_4e1ef0:
    // 0x4e1ef0: 0x78756c64  lq          $s5, 0x6C64($v1)
    ctx->pc = 0x4e1ef0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 3), 27748)));
label_4e1ef4:
    // 0x4e1ef4: 0x706f6873  .word       0x706F6873                   # INVALID     $v1, $t7, 0x6873 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1ef4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4E1EF4 raw=0x706F6873");
label_4e1ef8:
    // 0x4e1ef8: 0x0  nop
    ctx->pc = 0x4e1ef8u;
    // NOP
label_4e1efc:
    // 0x4e1efc: 0x0  nop
    ctx->pc = 0x4e1efcu;
    // NOP
label_4e1f00:
    // 0x4e1f00: 0x61657264  daddi       $a1, $t3, 0x7264
    ctx->pc = 0x4e1f00u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29284; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e1f04:
    // 0x4e1f04: 0x6f6c676d  ldr         $t4, 0x676D($k1)
    ctx->pc = 0x4e1f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26477); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_4e1f08:
    // 0x4e1f08: 0x6e6f7475  ldr         $t7, 0x7475($s3)
    ctx->pc = 0x4e1f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29813); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e1f0c:
    // 0x4e1f0c: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1f0cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x4E1F0C raw=0x00000079");
label_4e1f10:
    // 0x4e1f10: 0x63736564  daddi       $s3, $k1, 0x6564
    ctx->pc = 0x4e1f10u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25956; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_4e1f14:
    // 0x4e1f14: 0x6f677261  ldr         $a3, 0x7261($k1)
    ctx->pc = 0x4e1f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_4e1f18:
    // 0x4e1f18: 0x0  nop
    ctx->pc = 0x4e1f18u;
    // NOP
label_4e1f1c:
    // 0x4e1f1c: 0x0  nop
    ctx->pc = 0x4e1f1cu;
    // NOP
label_4e1f20:
    // 0x4e1f20: 0x61657264  daddi       $a1, $t3, 0x7264
    ctx->pc = 0x4e1f20u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29284; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e1f24:
    // 0x4e1f24: 0x6572676d  daddiu      $s2, $t3, 0x676D
    ctx->pc = 0x4e1f24u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26477);
label_4e1f28:
    // 0x4e1f28: 0x6465  .word       0x00006465                   # move        $t4, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1f28u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e1f2c:
    // 0x4e1f2c: 0x0  nop
    ctx->pc = 0x4e1f2cu;
    // NOP
label_4e1f30:
    // 0x4e1f30: 0x75727464  .word       0x75727464                   # INVALID     $t3, $s2, 0x7464 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1f30u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1F30 raw=0x75727464");
label_4e1f34:
    // 0x4e1f34: 0x6f637473  ldr         $v1, 0x7473($k1)
    ctx->pc = 0x4e1f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29811); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4e1f38:
    // 0x4e1f38: 0x0  nop
    ctx->pc = 0x4e1f38u;
    // NOP
label_4e1f3c:
    // 0x4e1f3c: 0x0  nop
    ctx->pc = 0x4e1f3cu;
    // NOP
label_4e1f40:
    // 0x4e1f40: 0x61657264  daddi       $a1, $t3, 0x7264
    ctx->pc = 0x4e1f40u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29284; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e1f44:
    // 0x4e1f44: 0x6972706d  ldl         $s2, 0x706D($t3)
    ctx->pc = 0x4e1f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28781); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_4e1f48:
    // 0x4e1f48: 0x6564  .word       0x00006564                   # and         $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1f48u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_4e1f4c:
    // 0x4e1f4c: 0x0  nop
    ctx->pc = 0x4e1f4cu;
    // NOP
label_4e1f50:
    // 0x4e1f50: 0x65646564  daddiu      $a0, $t3, 0x6564
    ctx->pc = 0x4e1f50u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25956);
label_4e1f54:
    // 0x4e1f54: 0x626c636e  daddi       $t4, $s3, 0x636E
    ctx->pc = 0x4e1f54u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)25454; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_4e1f58:
    // 0x4e1f58: 0x0  nop
    ctx->pc = 0x4e1f58u;
    // NOP
label_4e1f5c:
    // 0x4e1f5c: 0x0  nop
    ctx->pc = 0x4e1f5cu;
    // NOP
label_4e1f60:
    // 0x4e1f60: 0x61657264  daddi       $a1, $t3, 0x7264
    ctx->pc = 0x4e1f60u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29284; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e1f64:
    // 0x4e1f64: 0x78756c6d  lq          $s5, 0x6C6D($v1)
    ctx->pc = 0x4e1f64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 3), 27757)));
label_4e1f68:
    // 0x4e1f68: 0x0  nop
    ctx->pc = 0x4e1f68u;
    // NOP
label_4e1f6c:
    // 0x4e1f6c: 0x0  nop
    ctx->pc = 0x4e1f6cu;
    // NOP
label_4e1f70:
    // 0x4e1f70: 0x505f474d  beql        $v0, $ra, . + 4 + (0x474D << 2)
label_4e1f74:
    if (ctx->pc == 0x4E1F74u) {
        ctx->pc = 0x4E1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1F70u;
        // 0x4e1f74: 0x6d616a79  ldr         $at, 0x6A79($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 27257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1F78u;
        goto label_4e1f78;
    }
    ctx->pc = 0x4E1F70u;
    {
        const bool branch_taken_0x4e1f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 31));
        if (branch_taken_0x4e1f70) {
            ctx->pc = 0x4E1F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1F70u;
            // 0x4e1f74: 0x6d616a79  ldr         $at, 0x6A79($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 27257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F3CA8u;
            return;
        }
    }
    ctx->pc = 0x4E1F78u;
label_4e1f78:
    // 0x4e1f78: 0x74535f61  .word       0x74535F61                   # INVALID     $v0, $s3, 0x5F61 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1f78u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1F78 raw=0x74535F61");
label_4e1f7c:
    // 0x4e1f7c: 0x747261  .word       0x00747261                   # addu        $t6, $v1, $s4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1f7cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_4e1f80:
    // 0x4e1f80: 0x455f474d  .word       0x455F474D                   # INVALID     $t2, $ra, 0x474D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e1f80u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xD at 0x4E1F80 raw=0x455F474D");
label_4e1f84:
    // 0x4e1f84: 0x69746f72  ldl         $s4, 0x6F72($t3)
    ctx->pc = 0x4e1f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28530); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_4e1f88:
    // 0x4e1f88: 0x65724463  daddiu      $s2, $t3, 0x4463
    ctx->pc = 0x4e1f88u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17507);
label_4e1f8c:
    // 0x4e1f8c: 0x735f6d61  .word       0x735F6D61                   # maddu1      $t5, $k0, $ra # 00000540 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1f8cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 26) * (uint64_t)GPR_U32(ctx, 31); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_4e1f90:
    // 0x4e1f90: 0x74726174  .word       0x74726174                   # INVALID     $v1, $s2, 0x6174 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1f90u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1F90 raw=0x74726174");
label_4e1f94:
    // 0x4e1f94: 0x0  nop
    ctx->pc = 0x4e1f94u;
    // NOP
label_4e1f98:
    // 0x4e1f98: 0x3a3a7453  xori        $k0, $s1, 0x7453
    ctx->pc = 0x4e1f98u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29779);
label_4e1f9c:
    // 0x4e1f9c: 0x79616c50  lq          $at, 0x6C50($t3)
    ctx->pc = 0x4e1f9cu;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 11), 27728)));
label_4e1fa0:
    // 0x4e1fa0: 0x6e657241  ldr         $a1, 0x7241($s3)
    ctx->pc = 0x4e1fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29249); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4e1fa4:
    // 0x4e1fa4: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1fa4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_4e1fa8:
    // 0x4e1fa8: 0x3a3a7453  xori        $k0, $s1, 0x7453
    ctx->pc = 0x4e1fa8u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29779);
label_4e1fac:
    // 0x4e1fac: 0x79616c50  lq          $at, 0x6C50($t3)
    ctx->pc = 0x4e1facu;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 11), 27728)));
label_4e1fb0:
    // 0x4e1fb0: 0x6e69435f  ldr         $t1, 0x435F($s3)
    ctx->pc = 0x4e1fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e1fb4:
    // 0x4e1fb4: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1fb4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e1fb8:
    // 0x4e1fb8: 0x0  nop
    ctx->pc = 0x4e1fb8u;
    // NOP
label_4e1fbc:
    // 0x4e1fbc: 0x0  nop
    ctx->pc = 0x4e1fbcu;
    // NOP
label_4e1fc0:
    // 0x4e1fc0: 0x6576656c  daddiu      $s6, $t3, 0x656C
    ctx->pc = 0x4e1fc0u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25964);
label_4e1fc4:
    // 0x4e1fc4: 0x75632e6c  .word       0x75632E6C                   # INVALID     $t3, $v1, 0x2E6C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1fc4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1FC4 raw=0x75632E6C");
label_4e1fc8:
    // 0x4e1fc8: 0x6e657272  ldr         $a1, 0x7272($s3)
    ctx->pc = 0x4e1fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29298); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4e1fcc:
    // 0x4e1fcc: 0x75662e74  .word       0x75662E74                   # INVALID     $t3, $a2, 0x2E74 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1fccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1FCC raw=0x75662E74");
label_4e1fd0:
    // 0x4e1fd0: 0x61706c6c  daddi       $s0, $t3, 0x6C6C
    ctx->pc = 0x4e1fd0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27756; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_4e1fd4:
    // 0x4e1fd4: 0x616e6874  daddi       $t6, $t3, 0x6874
    ctx->pc = 0x4e1fd4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26740; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4e1fd8:
    // 0x4e1fd8: 0x656d  .word       0x0000656D                   # daddu       $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1fd8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e1fdc:
    // 0x4e1fdc: 0x0  nop
    ctx->pc = 0x4e1fdcu;
    // NOP
label_4e1fe0:
    // 0x4e1fe0: 0x7578756c  .word       0x7578756C                   # INVALID     $t3, $t8, 0x756C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1fe0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1FE0 raw=0x7578756C");
label_4e1fe4:
    // 0x4e1fe4: 0x68737972  ldl         $s3, 0x7972($v1)
    ctx->pc = 0x4e1fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31090); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_4e1fe8:
    // 0x4e1fe8: 0x706f  .word       0x0000706F                   # dsubu       $t6, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1fe8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_4e1fec:
    // 0x4e1fec: 0x0  nop
    ctx->pc = 0x4e1fecu;
    // NOP
label_4e1ff0:
    // 0x4e1ff0: 0x6e656465  ldr         $a1, 0x6465($s3)
    ctx->pc = 0x4e1ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25701); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4e1ff4:
    // 0x4e1ff4: 0x62756c63  daddi       $s5, $s3, 0x6C63
    ctx->pc = 0x4e1ff4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)27747; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_4e1ff8:
    // 0x4e1ff8: 0x0  nop
    ctx->pc = 0x4e1ff8u;
    // NOP
label_4e1ffc:
    // 0x4e1ffc: 0x0  nop
    ctx->pc = 0x4e1ffcu;
    // NOP
label_4e2000:
    // 0x4e2000: 0x61637365  daddi       $v1, $t3, 0x7365
    ctx->pc = 0x4e2000u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29541; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_4e2004:
    // 0x4e2004: 0x746f6772  .word       0x746F6772                   # INVALID     $v1, $t7, 0x6772 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2004u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2004 raw=0x746F6772");
label_4e2008:
    // 0x4e2008: 0x0  nop
    ctx->pc = 0x4e2008u;
    // NOP
label_4e200c:
    // 0x4e200c: 0x0  nop
    ctx->pc = 0x4e200cu;
    // NOP
label_4e2010:
    // 0x4e2010: 0x73757274  .word       0x73757274                   # psllh       $t6, $s5, 9 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e2010u;
    SET_GPR_VEC(ctx, 14, _mm_slli_epi16(GPR_VEC(ctx, 21), 9));
label_4e2014:
    // 0x4e2014: 0x70726374  .word       0x70726374                   # psllh       $t4, $s2, 13 # 00600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e2014u;
    SET_GPR_VEC(ctx, 12, _mm_slli_epi16(GPR_VEC(ctx, 18), 13));
label_4e2018:
    // 0x4e2018: 0x0  nop
    ctx->pc = 0x4e2018u;
    // NOP
label_4e201c:
    // 0x4e201c: 0x0  nop
    ctx->pc = 0x4e201cu;
    // NOP
label_4e2020:
    // 0x4e2020: 0x61657264  daddi       $a1, $t3, 0x7264
    ctx->pc = 0x4e2020u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29284; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e2024:
    // 0x4e2024: 0x676e616d  daddiu      $t6, $k1, 0x616D
    ctx->pc = 0x4e2024u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24941);
label_4e2028:
    // 0x4e2028: 0x7972  tlt         $zero, $zero, 485
    ctx->pc = 0x4e2028u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e202c:
    // 0x4e202c: 0x0  nop
    ctx->pc = 0x4e202cu;
    // NOP
label_4e2030:
    // 0x4e2030: 0x61657264  daddi       $a1, $t3, 0x7264
    ctx->pc = 0x4e2030u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29284; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e2034:
    // 0x4e2034: 0x766e656d  .word       0x766E656D                   # INVALID     $s3, $t6, 0x656D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2034u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2034 raw=0x766E656D");
label_4e2038:
    // 0x4e2038: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2038u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x4E2038 raw=0x00000079");
label_4e203c:
    // 0x4e203c: 0x0  nop
    ctx->pc = 0x4e203cu;
    // NOP
label_4e2040:
    // 0x4e2040: 0x78756c64  lq          $s5, 0x6C64($v1)
    ctx->pc = 0x4e2040u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 3), 27748)));
label_4e2044:
    // 0x4e2044: 0x706f6873  .word       0x706F6873                   # INVALID     $v1, $t7, 0x6873 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e2044u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4E2044 raw=0x706F6873");
label_4e2048:
    // 0x4e2048: 0x0  nop
    ctx->pc = 0x4e2048u;
    // NOP
label_4e204c:
    // 0x4e204c: 0x0  nop
    ctx->pc = 0x4e204cu;
    // NOP
label_4e2050:
    // 0x4e2050: 0x61657264  daddi       $a1, $t3, 0x7264
    ctx->pc = 0x4e2050u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29284; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e2054:
    // 0x4e2054: 0x6f6c676d  ldr         $t4, 0x676D($k1)
    ctx->pc = 0x4e2054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26477); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_4e2058:
    // 0x4e2058: 0x6e6f7475  ldr         $t7, 0x7475($s3)
    ctx->pc = 0x4e2058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29813); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e205c:
    // 0x4e205c: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e205cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x4E205C raw=0x00000079");
label_4e2060:
    // 0x4e2060: 0x63736564  daddi       $s3, $k1, 0x6564
    ctx->pc = 0x4e2060u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25956; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_4e2064:
    // 0x4e2064: 0x6f677261  ldr         $a3, 0x7261($k1)
    ctx->pc = 0x4e2064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_4e2068:
    // 0x4e2068: 0x0  nop
    ctx->pc = 0x4e2068u;
    // NOP
label_4e206c:
    // 0x4e206c: 0x0  nop
    ctx->pc = 0x4e206cu;
    // NOP
label_4e2070:
    // 0x4e2070: 0x61657264  daddi       $a1, $t3, 0x7264
    ctx->pc = 0x4e2070u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29284; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e2074:
    // 0x4e2074: 0x6572676d  daddiu      $s2, $t3, 0x676D
    ctx->pc = 0x4e2074u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26477);
label_4e2078:
    // 0x4e2078: 0x6465  .word       0x00006465                   # move        $t4, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2078u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e207c:
    // 0x4e207c: 0x0  nop
    ctx->pc = 0x4e207cu;
    // NOP
label_4e2080:
    // 0x4e2080: 0x75727464  .word       0x75727464                   # INVALID     $t3, $s2, 0x7464 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2080u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2080 raw=0x75727464");
label_4e2084:
    // 0x4e2084: 0x6f637473  ldr         $v1, 0x7473($k1)
    ctx->pc = 0x4e2084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29811); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4e2088:
    // 0x4e2088: 0x0  nop
    ctx->pc = 0x4e2088u;
    // NOP
label_4e208c:
    // 0x4e208c: 0x0  nop
    ctx->pc = 0x4e208cu;
    // NOP
label_4e2090:
    // 0x4e2090: 0x61657264  daddi       $a1, $t3, 0x7264
    ctx->pc = 0x4e2090u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29284; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e2094:
    // 0x4e2094: 0x6f6c736d  ldr         $t4, 0x736D($k1)
    ctx->pc = 0x4e2094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29549); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_4e2098:
    // 0x4e2098: 0x6874  teq         $zero, $zero, 417
    ctx->pc = 0x4e2098u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e209c:
    // 0x4e209c: 0x0  nop
    ctx->pc = 0x4e209cu;
    // NOP
label_4e20a0:
    // 0x4e20a0: 0x61657264  daddi       $a1, $t3, 0x7264
    ctx->pc = 0x4e20a0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29284; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e20a4:
    // 0x4e20a4: 0x78756c6d  lq          $s5, 0x6C6D($v1)
    ctx->pc = 0x4e20a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 3), 27757)));
label_4e20a8:
    // 0x4e20a8: 0x0  nop
    ctx->pc = 0x4e20a8u;
    // NOP
label_4e20ac:
    // 0x4e20ac: 0x0  nop
    ctx->pc = 0x4e20acu;
    // NOP
label_4e20b0:
    // 0x4e20b0: 0x6369765f  daddi       $t1, $k1, 0x765F
    ctx->pc = 0x4e20b0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)30303; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_4e20b4:
    // 0x4e20b4: 0x79726f74  lq          $s2, 0x6F74($t3)
    ctx->pc = 0x4e20b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 11), 28532)));
label_4e20b8:
    // 0x4e20b8: 0x0  nop
    ctx->pc = 0x4e20b8u;
    // NOP
label_4e20bc:
    // 0x4e20bc: 0x0  nop
    ctx->pc = 0x4e20bcu;
    // NOP
label_4e20c0:
    // 0x4e20c0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e20c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e20c4:
    // 0x4e20c4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e20c4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e20c8:
    // 0x4e20c8: 0x6e69635c  ldr         $t1, 0x635C($s3)
    ctx->pc = 0x4e20c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25436); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e20cc:
    // 0x4e20cc: 0x5c7365  .word       0x005C7365                   # or          $t6, $v0, $gp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e20ccu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) | GPR_U64(ctx, 28));
label_4e20d0:
    // 0x4e20d0: 0x72746e69  .word       0x72746E69                   # INVALID     $s3, $s4, 0x6E69 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x4e20d0u;
    throw std::runtime_error("Unhandled MMI3 instruction: function 0x19 at 0x4E20D0 raw=0x72746E69");
label_4e20d4:
    // 0x4e20d4: 0x635f386f  daddi       $ra, $k0, 0x386F
    ctx->pc = 0x4e20d4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)14447; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_4e20d8:
    // 0x4e20d8: 0x69646572  ldl         $a0, 0x6572($t3)
    ctx->pc = 0x4e20d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25970); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4e20dc:
    // 0x4e20dc: 0x7374  teq         $zero, $zero, 461
    ctx->pc = 0x4e20dcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e20e0:
    // 0x4e20e0: 0x3a3a7453  xori        $k0, $s1, 0x7453
    ctx->pc = 0x4e20e0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29779);
label_4e20e4:
    // 0x4e20e4: 0x73697243  .word       0x73697243                   # INVALID     $k1, $t1, 0x7243 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e20e4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 9); uint64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_4e20e8:
    // 0x4e20e8: 0x7369  .word       0x00007369                   # mtsa        $zero # 00007340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e20e8u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_4e20ec:
    // 0x4e20ec: 0x0  nop
    ctx->pc = 0x4e20ecu;
    // NOP
label_4e20f0:
    // 0x4e20f0: 0x3a3a7453  xori        $k0, $s1, 0x7453
    ctx->pc = 0x4e20f0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29779);
label_4e20f4:
    // 0x4e20f4: 0x79616c50  lq          $at, 0x6C50($t3)
    ctx->pc = 0x4e20f4u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 11), 27728)));
label_4e20f8:
    // 0x4e20f8: 0x62626f52  daddi       $v0, $s3, 0x6F52
    ctx->pc = 0x4e20f8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)28498; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_4e20fc:
    // 0x4e20fc: 0x797265  .word       0x00797265                   # or          $t6, $v1, $t9 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e20fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) | GPR_U64(ctx, 25));
label_4e2100:
    // 0x4e2100: 0x3a3a7453  xori        $k0, $s1, 0x7453
    ctx->pc = 0x4e2100u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29779);
label_4e2104:
    // 0x4e2104: 0x50657250  beql        $v1, $a1, . + 4 + (0x7250 << 2)
label_4e2108:
    if (ctx->pc == 0x4E2108u) {
        ctx->pc = 0x4E2108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2104u;
        // 0x4e2108: 0x79616c  .word       0x0079616C                   # dadd        $t4, $v1, $t9 # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 25); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E210Cu;
        goto label_4e210c;
    }
    ctx->pc = 0x4E2104u;
    {
        const bool branch_taken_0x4e2104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x4e2104) {
            ctx->pc = 0x4E2108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2104u;
            // 0x4e2108: 0x79616c  .word       0x0079616C                   # dadd        $t4, $v1, $t9 # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 25); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FEA48u;
            return;
        }
    }
    ctx->pc = 0x4E210Cu;
label_4e210c:
    // 0x4e210c: 0x0  nop
    ctx->pc = 0x4e210cu;
    // NOP
label_4e2110:
    // 0x4e2110: 0x656c6966  daddiu      $t4, $t3, 0x6966
    ctx->pc = 0x4e2110u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26982);
label_4e2114:
    // 0x4e2114: 0x656d616e  daddiu      $t5, $t3, 0x616E
    ctx->pc = 0x4e2114u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
label_4e2118:
    // 0x4e2118: 0x0  nop
    ctx->pc = 0x4e2118u;
    // NOP
label_4e211c:
    // 0x4e211c: 0x0  nop
    ctx->pc = 0x4e211cu;
    // NOP
label_4e2120:
    // 0x4e2120: 0x50414d5c  beql        $v0, $at, . + 4 + (0x4D5C << 2)
label_4e2124:
    if (ctx->pc == 0x4E2124u) {
        ctx->pc = 0x4E2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2120u;
        // 0x4e2124: 0x5337542e  beql        $t9, $s7, . + 4 + (0x542E << 2) (Delay Slot)
        // Likely branch instruction at 0x4E2124 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2128u;
        goto label_4e2128;
    }
    ctx->pc = 0x4E2120u;
    {
        const bool branch_taken_0x4e2120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 1));
        if (branch_taken_0x4e2120) {
            ctx->pc = 0x4E2124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2120u;
            // 0x4e2124: 0x5337542e  beql        $t9, $s7, . + 4 + (0x542E << 2) (Delay Slot)
            // Likely branch instruction at 0x4E2124 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F5694u;
            return;
        }
    }
    ctx->pc = 0x4E2128u;
label_4e2128:
    // 0x4e2128: 0x0  nop
    ctx->pc = 0x4e2128u;
    // NOP
label_4e212c:
    // 0x4e212c: 0x0  nop
    ctx->pc = 0x4e212cu;
    // NOP
label_4e2130:
    // 0x4e2130: 0x61657261  daddi       $a1, $t3, 0x7261
    ctx->pc = 0x4e2130u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29281; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e2134:
    // 0x4e2134: 0x78756c5f  lq          $s5, 0x6C5F($v1)
    ctx->pc = 0x4e2134u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 3), 27743)));
label_4e2138:
    // 0x4e2138: 0x73797275  .word       0x73797275                   # INVALID     $k1, $t9, 0x7275 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e2138u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x4E2138 raw=0x73797275");
label_4e213c:
    // 0x4e213c: 0x706f68  .word       0x00706F68                   # mfsa        $t5 # 00700740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e213cu;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_4e2140:
    // 0x4e2140: 0x61657261  daddi       $a1, $t3, 0x7261
    ctx->pc = 0x4e2140u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29281; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e2144:
    // 0x4e2144: 0x6564655f  daddiu      $a0, $t3, 0x655F
    ctx->pc = 0x4e2144u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25951);
label_4e2148:
    // 0x4e2148: 0x756c636e  .word       0x756C636E                   # INVALID     $t3, $t4, 0x636E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2148u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2148 raw=0x756C636E");
label_4e214c:
    // 0x4e214c: 0x62  .word       0x00000062                   # neg         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e214cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_4e2150:
    // 0x4e2150: 0x61657261  daddi       $a1, $t3, 0x7261
    ctx->pc = 0x4e2150u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29281; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e2154:
    // 0x4e2154: 0x616c705f  daddi       $t4, $t3, 0x705F
    ctx->pc = 0x4e2154u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28767; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_4e2158:
    // 0x4e2158: 0x73726579  .word       0x73726579                   # INVALID     $k1, $s2, 0x6579 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e2158u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x39 at 0x4E2158 raw=0x73726579");
label_4e215c:
    // 0x4e215c: 0x74616c66  .word       0x74616C66                   # INVALID     $v1, $at, 0x6C66 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e215cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E215C raw=0x74616C66");
label_4e2160:
    // 0x4e2160: 0x0  nop
    ctx->pc = 0x4e2160u;
    // NOP
label_4e2164:
    // 0x4e2164: 0x0  nop
    ctx->pc = 0x4e2164u;
    // NOP
label_4e2168:
    // 0x4e2168: 0x61657261  daddi       $a1, $t3, 0x7261
    ctx->pc = 0x4e2168u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29281; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e216c:
    // 0x4e216c: 0x7361655f  .word       0x7361655F                   # INVALID     $k1, $at, 0x655F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e216cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x4E216C raw=0x7361655F");
label_4e2170:
    // 0x4e2170: 0x6e697774  ldr         $t1, 0x7774($s3)
    ctx->pc = 0x4e2170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30580); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e2174:
    // 0x4e2174: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2174u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_4e2178:
    // 0x4e2178: 0x61657261  daddi       $a1, $t3, 0x7261
    ctx->pc = 0x4e2178u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29281; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e217c:
    // 0x4e217c: 0x6f70735f  ldr         $s0, 0x735F($k1)
    ctx->pc = 0x4e217cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_4e2180:
    // 0x4e2180: 0x6c637472  ldr         $v1, 0x7472($v1)
    ctx->pc = 0x4e2180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29810); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4e2184:
    // 0x4e2184: 0x6275  .word       0x00006275                   # INVALID     $zero, $zero, 0x6275 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2184u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x4E2184 raw=0x00006275");
label_4e2188:
    // 0x4e2188: 0x61657261  daddi       $a1, $t3, 0x7261
    ctx->pc = 0x4e2188u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29281; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e218c:
    // 0x4e218c: 0x6373655f  daddi       $s3, $k1, 0x655F
    ctx->pc = 0x4e218cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25951; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_4e2190:
    // 0x4e2190: 0x6f677261  ldr         $a3, 0x7261($k1)
    ctx->pc = 0x4e2190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_4e2194:
    // 0x4e2194: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4e2194u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e2198:
    // 0x4e2198: 0x61657261  daddi       $a1, $t3, 0x7261
    ctx->pc = 0x4e2198u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29281; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e219c:
    // 0x4e219c: 0x6572665f  daddiu      $s2, $t3, 0x665F
    ctx->pc = 0x4e219cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26207);
label_4e21a0:
    // 0x4e21a0: 0x72706873  .word       0x72706873                   # INVALID     $s3, $s0, 0x6873 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e21a0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4E21A0 raw=0x72706873");
label_4e21a4:
    // 0x4e21a4: 0x646f  .word       0x0000646F                   # dsubu       $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e21a4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_4e21a8:
    // 0x4e21a8: 0x0  nop
    ctx->pc = 0x4e21a8u;
    // NOP
label_4e21ac:
    // 0x4e21ac: 0x0  nop
    ctx->pc = 0x4e21acu;
    // NOP
label_4e21b0:
    // 0x4e21b0: 0x6576656c  daddiu      $s6, $t3, 0x656C
    ctx->pc = 0x4e21b0u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25964);
label_4e21b4:
    // 0x4e21b4: 0x61622e6c  daddi       $v0, $t3, 0x2E6C
    ctx->pc = 0x4e21b4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)11884; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_4e21b8:
    // 0x4e21b8: 0x70756b63  .word       0x70756B63                   # INVALID     $v1, $s5, 0x6B63 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e21b8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4E21B8 raw=0x70756B63");
label_4e21bc:
    // 0x4e21bc: 0x6a6e702e  ldl         $t6, 0x702E($s3)
    ctx->pc = 0x4e21bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28718); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4e21c0:
    // 0x4e21c0: 0x7473696c  .word       0x7473696C                   # INVALID     $v1, $s3, 0x696C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e21c0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E21C0 raw=0x7473696C");
label_4e21c4:
    // 0x4e21c4: 0x0  nop
    ctx->pc = 0x4e21c4u;
    // NOP
label_4e21c8:
    // 0x4e21c8: 0x0  nop
    ctx->pc = 0x4e21c8u;
    // NOP
label_4e21cc:
    // 0x4e21cc: 0x0  nop
    ctx->pc = 0x4e21ccu;
    // NOP
label_4e21d0:
    // 0x4e21d0: 0x6576656c  daddiu      $s6, $t3, 0x656C
    ctx->pc = 0x4e21d0u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25964);
label_4e21d4:
    // 0x4e21d4: 0x75632e6c  .word       0x75632E6C                   # INVALID     $t3, $v1, 0x2E6C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e21d4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E21D4 raw=0x75632E6C");
label_4e21d8:
    // 0x4e21d8: 0x6e657272  ldr         $a1, 0x7272($s3)
    ctx->pc = 0x4e21d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29298); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4e21dc:
    // 0x4e21dc: 0x75662e74  .word       0x75662E74                   # INVALID     $t3, $a2, 0x2E74 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e21dcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E21DC raw=0x75662E74");
label_4e21e0:
    // 0x4e21e0: 0x61706c6c  daddi       $s0, $t3, 0x6C6C
    ctx->pc = 0x4e21e0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27756; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_4e21e4:
    // 0x4e21e4: 0x616e6874  daddi       $t6, $t3, 0x6874
    ctx->pc = 0x4e21e4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26740; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4e21e8:
    // 0x4e21e8: 0x656d  .word       0x0000656D                   # daddu       $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e21e8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e21ec:
    // 0x4e21ec: 0x0  nop
    ctx->pc = 0x4e21ecu;
    // NOP
label_4e21f0:
    // 0x4e21f0: 0x206c6c61  addi        $t4, $v1, 0x6C61
    ctx->pc = 0x4e21f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27745, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_4e21f4:
    // 0x4e21f4: 0x72756f79  .word       0x72756F79                   # INVALID     $s3, $s5, 0x6F79 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e21f4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x39 at 0x4E21F4 raw=0x72756F79");
label_4e21f8:
    // 0x4e21f8: 0x73616220  .word       0x73616220                   # madd1       $t4, $k1, $at # 00000200 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e21f8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_4e21fc:
    // 0x4e21fc: 0x72612065  .word       0x72612065                   # INVALID     $s3, $at, 0x2065 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e21fcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4E21FC raw=0x72612065");
label_4e2200:
    // 0x4e2200: 0x65622065  daddiu      $v0, $t3, 0x2065
    ctx->pc = 0x4e2200u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8293);
label_4e2204:
    // 0x4e2204: 0x676e6f6c  daddiu      $t6, $k1, 0x6F6C
    ctx->pc = 0x4e2204u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28524);
label_4e2208:
    // 0x4e2208: 0x206f7420  addi        $t7, $v1, 0x7420
    ctx->pc = 0x4e2208u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29728, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_4e220c:
    // 0x4e220c: 0x7375  .word       0x00007375                   # INVALID     $zero, $zero, 0x7375 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e220cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x4E220C raw=0x00007375");
label_4e2210:
    // 0x4e2210: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x4e2210u;
    
label_4e2214:
    // 0x4e2214: 0x19000  sll         $s2, $at, 0
    ctx->pc = 0x4e2214u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_4e2218:
    // 0x4e2218: 0x12748  .word       0x00012748                   # jr          $zero # 00012740 <InstrIdType: CPU_SPECIAL>
label_4e221c:
    if (ctx->pc == 0x4E221Cu) {
        ctx->pc = 0x4E221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2218u;
        // 0x4e221c: 0x3c4  .word       0x000003C4                   # sllv        $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2220u;
        goto label_4e2220;
    }
    ctx->pc = 0x4E2218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x4E221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2218u;
        // 0x4e221c: 0x3c4  .word       0x000003C4                   # sllv        $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E2218u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4E2220u;
label_4e2220:
    // 0x4e2220: 0x0  nop
    ctx->pc = 0x4e2220u;
    // NOP
label_4e2224:
    // 0x4e2224: 0x8  jr          $zero
label_4e2228:
    if (ctx->pc == 0x4E2228u) {
        ctx->pc = 0x4E222Cu;
        goto label_4e222c;
    }
    ctx->pc = 0x4E2224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E2224u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4E222Cu;
label_4e222c:
    // 0x4e222c: 0x0  nop
    ctx->pc = 0x4e222cu;
    // NOP
label_4e2230:
    // 0x4e2230: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e2230u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x4E2230 raw=0x45435326");
label_4e2234:
    // 0x4e2234: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e2234u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E2234 raw=0x4352545F");
label_4e2238:
    // 0x4e2238: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e223c:
    if (ctx->pc == 0x4E223Cu) {
        ctx->pc = 0x4E223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2238u;
        // 0x4e223c: 0x435f434d  .word       0x435F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E223C raw=0x435F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2240u;
        goto label_4e2240;
    }
    ctx->pc = 0x4E2238u;
    {
        const bool branch_taken_0x4e2238 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e2238) {
            ctx->pc = 0x4E223Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2238u;
            // 0x4e223c: 0x435f434d  .word       0x435F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E223C raw=0x435F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6F70u;
            return;
        }
    }
    ctx->pc = 0x4E2240u;
label_4e2240:
    // 0x4e2240: 0x4b434548  vmaddx.xz   $vf21, $vf8, $vf3x
    ctx->pc = 0x4e2240u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_4e2244:
    // 0x4e2244: 0x4d474e49  .word       0x4D474E49                   # INVALID     $t2, $a3, 0x4E49 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2244u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E2244 raw=0x4D474E49");
label_4e2248:
    // 0x4e2248: 0x524f4d45  beql        $s2, $t7, . + 4 + (0x4D45 << 2)
label_4e224c:
    if (ctx->pc == 0x4E224Cu) {
        ctx->pc = 0x4E224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2248u;
        // 0x4e224c: 0x52414359  beql        $s2, $at, . + 4 + (0x4359 << 2) (Delay Slot)
        // Likely branch instruction at 0x4E224C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2250u;
        goto label_4e2250;
    }
    ctx->pc = 0x4E2248u;
    {
        const bool branch_taken_0x4e2248 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 15));
        if (branch_taken_0x4e2248) {
            ctx->pc = 0x4E224Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2248u;
            // 0x4e224c: 0x52414359  beql        $s2, $at, . + 4 + (0x4359 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E224C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F5760u;
            return;
        }
    }
    ctx->pc = 0x4E2250u;
label_4e2250:
    // 0x4e2250: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2250u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4e2254:
    // 0x4e2254: 0x0  nop
    ctx->pc = 0x4e2254u;
    // NOP
label_4e2258:
    // 0x4e2258: 0x0  nop
    ctx->pc = 0x4e2258u;
    // NOP
label_4e225c:
    // 0x4e225c: 0x0  nop
    ctx->pc = 0x4e225cu;
    // NOP
label_4e2260:
    // 0x4e2260: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e2260u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x4E2260 raw=0x45435326");
label_4e2264:
    // 0x4e2264: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e2264u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E2264 raw=0x4352545F");
label_4e2268:
    // 0x4e2268: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e226c:
    if (ctx->pc == 0x4E226Cu) {
        ctx->pc = 0x4E226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2268u;
        // 0x4e226c: 0x4e5f434d  .word       0x4E5F434D                   # INVALID     $s2, $ra, 0x434D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E226C raw=0x4E5F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2270u;
        goto label_4e2270;
    }
    ctx->pc = 0x4E2268u;
    {
        const bool branch_taken_0x4e2268 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e2268) {
            ctx->pc = 0x4E226Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2268u;
            // 0x4e226c: 0x4e5f434d  .word       0x4E5F434D                   # INVALID     $s2, $ra, 0x434D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E226C raw=0x4E5F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6FA0u;
            return;
        }
    }
    ctx->pc = 0x4E2270u;
label_4e2270:
    // 0x4e2270: 0x5641534f  bnel        $s2, $at, . + 4 + (0x534F << 2)
label_4e2274:
    if (ctx->pc == 0x4E2274u) {
        ctx->pc = 0x4E2274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2270u;
        // 0x4e2274: 0x54414445  bnel        $v0, $at, . + 4 + (0x4445 << 2) (Delay Slot)
        // Likely branch instruction at 0x4E2274 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2278u;
        goto label_4e2278;
    }
    ctx->pc = 0x4E2270u;
    {
        const bool branch_taken_0x4e2270 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 1));
        if (branch_taken_0x4e2270) {
            ctx->pc = 0x4E2274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2270u;
            // 0x4e2274: 0x54414445  bnel        $v0, $at, . + 4 + (0x4445 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E2274 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6FB0u;
            return;
        }
    }
    ctx->pc = 0x4E2278u;
label_4e2278:
    // 0x4e2278: 0x554f4641  bnel        $t2, $t7, . + 4 + (0x4641 << 2)
label_4e227c:
    if (ctx->pc == 0x4E227Cu) {
        ctx->pc = 0x4E227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2278u;
        // 0x4e227c: 0x444e  .word       0x0000444E                   # INVALID     $zero, $zero, 0x444E # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x4E227C raw=0x0000444E");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2280u;
        goto label_4e2280;
    }
    ctx->pc = 0x4E2278u;
    {
        const bool branch_taken_0x4e2278 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 15));
        if (branch_taken_0x4e2278) {
            ctx->pc = 0x4E227Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2278u;
            // 0x4e227c: 0x444e  .word       0x0000444E                   # INVALID     $zero, $zero, 0x444E # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x4E227C raw=0x0000444E");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F3B80u;
            return;
        }
    }
    ctx->pc = 0x4E2280u;
label_4e2280:
    // 0x4e2280: 0x37656854  ori         $a1, $k1, 0x6854
    ctx->pc = 0x4e2280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 27) | (uint64_t)(uint16_t)26708);
label_4e2284:
    // 0x4e2284: 0x736e6953  .word       0x736E6953                   # mtlo1       $k1 # 000E6940 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e2284u;
    ctx->lo1 = GPR_U64(ctx, 27);
label_4e2288:
    // 0x4e2288: 0x0  nop
    ctx->pc = 0x4e2288u;
    // NOP
label_4e228c:
    // 0x4e228c: 0x0  nop
    ctx->pc = 0x4e228cu;
    // NOP
label_4e2290:
    // 0x4e2290: 0x63656863  daddi       $a1, $k1, 0x6863
    ctx->pc = 0x4e2290u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26723; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e2294:
    // 0x4e2294: 0x75255f6b  .word       0x75255F6B                   # INVALID     $t1, $a1, 0x5F6B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2294u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2294 raw=0x75255F6B");
label_4e2298:
    // 0x4e2298: 0x73252e  .word       0x0073252E                   # dsub        $a0, $v1, $s3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2298u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_4e229c:
    // 0x4e229c: 0x0  nop
    ctx->pc = 0x4e229cu;
    // NOP
label_4e22a0:
    // 0x4e22a0: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e22a0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x4E22A0 raw=0x45435326");
label_4e22a4:
    // 0x4e22a4: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e22a4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E22A4 raw=0x4352545F");
label_4e22a8:
    // 0x4e22a8: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e22ac:
    if (ctx->pc == 0x4E22ACu) {
        ctx->pc = 0x4E22ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E22A8u;
        // 0x4e22ac: 0x4c5f434d  .word       0x4C5F434D                   # INVALID     $v0, $ra, 0x434D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E22AC raw=0x4C5F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E22B0u;
        goto label_4e22b0;
    }
    ctx->pc = 0x4E22A8u;
    {
        const bool branch_taken_0x4e22a8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e22a8) {
            ctx->pc = 0x4E22ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E22A8u;
            // 0x4e22ac: 0x4c5f434d  .word       0x4C5F434D                   # INVALID     $v0, $ra, 0x434D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E22AC raw=0x4C5F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6FE0u;
            return;
        }
    }
    ctx->pc = 0x4E22B0u;
label_4e22b0:
    // 0x4e22b0: 0x5f44414f  .word       0x5F44414F                   # bgtzl       $k0, . + 4 + (0x414F << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_4e22b4:
    if (ctx->pc == 0x4E22B4u) {
        ctx->pc = 0x4E22B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E22B0u;
        // 0x4e22b4: 0x52524f43  beql        $s2, $s2, . + 4 + (0x4F43 << 2) (Delay Slot)
        // Likely branch instruction at 0x4E22B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E22B8u;
        goto label_4e22b8;
    }
    ctx->pc = 0x4E22B0u;
    {
        const bool branch_taken_0x4e22b0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e22b0) {
            ctx->pc = 0x4E22B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E22B0u;
            // 0x4e22b4: 0x52524f43  beql        $s2, $s2, . + 4 + (0x4F43 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E22B4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F27F0u;
            return;
        }
    }
    ctx->pc = 0x4E22B8u;
label_4e22b8:
    // 0x4e22b8: 0x53545055  beql        $k0, $s4, . + 4 + (0x5055 << 2)
label_4e22bc:
    if (ctx->pc == 0x4E22BCu) {
        ctx->pc = 0x4E22BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E22B8u;
        // 0x4e22bc: 0x455641  .word       0x00455641                   # INVALID     $v0, $a1, 0x5641 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E22BC raw=0x00455641");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E22C0u;
        goto label_4e22c0;
    }
    ctx->pc = 0x4E22B8u;
    {
        const bool branch_taken_0x4e22b8 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 20));
        if (branch_taken_0x4e22b8) {
            ctx->pc = 0x4E22BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E22B8u;
            // 0x4e22bc: 0x455641  .word       0x00455641                   # INVALID     $v0, $a1, 0x5641 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E22BC raw=0x00455641");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6410u;
            return;
        }
    }
    ctx->pc = 0x4E22C0u;
label_4e22c0:
    // 0x4e22c0: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e22c0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x4E22C0 raw=0x45435326");
label_4e22c4:
    // 0x4e22c4: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e22c4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E22C4 raw=0x4352545F");
label_4e22c8:
    // 0x4e22c8: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e22cc:
    if (ctx->pc == 0x4E22CCu) {
        ctx->pc = 0x4E22CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E22C8u;
        // 0x4e22cc: 0x435f434d  .word       0x435F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E22CC raw=0x435F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E22D0u;
        goto label_4e22d0;
    }
    ctx->pc = 0x4E22C8u;
    {
        const bool branch_taken_0x4e22c8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e22c8) {
            ctx->pc = 0x4E22CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E22C8u;
            // 0x4e22cc: 0x435f434d  .word       0x435F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E22CC raw=0x435F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F7000u;
            return;
        }
    }
    ctx->pc = 0x4E22D0u;
label_4e22d0:
    // 0x4e22d0: 0x4b434548  vmaddx.xz   $vf21, $vf8, $vf3x
    ctx->pc = 0x4e22d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_4e22d4:
    // 0x4e22d4: 0x4c494146  .word       0x4C494146                   # INVALID     $v0, $t1, 0x4146 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e22d4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E22D4 raw=0x4C494146");
label_4e22d8:
    // 0x4e22d8: 0x4445  .word       0x00004445                   # INVALID     $zero, $zero, 0x4445 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e22d8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E22D8 raw=0x00004445");
label_4e22dc:
    // 0x4e22dc: 0x0  nop
    ctx->pc = 0x4e22dcu;
    // NOP
label_4e22e0:
    // 0x4e22e0: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e22e0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x4E22E0 raw=0x45435326");
label_4e22e4:
    // 0x4e22e4: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e22e4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E22E4 raw=0x4352545F");
label_4e22e8:
    // 0x4e22e8: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e22ec:
    if (ctx->pc == 0x4E22ECu) {
        ctx->pc = 0x4E22ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E22E8u;
        // 0x4e22ec: 0x535f434d  beql        $k0, $ra, . + 4 + (0x434D << 2) (Delay Slot)
        // Likely branch instruction at 0x4E22EC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E22F0u;
        goto label_4e22f0;
    }
    ctx->pc = 0x4E22E8u;
    {
        const bool branch_taken_0x4e22e8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e22e8) {
            ctx->pc = 0x4E22ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E22E8u;
            // 0x4e22ec: 0x535f434d  beql        $k0, $ra, . + 4 + (0x434D << 2) (Delay Slot)
            // Likely branch instruction at 0x4E22EC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F7020u;
            return;
        }
    }
    ctx->pc = 0x4E22F0u;
label_4e22f0:
    // 0x4e22f0: 0x5f455641  .word       0x5F455641                   # bgtzl       $k0, . + 4 + (0x5641 << 2) # 00050000 <InstrIdType: CPU_NORMAL>
label_4e22f4:
    if (ctx->pc == 0x4E22F4u) {
        ctx->pc = 0x4E22F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E22F0u;
        // 0x4e22f4: 0x55534e49  bnel        $t2, $s3, . + 4 + (0x4E49 << 2) (Delay Slot)
        // Likely branch instruction at 0x4E22F4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E22F8u;
        goto label_4e22f8;
    }
    ctx->pc = 0x4E22F0u;
    {
        const bool branch_taken_0x4e22f0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e22f0) {
            ctx->pc = 0x4E22F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E22F0u;
            // 0x4e22f4: 0x55534e49  bnel        $t2, $s3, . + 4 + (0x4E49 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E22F4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F7BF8u;
            return;
        }
    }
    ctx->pc = 0x4E22F8u;
label_4e22f8:
    // 0x4e22f8: 0x43494646  .word       0x43494646                   # INVALID     $k0, $t1, 0x4646 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e22f8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E22F8 raw=0x43494646");
label_4e22fc:
    // 0x4e22fc: 0x544e4549  bnel        $v0, $t6, . + 4 + (0x4549 << 2)
label_4e2300:
    if (ctx->pc == 0x4E2300u) {
        ctx->pc = 0x4E2300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E22FCu;
        // 0x4e2300: 0x43415053  .word       0x43415053                   # INVALID     $k0, $at, 0x5053 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E2300 raw=0x43415053");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2304u;
        goto label_4e2304;
    }
    ctx->pc = 0x4E22FCu;
    {
        const bool branch_taken_0x4e22fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        if (branch_taken_0x4e22fc) {
            ctx->pc = 0x4E2300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E22FCu;
            // 0x4e2300: 0x43415053  .word       0x43415053                   # INVALID     $k0, $at, 0x5053 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E2300 raw=0x43415053");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F3824u;
            return;
        }
    }
    ctx->pc = 0x4E2304u;
label_4e2304:
    // 0x4e2304: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2304u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E2304 raw=0x00000045");
label_4e2308:
    // 0x4e2308: 0x43525426  .word       0x43525426                   # INVALID     $k0, $s2, 0x5426 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e2308u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E2308 raw=0x43525426");
label_4e230c:
    // 0x4e230c: 0x7061635f  .word       0x7061635F                   # INVALID     $v1, $at, 0x635F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e230cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x4E230C raw=0x7061635F");
label_4e2310:
    // 0x4e2310: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4e2310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e2314:
    // 0x4e2314: 0x0  nop
    ctx->pc = 0x4e2314u;
    // NOP
label_4e2318:
    // 0x4e2318: 0x0  nop
    ctx->pc = 0x4e2318u;
    // NOP
label_4e231c:
    // 0x4e231c: 0x0  nop
    ctx->pc = 0x4e231cu;
    // NOP
label_4e2320:
    // 0x4e2320: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e2320u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x4E2320 raw=0x45435326");
label_4e2324:
    // 0x4e2324: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e2324u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E2324 raw=0x4352545F");
label_4e2328:
    // 0x4e2328: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e232c:
    if (ctx->pc == 0x4E232Cu) {
        ctx->pc = 0x4E232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2328u;
        // 0x4e232c: 0x425f434d  .word       0x425F434D                   # INVALID     $s2, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E232C raw=0x425F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2330u;
        goto label_4e2330;
    }
    ctx->pc = 0x4E2328u;
    {
        const bool branch_taken_0x4e2328 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e2328) {
            ctx->pc = 0x4E232Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2328u;
            // 0x4e232c: 0x425f434d  .word       0x425F434D                   # INVALID     $s2, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E232C raw=0x425F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F7060u;
            return;
        }
    }
    ctx->pc = 0x4E2330u;
label_4e2330:
    // 0x4e2330: 0x4e544f4f  .word       0x4E544F4F                   # INVALID     $s2, $s4, 0x4F4F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2330u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E2330 raw=0x4E544F4F");
label_4e2334:
    // 0x4e2334: 0x5241434f  beql        $s2, $at, . + 4 + (0x434F << 2)
label_4e2338:
    if (ctx->pc == 0x4E2338u) {
        ctx->pc = 0x4E2338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2334u;
        // 0x4e2338: 0x424e4944  .word       0x424E4944                   # INVALID     $s2, $t6, 0x4944 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E2338 raw=0x424E4944");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E233Cu;
        goto label_4e233c;
    }
    ctx->pc = 0x4E2334u;
    {
        const bool branch_taken_0x4e2334 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 1));
        if (branch_taken_0x4e2334) {
            ctx->pc = 0x4E2338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2334u;
            // 0x4e2338: 0x424e4944  .word       0x424E4944                   # INVALID     $s2, $t6, 0x4944 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E2338 raw=0x424E4944");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F3074u;
            return;
        }
    }
    ctx->pc = 0x4E233Cu;
label_4e233c:
    // 0x4e233c: 0x5048544f  beql        $v0, $t0, . + 4 + (0x544F << 2)
label_4e2340:
    if (ctx->pc == 0x4E2340u) {
        ctx->pc = 0x4E2340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E233Cu;
        // 0x4e2340: 0x5354524f  beql        $k0, $s4, . + 4 + (0x524F << 2) (Delay Slot)
        // Likely branch instruction at 0x4E2340 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2344u;
        goto label_4e2344;
    }
    ctx->pc = 0x4E233Cu;
    {
        const bool branch_taken_0x4e233c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x4e233c) {
            ctx->pc = 0x4E2340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E233Cu;
            // 0x4e2340: 0x5354524f  beql        $k0, $s4, . + 4 + (0x524F << 2) (Delay Slot)
            // Likely branch instruction at 0x4E2340 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F747Cu;
            return;
        }
    }
    ctx->pc = 0x4E2344u;
label_4e2344:
    // 0x4e2344: 0x0  nop
    ctx->pc = 0x4e2344u;
    // NOP
label_4e2348:
    // 0x4e2348: 0x0  nop
    ctx->pc = 0x4e2348u;
    // NOP
label_4e234c:
    // 0x4e234c: 0x0  nop
    ctx->pc = 0x4e234cu;
    // NOP
label_4e2350:
    // 0x4e2350: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e2350u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x4E2350 raw=0x45435326");
label_4e2354:
    // 0x4e2354: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e2354u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E2354 raw=0x4352545F");
label_4e2358:
    // 0x4e2358: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e235c:
    if (ctx->pc == 0x4E235Cu) {
        ctx->pc = 0x4E235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2358u;
        // 0x4e235c: 0x4e5f434d  .word       0x4E5F434D                   # INVALID     $s2, $ra, 0x434D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E235C raw=0x4E5F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2360u;
        goto label_4e2360;
    }
    ctx->pc = 0x4E2358u;
    {
        const bool branch_taken_0x4e2358 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e2358) {
            ctx->pc = 0x4E235Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2358u;
            // 0x4e235c: 0x4e5f434d  .word       0x4E5F434D                   # INVALID     $s2, $ra, 0x434D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E235C raw=0x4E5F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F7090u;
            return;
        }
    }
    ctx->pc = 0x4E2360u;
label_4e2360:
    // 0x4e2360: 0x5241434f  beql        $s2, $at, . + 4 + (0x434F << 2)
label_4e2364:
    if (ctx->pc == 0x4E2364u) {
        ctx->pc = 0x4E2364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2360u;
        // 0x4e2364: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2368u;
        goto label_4e2368;
    }
    ctx->pc = 0x4E2360u;
    {
        const bool branch_taken_0x4e2360 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 1));
        if (branch_taken_0x4e2360) {
            ctx->pc = 0x4E2364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2360u;
            // 0x4e2364: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F30A0u;
            return;
        }
    }
    ctx->pc = 0x4E2368u;
label_4e2368:
    // 0x4e2368: 0x0  nop
    ctx->pc = 0x4e2368u;
    // NOP
label_4e236c:
    // 0x4e236c: 0x0  nop
    ctx->pc = 0x4e236cu;
    // NOP
label_4e2370:
    // 0x4e2370: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e2370u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x4E2370 raw=0x45435326");
label_4e2374:
    // 0x4e2374: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e2374u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E2374 raw=0x4352545F");
label_4e2378:
    // 0x4e2378: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e237c:
    if (ctx->pc == 0x4E237Cu) {
        ctx->pc = 0x4E237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2378u;
        // 0x4e237c: 0x425f434d  .word       0x425F434D                   # INVALID     $s2, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E237C raw=0x425F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2380u;
        goto label_4e2380;
    }
    ctx->pc = 0x4E2378u;
    {
        const bool branch_taken_0x4e2378 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e2378) {
            ctx->pc = 0x4E237Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2378u;
            // 0x4e237c: 0x425f434d  .word       0x425F434D                   # INVALID     $s2, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E237C raw=0x425F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F70B0u;
            return;
        }
    }
    ctx->pc = 0x4E2380u;
label_4e2380:
    // 0x4e2380: 0x5f544f4f  .word       0x5F544F4F                   # bgtzl       $k0, . + 4 + (0x4F4F << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e2384:
    if (ctx->pc == 0x4E2384u) {
        ctx->pc = 0x4E2384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2380u;
        // 0x4e2384: 0x55534e49  bnel        $t2, $s3, . + 4 + (0x4E49 << 2) (Delay Slot)
        // Likely branch instruction at 0x4E2384 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2388u;
        goto label_4e2388;
    }
    ctx->pc = 0x4E2380u;
    {
        const bool branch_taken_0x4e2380 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e2380) {
            ctx->pc = 0x4E2384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2380u;
            // 0x4e2384: 0x55534e49  bnel        $t2, $s3, . + 4 + (0x4E49 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E2384 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F60C0u;
            return;
        }
    }
    ctx->pc = 0x4E2388u;
label_4e2388:
    // 0x4e2388: 0x43494646  .word       0x43494646                   # INVALID     $k0, $t1, 0x4646 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e2388u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E2388 raw=0x43494646");
label_4e238c:
    // 0x4e238c: 0x544e4549  bnel        $v0, $t6, . + 4 + (0x4549 << 2)
label_4e2390:
    if (ctx->pc == 0x4E2390u) {
        ctx->pc = 0x4E2390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E238Cu;
        // 0x4e2390: 0x43415053  .word       0x43415053                   # INVALID     $k0, $at, 0x5053 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E2390 raw=0x43415053");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2394u;
        goto label_4e2394;
    }
    ctx->pc = 0x4E238Cu;
    {
        const bool branch_taken_0x4e238c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        if (branch_taken_0x4e238c) {
            ctx->pc = 0x4E2390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E238Cu;
            // 0x4e2390: 0x43415053  .word       0x43415053                   # INVALID     $k0, $at, 0x5053 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E2390 raw=0x43415053");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F38B4u;
            return;
        }
    }
    ctx->pc = 0x4E2394u;
label_4e2394:
    // 0x4e2394: 0x544f4245  bnel        $v0, $t7, . + 4 + (0x4245 << 2)
label_4e2398:
    if (ctx->pc == 0x4E2398u) {
        ctx->pc = 0x4E2398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2394u;
        // 0x4e2398: 0x524f5048  beql        $s2, $t7, . + 4 + (0x5048 << 2) (Delay Slot)
        // Likely branch instruction at 0x4E2398 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E239Cu;
        goto label_4e239c;
    }
    ctx->pc = 0x4E2394u;
    {
        const bool branch_taken_0x4e2394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x4e2394) {
            ctx->pc = 0x4E2398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2394u;
            // 0x4e2398: 0x524f5048  beql        $s2, $t7, . + 4 + (0x5048 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E2398 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F2CACu;
            return;
        }
    }
    ctx->pc = 0x4E239Cu;
label_4e239c:
    // 0x4e239c: 0x5354  .word       0x00005354                   # dsllv       $t2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e239cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_4e23a0:
    // 0x4e23a0: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e23a0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x4E23A0 raw=0x45435326");
label_4e23a4:
    // 0x4e23a4: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e23a4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E23A4 raw=0x4352545F");
label_4e23a8:
    // 0x4e23a8: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e23ac:
    if (ctx->pc == 0x4E23ACu) {
        ctx->pc = 0x4E23ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E23A8u;
        // 0x4e23ac: 0x425f434d  .word       0x425F434D                   # INVALID     $s2, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E23AC raw=0x425F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E23B0u;
        goto label_4e23b0;
    }
    ctx->pc = 0x4E23A8u;
    {
        const bool branch_taken_0x4e23a8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e23a8) {
            ctx->pc = 0x4E23ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E23A8u;
            // 0x4e23ac: 0x425f434d  .word       0x425F434D                   # INVALID     $s2, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E23AC raw=0x425F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F70E0u;
            return;
        }
    }
    ctx->pc = 0x4E23B0u;
label_4e23b0:
    // 0x4e23b0: 0x5f544f4f  .word       0x5F544F4F                   # bgtzl       $k0, . + 4 + (0x4F4F << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e23b4:
    if (ctx->pc == 0x4E23B4u) {
        ctx->pc = 0x4E23B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E23B0u;
        // 0x4e23b4: 0x55534e49  bnel        $t2, $s3, . + 4 + (0x4E49 << 2) (Delay Slot)
        // Likely branch instruction at 0x4E23B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E23B8u;
        goto label_4e23b8;
    }
    ctx->pc = 0x4E23B0u;
    {
        const bool branch_taken_0x4e23b0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e23b0) {
            ctx->pc = 0x4E23B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E23B0u;
            // 0x4e23b4: 0x55534e49  bnel        $t2, $s3, . + 4 + (0x4E49 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E23B4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F60F0u;
            return;
        }
    }
    ctx->pc = 0x4E23B8u;
label_4e23b8:
    // 0x4e23b8: 0x43494646  .word       0x43494646                   # INVALID     $k0, $t1, 0x4646 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e23b8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E23B8 raw=0x43494646");
label_4e23bc:
    // 0x4e23bc: 0x544e4549  bnel        $v0, $t6, . + 4 + (0x4549 << 2)
label_4e23c0:
    if (ctx->pc == 0x4E23C0u) {
        ctx->pc = 0x4E23C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E23BCu;
        // 0x4e23c0: 0x43415053  .word       0x43415053                   # INVALID     $k0, $at, 0x5053 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E23C0 raw=0x43415053");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E23C4u;
        goto label_4e23c4;
    }
    ctx->pc = 0x4E23BCu;
    {
        const bool branch_taken_0x4e23bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        if (branch_taken_0x4e23bc) {
            ctx->pc = 0x4E23C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E23BCu;
            // 0x4e23c0: 0x43415053  .word       0x43415053                   # INVALID     $k0, $at, 0x5053 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E23C0 raw=0x43415053");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F38E4u;
            return;
        }
    }
    ctx->pc = 0x4E23C4u;
label_4e23c4:
    // 0x4e23c4: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e23c4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E23C4 raw=0x00000045");
label_4e23c8:
    // 0x4e23c8: 0x6772415f  daddiu      $s2, $k1, 0x415F
    ctx->pc = 0x4e23c8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)16735);
label_4e23cc:
    // 0x4e23cc: 0x746f6c53  .word       0x746F6C53                   # INVALID     $v1, $t7, 0x6C53 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e23ccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E23CC raw=0x746F6C53");
label_4e23d0:
    // 0x4e23d0: 0x6f4e  .word       0x00006F4E                   # INVALID     $zero, $zero, 0x6F4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e23d0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x4E23D0 raw=0x00006F4E");
label_4e23d4:
    // 0x4e23d4: 0x0  nop
    ctx->pc = 0x4e23d4u;
    // NOP
label_4e23d8:
    // 0x4e23d8: 0x65766173  daddiu      $s6, $t3, 0x6173
    ctx->pc = 0x4e23d8u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24947);
label_4e23dc:
    // 0x4e23dc: 0x2e64255f  sltiu       $a0, $s3, 0x255F
    ctx->pc = 0x4e23dcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9567) ? 1 : 0);
label_4e23e0:
    // 0x4e23e0: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e23e0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e23e4:
    // 0x4e23e4: 0x0  nop
    ctx->pc = 0x4e23e4u;
    // NOP
label_4e23e8:
    // 0x4e23e8: 0x7265706f  .word       0x7265706F                   # INVALID     $s3, $a1, 0x706F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e23e8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x4E23E8 raw=0x7265706F");
label_4e23ec:
    // 0x4e23ec: 0x6f697461  ldr         $t1, 0x7461($k1)
    ctx->pc = 0x4e23ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e23f0:
    // 0x4e23f0: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e23f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_4e23f4:
    // 0x4e23f4: 0x0  nop
    ctx->pc = 0x4e23f4u;
    // NOP
label_4e23f8:
    // 0x4e23f8: 0x0  nop
    ctx->pc = 0x4e23f8u;
    // NOP
label_4e23fc:
    // 0x4e23fc: 0x0  nop
    ctx->pc = 0x4e23fcu;
    // NOP
label_4e2400:
    // 0x4e2400: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e2400u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x4E2400 raw=0x45435326");
label_4e2404:
    // 0x4e2404: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e2404u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E2404 raw=0x4352545F");
label_4e2408:
    // 0x4e2408: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e240c:
    if (ctx->pc == 0x4E240Cu) {
        ctx->pc = 0x4E240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2408u;
        // 0x4e240c: 0x4e5f434d  .word       0x4E5F434D                   # INVALID     $s2, $ra, 0x434D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E240C raw=0x4E5F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2410u;
        goto label_4e2410;
    }
    ctx->pc = 0x4E2408u;
    {
        const bool branch_taken_0x4e2408 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e2408) {
            ctx->pc = 0x4E240Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2408u;
            // 0x4e240c: 0x4e5f434d  .word       0x4E5F434D                   # INVALID     $s2, $ra, 0x434D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E240C raw=0x4E5F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F7140u;
            return;
        }
    }
    ctx->pc = 0x4E2410u;
label_4e2410:
    // 0x4e2410: 0x5241434f  beql        $s2, $at, . + 4 + (0x434F << 2)
label_4e2414:
    if (ctx->pc == 0x4E2414u) {
        ctx->pc = 0x4E2414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2410u;
        // 0x4e2414: 0x424e4944  .word       0x424E4944                   # INVALID     $s2, $t6, 0x4944 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E2414 raw=0x424E4944");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2418u;
        goto label_4e2418;
    }
    ctx->pc = 0x4E2410u;
    {
        const bool branch_taken_0x4e2410 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 1));
        if (branch_taken_0x4e2410) {
            ctx->pc = 0x4E2414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2410u;
            // 0x4e2414: 0x424e4944  .word       0x424E4944                   # INVALID     $s2, $t6, 0x4944 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E2414 raw=0x424E4944");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F3150u;
            return;
        }
    }
    ctx->pc = 0x4E2418u;
label_4e2418:
    // 0x4e2418: 0x5048544f  beql        $v0, $t0, . + 4 + (0x544F << 2)
label_4e241c:
    if (ctx->pc == 0x4E241Cu) {
        ctx->pc = 0x4E241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2418u;
        // 0x4e241c: 0x5354524f  beql        $k0, $s4, . + 4 + (0x524F << 2) (Delay Slot)
        // Likely branch instruction at 0x4E241C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2420u;
        goto label_4e2420;
    }
    ctx->pc = 0x4E2418u;
    {
        const bool branch_taken_0x4e2418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x4e2418) {
            ctx->pc = 0x4E241Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2418u;
            // 0x4e241c: 0x5354524f  beql        $k0, $s4, . + 4 + (0x524F << 2) (Delay Slot)
            // Likely branch instruction at 0x4E241C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F7558u;
            return;
        }
    }
    ctx->pc = 0x4E2420u;
label_4e2420:
    // 0x4e2420: 0x0  nop
    ctx->pc = 0x4e2420u;
    // NOP
label_4e2424:
    // 0x4e2424: 0x0  nop
    ctx->pc = 0x4e2424u;
    // NOP
label_4e2428:
    // 0x4e2428: 0x0  nop
    ctx->pc = 0x4e2428u;
    // NOP
label_4e242c:
    // 0x4e242c: 0x0  nop
    ctx->pc = 0x4e242cu;
    // NOP
label_4e2430:
    // 0x4e2430: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e2430u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e2434:
    // 0x4e2434: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e2434u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e2438:
    // 0x4e2438: 0x7469625c  .word       0x7469625C                   # INVALID     $v1, $t1, 0x625C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2438u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2438 raw=0x7469625C");
label_4e243c:
    // 0x4e243c: 0x7370616d  .word       0x7370616D                   # INVALID     $k1, $s0, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e243cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4E243C raw=0x7370616D");
label_4e2440:
    // 0x4e2440: 0x3273705c  andi        $s3, $s3, 0x705C
    ctx->pc = 0x4e2440u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)28764);
label_4e2444:
    // 0x4e2444: 0x7263735c  .word       0x7263735C                   # INVALID     $s3, $v1, 0x735C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e2444u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1C at 0x4E2444 raw=0x7263735C");
label_4e2448:
    // 0x4e2448: 0x736e6565  .word       0x736E6565                   # INVALID     $k1, $t6, 0x6565 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e2448u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4E2448 raw=0x736E6565");
label_4e244c:
    // 0x4e244c: 0x2e636d5c  sltiu       $v1, $s3, 0x6D5C
    ctx->pc = 0x4e244cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)27996) ? 1 : 0);
label_4e2450:
    // 0x4e2450: 0x676e70  tge         $v1, $a3, 441
    ctx->pc = 0x4e2450u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_4e2454:
    // 0x4e2454: 0x0  nop
    ctx->pc = 0x4e2454u;
    // NOP
label_4e2458:
    // 0x4e2458: 0x6e697337  ldr         $t1, 0x7337($s3)
    ctx->pc = 0x4e2458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29495); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e245c:
    // 0x4e245c: 0x63692e73  daddi       $t1, $k1, 0x2E73
    ctx->pc = 0x4e245cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)11891; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_4e2460:
    // 0x4e2460: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2460u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_4e2464:
    // 0x4e2464: 0x0  nop
    ctx->pc = 0x4e2464u;
    // NOP
label_4e2468:
    // 0x4e2468: 0x6e6f6369  ldr         $t7, 0x6369($s3)
    ctx->pc = 0x4e2468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e246c:
    // 0x4e246c: 0x7379732e  .word       0x7379732E                   # INVALID     $k1, $t9, 0x732E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e246cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4E246C raw=0x7379732E");
label_4e2470:
    // 0x4e2470: 0x0  nop
    ctx->pc = 0x4e2470u;
    // NOP
label_4e2474:
    // 0x4e2474: 0x0  nop
    ctx->pc = 0x4e2474u;
    // NOP
label_4e2478:
    // 0x4e2478: 0x666f7270  daddiu      $t7, $s3, 0x7270
    ctx->pc = 0x4e2478u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)29296);
label_4e247c:
    // 0x4e247c: 0x255f6c69  addiu       $ra, $t2, 0x6C69
    ctx->pc = 0x4e247cu;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 10), 27753));
label_4e2480:
    // 0x4e2480: 0x75  .word       0x00000075                   # INVALID     $zero, $zero, 0x75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2480u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x4E2480 raw=0x00000075");
label_4e2484:
    // 0x4e2484: 0x0  nop
    ctx->pc = 0x4e2484u;
    // NOP
label_4e2488:
    // 0x4e2488: 0x63656863  daddi       $a1, $k1, 0x6863
    ctx->pc = 0x4e2488u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26723; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e248c:
    // 0x4e248c: 0x75255f6b  .word       0x75255F6B                   # INVALID     $t1, $a1, 0x5F6B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e248cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E248C raw=0x75255F6B");
label_4e2490:
    // 0x4e2490: 0x0  nop
    ctx->pc = 0x4e2490u;
    // NOP
label_4e2494:
    // 0x4e2494: 0x0  nop
    ctx->pc = 0x4e2494u;
    // NOP
label_4e2498:
    // 0x4e2498: 0x666f7270  daddiu      $t7, $s3, 0x7270
    ctx->pc = 0x4e2498u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)29296);
label_4e249c:
    // 0x4e249c: 0x255f6c69  addiu       $ra, $t2, 0x6C69
    ctx->pc = 0x4e249cu;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 10), 27753));
label_4e24a0:
    // 0x4e24a0: 0x73252e75  .word       0x73252E75                   # INVALID     $t9, $a1, 0x2E75 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e24a0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x4E24A0 raw=0x73252E75");
label_4e24a4:
    // 0x4e24a4: 0x0  nop
    ctx->pc = 0x4e24a4u;
    // NOP
label_4e24a8:
    // 0x4e24a8: 0x65766173  daddiu      $s6, $t3, 0x6173
    ctx->pc = 0x4e24a8u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24947);
label_4e24ac:
    // 0x4e24ac: 0x2e75255f  sltiu       $s5, $s3, 0x255F
    ctx->pc = 0x4e24acu;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9567) ? 1 : 0);
label_4e24b0:
    // 0x4e24b0: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e24b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e24b4:
    // 0x4e24b4: 0x0  nop
    ctx->pc = 0x4e24b4u;
    // NOP
label_4e24b8:
    // 0x4e24b8: 0x63656863  daddi       $a1, $k1, 0x6863
    ctx->pc = 0x4e24b8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26723; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e24bc:
    // 0x4e24bc: 0x64255f6b  daddiu      $a1, $at, 0x5F6B
    ctx->pc = 0x4e24bcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)24427);
label_4e24c0:
    // 0x4e24c0: 0x73252e  .word       0x0073252E                   # dsub        $a0, $v1, $s3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e24c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_4e24c4:
    // 0x4e24c4: 0x0  nop
    ctx->pc = 0x4e24c4u;
    // NOP
label_4e24c8:
    // 0x4e24c8: 0x0  nop
    ctx->pc = 0x4e24c8u;
    // NOP
label_4e24cc:
    // 0x4e24cc: 0x0  nop
    ctx->pc = 0x4e24ccu;
    // NOP
label_4e24d0:
    // 0x4e24d0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e24d0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e24d4:
    // 0x4e24d4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e24d4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e24d8:
    // 0x4e24d8: 0x6563735c  daddiu      $v1, $t3, 0x735C
    ctx->pc = 0x4e24d8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29532);
label_4e24dc:
    // 0x4e24dc: 0x6f63695c  ldr         $v1, 0x695C($k1)
    ctx->pc = 0x4e24dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26972); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4e24e0:
    // 0x4e24e0: 0x79732e6e  lq          $s3, 0x2E6E($t3)
    ctx->pc = 0x4e24e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 11), 11886)));
label_4e24e4:
    // 0x4e24e4: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x4e24e4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e24e8:
    // 0x4e24e8: 0x0  nop
    ctx->pc = 0x4e24e8u;
    // NOP
label_4e24ec:
    // 0x4e24ec: 0x0  nop
    ctx->pc = 0x4e24ecu;
    // NOP
label_4e24f0:
    // 0x4e24f0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e24f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e24f4:
    // 0x4e24f4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e24f4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e24f8:
    // 0x4e24f8: 0x6563735c  daddiu      $v1, $t3, 0x735C
    ctx->pc = 0x4e24f8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29532);
label_4e24fc:
    // 0x4e24fc: 0x6973375c  ldl         $s3, 0x375C($t3)
    ctx->pc = 0x4e24fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 14172); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_4e2500:
    // 0x4e2500: 0x692e736e  ldl         $t6, 0x736E($t1)
    ctx->pc = 0x4e2500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 29550); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4e2504:
    // 0x4e2504: 0x6f63  .word       0x00006F63                   # negu        $t5, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2504u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_4e2508:
    // 0x4e2508: 0x3a3a7453  xori        $k0, $s1, 0x7453
    ctx->pc = 0x4e2508u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29779);
label_4e250c:
    // 0x4e250c: 0x6d726554  ldr         $s2, 0x6554($t3)
    ctx->pc = 0x4e250cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25940); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_4e2510:
    // 0x4e2510: 0x0  nop
    ctx->pc = 0x4e2510u;
    // NOP
label_4e2514:
    // 0x4e2514: 0x0  nop
    ctx->pc = 0x4e2514u;
    // NOP
label_4e2518:
    // 0x4e2518: 0x4f4e2d2d  .word       0x4F4E2D2D                   # INVALID     $k0, $t6, 0x2D2D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2518u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E2518 raw=0x4F4E2D2D");
label_4e251c:
    // 0x4e251c: 0x454d414e  .word       0x454D414E                   # INVALID     $t2, $t5, 0x414E # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e251cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xE at 0x4E251C raw=0x454D414E");
label_4e2520:
    // 0x4e2520: 0x2d2d  .word       0x00002D2D                   # daddu       $a1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e2524:
    // 0x4e2524: 0x0  nop
    ctx->pc = 0x4e2524u;
    // NOP
label_4e2528:
    // 0x4e2528: 0x0  nop
    ctx->pc = 0x4e2528u;
    // NOP
label_4e252c:
    // 0x4e252c: 0x0  nop
    ctx->pc = 0x4e252cu;
    // NOP
label_4e2530:
    // 0x4e2530: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e2530u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e2534:
    // 0x4e2534: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e2534u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e2538:
    // 0x4e2538: 0x7474705c  .word       0x7474705C                   # INVALID     $v1, $s4, 0x705C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2538u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2538 raw=0x7474705C");
label_4e253c:
    // 0x4e253c: 0x73657079  .word       0x73657079                   # INVALID     $k1, $a1, 0x7079 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e253cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x39 at 0x4E253C raw=0x73657079");
label_4e2540:
    // 0x4e2540: 0x6d61435c  ldr         $at, 0x435C($t3)
    ctx->pc = 0x4e2540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17244); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4e2544:
    // 0x4e2544: 0x41617265  .word       0x41617265                   # INVALID     $t3, $at, 0x7265 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e2544u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x4E2544 raw=0x41617265");
label_4e2548:
    // 0x4e2548: 0x616e6572  daddi       $t6, $t3, 0x6572
    ctx->pc = 0x4e2548u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25970; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4e254c:
    // 0x4e254c: 0x696e692e  ldl         $t6, 0x692E($t3)
    ctx->pc = 0x4e254cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26926); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4e2550:
    // 0x4e2550: 0x0  nop
    ctx->pc = 0x4e2550u;
    // NOP
label_4e2554:
    // 0x4e2554: 0x0  nop
    ctx->pc = 0x4e2554u;
    // NOP
label_4e2558:
    // 0x4e2558: 0x0  nop
    ctx->pc = 0x4e2558u;
    // NOP
label_4e255c:
    // 0x4e255c: 0x0  nop
    ctx->pc = 0x4e255cu;
    // NOP
label_4e2560:
    // 0x4e2560: 0x72617866  .word       0x72617866                   # INVALID     $s3, $at, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e2560u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4E2560 raw=0x72617866");
label_4e2564:
    // 0x4e2564: 0x5f616e65  .word       0x5F616E65                   # bgtzl       $k1, . + 4 + (0x6E65 << 2) # 00010000 <InstrIdType: CPU_NORMAL>
label_4e2568:
    if (ctx->pc == 0x4E2568u) {
        ctx->pc = 0x4E2568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2564u;
        // 0x4e2568: 0x6e616863  ldr         $at, 0x6863($s3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26723); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E256Cu;
        goto label_4e256c;
    }
    ctx->pc = 0x4E2564u;
    {
        const bool branch_taken_0x4e2564 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e2564) {
            ctx->pc = 0x4E2568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2564u;
            // 0x4e2568: 0x6e616863  ldr         $at, 0x6863($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26723); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FDEFCu;
            return;
        }
    }
    ctx->pc = 0x4E256Cu;
label_4e256c:
    // 0x4e256c: 0x253d6567  addiu       $sp, $t1, 0x6567
    ctx->pc = 0x4e256cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 9), 25959));
label_4e2570:
    // 0x4e2570: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2570u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_4e2574:
    // 0x4e2574: 0x0  nop
    ctx->pc = 0x4e2574u;
    // NOP
label_4e2578:
    // 0x4e2578: 0x61727564  daddi       $s2, $t3, 0x7564
    ctx->pc = 0x4e2578u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)30052; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_4e257c:
    // 0x4e257c: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4e257cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e2580:
    // 0x4e2580: 0x66253d  .word       0x0066253D                   # INVALID     $v1, $a2, 0x253D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2580u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x4E2580 raw=0x0066253D");
label_4e2584:
    // 0x4e2584: 0x0  nop
    ctx->pc = 0x4e2584u;
    // NOP
label_4e2588:
    // 0x4e2588: 0x74736964  .word       0x74736964                   # INVALID     $v1, $s3, 0x6964 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2588u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2588 raw=0x74736964");
label_4e258c:
    // 0x4e258c: 0x3d6e696d  .word       0x3D6E696D                   # lui         $t6, 0x696D # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e258cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)26989 << 16));
label_4e2590:
    // 0x4e2590: 0x6625  .word       0x00006625                   # move        $t4, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2590u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e2594:
    // 0x4e2594: 0x0  nop
    ctx->pc = 0x4e2594u;
    // NOP
label_4e2598:
    // 0x4e2598: 0x74736964  .word       0x74736964                   # INVALID     $v1, $s3, 0x6964 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2598u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2598 raw=0x74736964");
label_4e259c:
    // 0x4e259c: 0x3d78616d  .word       0x3D78616D                   # lui         $t8, 0x616D # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e259cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)24941 << 16));
label_4e25a0:
    // 0x4e25a0: 0x6625  .word       0x00006625                   # move        $t4, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e25a0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e25a4:
    // 0x4e25a4: 0x0  nop
    ctx->pc = 0x4e25a4u;
    // NOP
label_4e25a8:
    // 0x4e25a8: 0x676e6168  daddiu      $t6, $k1, 0x6168
    ctx->pc = 0x4e25a8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24936);
label_4e25ac:
    // 0x4e25ac: 0x253d656c  addiu       $sp, $t1, 0x656C
    ctx->pc = 0x4e25acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 9), 25964));
label_4e25b0:
    // 0x4e25b0: 0x66  .word       0x00000066                   # xor         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e25b0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_4e25b4:
    // 0x4e25b4: 0x0  nop
    ctx->pc = 0x4e25b4u;
    // NOP
label_4e25b8:
    // 0x4e25b8: 0x676e6168  daddiu      $t6, $k1, 0x6168
    ctx->pc = 0x4e25b8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24936);
label_4e25bc:
    // 0x4e25bc: 0x6172656c  daddi       $s2, $t3, 0x656C
    ctx->pc = 0x4e25bcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25964; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_4e25c0:
    // 0x4e25c0: 0x3d65676e  .word       0x3D65676E                   # lui         $a1, 0x676E # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e25c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26478 << 16));
label_4e25c4:
    // 0x4e25c4: 0x6625  .word       0x00006625                   # move        $t4, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e25c4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e25c8:
    // 0x4e25c8: 0x676e6176  daddiu      $t6, $k1, 0x6176
    ctx->pc = 0x4e25c8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24950);
label_4e25cc:
    // 0x4e25cc: 0x696d656c  ldl         $t5, 0x656C($t3)
    ctx->pc = 0x4e25ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25964); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
label_4e25d0:
    // 0x4e25d0: 0x66253d6e  daddiu      $a1, $s1, 0x3D6E
    ctx->pc = 0x4e25d0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)15726);
label_4e25d4:
    // 0x4e25d4: 0x0  nop
    ctx->pc = 0x4e25d4u;
    // NOP
label_4e25d8:
    // 0x4e25d8: 0x676e6176  daddiu      $t6, $k1, 0x6176
    ctx->pc = 0x4e25d8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24950);
label_4e25dc:
    // 0x4e25dc: 0x616d656c  daddi       $t5, $t3, 0x656C
    ctx->pc = 0x4e25dcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25964; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_4e25e0:
    // 0x4e25e0: 0x66253d78  daddiu      $a1, $s1, 0x3D78
    ctx->pc = 0x4e25e0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)15736);
label_4e25e4:
    // 0x4e25e4: 0x0  nop
    ctx->pc = 0x4e25e4u;
    // NOP
label_4e25e8:
    // 0x4e25e8: 0x66666f76  daddiu      $a2, $s3, 0x6F76
    ctx->pc = 0x4e25e8u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)28534);
label_4e25ec:
    // 0x4e25ec: 0x3d746573  .word       0x3D746573                   # lui         $s4, 0x6573 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e25ecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)25971 << 16));
label_4e25f0:
    // 0x4e25f0: 0x6625  .word       0x00006625                   # move        $t4, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e25f0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e25f4:
    // 0x4e25f4: 0x0  nop
    ctx->pc = 0x4e25f4u;
    // NOP
label_4e25f8:
    // 0x4e25f8: 0x0  nop
    ctx->pc = 0x4e25f8u;
    // NOP
label_4e25fc:
    // 0x4e25fc: 0x0  nop
    ctx->pc = 0x4e25fcu;
    // NOP
label_4e2600:
    // 0x4e2600: 0x61706552  daddi       $s0, $t3, 0x6552
    ctx->pc = 0x4e2600u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25938; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_4e2604:
    // 0x4e2604: 0x20657372  addi        $a1, $v1, 0x7372
    ctx->pc = 0x4e2604u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29554, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_4e2608:
    // 0x4e2608: 0x656d6143  daddiu      $t5, $t3, 0x6143
    ctx->pc = 0x4e2608u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24899);
label_4e260c:
    // 0x4e260c: 0x72416172  .word       0x72416172                   # INVALID     $s2, $at, 0x6172 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e260cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x4E260C raw=0x72416172");
label_4e2610:
    // 0x4e2610: 0x2e616e65  sltiu       $at, $s3, 0x6E65
    ctx->pc = 0x4e2610u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28261) ? 1 : 0);
label_4e2614:
    // 0x4e2614: 0x20696e69  addi        $t1, $v1, 0x6E69
    ctx->pc = 0x4e2614u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28265, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_4e2618:
    // 0x4e2618: 0x656c6966  daddiu      $t4, $t3, 0x6966
    ctx->pc = 0x4e2618u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26982);
label_4e261c:
    // 0x4e261c: 0x0  nop
    ctx->pc = 0x4e261cu;
    // NOP
label_4e2620:
    // 0x4e2620: 0x6c626174  ldr         $v0, 0x6174($v1)
    ctx->pc = 0x4e2620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e2624:
    // 0x4e2624: 0x68635f65  ldl         $v1, 0x5F65($v1)
    ctx->pc = 0x4e2624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24421); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4e2628:
    // 0x4e2628: 0x726961  .word       0x00726961                   # addu        $t5, $v1, $s2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2628u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_4e262c:
    // 0x4e262c: 0x0  nop
    ctx->pc = 0x4e262cu;
    // NOP
label_4e2630:
    // 0x4e2630: 0x6c626174  ldr         $v0, 0x6174($v1)
    ctx->pc = 0x4e2630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e2634:
    // 0x4e2634: 0x65625f65  daddiu      $v0, $t3, 0x5F65
    ctx->pc = 0x4e2634u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24421);
label_4e2638:
    // 0x4e2638: 0x68636e  .word       0x0068636E                   # dsub        $t4, $v1, $t0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2638u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 8); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_4e263c:
    // 0x4e263c: 0x0  nop
    ctx->pc = 0x4e263cu;
    // NOP
label_4e2640:
    // 0x4e2640: 0x6b736564  ldl         $s3, 0x6564($k1)
    ctx->pc = 0x4e2640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25956); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_4e2644:
    // 0x4e2644: 0x6168635f  daddi       $t0, $t3, 0x635F
    ctx->pc = 0x4e2644u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25439; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_4e2648:
    // 0x4e2648: 0x7269  .word       0x00007269                   # mtsa        $zero # 00007240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e2648u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_4e264c:
    // 0x4e264c: 0x0  nop
    ctx->pc = 0x4e264cu;
    // NOP
label_4e2650:
    // 0x4e2650: 0x5f726162  .word       0x5F726162                   # bgtzl       $k1, . + 4 + (0x6162 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
label_4e2654:
    if (ctx->pc == 0x4E2654u) {
        ctx->pc = 0x4E2654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2650u;
        // 0x4e2654: 0x6f6f7473  ldr         $t7, 0x7473($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29811); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2658u;
        goto label_4e2658;
    }
    ctx->pc = 0x4E2650u;
    {
        const bool branch_taken_0x4e2650 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e2650) {
            ctx->pc = 0x4E2654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2650u;
            // 0x4e2654: 0x6f6f7473  ldr         $t7, 0x7473($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29811); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FABDCu;
            return;
        }
    }
    ctx->pc = 0x4E2658u;
label_4e2658:
    // 0x4e2658: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2658u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_4e265c:
    // 0x4e265c: 0x0  nop
    ctx->pc = 0x4e265cu;
    // NOP
label_4e2660:
    // 0x4e2660: 0x7261656e  .word       0x7261656E                   # INVALID     $s3, $at, 0x656E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e2660u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4E2660 raw=0x7261656E");
label_4e2664:
    // 0x4e2664: 0x6574695f  daddiu      $s4, $t3, 0x695F
    ctx->pc = 0x4e2664u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26975);
label_4e2668:
    // 0x4e2668: 0x6d  .word       0x0000006D                   # daddu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2668u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e266c:
    // 0x4e266c: 0x0  nop
    ctx->pc = 0x4e266cu;
    // NOP
label_4e2670:
    // 0x4e2670: 0x69736e69  ldl         $s3, 0x6E69($t3)
    ctx->pc = 0x4e2670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28265); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_4e2674:
    // 0x4e2674: 0x695f6564  ldl         $ra, 0x6564($t2)
    ctx->pc = 0x4e2674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 25956); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e2678:
    // 0x4e2678: 0x6d6574  teq         $v1, $t5, 405
    ctx->pc = 0x4e2678u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_4e267c:
    // 0x4e267c: 0x0  nop
    ctx->pc = 0x4e267cu;
    // NOP
label_4e2680:
    // 0x4e2680: 0x5f6f7774  .word       0x5F6F7774                   # bgtzl       $k1, . + 4 + (0x7774 << 2) # 000F0000 <InstrIdType: CPU_NORMAL>
label_4e2684:
    if (ctx->pc == 0x4E2684u) {
        ctx->pc = 0x4E2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2680u;
        // 0x4e2684: 0x75746973  .word       0x75746973                   # INVALID     $t3, $s4, 0x6973 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2684 raw=0x75746973");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2688u;
        goto label_4e2688;
    }
    ctx->pc = 0x4E2680u;
    {
        const bool branch_taken_0x4e2680 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e2680) {
            ctx->pc = 0x4E2684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2680u;
            // 0x4e2684: 0x75746973  .word       0x75746973                   # INVALID     $t3, $s4, 0x6973 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2684 raw=0x75746973");
            ctx->in_delay_slot = false;
            ctx->pc = 0x500454u;
            return;
        }
    }
    ctx->pc = 0x4E2688u;
label_4e2688:
    // 0x4e2688: 0x6f697461  ldr         $t1, 0x7461($k1)
    ctx->pc = 0x4e2688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e268c:
    // 0x4e268c: 0x736e  .word       0x0000736E                   # dsub        $t6, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e268cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_4e2690:
    // 0x4e2690: 0x69727473  ldl         $s2, 0x7473($t3)
    ctx->pc = 0x4e2690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29811); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_4e2694:
    // 0x4e2694: 0x61657470  daddi       $a1, $t3, 0x7470
    ctx->pc = 0x4e2694u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29808; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e2698:
    // 0x4e2698: 0x6573  tltu        $zero, $zero, 405
    ctx->pc = 0x4e2698u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e269c:
    // 0x4e269c: 0x0  nop
    ctx->pc = 0x4e269cu;
    // NOP
label_4e26a0:
    // 0x4e26a0: 0x6c6c7562  ldr         $t4, 0x7562($v1)
    ctx->pc = 0x4e26a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30050); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_4e26a4:
    // 0x4e26a4: 0x6f707465  ldr         $s0, 0x7465($k1)
    ctx->pc = 0x4e26a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29797); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_4e26a8:
    // 0x4e26a8: 0x2e746e69  sltiu       $s4, $s3, 0x6E69
    ctx->pc = 0x4e26a8u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28265) ? 1 : 0);
label_4e26ac:
    // 0x4e26ac: 0x6b62  .word       0x00006B62                   # neg         $t5, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e26acu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_4e26b0:
    // 0x4e26b0: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x4e26b0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_4e26b4:
    // 0x4e26b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e26b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E26B4 raw=0x00000001");
label_4e26b8:
    // 0x4e26b8: 0x0  nop
    ctx->pc = 0x4e26b8u;
    // NOP
label_4e26bc:
    // 0x4e26bc: 0x0  nop
    ctx->pc = 0x4e26bcu;
    // NOP
label_4e26c0:
    // 0x4e26c0: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x4e26c0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_4e26c4:
    // 0x4e26c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e26c4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E26C4 raw=0x00000001");
label_4e26c8:
    // 0x4e26c8: 0x0  nop
    ctx->pc = 0x4e26c8u;
    // NOP
label_4e26cc:
    // 0x4e26cc: 0x0  nop
    ctx->pc = 0x4e26ccu;
    // NOP
label_4e26d0:
    // 0x4e26d0: 0x6576656c  daddiu      $s6, $t3, 0x656C
    ctx->pc = 0x4e26d0u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25964);
label_4e26d4:
    // 0x4e26d4: 0x75632e6c  .word       0x75632E6C                   # INVALID     $t3, $v1, 0x2E6C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e26d4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E26D4 raw=0x75632E6C");
label_4e26d8:
    // 0x4e26d8: 0x6e657272  ldr         $a1, 0x7272($s3)
    ctx->pc = 0x4e26d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29298); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4e26dc:
    // 0x4e26dc: 0x75662e74  .word       0x75662E74                   # INVALID     $t3, $a2, 0x2E74 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e26dcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E26DC raw=0x75662E74");
label_4e26e0:
    // 0x4e26e0: 0x61706c6c  daddi       $s0, $t3, 0x6C6C
    ctx->pc = 0x4e26e0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27756; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_4e26e4:
    // 0x4e26e4: 0x616e6874  daddi       $t6, $t3, 0x6874
    ctx->pc = 0x4e26e4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26740; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4e26e8:
    // 0x4e26e8: 0x656d  .word       0x0000656D                   # daddu       $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e26e8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e26ec:
    // 0x4e26ec: 0x0  nop
    ctx->pc = 0x4e26ecu;
    // NOP
label_4e26f0:
    // 0x4e26f0: 0x25287325  addiu       $t0, $t1, 0x7325
    ctx->pc = 0x4e26f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 29477));
label_4e26f4:
    // 0x4e26f4: 0x29643230  slti        $a0, $t3, 0x3230
    ctx->pc = 0x4e26f4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)12848) ? 1 : 0);
label_4e26f8:
    // 0x4e26f8: 0x0  nop
    ctx->pc = 0x4e26f8u;
    // NOP
label_4e26fc:
    // 0x4e26fc: 0x0  nop
    ctx->pc = 0x4e26fcu;
    // NOP
label_4e2700:
    // 0x4e2700: 0x5f4e5326  .word       0x5F4E5326                   # bgtzl       $k0, . + 4 + (0x5326 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e2704:
    if (ctx->pc == 0x4E2704u) {
        ctx->pc = 0x4E2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2700u;
        // 0x4e2704: 0x30257325  andi        $a1, $at, 0x7325 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)29477);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2708u;
        goto label_4e2708;
    }
    ctx->pc = 0x4E2700u;
    {
        const bool branch_taken_0x4e2700 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e2700) {
            ctx->pc = 0x4E2704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2700u;
            // 0x4e2704: 0x30257325  andi        $a1, $at, 0x7325 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)29477);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F739Cu;
            return;
        }
    }
    ctx->pc = 0x4E2708u;
label_4e2708:
    // 0x4e2708: 0x30256432  andi        $a1, $at, 0x6432
    ctx->pc = 0x4e2708u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)25650);
label_4e270c:
    // 0x4e270c: 0x616432  tlt         $v1, $at, 400
    ctx->pc = 0x4e270cu;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_4e2710:
    // 0x4e2710: 0x61706d69  daddi       $s0, $t3, 0x6D69
    ctx->pc = 0x4e2710u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28009; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_4e2714:
    // 0x4e2714: 0x34317463  ori         $s1, $at, 0x7463
    ctx->pc = 0x4e2714u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29795);
label_4e2718:
    // 0x4e2718: 0x0  nop
    ctx->pc = 0x4e2718u;
    // NOP
label_4e271c:
    // 0x4e271c: 0x0  nop
    ctx->pc = 0x4e271cu;
    // NOP
label_4e2720:
    // 0x4e2720: 0x74736554  .word       0x74736554                   # INVALID     $v1, $s3, 0x6554 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2720u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2720 raw=0x74736554");
label_4e2724:
    // 0x4e2724: 0x656e6943  daddiu      $t6, $t3, 0x6943
    ctx->pc = 0x4e2724u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26947);
label_4e2728:
    // 0x4e2728: 0x0  nop
    ctx->pc = 0x4e2728u;
    // NOP
label_4e272c:
    // 0x4e272c: 0x0  nop
    ctx->pc = 0x4e272cu;
    // NOP
label_4e2730:
    // 0x4e2730: 0x454e4943  .word       0x454E4943                   # INVALID     $t2, $t6, 0x4943 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e2730u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x3 at 0x4E2730 raw=0x454E4943");
label_4e2734:
    // 0x4e2734: 0x4d43203e  .word       0x4D43203E                   # INVALID     $t2, $v1, 0x203E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2734u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E2734 raw=0x4D43203E");
label_4e2738:
    // 0x4e2738: 0x2044  .word       0x00002044                   # sllv        $a0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2738u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4e273c:
    // 0x4e273c: 0x0  nop
    ctx->pc = 0x4e273cu;
    // NOP
label_4e2740:
    // 0x4e2740: 0x43455845  .word       0x43455845                   # INVALID     $k0, $a1, 0x5845 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e2740u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E2740 raw=0x43455845");
label_4e2744:
    // 0x4e2744: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x4e2744u;
    // NOP (addi to $zero)
label_4e2748:
    // 0x4e2748: 0x3a202020  xori        $zero, $s1, 0x2020
    ctx->pc = 0x4e2748u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)8224);
label_4e274c:
    // 0x4e274c: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x4e274cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_4e2750:
    // 0x4e2750: 0x52455551  beql        $s2, $a1, . + 4 + (0x5551 << 2)
label_4e2754:
    if (ctx->pc == 0x4E2754u) {
        ctx->pc = 0x4E2754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2750u;
        // 0x4e2754: 0x41545359  .word       0x41545359                   # INVALID     $t2, $s4, 0x5359 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4E2754 raw=0x41545359");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2758u;
        goto label_4e2758;
    }
    ctx->pc = 0x4E2750u;
    {
        const bool branch_taken_0x4e2750 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x4e2750) {
            ctx->pc = 0x4E2754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2750u;
            // 0x4e2754: 0x41545359  .word       0x41545359                   # INVALID     $t2, $s4, 0x5359 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4E2754 raw=0x41545359");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F7C98u;
            return;
        }
    }
    ctx->pc = 0x4E2758u;
label_4e2758:
    // 0x4e2758: 0x3a204554  xori        $zero, $s1, 0x4554
    ctx->pc = 0x4e2758u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)17748);
label_4e275c:
    // 0x4e275c: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x4e275cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_4e2760:
    // 0x4e2760: 0x53494428  beql        $k0, $t1, . + 4 + (0x4428 << 2)
label_4e2764:
    if (ctx->pc == 0x4E2764u) {
        ctx->pc = 0x4E2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2760u;
        // 0x4e2764: 0x54455243  bnel        $v0, $a1, . + 4 + (0x5243 << 2) (Delay Slot)
        // Likely branch instruction at 0x4E2764 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2768u;
        goto label_4e2768;
    }
    ctx->pc = 0x4E2760u;
    {
        const bool branch_taken_0x4e2760 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 9));
        if (branch_taken_0x4e2760) {
            ctx->pc = 0x4E2764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2760u;
            // 0x4e2764: 0x54455243  bnel        $v0, $a1, . + 4 + (0x5243 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E2764 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F3804u;
            return;
        }
    }
    ctx->pc = 0x4E2768u;
label_4e2768:
    // 0x4e2768: 0x202945  .word       0x00202945                   # INVALID     $at, $zero, 0x2945 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2768u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E2768 raw=0x00202945");
label_4e276c:
    // 0x4e276c: 0x0  nop
    ctx->pc = 0x4e276cu;
    // NOP
label_4e2770:
    // 0x4e2770: 0x4d495428  .word       0x4D495428                   # INVALID     $t2, $t1, 0x5428 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2770u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E2770 raw=0x4D495428");
label_4e2774:
    // 0x4e2774: 0x554f4245  bnel        $t2, $t7, . + 4 + (0x4245 << 2)
label_4e2778:
    if (ctx->pc == 0x4E2778u) {
        ctx->pc = 0x4E2778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2774u;
        // 0x4e2778: 0x4445444e  .word       0x4445444E                   # cfc1        $a1, $8 # 0000044E <InstrIdType: R5900_COP1> (Delay Slot)
        SET_GPR_U32(ctx, 5, 0); // Unimplemented FCR8
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E277Cu;
        goto label_4e277c;
    }
    ctx->pc = 0x4E2774u;
    {
        const bool branch_taken_0x4e2774 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 15));
        if (branch_taken_0x4e2774) {
            ctx->pc = 0x4E2778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2774u;
            // 0x4e2778: 0x4445444e  .word       0x4445444E                   # cfc1        $a1, $8 # 0000044E <InstrIdType: R5900_COP1> (Delay Slot)
            SET_GPR_U32(ctx, 5, 0); // Unimplemented FCR8
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F308Cu;
            return;
        }
    }
    ctx->pc = 0x4E277Cu;
label_4e277c:
    // 0x4e277c: 0x2029  .word       0x00002029                   # mtsa        $zero # 00002000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e277cu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_4e2780:
    // 0x4e2780: 0x59534128  .word       0x59534128                   # blezl       $t2, . + 4 + (0x4128 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4e2784:
    if (ctx->pc == 0x4E2784u) {
        ctx->pc = 0x4E2784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2780u;
        // 0x4e2784: 0x2029434e  addi        $t1, $at, 0x434E (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)17230, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2788u;
        goto label_4e2788;
    }
    ctx->pc = 0x4E2780u;
    {
        const bool branch_taken_0x4e2780 = (GPR_S32(ctx, 10) <= 0);
        if (branch_taken_0x4e2780) {
            ctx->pc = 0x4E2784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2780u;
            // 0x4e2784: 0x2029434e  addi        $t1, $at, 0x434E (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)17230, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F2C24u;
            return;
        }
    }
    ctx->pc = 0x4E2788u;
label_4e2788:
    // 0x4e2788: 0x0  nop
    ctx->pc = 0x4e2788u;
    // NOP
label_4e278c:
    // 0x4e278c: 0x0  nop
    ctx->pc = 0x4e278cu;
    // NOP
label_4e2790:
    // 0x4e2790: 0x454e4943  .word       0x454E4943                   # INVALID     $t2, $t6, 0x4943 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e2790u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x3 at 0x4E2790 raw=0x454E4943");
label_4e2794:
    // 0x4e2794: 0x4f43203e  .word       0x4F43203E                   # INVALID     $k0, $v1, 0x203E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2794u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E2794 raw=0x4F43203E");
label_4e2798:
    // 0x4e2798: 0x454c504d  .word       0x454C504D                   # INVALID     $t2, $t4, 0x504D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e2798u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xD at 0x4E2798 raw=0x454C504D");
label_4e279c:
    // 0x4e279c: 0x20444554  addi        $a0, $v0, 0x4554
    ctx->pc = 0x4e279cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)17748, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_4e27a0:
    // 0x4e27a0: 0x4e595341  .word       0x4E595341                   # INVALID     $s2, $t9, 0x5341 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e27a0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E27A0 raw=0x4E595341");
label_4e27a4:
    // 0x4e27a4: 0x203a2043  addi        $k0, $at, 0x2043
    ctx->pc = 0x4e27a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8259, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_4e27a8:
    // 0x4e27a8: 0x414f4422  .word       0x414F4422                   # INVALID     $t2, $t7, 0x4422 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e27a8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4E27A8 raw=0x414F4422");
label_4e27ac:
    // 0x4e27ac: 0x4f495443  .word       0x4F495443                   # INVALID     $k0, $t1, 0x5443 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e27acu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E27AC raw=0x4F495443");
label_4e27b0:
    // 0x4e27b0: 0xa224e  .word       0x000A224E                   # INVALID     $zero, $t2, 0x224E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e27b0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x4E27B0 raw=0x000A224E");
label_4e27b4:
    // 0x4e27b4: 0x0  nop
    ctx->pc = 0x4e27b4u;
    // NOP
label_4e27b8:
    // 0x4e27b8: 0x0  nop
    ctx->pc = 0x4e27b8u;
    // NOP
label_4e27bc:
    // 0x4e27bc: 0x0  nop
    ctx->pc = 0x4e27bcu;
    // NOP
label_4e27c0:
    // 0x4e27c0: 0x454e4943  .word       0x454E4943                   # INVALID     $t2, $t6, 0x4943 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e27c0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x3 at 0x4E27C0 raw=0x454E4943");
label_4e27c4:
    // 0x4e27c4: 0x4f43203e  .word       0x4F43203E                   # INVALID     $k0, $v1, 0x203E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e27c4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E27C4 raw=0x4F43203E");
label_4e27c8:
    // 0x4e27c8: 0x454c504d  .word       0x454C504D                   # INVALID     $t2, $t4, 0x504D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e27c8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xD at 0x4E27C8 raw=0x454C504D");
label_4e27cc:
    // 0x4e27cc: 0x20444554  addi        $a0, $v0, 0x4554
    ctx->pc = 0x4e27ccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)17748, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_4e27d0:
    // 0x4e27d0: 0x4e595341  .word       0x4E595341                   # INVALID     $s2, $t9, 0x5341 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e27d0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E27D0 raw=0x4E595341");
label_4e27d4:
    // 0x4e27d4: 0x22203a43  addi        $zero, $s1, 0x3A43
    ctx->pc = 0x4e27d4u;
    // NOP (addi to $zero)
label_4e27d8:
    // 0x4e27d8: 0x45564f4d  .word       0x45564F4D                   # INVALID     $t2, $s6, 0x4F4D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e27d8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xD at 0x4E27D8 raw=0x45564F4D");
label_4e27dc:
    // 0x4e27dc: 0x49544341  .word       0x49544341                   # INVALID     $t2, $s4, 0x4341 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x4e27dcu;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x4E27DC raw=0x49544341");
label_4e27e0:
    // 0x4e27e0: 0xa224e4f  j           func_889393C
label_4e27e4:
    if (ctx->pc == 0x4E27E4u) {
        ctx->pc = 0x4E27E8u;
        goto label_fallthrough_0x4e27e0;
    }
    ctx->pc = 0x4E27E0u;
    ctx->pc = 0x889393Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x889393Cu, 0x4E27E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_fallthrough_0x4e27e0:
    ctx->pc = 0x4E27E8u;
}
