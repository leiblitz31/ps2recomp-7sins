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

// Function: sub_002C1410
// Address: 0x2c1410 - 0x2c1520
void sub_002C1410_0x2c1410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1410_0x2c1410");
#endif

    switch (ctx->pc) {
        case 0x2c1444u: goto label_2c1444;
        case 0x2c1458u: goto label_2c1458;
        case 0x2c147cu: goto label_2c147c;
        case 0x2c1498u: goto label_2c1498;
        case 0x2c14b0u: goto label_2c14b0;
        case 0x2c14d8u: goto label_2c14d8;
        case 0x2c14e8u: goto label_2c14e8;
        case 0x2c1504u: goto label_2c1504;
        default: break;
    }

    ctx->pc = 0x2c1410u;

    // 0x2c1410: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2c1410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2c1414: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c1414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c1418: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c1418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c141c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c141cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c1420: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c1420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c1424: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2c1424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2c1428: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2c1428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2c142c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2c142cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2c1430: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2c1430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2c1434: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2c1434u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2c1438: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2c1438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c143c: 0xc0b04b0  jal         func_2C12C0
    ctx->pc = 0x2C143Cu;
    SET_GPR_U32(ctx, 31, 0x2C1444u);
    ctx->pc = 0x2C12C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C12C0u, 0x2C143Cu, 0x2C1444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1444u;
label_2c1444:
    // 0x2c1444: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2c1444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2c1448: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2c1448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2c144c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2c144cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c1450: 0xc041954  jal         func_106550
    ctx->pc = 0x2C1450u;
    SET_GPR_U32(ctx, 31, 0x2C1458u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x2C1450u, 0x2C1458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1458u;
label_2c1458:
    // 0x2c1458: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2c1458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2c145c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c145cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c1460: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2c1460u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c1464: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2c1464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c1468: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2c1468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2c146c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c146cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1470: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c1470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1474: 0xc0b29c4  jal         func_2CA710
    ctx->pc = 0x2C1474u;
    SET_GPR_U32(ctx, 31, 0x2C147Cu);
    ctx->pc = 0x2CA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA710u, 0x2C1474u, 0x2C147Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C147Cu;
label_2c147c:
    // 0x2c147c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c147cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1480: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2c1480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c1484: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c1484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c1488: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2c1488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c148c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c148cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1490: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2C1490u;
    SET_GPR_U32(ctx, 31, 0x2C1498u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2C1490u, 0x2C1498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1498u;
label_2c1498:
    // 0x2c1498: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c149c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c149cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c14a0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2c14a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c14a4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2c14a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c14a8: 0xc0b057c  jal         func_2C15F0
    ctx->pc = 0x2C14A8u;
    SET_GPR_U32(ctx, 31, 0x2C14B0u);
    ctx->pc = 0x2C15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C15F0u, 0x2C14A8u, 0x2C14B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C14B0u;
label_2c14b0:
    // 0x2c14b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c14b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c14b4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x2c14b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c14b8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C14B8u;
    {
        const bool branch_taken_0x2c14b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c14b8) {
            ctx->pc = 0x2C14DCu;
            goto label_2c14dc;
        }
    }
    ctx->pc = 0x2C14C0u;
    // 0x2c14c0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2c14c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c14c4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2c14c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c14c8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2c14c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c14cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c14ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c14d0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2C14D0u;
    SET_GPR_U32(ctx, 31, 0x2C14D8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2C14D0u, 0x2C14D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C14D8u;
label_2c14d8:
    // 0x2c14d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c14d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c14dc:
    // 0x2c14dc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2c14dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c14e0: 0xc0b055c  jal         func_2C1570
    ctx->pc = 0x2C14E0u;
    SET_GPR_U32(ctx, 31, 0x2C14E8u);
    ctx->pc = 0x2C1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1570u, 0x2C14E0u, 0x2C14E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C14E8u;
label_2c14e8:
    // 0x2c14e8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2c14e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2c14ec: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2c14ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c14f0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2c14f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c14f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c14f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c14f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c14f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c14fc: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x2C14FCu;
    SET_GPR_U32(ctx, 31, 0x2C1504u);
    ctx->pc = 0x2C1520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1520u, 0x2C14FCu, 0x2C1504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1504u;
label_2c1504:
    // 0x2c1504: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c1504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1508: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c1508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c150c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c150cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c1510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1514: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2c1514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2c1518: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1520u;
}
