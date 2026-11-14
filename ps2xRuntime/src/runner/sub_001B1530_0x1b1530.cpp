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

// Function: sub_001B1530
// Address: 0x1b1530 - 0x1b1820
void sub_001B1530_0x1b1530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1530_0x1b1530");
#endif

    switch (ctx->pc) {
        case 0x1b1598u: goto label_1b1598;
        case 0x1b15b8u: goto label_1b15b8;
        case 0x1b15e0u: goto label_1b15e0;
        case 0x1b15fcu: goto label_1b15fc;
        case 0x1b1618u: goto label_1b1618;
        case 0x1b164cu: goto label_1b164c;
        case 0x1b166cu: goto label_1b166c;
        case 0x1b168cu: goto label_1b168c;
        case 0x1b16b0u: goto label_1b16b0;
        case 0x1b16f4u: goto label_1b16f4;
        case 0x1b1784u: goto label_1b1784;
        default: break;
    }

    ctx->pc = 0x1b1530u;

    // 0x1b1530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1534: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b1534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1b1538: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b1538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b153c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b153cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1540: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b1540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b1544: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B154Cu;
    // 0x1b154c: 0x0  nop
    ctx->pc = 0x1b154cu;
    // NOP
    // 0x1b1550: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b1550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b1554: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b1554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b1558: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b1558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b155c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b155cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b1560: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1b1560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1b1564: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x1b1564u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
    // 0x1b1568: 0x93a30040  lbu         $v1, 0x40($sp)
    ctx->pc = 0x1b1568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b156c: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x1B156Cu;
    {
        const bool branch_taken_0x1b156c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b156c) {
            ctx->pc = 0x1B16B4u;
            goto label_1b16b4;
        }
    }
    ctx->pc = 0x1B1574u;
    // 0x1b1574: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b1574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1578: 0x8c6300b0  lw          $v1, 0xB0($v1)
    ctx->pc = 0x1b1578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x1b157c: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1B157Cu;
    {
        const bool branch_taken_0x1b157c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b157c) {
            ctx->pc = 0x1B1624u;
            goto label_1b1624;
        }
    }
    ctx->pc = 0x1B1584u;
    // 0x1b1584: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b1584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1588: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b1588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b158c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b158cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1590: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B1590u;
    SET_GPR_U32(ctx, 31, 0x1B1598u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B1590u, 0x1B1598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1598u;
label_1b1598:
    // 0x1b1598: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b1598u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b159c: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x1B159Cu;
    {
        const bool branch_taken_0x1b159c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b159c) {
            ctx->pc = 0x1B16B4u;
            goto label_1b16b4;
        }
    }
    ctx->pc = 0x1B15A4u;
    // 0x1b15a4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b15a8: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b15a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b15ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b15acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b15b0: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B15B0u;
    SET_GPR_U32(ctx, 31, 0x1B15B8u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B15B0u, 0x1B15B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B15B8u;
label_1b15b8:
    // 0x1b15b8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b15b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b15bc: 0xc780837c  lwc1        $f0, -0x7C84($gp)
    ctx->pc = 0x1b15bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b15c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b15c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b15c4: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
    ctx->pc = 0x1B15C4u;
    {
        const bool branch_taken_0x1b15c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b15c4) {
            ctx->pc = 0x1B16B4u;
            goto label_1b16b4;
        }
    }
    ctx->pc = 0x1B15CCu;
    // 0x1b15cc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b15ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b15d0: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b15d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b15d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b15d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b15d8: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B15D8u;
    SET_GPR_U32(ctx, 31, 0x1B15E0u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B15D8u, 0x1B15E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B15E0u;
label_1b15e0:
    // 0x1b15e0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1b15e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b15e4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b15e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b15e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b15e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b15ec: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b15ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b15f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b15f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b15f4: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B15F4u;
    SET_GPR_U32(ctx, 31, 0x1B15FCu);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B15F4u, 0x1B15FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B15FCu;
label_1b15fc:
    // 0x1b15fc: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b15fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b1600: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b1600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1604: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b1604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1608: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b1608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b160c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b160cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b1610: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B1610u;
    SET_GPR_U32(ctx, 31, 0x1B1618u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B1610u, 0x1B1618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1618u;
label_1b1618:
    // 0x1b1618: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x1b1618u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x1b161c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1B161Cu;
    {
        const bool branch_taken_0x1b161c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b161c) {
            ctx->pc = 0x1B16B4u;
            goto label_1b16b4;
        }
    }
    ctx->pc = 0x1B1624u;
label_1b1624:
    // 0x1b1624: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b1624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1628: 0x8c6400b0  lw          $a0, 0xB0($v1)
    ctx->pc = 0x1b1628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x1b162c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b162cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b1630: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B1630u;
    {
        const bool branch_taken_0x1b1630 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b1630) {
            ctx->pc = 0x1B16B4u;
            goto label_1b16b4;
        }
    }
    ctx->pc = 0x1B1638u;
    // 0x1b1638: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b1638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b163c: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b163cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b1640: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b1640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b1644: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B1644u;
    SET_GPR_U32(ctx, 31, 0x1B164Cu);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B1644u, 0x1B164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B164Cu;
label_1b164c:
    // 0x1b164c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b164cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1650: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B1650u;
    {
        const bool branch_taken_0x1b1650 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1650) {
            ctx->pc = 0x1B16B4u;
            goto label_1b16b4;
        }
    }
    ctx->pc = 0x1B1658u;
    // 0x1b1658: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b1658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b165c: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b165cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b1660: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b1660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b1664: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B1664u;
    SET_GPR_U32(ctx, 31, 0x1B166Cu);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B1664u, 0x1B166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B166Cu;
