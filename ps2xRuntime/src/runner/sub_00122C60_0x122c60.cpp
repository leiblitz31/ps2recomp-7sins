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

// Function: sub_00122C60
// Address: 0x122c60 - 0x122c80
void sub_00122C60_0x122c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122C60_0x122c60");
#endif

    ctx->pc = 0x122c60u;

    // 0x122c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x122c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x122c64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x122c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x122c68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x122c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122c6c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x122c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x122c70: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x122c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x122c74: 0x3e00008  jr          $ra
    ctx->pc = 0x122C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122C7Cu;
    // 0x122c7c: 0x0  nop
    ctx->pc = 0x122c7cu;
    // NOP
    ctx->pc = 0x122c80u;
}
