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

// Function: sub_001392B0
// Address: 0x1392b0 - 0x1392f0
void sub_001392B0_0x1392b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001392B0_0x1392b0");
#endif

    switch (ctx->pc) {
        case 0x1392d0u: goto label_1392d0;
        default: break;
    }

    ctx->pc = 0x1392b0u;

    // 0x1392b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1392b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1392b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1392b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1392b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1392b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1392bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1392bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1392c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1392c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1392c4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1392c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1392c8: 0xc04e4bc  jal         func_1392F0
    ctx->pc = 0x1392C8u;
    SET_GPR_U32(ctx, 31, 0x1392D0u);
    ctx->pc = 0x1392F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1392F0u, 0x1392C8u, 0x1392D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1392D0u;
label_1392d0:
    // 0x1392d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1392d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1392d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1392d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1392d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1392d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1392dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1392DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1392DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1392E4u;
    // 0x1392e4: 0x0  nop
    ctx->pc = 0x1392e4u;
    // NOP
    // 0x1392e8: 0x0  nop
    ctx->pc = 0x1392e8u;
    // NOP
    // 0x1392ec: 0x0  nop
    ctx->pc = 0x1392ecu;
    // NOP
    ctx->pc = 0x1392f0u;
}
