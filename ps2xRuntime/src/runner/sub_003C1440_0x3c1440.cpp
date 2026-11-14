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

// Function: sub_003C1440
// Address: 0x3c1440 - 0x3c1800
void sub_003C1440_0x3c1440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C1440_0x3c1440");
#endif

    switch (ctx->pc) {
        case 0x3c1440u: goto label_3c1440;
        case 0x3c1444u: goto label_3c1444;
        case 0x3c1448u: goto label_3c1448;
        case 0x3c144cu: goto label_3c144c;
        case 0x3c1450u: goto label_3c1450;
        case 0x3c1454u: goto label_3c1454;
        case 0x3c1458u: goto label_3c1458;
        case 0x3c145cu: goto label_3c145c;
        case 0x3c1460u: goto label_3c1460;
        case 0x3c1464u: goto label_3c1464;
        case 0x3c1468u: goto label_3c1468;
        case 0x3c146cu: goto label_3c146c;
        case 0x3c1470u: goto label_3c1470;
        case 0x3c1474u: goto label_3c1474;
        case 0x3c1478u: goto label_3c1478;
        case 0x3c147cu: goto label_3c147c;
        case 0x3c1480u: goto label_3c1480;
        case 0x3c1484u: goto label_3c1484;
        case 0x3c1488u: goto label_3c1488;
        case 0x3c148cu: goto label_3c148c;
        case 0x3c1490u: goto label_3c1490;
        case 0x3c1494u: goto label_3c1494;
        case 0x3c1498u: goto label_3c1498;
        case 0x3c149cu: goto label_3c149c;
        case 0x3c14a0u: goto label_3c14a0;
        case 0x3c14a4u: goto label_3c14a4;
        case 0x3c14a8u: goto label_3c14a8;
        case 0x3c14acu: goto label_3c14ac;
        case 0x3c14b0u: goto label_3c14b0;
        case 0x3c14b4u: goto label_3c14b4;
        case 0x3c14b8u: goto label_3c14b8;
        case 0x3c14bcu: goto label_3c14bc;
        case 0x3c14c0u: goto label_3c14c0;
        case 0x3c14c4u: goto label_3c14c4;
        case 0x3c14c8u: goto label_3c14c8;
        case 0x3c14ccu: goto label_3c14cc;
        case 0x3c14d0u: goto label_3c14d0;
        case 0x3c14d4u: goto label_3c14d4;
        case 0x3c14d8u: goto label_3c14d8;
        case 0x3c14dcu: goto label_3c14dc;
        case 0x3c14e0u: goto label_3c14e0;
        case 0x3c14e4u: goto label_3c14e4;
        case 0x3c14e8u: goto label_3c14e8;
        case 0x3c14ecu: goto label_3c14ec;
        case 0x3c14f0u: goto label_3c14f0;
        case 0x3c14f4u: goto label_3c14f4;
        case 0x3c14f8u: goto label_3c14f8;
        case 0x3c14fcu: goto label_3c14fc;
        case 0x3c1500u: goto label_3c1500;
        case 0x3c1504u: goto label_3c1504;
        case 0x3c1508u: goto label_3c1508;
        case 0x3c150cu: goto label_3c150c;
        case 0x3c1510u: goto label_3c1510;
        case 0x3c1514u: goto label_3c1514;
        case 0x3c1518u: goto label_3c1518;
        case 0x3c151cu: goto label_3c151c;
        case 0x3c1520u: goto label_3c1520;
        case 0x3c1524u: goto label_3c1524;
        case 0x3c1528u: goto label_3c1528;
        case 0x3c152cu: goto label_3c152c;
        case 0x3c1530u: goto label_3c1530;
        case 0x3c1534u: goto label_3c1534;
        case 0x3c1538u: goto label_3c1538;
        case 0x3c153cu: goto label_3c153c;
        case 0x3c1540u: goto label_3c1540;
        case 0x3c1544u: goto label_3c1544;
        case 0x3c1548u: goto label_3c1548;
        case 0x3c154cu: goto label_3c154c;
        case 0x3c1550u: goto label_3c1550;
        case 0x3c1554u: goto label_3c1554;
        case 0x3c1558u: goto label_3c1558;
        case 0x3c155cu: goto label_3c155c;
        case 0x3c1560u: goto label_3c1560;
        case 0x3c1564u: goto label_3c1564;
        case 0x3c1568u: goto label_3c1568;
        case 0x3c156cu: goto label_3c156c;
        case 0x3c1570u: goto label_3c1570;
        case 0x3c1574u: goto label_3c1574;
        case 0x3c1578u: goto label_3c1578;
        case 0x3c157cu: goto label_3c157c;
        case 0x3c1580u: goto label_3c1580;
        case 0x3c1584u: goto label_3c1584;
        case 0x3c1588u: goto label_3c1588;
        case 0x3c158cu: goto label_3c158c;
        case 0x3c1590u: goto label_3c1590;
        case 0x3c1594u: goto label_3c1594;
        case 0x3c1598u: goto label_3c1598;
        case 0x3c159cu: goto label_3c159c;
        case 0x3c15a0u: goto label_3c15a0;
        case 0x3c15a4u: goto label_3c15a4;
        case 0x3c15a8u: goto label_3c15a8;
        case 0x3c15acu: goto label_3c15ac;
        case 0x3c15b0u: goto label_3c15b0;
        case 0x3c15b4u: goto label_3c15b4;
        case 0x3c15b8u: goto label_3c15b8;
        case 0x3c15bcu: goto label_3c15bc;
        case 0x3c15c0u: goto label_3c15c0;
        case 0x3c15c4u: goto label_3c15c4;
        case 0x3c15c8u: goto label_3c15c8;
        case 0x3c15ccu: goto label_3c15cc;
        case 0x3c15d0u: goto label_3c15d0;
        case 0x3c15d4u: goto label_3c15d4;
        case 0x3c15d8u: goto label_3c15d8;
        case 0x3c15dcu: goto label_3c15dc;
        case 0x3c15e0u: goto label_3c15e0;
        case 0x3c15e4u: goto label_3c15e4;
        case 0x3c15e8u: goto label_3c15e8;
        case 0x3c15ecu: goto label_3c15ec;
        case 0x3c15f0u: goto label_3c15f0;
        case 0x3c15f4u: goto label_3c15f4;
        case 0x3c15f8u: goto label_3c15f8;
        case 0x3c15fcu: goto label_3c15fc;
        case 0x3c1600u: goto label_3c1600;
        case 0x3c1604u: goto label_3c1604;
        case 0x3c1608u: goto label_3c1608;
        case 0x3c160cu: goto label_3c160c;
        case 0x3c1610u: goto label_3c1610;
        case 0x3c1614u: goto label_3c1614;
        case 0x3c1618u: goto label_3c1618;
        case 0x3c161cu: goto label_3c161c;
        case 0x3c1620u: goto label_3c1620;
        case 0x3c1624u: goto label_3c1624;
        case 0x3c1628u: goto label_3c1628;
        case 0x3c162cu: goto label_3c162c;
        case 0x3c1630u: goto label_3c1630;
        case 0x3c1634u: goto label_3c1634;
        case 0x3c1638u: goto label_3c1638;
        case 0x3c163cu: goto label_3c163c;
        case 0x3c1640u: goto label_3c1640;
        case 0x3c1644u: goto label_3c1644;
        case 0x3c1648u: goto label_3c1648;
        case 0x3c164cu: goto label_3c164c;
        case 0x3c1650u: goto label_3c1650;
        case 0x3c1654u: goto label_3c1654;
        case 0x3c1658u: goto label_3c1658;
        case 0x3c165cu: goto label_3c165c;
        case 0x3c1660u: goto label_3c1660;
        case 0x3c1664u: goto label_3c1664;
        case 0x3c1668u: goto label_3c1668;
        case 0x3c166cu: goto label_3c166c;
        case 0x3c1670u: goto label_3c1670;
        case 0x3c1674u: goto label_3c1674;
        case 0x3c1678u: goto label_3c1678;
        case 0x3c167cu: goto label_3c167c;
        case 0x3c1680u: goto label_3c1680;
        case 0x3c1684u: goto label_3c1684;
        case 0x3c1688u: goto label_3c1688;
        case 0x3c168cu: goto label_3c168c;
        case 0x3c1690u: goto label_3c1690;
        case 0x3c1694u: goto label_3c1694;
        case 0x3c1698u: goto label_3c1698;
        case 0x3c169cu: goto label_3c169c;
        case 0x3c16a0u: goto label_3c16a0;
        case 0x3c16a4u: goto label_3c16a4;
        case 0x3c16a8u: goto label_3c16a8;
        case 0x3c16acu: goto label_3c16ac;
        case 0x3c16b0u: goto label_3c16b0;
        case 0x3c16b4u: goto label_3c16b4;
        case 0x3c16b8u: goto label_3c16b8;
        case 0x3c16bcu: goto label_3c16bc;
        case 0x3c16c0u: goto label_3c16c0;
        case 0x3c16c4u: goto label_3c16c4;
        case 0x3c16c8u: goto label_3c16c8;
        case 0x3c16ccu: goto label_3c16cc;
        case 0x3c16d0u: goto label_3c16d0;
        case 0x3c16d4u: goto label_3c16d4;
        case 0x3c16d8u: goto label_3c16d8;
        case 0x3c16dcu: goto label_3c16dc;
        case 0x3c16e0u: goto label_3c16e0;
        case 0x3c16e4u: goto label_3c16e4;
        case 0x3c16e8u: goto label_3c16e8;
        case 0x3c16ecu: goto label_3c16ec;
        case 0x3c16f0u: goto label_3c16f0;
        case 0x3c16f4u: goto label_3c16f4;
        case 0x3c16f8u: goto label_3c16f8;
        case 0x3c16fcu: goto label_3c16fc;
        case 0x3c1700u: goto label_3c1700;
        case 0x3c1704u: goto label_3c1704;
        case 0x3c1708u: goto label_3c1708;
        case 0x3c170cu: goto label_3c170c;
        case 0x3c1710u: goto label_3c1710;
        case 0x3c1714u: goto label_3c1714;
        case 0x3c1718u: goto label_3c1718;
        case 0x3c171cu: goto label_3c171c;
        case 0x3c1720u: goto label_3c1720;
        case 0x3c1724u: goto label_3c1724;
        case 0x3c1728u: goto label_3c1728;
        case 0x3c172cu: goto label_3c172c;
        case 0x3c1730u: goto label_3c1730;
        case 0x3c1734u: goto label_3c1734;
        case 0x3c1738u: goto label_3c1738;
        case 0x3c173cu: goto label_3c173c;
        case 0x3c1740u: goto label_3c1740;
        case 0x3c1744u: goto label_3c1744;
        case 0x3c1748u: goto label_3c1748;
        case 0x3c174cu: goto label_3c174c;
        case 0x3c1750u: goto label_3c1750;
        case 0x3c1754u: goto label_3c1754;
        case 0x3c1758u: goto label_3c1758;
        case 0x3c175cu: goto label_3c175c;
        case 0x3c1760u: goto label_3c1760;
        case 0x3c1764u: goto label_3c1764;
        case 0x3c1768u: goto label_3c1768;
        case 0x3c176cu: goto label_3c176c;
        case 0x3c1770u: goto label_3c1770;
        case 0x3c1774u: goto label_3c1774;
        case 0x3c1778u: goto label_3c1778;
        case 0x3c177cu: goto label_3c177c;
        case 0x3c1780u: goto label_3c1780;
        case 0x3c1784u: goto label_3c1784;
        case 0x3c1788u: goto label_3c1788;
        case 0x3c178cu: goto label_3c178c;
        case 0x3c1790u: goto label_3c1790;
        case 0x3c1794u: goto label_3c1794;
        case 0x3c1798u: goto label_3c1798;
        case 0x3c179cu: goto label_3c179c;
        case 0x3c17a0u: goto label_3c17a0;
        case 0x3c17a4u: goto label_3c17a4;
        case 0x3c17a8u: goto label_3c17a8;
        case 0x3c17acu: goto label_3c17ac;
        case 0x3c17b0u: goto label_3c17b0;
        case 0x3c17b4u: goto label_3c17b4;
        case 0x3c17b8u: goto label_3c17b8;
        case 0x3c17bcu: goto label_3c17bc;
        case 0x3c17c0u: goto label_3c17c0;
        case 0x3c17c4u: goto label_3c17c4;
        case 0x3c17c8u: goto label_3c17c8;
        case 0x3c17ccu: goto label_3c17cc;
        case 0x3c17d0u: goto label_3c17d0;
        case 0x3c17d4u: goto label_3c17d4;
        case 0x3c17d8u: goto label_3c17d8;
        case 0x3c17dcu: goto label_3c17dc;
        case 0x3c17e0u: goto label_3c17e0;
        case 0x3c17e4u: goto label_3c17e4;
        case 0x3c17e8u: goto label_3c17e8;
        case 0x3c17ecu: goto label_3c17ec;
        case 0x3c17f0u: goto label_3c17f0;
        case 0x3c17f4u: goto label_3c17f4;
        case 0x3c17f8u: goto label_3c17f8;
        case 0x3c17fcu: goto label_3c17fc;
        default: break;
    }

    ctx->pc = 0x3c1440u;

