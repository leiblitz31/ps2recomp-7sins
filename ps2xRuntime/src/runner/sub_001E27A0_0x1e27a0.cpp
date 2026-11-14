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

// Function: sub_001E27A0
// Address: 0x1e27a0 - 0x1e27e0
void sub_001E27A0_0x1e27a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E27A0_0x1e27a0");
#endif

    switch (ctx->pc) {
        case 0x1e27c0u: goto label_1e27c0;
        default: break;
    }

    ctx->pc = 0x1e27a0u;

    // 0x1e27a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e27a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e27a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e27a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e27a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e27a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e27ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e27acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e27b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e27b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e27b4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e27b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e27b8: 0xc0789f8  jal         func_1E27E0
    ctx->pc = 0x1E27B8u;
    SET_GPR_U32(ctx, 31, 0x1E27C0u);
    ctx->pc = 0x1E27E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E27E0u, 0x1E27B8u, 0x1E27C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E27C0u;
label_1e27c0:
    // 0x1e27c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e27c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e27c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e27c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e27c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e27c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e27cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E27CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E27CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E27D4u;
    // 0x1e27d4: 0x0  nop
    ctx->pc = 0x1e27d4u;
    // NOP
    // 0x1e27d8: 0x0  nop
    ctx->pc = 0x1e27d8u;
    // NOP
    // 0x1e27dc: 0x0  nop
    ctx->pc = 0x1e27dcu;
    // NOP
    ctx->pc = 0x1e27e0u;
}
