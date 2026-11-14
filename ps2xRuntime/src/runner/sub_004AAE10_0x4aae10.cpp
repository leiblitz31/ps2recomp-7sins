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

// Function: sub_004AAE10
// Address: 0x4aae10 - 0x4aae50
void sub_004AAE10_0x4aae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AAE10_0x4aae10");
#endif

    switch (ctx->pc) {
        case 0x4aae20u: goto label_4aae20;
        case 0x4aae30u: goto label_4aae30;
        default: break;
    }

    ctx->pc = 0x4aae10u;

    // 0x4aae10: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4aae10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aae14: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AAE14u;
    {
        const bool branch_taken_0x4aae14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AAE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAE14u;
        // 0x4aae18: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aae14) {
            ctx->pc = 0x4AAE30u;
            goto label_4aae30;
        }
    }
    ctx->pc = 0x4AAE1Cu;
    // 0x4aae1c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4aae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4aae20:
    // 0x4aae20: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AAE20u;
    {
        const bool branch_taken_0x4aae20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x4AAE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAE20u;
        // 0x4aae24: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aae20) {
            ctx->pc = 0x4AAE40u;
            goto label_4aae40;
        }
    }
    ctx->pc = 0x4AAE28u;
    // 0x4aae28: 0x5465fffd  bnel        $v1, $a1, . + 4 + (-0x3 << 2)
    ctx->pc = 0x4AAE28u;
    {
        const bool branch_taken_0x4aae28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x4aae28) {
            ctx->pc = 0x4AAE2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AAE28u;
            // 0x4aae2c: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AAE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aae20;
        }
    }
    ctx->pc = 0x4AAE30u;
label_4aae30:
    // 0x4aae30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AAE30u;
    {
        const bool branch_taken_0x4aae30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aae30) {
            ctx->pc = 0x4AAE48u;
            goto label_4aae48;
        }
    }
    ctx->pc = 0x4AAE38u;
    // 0x4aae38: 0x3e00008  jr          $ra
    ctx->pc = 0x4AAE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AAE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAE38u;
        // 0x4aae3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AAE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AAE40u;
label_4aae40:
    // 0x4aae40: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x4AAE40u;
    {
        const bool branch_taken_0x4aae40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AAE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAE40u;
        // 0x4aae44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aae40) {
            ctx->pc = 0x4AAE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aae30;
        }
    }
    ctx->pc = 0x4AAE48u;
label_4aae48:
    // 0x4aae48: 0x3e00008  jr          $ra
    ctx->pc = 0x4AAE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AAE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAE48u;
        // 0x4aae4c: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AAE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AAE50u;
}
