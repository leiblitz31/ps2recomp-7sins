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

// Function: sub_0017B8A0
// Address: 0x17b8a0 - 0x17b8c0
void sub_0017B8A0_0x17b8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B8A0_0x17b8a0");
#endif

    ctx->pc = 0x17b8a0u;

    // 0x17b8a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b8a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x17b8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x17b8a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17b8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b8ac: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x17b8acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17b8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x17B8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B8B8u;
    // 0x17b8b8: 0x0  nop
    ctx->pc = 0x17b8b8u;
    // NOP
    // 0x17b8bc: 0x0  nop
    ctx->pc = 0x17b8bcu;
    // NOP
    ctx->pc = 0x17b8c0u;
}
