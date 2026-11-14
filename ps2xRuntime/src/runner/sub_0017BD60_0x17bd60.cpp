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

// Function: sub_0017BD60
// Address: 0x17bd60 - 0x17bd80
void sub_0017BD60_0x17bd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BD60_0x17bd60");
#endif

    ctx->pc = 0x17bd60u;

    // 0x17bd60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17bd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17bd64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x17bd64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x17bd68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bd6c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17bd6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17bd70: 0x3e00008  jr          $ra
    ctx->pc = 0x17BD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BD78u;
    // 0x17bd78: 0x0  nop
    ctx->pc = 0x17bd78u;
    // NOP
    // 0x17bd7c: 0x0  nop
    ctx->pc = 0x17bd7cu;
    // NOP
    ctx->pc = 0x17bd80u;
}
