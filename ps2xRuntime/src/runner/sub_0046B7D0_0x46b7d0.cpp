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

// Function: sub_0046B7D0
// Address: 0x46b7d0 - 0x46b830
void sub_0046B7D0_0x46b7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046B7D0_0x46b7d0");
#endif

    switch (ctx->pc) {
        case 0x46b7f0u: goto label_46b7f0;
        case 0x46b808u: goto label_46b808;
        case 0x46b820u: goto label_46b820;
        default: break;
    }

    ctx->pc = 0x46b7d0u;

    // 0x46b7d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46b7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46b7d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46b7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46b7d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46b7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46b7dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46b7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46b7e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46b7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b7e4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46b7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b7e8: 0xc04f52c  jal         func_13D4B0
    ctx->pc = 0x46B7E8u;
    SET_GPR_U32(ctx, 31, 0x46B7F0u);
    ctx->pc = 0x13D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D4B0u, 0x46B7E8u, 0x46B7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B7F0u;
label_46b7f0:
    // 0x46b7f0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b7f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b7f8: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x46b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x46b7fc: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x46b7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46b800: 0xc04f52c  jal         func_13D4B0
    ctx->pc = 0x46B800u;
    SET_GPR_U32(ctx, 31, 0x46B808u);
    ctx->pc = 0x13D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D4B0u, 0x46B800u, 0x46B808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B808u;
label_46b808:
    // 0x46b808: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46b808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b80c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b810: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x46b810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x46b814: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x46b814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x46b818: 0xc11ae0c  jal         func_46B830
    ctx->pc = 0x46B818u;
    SET_GPR_U32(ctx, 31, 0x46B820u);
    ctx->pc = 0x46B830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B830u, 0x46B818u, 0x46B820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B820u;
label_46b820:
    // 0x46b820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46b820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46b824: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46b824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46b828: 0x3e00008  jr          $ra
    ctx->pc = 0x46B828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46B830u;
}
