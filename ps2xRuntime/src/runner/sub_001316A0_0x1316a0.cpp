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

// Function: sub_001316A0
// Address: 0x1316a0 - 0x1316f0
void sub_001316A0_0x1316a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001316A0_0x1316a0");
#endif

    switch (ctx->pc) {
        case 0x1316c8u: goto label_1316c8;
        case 0x1316d8u: goto label_1316d8;
        default: break;
    }

    ctx->pc = 0x1316a0u;

    // 0x1316a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1316a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1316a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1316a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1316a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1316a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1316ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1316acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1316b0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1316b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1316b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1316b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1316b8: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x1316b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1316bc: 0x2464003c  addiu       $a0, $v1, 0x3C
    ctx->pc = 0x1316bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x1316c0: 0xc04c590  jal         func_131640
    ctx->pc = 0x1316C0u;
    SET_GPR_U32(ctx, 31, 0x1316C8u);
    ctx->pc = 0x131640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131640u, 0x1316C0u, 0x1316C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1316C8u;
label_1316c8:
    // 0x1316c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1316c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1316cc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1316ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1316d0: 0xc1168a8  jal         func_45A2A0
    ctx->pc = 0x1316D0u;
    SET_GPR_U32(ctx, 31, 0x1316D8u);
    ctx->pc = 0x45A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A2A0u, 0x1316D0u, 0x1316D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1316D8u;
label_1316d8:
    // 0x1316d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1316d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1316dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1316dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1316e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1316E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1316E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1316E8u;
    // 0x1316e8: 0x0  nop
    ctx->pc = 0x1316e8u;
    // NOP
    // 0x1316ec: 0x0  nop
    ctx->pc = 0x1316ecu;
    // NOP
    ctx->pc = 0x1316f0u;
}
