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

// Function: sub_00398D20
// Address: 0x398d20 - 0x398d48
void sub_00398D20_0x398d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398D20_0x398d20");
#endif

    ctx->pc = 0x398d20u;

    // 0x398d20: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x398D20u;
    {
        const bool branch_taken_0x398d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x398D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D20u;
        // 0x398d24: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398d20) {
            ctx->pc = 0x398D30u;
            goto label_398d30;
        }
    }
    ctx->pc = 0x398D28u;
    // 0x398d28: 0x8c43ae38  lw          $v1, -0x51C8($v0)
    ctx->pc = 0x398d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946360)));
    // 0x398d2c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x398d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_398d30:
    // 0x398d30: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x398D30u;
    {
        const bool branch_taken_0x398d30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x398D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D30u;
        // 0x398d34: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398d30) {
            ctx->pc = 0x398D40u;
            goto label_398d40;
        }
    }
    ctx->pc = 0x398D38u;
    // 0x398d38: 0x8c43ae3c  lw          $v1, -0x51C4($v0)
    ctx->pc = 0x398d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946364)));
    // 0x398d3c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x398d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_398d40:
    // 0x398d40: 0x3e00008  jr          $ra
    ctx->pc = 0x398D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D40u;
        // 0x398d44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398D48u;
}
