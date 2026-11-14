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

// Function: sub_00349BA0
// Address: 0x349ba0 - 0x349bc8
void sub_00349BA0_0x349ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349BA0_0x349ba0");
#endif

    ctx->pc = 0x349ba0u;

    // 0x349ba0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x349ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x349ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x349ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x349BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349BA8u;
        // 0x349bac: 0xac64c334  sw          $a0, -0x3CCC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294951732), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349BB0u;
    // 0x349bb0: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x349bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x349bb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x349bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349bb8: 0x8ca3c334  lw          $v1, -0x3CCC($a1)
    ctx->pc = 0x349bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C334u));
    // 0x349bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x349BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349BBCu;
        // 0x349bc0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349BC4u;
    // 0x349bc4: 0x0  nop
    ctx->pc = 0x349bc4u;
    // NOP
    ctx->pc = 0x349bc8u;
}
