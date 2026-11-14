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

// Function: sub_002CFB10
// Address: 0x2cfb10 - 0x2cfb30
void sub_002CFB10_0x2cfb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFB10_0x2cfb10");
#endif

    ctx->pc = 0x2cfb10u;

    // 0x2cfb10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cfb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cfb14: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2cfb14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2cfb18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2cfb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfb1c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2cfb1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cfb20: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFB28u;
    // 0x2cfb28: 0x0  nop
    ctx->pc = 0x2cfb28u;
    // NOP
    // 0x2cfb2c: 0x0  nop
    ctx->pc = 0x2cfb2cu;
    // NOP
    ctx->pc = 0x2cfb30u;
}
