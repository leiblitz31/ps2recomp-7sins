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

// Function: sub_004F12B8
// Address: 0x4f12b8 - 0x4f1a78
void sub_004F12B8_0x4f12b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F12B8_0x4f12b8");
#endif

    switch (ctx->pc) {
        case 0x4f12b8u: goto label_4f12b8;
        case 0x4f12bcu: goto label_4f12bc;
        case 0x4f12c0u: goto label_4f12c0;
        case 0x4f12c4u: goto label_4f12c4;
        case 0x4f12c8u: goto label_4f12c8;
        case 0x4f12ccu: goto label_4f12cc;
        case 0x4f12d0u: goto label_4f12d0;
        case 0x4f12d4u: goto label_4f12d4;
        case 0x4f12d8u: goto label_4f12d8;
        case 0x4f12dcu: goto label_4f12dc;
        case 0x4f12e0u: goto label_4f12e0;
        case 0x4f12e4u: goto label_4f12e4;
        case 0x4f12e8u: goto label_4f12e8;
        case 0x4f12ecu: goto label_4f12ec;
        case 0x4f12f0u: goto label_4f12f0;
        case 0x4f12f4u: goto label_4f12f4;
        case 0x4f12f8u: goto label_4f12f8;
        case 0x4f12fcu: goto label_4f12fc;
        case 0x4f1300u: goto label_4f1300;
        case 0x4f1304u: goto label_4f1304;
        case 0x4f1308u: goto label_4f1308;
        case 0x4f130cu: goto label_4f130c;
        case 0x4f1310u: goto label_4f1310;
        case 0x4f1314u: goto label_4f1314;
        case 0x4f1318u: goto label_4f1318;
        case 0x4f131cu: goto label_4f131c;
        case 0x4f1320u: goto label_4f1320;
        case 0x4f1324u: goto label_4f1324;
        case 0x4f1328u: goto label_4f1328;
        case 0x4f132cu: goto label_4f132c;
        case 0x4f1330u: goto label_4f1330;
        case 0x4f1334u: goto label_4f1334;
        case 0x4f1338u: goto label_4f1338;
        case 0x4f133cu: goto label_4f133c;
        case 0x4f1340u: goto label_4f1340;
        case 0x4f1344u: goto label_4f1344;
        case 0x4f1348u: goto label_4f1348;
        case 0x4f134cu: goto label_4f134c;
        case 0x4f1350u: goto label_4f1350;
        case 0x4f1354u: goto label_4f1354;
        case 0x4f1358u: goto label_4f1358;
        case 0x4f135cu: goto label_4f135c;
        case 0x4f1360u: goto label_4f1360;
        case 0x4f1364u: goto label_4f1364;
        case 0x4f1368u: goto label_4f1368;
        case 0x4f136cu: goto label_4f136c;
        case 0x4f1370u: goto label_4f1370;
        case 0x4f1374u: goto label_4f1374;
        case 0x4f1378u: goto label_4f1378;
        case 0x4f137cu: goto label_4f137c;
        case 0x4f1380u: goto label_4f1380;
        case 0x4f1384u: goto label_4f1384;
        case 0x4f1388u: goto label_4f1388;
        case 0x4f138cu: goto label_4f138c;
        case 0x4f1390u: goto label_4f1390;
        case 0x4f1394u: goto label_4f1394;
        case 0x4f1398u: goto label_4f1398;
        case 0x4f139cu: goto label_4f139c;
        case 0x4f13a0u: goto label_4f13a0;
        case 0x4f13a4u: goto label_4f13a4;
        case 0x4f13a8u: goto label_4f13a8;
        case 0x4f13acu: goto label_4f13ac;
        case 0x4f13b0u: goto label_4f13b0;
        case 0x4f13b4u: goto label_4f13b4;
        case 0x4f13b8u: goto label_4f13b8;
        case 0x4f13bcu: goto label_4f13bc;
        case 0x4f13c0u: goto label_4f13c0;
        case 0x4f13c4u: goto label_4f13c4;
        case 0x4f13c8u: goto label_4f13c8;
        case 0x4f13ccu: goto label_4f13cc;
        case 0x4f13d0u: goto label_4f13d0;
        case 0x4f13d4u: goto label_4f13d4;
        case 0x4f13d8u: goto label_4f13d8;
        case 0x4f13dcu: goto label_4f13dc;
        case 0x4f13e0u: goto label_4f13e0;
        case 0x4f13e4u: goto label_4f13e4;
        case 0x4f13e8u: goto label_4f13e8;
        case 0x4f13ecu: goto label_4f13ec;
        case 0x4f13f0u: goto label_4f13f0;
        case 0x4f13f4u: goto label_4f13f4;
        case 0x4f13f8u: goto label_4f13f8;
        case 0x4f13fcu: goto label_4f13fc;
        case 0x4f1400u: goto label_4f1400;
        case 0x4f1404u: goto label_4f1404;
        case 0x4f1408u: goto label_4f1408;
        case 0x4f140cu: goto label_4f140c;
        case 0x4f1410u: goto label_4f1410;
        case 0x4f1414u: goto label_4f1414;
        case 0x4f1418u: goto label_4f1418;
        case 0x4f141cu: goto label_4f141c;
        case 0x4f1420u: goto label_4f1420;
        case 0x4f1424u: goto label_4f1424;
        case 0x4f1428u: goto label_4f1428;
        case 0x4f142cu: goto label_4f142c;
        case 0x4f1430u: goto label_4f1430;
        case 0x4f1434u: goto label_4f1434;
        case 0x4f1438u: goto label_4f1438;
        case 0x4f143cu: goto label_4f143c;
        case 0x4f1440u: goto label_4f1440;
        case 0x4f1444u: goto label_4f1444;
        case 0x4f1448u: goto label_4f1448;
        case 0x4f144cu: goto label_4f144c;
        case 0x4f1450u: goto label_4f1450;
        case 0x4f1454u: goto label_4f1454;
        case 0x4f1458u: goto label_4f1458;
        case 0x4f145cu: goto label_4f145c;
        case 0x4f1460u: goto label_4f1460;
        case 0x4f1464u: goto label_4f1464;
        case 0x4f1468u: goto label_4f1468;
        case 0x4f146cu: goto label_4f146c;
        case 0x4f1470u: goto label_4f1470;
        case 0x4f1474u: goto label_4f1474;
        case 0x4f1478u: goto label_4f1478;
        case 0x4f147cu: goto label_4f147c;
        case 0x4f1480u: goto label_4f1480;
        case 0x4f1484u: goto label_4f1484;
        case 0x4f1488u: goto label_4f1488;
        case 0x4f148cu: goto label_4f148c;
        case 0x4f1490u: goto label_4f1490;
        case 0x4f1494u: goto label_4f1494;
        case 0x4f1498u: goto label_4f1498;
        case 0x4f149cu: goto label_4f149c;
        case 0x4f14a0u: goto label_4f14a0;
        case 0x4f14a4u: goto label_4f14a4;
        case 0x4f14a8u: goto label_4f14a8;
        case 0x4f14acu: goto label_4f14ac;
        case 0x4f14b0u: goto label_4f14b0;
        case 0x4f14b4u: goto label_4f14b4;
        case 0x4f14b8u: goto label_4f14b8;
        case 0x4f14bcu: goto label_4f14bc;
        case 0x4f14c0u: goto label_4f14c0;
        case 0x4f14c4u: goto label_4f14c4;
        case 0x4f14c8u: goto label_4f14c8;
        case 0x4f14ccu: goto label_4f14cc;
        case 0x4f14d0u: goto label_4f14d0;
        case 0x4f14d4u: goto label_4f14d4;
        case 0x4f14d8u: goto label_4f14d8;
        case 0x4f14dcu: goto label_4f14dc;
        case 0x4f14e0u: goto label_4f14e0;
        case 0x4f14e4u: goto label_4f14e4;
        case 0x4f14e8u: goto label_4f14e8;
        case 0x4f14ecu: goto label_4f14ec;
        case 0x4f14f0u: goto label_4f14f0;
        case 0x4f14f4u: goto label_4f14f4;
        case 0x4f14f8u: goto label_4f14f8;
        case 0x4f14fcu: goto label_4f14fc;
        case 0x4f1500u: goto label_4f1500;
        case 0x4f1504u: goto label_4f1504;
        case 0x4f1508u: goto label_4f1508;
        case 0x4f150cu: goto label_4f150c;
        case 0x4f1510u: goto label_4f1510;
        case 0x4f1514u: goto label_4f1514;
        case 0x4f1518u: goto label_4f1518;
        case 0x4f151cu: goto label_4f151c;
        case 0x4f1520u: goto label_4f1520;
        case 0x4f1524u: goto label_4f1524;
        case 0x4f1528u: goto label_4f1528;
        case 0x4f152cu: goto label_4f152c;
        case 0x4f1530u: goto label_4f1530;
        case 0x4f1534u: goto label_4f1534;
        case 0x4f1538u: goto label_4f1538;
        case 0x4f153cu: goto label_4f153c;
        case 0x4f1540u: goto label_4f1540;
        case 0x4f1544u: goto label_4f1544;
        case 0x4f1548u: goto label_4f1548;
        case 0x4f154cu: goto label_4f154c;
        case 0x4f1550u: goto label_4f1550;
        case 0x4f1554u: goto label_4f1554;
        case 0x4f1558u: goto label_4f1558;
        case 0x4f155cu: goto label_4f155c;
        case 0x4f1560u: goto label_4f1560;
        case 0x4f1564u: goto label_4f1564;
        case 0x4f1568u: goto label_4f1568;
        case 0x4f156cu: goto label_4f156c;
        case 0x4f1570u: goto label_4f1570;
        case 0x4f1574u: goto label_4f1574;
        case 0x4f1578u: goto label_4f1578;
        case 0x4f157cu: goto label_4f157c;
        case 0x4f1580u: goto label_4f1580;
        case 0x4f1584u: goto label_4f1584;
        case 0x4f1588u: goto label_4f1588;
        case 0x4f158cu: goto label_4f158c;
        case 0x4f1590u: goto label_4f1590;
        case 0x4f1594u: goto label_4f1594;
        case 0x4f1598u: goto label_4f1598;
        case 0x4f159cu: goto label_4f159c;
        case 0x4f15a0u: goto label_4f15a0;
        case 0x4f15a4u: goto label_4f15a4;
        case 0x4f15a8u: goto label_4f15a8;
        case 0x4f15acu: goto label_4f15ac;
        case 0x4f15b0u: goto label_4f15b0;
        case 0x4f15b4u: goto label_4f15b4;
        case 0x4f15b8u: goto label_4f15b8;
        case 0x4f15bcu: goto label_4f15bc;
        case 0x4f15c0u: goto label_4f15c0;
        case 0x4f15c4u: goto label_4f15c4;
        case 0x4f15c8u: goto label_4f15c8;
        case 0x4f15ccu: goto label_4f15cc;
        case 0x4f15d0u: goto label_4f15d0;
        case 0x4f15d4u: goto label_4f15d4;
        case 0x4f15d8u: goto label_4f15d8;
        case 0x4f15dcu: goto label_4f15dc;
        case 0x4f15e0u: goto label_4f15e0;
        case 0x4f15e4u: goto label_4f15e4;
        case 0x4f15e8u: goto label_4f15e8;
        case 0x4f15ecu: goto label_4f15ec;
        case 0x4f15f0u: goto label_4f15f0;
        case 0x4f15f4u: goto label_4f15f4;
        case 0x4f15f8u: goto label_4f15f8;
        case 0x4f15fcu: goto label_4f15fc;
        case 0x4f1600u: goto label_4f1600;
        case 0x4f1604u: goto label_4f1604;
        case 0x4f1608u: goto label_4f1608;
        case 0x4f160cu: goto label_4f160c;
        case 0x4f1610u: goto label_4f1610;
        case 0x4f1614u: goto label_4f1614;
        case 0x4f1618u: goto label_4f1618;
        case 0x4f161cu: goto label_4f161c;
        case 0x4f1620u: goto label_4f1620;
        case 0x4f1624u: goto label_4f1624;
        case 0x4f1628u: goto label_4f1628;
        case 0x4f162cu: goto label_4f162c;
        case 0x4f1630u: goto label_4f1630;
        case 0x4f1634u: goto label_4f1634;
        case 0x4f1638u: goto label_4f1638;
        case 0x4f163cu: goto label_4f163c;
        case 0x4f1640u: goto label_4f1640;
        case 0x4f1644u: goto label_4f1644;
        case 0x4f1648u: goto label_4f1648;
        case 0x4f164cu: goto label_4f164c;
        case 0x4f1650u: goto label_4f1650;
        case 0x4f1654u: goto label_4f1654;
        case 0x4f1658u: goto label_4f1658;
        case 0x4f165cu: goto label_4f165c;
        case 0x4f1660u: goto label_4f1660;
        case 0x4f1664u: goto label_4f1664;
        case 0x4f1668u: goto label_4f1668;
        case 0x4f166cu: goto label_4f166c;
        case 0x4f1670u: goto label_4f1670;
        case 0x4f1674u: goto label_4f1674;
        case 0x4f1678u: goto label_4f1678;
        case 0x4f167cu: goto label_4f167c;
        case 0x4f1680u: goto label_4f1680;
        case 0x4f1684u: goto label_4f1684;
        case 0x4f1688u: goto label_4f1688;
        case 0x4f168cu: goto label_4f168c;
        case 0x4f1690u: goto label_4f1690;
        case 0x4f1694u: goto label_4f1694;
        case 0x4f1698u: goto label_4f1698;
        case 0x4f169cu: goto label_4f169c;
        case 0x4f16a0u: goto label_4f16a0;
        case 0x4f16a4u: goto label_4f16a4;
        case 0x4f16a8u: goto label_4f16a8;
        case 0x4f16acu: goto label_4f16ac;
        case 0x4f16b0u: goto label_4f16b0;
        case 0x4f16b4u: goto label_4f16b4;
        case 0x4f16b8u: goto label_4f16b8;
        case 0x4f16bcu: goto label_4f16bc;
        case 0x4f16c0u: goto label_4f16c0;
        case 0x4f16c4u: goto label_4f16c4;
        case 0x4f16c8u: goto label_4f16c8;
        case 0x4f16ccu: goto label_4f16cc;
        case 0x4f16d0u: goto label_4f16d0;
        case 0x4f16d4u: goto label_4f16d4;
        case 0x4f16d8u: goto label_4f16d8;
        case 0x4f16dcu: goto label_4f16dc;
        case 0x4f16e0u: goto label_4f16e0;
        case 0x4f16e4u: goto label_4f16e4;
        case 0x4f16e8u: goto label_4f16e8;
        case 0x4f16ecu: goto label_4f16ec;
        case 0x4f16f0u: goto label_4f16f0;
        case 0x4f16f4u: goto label_4f16f4;
        case 0x4f16f8u: goto label_4f16f8;
        case 0x4f16fcu: goto label_4f16fc;
        case 0x4f1700u: goto label_4f1700;
        case 0x4f1704u: goto label_4f1704;
        case 0x4f1708u: goto label_4f1708;
        case 0x4f170cu: goto label_4f170c;
        case 0x4f1710u: goto label_4f1710;
        case 0x4f1714u: goto label_4f1714;
        case 0x4f1718u: goto label_4f1718;
        case 0x4f171cu: goto label_4f171c;
        case 0x4f1720u: goto label_4f1720;
        case 0x4f1724u: goto label_4f1724;
        case 0x4f1728u: goto label_4f1728;
        case 0x4f172cu: goto label_4f172c;
        case 0x4f1730u: goto label_4f1730;
        case 0x4f1734u: goto label_4f1734;
        case 0x4f1738u: goto label_4f1738;
        case 0x4f173cu: goto label_4f173c;
        case 0x4f1740u: goto label_4f1740;
        case 0x4f1744u: goto label_4f1744;
        case 0x4f1748u: goto label_4f1748;
        case 0x4f174cu: goto label_4f174c;
        case 0x4f1750u: goto label_4f1750;
        case 0x4f1754u: goto label_4f1754;
        case 0x4f1758u: goto label_4f1758;
        case 0x4f175cu: goto label_4f175c;
        case 0x4f1760u: goto label_4f1760;
        case 0x4f1764u: goto label_4f1764;
        case 0x4f1768u: goto label_4f1768;
        case 0x4f176cu: goto label_4f176c;
        case 0x4f1770u: goto label_4f1770;
        case 0x4f1774u: goto label_4f1774;
        case 0x4f1778u: goto label_4f1778;
        case 0x4f177cu: goto label_4f177c;
        case 0x4f1780u: goto label_4f1780;
        case 0x4f1784u: goto label_4f1784;
        case 0x4f1788u: goto label_4f1788;
        case 0x4f178cu: goto label_4f178c;
        case 0x4f1790u: goto label_4f1790;
        case 0x4f1794u: goto label_4f1794;
        case 0x4f1798u: goto label_4f1798;
        case 0x4f179cu: goto label_4f179c;
        case 0x4f17a0u: goto label_4f17a0;
        case 0x4f17a4u: goto label_4f17a4;
        case 0x4f17a8u: goto label_4f17a8;
        case 0x4f17acu: goto label_4f17ac;
        case 0x4f17b0u: goto label_4f17b0;
        case 0x4f17b4u: goto label_4f17b4;
        case 0x4f17b8u: goto label_4f17b8;
        case 0x4f17bcu: goto label_4f17bc;
        case 0x4f17c0u: goto label_4f17c0;
        case 0x4f17c4u: goto label_4f17c4;
        case 0x4f17c8u: goto label_4f17c8;
        case 0x4f17ccu: goto label_4f17cc;
        case 0x4f17d0u: goto label_4f17d0;
        case 0x4f17d4u: goto label_4f17d4;
        case 0x4f17d8u: goto label_4f17d8;
        case 0x4f17dcu: goto label_4f17dc;
        case 0x4f17e0u: goto label_4f17e0;
        case 0x4f17e4u: goto label_4f17e4;
        case 0x4f17e8u: goto label_4f17e8;
        case 0x4f17ecu: goto label_4f17ec;
        case 0x4f17f0u: goto label_4f17f0;
        case 0x4f17f4u: goto label_4f17f4;
        case 0x4f17f8u: goto label_4f17f8;
        case 0x4f17fcu: goto label_4f17fc;
        case 0x4f1800u: goto label_4f1800;
        case 0x4f1804u: goto label_4f1804;
        case 0x4f1808u: goto label_4f1808;
        case 0x4f180cu: goto label_4f180c;
        case 0x4f1810u: goto label_4f1810;
        case 0x4f1814u: goto label_4f1814;
        case 0x4f1818u: goto label_4f1818;
        case 0x4f181cu: goto label_4f181c;
        case 0x4f1820u: goto label_4f1820;
        case 0x4f1824u: goto label_4f1824;
        case 0x4f1828u: goto label_4f1828;
        case 0x4f182cu: goto label_4f182c;
        case 0x4f1830u: goto label_4f1830;
        case 0x4f1834u: goto label_4f1834;
        case 0x4f1838u: goto label_4f1838;
        case 0x4f183cu: goto label_4f183c;
        case 0x4f1840u: goto label_4f1840;
        case 0x4f1844u: goto label_4f1844;
        case 0x4f1848u: goto label_4f1848;
        case 0x4f184cu: goto label_4f184c;
        case 0x4f1850u: goto label_4f1850;
        case 0x4f1854u: goto label_4f1854;
        case 0x4f1858u: goto label_4f1858;
        case 0x4f185cu: goto label_4f185c;
        case 0x4f1860u: goto label_4f1860;
        case 0x4f1864u: goto label_4f1864;
        case 0x4f1868u: goto label_4f1868;
        case 0x4f186cu: goto label_4f186c;
        case 0x4f1870u: goto label_4f1870;
        case 0x4f1874u: goto label_4f1874;
        case 0x4f1878u: goto label_4f1878;
        case 0x4f187cu: goto label_4f187c;
        case 0x4f1880u: goto label_4f1880;
        case 0x4f1884u: goto label_4f1884;
        case 0x4f1888u: goto label_4f1888;
        case 0x4f188cu: goto label_4f188c;
        case 0x4f1890u: goto label_4f1890;
        case 0x4f1894u: goto label_4f1894;
        case 0x4f1898u: goto label_4f1898;
        case 0x4f189cu: goto label_4f189c;
        case 0x4f18a0u: goto label_4f18a0;
        case 0x4f18a4u: goto label_4f18a4;
        case 0x4f18a8u: goto label_4f18a8;
        case 0x4f18acu: goto label_4f18ac;
        case 0x4f18b0u: goto label_4f18b0;
        case 0x4f18b4u: goto label_4f18b4;
        case 0x4f18b8u: goto label_4f18b8;
        case 0x4f18bcu: goto label_4f18bc;
        case 0x4f18c0u: goto label_4f18c0;
        case 0x4f18c4u: goto label_4f18c4;
        case 0x4f18c8u: goto label_4f18c8;
        case 0x4f18ccu: goto label_4f18cc;
        case 0x4f18d0u: goto label_4f18d0;
        case 0x4f18d4u: goto label_4f18d4;
        case 0x4f18d8u: goto label_4f18d8;
        case 0x4f18dcu: goto label_4f18dc;
        case 0x4f18e0u: goto label_4f18e0;
        case 0x4f18e4u: goto label_4f18e4;
        case 0x4f18e8u: goto label_4f18e8;
        case 0x4f18ecu: goto label_4f18ec;
        case 0x4f18f0u: goto label_4f18f0;
        case 0x4f18f4u: goto label_4f18f4;
        case 0x4f18f8u: goto label_4f18f8;
        case 0x4f18fcu: goto label_4f18fc;
        case 0x4f1900u: goto label_4f1900;
        case 0x4f1904u: goto label_4f1904;
        case 0x4f1908u: goto label_4f1908;
        case 0x4f190cu: goto label_4f190c;
        case 0x4f1910u: goto label_4f1910;
        case 0x4f1914u: goto label_4f1914;
        case 0x4f1918u: goto label_4f1918;
        case 0x4f191cu: goto label_4f191c;
        case 0x4f1920u: goto label_4f1920;
        case 0x4f1924u: goto label_4f1924;
        case 0x4f1928u: goto label_4f1928;
        case 0x4f192cu: goto label_4f192c;
        case 0x4f1930u: goto label_4f1930;
        case 0x4f1934u: goto label_4f1934;
        case 0x4f1938u: goto label_4f1938;
        case 0x4f193cu: goto label_4f193c;
        case 0x4f1940u: goto label_4f1940;
        case 0x4f1944u: goto label_4f1944;
        case 0x4f1948u: goto label_4f1948;
        case 0x4f194cu: goto label_4f194c;
        case 0x4f1950u: goto label_4f1950;
        case 0x4f1954u: goto label_4f1954;
        case 0x4f1958u: goto label_4f1958;
        case 0x4f195cu: goto label_4f195c;
        case 0x4f1960u: goto label_4f1960;
        case 0x4f1964u: goto label_4f1964;
        case 0x4f1968u: goto label_4f1968;
        case 0x4f196cu: goto label_4f196c;
        case 0x4f1970u: goto label_4f1970;
        case 0x4f1974u: goto label_4f1974;
        case 0x4f1978u: goto label_4f1978;
        case 0x4f197cu: goto label_4f197c;
        case 0x4f1980u: goto label_4f1980;
        case 0x4f1984u: goto label_4f1984;
        case 0x4f1988u: goto label_4f1988;
        case 0x4f198cu: goto label_4f198c;
        case 0x4f1990u: goto label_4f1990;
        case 0x4f1994u: goto label_4f1994;
        case 0x4f1998u: goto label_4f1998;
        case 0x4f199cu: goto label_4f199c;
        case 0x4f19a0u: goto label_4f19a0;
        case 0x4f19a4u: goto label_4f19a4;
        case 0x4f19a8u: goto label_4f19a8;
        case 0x4f19acu: goto label_4f19ac;
        case 0x4f19b0u: goto label_4f19b0;
        case 0x4f19b4u: goto label_4f19b4;
        case 0x4f19b8u: goto label_4f19b8;
        case 0x4f19bcu: goto label_4f19bc;
        case 0x4f19c0u: goto label_4f19c0;
        case 0x4f19c4u: goto label_4f19c4;
        case 0x4f19c8u: goto label_4f19c8;
        case 0x4f19ccu: goto label_4f19cc;
        case 0x4f19d0u: goto label_4f19d0;
        case 0x4f19d4u: goto label_4f19d4;
        case 0x4f19d8u: goto label_4f19d8;
        case 0x4f19dcu: goto label_4f19dc;
        case 0x4f19e0u: goto label_4f19e0;
        case 0x4f19e4u: goto label_4f19e4;
        case 0x4f19e8u: goto label_4f19e8;
        case 0x4f19ecu: goto label_4f19ec;
        case 0x4f19f0u: goto label_4f19f0;
        case 0x4f19f4u: goto label_4f19f4;
        case 0x4f19f8u: goto label_4f19f8;
        case 0x4f19fcu: goto label_4f19fc;
        case 0x4f1a00u: goto label_4f1a00;
        case 0x4f1a04u: goto label_4f1a04;
        case 0x4f1a08u: goto label_4f1a08;
        case 0x4f1a0cu: goto label_4f1a0c;
        case 0x4f1a10u: goto label_4f1a10;
        case 0x4f1a14u: goto label_4f1a14;
        case 0x4f1a18u: goto label_4f1a18;
        case 0x4f1a1cu: goto label_4f1a1c;
        case 0x4f1a20u: goto label_4f1a20;
        case 0x4f1a24u: goto label_4f1a24;
        case 0x4f1a28u: goto label_4f1a28;
        case 0x4f1a2cu: goto label_4f1a2c;
        case 0x4f1a30u: goto label_4f1a30;
        case 0x4f1a34u: goto label_4f1a34;
        case 0x4f1a38u: goto label_4f1a38;
        case 0x4f1a3cu: goto label_4f1a3c;
        case 0x4f1a40u: goto label_4f1a40;
        case 0x4f1a44u: goto label_4f1a44;
        case 0x4f1a48u: goto label_4f1a48;
        case 0x4f1a4cu: goto label_4f1a4c;
        case 0x4f1a50u: goto label_4f1a50;
        case 0x4f1a54u: goto label_4f1a54;
        case 0x4f1a58u: goto label_4f1a58;
        case 0x4f1a5cu: goto label_4f1a5c;
        case 0x4f1a60u: goto label_4f1a60;
        case 0x4f1a64u: goto label_4f1a64;
        case 0x4f1a68u: goto label_4f1a68;
        case 0x4f1a6cu: goto label_4f1a6c;
        case 0x4f1a70u: goto label_4f1a70;
        case 0x4f1a74u: goto label_4f1a74;
        default: break;
    }

    ctx->pc = 0x4f12b8u;

