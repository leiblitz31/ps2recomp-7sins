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

// Function: sub_00344798
// Address: 0x344798 - 0x3447c0
void sub_00344798_0x344798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344798_0x344798");
#endif

    ctx->pc = 0x344798u;

    // 0x344798: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x344798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x34479c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34479cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3447a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3447A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3447A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3447A0u;
        // 0x3447a4: 0xac64c33c  sw          $a0, -0x3CC4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294951740), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3447A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3447A8u;
    // 0x3447a8: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3447a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x3447ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3447acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3447b0: 0x8ca3c33c  lw          $v1, -0x3CC4($a1)
    ctx->pc = 0x3447b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C33Cu));
    // 0x3447b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3447B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3447B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3447B4u;
        // 0x3447b8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3447B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3447BCu;
    // 0x3447bc: 0x0  nop
    ctx->pc = 0x3447bcu;
    // NOP
    ctx->pc = 0x3447c0u;
}
