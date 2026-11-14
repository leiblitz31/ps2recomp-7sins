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

// Function: sub_00239F00
// Address: 0x239f00 - 0x239f30
void sub_00239F00_0x239f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239F00_0x239f00");
#endif

    ctx->pc = 0x239f00u;

    // 0x239f00: 0x8f82bbdc  lw          $v0, -0x4424($gp)
    ctx->pc = 0x239f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x239f04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239F04u;
    {
        const bool branch_taken_0x239f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239f04) {
            ctx->pc = 0x239F18u;
            goto label_239f18;
        }
    }
    ctx->pc = 0x239F0Cu;
    // 0x239f0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x239f0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x239F10u;
    {
        const bool branch_taken_0x239f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239f10) {
            ctx->pc = 0x239F20u;
            goto label_239f20;
        }
    }
    ctx->pc = 0x239F18u;
label_239f18:
    // 0x239f18: 0x8f82bbdc  lw          $v0, -0x4424($gp)
    ctx->pc = 0x239f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x239f1c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x239f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_239f20:
    // 0x239f20: 0x3e00008  jr          $ra
    ctx->pc = 0x239F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239F28u;
    // 0x239f28: 0x0  nop
    ctx->pc = 0x239f28u;
    // NOP
    // 0x239f2c: 0x0  nop
    ctx->pc = 0x239f2cu;
    // NOP
    ctx->pc = 0x239f30u;
}