label_4f12b8:
    // 0x4f12b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f12b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f12bc:
    // 0x4f12bc: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x4f12bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_4f12c0:
    // 0x4f12c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f12c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4f12c4:
    // 0x4f12c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f12c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f12c8:
    // 0x4f12c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f12c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f12cc:
    // 0x4f12cc: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x4f12ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
label_4f12d0:
    // 0x4f12d0: 0xc01d07a  jal         func_0741E8
label_4f12d4:
    if (ctx->pc == 0x4F12D4u) {
        ctx->pc = 0x4F12D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F12D0u;
        // 0x4f12d4: 0x24844700  addiu       $a0, $a0, 0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F12D8u;
        goto label_4f12d8;
    }
    ctx->pc = 0x4F12D0u;
    SET_GPR_U32(ctx, 31, 0x4F12D8u);
    ctx->pc = 0x4F12D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F12D0u;
    // 0x4f12d4: 0x24844700  addiu       $a0, $a0, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x741E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x741E8u, 0x4F12D0u, 0x4F12D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F12D8u;
label_4f12d8:
    // 0x4f12d8: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x4f12d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_4f12dc:
    // 0x4f12dc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4f12dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_4f12e0:
    // 0x4f12e0: 0x3c0603ff  lui         $a2, 0x3FF
    ctx->pc = 0x4f12e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1023 << 16));
