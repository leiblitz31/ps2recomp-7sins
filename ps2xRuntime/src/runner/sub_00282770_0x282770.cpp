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

// Function: sub_00282770
// Address: 0x282770 - 0x282790
void sub_00282770_0x282770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282770_0x282770");
#endif

    ctx->pc = 0x282770u;

    // 0x282770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x282774: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x282774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x282778: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x282778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28277c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28277cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x282780: 0x3e00008  jr          $ra
    ctx->pc = 0x282780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282788u;
    // 0x282788: 0x0  nop
    ctx->pc = 0x282788u;
    // NOP
    // 0x28278c: 0x0  nop
    ctx->pc = 0x28278cu;
    // NOP
    ctx->pc = 0x282790u;
}
