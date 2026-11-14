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

// Function: sub_00344830
// Address: 0x344830 - 0x3448a0
void sub_00344830_0x344830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344830_0x344830");
#endif

    switch (ctx->pc) {
        case 0x344850u: goto label_344850;
        default: break;
    }

    ctx->pc = 0x344830u;

    // 0x344830: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x344830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x344834: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x344834u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x344838: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x344838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34483c: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x34483Cu;
    {
        const bool branch_taken_0x34483c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x344840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34483Cu;
        // 0x344840: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34483c) {
            ctx->pc = 0x344880u;
            goto label_344880;
        }
    }
    ctx->pc = 0x344844u;
    // 0x344844: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x344844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x344848: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x344848u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34484c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34484cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_344850:
    // 0x344850: 0x54450004  bnel        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x344850u;
    {
        const bool branch_taken_0x344850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x344850) {
            ctx->pc = 0x344854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344850u;
            // 0x344854: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344864u;
            goto label_344864;
        }
    }
    ctx->pc = 0x344858u;
    // 0x344858: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x344858u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34485c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x34485cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344860: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x344860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_344864:
    // 0x344864: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x344864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x344868: 0x15000005  bnez        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x344868u;
    {
        const bool branch_taken_0x344868 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x34486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344868u;
        // 0x34486c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344868) {
            ctx->pc = 0x344880u;
            goto label_344880;
        }
    }
    ctx->pc = 0x344870u;
    // 0x344870: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x344870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x344874: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x344874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x344878: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x344878u;
    {
        const bool branch_taken_0x344878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x344878) {
            ctx->pc = 0x34487Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344878u;
            // 0x34487c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_344850;
        }
    }
    ctx->pc = 0x344880u;
label_344880:
    // 0x344880: 0x5200005  bltz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x344880u;
    {
        const bool branch_taken_0x344880 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x344884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344880u;
        // 0x344884: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344880) {
            ctx->pc = 0x344898u;
            goto label_344898;
        }
    }
    ctx->pc = 0x344888u;
    // 0x344888: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x344888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x34488c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34488cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x344890: 0x3e00008  jr          $ra
    ctx->pc = 0x344890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344890u;
        // 0x344894: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344898u;
label_344898:
    // 0x344898: 0x3e00008  jr          $ra
    ctx->pc = 0x344898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344898u;
        // 0x34489c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3448A0u;
}
