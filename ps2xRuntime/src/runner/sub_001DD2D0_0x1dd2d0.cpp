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

// Function: sub_001DD2D0
// Address: 0x1dd2d0 - 0x1dd300
void sub_001DD2D0_0x1dd2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD2D0_0x1dd2d0");
#endif

    switch (ctx->pc) {
        case 0x1dd2ecu: goto label_1dd2ec;
        default: break;
    }

    ctx->pc = 0x1dd2d0u;

    // 0x1dd2d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd2d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd2d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1dd2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1dd2dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dd2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd2e0: 0x8c440068  lw          $a0, 0x68($v0)
    ctx->pc = 0x1dd2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1dd2e4: 0xc10705c  jal         func_41C170
    ctx->pc = 0x1DD2E4u;
    SET_GPR_U32(ctx, 31, 0x1DD2ECu);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x1DD2E4u, 0x1DD2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD2ECu;
label_1dd2ec:
    // 0x1dd2ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd2f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1dd2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dd2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD2FCu;
    // 0x1dd2fc: 0x0  nop
    ctx->pc = 0x1dd2fcu;
    // NOP
    ctx->pc = 0x1dd300u;
}
