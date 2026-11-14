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

// Function: sub_00134D90
// Address: 0x134d90 - 0x134db0
void sub_00134D90_0x134d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134D90_0x134d90");
#endif

    ctx->pc = 0x134d90u;

    // 0x134d90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x134d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x134d94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x134d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x134d98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x134d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134d9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x134d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134da0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x134da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x134da4: 0x3e00008  jr          $ra
    ctx->pc = 0x134DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134DACu;
    // 0x134dac: 0x0  nop
    ctx->pc = 0x134dacu;
    // NOP
    ctx->pc = 0x134db0u;
}
