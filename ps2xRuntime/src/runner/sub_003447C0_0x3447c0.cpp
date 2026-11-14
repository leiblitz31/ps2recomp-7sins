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

// Function: sub_003447C0
// Address: 0x3447c0 - 0x3447e8
void sub_003447C0_0x3447c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003447C0_0x3447c0");
#endif

    ctx->pc = 0x3447c0u;

    // 0x3447c0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3447c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3447c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3447c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3447c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3447C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3447CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3447C8u;
        // 0x3447cc: 0xac64c340  sw          $a0, -0x3CC0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294951744), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3447C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3447D0u;
    // 0x3447d0: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3447d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x3447d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3447d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3447d8: 0x8ca3c340  lw          $v1, -0x3CC0($a1)
    ctx->pc = 0x3447d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C340u));
    // 0x3447dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3447DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3447E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3447DCu;
        // 0x3447e0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3447DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3447E4u;
    // 0x3447e4: 0x0  nop
    ctx->pc = 0x3447e4u;
    // NOP
    ctx->pc = 0x3447e8u;
}
