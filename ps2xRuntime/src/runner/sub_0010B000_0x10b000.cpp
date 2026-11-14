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

// Function: sub_0010B000
// Address: 0x10b000 - 0x10b020
void sub_0010B000_0x10b000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B000_0x10b000");
#endif

    ctx->pc = 0x10b000u;

    // 0x10b000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10b000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10b004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b008: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10b008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10b00c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B014u;
    // 0x10b014: 0x0  nop
    ctx->pc = 0x10b014u;
    // NOP
    // 0x10b018: 0x0  nop
    ctx->pc = 0x10b018u;
    // NOP
    // 0x10b01c: 0x0  nop
    ctx->pc = 0x10b01cu;
    // NOP
    ctx->pc = 0x10b020u;
}