label_3c1440:
    // 0x3c1440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c1440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3c1444:
    // 0x3c1444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c1444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c1448:
    // 0x3c1448: 0xc103684  jal         func_40DA10
label_3c144c:
    if (ctx->pc == 0x3C144Cu) {
        ctx->pc = 0x3C144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1448u;
        // 0x3c144c: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1450u;
        goto label_3c1450;
    }
    ctx->pc = 0x3C1448u;
    SET_GPR_U32(ctx, 31, 0x3C1450u);
    ctx->pc = 0x3C144Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1448u;
    // 0x3c144c: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3C1448u, 0x3C1450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1450u;
label_3c1450:
    // 0x3c1450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c1450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c1454:
    // 0x3c1454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c1454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c1458:
    // 0x3c1458: 0x3e00008  jr          $ra
label_3c145c:
    if (ctx->pc == 0x3C145Cu) {
        ctx->pc = 0x3C145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1458u;
        // 0x3c145c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1460u;
        goto label_3c1460;
    }
    ctx->pc = 0x3C1458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1458u;
        // 0x3c145c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C1460u;
label_3c1460:
    // 0x3c1460: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c1460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3c1464:
    // 0x3c1464: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3c1464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3c1468:
    // 0x3c1468: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3c1468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3c146c:
    // 0x3c146c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3c146cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3c1470:
    // 0x3c1470: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3c1470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3c1474:
    // 0x3c1474: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c1474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c1478:
    // 0x3c1478: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c1478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c147c:
    // 0x3c147c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c147cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3c1480:
    // 0x3c1480: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x3c1480u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3c1484:
    // 0x3c1484: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3c1484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3c1488:
    // 0x3c1488: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3c1488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3c148c:
    // 0x3c148c: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x3c148cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_3c1490:
    // 0x3c1490: 0x40f809  jalr        $v0
