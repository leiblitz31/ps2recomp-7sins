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

// Function: sub_00192370
// Address: 0x192370 - 0x1923c0
void sub_00192370_0x192370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192370_0x192370");
#endif

    switch (ctx->pc) {
        case 0x192390u: goto label_192390;
        case 0x1923a8u: goto label_1923a8;
        default: break;
    }

    ctx->pc = 0x192370u;

    // 0x192370: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x192370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x192374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192378: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x192378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x19237c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x19237cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x192380: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x192380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x192384: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x192384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x192388: 0xc064918  jal         func_192460
    ctx->pc = 0x192388u;
    SET_GPR_U32(ctx, 31, 0x192390u);
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x192388u, 0x192390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192390u;
label_192390:
    // 0x192390: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x192390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192394: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x192394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192398: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x192398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19239c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x19239cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1923a0: 0xc0648f0  jal         func_1923C0
    ctx->pc = 0x1923A0u;
    SET_GPR_U32(ctx, 31, 0x1923A8u);
    ctx->pc = 0x1923C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923C0u, 0x1923A0u, 0x1923A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1923A8u;
label_1923a8:
    // 0x1923a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1923a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1923ac: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1923acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1923b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1923B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1923B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1923B8u;
    // 0x1923b8: 0x0  nop
    ctx->pc = 0x1923b8u;
    // NOP
    // 0x1923bc: 0x0  nop
    ctx->pc = 0x1923bcu;
    // NOP
    ctx->pc = 0x1923c0u;
}
