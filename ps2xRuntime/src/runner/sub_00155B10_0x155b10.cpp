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

// Function: sub_00155B10
// Address: 0x155b10 - 0x155b30
void sub_00155B10_0x155b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155B10_0x155b10");
#endif

    ctx->pc = 0x155b10u;

    // 0x155b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155b14: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x155b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x155b18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x155b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155b1c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x155b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x155b20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x155b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x155b24: 0x3e00008  jr          $ra
    ctx->pc = 0x155B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155B2Cu;
    // 0x155b2c: 0x0  nop
    ctx->pc = 0x155b2cu;
    // NOP
    ctx->pc = 0x155b30u;
}
