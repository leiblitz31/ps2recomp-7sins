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

// Function: sub_0011A6E0
// Address: 0x11a6e0 - 0x11a700
void sub_0011A6E0_0x11a6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A6E0_0x11a6e0");
#endif

    ctx->pc = 0x11a6e0u;

    // 0x11a6e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11a6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11a6e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11a6e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a6e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x11a6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11a6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x11A6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A6F4u;
    // 0x11a6f4: 0x0  nop
    ctx->pc = 0x11a6f4u;
    // NOP
    // 0x11a6f8: 0x0  nop
    ctx->pc = 0x11a6f8u;
    // NOP
    // 0x11a6fc: 0x0  nop
    ctx->pc = 0x11a6fcu;
    // NOP
    ctx->pc = 0x11a700u;
}