label_4f12e4:
    // 0x4f12e4: 0x3c070c00  lui         $a3, 0xC00
    ctx->pc = 0x4f12e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3072 << 16));
label_4f12e8:
    // 0x4f12e8: 0x24434780  addiu       $v1, $v0, 0x4780
    ctx->pc = 0x4f12e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 18304));
label_4f12ec:
    // 0x4f12ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4f12ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f12f0:
    // 0x4f12f0: 0x34a5c402  ori         $a1, $a1, 0xC402
    ctx->pc = 0x4f12f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50178);
label_4f12f4:
    // 0x4f12f4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f12f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4f12f8:
    // 0x4f12f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4f12f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f12fc:
    // 0x4f12fc: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
label_4f1300:
    if (ctx->pc == 0x4F1300u) {
        ctx->pc = 0x4F1300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F12FCu;
        // 0x4f1300: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1304u;
        goto label_4f1304;
    }
    ctx->pc = 0x4F12FCu;
    {
        const bool branch_taken_0x4f12fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f12fc) {
            ctx->pc = 0x4F1300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F12FCu;
            // 0x4f1300: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F131Cu;
            goto label_4f131c;
        }
    }
    ctx->pc = 0x4F1304u;
label_4f1304:
    // 0x4f1304: 0x16050009  bne         $s0, $a1, . + 4 + (0x9 << 2)
label_4f1308:
    if (ctx->pc == 0x4F1308u) {
        ctx->pc = 0x4F1308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1304u;
        // 0x4f1308: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F130Cu;
        goto label_4f130c;
    }
    ctx->pc = 0x4F1304u;
    {
        const bool branch_taken_0x4f1304 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x4F1308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1304u;
        // 0x4f1308: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1304) {
            ctx->pc = 0x4F132Cu;
            goto label_4f132c;
        }
    }
    ctx->pc = 0x4F130Cu;
label_4f130c:
    // 0x4f130c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x4f130cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_4f1310:
    // 0x4f1310: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4f1310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_4f1314:
    // 0x4f1314: 0x10000005  b           . + 4 + (0x5 << 2)
label_4f1318:
    if (ctx->pc == 0x4F1318u) {
        ctx->pc = 0x4F1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1314u;
        // 0x4f1318: 0x471025  or          $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F131Cu;
        goto label_4f131c;
    }
    ctx->pc = 0x4F1314u;
    {
        const bool branch_taken_0x4f1314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1314u;
        // 0x4f1318: 0x471025  or          $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1314) {
            ctx->pc = 0x4F132Cu;
            goto label_4f132c;
        }
    }
    ctx->pc = 0x4F131Cu;
label_4f131c:
    // 0x4f131c: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x4f131cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_4f1320:
    // 0x4f1320: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4f1324:
    if (ctx->pc == 0x4F1324u) {
        ctx->pc = 0x4F1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1320u;
        // 0x4f1324: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1328u;
        goto label_4f1328;
    }
    ctx->pc = 0x4F1320u;
    {
        const bool branch_taken_0x4f1320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1320u;
        // 0x4f1324: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1320) {
            ctx->pc = 0x4F12F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f12f8;
        }
    }
    ctx->pc = 0x4F1328u;
label_4f1328:
    // 0x4f1328: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4f1328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f132c:
    // 0x4f132c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f132cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f1330:
    // 0x4f1330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f1330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f1334:
    // 0x4f1334: 0x3e00008  jr          $ra
label_4f1338:
    if (ctx->pc == 0x4F1338u) {
        ctx->pc = 0x4F1338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1334u;
        // 0x4f1338: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F133Cu;
        goto label_4f133c;
    }
    ctx->pc = 0x4F1334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1334u;
        // 0x4f1338: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F133Cu;
label_4f133c:
    // 0x4f133c: 0x0  nop
    ctx->pc = 0x4f133cu;
    // NOP
label_4f1340:
    // 0x4f1340: 0x3c058007  lui         $a1, 0x8007
    ctx->pc = 0x4f1340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32775 << 16));
label_4f1344:
    // 0x4f1344: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4f1344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f1348:
    // 0x4f1348: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x4f1348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_4f134c:
    // 0x4f134c: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x4f134cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_4f1350:
    // 0x4f1350: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4f1350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_4f1354:
    // 0x4f1354: 0x2407fff9  addiu       $a3, $zero, -0x7
    ctx->pc = 0x4f1354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_4f1358:
    // 0x4f1358: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f1358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4f135c:
    // 0x4f135c: 0x2408fff7  addiu       $t0, $zero, -0x9
    ctx->pc = 0x4f135cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_4f1360:
    // 0x4f1360: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f1360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f1364:
    // 0x4f1364: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x4f1364u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_4f1368:
    // 0x4f1368: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f1368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4f136c:
    // 0x4f136c: 0x240ae01f  addiu       $t2, $zero, -0x1FE1
    ctx->pc = 0x4f136cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959135));
label_4f1370:
    // 0x4f1370: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4f1370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_4f1374:
    // 0x4f1374: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4f1374u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_4f1378:
    // 0x4f1378: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x4f1378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_4f137c:
    // 0x4f137c: 0x34c61fff  ori         $a2, $a2, 0x1FFF
    ctx->pc = 0x4f137cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8191);
label_4f1380:
    // 0x4f1380: 0x24a747a8  addiu       $a3, $a1, 0x47A8
    ctx->pc = 0x4f1380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 18344));
label_4f1384:
    // 0x4f1384: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x4f1384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
label_4f1388:
    // 0x4f1388: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f1388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f138c:
    // 0x4f138c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f138cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4f1390:
    // 0x4f1390: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4f1390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
label_4f1394:
    // 0x4f1394: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x4f1394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_4f1398:
    // 0x4f1398: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x4f1398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_4f139c:
    // 0x4f139c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f139cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f13a0:
    // 0x4f13a0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f13a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4f13a4:
    // 0x4f13a4: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x4f13a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
label_4f13a8:
    // 0x4f13a8: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x4f13a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_4f13ac:
    // 0x4f13ac: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4f13acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_4f13b0:
    // 0x4f13b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f13b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f13b4:
    // 0x4f13b4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f13b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4f13b8:
    // 0x4f13b8: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4f13b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
label_4f13bc:
    // 0x4f13bc: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x4f13bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_4f13c0:
    // 0x4f13c0: 0x30421fe0  andi        $v0, $v0, 0x1FE0
    ctx->pc = 0x4f13c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8160);
