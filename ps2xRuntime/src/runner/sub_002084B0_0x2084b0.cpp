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

// Function: sub_002084B0
// Address: 0x2084b0 - 0x2084f0
void sub_002084B0_0x2084b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002084B0_0x2084b0");
#endif

    switch (ctx->pc) {
        case 0x2084d0u: goto label_2084d0;
        default: break;
    }

    ctx->pc = 0x2084b0u;

    // 0x2084b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2084b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2084b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2084b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2084b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2084b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2084bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2084bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2084c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2084c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2084c4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2084c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2084c8: 0xc08213c  jal         func_2084F0
    ctx->pc = 0x2084C8u;
    SET_GPR_U32(ctx, 31, 0x2084D0u);
    ctx->pc = 0x2084F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2084F0u, 0x2084C8u, 0x2084D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2084D0u;
label_2084d0:
    // 0x2084d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2084d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2084d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2084d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2084d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2084d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2084dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2084DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2084DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2084E4u;
    // 0x2084e4: 0x0  nop
    ctx->pc = 0x2084e4u;
    // NOP
    // 0x2084e8: 0x0  nop
    ctx->pc = 0x2084e8u;
    // NOP
    // 0x2084ec: 0x0  nop
    ctx->pc = 0x2084ecu;
    // NOP
    ctx->pc = 0x2084f0u;
}