label_3c1494:
    if (ctx->pc == 0x3C1494u) {
        ctx->pc = 0x3C1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1490u;
        // 0x3c1494: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1498u;
        goto label_3c1498;
    }
    ctx->pc = 0x3C1490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C1498u);
        ctx->pc = 0x3C1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1490u;
        // 0x3c1494: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1490u, 0x3C1498u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1498u;
label_3c1498:
    // 0x3c1498: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c1498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c149c:
    // 0x3c149c: 0x5600000c  bnel        $s0, $zero, . + 4 + (0xC << 2)
label_3c14a0:
    if (ctx->pc == 0x3C14A0u) {
        ctx->pc = 0x3C14A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C149Cu;
        // 0x3c14a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C14A4u;
        goto label_3c14a4;
    }
    ctx->pc = 0x3C149Cu;
    {
        const bool branch_taken_0x3c149c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c149c) {
            ctx->pc = 0x3C14A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C149Cu;
            // 0x3c14a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C14D0u;
            goto label_3c14d0;
        }
    }
    ctx->pc = 0x3C14A4u;
label_3c14a4:
    // 0x3c14a4: 0x240201bf  addiu       $v0, $zero, 0x1BF
    ctx->pc = 0x3c14a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 447));
label_3c14a8:
    // 0x3c14a8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3c14a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3c14ac:
    // 0x3c14ac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3c14acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3c14b0:
    // 0x3c14b0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3c14b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3c14b4:
    // 0x3c14b4: 0xc1035f6  jal         func_40D7D8
label_3c14b8:
    if (ctx->pc == 0x3C14B8u) {
        ctx->pc = 0x3C14B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C14B4u;
        // 0x3c14b8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C14BCu;
        goto label_3c14bc;
    }
    ctx->pc = 0x3C14B4u;
    SET_GPR_U32(ctx, 31, 0x3C14BCu);
    ctx->pc = 0x3C14B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C14B4u;
    // 0x3c14b8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3C14B4u, 0x3C14BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C14BCu;
label_3c14bc:
    // 0x3c14bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c14bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c14c0:
    // 0x3c14c0: 0xc103628  jal         func_40D8A0
label_3c14c4:
    if (ctx->pc == 0x3C14C4u) {
        ctx->pc = 0x3C14C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C14C0u;
        // 0x3c14c4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C14C8u;
        goto label_3c14c8;
    }
    ctx->pc = 0x3C14C0u;
    SET_GPR_U32(ctx, 31, 0x3C14C8u);
    ctx->pc = 0x3C14C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C14C0u;
    // 0x3c14c4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3C14C0u, 0x3C14C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C14C8u;
label_3c14c8:
    // 0x3c14c8: 0x10000009  b           . + 4 + (0x9 << 2)
label_3c14cc:
    if (ctx->pc == 0x3C14CCu) {
        ctx->pc = 0x3C14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C14C8u;
        // 0x3c14cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C14D0u;
        goto label_3c14d0;
    }
    ctx->pc = 0x3C14C8u;
    {
        const bool branch_taken_0x3c14c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C14C8u;
        // 0x3c14cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c14c8) {
            ctx->pc = 0x3C14F0u;
            goto label_3c14f0;
        }
    }
    ctx->pc = 0x3C14D0u;
label_3c14d0:
    // 0x3c14d0: 0xc0f0758  jal         func_3C1D60
label_3c14d4:
    if (ctx->pc == 0x3C14D4u) {
        ctx->pc = 0x3C14D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C14D0u;
        // 0x3c14d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C14D8u;
        goto label_3c14d8;
    }
    ctx->pc = 0x3C14D0u;
    SET_GPR_U32(ctx, 31, 0x3C14D8u);
    ctx->pc = 0x3C14D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C14D0u;
    // 0x3c14d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1D60u, 0x3C14D0u, 0x3C14D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C14D8u;
label_3c14d8:
    // 0x3c14d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3c14dc:
    if (ctx->pc == 0x3C14DCu) {
        ctx->pc = 0x3C14DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C14D8u;
        // 0x3c14dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C14E0u;
        goto label_3c14e0;
    }
    ctx->pc = 0x3C14D8u;
    {
        const bool branch_taken_0x3c14d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C14DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C14D8u;
        // 0x3c14dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c14d8) {
            ctx->pc = 0x3C14F0u;
            goto label_3c14f0;
        }
    }
    ctx->pc = 0x3C14E0u;
label_3c14e0:
    // 0x3c14e0: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x3c14e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_3c14e4:
    // 0x3c14e4: 0x40f809  jalr        $v0
label_3c14e8:
    if (ctx->pc == 0x3C14E8u) {
        ctx->pc = 0x3C14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C14E4u;
        // 0x3c14e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C14ECu;
        goto label_3c14ec;
    }
    ctx->pc = 0x3C14E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C14ECu);
        ctx->pc = 0x3C14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C14E4u;
        // 0x3c14e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C14E4u, 0x3C14ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C14ECu;