label_4f13c4:
    // 0x4f13c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f13c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f13c8:
    // 0x4f13c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f13c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4f13cc:
    // 0x4f13cc: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4f13ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_4f13d0:
    // 0x4f13d0: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x4f13d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_4f13d4:
    // 0x4f13d4: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x4f13d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_4f13d8:
    // 0x4f13d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f13d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f13dc:
    // 0x4f13dc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f13dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4f13e0:
    // 0x4f13e0: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x4f13e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_4f13e4:
    // 0x4f13e4: 0x3e00008  jr          $ra
label_4f13e8:
    if (ctx->pc == 0x4F13E8u) {
        ctx->pc = 0x4F13E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F13E4u;
        // 0x4f13e8: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F13ECu;
        goto label_4f13ec;
    }
    ctx->pc = 0x4F13E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F13E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F13E4u;
        // 0x4f13e8: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F13E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F13ECu;
label_4f13ec:
    // 0x4f13ec: 0x0  nop
    ctx->pc = 0x4f13ecu;
    // NOP
label_4f13f0:
    // 0x4f13f0: 0x3c058007  lui         $a1, 0x8007
    ctx->pc = 0x4f13f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32775 << 16));
label_4f13f4:
    // 0x4f13f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4f13f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f13f8:
    // 0x4f13f8: 0x8ca347a8  lw          $v1, 0x47A8($a1)
    ctx->pc = 0x4f13f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_4f13fc:
    // 0x4f13fc: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x4f13fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_4f1400:
    // 0x4f1400: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f1400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4f1404:
    // 0x4f1404: 0x2407fff9  addiu       $a3, $zero, -0x7
    ctx->pc = 0x4f1404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_4f1408:
    // 0x4f1408: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4f1408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_4f140c:
    // 0x4f140c: 0x2408fff7  addiu       $t0, $zero, -0x9
    ctx->pc = 0x4f140cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_4f1410:
    // 0x4f1410: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f1410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f1414:
    // 0x4f1414: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x4f1414u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_4f1418:
    // 0x4f1418: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x4f1418u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_4f141c:
    // 0x4f141c: 0x240ae01f  addiu       $t2, $zero, -0x1FE1
    ctx->pc = 0x4f141cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959135));
label_4f1420:
    // 0x4f1420: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4f1420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_4f1424:
    // 0x4f1424: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4f1424u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_4f1428:
    // 0x4f1428: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4f1428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f142c:
    // 0x4f142c: 0x34c61fff  ori         $a2, $a2, 0x1FFF
    ctx->pc = 0x4f142cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8191);
label_4f1430:
    // 0x4f1430: 0x24a747a8  addiu       $a3, $a1, 0x47A8
    ctx->pc = 0x4f1430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 18344));
label_4f1434:
    // 0x4f1434: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x4f1434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
label_4f1438:
    // 0x4f1438: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f1438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f143c:
    // 0x4f143c: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x4f143cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_4f1440:
    // 0x4f1440: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4f1440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
label_4f1444:
    // 0x4f1444: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4f1444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f1448:
    // 0x4f1448: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x4f1448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_4f144c:
    // 0x4f144c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f144cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f1450:
    // 0x4f1450: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x4f1450u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_4f1454:
    // 0x4f1454: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x4f1454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
label_4f1458:
    // 0x4f1458: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4f1458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f145c:
    // 0x4f145c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4f145cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_4f1460:
    // 0x4f1460: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f1460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f1464:
    // 0x4f1464: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x4f1464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_4f1468:
    // 0x4f1468: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4f1468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
label_4f146c:
    // 0x4f146c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4f146cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f1470:
    // 0x4f1470: 0x30421fe0  andi        $v0, $v0, 0x1FE0
    ctx->pc = 0x4f1470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8160);
label_4f1474:
    // 0x4f1474: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f1474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f1478:
    // 0x4f1478: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x4f1478u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_4f147c:
    // 0x4f147c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4f147cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_4f1480:
    // 0x4f1480: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4f1480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f1484:
    // 0x4f1484: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x4f1484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_4f1488:
    // 0x4f1488: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f1488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f148c:
    // 0x4f148c: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x4f148cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_4f1490:
    // 0x4f1490: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x4f1490u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_4f1494:
    // 0x4f1494: 0x3e00008  jr          $ra
label_4f1498:
    if (ctx->pc == 0x4F1498u) {
        ctx->pc = 0x4F1498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1494u;
        // 0x4f1498: 0xa4e20002  sh          $v0, 0x2($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F149Cu;
        goto label_4f149c;
    }
    ctx->pc = 0x4F1494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1494u;
        // 0x4f1498: 0xa4e20002  sh          $v0, 0x2($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F149Cu;
label_4f149c:
    // 0x4f149c: 0x0  nop
    ctx->pc = 0x4f149cu;
    // NOP
label_4f14a0:
    // 0x4f14a0: 0x3c06bc00  lui         $a2, 0xBC00
    ctx->pc = 0x4f14a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48128 << 16));
label_4f14a4:
    // 0x4f14a4: 0x8cc603c0  lw          $a2, 0x3C0($a2)
    ctx->pc = 0x4f14a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 960)));
label_4f14a8:
    // 0x4f14a8: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_4f14ac:
    if (ctx->pc == 0x4F14ACu) {
        ctx->pc = 0x4F14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F14A8u;
        // 0x4f14ac: 0x3c088007  lui         $t0, 0x8007 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32775 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F14B0u;
        goto label_4f14b0;
    }
    ctx->pc = 0x4F14A8u;
    {
        const bool branch_taken_0x4f14a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F14A8u;
        // 0x4f14ac: 0x3c088007  lui         $t0, 0x8007 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32775 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f14a8) {
            ctx->pc = 0x4F14F0u;
            goto label_4f14f0;
        }
    }
    ctx->pc = 0x4F14B0u;
label_4f14b0:
    // 0x4f14b0: 0x3c02bc00  lui         $v0, 0xBC00
    ctx->pc = 0x4f14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48128 << 16));
label_4f14b4:
    // 0x4f14b4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4f14b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4f14b8:
    // 0x4f14b8: 0x25074700  addiu       $a3, $t0, 0x4700
    ctx->pc = 0x4f14b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 18176));
label_4f14bc:
    // 0x4f14bc: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x4f14bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_4f14c0:
    // 0x4f14c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f14c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f14c4:
    // 0x4f14c4: 0x0  nop
    ctx->pc = 0x4f14c4u;
    // NOP
label_4f14c8:
    // 0x4f14c8: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x4f14c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_4f14cc:
    // 0x4f14cc: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x4f14ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_4f14d0:
    // 0x4f14d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4f14d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4f14d4:
    // 0x4f14d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4f14d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4f14d8:
    // 0x4f14d8: 0x28a20026  slti        $v0, $a1, 0x26
    ctx->pc = 0x4f14d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)38) ? 1 : 0);
label_4f14dc:
    // 0x4f14dc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x4f14dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_4f14e0:
    // 0x4f14e0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_4f14e4:
    if (ctx->pc == 0x4F14E4u) {
        ctx->pc = 0x4F14E8u;
        goto label_4f14e8;
    }
    ctx->pc = 0x4F14E0u;
    {
        const bool branch_taken_0x4f14e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f14e0) {
            ctx->pc = 0x4F14C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f14c8;
        }
    }
    ctx->pc = 0x4F14E8u;
label_4f14e8:
    // 0x4f14e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_4f14ec:
    if (ctx->pc == 0x4F14ECu) {
        ctx->pc = 0x4F14ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F14E8u;
        // 0x4f14ec: 0xdd034700  ld          $v1, 0x4700($t0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 18176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F14F0u;
        goto label_4f14f0;
    }
    ctx->pc = 0x4F14E8u;
    {
        const bool branch_taken_0x4f14e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F14ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F14E8u;
        // 0x4f14ec: 0xdd034700  ld          $v1, 0x4700($t0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 18176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f14e8) {
            ctx->pc = 0x4F14F4u;
            goto label_4f14f4;
        }
    }
    ctx->pc = 0x4F14F0u;
label_4f14f0:
    // 0x4f14f0: 0xdd034700  ld          $v1, 0x4700($t0)
    ctx->pc = 0x4f14f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 18176)));
label_4f14f4:
    // 0x4f14f4: 0x316b8  dsll        $v0, $v1, 26
    ctx->pc = 0x4f14f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 26);
label_4f14f8:
    // 0x4f14f8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4f14f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4f14fc:
    // 0x4f14fc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4f14fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_4f1500:
    // 0x4f1500: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_4f1504:
    if (ctx->pc == 0x4F1504u) {
        ctx->pc = 0x4F1508u;
        goto label_4f1508;
    }
    ctx->pc = 0x4F1500u;
    {
        const bool branch_taken_0x4f1500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f1500) {
            ctx->pc = 0x4F1558u;
            goto label_4f1558;
        }
    }
    ctx->pc = 0x4F1508u;
label_4f1508:
    // 0x4f1508: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x4f1508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_4f150c:
    // 0x4f150c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4f150cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_4f1510:
    // 0x4f1510: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f1510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4f1514:
    // 0x4f1514: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4f1514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_4f1518:
    // 0x4f1518: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f1518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4f151c:
    // 0x4f151c: 0x2404f3ff  addiu       $a0, $zero, -0xC01
    ctx->pc = 0x4f151cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964223));
label_4f1520:
    // 0x4f1520: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4f1520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_4f1524:
    // 0x4f1524: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f1524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4f1528:
    // 0x4f1528: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4f1528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_4f152c:
    // 0x4f152c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f152cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4f1530:
    // 0x4f1530: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4f1530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4f1534:
    // 0x4f1534: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4f1534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4f1538:
    // 0x4f1538: 0x34630fff  ori         $v1, $v1, 0xFFF
    ctx->pc = 0x4f1538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4095);
label_4f153c:
    // 0x4f153c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4f153cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_4f1540:
    // 0x4f1540: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4f1544:
    // 0x4f1544: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4f1544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_4f1548:
    // 0x4f1548: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4f154c:
    // 0x4f154c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4f154cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_4f1550:
    // 0x4f1550: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f1550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4f1554:
    // 0x4f1554: 0xfd024700  sd          $v0, 0x4700($t0)
    ctx->pc = 0x4f1554u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 18176), GPR_U64(ctx, 2));
label_4f1558:
    // 0x4f1558: 0x3e00008  jr          $ra
label_4f155c:
    if (ctx->pc == 0x4F155Cu) {
        ctx->pc = 0x4F1560u;
        goto label_4f1560;
    }
    ctx->pc = 0x4F1558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F1560u;
label_4f1560:
    // 0x4f1560: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x4f1560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4f1564:
    // 0x4f1564: 0x2ce20081  sltiu       $v0, $a3, 0x81
    ctx->pc = 0x4f1564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_4f1568:
    // 0x4f1568: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_4f156c:
    if (ctx->pc == 0x4F156Cu) {
        ctx->pc = 0x4F156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1568u;
        // 0x4f156c: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1570u;
        goto label_4f1570;
    }
    ctx->pc = 0x4F1568u;
    {
        const bool branch_taken_0x4f1568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1568u;
        // 0x4f156c: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1568) {
            ctx->pc = 0x4F158Cu;
            goto label_4f158c;
        }
    }
    ctx->pc = 0x4F1570u;
label_4f1570:
    // 0x4f1570: 0x2cc20080  sltiu       $v0, $a2, 0x80
    ctx->pc = 0x4f1570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_4f1574:
    // 0x4f1574: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4f1578:
    if (ctx->pc == 0x4F1578u) {
        ctx->pc = 0x4F1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1574u;
        // 0x4f1578: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F157Cu;
        goto label_4f157c;
    }
    ctx->pc = 0x4F1574u;
    {
        const bool branch_taken_0x4f1574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1574u;
        // 0x4f1578: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1574) {
            ctx->pc = 0x4F1584u;
            goto label_4f1584;
        }
    }
    ctx->pc = 0x4F157Cu;
