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

// Function: sub_001C1610
// Address: 0x1c1610 - 0x1c1710
void sub_001C1610_0x1c1610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1610_0x1c1610");
#endif

    switch (ctx->pc) {
        case 0x1c1630u: goto label_1c1630;
        case 0x1c163cu: goto label_1c163c;
        case 0x1c1690u: goto label_1c1690;
        case 0x1c169cu: goto label_1c169c;
        case 0x1c16ccu: goto label_1c16cc;
        default: break;
    }

    ctx->pc = 0x1c1610u;

    // 0x1c1610: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c1610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c1614: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c1614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c1618: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c161c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c161cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c1620: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1c1620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x1c1624: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1c1624u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1628: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1C1628u;
    {
        const bool branch_taken_0x1c1628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1628) {
            ctx->pc = 0x1C16E0u;
            goto label_1c16e0;
        }
    }
    ctx->pc = 0x1C1630u;
label_1c1630:
    // 0x1c1630: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c1630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1634: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1C1634u;
    {
        const bool branch_taken_0x1c1634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1634) {
            ctx->pc = 0x1C16D0u;
            goto label_1c16d0;
        }
    }
    ctx->pc = 0x1C163Cu;
label_1c163c:
    // 0x1c163c: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x1c163cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1c1640: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c1640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c1644: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c1644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1648: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1c1648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c164c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c164cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c1650: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c1650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1654: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1c1654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c1658: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c1658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c165c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c165cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c1660: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1c1660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c1664: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1c1664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c1668: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c1668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c166c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1c166cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c1670: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c1670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c1674: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c1674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1678: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1c1678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c167c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c167cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c1680: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c1680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c1684: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1c1684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c1688: 0xc06edac  jal         func_1BB6B0
    ctx->pc = 0x1C1688u;
    SET_GPR_U32(ctx, 31, 0x1C1690u);
    ctx->pc = 0x1BB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB6B0u, 0x1C1688u, 0x1C1690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1690u;
label_1c1690:
    // 0x1c1690: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c1690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c1694: 0xc06e5c8  jal         func_1B9720
    ctx->pc = 0x1C1694u;
    SET_GPR_U32(ctx, 31, 0x1C169Cu);
    ctx->pc = 0x1B9720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9720u, 0x1C1694u, 0x1C169Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C169Cu;
label_1c169c:
    // 0x1c169c: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1c169cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c16a0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1c16a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c16a4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1c16a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c16a8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1c16a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c16ac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1c16acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c16b0: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1c16b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c16b4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1c16b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c16b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c16b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c16bc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1c16bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c16c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c16c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c16c4: 0xc06edac  jal         func_1BB6B0
    ctx->pc = 0x1C16C4u;
    SET_GPR_U32(ctx, 31, 0x1C16CCu);
    ctx->pc = 0x1BB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB6B0u, 0x1C16C4u, 0x1C16CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C16CCu;
label_1c16cc:
    // 0x1c16cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c16ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c16d0:
    // 0x1c16d0: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1c16d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c16d4: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1C16D4u;
    {
        const bool branch_taken_0x1c16d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c16d4) {
            ctx->pc = 0x1C163Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c163c;
        }
    }
    ctx->pc = 0x1C16DCu;
    // 0x1c16dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c16dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c16e0:
    // 0x1c16e0: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x1c16e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c16e4: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1C16E4u;
    {
        const bool branch_taken_0x1c16e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c16e4) {
            ctx->pc = 0x1C1630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1630;
        }
    }
    ctx->pc = 0x1C16ECu;
    // 0x1c16ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c16ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c16f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c16f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c16f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c16f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c16f8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1c16f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c16fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C16FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C16FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1704u;
    // 0x1c1704: 0x0  nop
    ctx->pc = 0x1c1704u;
    // NOP
    // 0x1c1708: 0x0  nop
    ctx->pc = 0x1c1708u;
    // NOP
    // 0x1c170c: 0x0  nop
    ctx->pc = 0x1c170cu;
    // NOP
    ctx->pc = 0x1c1710u;
}
