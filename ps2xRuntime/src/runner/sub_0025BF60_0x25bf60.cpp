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

// Function: sub_0025BF60
// Address: 0x25bf60 - 0x25bf80
void sub_0025BF60_0x25bf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BF60_0x25bf60");
#endif

    ctx->pc = 0x25bf60u;

    // 0x25bf60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25bf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25bf64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25bf64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25bf68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bf6c: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x25bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x25bf70: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x25bf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25bf74: 0x3e00008  jr          $ra
    ctx->pc = 0x25BF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BF7Cu;
    // 0x25bf7c: 0x0  nop
    ctx->pc = 0x25bf7cu;
    // NOP
    ctx->pc = 0x25bf80u;
}