label_4f157c:
    // 0x4f157c: 0x10000003  b           . + 4 + (0x3 << 2)
label_4f1580:
    if (ctx->pc == 0x4F1580u) {
        ctx->pc = 0x4F1580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F157Cu;
        // 0x4f1580: 0x462823  subu        $a1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1584u;
        goto label_4f1584;
    }
    ctx->pc = 0x4F157Cu;
    {
        const bool branch_taken_0x4f157c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F157Cu;
        // 0x4f1580: 0x462823  subu        $a1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f157c) {
            ctx->pc = 0x4F158Cu;
            goto label_4f158c;
        }
    }
    ctx->pc = 0x4F1584u;
label_4f1584:
    // 0x4f1584: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x4f1584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4f1588:
    // 0x4f1588: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f1588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f158c:
    // 0x4f158c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4f158cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4f1590:
    // 0x4f1590: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x4f1590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4f1594:
    // 0x4f1594: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_4f1598:
    if (ctx->pc == 0x4F1598u) {
        ctx->pc = 0x4F1598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1594u;
        // 0x4f1598: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F159Cu;
        goto label_4f159c;
    }
    ctx->pc = 0x4F1594u;
    {
        const bool branch_taken_0x4f1594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1594u;
        // 0x4f1598: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1594) {
            ctx->pc = 0x4F15D4u;
            goto label_4f15d4;
        }
    }
    ctx->pc = 0x4F159Cu;
label_4f159c:
    // 0x4f159c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x4f159cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f15a0:
    // 0x4f15a0: 0x3c098007  lui         $t1, 0x8007
    ctx->pc = 0x4f15a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32775 << 16));
label_4f15a4:
    // 0x4f15a4: 0x3c058007  lui         $a1, 0x8007
    ctx->pc = 0x4f15a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32775 << 16));
label_4f15a8:
    // 0x4f15a8: 0x24a247b0  addiu       $v0, $a1, 0x47B0
    ctx->pc = 0x4f15a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 18352));
label_4f15ac:
    // 0x4f15ac: 0x1482021  addu        $a0, $t2, $t0
    ctx->pc = 0x4f15acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_4f15b0:
    // 0x4f15b0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4f15b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4f15b4:
    // 0x4f15b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4f15b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_4f15b8:
    // 0x4f15b8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4f15b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4f15bc:
    // 0x4f15bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4f15bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4f15c0:
    // 0x4f15c0: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x4f15c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_4f15c4:
    // 0x4f15c4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_4f15c8:
    if (ctx->pc == 0x4F15C8u) {
        ctx->pc = 0x4F15C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F15C4u;
        // 0x4f15c8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F15CCu;
        goto label_4f15cc;
    }
    ctx->pc = 0x4F15C4u;
    {
        const bool branch_taken_0x4f15c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F15C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F15C4u;
        // 0x4f15c8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f15c4) {
            ctx->pc = 0x4F15A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f15a8;
        }
    }
    ctx->pc = 0x4F15CCu;
label_4f15cc:
    // 0x4f15cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_4f15d0:
    if (ctx->pc == 0x4F15D0u) {
        ctx->pc = 0x4F15D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F15CCu;
        // 0x4f15d0: 0xdd234700  ld          $v1, 0x4700($t1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 18176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F15D4u;
        goto label_4f15d4;
    }
    ctx->pc = 0x4F15CCu;
    {
        const bool branch_taken_0x4f15cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F15D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F15CCu;
        // 0x4f15d0: 0xdd234700  ld          $v1, 0x4700($t1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 18176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f15cc) {
            ctx->pc = 0x4F15DCu;
            goto label_4f15dc;
        }
    }
    ctx->pc = 0x4F15D4u;
label_4f15d4:
    // 0x4f15d4: 0x3c098007  lui         $t1, 0x8007
    ctx->pc = 0x4f15d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32775 << 16));
label_4f15d8:
    // 0x4f15d8: 0xdd234700  ld          $v1, 0x4700($t1)
    ctx->pc = 0x4f15d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 18176)));
label_4f15dc:
    // 0x4f15dc: 0x316b8  dsll        $v0, $v1, 26
    ctx->pc = 0x4f15dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 26);
label_4f15e0:
    // 0x4f15e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4f15e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4f15e4:
    // 0x4f15e4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4f15e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_4f15e8:
    // 0x4f15e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4f15ec:
    if (ctx->pc == 0x4F15ECu) {
        ctx->pc = 0x4F15F0u;
        goto label_4f15f0;
    }
    ctx->pc = 0x4F15E8u;
    {
        const bool branch_taken_0x4f15e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f15e8) {
            ctx->pc = 0x4F15F8u;
            goto label_4f15f8;
        }
    }
    ctx->pc = 0x4F15F0u;
label_4f15f0:
    // 0x4f15f0: 0x3e00008  jr          $ra
label_4f15f4:
    if (ctx->pc == 0x4F15F4u) {
        ctx->pc = 0x4F15F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F15F0u;
        // 0x4f15f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F15F8u;
        goto label_4f15f8;
    }
    ctx->pc = 0x4F15F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F15F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F15F0u;
        // 0x4f15f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F15F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F15F8u;
label_4f15f8:
    // 0x4f15f8: 0x3133e  dsrl32      $v0, $v1, 12
    ctx->pc = 0x4f15f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (32 + 12));
label_4f15fc:
    // 0x4f15fc: 0x3e00008  jr          $ra
label_4f1600:
    if (ctx->pc == 0x4F1600u) {
        ctx->pc = 0x4F1600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F15FCu;
        // 0x4f1600: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1604u;
        goto label_4f1604;
    }
    ctx->pc = 0x4F15FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F15FCu;
        // 0x4f1600: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F15FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F1604u;
label_4f1604:
    // 0x4f1604: 0x0  nop
    ctx->pc = 0x4f1604u;
    // NOP
label_4f1608:
    // 0x4f1608: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4f1608u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f160c:
    // 0x4f160c: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x4f160cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4f1610:
    // 0x4f1610: 0x2ca20081  sltiu       $v0, $a1, 0x81
    ctx->pc = 0x4f1610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_4f1614:
    // 0x4f1614: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_4f1618:
    if (ctx->pc == 0x4F1618u) {
        ctx->pc = 0x4F1618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1614u;
        // 0x4f1618: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F161Cu;
        goto label_4f161c;
    }
    ctx->pc = 0x4F1614u;
    {
        const bool branch_taken_0x4f1614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F1618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1614u;
        // 0x4f1618: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1614) {
            ctx->pc = 0x4F163Cu;
            goto label_4f163c;
        }
    }
    ctx->pc = 0x4F161Cu;
label_4f161c:
    // 0x4f161c: 0x2cc20080  sltiu       $v0, $a2, 0x80
    ctx->pc = 0x4f161cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_4f1620:
    // 0x4f1620: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4f1624:
    if (ctx->pc == 0x4F1624u) {
        ctx->pc = 0x4F1624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1620u;
        // 0x4f1624: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1628u;
        goto label_4f1628;
    }
    ctx->pc = 0x4F1620u;
    {
        const bool branch_taken_0x4f1620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1620u;
        // 0x4f1624: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1620) {
            ctx->pc = 0x4F1630u;
            goto label_4f1630;
        }
    }
    ctx->pc = 0x4F1628u;
label_4f1628:
    // 0x4f1628: 0x10000003  b           . + 4 + (0x3 << 2)
label_4f162c:
    if (ctx->pc == 0x4F162Cu) {
        ctx->pc = 0x4F162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1628u;
        // 0x4f162c: 0x461823  subu        $v1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1630u;
        goto label_4f1630;
    }
    ctx->pc = 0x4F1628u;
    {
        const bool branch_taken_0x4f1628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1628u;
        // 0x4f162c: 0x461823  subu        $v1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1628) {
            ctx->pc = 0x4F1638u;
            goto label_4f1638;
        }
    }
    ctx->pc = 0x4F1630u;
label_4f1630:
    // 0x4f1630: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x4f1630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4f1634:
    // 0x4f1634: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4f1634u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f1638:
    // 0x4f1638: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x4f1638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4f163c:
    // 0x4f163c: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x4f163cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4f1640:
    // 0x4f1640: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_4f1644:
    if (ctx->pc == 0x4F1644u) {
        ctx->pc = 0x4F1644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1640u;
        // 0x4f1644: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1648u;
        goto label_4f1648;
    }
    ctx->pc = 0x4F1640u;
    {
        const bool branch_taken_0x4f1640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1640u;
        // 0x4f1644: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1640) {
            ctx->pc = 0x4F1674u;
            goto label_4f1674;
        }
    }
    ctx->pc = 0x4F1648u;
label_4f1648:
    // 0x4f1648: 0x3c088007  lui         $t0, 0x8007
    ctx->pc = 0x4f1648u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32775 << 16));
label_4f164c:
    // 0x4f164c: 0x0  nop
    ctx->pc = 0x4f164cu;
    // NOP
label_4f1650:
    // 0x4f1650: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x4f1650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_4f1654:
    // 0x4f1654: 0x250347b0  addiu       $v1, $t0, 0x47B0
    ctx->pc = 0x4f1654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 18352));
label_4f1658:
    // 0x4f1658: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x4f1658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4f165c:
    // 0x4f165c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x4f165cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4f1660:
    // 0x4f1660: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4f1660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4f1664:
    // 0x4f1664: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4f1664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_4f1668:
    // 0x4f1668: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x4f1668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4f166c:
    // 0x4f166c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_4f1670:
    if (ctx->pc == 0x4F1670u) {
        ctx->pc = 0x4F1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F166Cu;
        // 0x4f1670: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1674u;
        goto label_4f1674;
    }
    ctx->pc = 0x4F166Cu;
    {
        const bool branch_taken_0x4f166c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F166Cu;
        // 0x4f1670: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f166c) {
            ctx->pc = 0x4F1650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f1650;
        }
    }
    ctx->pc = 0x4F1674u;
label_4f1674:
    // 0x4f1674: 0x3e00008  jr          $ra
label_4f1678:
    if (ctx->pc == 0x4F1678u) {
        ctx->pc = 0x4F167Cu;
        goto label_4f167c;
    }
    ctx->pc = 0x4F1674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F167Cu;
label_4f167c:
    // 0x4f167c: 0x0  nop
    ctx->pc = 0x4f167cu;
    // NOP
label_4f1680:
    // 0x4f1680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f1680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4f1684:
    // 0x4f1684: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4f1684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_4f1688:
    // 0x4f1688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f1688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f168c:
    // 0x4f168c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4f168cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f1690:
    // 0x4f1690: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x4f1690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_4f1694:
    // 0x4f1694: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x4f1694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_4f1698:
    // 0x4f1698: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4f1698u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000f000
label_4f169c:
    // 0x4f169c: 0x3484f000  ori         $a0, $a0, 0xF000
    ctx->pc = 0x4f169cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61440);
label_4f16a0:
    // 0x4f16a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4f16a0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x1000f000
label_4f16a4:
    // 0x4f16a4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x4f16a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_4f16a8:
    // 0x4f16a8: 0x0  nop
    ctx->pc = 0x4f16a8u;
    // NOP
label_4f16ac:
    // 0x4f16ac: 0x0  nop
    ctx->pc = 0x4f16acu;
    // NOP
label_4f16b0:
    // 0x4f16b0: 0x0  nop
    ctx->pc = 0x4f16b0u;
    // NOP
