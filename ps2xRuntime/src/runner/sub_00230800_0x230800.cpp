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

// Function: sub_00230800
// Address: 0x230800 - 0x230820
void sub_00230800_0x230800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230800_0x230800");
#endif

    ctx->pc = 0x230800u;

    // 0x230800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x230804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230808: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x230808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23080c: 0x3e00008  jr          $ra
    ctx->pc = 0x23080Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23080Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230814u;
    // 0x230814: 0x0  nop
    ctx->pc = 0x230814u;
    // NOP
    // 0x230818: 0x0  nop
    ctx->pc = 0x230818u;
    // NOP
    // 0x23081c: 0x0  nop
    ctx->pc = 0x23081cu;
    // NOP
    ctx->pc = 0x230820u;
}