label_1b166c:
    // 0x1b166c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b166cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1670: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B1670u;
    {
        const bool branch_taken_0x1b1670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1670) {
            ctx->pc = 0x1B16B4u;
            goto label_1b16b4;
        }
    }
    ctx->pc = 0x1B1678u;
    // 0x1b1678: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b1678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b167c: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b167cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b1680: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b1680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b1684: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B1684u;
    SET_GPR_U32(ctx, 31, 0x1B168Cu);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B1684u, 0x1B168Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B168Cu;
label_1b168c:
    // 0x1b168c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b168cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1690: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1690u;
    {
        const bool branch_taken_0x1b1690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1690) {
            ctx->pc = 0x1B16B4u;
            goto label_1b16b4;
        }
    }
    ctx->pc = 0x1B1698u;
    // 0x1b1698: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b1698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b169c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b16a0: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b16a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b16a4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b16a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b16a8: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B16A8u;
    SET_GPR_U32(ctx, 31, 0x1B16B0u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B16A8u, 0x1B16B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B16B0u;
label_1b16b0:
    // 0x1b16b0: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x1b16b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
label_1b16b4:
    // 0x1b16b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b16b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b16b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b16b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b16bc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b16bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b16c0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1b16c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b16c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B16C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B16C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B16CCu;
    // 0x1b16cc: 0x0  nop
    ctx->pc = 0x1b16ccu;
    // NOP
    // 0x1b16d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b16d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b16d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b16d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b16d8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b16d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1b16dc: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1b16dcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b16e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b16e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b16e4: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b16e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b16e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b16e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b16ec: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B16ECu;
    SET_GPR_U32(ctx, 31, 0x1B16F4u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B16ECu, 0x1B16F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B16F4u;
label_1b16f4:
    // 0x1b16f4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b16f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b16f8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B16F8u;
    {
        const bool branch_taken_0x1b16f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b16f8) {
            ctx->pc = 0x1B1748u;
            goto label_1b1748;
        }
    }
    ctx->pc = 0x1B1700u;
    // 0x1b1700: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x1b1700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1b1704: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1b1704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1708: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1b1708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1b170c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b170cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1710: 0xc461048c  lwc1        $f1, 0x48C($v1)
    ctx->pc = 0x1b1710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1714: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1b1714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1718: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x1b1718u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b171c: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x1b171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b1720: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b1720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1724: 0xc4610164  lwc1        $f1, 0x164($v1)
    ctx->pc = 0x1b1724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1728: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b1728u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b172c: 0x0  nop
    ctx->pc = 0x1b172cu;
    // NOP
    // 0x1b1730: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b1730u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b1734: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1b1734u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b1738: 0xe4600164  swc1        $f0, 0x164($v1)
    ctx->pc = 0x1b1738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 356), bits); }
    // 0x1b173c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b173cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1740: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b1740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1744: 0xac640490  sw          $a0, 0x490($v1)
    ctx->pc = 0x1b1744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1168), GPR_U32(ctx, 4));
label_1b1748:
    // 0x1b1748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b174c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b174cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b1750: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1758u;
    // 0x1b1758: 0x0  nop
    ctx->pc = 0x1b1758u;
    // NOP
    // 0x1b175c: 0x0  nop
    ctx->pc = 0x1b175cu;
    // NOP
    // 0x1b1760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b1760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b1764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1768: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b1768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1b176c: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1b176cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b1770: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b1770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1774: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b1774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b1778: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b1778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b177c: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B177Cu;
    SET_GPR_U32(ctx, 31, 0x1B1784u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B177Cu, 0x1B1784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1784u;
label_1b1784:
    // 0x1b1784: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b1784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1788: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B1788u;
    {
        const bool branch_taken_0x1b1788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1788) {
            ctx->pc = 0x1B17D8u;
            goto label_1b17d8;
        }
    }
    ctx->pc = 0x1B1790u;
    // 0x1b1790: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x1b1790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1b1794: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1b1794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1798: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1b1798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1b179c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b179cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b17a0: 0xc461048c  lwc1        $f1, 0x48C($v1)
    ctx->pc = 0x1b17a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b17a4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1b17a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b17a8: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x1b17a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b17ac: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x1b17acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b17b0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b17b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b17b4: 0xc4610164  lwc1        $f1, 0x164($v1)
    ctx->pc = 0x1b17b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b17b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b17b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b17bc: 0x0  nop
    ctx->pc = 0x1b17bcu;
    // NOP
    // 0x1b17c0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b17c0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b17c4: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x1b17c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b17c8: 0xe4600164  swc1        $f0, 0x164($v1)
    ctx->pc = 0x1b17c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 356), bits); }
    // 0x1b17cc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b17ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b17d0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b17d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b17d4: 0xac640490  sw          $a0, 0x490($v1)
    ctx->pc = 0x1b17d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1168), GPR_U32(ctx, 4));
label_1b17d8:
    // 0x1b17d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b17d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b17dc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b17dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b17e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B17E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B17E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B17E8u;
    // 0x1b17e8: 0x0  nop
    ctx->pc = 0x1b17e8u;
    // NOP
    // 0x1b17ec: 0x0  nop
    ctx->pc = 0x1b17ecu;
    // NOP
    // 0x1b17f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b17f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b17f4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1b17f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b17f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B17F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B17F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1800u;
    // 0x1b1800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1804: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1b1804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1b1808: 0x24426de0  addiu       $v0, $v0, 0x6DE0
    ctx->pc = 0x1b1808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28128));
    // 0x1b180c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b180cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b1810: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1818u;
    // 0x1b1818: 0x0  nop
    ctx->pc = 0x1b1818u;
    // NOP
    // 0x1b181c: 0x0  nop
    ctx->pc = 0x1b181cu;
    // NOP
    ctx->pc = 0x1b1820u;
}