label_4f16b4:
    // 0x4f16b4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_4f16b8:
    if (ctx->pc == 0x4F16B8u) {
        ctx->pc = 0x4F16BCu;
        goto label_4f16bc;
    }
    ctx->pc = 0x4F16B4u;
    {
        const bool branch_taken_0x4f16b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f16b4) {
            ctx->pc = 0x4F16A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f16a0;
        }
    }
    ctx->pc = 0x4F16BCu;
label_4f16bc:
    // 0x4f16bc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4f16bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_4f16c0:
    // 0x4f16c0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4f16c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f16c4:
    // 0x4f16c4: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x4f16c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_4f16c8:
    // 0x4f16c8: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x4f16c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_4f16cc:
    // 0x4f16cc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4f16ccu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4)); // MMIO: 0x1000f000
label_4f16d0:
    // 0x4f16d0: 0x8c624760  lw          $v0, 0x4760($v1)
    ctx->pc = 0x4f16d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18272)));
label_4f16d4:
    // 0x4f16d4: 0x40f809  jalr        $v0
label_4f16d8:
    if (ctx->pc == 0x4F16D8u) {
        ctx->pc = 0x4F16DCu;
        goto label_4f16dc;
    }
    ctx->pc = 0x4F16D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F16DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F16D4u, 0x4F16DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F16DCu;
label_4f16dc:
    // 0x4f16dc: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x4f16dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_4f16e0:
    // 0x4f16e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4f16e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f16e4:
    // 0x4f16e4: 0x8c434764  lw          $v1, 0x4764($v0)
    ctx->pc = 0x4f16e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18276)));
label_4f16e8:
    // 0x4f16e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4f16e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f16ec:
    // 0x4f16ec: 0x60f809  jalr        $v1
label_4f16f0:
    if (ctx->pc == 0x4F16F0u) {
        ctx->pc = 0x4F16F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F16ECu;
        // 0x4f16f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F16F4u;
        goto label_4f16f4;
    }
    ctx->pc = 0x4F16ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F16F4u);
        ctx->pc = 0x4F16F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F16ECu;
        // 0x4f16f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F16ECu, 0x4F16F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F16F4u;
label_4f16f4:
    // 0x4f16f4: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x4f16f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_4f16f8:
    // 0x4f16f8: 0x8c43474c  lw          $v1, 0x474C($v0)
    ctx->pc = 0x4f16f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18252)));
label_4f16fc:
    // 0x4f16fc: 0x60f809  jalr        $v1
label_4f1700:
    if (ctx->pc == 0x4F1700u) {
        ctx->pc = 0x4F1700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F16FCu;
        // 0x4f1700: 0x3404dffd  ori         $a0, $zero, 0xDFFD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57341);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1704u;
        goto label_4f1704;
    }
    ctx->pc = 0x4F16FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F1704u);
        ctx->pc = 0x4F1700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F16FCu;
        // 0x4f1700: 0x3404dffd  ori         $a0, $zero, 0xDFFD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57341);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F16FCu, 0x4F1704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F1704u;
label_4f1704:
    // 0x4f1704: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x4f1704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_4f1708:
    // 0x4f1708: 0x8c434750  lw          $v1, 0x4750($v0)
    ctx->pc = 0x4f1708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18256)));
label_4f170c:
    // 0x4f170c: 0x60f809  jalr        $v1
label_4f1710:
    if (ctx->pc == 0x4F1710u) {
        ctx->pc = 0x4F1714u;
        goto label_4f1714;
    }
    ctx->pc = 0x4F170Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F1714u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F170Cu, 0x4F1714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F1714u;
label_4f1714:
    // 0x4f1714: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x4f1714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_4f1718:
    // 0x4f1718: 0x8c43475c  lw          $v1, 0x475C($v0)
    ctx->pc = 0x4f1718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18268)));
label_4f171c:
    // 0x4f171c: 0x60f809  jalr        $v1
label_4f1720:
    if (ctx->pc == 0x4F1720u) {
        ctx->pc = 0x4F1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F171Cu;
        // 0x4f1720: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1724u;
        goto label_4f1724;
    }
    ctx->pc = 0x4F171Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F1724u);
        ctx->pc = 0x4F1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F171Cu;
        // 0x4f1720: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F171Cu, 0x4F1724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F1724u;
label_4f1724:
    // 0x4f1724: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x4f1724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_4f1728:
    // 0x4f1728: 0x8c434754  lw          $v1, 0x4754($v0)
    ctx->pc = 0x4f1728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18260)));
label_4f172c:
    // 0x4f172c: 0x60f809  jalr        $v1
label_4f1730:
    if (ctx->pc == 0x4F1730u) {
        ctx->pc = 0x4F1734u;
        goto label_4f1734;
    }
    ctx->pc = 0x4F172Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F1734u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F172Cu, 0x4F1734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F1734u;
label_4f1734:
    // 0x4f1734: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x4f1734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_4f1738:
    // 0x4f1738: 0x8c434758  lw          $v1, 0x4758($v0)
    ctx->pc = 0x4f1738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18264)));
label_4f173c:
    // 0x4f173c: 0x60f809  jalr        $v1
label_4f1740:
    if (ctx->pc == 0x4F1740u) {
        ctx->pc = 0x4F1744u;
        goto label_4f1744;
    }
    ctx->pc = 0x4F173Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F1744u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F173Cu, 0x4F1744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F1744u;
label_4f1744:
    // 0x4f1744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f1744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f1748:
    // 0x4f1748: 0x3e00008  jr          $ra
label_4f174c:
    if (ctx->pc == 0x4F174Cu) {
        ctx->pc = 0x4F174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1748u;
        // 0x4f174c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1750u;
        goto label_4f1750;
    }
    ctx->pc = 0x4F1748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1748u;
        // 0x4f174c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F1750u;
label_4f1750:
    // 0x4f1750: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4f1750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4f1754:
    // 0x4f1754: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x4f1754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_4f1758:
    // 0x4f1758: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x4f1758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_4f175c:
    // 0x4f175c: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x4f175cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_4f1760:
    // 0x4f1760: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x4f1760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_4f1764:
    // 0x4f1764: 0x241e0010  addiu       $fp, $zero, 0x10
    ctx->pc = 0x4f1764u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4f1768:
    // 0x4f1768: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x4f1768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_4f176c:
    // 0x4f176c: 0x3c178007  lui         $s7, 0x8007
    ctx->pc = 0x4f176cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32775 << 16));
label_4f1770:
    // 0x4f1770: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x4f1770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_4f1774:
    // 0x4f1774: 0x3c168007  lui         $s6, 0x8007
    ctx->pc = 0x4f1774u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32775 << 16));
label_4f1778:
    // 0x4f1778: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x4f1778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_4f177c:
    // 0x4f177c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4f177cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f1780:
    // 0x4f1780: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4f1780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_4f1784:
    // 0x4f1784: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4f1784u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4f1788:
    // 0x4f1788: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x4f1788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_4f178c:
    // 0x4f178c: 0x3c128007  lui         $s2, 0x8007
    ctx->pc = 0x4f178cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32775 << 16));
label_4f1790:
    // 0x4f1790: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4f1790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_4f1794:
    // 0x4f1794: 0x2411004c  addiu       $s1, $zero, 0x4C
    ctx->pc = 0x4f1794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_4f1798:
    // 0x4f1798: 0x8c484728  lw          $t0, 0x4728($v0)
    ctx->pc = 0x4f1798u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18216)));
label_4f179c:
    // 0x4f179c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x4f179cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f17a0:
    // 0x4f17a0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4f17a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4f17a4:
    // 0x4f17a4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4f17a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_4f17a8:
    // 0x4f17a8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x4f17a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_4f17ac:
    // 0x4f17ac: 0x8d130000  lw          $s3, 0x0($t0)
    ctx->pc = 0x4f17acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f17b0:
    // 0x4f17b0: 0x8c624730  lw          $v0, 0x4730($v1)
    ctx->pc = 0x4f17b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18224)));
label_4f17b4:
    // 0x4f17b4: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x4f17b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
label_4f17b8:
    // 0x4f17b8: 0x40f809  jalr        $v0
label_4f17bc:
    if (ctx->pc == 0x4F17BCu) {
        ctx->pc = 0x4F17BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F17B8u;
        // 0x4f17bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F17C0u;
        goto label_4f17c0;
    }
    ctx->pc = 0x4F17B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F17C0u);
        ctx->pc = 0x4F17BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F17B8u;
        // 0x4f17bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F17B8u, 0x4F17C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F17C0u;
label_4f17c0:
    // 0x4f17c0: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x4f17c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_4f17c4:
    // 0x4f17c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4f17c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4f17c8:
    // 0x4f17c8: 0x8c624734  lw          $v0, 0x4734($v1)
    ctx->pc = 0x4f17c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18228)));
label_4f17cc:
    // 0x4f17cc: 0x40f809  jalr        $v0
label_4f17d0:
    if (ctx->pc == 0x4F17D0u) {
        ctx->pc = 0x4F17D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F17CCu;
        // 0x4f17d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F17D4u;
        goto label_4f17d4;
    }
    ctx->pc = 0x4F17CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F17D4u);
        ctx->pc = 0x4F17D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F17CCu;
        // 0x4f17d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F17CCu, 0x4F17D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F17D4u;
label_4f17d4:
    // 0x4f17d4: 0x0  nop
    ctx->pc = 0x4f17d4u;
    // NOP
label_4f17d8:
    // 0x4f17d8: 0x8ec24748  lw          $v0, 0x4748($s6)
    ctx->pc = 0x4f17d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18248)));
label_4f17dc:
    // 0x4f17dc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4f17dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4f17e0:
    // 0x4f17e0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4f17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4f17e4:
    // 0x4f17e4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_4f17e8:
    if (ctx->pc == 0x4F17E8u) {
        ctx->pc = 0x4F17E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F17E4u;
        // 0x4f17e8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F17ECu;
        goto label_4f17ec;
    }
    ctx->pc = 0x4F17E4u;
    {
        const bool branch_taken_0x4f17e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f17e4) {
            ctx->pc = 0x4F17E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F17E4u;
            // 0x4f17e8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F1828u;
            goto label_4f1828;
        }
    }
    ctx->pc = 0x4F17ECu;
label_4f17ec:
    // 0x4f17ec: 0x5213000e  beql        $s0, $s3, . + 4 + (0xE << 2)
label_4f17f0:
    if (ctx->pc == 0x4F17F0u) {
        ctx->pc = 0x4F17F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F17ECu;
        // 0x4f17f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F17F4u;
        goto label_4f17f4;
    }
    ctx->pc = 0x4F17ECu;
    {
        const bool branch_taken_0x4f17ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x4f17ec) {
            ctx->pc = 0x4F17F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F17ECu;
            // 0x4f17f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F1828u;
            goto label_4f1828;
        }
    }
    ctx->pc = 0x4F17F4u;
label_4f17f4:
    // 0x4f17f4: 0x145e0006  bne         $v0, $fp, . + 4 + (0x6 << 2)
label_4f17f8:
    if (ctx->pc == 0x4F17F8u) {
        ctx->pc = 0x4F17F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F17F4u;
        // 0x4f17f8: 0x8ee24744  lw          $v0, 0x4744($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F17FCu;
        goto label_4f17fc;
    }
    ctx->pc = 0x4F17F4u;
    {
        const bool branch_taken_0x4f17f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x4F17F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F17F4u;
        // 0x4f17f8: 0x8ee24744  lw          $v0, 0x4744($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f17f4) {
            ctx->pc = 0x4F1810u;
            goto label_4f1810;
        }
    }
    ctx->pc = 0x4F17FCu;
