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

// Function: sub_00490A00
// Address: 0x490a00 - 0x490a20
void sub_00490A00_0x490a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490A00_0x490a00");
#endif

    ctx->pc = 0x490a00u;

    // 0x490a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x490a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x490a04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x490a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x490a08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x490a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490a0c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x490a0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x490a10: 0x3e00008  jr          $ra
    ctx->pc = 0x490A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490A18u;
    // 0x490a18: 0x0  nop
    ctx->pc = 0x490a18u;
    // NOP
    // 0x490a1c: 0x0  nop
    ctx->pc = 0x490a1cu;
    // NOP
    ctx->pc = 0x490a20u;
}
