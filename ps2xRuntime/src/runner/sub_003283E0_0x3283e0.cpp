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

// Function: sub_003283E0
// Address: 0x3283e0 - 0x3283f8
void sub_003283E0_0x3283e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003283E0_0x3283e0");
#endif

    ctx->pc = 0x3283e0u;

    // 0x3283e0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x3283e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x3283e4: 0x8c43231c  lw          $v1, 0x231C($v0)
    ctx->pc = 0x3283e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F231Cu));
    // 0x3283e8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3283e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3283ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3283ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3283F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283ECu;
        // 0x3283f0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3283ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3283F4u;
    // 0x3283f4: 0x0  nop
    ctx->pc = 0x3283f4u;
    // NOP
    ctx->pc = 0x3283f8u;
}
