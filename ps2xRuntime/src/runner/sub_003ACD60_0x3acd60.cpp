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

// Function: sub_003ACD60
// Address: 0x3acd60 - 0x3acd80
void sub_003ACD60_0x3acd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ACD60_0x3acd60");
#endif

    ctx->pc = 0x3acd60u;

    // 0x3acd60: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3acd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3acd64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3acd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3acd68: 0x3e00008  jr          $ra
    ctx->pc = 0x3ACD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACD68u;
        // 0x3acd6c: 0xac64da98  sw          $a0, -0x2568($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957720), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ACD70u;
    // 0x3acd70: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3acd70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3acd74: 0x3e00008  jr          $ra
    ctx->pc = 0x3ACD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACD74u;
        // 0x3acd78: 0x8c62da98  lw          $v0, -0x2568($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957720)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ACD7Cu;
    // 0x3acd7c: 0x0  nop
    ctx->pc = 0x3acd7cu;
    // NOP
    ctx->pc = 0x3acd80u;
}
