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

// Function: sub_001D1450
// Address: 0x1d1450 - 0x1d1900
void sub_001D1450_0x1d1450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1450_0x1d1450");
#endif

    switch (ctx->pc) {
        case 0x1d1450u: goto label_1d1450;
        case 0x1d1454u: goto label_1d1454;
        case 0x1d1458u: goto label_1d1458;
        case 0x1d145cu: goto label_1d145c;
        case 0x1d1460u: goto label_1d1460;
        case 0x1d1464u: goto label_1d1464;
        case 0x1d1468u: goto label_1d1468;
        case 0x1d146cu: goto label_1d146c;
        case 0x1d1470u: goto label_1d1470;
        case 0x1d1474u: goto label_1d1474;
        case 0x1d1478u: goto label_1d1478;
        case 0x1d147cu: goto label_1d147c;
        case 0x1d1480u: goto label_1d1480;
        case 0x1d1484u: goto label_1d1484;
        case 0x1d1488u: goto label_1d1488;
        case 0x1d148cu: goto label_1d148c;
        case 0x1d1490u: goto label_1d1490;
        case 0x1d1494u: goto label_1d1494;
        case 0x1d1498u: goto label_1d1498;
        case 0x1d149cu: goto label_1d149c;
        case 0x1d14a0u: goto label_1d14a0;
        case 0x1d14a4u: goto label_1d14a4;
        case 0x1d14a8u: goto label_1d14a8;
        case 0x1d14acu: goto label_1d14ac;
        case 0x1d14b0u: goto label_1d14b0;
        case 0x1d14b4u: goto label_1d14b4;
        case 0x1d14b8u: goto label_1d14b8;
        case 0x1d14bcu: goto label_1d14bc;
        case 0x1d14c0u: goto label_1d14c0;
        case 0x1d14c4u: goto label_1d14c4;
        case 0x1d14c8u: goto label_1d14c8;
        case 0x1d14ccu: goto label_1d14cc;
        case 0x1d14d0u: goto label_1d14d0;
        case 0x1d14d4u: goto label_1d14d4;
        case 0x1d14d8u: goto label_1d14d8;
        case 0x1d14dcu: goto label_1d14dc;
        case 0x1d14e0u: goto label_1d14e0;
        case 0x1d14e4u: goto label_1d14e4;
        case 0x1d14e8u: goto label_1d14e8;
        case 0x1d14ecu: goto label_1d14ec;
        case 0x1d14f0u: goto label_1d14f0;
        case 0x1d14f4u: goto label_1d14f4;
        case 0x1d14f8u: goto label_1d14f8;
        case 0x1d14fcu: goto label_1d14fc;
        case 0x1d1500u: goto label_1d1500;
        case 0x1d1504u: goto label_1d1504;
        case 0x1d1508u: goto label_1d1508;
        case 0x1d150cu: goto label_1d150c;
        case 0x1d1510u: goto label_1d1510;
        case 0x1d1514u: goto label_1d1514;
        case 0x1d1518u: goto label_1d1518;
        case 0x1d151cu: goto label_1d151c;
        case 0x1d1520u: goto label_1d1520;
        case 0x1d1524u: goto label_1d1524;
        case 0x1d1528u: goto label_1d1528;
        case 0x1d152cu: goto label_1d152c;
        case 0x1d1530u: goto label_1d1530;
        case 0x1d1534u: goto label_1d1534;
        case 0x1d1538u: goto label_1d1538;
        case 0x1d153cu: goto label_1d153c;
        case 0x1d1540u: goto label_1d1540;
        case 0x1d1544u: goto label_1d1544;
        case 0x1d1548u: goto label_1d1548;
        case 0x1d154cu: goto label_1d154c;
        case 0x1d1550u: goto label_1d1550;
        case 0x1d1554u: goto label_1d1554;
        case 0x1d1558u: goto label_1d1558;
        case 0x1d155cu: goto label_1d155c;
        case 0x1d1560u: goto label_1d1560;
        case 0x1d1564u: goto label_1d1564;
        case 0x1d1568u: goto label_1d1568;
        case 0x1d156cu: goto label_1d156c;
        case 0x1d1570u: goto label_1d1570;
        case 0x1d1574u: goto label_1d1574;
        case 0x1d1578u: goto label_1d1578;
        case 0x1d157cu: goto label_1d157c;
        case 0x1d1580u: goto label_1d1580;
        case 0x1d1584u: goto label_1d1584;
        case 0x1d1588u: goto label_1d1588;
        case 0x1d158cu: goto label_1d158c;
        case 0x1d1590u: goto label_1d1590;
        case 0x1d1594u: goto label_1d1594;
        case 0x1d1598u: goto label_1d1598;
        case 0x1d159cu: goto label_1d159c;
        case 0x1d15a0u: goto label_1d15a0;
        case 0x1d15a4u: goto label_1d15a4;
        case 0x1d15a8u: goto label_1d15a8;
        case 0x1d15acu: goto label_1d15ac;
        case 0x1d15b0u: goto label_1d15b0;
        case 0x1d15b4u: goto label_1d15b4;
        case 0x1d15b8u: goto label_1d15b8;
        case 0x1d15bcu: goto label_1d15bc;
        case 0x1d15c0u: goto label_1d15c0;
        case 0x1d15c4u: goto label_1d15c4;
        case 0x1d15c8u: goto label_1d15c8;
        case 0x1d15ccu: goto label_1d15cc;
        case 0x1d15d0u: goto label_1d15d0;
        case 0x1d15d4u: goto label_1d15d4;
        case 0x1d15d8u: goto label_1d15d8;
        case 0x1d15dcu: goto label_1d15dc;
        case 0x1d15e0u: goto label_1d15e0;
        case 0x1d15e4u: goto label_1d15e4;
        case 0x1d15e8u: goto label_1d15e8;
        case 0x1d15ecu: goto label_1d15ec;
        case 0x1d15f0u: goto label_1d15f0;
        case 0x1d15f4u: goto label_1d15f4;
        case 0x1d15f8u: goto label_1d15f8;
        case 0x1d15fcu: goto label_1d15fc;
        case 0x1d1600u: goto label_1d1600;
        case 0x1d1604u: goto label_1d1604;
        case 0x1d1608u: goto label_1d1608;
        case 0x1d160cu: goto label_1d160c;
        case 0x1d1610u: goto label_1d1610;
        case 0x1d1614u: goto label_1d1614;
        case 0x1d1618u: goto label_1d1618;
        case 0x1d161cu: goto label_1d161c;
        case 0x1d1620u: goto label_1d1620;
        case 0x1d1624u: goto label_1d1624;
        case 0x1d1628u: goto label_1d1628;
        case 0x1d162cu: goto label_1d162c;
        case 0x1d1630u: goto label_1d1630;
        case 0x1d1634u: goto label_1d1634;
        case 0x1d1638u: goto label_1d1638;
        case 0x1d163cu: goto label_1d163c;
        case 0x1d1640u: goto label_1d1640;
        case 0x1d1644u: goto label_1d1644;
        case 0x1d1648u: goto label_1d1648;
        case 0x1d164cu: goto label_1d164c;
        case 0x1d1650u: goto label_1d1650;
        case 0x1d1654u: goto label_1d1654;
        case 0x1d1658u: goto label_1d1658;
        case 0x1d165cu: goto label_1d165c;
        case 0x1d1660u: goto label_1d1660;
        case 0x1d1664u: goto label_1d1664;
        case 0x1d1668u: goto label_1d1668;
        case 0x1d166cu: goto label_1d166c;
        case 0x1d1670u: goto label_1d1670;
        case 0x1d1674u: goto label_1d1674;
        case 0x1d1678u: goto label_1d1678;
        case 0x1d167cu: goto label_1d167c;
        case 0x1d1680u: goto label_1d1680;
        case 0x1d1684u: goto label_1d1684;
        case 0x1d1688u: goto label_1d1688;
        case 0x1d168cu: goto label_1d168c;
        case 0x1d1690u: goto label_1d1690;
        case 0x1d1694u: goto label_1d1694;
        case 0x1d1698u: goto label_1d1698;
        case 0x1d169cu: goto label_1d169c;
        case 0x1d16a0u: goto label_1d16a0;
        case 0x1d16a4u: goto label_1d16a4;
        case 0x1d16a8u: goto label_1d16a8;
        case 0x1d16acu: goto label_1d16ac;
        case 0x1d16b0u: goto label_1d16b0;
        case 0x1d16b4u: goto label_1d16b4;
        case 0x1d16b8u: goto label_1d16b8;
        case 0x1d16bcu: goto label_1d16bc;
        case 0x1d16c0u: goto label_1d16c0;
        case 0x1d16c4u: goto label_1d16c4;
        case 0x1d16c8u: goto label_1d16c8;
        case 0x1d16ccu: goto label_1d16cc;
        case 0x1d16d0u: goto label_1d16d0;
        case 0x1d16d4u: goto label_1d16d4;
        case 0x1d16d8u: goto label_1d16d8;
        case 0x1d16dcu: goto label_1d16dc;
        case 0x1d16e0u: goto label_1d16e0;
        case 0x1d16e4u: goto label_1d16e4;
        case 0x1d16e8u: goto label_1d16e8;
        case 0x1d16ecu: goto label_1d16ec;
        case 0x1d16f0u: goto label_1d16f0;
        case 0x1d16f4u: goto label_1d16f4;
        case 0x1d16f8u: goto label_1d16f8;
        case 0x1d16fcu: goto label_1d16fc;
        case 0x1d1700u: goto label_1d1700;
        case 0x1d1704u: goto label_1d1704;
        case 0x1d1708u: goto label_1d1708;
        case 0x1d170cu: goto label_1d170c;
        case 0x1d1710u: goto label_1d1710;
        case 0x1d1714u: goto label_1d1714;
        case 0x1d1718u: goto label_1d1718;
        case 0x1d171cu: goto label_1d171c;
        case 0x1d1720u: goto label_1d1720;
        case 0x1d1724u: goto label_1d1724;
        case 0x1d1728u: goto label_1d1728;
        case 0x1d172cu: goto label_1d172c;
        case 0x1d1730u: goto label_1d1730;
        case 0x1d1734u: goto label_1d1734;
        case 0x1d1738u: goto label_1d1738;
        case 0x1d173cu: goto label_1d173c;
        case 0x1d1740u: goto label_1d1740;
        case 0x1d1744u: goto label_1d1744;
        case 0x1d1748u: goto label_1d1748;
        case 0x1d174cu: goto label_1d174c;
        case 0x1d1750u: goto label_1d1750;
        case 0x1d1754u: goto label_1d1754;
        case 0x1d1758u: goto label_1d1758;
        case 0x1d175cu: goto label_1d175c;
        case 0x1d1760u: goto label_1d1760;
        case 0x1d1764u: goto label_1d1764;
        case 0x1d1768u: goto label_1d1768;
        case 0x1d176cu: goto label_1d176c;
        case 0x1d1770u: goto label_1d1770;
        case 0x1d1774u: goto label_1d1774;
        case 0x1d1778u: goto label_1d1778;
        case 0x1d177cu: goto label_1d177c;
        case 0x1d1780u: goto label_1d1780;
        case 0x1d1784u: goto label_1d1784;
        case 0x1d1788u: goto label_1d1788;
        case 0x1d178cu: goto label_1d178c;
        case 0x1d1790u: goto label_1d1790;
        case 0x1d1794u: goto label_1d1794;
        case 0x1d1798u: goto label_1d1798;
        case 0x1d179cu: goto label_1d179c;
        case 0x1d17a0u: goto label_1d17a0;
        case 0x1d17a4u: goto label_1d17a4;
        case 0x1d17a8u: goto label_1d17a8;
        case 0x1d17acu: goto label_1d17ac;
        case 0x1d17b0u: goto label_1d17b0;
        case 0x1d17b4u: goto label_1d17b4;
        case 0x1d17b8u: goto label_1d17b8;
        case 0x1d17bcu: goto label_1d17bc;
        case 0x1d17c0u: goto label_1d17c0;
        case 0x1d17c4u: goto label_1d17c4;
        case 0x1d17c8u: goto label_1d17c8;
        case 0x1d17ccu: goto label_1d17cc;
        case 0x1d17d0u: goto label_1d17d0;
        case 0x1d17d4u: goto label_1d17d4;
        case 0x1d17d8u: goto label_1d17d8;
        case 0x1d17dcu: goto label_1d17dc;
        case 0x1d17e0u: goto label_1d17e0;
        case 0x1d17e4u: goto label_1d17e4;
        case 0x1d17e8u: goto label_1d17e8;
        case 0x1d17ecu: goto label_1d17ec;
        case 0x1d17f0u: goto label_1d17f0;
        case 0x1d17f4u: goto label_1d17f4;
        case 0x1d17f8u: goto label_1d17f8;
        case 0x1d17fcu: goto label_1d17fc;
        case 0x1d1800u: goto label_1d1800;
        case 0x1d1804u: goto label_1d1804;
        case 0x1d1808u: goto label_1d1808;
        case 0x1d180cu: goto label_1d180c;
        case 0x1d1810u: goto label_1d1810;
        case 0x1d1814u: goto label_1d1814;
        case 0x1d1818u: goto label_1d1818;
        case 0x1d181cu: goto label_1d181c;
        case 0x1d1820u: goto label_1d1820;
        case 0x1d1824u: goto label_1d1824;
        case 0x1d1828u: goto label_1d1828;
        case 0x1d182cu: goto label_1d182c;
        case 0x1d1830u: goto label_1d1830;
        case 0x1d1834u: goto label_1d1834;
        case 0x1d1838u: goto label_1d1838;
        case 0x1d183cu: goto label_1d183c;
        case 0x1d1840u: goto label_1d1840;
        case 0x1d1844u: goto label_1d1844;
        case 0x1d1848u: goto label_1d1848;
        case 0x1d184cu: goto label_1d184c;
        case 0x1d1850u: goto label_1d1850;
        case 0x1d1854u: goto label_1d1854;
        case 0x1d1858u: goto label_1d1858;
        case 0x1d185cu: goto label_1d185c;
        case 0x1d1860u: goto label_1d1860;
        case 0x1d1864u: goto label_1d1864;
        case 0x1d1868u: goto label_1d1868;
        case 0x1d186cu: goto label_1d186c;
        case 0x1d1870u: goto label_1d1870;
        case 0x1d1874u: goto label_1d1874;
        case 0x1d1878u: goto label_1d1878;
        case 0x1d187cu: goto label_1d187c;
        case 0x1d1880u: goto label_1d1880;
        case 0x1d1884u: goto label_1d1884;
        case 0x1d1888u: goto label_1d1888;
        case 0x1d188cu: goto label_1d188c;
        case 0x1d1890u: goto label_1d1890;
        case 0x1d1894u: goto label_1d1894;
        case 0x1d1898u: goto label_1d1898;
        case 0x1d189cu: goto label_1d189c;
        case 0x1d18a0u: goto label_1d18a0;
        case 0x1d18a4u: goto label_1d18a4;
        case 0x1d18a8u: goto label_1d18a8;
        case 0x1d18acu: goto label_1d18ac;
        case 0x1d18b0u: goto label_1d18b0;
        case 0x1d18b4u: goto label_1d18b4;
        case 0x1d18b8u: goto label_1d18b8;
        case 0x1d18bcu: goto label_1d18bc;
        case 0x1d18c0u: goto label_1d18c0;
        case 0x1d18c4u: goto label_1d18c4;
        case 0x1d18c8u: goto label_1d18c8;
        case 0x1d18ccu: goto label_1d18cc;
        case 0x1d18d0u: goto label_1d18d0;
        case 0x1d18d4u: goto label_1d18d4;
        case 0x1d18d8u: goto label_1d18d8;
        case 0x1d18dcu: goto label_1d18dc;
        case 0x1d18e0u: goto label_1d18e0;
        case 0x1d18e4u: goto label_1d18e4;
        case 0x1d18e8u: goto label_1d18e8;
        case 0x1d18ecu: goto label_1d18ec;
        case 0x1d18f0u: goto label_1d18f0;
        case 0x1d18f4u: goto label_1d18f4;
        case 0x1d18f8u: goto label_1d18f8;
        case 0x1d18fcu: goto label_1d18fc;
        default: break;
    }

    ctx->pc = 0x1d1450u;

