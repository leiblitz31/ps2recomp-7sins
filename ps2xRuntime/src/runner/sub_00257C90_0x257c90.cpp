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

// Function: sub_00257C90
// Address: 0x257c90 - 0x257cb0
void sub_00257C90_0x257c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257C90_0x257c90");
#endif

    ctx->pc = 0x257c90u;

    // 0x257c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x257c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x257c94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x257c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x257c98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x257c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257c9c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x257c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x257ca0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x257ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x257ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x257CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257CACu;
    // 0x257cac: 0x0  nop
    ctx->pc = 0x257cacu;
    // NOP
    ctx->pc = 0x257cb0u;
}
