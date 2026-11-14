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

// Function: sub_00484210
// Address: 0x484210 - 0x484230
void sub_00484210_0x484210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484210_0x484210");
#endif

    ctx->pc = 0x484210u;

    // 0x484210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x484210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x484214: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x484214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x484218: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x484218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48421c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x48421cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x484220: 0x3e00008  jr          $ra
    ctx->pc = 0x484220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x484228u;
    // 0x484228: 0x0  nop
    ctx->pc = 0x484228u;
    // NOP
    // 0x48422c: 0x0  nop
    ctx->pc = 0x48422cu;
    // NOP
    ctx->pc = 0x484230u;
}