label_3c14ec:
    // 0x3c14ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c14ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c14f0:
    // 0x3c14f0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3c14f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c14f4:
    // 0x3c14f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3c14f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c14f8:
    // 0x3c14f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c14f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c14fc:
    // 0x3c14fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c14fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3c1500:
    // 0x3c1500: 0x3e00008  jr          $ra
label_3c1504:
    if (ctx->pc == 0x3C1504u) {
        ctx->pc = 0x3C1504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1500u;
        // 0x3c1504: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1508u;
        goto label_3c1508;
    }
    ctx->pc = 0x3C1500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1500u;
        // 0x3c1504: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C1508u;
label_3c1508:
    // 0x3c1508: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c1508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3c150c:
    // 0x3c150c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c150cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3c1510:
    // 0x3c1510: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c1510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c1514:
    // 0x3c1514: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c1514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c1518:
    // 0x3c1518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c1518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c151c:
    // 0x3c151c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c151cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c1520:
    // 0x3c1520: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3c1520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3c1524:
    // 0x3c1524: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3c1524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3c1528:
    // 0x3c1528: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c1528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c152c:
    // 0x3c152c: 0xc1036e0  jal         func_40DB80
label_3c1530:
    if (ctx->pc == 0x3C1530u) {
        ctx->pc = 0x3C1530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C152Cu;
        // 0x3c1530: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1534u;
        goto label_3c1534;
    }
    ctx->pc = 0x3C152Cu;
    SET_GPR_U32(ctx, 31, 0x3C1534u);
    ctx->pc = 0x3C1530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C152Cu;
    // 0x3c1530: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3C152Cu, 0x3C1534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1534u;
label_3c1534:
    // 0x3c1534: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3c1538:
    if (ctx->pc == 0x3C1538u) {
        ctx->pc = 0x3C1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1534u;
        // 0x3c1538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C153Cu;
        goto label_3c153c;
    }
    ctx->pc = 0x3C1534u;
    {
        const bool branch_taken_0x3c1534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1534) {
            ctx->pc = 0x3C1538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1534u;
            // 0x3c1538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1544u;
            goto label_3c1544;
        }
    }
    ctx->pc = 0x3C153Cu;
label_3c153c:
    // 0x3c153c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3c153cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_3c1540:
    // 0x3c1540: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c1540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1544:
    // 0x3c1544: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c1544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c1548:
    // 0x3c1548: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c1548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c154c:
    // 0x3c154c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c154cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c1550:
    // 0x3c1550: 0x3e00008  jr          $ra
label_3c1554:
    if (ctx->pc == 0x3C1554u) {
        ctx->pc = 0x3C1554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1550u;
        // 0x3c1554: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1558u;
        goto label_3c1558;
    }
    ctx->pc = 0x3C1550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1550u;
        // 0x3c1554: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C1558u;
label_3c1558:
    // 0x3c1558: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c1558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3c155c:
    // 0x3c155c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3c155cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3c1560:
    // 0x3c1560: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c1560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c1564:
    // 0x3c1564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c1564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c1568:
    // 0x3c1568: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3c1568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3c156c:
    // 0x3c156c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3c156cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3c1570:
    // 0x3c1570: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3c1570u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c1574:
    // 0x3c1574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c1574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c1578:
    // 0x3c1578: 0xc10378e  jal         func_40DE38
label_3c157c:
    if (ctx->pc == 0x3C157Cu) {
        ctx->pc = 0x3C157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1578u;
        // 0x3c157c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1580u;
        goto label_3c1580;
    }
    ctx->pc = 0x3C1578u;
    SET_GPR_U32(ctx, 31, 0x3C1580u);
    ctx->pc = 0x3C157Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1578u;
    // 0x3c157c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE38u, 0x3C1578u, 0x3C1580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1580u;
label_3c1580:
    // 0x3c1580: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c1580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c1584:
    // 0x3c1584: 0xc103790  jal         func_40DE40
label_3c1588:
    if (ctx->pc == 0x3C1588u) {
        ctx->pc = 0x3C1588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1584u;
        // 0x3c1588: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C158Cu;
        goto label_3c158c;
    }
    ctx->pc = 0x3C1584u;
    SET_GPR_U32(ctx, 31, 0x3C158Cu);
    ctx->pc = 0x3C1588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1584u;
    // 0x3c1588: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE40u, 0x3C1584u, 0x3C158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C158Cu;
label_3c158c:
    // 0x3c158c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c158cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1590:
    // 0x3c1590: 0x1244006f  beq         $s2, $a0, . + 4 + (0x6F << 2)
label_3c1594:
    if (ctx->pc == 0x3C1594u) {
        ctx->pc = 0x3C1594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1590u;
        // 0x3c1594: 0x921023  subu        $v0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1598u;
        goto label_3c1598;
    }
    ctx->pc = 0x3C1590u;
    {
        const bool branch_taken_0x3c1590 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        ctx->pc = 0x3C1594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1590u;
        // 0x3c1594: 0x921023  subu        $v0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1590) {
            ctx->pc = 0x3C1750u;
            goto label_3c1750;
        }
    }
    ctx->pc = 0x3C1598u;
label_3c1598:
    // 0x3c1598: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x3c1598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_3c159c:
    // 0x3c159c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
label_3c15a0:
    if (ctx->pc == 0x3C15A0u) {
        ctx->pc = 0x3C15A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C159Cu;
        // 0x3c15a0: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C15A4u;
        goto label_3c15a4;
    }
    ctx->pc = 0x3C159Cu;
    {
        const bool branch_taken_0x3c159c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C15A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C159Cu;
        // 0x3c15a0: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c159c) {
            ctx->pc = 0x3C1678u;
            goto label_3c1678;
        }
    }
    ctx->pc = 0x3C15A4u;
label_3c15a4:
    // 0x3c15a4: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x3c15a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_3c15a8:
    // 0x3c15a8: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_3c15ac:
    if (ctx->pc == 0x3C15ACu) {
        ctx->pc = 0x3C15ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C15A8u;
        // 0x3c15ac: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C15B0u;
        goto label_3c15b0;
    }
    ctx->pc = 0x3C15A8u;
    {
        const bool branch_taken_0x3c15a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c15a8) {
            ctx->pc = 0x3C15ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C15A8u;
            // 0x3c15ac: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1640u;
            goto label_3c1640;
        }
    }
    ctx->pc = 0x3C15B0u;
