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

// Function: sub_00117690
// Address: 0x117690 - 0x1176b0
void sub_00117690_0x117690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117690_0x117690");
#endif

    ctx->pc = 0x117690u;

    // 0x117690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x117690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x117694: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x117694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x117698: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x117698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11769c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x11769cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1176a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1176a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1176a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1176A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1176A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1176ACu;
    // 0x1176ac: 0x0  nop
    ctx->pc = 0x1176acu;
    // NOP
    ctx->pc = 0x1176b0u;
}