label_4f17fc:
    // 0x4f17fc: 0x8e424740  lw          $v0, 0x4740($s2)
    ctx->pc = 0x4f17fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18240)));
label_4f1800:
    // 0x4f1800: 0x40f809  jalr        $v0
label_4f1804:
    if (ctx->pc == 0x4F1804u) {
        ctx->pc = 0x4F1804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1800u;
        // 0x4f1804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1808u;
        goto label_4f1808;
    }
    ctx->pc = 0x4F1800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F1808u);
        ctx->pc = 0x4F1804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1800u;
        // 0x4f1804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1800u, 0x4F1808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F1808u;
label_4f1808:
    // 0x4f1808: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f180c:
    if (ctx->pc == 0x4F180Cu) {
        ctx->pc = 0x4F180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1808u;
        // 0x4f180c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1810u;
        goto label_4f1810;
    }
    ctx->pc = 0x4F1808u;
    {
        const bool branch_taken_0x4f1808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1808u;
        // 0x4f180c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1808) {
            ctx->pc = 0x4F1828u;
            goto label_4f1828;
        }
    }
    ctx->pc = 0x4F1810u;
label_4f1810:
    // 0x4f1810: 0x40f809  jalr        $v0
label_4f1814:
    if (ctx->pc == 0x4F1814u) {
        ctx->pc = 0x4F1814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1810u;
        // 0x4f1814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1818u;
        goto label_4f1818;
    }
    ctx->pc = 0x4F1810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F1818u);
        ctx->pc = 0x4F1814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1810u;
        // 0x4f1814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1810u, 0x4F1818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F1818u;
label_4f1818:
    // 0x4f1818: 0x8e424740  lw          $v0, 0x4740($s2)
    ctx->pc = 0x4f1818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18240)));
label_4f181c:
    // 0x4f181c: 0x40f809  jalr        $v0
label_4f1820:
    if (ctx->pc == 0x4F1820u) {
        ctx->pc = 0x4F1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F181Cu;
        // 0x4f1820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1824u;
        goto label_4f1824;
    }
    ctx->pc = 0x4F181Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F1824u);
        ctx->pc = 0x4F1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F181Cu;
        // 0x4f1820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F181Cu, 0x4F1824u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F1824u;
label_4f1824:
    // 0x4f1824: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4f1824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4f1828:
    // 0x4f1828: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x4f1828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
label_4f182c:
    // 0x4f182c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_4f1830:
    if (ctx->pc == 0x4F1830u) {
        ctx->pc = 0x4F1830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F182Cu;
        // 0x4f1830: 0x2631004c  addiu       $s1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1834u;
        goto label_4f1834;
    }
    ctx->pc = 0x4F182Cu;
    {
        const bool branch_taken_0x4f182c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F1830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F182Cu;
        // 0x4f1830: 0x2631004c  addiu       $s1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f182c) {
            ctx->pc = 0x4F17D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f17d8;
        }
    }
    ctx->pc = 0x4F1834u;
label_4f1834:
    // 0x4f1834: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x4f1834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_4f1838:
    // 0x4f1838: 0x8c62473c  lw          $v0, 0x473C($v1)
    ctx->pc = 0x4f1838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18236)));
label_4f183c:
    // 0x4f183c: 0x40f809  jalr        $v0
label_4f1840:
    if (ctx->pc == 0x4F1840u) {
        ctx->pc = 0x4F1840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F183Cu;
        // 0x4f1840: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1844u;
        goto label_4f1844;
    }
    ctx->pc = 0x4F183Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F1844u);
        ctx->pc = 0x4F1840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F183Cu;
        // 0x4f1840: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F183Cu, 0x4F1844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F1844u;
label_4f1844:
    // 0x4f1844: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x4f1844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_4f1848:
    // 0x4f1848: 0x8c624738  lw          $v0, 0x4738($v1)
    ctx->pc = 0x4f1848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18232)));
label_4f184c:
    // 0x4f184c: 0x40f809  jalr        $v0
label_4f1850:
    if (ctx->pc == 0x4F1850u) {
        ctx->pc = 0x4F1854u;
        goto label_4f1854;
    }
    ctx->pc = 0x4F184Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F1854u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F184Cu, 0x4F1854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F1854u;
label_4f1854:
    // 0x4f1854: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x4f1854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_4f1858:
    // 0x4f1858: 0x8c62472c  lw          $v0, 0x472C($v1)
    ctx->pc = 0x4f1858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18220)));
label_4f185c:
    // 0x4f185c: 0xc01d0f2  jal         func_0743C8
label_4f1860:
    if (ctx->pc == 0x4F1860u) {
        ctx->pc = 0x4F1860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F185Cu;
        // 0x4f1860: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1864u;
        goto label_4f1864;
    }
    ctx->pc = 0x4F185Cu;
    SET_GPR_U32(ctx, 31, 0x4F1864u);
    ctx->pc = 0x4F1860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F185Cu;
    // 0x4f1860: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x743C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x743C8u, 0x4F185Cu, 0x4F1864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1864u;
label_4f1864:
    // 0x4f1864: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x4f1864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_4f1868:
    // 0x4f1868: 0x1a80000d  blez        $s4, . + 4 + (0xD << 2)
label_4f186c:
    if (ctx->pc == 0x4F186Cu) {
        ctx->pc = 0x4F186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1868u;
        // 0x4f186c: 0x8c444778  lw          $a0, 0x4778($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1870u;
        goto label_4f1870;
    }
    ctx->pc = 0x4F1868u;
    {
        const bool branch_taken_0x4f1868 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x4F186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1868u;
        // 0x4f186c: 0x8c444778  lw          $a0, 0x4778($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1868) {
            ctx->pc = 0x4F18A0u;
            goto label_4f18a0;
        }
    }
    ctx->pc = 0x4F1870u;
label_4f1870:
    // 0x4f1870: 0x3c118007  lui         $s1, 0x8007
    ctx->pc = 0x4f1870u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32775 << 16));
label_4f1874:
    // 0x4f1874: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x4f1874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4f1878:
    // 0x4f1878: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x4f1878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4f187c:
    // 0x4f187c: 0x8e224770  lw          $v0, 0x4770($s1)
    ctx->pc = 0x4f187cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18288)));
label_4f1880:
    // 0x4f1880: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4f1880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4f1884:
    // 0x4f1884: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4f1884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4f1888:
    // 0x4f1888: 0x40f809  jalr        $v0
label_4f188c:
    if (ctx->pc == 0x4F188Cu) {
        ctx->pc = 0x4F188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1888u;
        // 0x4f188c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1890u;
        goto label_4f1890;
    }
    ctx->pc = 0x4F1888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F1890u);
        ctx->pc = 0x4F188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1888u;
        // 0x4f188c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1888u, 0x4F1890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F1890u;
label_4f1890:
    // 0x4f1890: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f1890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f1894:
    // 0x4f1894: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x4f1894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_4f1898:
    // 0x4f1898: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_4f189c:
    if (ctx->pc == 0x4F189Cu) {
        ctx->pc = 0x4F189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1898u;
        // 0x4f189c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F18A0u;
        goto label_4f18a0;
    }
    ctx->pc = 0x4F1898u;
    {
        const bool branch_taken_0x4f1898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1898u;
        // 0x4f189c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1898) {
            ctx->pc = 0x4F1878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f1878;
        }
    }
    ctx->pc = 0x4F18A0u;
label_4f18a0:
    // 0x4f18a0: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x4f18a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_4f18a4:
    // 0x4f18a4: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x4f18a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_4f18a8:
    // 0x4f18a8: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x4f18a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4f18ac:
    // 0x4f18ac: 0x8ec54748  lw          $a1, 0x4748($s6)
    ctx->pc = 0x4f18acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18248)));
label_4f18b0:
    // 0x4f18b0: 0x8c644778  lw          $a0, 0x4778($v1)
    ctx->pc = 0x4f18b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18296)));
label_4f18b4:
    // 0x4f18b4: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x4f18b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_4f18b8:
    // 0x4f18b8: 0x8c66476c  lw          $a2, 0x476C($v1)
    ctx->pc = 0x4f18b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18284)));
label_4f18bc:
    // 0x4f18bc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4f18bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4f18c0:
    // 0x4f18c0: 0xac440038  sw          $a0, 0x38($v0)
    ctx->pc = 0x4f18c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 4));
label_4f18c4:
    // 0x4f18c4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4f18c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4f18c8:
    // 0x4f18c8: 0xac540034  sw          $s4, 0x34($v0)
    ctx->pc = 0x4f18c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 20));
label_4f18cc:
    // 0x4f18cc: 0xac55000c  sw          $s5, 0xC($v0)
    ctx->pc = 0x4f18ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
label_4f18d0:
    // 0x4f18d0: 0xac550030  sw          $s5, 0x30($v0)
    ctx->pc = 0x4f18d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 21));
label_4f18d4:
    // 0x4f18d4: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x4f18d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_4f18d8:
    // 0x4f18d8: 0xa440001a  sh          $zero, 0x1A($v0)
    ctx->pc = 0x4f18d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 26), (uint16_t)GPR_U32(ctx, 0));
label_4f18dc:
    // 0x4f18dc: 0xa4400018  sh          $zero, 0x18($v0)
    ctx->pc = 0x4f18dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 0));
label_4f18e0:
    // 0x4f18e0: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x4f18e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_4f18e4:
    // 0x4f18e4: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x4f18e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_4f18e8:
    // 0x4f18e8: 0xc0f809  jalr        $a2
label_4f18ec:
    if (ctx->pc == 0x4F18ECu) {
        ctx->pc = 0x4F18ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F18E8u;
        // 0x4f18ec: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F18F0u;
        goto label_4f18f0;
    }
    ctx->pc = 0x4F18E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x4F18F0u);
        ctx->pc = 0x4F18ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F18E8u;
        // 0x4f18ec: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F18E8u, 0x4F18F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F18F0u;
label_4f18f0:
    // 0x4f18f0: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x4f18f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_4f18f4:
    // 0x4f18f4: 0x8c434768  lw          $v1, 0x4768($v0)
    ctx->pc = 0x4f18f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18280)));
label_4f18f8:
    // 0x4f18f8: 0x60f809  jalr        $v1
label_4f18fc:
    if (ctx->pc == 0x4F18FCu) {
        ctx->pc = 0x4F1900u;
        goto label_4f1900;
    }
    ctx->pc = 0x4F18F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F1900u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F18F8u, 0x4F1900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F1900u;
label_4f1900:
    // 0x4f1900: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x4f1900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4f1904:
    // 0x4f1904: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4f1904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4f1908:
    // 0x4f1908: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x4f1908u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4f190c:
    // 0x4f190c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x4f190cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4f1910:
    // 0x4f1910: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x4f1910u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4f1914:
    // 0x4f1914: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x4f1914u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4f1918:
    // 0x4f1918: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x4f1918u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4f191c:
    // 0x4f191c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x4f191cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4f1920:
    // 0x4f1920: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4f1920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4f1924:
    // 0x4f1924: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x4f1924u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4f1928:
    // 0x4f1928: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4f1928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f192c:
    // 0x4f192c: 0x3e00008  jr          $ra
label_4f1930:
    if (ctx->pc == 0x4F1930u) {
        ctx->pc = 0x4F1930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F192Cu;
        // 0x4f1930: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1934u;
        goto label_4f1934;
    }
    ctx->pc = 0x4F192Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F192Cu;
        // 0x4f1930: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F192Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F1934u;
label_4f1934:
    // 0x4f1934: 0x0  nop
    ctx->pc = 0x4f1934u;
    // NOP
