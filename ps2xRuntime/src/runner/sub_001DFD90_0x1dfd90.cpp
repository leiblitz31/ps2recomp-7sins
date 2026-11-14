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

// Function: sub_001DFD90
// Address: 0x1dfd90 - 0x1dfdc0
void sub_001DFD90_0x1dfd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFD90_0x1dfd90");
#endif

    switch (ctx->pc) {
        case 0x1dfdb0u: goto label_1dfdb0;
        default: break;
    }

    ctx->pc = 0x1dfd90u;

    // 0x1dfd90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dfd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dfd94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dfd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dfd98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1dfd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1dfd9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1dfd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1dfda0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1dfda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfda4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1dfda4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfda8: 0xc077f70  jal         func_1DFDC0
    ctx->pc = 0x1DFDA8u;
    SET_GPR_U32(ctx, 31, 0x1DFDB0u);
    ctx->pc = 0x1DFDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFDC0u, 0x1DFDA8u, 0x1DFDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFDB0u;
label_1dfdb0:
    // 0x1dfdb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dfdb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfdb4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1dfdb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dfdb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFDC0u;
}
