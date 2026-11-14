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

// Function: sub_004A0840
// Address: 0x4a0840 - 0x4a0870
void sub_004A0840_0x4a0840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0840_0x4a0840");
#endif

    switch (ctx->pc) {
        case 0x4a0850u: goto label_4a0850;
        default: break;
    }

    ctx->pc = 0x4a0840u;

    // 0x4a0840: 0x8f83c1f0  lw          $v1, -0x3E10($gp)
    ctx->pc = 0x4a0840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
    // 0x4a0844: 0x2786c1f0  addiu       $a2, $gp, -0x3E10
    ctx->pc = 0x4a0844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951408));
    // 0x4a0848: 0x10660006  beq         $v1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A0848u;
    {
        const bool branch_taken_0x4a0848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x4A084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0848u;
        // 0x4a084c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0848) {
            ctx->pc = 0x4A0864u;
            goto label_4a0864;
        }
    }
    ctx->pc = 0x4A0850u;
label_4a0850:
    // 0x4a0850: 0x10a40005  beq         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A0850u;
    {
        const bool branch_taken_0x4a0850 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x4A0854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0850u;
        // 0x4a0854: 0x2462ffe4  addiu       $v0, $v1, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0850) {
            ctx->pc = 0x4A0868u;
            goto label_4a0868;
        }
    }
    ctx->pc = 0x4A0858u;
    // 0x4a0858: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4a0858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a085c: 0x1466fffc  bne         $v1, $a2, . + 4 + (-0x4 << 2)
    ctx->pc = 0x4A085Cu;
    {
        const bool branch_taken_0x4a085c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x4A0860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A085Cu;
        // 0x4a0860: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a085c) {
            ctx->pc = 0x4A0850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0850;
        }
    }
    ctx->pc = 0x4A0864u;
label_4a0864:
    // 0x4a0864: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a0864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a0868:
    // 0x4a0868: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0870u;
}
