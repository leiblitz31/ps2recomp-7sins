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

// Function: sub_00291D80
// Address: 0x291d80 - 0x291da0
void sub_00291D80_0x291d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291D80_0x291d80");
#endif

    ctx->pc = 0x291d80u;

    // 0x291d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x291d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x291d84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x291d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x291d88: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x291d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291d8c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x291d8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x291d90: 0x3e00008  jr          $ra
    ctx->pc = 0x291D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291D98u;
    // 0x291d98: 0x0  nop
    ctx->pc = 0x291d98u;
    // NOP
    // 0x291d9c: 0x0  nop
    ctx->pc = 0x291d9cu;
    // NOP
    ctx->pc = 0x291da0u;
}
