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

// Function: sub_0044DEC0
// Address: 0x44dec0 - 0x44dee0
void sub_0044DEC0_0x44dec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044DEC0_0x44dec0");
#endif

    ctx->pc = 0x44dec0u;

    // 0x44dec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44dec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x44dec4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x44dec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x44dec8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44decc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44deccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x44ded0: 0x3e00008  jr          $ra
    ctx->pc = 0x44DED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44DED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44DED8u;
    // 0x44ded8: 0x0  nop
    ctx->pc = 0x44ded8u;
    // NOP
    // 0x44dedc: 0x0  nop
    ctx->pc = 0x44dedcu;
    // NOP
    ctx->pc = 0x44dee0u;
}
