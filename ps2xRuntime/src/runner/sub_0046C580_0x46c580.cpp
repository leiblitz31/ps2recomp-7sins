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

// Function: sub_0046C580
// Address: 0x46c580 - 0x46c5a0
void sub_0046C580_0x46c580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C580_0x46c580");
#endif

    ctx->pc = 0x46c580u;

    // 0x46c580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46c580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46c584: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x46c584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x46c588: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x46c588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46c58c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x46c58cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x46c590: 0x3e00008  jr          $ra
    ctx->pc = 0x46C590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C598u;
    // 0x46c598: 0x0  nop
    ctx->pc = 0x46c598u;
    // NOP
    // 0x46c59c: 0x0  nop
    ctx->pc = 0x46c59cu;
    // NOP
    ctx->pc = 0x46c5a0u;
}