label_3c15b0:
    // 0x3c15b0: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x3c15b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_3c15b4:
    // 0x3c15b4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_3c15b8:
    if (ctx->pc == 0x3C15B8u) {
        ctx->pc = 0x3C15B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C15B4u;
        // 0x3c15b8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C15BCu;
        goto label_3c15bc;
    }
    ctx->pc = 0x3C15B4u;
    {
        const bool branch_taken_0x3c15b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c15b4) {
            ctx->pc = 0x3C15B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C15B4u;
            // 0x3c15b8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1608u;
            goto label_3c1608;
        }
    }
    ctx->pc = 0x3C15BCu;
label_3c15bc:
    // 0x3c15bc: 0x2862000d  slti        $v0, $v1, 0xD
    ctx->pc = 0x3c15bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
label_3c15c0:
    // 0x3c15c0: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
label_3c15c4:
    if (ctx->pc == 0x3C15C4u) {
        ctx->pc = 0x3C15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C15C0u;
        // 0x3c15c4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C15C8u;
        goto label_3c15c8;
    }
    ctx->pc = 0x3C15C0u;
    {
        const bool branch_taken_0x3c15c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c15c0) {
            ctx->pc = 0x3C15C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C15C0u;
            // 0x3c15c4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C167Cu;
            goto label_3c167c;
        }
    }
    ctx->pc = 0x3C15C8u;
label_3c15c8:
    // 0x3c15c8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3c15c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c15cc:
    // 0x3c15cc: 0x1662000b  bne         $s3, $v0, . + 4 + (0xB << 2)
label_3c15d0:
    if (ctx->pc == 0x3C15D0u) {
        ctx->pc = 0x3C15D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C15CCu;
        // 0x3c15d0: 0x26420004  addiu       $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C15D4u;
        goto label_3c15d4;
    }
    ctx->pc = 0x3C15CCu;
    {
        const bool branch_taken_0x3c15cc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C15D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C15CCu;
        // 0x3c15d0: 0x26420004  addiu       $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c15cc) {
            ctx->pc = 0x3C15FCu;
            goto label_3c15fc;
        }
    }
    ctx->pc = 0x3C15D4u;
label_3c15d4:
    // 0x3c15d4: 0xc10376a  jal         func_40DDA8
label_3c15d8:
    if (ctx->pc == 0x3C15D8u) {
        ctx->pc = 0x3C15D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C15D4u;
        // 0x3c15d8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C15DCu;
        goto label_3c15dc;
    }
    ctx->pc = 0x3C15D4u;
    SET_GPR_U32(ctx, 31, 0x3C15DCu);
    ctx->pc = 0x3C15D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C15D4u;
    // 0x3c15d8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3C15D4u, 0x3C15DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C15DCu;
label_3c15dc:
    // 0x3c15dc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c15dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c15e0:
    // 0x3c15e0: 0xc1036da  jal         func_40DB68
label_3c15e4:
    if (ctx->pc == 0x3C15E4u) {
        ctx->pc = 0x3C15E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C15E0u;
        // 0x3c15e4: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C15E8u;
        goto label_3c15e8;
    }
    ctx->pc = 0x3C15E0u;
    SET_GPR_U32(ctx, 31, 0x3C15E8u);
    ctx->pc = 0x3C15E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C15E0u;
    // 0x3c15e4: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3C15E0u, 0x3C15E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C15E8u;
label_3c15e8:
    // 0x3c15e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3c15e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c15ec:
    // 0x3c15ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c15ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c15f0:
    // 0x3c15f0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c15f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c15f4:
    // 0x3c15f4: 0x10000050  b           . + 4 + (0x50 << 2)
label_3c15f8:
    if (ctx->pc == 0x3C15F8u) {
        ctx->pc = 0x3C15F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C15F4u;
        // 0x3c15f8: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C15FCu;
        goto label_3c15fc;
    }
    ctx->pc = 0x3C15F4u;
    {
        const bool branch_taken_0x3c15f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C15F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C15F4u;
        // 0x3c15f8: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c15f4) {
            ctx->pc = 0x3C1738u;
            goto label_3c1738;
        }
    }
    ctx->pc = 0x3C15FCu;
label_3c15fc:
    // 0x3c15fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c15fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1600:
    // 0x3c1600: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x3c1600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1604:
    // 0x3c1604: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c1604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c1608:
    // 0x3c1608: 0x5662000b  bnel        $s3, $v0, . + 4 + (0xB << 2)
label_3c160c:
    if (ctx->pc == 0x3C160Cu) {
        ctx->pc = 0x3C160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1608u;
        // 0x3c160c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1610u;
        goto label_3c1610;
    }
    ctx->pc = 0x3C1608u;
    {
        const bool branch_taken_0x3c1608 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c1608) {
            ctx->pc = 0x3C160Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1608u;
            // 0x3c160c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1638u;
            goto label_3c1638;
        }
    }
    ctx->pc = 0x3C1610u;
label_3c1610:
    // 0x3c1610: 0xc10376a  jal         func_40DDA8
label_3c1614:
    if (ctx->pc == 0x3C1614u) {
        ctx->pc = 0x3C1614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1610u;
        // 0x3c1614: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1618u;
        goto label_3c1618;
    }
    ctx->pc = 0x3C1610u;
    SET_GPR_U32(ctx, 31, 0x3C1618u);
    ctx->pc = 0x3C1614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1610u;
    // 0x3c1614: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3C1610u, 0x3C1618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1618u;
label_3c1618:
    // 0x3c1618: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c1618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c161c:
    // 0x3c161c: 0xc1036da  jal         func_40DB68
label_3c1620:
    if (ctx->pc == 0x3C1620u) {
        ctx->pc = 0x3C1620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C161Cu;
        // 0x3c1620: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1624u;
        goto label_3c1624;
    }
    ctx->pc = 0x3C161Cu;
    SET_GPR_U32(ctx, 31, 0x3C1624u);
    ctx->pc = 0x3C1620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C161Cu;
    // 0x3c1620: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3C161Cu, 0x3C1624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1624u;
label_3c1624:
    // 0x3c1624: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3c1624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c1628:
    // 0x3c1628: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c1628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c162c:
    // 0x3c162c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c162cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c1630:
    // 0x3c1630: 0x10000041  b           . + 4 + (0x41 << 2)
label_3c1634:
    if (ctx->pc == 0x3C1634u) {
        ctx->pc = 0x3C1634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1630u;
        // 0x3c1634: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1638u;
        goto label_3c1638;
    }
    ctx->pc = 0x3C1630u;
    {
        const bool branch_taken_0x3c1630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1630u;
        // 0x3c1634: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1630) {
            ctx->pc = 0x3C1738u;
            goto label_3c1738;
        }
    }
    ctx->pc = 0x3C1638u;
label_3c1638:
    // 0x3c1638: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3c1638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3c163c:
    // 0x3c163c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c163cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c1640:
    // 0x3c1640: 0x1662000b  bne         $s3, $v0, . + 4 + (0xB << 2)
