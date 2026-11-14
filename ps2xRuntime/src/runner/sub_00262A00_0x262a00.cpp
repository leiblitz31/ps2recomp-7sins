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

// Function: sub_00262A00
// Address: 0x262a00 - 0x262a20
void sub_00262A00_0x262a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262A00_0x262a00");
#endif

    ctx->pc = 0x262a00u;

    // 0x262a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x262a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x262a04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x262a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x262a08: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x262a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262a0c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x262a0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x262a10: 0x3e00008  jr          $ra
    ctx->pc = 0x262A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262A18u;
    // 0x262a18: 0x0  nop
    ctx->pc = 0x262a18u;
    // NOP
    // 0x262a1c: 0x0  nop
    ctx->pc = 0x262a1cu;
    // NOP
    ctx->pc = 0x262a20u;
}
