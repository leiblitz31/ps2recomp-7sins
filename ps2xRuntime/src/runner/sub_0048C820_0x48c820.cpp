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

// Function: sub_0048C820
// Address: 0x48c820 - 0x48c8f0
void sub_0048C820_0x48c820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C820_0x48c820");
#endif

    switch (ctx->pc) {
        case 0x48c870u: goto label_48c870;
        case 0x48c880u: goto label_48c880;
        case 0x48c88cu: goto label_48c88c;
        case 0x48c8b0u: goto label_48c8b0;
        case 0x48c8c0u: goto label_48c8c0;
        default: break;
    }

    ctx->pc = 0x48c820u;

    // 0x48c820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48c820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48c824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48c824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48c828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48c828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48c82c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x48c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x48c830: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48c830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c834: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x48c834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x48c838: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x48C838u;
    {
        const bool branch_taken_0x48c838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c838) {
            ctx->pc = 0x48C854u;
            goto label_48c854;
        }
    }
    ctx->pc = 0x48C840u;
    // 0x48c840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48c840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48c844: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48c844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c848: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x48c848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x48c84c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48C84Cu;
    {
        const bool branch_taken_0x48c84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c84c) {
            ctx->pc = 0x48C860u;
            goto label_48c860;
        }
    }
    ctx->pc = 0x48C854u;
label_48c854:
    // 0x48c854: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x48c854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48c858: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48c858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c85c: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x48c85cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_48c860:
    // 0x48c860: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x48c860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c864: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x48c864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48c868: 0xc12346c  jal         func_48D1B0
    ctx->pc = 0x48C868u;
    SET_GPR_U32(ctx, 31, 0x48C870u);
    ctx->pc = 0x48D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D1B0u, 0x48C868u, 0x48C870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C870u;
label_48c870:
    // 0x48c870: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48c870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c874: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48c874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48c878: 0xc123200  jal         func_48C800
    ctx->pc = 0x48C878u;
    SET_GPR_U32(ctx, 31, 0x48C880u);
    ctx->pc = 0x48C800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C800u, 0x48C878u, 0x48C880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C880u;
label_48c880:
    // 0x48c880: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48c880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c884: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x48C884u;
    {
        const bool branch_taken_0x48c884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c884) {
            ctx->pc = 0x48C8A0u;
            goto label_48c8a0;
        }
    }
    ctx->pc = 0x48C88Cu;
label_48c88c:
    // 0x48c88c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x48c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x48c890: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x48c890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x48c894: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x48c894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x48c898: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x48c898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x48c89c: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x48c89cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_48c8a0:
    // 0x48c8a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c8a4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48c8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48c8a8: 0xc1231f8  jal         func_48C7E0
    ctx->pc = 0x48C8A8u;
    SET_GPR_U32(ctx, 31, 0x48C8B0u);
    ctx->pc = 0x48C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C7E0u, 0x48C8A8u, 0x48C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C8B0u;
label_48c8b0:
    // 0x48c8b0: 0x1602fff6  bne         $s0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x48C8B0u;
    {
        const bool branch_taken_0x48c8b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x48c8b0) {
            ctx->pc = 0x48C88Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48c88c;
        }
    }
    ctx->pc = 0x48C8B8u;
    // 0x48c8b8: 0xc11904c  jal         func_464130
    ctx->pc = 0x48C8B8u;
    SET_GPR_U32(ctx, 31, 0x48C8C0u);
    ctx->pc = 0x464130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464130u, 0x48C8B8u, 0x48C8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C8C0u;
label_48c8c0:
    // 0x48c8c0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x48c8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c8c4: 0xfc620030  sd          $v0, 0x30($v1)
    ctx->pc = 0x48c8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 2));
    // 0x48c8c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c8cc: 0xfc400038  sd          $zero, 0x38($v0)
    ctx->pc = 0x48c8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 0));
    // 0x48c8d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c8d4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x48c8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x48c8d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48c8dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48c8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c8e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48c8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c8e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48c8e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48c8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x48C8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48C8F0u;
}
