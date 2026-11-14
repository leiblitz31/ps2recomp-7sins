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

// Function: sub_001BD580
// Address: 0x1bd580 - 0x1bd5a0
void sub_001BD580_0x1bd580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD580_0x1bd580");
#endif

    ctx->pc = 0x1bd580u;

    // 0x1bd580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bd580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bd584: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1bd584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1bd588: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bd588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd58c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1bd58cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1bd590: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD598u;
    // 0x1bd598: 0x0  nop
    ctx->pc = 0x1bd598u;
    // NOP
    // 0x1bd59c: 0x0  nop
    ctx->pc = 0x1bd59cu;
    // NOP
    ctx->pc = 0x1bd5a0u;
}