label_1d1450:
    // 0x1d1450: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d1450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d1454:
    // 0x1d1454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d1458:
    // 0x1d1458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d145c:
    // 0x1d145c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1d145cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_1d1460:
    // 0x1d1460: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1d1460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1d1464:
    // 0x1d1464: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1d1464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d1468:
    // 0x1d1468: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1d1468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1d146c:
    // 0x1d146c: 0xc0400e0  jal         func_100380
label_1d1470:
    if (ctx->pc == 0x1D1470u) {
        ctx->pc = 0x1D1474u;
        goto label_1d1474;
    }
    ctx->pc = 0x1D146Cu;
    SET_GPR_U32(ctx, 31, 0x1D1474u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1D146Cu, 0x1D1474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1474u;
label_1d1474:
    // 0x1d1474: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1d1474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_1d1478:
    // 0x1d1478: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1d147c:
    if (ctx->pc == 0x1D147Cu) {
        ctx->pc = 0x1D1480u;
        goto label_1d1480;
    }
    ctx->pc = 0x1D1478u;
    {
        const bool branch_taken_0x1d1478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1478) {
            ctx->pc = 0x1D1490u;
            goto label_1d1490;
        }
    }
    ctx->pc = 0x1D1480u;
label_1d1480:
    // 0x1d1480: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d1480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1d1484:
    // 0x1d1484: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1d1484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1488:
    // 0x1d1488: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1d1488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1d148c:
    // 0x1d148c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1d148cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1d1490:
    // 0x1d1490: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x1d1490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1d1494:
    // 0x1d1494: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1498:
    // 0x1d1498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d149c:
    // 0x1d149c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1d149cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1d14a0:
    // 0x1d14a0: 0x3e00008  jr          $ra
