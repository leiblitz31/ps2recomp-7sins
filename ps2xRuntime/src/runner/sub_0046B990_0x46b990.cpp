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

// Function: sub_0046B990
// Address: 0x46b990 - 0x46b9f0
void sub_0046B990_0x46b990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046B990_0x46b990");
#endif

    switch (ctx->pc) {
        case 0x46b9bcu: goto label_46b9bc;
        case 0x46b9d4u: goto label_46b9d4;
        default: break;
    }

    ctx->pc = 0x46b990u;

    // 0x46b990: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x46b990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x46b994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46b994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46b998: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46b998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46b99c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46b99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46b9a0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x46b9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x46b9a4: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x46b9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x46b9a8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46b9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b9ac: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46b9acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b9b0: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x46b9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46b9b4: 0xc11ae7c  jal         func_46B9F0
    ctx->pc = 0x46B9B4u;
    SET_GPR_U32(ctx, 31, 0x46B9BCu);
    ctx->pc = 0x46B9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B9F0u, 0x46B9B4u, 0x46B9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B9BCu;
label_46b9bc:
    // 0x46b9bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b9c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46b9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46b9c4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46b9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b9c8: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x46b9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46b9cc: 0xc04f1a4  jal         func_13C690
    ctx->pc = 0x46B9CCu;
    SET_GPR_U32(ctx, 31, 0x46B9D4u);
    ctx->pc = 0x13C690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C690u, 0x46B9CCu, 0x46B9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B9D4u;
label_46b9d4:
    // 0x46b9d4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b9d8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x46b9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x46b9dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b9e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46b9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46b9e4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x46b9e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x46b9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x46B9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46B9F0u;
}
