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

// Function: sub_00349A88
// Address: 0x349a88 - 0x349aa0
void sub_00349A88_0x349a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349A88_0x349a88");
#endif

    ctx->pc = 0x349a88u;

    // 0x349a88: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x349a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x349a8c: 0x8c43c2cc  lw          $v1, -0x3D34($v0)
    ctx->pc = 0x349a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C2CCu));
    // 0x349a90: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x349a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x349a94: 0x3e00008  jr          $ra
    ctx->pc = 0x349A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349A94u;
        // 0x349a98: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349A9Cu;
    // 0x349a9c: 0x0  nop
    ctx->pc = 0x349a9cu;
    // NOP
    ctx->pc = 0x349aa0u;
}
