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

// Function: sub_0046B830
// Address: 0x46b830 - 0x46b880
void sub_0046B830_0x46b830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046B830_0x46b830");
#endif

    switch (ctx->pc) {
        case 0x46b850u: goto label_46b850;
        case 0x46b860u: goto label_46b860;
        case 0x46b870u: goto label_46b870;
        default: break;
    }

    ctx->pc = 0x46b830u;

    // 0x46b830: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46b830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46b834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46b834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46b838: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x46b838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x46b83c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x46b83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x46b840: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x46b840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x46b844: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46b844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b848: 0xc11ae3c  jal         func_46B8F0
    ctx->pc = 0x46B848u;
    SET_GPR_U32(ctx, 31, 0x46B850u);
    ctx->pc = 0x46B8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B8F0u, 0x46B848u, 0x46B850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B850u;
label_46b850:
    // 0x46b850: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x46b850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b854: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x46b854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46b858: 0xc11ae20  jal         func_46B880
    ctx->pc = 0x46B858u;
    SET_GPR_U32(ctx, 31, 0x46B860u);
    ctx->pc = 0x46B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B880u, 0x46B858u, 0x46B860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B860u;
label_46b860:
    // 0x46b860: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x46b860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46b864: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x46b864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x46b868: 0xc11ae20  jal         func_46B880
    ctx->pc = 0x46B868u;
    SET_GPR_U32(ctx, 31, 0x46B870u);
    ctx->pc = 0x46B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B880u, 0x46B868u, 0x46B870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B870u;
label_46b870:
    // 0x46b870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46b870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46b874: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46b874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46b878: 0x3e00008  jr          $ra
    ctx->pc = 0x46B878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46B880u;
}
