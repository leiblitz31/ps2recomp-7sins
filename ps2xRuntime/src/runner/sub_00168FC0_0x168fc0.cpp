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

// Function: sub_00168FC0
// Address: 0x168fc0 - 0x168fe0
void sub_00168FC0_0x168fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168FC0_0x168fc0");
#endif

    ctx->pc = 0x168fc0u;

    // 0x168fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x168fc4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x168fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x168fc8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x168fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168fcc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x168fccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x168fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x168FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168FD8u;
    // 0x168fd8: 0x0  nop
    ctx->pc = 0x168fd8u;
    // NOP
    // 0x168fdc: 0x0  nop
    ctx->pc = 0x168fdcu;
    // NOP
    ctx->pc = 0x168fe0u;
}
