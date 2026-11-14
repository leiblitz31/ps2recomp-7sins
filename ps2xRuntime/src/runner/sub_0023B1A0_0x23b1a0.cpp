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

// Function: sub_0023B1A0
// Address: 0x23b1a0 - 0x23b1c0
void sub_0023B1A0_0x23b1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B1A0_0x23b1a0");
#endif

    ctx->pc = 0x23b1a0u;

    // 0x23b1a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23b1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23b1a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b1a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23b1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23b1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x23B1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B1B4u;
    // 0x23b1b4: 0x0  nop
    ctx->pc = 0x23b1b4u;
    // NOP
    // 0x23b1b8: 0x0  nop
    ctx->pc = 0x23b1b8u;
    // NOP
    // 0x23b1bc: 0x0  nop
    ctx->pc = 0x23b1bcu;
    // NOP
    ctx->pc = 0x23b1c0u;
}