label_3c1644:
    if (ctx->pc == 0x3C1644u) {
        ctx->pc = 0x3C1644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1640u;
        // 0x3c1644: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1648u;
        goto label_3c1648;
    }
    ctx->pc = 0x3C1640u;
    {
        const bool branch_taken_0x3c1640 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C1644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1640u;
        // 0x3c1644: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1640) {
            ctx->pc = 0x3C1670u;
            goto label_3c1670;
        }
    }
    ctx->pc = 0x3C1648u;
label_3c1648:
    // 0x3c1648: 0xc10376a  jal         func_40DDA8
label_3c164c:
    if (ctx->pc == 0x3C164Cu) {
        ctx->pc = 0x3C164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1648u;
        // 0x3c164c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1650u;
        goto label_3c1650;
    }
    ctx->pc = 0x3C1648u;
    SET_GPR_U32(ctx, 31, 0x3C1650u);
    ctx->pc = 0x3C164Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1648u;
    // 0x3c164c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3C1648u, 0x3C1650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1650u;
label_3c1650:
    // 0x3c1650: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c1650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c1654:
    // 0x3c1654: 0xc1036da  jal         func_40DB68
label_3c1658:
    if (ctx->pc == 0x3C1658u) {
        ctx->pc = 0x3C1658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1654u;
        // 0x3c1658: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C165Cu;
        goto label_3c165c;
    }
    ctx->pc = 0x3C1654u;
    SET_GPR_U32(ctx, 31, 0x3C165Cu);
    ctx->pc = 0x3C1658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1654u;
    // 0x3c1658: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3C1654u, 0x3C165Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C165Cu;
label_3c165c:
    // 0x3c165c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3c165cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c1660:
    // 0x3c1660: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c1660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c1664:
    // 0x3c1664: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c1664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c1668:
    // 0x3c1668: 0x10000033  b           . + 4 + (0x33 << 2)
label_3c166c:
    if (ctx->pc == 0x3C166Cu) {
        ctx->pc = 0x3C166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1668u;
        // 0x3c166c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1670u;
        goto label_3c1670;
    }
    ctx->pc = 0x3C1668u;
    {
        const bool branch_taken_0x3c1668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1668u;
        // 0x3c166c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1668) {
            ctx->pc = 0x3C1738u;
            goto label_3c1738;
        }
    }
    ctx->pc = 0x3C1670u;
label_3c1670:
    // 0x3c1670: 0x12440037  beq         $s2, $a0, . + 4 + (0x37 << 2)
label_3c1674:
    if (ctx->pc == 0x3C1674u) {
        ctx->pc = 0x3C1674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1670u;
        // 0x3c1674: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1678u;
        goto label_3c1678;
    }
    ctx->pc = 0x3C1670u;
    {
        const bool branch_taken_0x3c1670 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        ctx->pc = 0x3C1674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1670u;
        // 0x3c1674: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1670) {
            ctx->pc = 0x3C1750u;
            goto label_3c1750;
        }
    }
    ctx->pc = 0x3C1678u;
label_3c1678:
    // 0x3c1678: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c1678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c167c:
    // 0x3c167c: 0x5662000b  bnel        $s3, $v0, . + 4 + (0xB << 2)
label_3c1680:
    if (ctx->pc == 0x3C1680u) {
        ctx->pc = 0x3C1680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C167Cu;
        // 0x3c1680: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1684u;
        goto label_3c1684;
    }
    ctx->pc = 0x3C167Cu;
    {
        const bool branch_taken_0x3c167c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c167c) {
            ctx->pc = 0x3C1680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C167Cu;
            // 0x3c1680: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C16ACu;
            goto label_3c16ac;
        }
    }
    ctx->pc = 0x3C1684u;
label_3c1684:
    // 0x3c1684: 0xc10376a  jal         func_40DDA8
label_3c1688:
    if (ctx->pc == 0x3C1688u) {
        ctx->pc = 0x3C1688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1684u;
        // 0x3c1688: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C168Cu;
        goto label_3c168c;
    }
    ctx->pc = 0x3C1684u;
    SET_GPR_U32(ctx, 31, 0x3C168Cu);
    ctx->pc = 0x3C1688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1684u;
    // 0x3c1688: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3C1684u, 0x3C168Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C168Cu;
label_3c168c:
    // 0x3c168c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c168cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c1690:
    // 0x3c1690: 0xc1036da  jal         func_40DB68
label_3c1694:
    if (ctx->pc == 0x3C1694u) {
        ctx->pc = 0x3C1694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1690u;
        // 0x3c1694: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1698u;
        goto label_3c1698;
    }
    ctx->pc = 0x3C1690u;
    SET_GPR_U32(ctx, 31, 0x3C1698u);
    ctx->pc = 0x3C1694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1690u;
    // 0x3c1694: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3C1690u, 0x3C1698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1698u;
label_3c1698:
    // 0x3c1698: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3c1698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c169c:
    // 0x3c169c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c169cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c16a0:
    // 0x3c16a0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c16a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c16a4:
    // 0x3c16a4: 0x10000024  b           . + 4 + (0x24 << 2)
label_3c16a8:
    if (ctx->pc == 0x3C16A8u) {
        ctx->pc = 0x3C16A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16A4u;
        // 0x3c16a8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C16ACu;
        goto label_3c16ac;
    }
    ctx->pc = 0x3C16A4u;
    {
        const bool branch_taken_0x3c16a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C16A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16A4u;
        // 0x3c16a8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c16a4) {
            ctx->pc = 0x3C1738u;
            goto label_3c1738;
        }
    }
    ctx->pc = 0x3C16ACu;
label_3c16ac:
    // 0x3c16ac: 0x5662000b  bnel        $s3, $v0, . + 4 + (0xB << 2)
label_3c16b0:
    if (ctx->pc == 0x3C16B0u) {
        ctx->pc = 0x3C16B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16ACu;
        // 0x3c16b0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C16B4u;
        goto label_3c16b4;
    }
    ctx->pc = 0x3C16ACu;
    {
        const bool branch_taken_0x3c16ac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c16ac) {
            ctx->pc = 0x3C16B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C16ACu;
            // 0x3c16b0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C16DCu;
            goto label_3c16dc;
        }
    }
    ctx->pc = 0x3C16B4u;
label_3c16b4:
    // 0x3c16b4: 0xc10376a  jal         func_40DDA8
label_3c16b8:
    if (ctx->pc == 0x3C16B8u) {
        ctx->pc = 0x3C16B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16B4u;
        // 0x3c16b8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C16BCu;
        goto label_3c16bc;
    }
    ctx->pc = 0x3C16B4u;
    SET_GPR_U32(ctx, 31, 0x3C16BCu);
    ctx->pc = 0x3C16B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C16B4u;
    // 0x3c16b8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3C16B4u, 0x3C16BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C16BCu;
