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

// Function: sub_0025D860
// Address: 0x25d860 - 0x25d880
void sub_0025D860_0x25d860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D860_0x25d860");
#endif

    ctx->pc = 0x25d860u;

    // 0x25d860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25d860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25d864: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25d864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25d868: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25d868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d86c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x25d86cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25d870: 0x3e00008  jr          $ra
    ctx->pc = 0x25D870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D878u;
    // 0x25d878: 0x0  nop
    ctx->pc = 0x25d878u;
    // NOP
    // 0x25d87c: 0x0  nop
    ctx->pc = 0x25d87cu;
    // NOP
    ctx->pc = 0x25d880u;
}
