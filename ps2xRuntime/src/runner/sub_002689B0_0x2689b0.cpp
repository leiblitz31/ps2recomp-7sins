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

// Function: sub_002689B0
// Address: 0x2689b0 - 0x2689d0
void sub_002689B0_0x2689b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002689B0_0x2689b0");
#endif

    ctx->pc = 0x2689b0u;

    // 0x2689b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2689b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2689b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2689b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2689b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2689b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2689bc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2689bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2689c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2689C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2689C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2689C8u;
    // 0x2689c8: 0x0  nop
    ctx->pc = 0x2689c8u;
    // NOP
    // 0x2689cc: 0x0  nop
    ctx->pc = 0x2689ccu;
    // NOP
    ctx->pc = 0x2689d0u;
}
