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

// Function: sub_00111AB0
// Address: 0x111ab0 - 0x111ad0
void sub_00111AB0_0x111ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111AB0_0x111ab0");
#endif

    ctx->pc = 0x111ab0u;

    // 0x111ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x111ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x111ab4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x111ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x111ab8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x111ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111abc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x111abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x111ac0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x111ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x111ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x111AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111ACCu;
    // 0x111acc: 0x0  nop
    ctx->pc = 0x111accu;
    // NOP
    ctx->pc = 0x111ad0u;
}