label_4f1938:
    // 0x4f1938: 0x0  nop
    ctx->pc = 0x4f1938u;
    // NOP
label_4f193c:
    // 0x4f193c: 0x0  nop
    ctx->pc = 0x4f193cu;
    // NOP
label_4f1940:
    // 0x4f1940: 0x0  nop
    ctx->pc = 0x4f1940u;
    // NOP
label_4f1944:
    // 0x4f1944: 0x0  nop
    ctx->pc = 0x4f1944u;
    // NOP
label_4f1948:
    // 0x4f1948: 0x0  nop
    ctx->pc = 0x4f1948u;
    // NOP
label_4f194c:
    // 0x4f194c: 0x0  nop
    ctx->pc = 0x4f194cu;
    // NOP
label_4f1950:
    // 0x4f1950: 0x0  nop
    ctx->pc = 0x4f1950u;
    // NOP
label_4f1954:
    // 0x4f1954: 0x0  nop
    ctx->pc = 0x4f1954u;
    // NOP
label_4f1958:
    // 0x4f1958: 0x0  nop
    ctx->pc = 0x4f1958u;
    // NOP
label_4f195c:
    // 0x4f195c: 0x0  nop
    ctx->pc = 0x4f195cu;
    // NOP
label_4f1960:
    // 0x4f1960: 0x0  nop
    ctx->pc = 0x4f1960u;
    // NOP
label_4f1964:
    // 0x4f1964: 0x0  nop
    ctx->pc = 0x4f1964u;
    // NOP
label_4f1968:
    // 0x4f1968: 0x0  nop
    ctx->pc = 0x4f1968u;
    // NOP
label_4f196c:
    // 0x4f196c: 0x0  nop
    ctx->pc = 0x4f196cu;
    // NOP
label_4f1970:
    // 0x4f1970: 0x0  nop
    ctx->pc = 0x4f1970u;
    // NOP
label_4f1974:
    // 0x4f1974: 0x0  nop
    ctx->pc = 0x4f1974u;
    // NOP
label_4f1978:
    // 0x4f1978: 0x0  nop
    ctx->pc = 0x4f1978u;
    // NOP
label_4f197c:
    // 0x4f197c: 0x0  nop
    ctx->pc = 0x4f197cu;
    // NOP
label_4f1980:
    // 0x4f1980: 0x0  nop
    ctx->pc = 0x4f1980u;
    // NOP
label_4f1984:
    // 0x4f1984: 0x0  nop
    ctx->pc = 0x4f1984u;
    // NOP
label_4f1988:
    // 0x4f1988: 0x0  nop
    ctx->pc = 0x4f1988u;
    // NOP
label_4f198c:
    // 0x4f198c: 0x0  nop
    ctx->pc = 0x4f198cu;
    // NOP
label_4f1990:
    // 0x4f1990: 0x0  nop
    ctx->pc = 0x4f1990u;
    // NOP
label_4f1994:
    // 0x4f1994: 0x0  nop
    ctx->pc = 0x4f1994u;
    // NOP
label_4f1998:
    // 0x4f1998: 0x0  nop
    ctx->pc = 0x4f1998u;
    // NOP
label_4f199c:
    // 0x4f199c: 0x0  nop
    ctx->pc = 0x4f199cu;
    // NOP
label_4f19a0:
    // 0x4f19a0: 0x0  nop
    ctx->pc = 0x4f19a0u;
    // NOP
label_4f19a4:
    // 0x4f19a4: 0x0  nop
    ctx->pc = 0x4f19a4u;
    // NOP
label_4f19a8:
    // 0x4f19a8: 0x0  nop
    ctx->pc = 0x4f19a8u;
    // NOP
label_4f19ac:
    // 0x4f19ac: 0x0  nop
    ctx->pc = 0x4f19acu;
    // NOP
label_4f19b0:
    // 0x4f19b0: 0x0  nop
    ctx->pc = 0x4f19b0u;
    // NOP
label_4f19b4:
    // 0x4f19b4: 0x0  nop
    ctx->pc = 0x4f19b4u;
    // NOP
label_4f19b8:
    // 0x4f19b8: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x4f19b8u;
    
label_4f19bc:
    // 0x4f19bc: 0x0  nop
    ctx->pc = 0x4f19bcu;
    // NOP
label_4f19c0:
    // 0x4f19c0: 0x0  nop
    ctx->pc = 0x4f19c0u;
    // NOP
label_4f19c4:
    // 0x4f19c4: 0x0  nop
    ctx->pc = 0x4f19c4u;
    // NOP
label_4f19c8:
    // 0x4f19c8: 0x0  nop
    ctx->pc = 0x4f19c8u;
    // NOP
label_4f19cc:
    // 0x4f19cc: 0x0  nop
    ctx->pc = 0x4f19ccu;
    // NOP
label_4f19d0:
    // 0x4f19d0: 0x0  nop
    ctx->pc = 0x4f19d0u;
    // NOP
label_4f19d4:
    // 0x4f19d4: 0x0  nop
    ctx->pc = 0x4f19d4u;
    // NOP
label_4f19d8:
    // 0x4f19d8: 0x0  nop
    ctx->pc = 0x4f19d8u;
    // NOP
label_4f19dc:
    // 0x4f19dc: 0x0  nop
    ctx->pc = 0x4f19dcu;
    // NOP
label_4f19e0:
    // 0x4f19e0: 0x800125ec  lb          $at, 0x25EC($zero)
    ctx->pc = 0x4f19e0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x25ECu));
label_4f19e4:
    // 0x4f19e4: 0x800125f4  lb          $at, 0x25F4($zero)
    ctx->pc = 0x4f19e4u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x25F4u));
label_4f19e8:
    // 0x4f19e8: 0x80004970  lb          $zero, 0x4970($zero)
    ctx->pc = 0x4f19e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x4970u));
label_4f19ec:
    // 0x4f19ec: 0x80004288  lb          $zero, 0x4288($zero)
    ctx->pc = 0x4f19ecu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x4288u));
label_4f19f0:
    // 0x4f19f0: 0x800021b0  lb          $zero, 0x21B0($zero)
    ctx->pc = 0x4f19f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x21B0u));
label_4f19f4:
    // 0x4f19f4: 0x80004e68  lb          $zero, 0x4E68($zero)
    ctx->pc = 0x4f19f4u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x4E68u));
label_4f19f8:
    // 0x4f19f8: 0x80003f00  lb          $zero, 0x3F00($zero)
    ctx->pc = 0x4f19f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3F00u));
label_4f19fc:
    // 0x4f19fc: 0x80003e00  lb          $zero, 0x3E00($zero)
    ctx->pc = 0x4f19fcu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3E00u));
label_4f1a00:
    // 0x4f1a00: 0x80017400  lb          $at, 0x7400($zero)
    ctx->pc = 0x4f1a00u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x7400u));
label_4f1a04:
    // 0x4f1a04: 0x8000b8d0  lb          $zero, -0x4730($zero)
    ctx->pc = 0x4f1a04u;
    SET_GPR_S32(ctx, 0, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFB8D0u));
label_4f1a08:
    // 0x4f1a08: 0x8000b900  lb          $zero, -0x4700($zero)
    ctx->pc = 0x4f1a08u;
    SET_GPR_S32(ctx, 0, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFB900u));
label_4f1a0c:
    // 0x4f1a0c: 0x8000b7a8  lb          $zero, -0x4858($zero)
    ctx->pc = 0x4f1a0cu;
    SET_GPR_S32(ctx, 0, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFB7A8u));
label_4f1a10:
    // 0x4f1a10: 0x8000b840  lb          $zero, -0x47C0($zero)
    ctx->pc = 0x4f1a10u;
    SET_GPR_S32(ctx, 0, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFB840u));
label_4f1a14:
    // 0x4f1a14: 0x8000ad68  lb          $zero, -0x5298($zero)
    ctx->pc = 0x4f1a14u;
    SET_GPR_S32(ctx, 0, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFAD68u));
label_4f1a18:
    // 0x4f1a18: 0x8000aa60  lb          $zero, -0x55A0($zero)
    ctx->pc = 0x4f1a18u;
    SET_GPR_S32(ctx, 0, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFAA60u));
label_4f1a1c:
    // 0x4f1a1c: 0x8000a060  lb          $zero, -0x5FA0($zero)
    ctx->pc = 0x4f1a1cu;
    SET_GPR_S32(ctx, 0, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFA060u));
label_4f1a20:
    // 0x4f1a20: 0x80002a80  lb          $zero, 0x2A80($zero)
    ctx->pc = 0x4f1a20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2A80u));
label_4f1a24:
    // 0x4f1a24: 0x80002ac0  lb          $zero, 0x2AC0($zero)
    ctx->pc = 0x4f1a24u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2AC0u));
label_4f1a28:
    // 0x4f1a28: 0x80005560  lb          $zero, 0x5560($zero)
    ctx->pc = 0x4f1a28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x5560u));
label_4f1a2c:
    // 0x4f1a2c: 0x80012600  lb          $at, 0x2600($zero)
    ctx->pc = 0x4f1a2cu;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2600u));
label_4f1a30:
    // 0x4f1a30: 0x80012608  lb          $at, 0x2608($zero)
    ctx->pc = 0x4f1a30u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2608u));
label_4f1a34:
    // 0x4f1a34: 0x0  nop
    ctx->pc = 0x4f1a34u;
    // NOP
label_4f1a38:
    // 0x4f1a38: 0x4a  .word       0x0000004A                   # movz        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f1a38u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_4f1a3c:
    // 0x4f1a3c: 0x80074138  lb          $a3, 0x4138($zero)
    ctx->pc = 0x4f1a3cu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x4138u));
label_4f1a40:
    // 0x4f1a40: 0x4b  .word       0x0000004B                   # movn        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f1a40u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_4f1a44:
    // 0x4f1a44: 0x80074088  lb          $a3, 0x4088($zero)
    ctx->pc = 0x4f1a44u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x4088u));
label_4f1a48:
    // 0x4f1a48: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f1a48u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_4f1a4c:
    // 0x4f1a4c: 0x80074350  lb          $a3, 0x4350($zero)
    ctx->pc = 0x4f1a4cu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x4350u));
label_4f1a50:
    // 0x4f1a50: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f1a50u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_4f1a54:
    // 0x4f1a54: 0x800742a8  lb          $a3, 0x42A8($zero)
    ctx->pc = 0x4f1a54u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x42A8u));
label_4f1a58:
    // 0x4f1a58: 0xffffc402  sd          $ra, -0x3BFE($ra)
    ctx->pc = 0x4f1a58u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294951938), GPR_U64(ctx, 31));
label_4f1a5c:
    // 0x4f1a5c: 0x80074498  lb          $a3, 0x4498($zero)
    ctx->pc = 0x4f1a5cu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x4498u));
label_4f1a60:
    // 0x4f1a60: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f1a60u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_4f1a64:
    // 0x4f1a64: 0x307f50  .word       0x00307F50                   # mfhi        $t7 # 00300740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f1a64u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_4f1a68:
    // 0x4f1a68: 0x5b  .word       0x0000005B                   # divu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f1a68u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_4f1a6c:
    // 0x4f1a6c: 0x80074000  lb          $a3, 0x4000($zero)
    ctx->pc = 0x4f1a6cu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x4000u));
label_4f1a70:
    // 0x4f1a70: 0xffffc402  sd          $ra, -0x3BFE($ra)
    ctx->pc = 0x4f1a70u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294951938), GPR_U64(ctx, 31));
label_4f1a74:
    // 0x4f1a74: 0x0  nop
    ctx->pc = 0x4f1a74u;
    // NOP
    ctx->pc = 0x4f1a78u;
}
