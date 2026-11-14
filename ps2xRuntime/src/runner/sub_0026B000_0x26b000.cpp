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

// Function: sub_0026B000
// Address: 0x26b000 - 0x26b020
void sub_0026B000_0x26b000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B000_0x26b000");
#endif

    ctx->pc = 0x26b000u;

    // 0x26b000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26b000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26b004: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26b004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26b008: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26b008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b00c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x26b00cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x26b010: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26b010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b014: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26b014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26b018: 0x3e00008  jr          $ra
    ctx->pc = 0x26B018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B020u;
}
