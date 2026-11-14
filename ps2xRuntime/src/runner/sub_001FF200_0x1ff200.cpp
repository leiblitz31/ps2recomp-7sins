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

// Function: sub_001FF200
// Address: 0x1ff200 - 0x1ff220
void sub_001FF200_0x1ff200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF200_0x1ff200");
#endif

    ctx->pc = 0x1ff200u;

    // 0x1ff200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ff200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ff204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff208: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ff208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ff20c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF214u;
    // 0x1ff214: 0x0  nop
    ctx->pc = 0x1ff214u;
    // NOP
    // 0x1ff218: 0x0  nop
    ctx->pc = 0x1ff218u;
    // NOP
    // 0x1ff21c: 0x0  nop
    ctx->pc = 0x1ff21cu;
    // NOP
    ctx->pc = 0x1ff220u;
}
