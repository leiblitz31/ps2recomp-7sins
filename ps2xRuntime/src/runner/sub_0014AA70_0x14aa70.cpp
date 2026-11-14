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

// Function: sub_0014AA70
// Address: 0x14aa70 - 0x14aa90
void sub_0014AA70_0x14aa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AA70_0x14aa70");
#endif

    ctx->pc = 0x14aa70u;

    // 0x14aa70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14aa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14aa74: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x14aa74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x14aa78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14aa7c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14aa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14aa80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14aa84: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x14aa84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14aa88: 0x3e00008  jr          $ra
    ctx->pc = 0x14AA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AA90u;
}
