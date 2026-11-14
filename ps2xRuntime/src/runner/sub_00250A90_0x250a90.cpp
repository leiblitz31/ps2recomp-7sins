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

// Function: sub_00250A90
// Address: 0x250a90 - 0x250ab0
void sub_00250A90_0x250a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250A90_0x250a90");
#endif

    ctx->pc = 0x250a90u;

    // 0x250a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x250a94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x250a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x250a98: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x250a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250a9c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x250a9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x250aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x250AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250AA8u;
    // 0x250aa8: 0x0  nop
    ctx->pc = 0x250aa8u;
    // NOP
    // 0x250aac: 0x0  nop
    ctx->pc = 0x250aacu;
    // NOP
    ctx->pc = 0x250ab0u;
}
