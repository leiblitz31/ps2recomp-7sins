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

// Function: sub_001368B0
// Address: 0x1368b0 - 0x1368d0
void sub_001368B0_0x1368b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001368B0_0x1368b0");
#endif

    ctx->pc = 0x1368b0u;

    // 0x1368b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1368b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1368b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1368b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1368b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1368b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1368bc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1368bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1368c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1368C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1368C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1368C8u;
    // 0x1368c8: 0x0  nop
    ctx->pc = 0x1368c8u;
    // NOP
    // 0x1368cc: 0x0  nop
    ctx->pc = 0x1368ccu;
    // NOP
    ctx->pc = 0x1368d0u;
}