label_1d14a4:
    if (ctx->pc == 0x1D14A4u) {
        ctx->pc = 0x1D14A8u;
        goto label_1d14a8;
    }
    ctx->pc = 0x1D14A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D14A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D14A8u;
label_1d14a8:
    // 0x1d14a8: 0x0  nop
    ctx->pc = 0x1d14a8u;
    // NOP
label_1d14ac:
    // 0x1d14ac: 0x0  nop
    ctx->pc = 0x1d14acu;
    // NOP
label_1d14b0:
    // 0x1d14b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d14b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d14b4:
    // 0x1d14b4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1d14b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1d14b8:
    // 0x1d14b8: 0x24427ab0  addiu       $v0, $v0, 0x7AB0
    ctx->pc = 0x1d14b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31408));
label_1d14bc:
    // 0x1d14bc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d14bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d14c0:
    // 0x1d14c0: 0x3e00008  jr          $ra
label_1d14c4:
    if (ctx->pc == 0x1D14C4u) {
        ctx->pc = 0x1D14C8u;
        goto label_1d14c8;
    }
    ctx->pc = 0x1D14C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D14C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D14C8u;
label_1d14c8:
    // 0x1d14c8: 0x0  nop
    ctx->pc = 0x1d14c8u;
    // NOP
label_1d14cc:
    // 0x1d14cc: 0x0  nop
    ctx->pc = 0x1d14ccu;
    // NOP
