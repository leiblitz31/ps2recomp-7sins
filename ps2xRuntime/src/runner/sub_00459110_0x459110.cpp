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

// Function: sub_00459110
// Address: 0x459110 - 0x459130
void sub_00459110_0x459110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459110_0x459110");
#endif

    switch (ctx->pc) {
        case 0x459120u: goto label_459120;
        default: break;
    }

    ctx->pc = 0x459110u;

    // 0x459110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x459110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x459114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x459114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x459118: 0xc1164f0  jal         func_4593C0
    ctx->pc = 0x459118u;
    SET_GPR_U32(ctx, 31, 0x459120u);
    ctx->pc = 0x4593C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4593C0u, 0x459118u, 0x459120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459120u;
label_459120:
    // 0x459120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x459120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x459124: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x459124u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x459128: 0x3e00008  jr          $ra
    ctx->pc = 0x459128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x459128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x459130u;
}