label_3c16bc:
    // 0x3c16bc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c16bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c16c0:
    // 0x3c16c0: 0xc1036da  jal         func_40DB68
label_3c16c4:
    if (ctx->pc == 0x3C16C4u) {
        ctx->pc = 0x3C16C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16C0u;
        // 0x3c16c4: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C16C8u;
        goto label_3c16c8;
    }
    ctx->pc = 0x3C16C0u;
    SET_GPR_U32(ctx, 31, 0x3C16C8u);
    ctx->pc = 0x3C16C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C16C0u;
    // 0x3c16c4: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3C16C0u, 0x3C16C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C16C8u;
label_3c16c8:
    // 0x3c16c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3c16c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c16cc:
    // 0x3c16cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c16ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c16d0:
    // 0x3c16d0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c16d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c16d4:
    // 0x3c16d4: 0x10000018  b           . + 4 + (0x18 << 2)
label_3c16d8:
    if (ctx->pc == 0x3C16D8u) {
        ctx->pc = 0x3C16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16D4u;
        // 0x3c16d8: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C16DCu;
        goto label_3c16dc;
    }
    ctx->pc = 0x3C16D4u;
    {
        const bool branch_taken_0x3c16d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16D4u;
        // 0x3c16d8: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c16d4) {
            ctx->pc = 0x3C1738u;
            goto label_3c1738;
        }
    }
    ctx->pc = 0x3C16DCu;
label_3c16dc:
    // 0x3c16dc: 0x5662000b  bnel        $s3, $v0, . + 4 + (0xB << 2)
label_3c16e0:
    if (ctx->pc == 0x3C16E0u) {
        ctx->pc = 0x3C16E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16DCu;
        // 0x3c16e0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C16E4u;
        goto label_3c16e4;
    }
    ctx->pc = 0x3C16DCu;
    {
        const bool branch_taken_0x3c16dc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c16dc) {
            ctx->pc = 0x3C16E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C16DCu;
            // 0x3c16e0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C170Cu;
            goto label_3c170c;
        }
    }
    ctx->pc = 0x3C16E4u;
label_3c16e4:
    // 0x3c16e4: 0xc10376a  jal         func_40DDA8
label_3c16e8:
    if (ctx->pc == 0x3C16E8u) {
        ctx->pc = 0x3C16E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16E4u;
        // 0x3c16e8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C16ECu;
        goto label_3c16ec;
    }
    ctx->pc = 0x3C16E4u;
    SET_GPR_U32(ctx, 31, 0x3C16ECu);
    ctx->pc = 0x3C16E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C16E4u;
    // 0x3c16e8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3C16E4u, 0x3C16ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C16ECu;
label_3c16ec:
    // 0x3c16ec: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c16ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c16f0:
    // 0x3c16f0: 0xc1036da  jal         func_40DB68
label_3c16f4:
    if (ctx->pc == 0x3C16F4u) {
        ctx->pc = 0x3C16F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16F0u;
        // 0x3c16f4: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C16F8u;
        goto label_3c16f8;
    }
    ctx->pc = 0x3C16F0u;
    SET_GPR_U32(ctx, 31, 0x3C16F8u);
    ctx->pc = 0x3C16F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C16F0u;
    // 0x3c16f4: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3C16F0u, 0x3C16F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C16F8u;
label_3c16f8:
    // 0x3c16f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3c16f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c16fc:
    // 0x3c16fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c16fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c1700:
    // 0x3c1700: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c1700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c1704:
    // 0x3c1704: 0x1000000c  b           . + 4 + (0xC << 2)
label_3c1708:
    if (ctx->pc == 0x3C1708u) {
        ctx->pc = 0x3C1708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1704u;
        // 0x3c1708: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C170Cu;
        goto label_3c170c;
    }
    ctx->pc = 0x3C1704u;
    {
        const bool branch_taken_0x3c1704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1704u;
        // 0x3c1708: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1704) {
            ctx->pc = 0x3C1738u;
            goto label_3c1738;
        }
    }
    ctx->pc = 0x3C170Cu;
label_3c170c:
    // 0x3c170c: 0x1662000e  bne         $s3, $v0, . + 4 + (0xE << 2)
label_3c1710:
    if (ctx->pc == 0x3C1710u) {
        ctx->pc = 0x3C1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C170Cu;
        // 0x3c1710: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1714u;
        goto label_3c1714;
    }
    ctx->pc = 0x3C170Cu;
    {
        const bool branch_taken_0x3c170c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C170Cu;
        // 0x3c1710: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c170c) {
            ctx->pc = 0x3C1748u;
            goto label_3c1748;
        }
    }
    ctx->pc = 0x3C1714u;
label_3c1714:
    // 0x3c1714: 0xc10376a  jal         func_40DDA8
label_3c1718:
    if (ctx->pc == 0x3C1718u) {
        ctx->pc = 0x3C1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1714u;
        // 0x3c1718: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C171Cu;
        goto label_3c171c;
    }
    ctx->pc = 0x3C1714u;
    SET_GPR_U32(ctx, 31, 0x3C171Cu);
    ctx->pc = 0x3C1718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1714u;
    // 0x3c1718: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3C1714u, 0x3C171Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C171Cu;
label_3c171c:
    // 0x3c171c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c171cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c1720:
    // 0x3c1720: 0xc1036da  jal         func_40DB68
label_3c1724:
    if (ctx->pc == 0x3C1724u) {
        ctx->pc = 0x3C1724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1720u;
        // 0x3c1724: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1728u;
        goto label_3c1728;
    }
    ctx->pc = 0x3C1720u;
    SET_GPR_U32(ctx, 31, 0x3C1728u);
    ctx->pc = 0x3C1724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1720u;
    // 0x3c1724: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3C1720u, 0x3C1728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1728u;
label_3c1728:
    // 0x3c1728: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3c1728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c172c:
    // 0x3c172c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c172cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c1730:
    // 0x3c1730: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c1730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c1734:
    // 0x3c1734: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x3c1734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_3c1738:
    // 0x3c1738: 0xc1036a8  jal         func_40DAA0
label_3c173c:
    if (ctx->pc == 0x3C173Cu) {
        ctx->pc = 0x3C1740u;
        goto label_3c1740;
    }
    ctx->pc = 0x3C1738u;
    SET_GPR_U32(ctx, 31, 0x3C1740u);
    ctx->pc = 0x40DAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DAA0u, 0x3C1738u, 0x3C1740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1740u;