label_1d14d0:
    // 0x1d14d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d14d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d14d4:
    // 0x1d14d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d14d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d14d8:
    // 0x1d14d8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1d14d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_1d14dc:
    // 0x1d14dc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1d14dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d14e0:
    // 0x1d14e0: 0xc050530  jal         func_1414C0
label_1d14e4:
    if (ctx->pc == 0x1D14E4u) {
        ctx->pc = 0x1D14E8u;
        goto label_1d14e8;
    }
    ctx->pc = 0x1D14E0u;
    SET_GPR_U32(ctx, 31, 0x1D14E8u);
    ctx->pc = 0x1414C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414C0u, 0x1D14E0u, 0x1D14E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D14E8u;
label_1d14e8:
    // 0x1d14e8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1d14e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_1d14ec:
    // 0x1d14ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d14ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d14f0:
    // 0x1d14f0: 0x0  nop
    ctx->pc = 0x1d14f0u;
    // NOP
label_1d14f4:
    // 0x1d14f4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1d14f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d14f8:
    // 0x1d14f8: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x1d14f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_1d14fc:
    // 0x1d14fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d14fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1500:
    // 0x1d1500: 0x0  nop
    ctx->pc = 0x1d1500u;
    // NOP
label_1d1504:
    // 0x1d1504: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d1504u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d1508:
    // 0x1d1508: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1d1508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1d150c:
    // 0x1d150c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1d150cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1d1510:
    // 0x1d1510: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1514:
    // 0x1d1514: 0x0  nop
    ctx->pc = 0x1d1514u;
    // NOP
label_1d1518:
    // 0x1d1518: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1d1518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1d151c:
    // 0x1d151c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1d151cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_1d1520:
    // 0x1d1520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1524:
    // 0x1d1524: 0x0  nop
    ctx->pc = 0x1d1524u;
    // NOP
label_1d1528:
    // 0x1d1528: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1d1528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1d152c:
    // 0x1d152c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d152cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1d1530:
    // 0x1d1530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1534:
    // 0x1d1534: 0x0  nop
    ctx->pc = 0x1d1534u;
    // NOP
label_1d1538:
    // 0x1d1538: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1d1538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1d153c:
    // 0x1d153c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x1d153cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_1d1540:
    // 0x1d1540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1544:
    // 0x1d1544: 0x0  nop
    ctx->pc = 0x1d1544u;
    // NOP
label_1d1548:
    // 0x1d1548: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1d1548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1d154c:
    // 0x1d154c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x1d154cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_1d1550:
    // 0x1d1550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1554:
    // 0x1d1554: 0x0  nop
    ctx->pc = 0x1d1554u;
    // NOP
label_1d1558:
    // 0x1d1558: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1d1558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1d155c:
    // 0x1d155c: 0x3c024302  lui         $v0, 0x4302
    ctx->pc = 0x1d155cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17154 << 16));
label_1d1560:
    // 0x1d1560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1564:
    // 0x1d1564: 0x0  nop
    ctx->pc = 0x1d1564u;
    // NOP
label_1d1568:
    // 0x1d1568: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1d1568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1d156c:
    // 0x1d156c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d156cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d1570:
    // 0x1d1570: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1d1570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d1574:
    // 0x1d1574: 0xc050194  jal         func_140650
label_1d1578:
    if (ctx->pc == 0x1D1578u) {
        ctx->pc = 0x1D157Cu;
        goto label_1d157c;
    }
    ctx->pc = 0x1D1574u;
    SET_GPR_U32(ctx, 31, 0x1D157Cu);
    ctx->pc = 0x140650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140650u, 0x1D1574u, 0x1D157Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D157Cu;
