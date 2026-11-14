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

// Function: sub_004AAE50
// Address: 0x4aae50 - 0x4aae80
void sub_004AAE50_0x4aae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AAE50_0x4aae50");
#endif

    switch (ctx->pc) {
        case 0x4aae60u: goto label_4aae60;
        default: break;
    }

    ctx->pc = 0x4aae50u;

    // 0x4aae50: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4aae50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aae54: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4AAE54u;
    {
        const bool branch_taken_0x4aae54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AAE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAE54u;
        // 0x4aae58: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aae54) {
            ctx->pc = 0x4AAE78u;
            goto label_4aae78;
        }
    }
    ctx->pc = 0x4AAE5Cu;
    // 0x4aae5c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4aae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4aae60:
    // 0x4aae60: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AAE60u;
    {
        const bool branch_taken_0x4aae60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x4AAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAE60u;
        // 0x4aae64: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aae60) {
            ctx->pc = 0x4AAE70u;
            goto label_4aae70;
        }
    }
    ctx->pc = 0x4AAE68u;
    // 0x4aae68: 0x3e00008  jr          $ra
    ctx->pc = 0x4AAE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AAE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAE68u;
        // 0x4aae6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AAE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AAE70u;
label_4aae70:
    // 0x4aae70: 0x5465fffb  bnel        $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4AAE70u;
    {
        const bool branch_taken_0x4aae70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x4aae70) {
            ctx->pc = 0x4AAE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AAE70u;
            // 0x4aae74: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AAE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aae60;
        }
    }
    ctx->pc = 0x4AAE78u;
label_4aae78:
    // 0x4aae78: 0x3e00008  jr          $ra
    ctx->pc = 0x4AAE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AAE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AAE80u;
}
