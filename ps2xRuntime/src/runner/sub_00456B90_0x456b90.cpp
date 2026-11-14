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

// Function: sub_00456B90
// Address: 0x456b90 - 0x456bb0
void sub_00456B90_0x456b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00456B90_0x456b90");
#endif

    ctx->pc = 0x456b90u;

    // 0x456b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x456b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x456b94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x456b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x456b98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x456b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x456b9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x456b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x456ba0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x456ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x456ba4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x456ba4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x456ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x456BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x456BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x456BB0u;
}