label_1d157c:
    // 0x1d157c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d157cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1580:
    // 0x1d1580: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1d1580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1d1584:
    // 0x1d1584: 0x3e00008  jr          $ra
label_1d1588:
    if (ctx->pc == 0x1D1588u) {
        ctx->pc = 0x1D158Cu;
        goto label_1d158c;
    }
    ctx->pc = 0x1D1584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D158Cu;
label_1d158c:
    // 0x1d158c: 0x0  nop
    ctx->pc = 0x1d158cu;
    // NOP
label_1d1590:
    // 0x1d1590: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d1590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d1594:
    // 0x1d1594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d1598:
    // 0x1d1598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d159c:
    // 0x1d159c: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1d159cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_1d15a0:
    // 0x1d15a0: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1d15a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1d15a4:
    // 0x1d15a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d15a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d15a8:
    // 0x1d15a8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d15a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d15ac:
    // 0x1d15ac: 0xc085538  jal         func_2154E0
label_1d15b0:
    if (ctx->pc == 0x1D15B0u) {
        ctx->pc = 0x1D15B4u;
        goto label_1d15b4;
    }
    ctx->pc = 0x1D15ACu;
    SET_GPR_U32(ctx, 31, 0x1D15B4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D15ACu, 0x1D15B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D15B4u;
label_1d15b4:
    // 0x1d15b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d15b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d15b8:
    // 0x1d15b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d15b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1d15bc:
    // 0x1d15bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d15bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d15c0:
    // 0x1d15c0: 0xc090f80  jal         func_243E00
label_1d15c4:
    if (ctx->pc == 0x1D15C4u) {
        ctx->pc = 0x1D15C8u;
        goto label_1d15c8;
    }
    ctx->pc = 0x1D15C0u;
    SET_GPR_U32(ctx, 31, 0x1D15C8u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x1D15C0u, 0x1D15C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D15C8u;
label_1d15c8:
    // 0x1d15c8: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1d15c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1d15cc:
    // 0x1d15cc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1d15ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d15d0:
    // 0x1d15d0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1d15d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d15d4:
    // 0x1d15d4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1d15d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d15d8:
    // 0x1d15d8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1d15d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d15dc:
    // 0x1d15dc: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1d15dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1d15e0:
    // 0x1d15e0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1d15e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1d15e4:
    // 0x1d15e4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1d15e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1d15e8:
    // 0x1d15e8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d15e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d15ec:
    // 0x1d15ec: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1d15ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d15f0:
    // 0x1d15f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d15f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d15f4:
    // 0x1d15f4: 0xc106598  jal         func_419660
label_1d15f8:
    if (ctx->pc == 0x1D15F8u) {
        ctx->pc = 0x1D15FCu;
        goto label_1d15fc;
    }
    ctx->pc = 0x1D15F4u;
    SET_GPR_U32(ctx, 31, 0x1D15FCu);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x1D15F4u, 0x1D15FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D15FCu;
label_1d15fc:
    // 0x1d15fc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d15fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d1600:
    // 0x1d1600: 0xc106794  jal         func_419E50
label_1d1604:
    if (ctx->pc == 0x1D1604u) {
        ctx->pc = 0x1D1608u;
        goto label_1d1608;
    }
    ctx->pc = 0x1D1600u;
    SET_GPR_U32(ctx, 31, 0x1D1608u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x1D1600u, 0x1D1608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1608u;
label_1d1608:
    // 0x1d1608: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d160c:
    // 0x1d160c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d160cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1610:
    // 0x1d1610: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1d1610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1d1614:
    // 0x1d1614: 0x3e00008  jr          $ra
label_1d1618:
    if (ctx->pc == 0x1D1618u) {
        ctx->pc = 0x1D161Cu;
        goto label_1d161c;
    }
    ctx->pc = 0x1D1614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D161Cu;
label_1d161c:
    // 0x1d161c: 0x0  nop
    ctx->pc = 0x1d161cu;
    // NOP
label_1d1620:
    // 0x1d1620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d1624:
    // 0x1d1624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d1628:
    // 0x1d1628: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d1628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d162c:
    // 0x1d162c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1d162cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d1630:
    // 0x1d1630: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d1630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1634:
    // 0x1d1634: 0x244400a8  addiu       $a0, $v0, 0xA8
    ctx->pc = 0x1d1634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
label_1d1638:
    // 0x1d1638: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d1638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d163c:
    // 0x1d163c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d163cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d1640:
    // 0x1d1640: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1d1640u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1d1644:
    // 0x1d1644: 0x320f809  jalr        $t9
label_1d1648:
    if (ctx->pc == 0x1D1648u) {
        ctx->pc = 0x1D164Cu;
        goto label_1d164c;
    }
    ctx->pc = 0x1D1644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D164Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1644u, 0x1D164Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D164Cu;
label_1d164c:
    // 0x1d164c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d164cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1650:
    // 0x1d1650: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d1650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d1654:
    // 0x1d1654: 0x3e00008  jr          $ra
label_1d1658:
    if (ctx->pc == 0x1D1658u) {
        ctx->pc = 0x1D165Cu;
        goto label_1d165c;
    }
    ctx->pc = 0x1D1654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D165Cu;
label_1d165c:
    // 0x1d165c: 0x0  nop
    ctx->pc = 0x1d165cu;
    // NOP
label_1d1660:
    // 0x1d1660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d1664:
    // 0x1d1664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d1668:
    // 0x1d1668: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d1668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d166c:
    // 0x1d166c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1d166cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d1670:
    // 0x1d1670: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d1670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1674:
    // 0x1d1674: 0x244400a8  addiu       $a0, $v0, 0xA8
    ctx->pc = 0x1d1674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
label_1d1678:
    // 0x1d1678: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d1678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d167c:
    // 0x1d167c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d167cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d1680:
    // 0x1d1680: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1d1680u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1d1684:
    // 0x1d1684: 0x320f809  jalr        $t9
label_1d1688:
    if (ctx->pc == 0x1D1688u) {
        ctx->pc = 0x1D168Cu;
        goto label_1d168c;
    }
    ctx->pc = 0x1D1684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D168Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1684u, 0x1D168Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D168Cu;
label_1d168c:
    // 0x1d168c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d168cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1690:
    // 0x1d1690: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d1690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d1694:
    // 0x1d1694: 0x3e00008  jr          $ra
label_1d1698:
    if (ctx->pc == 0x1D1698u) {
        ctx->pc = 0x1D169Cu;
        goto label_1d169c;
    }
    ctx->pc = 0x1D1694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D169Cu;
label_1d169c:
    // 0x1d169c: 0x0  nop
    ctx->pc = 0x1d169cu;
    // NOP
label_1d16a0:
    // 0x1d16a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d16a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d16a4:
    // 0x1d16a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d16a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d16a8:
    // 0x1d16a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d16a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d16ac:
    // 0x1d16ac: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1d16acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d16b0:
    // 0x1d16b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d16b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d16b4:
    // 0x1d16b4: 0x244400a8  addiu       $a0, $v0, 0xA8
    ctx->pc = 0x1d16b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
label_1d16b8:
    // 0x1d16b8: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d16b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d16bc:
    // 0x1d16bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d16bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d16c0:
    // 0x1d16c0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1d16c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1d16c4:
    // 0x1d16c4: 0x320f809  jalr        $t9
label_1d16c8:
    if (ctx->pc == 0x1D16C8u) {
        ctx->pc = 0x1D16CCu;
        goto label_1d16cc;
    }
    ctx->pc = 0x1D16C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D16CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D16C4u, 0x1D16CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D16CCu;
label_1d16cc:
    // 0x1d16cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d16ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d16d0:
    // 0x1d16d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d16d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d16d4:
    // 0x1d16d4: 0x3e00008  jr          $ra
label_1d16d8:
    if (ctx->pc == 0x1D16D8u) {
        ctx->pc = 0x1D16DCu;
        goto label_1d16dc;
    }
    ctx->pc = 0x1D16D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D16D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D16DCu;
label_1d16dc:
    // 0x1d16dc: 0x0  nop
    ctx->pc = 0x1d16dcu;
    // NOP
label_1d16e0:
    // 0x1d16e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d16e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d16e4:
    // 0x1d16e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d16e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d16e8:
    // 0x1d16e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d16e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d16ec:
    // 0x1d16ec: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1d16ecu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d16f0:
    // 0x1d16f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d16f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d16f4:
    // 0x1d16f4: 0x244400a8  addiu       $a0, $v0, 0xA8
    ctx->pc = 0x1d16f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
label_1d16f8:
    // 0x1d16f8: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d16f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d16fc:
    // 0x1d16fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d16fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d1700:
    // 0x1d1700: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1d1700u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1d1704:
    // 0x1d1704: 0x320f809  jalr        $t9
label_1d1708:
    if (ctx->pc == 0x1D1708u) {
        ctx->pc = 0x1D170Cu;
        goto label_1d170c;
    }
    ctx->pc = 0x1D1704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D170Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1704u, 0x1D170Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D170Cu;
label_1d170c:
    // 0x1d170c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d170cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1710:
    // 0x1d1710: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d1710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d1714:
    // 0x1d1714: 0x3e00008  jr          $ra
label_1d1718:
    if (ctx->pc == 0x1D1718u) {
        ctx->pc = 0x1D171Cu;
        goto label_1d171c;
    }
    ctx->pc = 0x1D1714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D171Cu;
label_1d171c:
    // 0x1d171c: 0x0  nop
    ctx->pc = 0x1d171cu;
    // NOP
label_1d1720:
    // 0x1d1720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d1724:
    // 0x1d1724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d1728:
    // 0x1d1728: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d1728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d172c:
    // 0x1d172c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1d172cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d1730:
    // 0x1d1730: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d1730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1734:
    // 0x1d1734: 0x244400a8  addiu       $a0, $v0, 0xA8
    ctx->pc = 0x1d1734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
label_1d1738:
    // 0x1d1738: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d1738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d173c:
    // 0x1d173c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d173cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d1740:
    // 0x1d1740: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1d1740u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1d1744:
    // 0x1d1744: 0x320f809  jalr        $t9
label_1d1748:
    if (ctx->pc == 0x1D1748u) {
        ctx->pc = 0x1D174Cu;
        goto label_1d174c;
    }
    ctx->pc = 0x1D1744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D174Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1744u, 0x1D174Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D174Cu;
label_1d174c:
    // 0x1d174c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d174cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1750:
    // 0x1d1750: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d1750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d1754:
    // 0x1d1754: 0x3e00008  jr          $ra
label_1d1758:
    if (ctx->pc == 0x1D1758u) {
        ctx->pc = 0x1D175Cu;
        goto label_1d175c;
    }
    ctx->pc = 0x1D1754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D175Cu;
label_1d175c:
    // 0x1d175c: 0x0  nop
    ctx->pc = 0x1d175cu;
    // NOP
label_1d1760:
    // 0x1d1760: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d1760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d1764:
    // 0x1d1764: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d1764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d1768:
    // 0x1d1768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d176c:
    // 0x1d176c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d176cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d1770:
    // 0x1d1770: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1d1770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1d1774:
    // 0x1d1774: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d1774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1d1778:
    // 0x1d1778: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d1778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d177c:
    // 0x1d177c: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
label_1d1780:
    if (ctx->pc == 0x1D1780u) {
        ctx->pc = 0x1D1784u;
        goto label_1d1784;
    }
    ctx->pc = 0x1D177Cu;
    {
        const bool branch_taken_0x1d177c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d177c) {
            ctx->pc = 0x1D18E0u;
            goto label_1d18e0;
        }
    }
    ctx->pc = 0x1D1784u;
label_1d1784:
    // 0x1d1784: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x1d1784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1d1788:
    // 0x1d1788: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d1788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d178c:
    // 0x1d178c: 0x10030054  beq         $zero, $v1, . + 4 + (0x54 << 2)
label_1d1790:
    if (ctx->pc == 0x1D1790u) {
        ctx->pc = 0x1D1794u;
        goto label_1d1794;
    }
    ctx->pc = 0x1D178Cu;
    {
        const bool branch_taken_0x1d178c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d178c) {
            ctx->pc = 0x1D18E0u;
            goto label_1d18e0;
        }
    }
    ctx->pc = 0x1D1794u;
label_1d1794:
    // 0x1d1794: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1d1794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1d1798:
    // 0x1d1798: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d1798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d179c:
    // 0x1d179c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1d179cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1d17a0:
    // 0x1d17a0: 0xc085538  jal         func_2154E0
label_1d17a4:
    if (ctx->pc == 0x1D17A4u) {
        ctx->pc = 0x1D17A8u;
        goto label_1d17a8;
    }
    ctx->pc = 0x1D17A0u;
    SET_GPR_U32(ctx, 31, 0x1D17A8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D17A0u, 0x1D17A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D17A8u;
label_1d17a8:
    // 0x1d17a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d17a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d17ac:
    // 0x1d17ac: 0x1010004c  beq         $zero, $s0, . + 4 + (0x4C << 2)
label_1d17b0:
    if (ctx->pc == 0x1D17B0u) {
        ctx->pc = 0x1D17B4u;
        goto label_1d17b4;
    }
    ctx->pc = 0x1D17ACu;
    {
        const bool branch_taken_0x1d17ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x1d17ac) {
            ctx->pc = 0x1D18E0u;
            goto label_1d18e0;
        }
    }
    ctx->pc = 0x1D17B4u;
label_1d17b4:
    // 0x1d17b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d17b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d17b8:
    // 0x1d17b8: 0xc040aa8  jal         func_102AA0
label_1d17bc:
    if (ctx->pc == 0x1D17BCu) {
        ctx->pc = 0x1D17C0u;
        goto label_1d17c0;
    }
    ctx->pc = 0x1D17B8u;
    SET_GPR_U32(ctx, 31, 0x1D17C0u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1D17B8u, 0x1D17C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D17C0u;
label_1d17c0:
    // 0x1d17c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d17c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d17c4:
    // 0x1d17c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d17c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d17c8:
    // 0x1d17c8: 0xc040a90  jal         func_102A40
label_1d17cc:
    if (ctx->pc == 0x1D17CCu) {
        ctx->pc = 0x1D17D0u;
        goto label_1d17d0;
    }
    ctx->pc = 0x1D17C8u;
    SET_GPR_U32(ctx, 31, 0x1D17D0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1D17C8u, 0x1D17D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D17D0u;
label_1d17d0:
    // 0x1d17d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d17d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d17d4:
    // 0x1d17d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d17d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d17d8:
    // 0x1d17d8: 0xc040aa8  jal         func_102AA0
label_1d17dc:
    if (ctx->pc == 0x1D17DCu) {
        ctx->pc = 0x1D17E0u;
        goto label_1d17e0;
    }
    ctx->pc = 0x1D17D8u;
    SET_GPR_U32(ctx, 31, 0x1D17E0u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1D17D8u, 0x1D17E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D17E0u;
label_1d17e0:
    // 0x1d17e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d17e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d17e4:
    // 0x1d17e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d17e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d17e8:
    // 0x1d17e8: 0xc040a90  jal         func_102A40
label_1d17ec:
    if (ctx->pc == 0x1D17ECu) {
        ctx->pc = 0x1D17F0u;
        goto label_1d17f0;
    }
    ctx->pc = 0x1D17E8u;
    SET_GPR_U32(ctx, 31, 0x1D17F0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1D17E8u, 0x1D17F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D17F0u;
label_1d17f0:
    // 0x1d17f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d17f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d17f4:
    // 0x1d17f4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1d17f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1d17f8:
    // 0x1d17f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d17f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d17fc:
    // 0x1d17fc: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1d17fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1800:
    // 0x1d1800: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1d1800u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d1804:
    // 0x1d1804: 0x0  nop
    ctx->pc = 0x1d1804u;
    // NOP
label_1d1808:
    // 0x1d1808: 0x0  nop
    ctx->pc = 0x1d1808u;
    // NOP
label_1d180c:
    // 0x1d180c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d180cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d1810:
    // 0x1d1810: 0xc094de0  jal         func_253780
label_1d1814:
    if (ctx->pc == 0x1D1814u) {
        ctx->pc = 0x1D1818u;
        goto label_1d1818;
    }
    ctx->pc = 0x1D1810u;
    SET_GPR_U32(ctx, 31, 0x1D1818u);
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x1D1810u, 0x1D1818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1818u;
label_1d1818:
    // 0x1d1818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d181c:
    // 0x1d181c: 0xc040aa8  jal         func_102AA0
label_1d1820:
    if (ctx->pc == 0x1D1820u) {
        ctx->pc = 0x1D1824u;
        goto label_1d1824;
    }
    ctx->pc = 0x1D181Cu;
    SET_GPR_U32(ctx, 31, 0x1D1824u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1D181Cu, 0x1D1824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1824u;
label_1d1824:
    // 0x1d1824: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d1824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1828:
    // 0x1d1828: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d1828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d182c:
    // 0x1d182c: 0xc040a90  jal         func_102A40
label_1d1830:
    if (ctx->pc == 0x1D1830u) {
        ctx->pc = 0x1D1834u;
        goto label_1d1834;
    }
    ctx->pc = 0x1D182Cu;
    SET_GPR_U32(ctx, 31, 0x1D1834u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1D182Cu, 0x1D1834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1834u;
label_1d1834:
    // 0x1d1834: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d1834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1838:
    // 0x1d1838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d183c:
    // 0x1d183c: 0xc040aa8  jal         func_102AA0
label_1d1840:
    if (ctx->pc == 0x1D1840u) {
        ctx->pc = 0x1D1844u;
        goto label_1d1844;
    }
    ctx->pc = 0x1D183Cu;
    SET_GPR_U32(ctx, 31, 0x1D1844u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1D183Cu, 0x1D1844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1844u;
label_1d1844:
    // 0x1d1844: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d1844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1848:
    // 0x1d1848: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d1848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d184c:
    // 0x1d184c: 0xc040a90  jal         func_102A40
label_1d1850:
    if (ctx->pc == 0x1D1850u) {
        ctx->pc = 0x1D1854u;
        goto label_1d1854;
    }
    ctx->pc = 0x1D184Cu;
    SET_GPR_U32(ctx, 31, 0x1D1854u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1D184Cu, 0x1D1854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1854u;
label_1d1854:
    // 0x1d1854: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d1854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d1858:
    // 0x1d1858: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1d1858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1d185c:
    // 0x1d185c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d185cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d1860:
    // 0x1d1860: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1d1860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1864:
    // 0x1d1864: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1d1864u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d1868:
    // 0x1d1868: 0x0  nop
    ctx->pc = 0x1d1868u;
    // NOP
label_1d186c:
    // 0x1d186c: 0x0  nop
    ctx->pc = 0x1d186cu;
    // NOP
label_1d1870:
    // 0x1d1870: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d1870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d1874:
    // 0x1d1874: 0xc094de0  jal         func_253780
label_1d1878:
    if (ctx->pc == 0x1D1878u) {
        ctx->pc = 0x1D187Cu;
        goto label_1d187c;
    }
    ctx->pc = 0x1D1874u;
    SET_GPR_U32(ctx, 31, 0x1D187Cu);
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x1D1874u, 0x1D187Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D187Cu;
label_1d187c:
    // 0x1d187c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d187cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1880:
    // 0x1d1880: 0xc040aa8  jal         func_102AA0
label_1d1884:
    if (ctx->pc == 0x1D1884u) {
        ctx->pc = 0x1D1888u;
        goto label_1d1888;
    }
    ctx->pc = 0x1D1880u;
    SET_GPR_U32(ctx, 31, 0x1D1888u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1D1880u, 0x1D1888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1888u;
label_1d1888:
    // 0x1d1888: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d1888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d188c:
    // 0x1d188c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d188cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d1890:
    // 0x1d1890: 0xc040a90  jal         func_102A40
label_1d1894:
    if (ctx->pc == 0x1D1894u) {
        ctx->pc = 0x1D1898u;
        goto label_1d1898;
    }
    ctx->pc = 0x1D1890u;
    SET_GPR_U32(ctx, 31, 0x1D1898u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1D1890u, 0x1D1898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1898u;
label_1d1898:
    // 0x1d1898: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d1898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d189c:
    // 0x1d189c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d189cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d18a0:
    // 0x1d18a0: 0xc040aa8  jal         func_102AA0
label_1d18a4:
    if (ctx->pc == 0x1D18A4u) {
        ctx->pc = 0x1D18A8u;
        goto label_1d18a8;
    }
    ctx->pc = 0x1D18A0u;
    SET_GPR_U32(ctx, 31, 0x1D18A8u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1D18A0u, 0x1D18A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D18A8u;
label_1d18a8:
    // 0x1d18a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d18a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d18ac:
    // 0x1d18ac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d18acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d18b0:
    // 0x1d18b0: 0xc040a90  jal         func_102A40
label_1d18b4:
    if (ctx->pc == 0x1D18B4u) {
        ctx->pc = 0x1D18B8u;
        goto label_1d18b8;
    }
    ctx->pc = 0x1D18B0u;
    SET_GPR_U32(ctx, 31, 0x1D18B8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1D18B0u, 0x1D18B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D18B8u;
label_1d18b8:
    // 0x1d18b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d18b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d18bc:
    // 0x1d18bc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1d18bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1d18c0:
    // 0x1d18c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d18c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d18c4:
    // 0x1d18c4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1d18c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d18c8:
    // 0x1d18c8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1d18c8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d18cc:
    // 0x1d18cc: 0x0  nop
    ctx->pc = 0x1d18ccu;
    // NOP
label_1d18d0:
    // 0x1d18d0: 0x0  nop
    ctx->pc = 0x1d18d0u;
    // NOP
label_1d18d4:
    // 0x1d18d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d18d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d18d8:
    // 0x1d18d8: 0xc094de0  jal         func_253780
label_1d18dc:
    if (ctx->pc == 0x1D18DCu) {
        ctx->pc = 0x1D18E0u;
        goto label_1d18e0;
    }
    ctx->pc = 0x1D18D8u;
    SET_GPR_U32(ctx, 31, 0x1D18E0u);
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x1D18D8u, 0x1D18E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D18E0u;
label_1d18e0:
    // 0x1d18e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d18e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d18e4:
    // 0x1d18e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d18e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d18e8:
    // 0x1d18e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d18e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d18ec:
    // 0x1d18ec: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1d18ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1d18f0:
    // 0x1d18f0: 0x3e00008  jr          $ra
label_1d18f4:
    if (ctx->pc == 0x1D18F4u) {
        ctx->pc = 0x1D18F8u;
        goto label_1d18f8;
    }
    ctx->pc = 0x1D18F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D18F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D18F8u;
label_1d18f8:
    // 0x1d18f8: 0x0  nop
    ctx->pc = 0x1d18f8u;
    // NOP
label_1d18fc:
    // 0x1d18fc: 0x0  nop
    ctx->pc = 0x1d18fcu;
    // NOP
    ctx->pc = 0x1d1900u;
}