label_3c1740:
    // 0x3c1740: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c1744:
    if (ctx->pc == 0x3C1744u) {
        ctx->pc = 0x3C1744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1740u;
        // 0x3c1744: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1748u;
        goto label_3c1748;
    }
    ctx->pc = 0x3C1740u;
    {
        const bool branch_taken_0x3c1740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1740u;
        // 0x3c1744: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1740) {
            ctx->pc = 0x3C1754u;
            goto label_3c1754;
        }
    }
    ctx->pc = 0x3C1748u;
label_3c1748:
    // 0x3c1748: 0x1644ffcb  bne         $s2, $a0, . + 4 + (-0x35 << 2)
label_3c174c:
    if (ctx->pc == 0x3C174Cu) {
        ctx->pc = 0x3C174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1748u;
        // 0x3c174c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1750u;
        goto label_3c1750;
    }
    ctx->pc = 0x3C1748u;
    {
        const bool branch_taken_0x3c1748 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        ctx->pc = 0x3C174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1748u;
        // 0x3c174c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1748) {
            ctx->pc = 0x3C1678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1678;
        }
    }
    ctx->pc = 0x3C1750u;
label_3c1750:
    // 0x3c1750: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c1750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c1754:
    // 0x3c1754: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3c1754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c1758:
    // 0x3c1758: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3c1758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c175c:
    // 0x3c175c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c175cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c1760:
    // 0x3c1760: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3c1760u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c1764:
    // 0x3c1764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c1764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c1768:
    // 0x3c1768: 0x3e00008  jr          $ra
label_3c176c:
    if (ctx->pc == 0x3C176Cu) {
        ctx->pc = 0x3C176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1768u;
        // 0x3c176c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1770u;
        goto label_3c1770;
    }
    ctx->pc = 0x3C1768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1768u;
        // 0x3c176c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C1770u;
label_3c1770:
    // 0x3c1770: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c1770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3c1774:
    // 0x3c1774: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3c1774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3c1778:
    // 0x3c1778: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3c1778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3c177c:
    // 0x3c177c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c177cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c1780:
    // 0x3c1780: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c1780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c1784:
    // 0x3c1784: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3c1784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c1788:
    // 0x3c1788: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c1788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3c178c:
    // 0x3c178c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3c178cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c1790:
    // 0x3c1790: 0xc103790  jal         func_40DE40
label_3c1794:
    if (ctx->pc == 0x3C1794u) {
        ctx->pc = 0x3C1794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1790u;
        // 0x3c1794: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1798u;
        goto label_3c1798;
    }
    ctx->pc = 0x3C1790u;
    SET_GPR_U32(ctx, 31, 0x3C1798u);
    ctx->pc = 0x3C1794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1790u;
    // 0x3c1794: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE40u, 0x3C1790u, 0x3C1798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1798u;
label_3c1798:
    // 0x3c1798: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c1798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c179c:
    // 0x3c179c: 0xc10378e  jal         func_40DE38
label_3c17a0:
    if (ctx->pc == 0x3C17A0u) {
        ctx->pc = 0x3C17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C179Cu;
        // 0x3c17a0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C17A4u;
        goto label_3c17a4;
    }
    ctx->pc = 0x3C179Cu;
    SET_GPR_U32(ctx, 31, 0x3C17A4u);
    ctx->pc = 0x3C17A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C179Cu;
    // 0x3c17a0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE38u, 0x3C179Cu, 0x3C17A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C17A4u;
label_3c17a4:
    // 0x3c17a4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3c17a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3c17a8:
    // 0x3c17a8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3c17a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c17ac:
    // 0x3c17ac: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
label_3c17b0:
    if (ctx->pc == 0x3C17B0u) {
        ctx->pc = 0x3C17B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C17ACu;
        // 0x3c17b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C17B4u;
        goto label_3c17b4;
    }
    ctx->pc = 0x3C17ACu;
    {
        const bool branch_taken_0x3c17ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C17B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C17ACu;
        // 0x3c17b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c17ac) {
            ctx->pc = 0x3C17E4u;
            goto label_3c17e4;
        }
    }
    ctx->pc = 0x3C17B4u;
label_3c17b4:
    // 0x3c17b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3c17b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3c17b8:
    // 0x3c17b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c17b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c17bc:
    // 0x3c17bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3c17bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c17c0:
    // 0x3c17c0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3c17c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3c17c4:
    // 0x3c17c4: 0x240f809  jalr        $s2
label_3c17c8:
    if (ctx->pc == 0x3C17C8u) {
        ctx->pc = 0x3C17C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C17C4u;
        // 0x3c17c8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C17CCu;
        goto label_3c17cc;
    }
    ctx->pc = 0x3C17C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x3C17CCu);
        ctx->pc = 0x3C17C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C17C4u;
        // 0x3c17c8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C17C4u, 0x3C17CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C17CCu;
label_3c17cc:
    // 0x3c17cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3c17d0:
    if (ctx->pc == 0x3C17D0u) {
        ctx->pc = 0x3C17D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C17CCu;
        // 0x3c17d0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C17D4u;
        goto label_3c17d4;
    }
    ctx->pc = 0x3C17CCu;
    {
        const bool branch_taken_0x3c17cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C17D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C17CCu;
        // 0x3c17d0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c17cc) {
            ctx->pc = 0x3C17E0u;
            goto label_3c17e0;
        }
    }
    ctx->pc = 0x3C17D4u;
label_3c17d4:
    // 0x3c17d4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3c17d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c17d8:
    // 0x3c17d8: 0x1462fff7  bne         $v1, $v0, . + 4 + (-0x9 << 2)
label_3c17dc:
    if (ctx->pc == 0x3C17DCu) {
        ctx->pc = 0x3C17DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C17D8u;
        // 0x3c17dc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C17E0u;
        goto label_3c17e0;
    }
    ctx->pc = 0x3C17D8u;
    {
        const bool branch_taken_0x3c17d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C17DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C17D8u;
        // 0x3c17dc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c17d8) {
            ctx->pc = 0x3C17B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c17b8;
        }
    }
    ctx->pc = 0x3C17E0u;
label_3c17e0:
    // 0x3c17e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c17e4:
    // 0x3c17e4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3c17e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c17e8:
    // 0x3c17e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3c17e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c17ec:
    // 0x3c17ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c17ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c17f0:
    // 0x3c17f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c17f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3c17f4:
    // 0x3c17f4: 0x3e00008  jr          $ra
label_3c17f8:
    if (ctx->pc == 0x3C17F8u) {
        ctx->pc = 0x3C17F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C17F4u;
        // 0x3c17f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C17FCu;
        goto label_3c17fc;
    }
    ctx->pc = 0x3C17F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C17F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C17F4u;
        // 0x3c17f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C17F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C17FCu;
label_3c17fc:
    // 0x3c17fc: 0x0  nop
    ctx->pc = 0x3c17fcu;
    // NOP
    ctx->pc = 0x3c1800u;
}
