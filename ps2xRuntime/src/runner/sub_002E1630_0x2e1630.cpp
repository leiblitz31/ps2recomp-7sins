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

// Function: sub_002E1630
// Address: 0x2e1630 - 0x2e1710
void sub_002E1630_0x2e1630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1630_0x2e1630");
#endif

    switch (ctx->pc) {
        case 0x2e166cu: goto label_2e166c;
        case 0x2e16a8u: goto label_2e16a8;
        case 0x2e16b8u: goto label_2e16b8;
        case 0x2e16d0u: goto label_2e16d0;
        default: break;
    }

    ctx->pc = 0x2e1630u;

    // 0x2e1630: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2e1630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2e1634: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e1634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e1638: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e1638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e163c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e163cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e1640: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e1640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e1644: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e1644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e1648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e1648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e164c: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x2e164cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x2e1650: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2e1650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e1654: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e1654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e1658: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e1658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e165c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2e165cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2e1660: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2e1660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e1664: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2E1664u;
    SET_GPR_U32(ctx, 31, 0x2E166Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2E1664u, 0x2E166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E166Cu;
label_2e166c:
    // 0x2e166c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e166cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1670: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E1670u;
    {
        const bool branch_taken_0x2e1670 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1670) {
            ctx->pc = 0x2E16E4u;
            goto label_2e16e4;
        }
    }
    ctx->pc = 0x2E1678u;
    // 0x2e1678: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e1678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e167c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2e167cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2e1680: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2e1680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1684: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2e1684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2e1688: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2e1688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e168c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e168cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e1690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e1690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e1694: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2e1694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2e1698: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x2e1698u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e169c: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x2e169cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e16a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E16A0u;
    {
        const bool branch_taken_0x2e16a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e16a0) {
            ctx->pc = 0x2E16D8u;
            goto label_2e16d8;
        }
    }
    ctx->pc = 0x2E16A8u;
label_2e16a8:
    // 0x2e16a8: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2e16a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e16ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e16acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e16b0: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2E16B0u;
    SET_GPR_U32(ctx, 31, 0x2E16B8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2E16B0u, 0x2E16B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E16B8u;
label_2e16b8:
    // 0x2e16b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e16b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e16bc: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E16BCu;
    {
        const bool branch_taken_0x2e16bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e16bc) {
            ctx->pc = 0x2E16D4u;
            goto label_2e16d4;
        }
    }
    ctx->pc = 0x2E16C4u;
    // 0x2e16c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e16c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e16c8: 0xc0b7a7c  jal         func_2DE9F0
    ctx->pc = 0x2E16C8u;
    SET_GPR_U32(ctx, 31, 0x2E16D0u);
    ctx->pc = 0x2DE9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE9F0u, 0x2E16C8u, 0x2E16D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E16D0u;
label_2e16d0:
    // 0x2e16d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e16d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e16d4:
    // 0x2e16d4: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x2e16d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_2e16d8:
    // 0x2e16d8: 0x1674fff3  bne         $s3, $s4, . + 4 + (-0xD << 2)
    ctx->pc = 0x2E16D8u;
    {
        const bool branch_taken_0x2e16d8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        if (branch_taken_0x2e16d8) {
            ctx->pc = 0x2E16A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e16a8;
        }
    }
    ctx->pc = 0x2E16E0u;
    // 0x2e16e0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2e16e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e16e4:
    // 0x2e16e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e16e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e16e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e16e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e16ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e16ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e16f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e16f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e16f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e16f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e16f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e16f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e16fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e16fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1700: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2e1700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e1704: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E170Cu;
    // 0x2e170c: 0x0  nop
    ctx->pc = 0x2e170cu;
    // NOP
    ctx->pc = 0x2e1710u;
}
