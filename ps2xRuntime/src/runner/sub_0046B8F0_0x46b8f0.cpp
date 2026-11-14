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

// Function: sub_0046B8F0
// Address: 0x46b8f0 - 0x46b940
void sub_0046B8F0_0x46b8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046B8F0_0x46b8f0");
#endif

    switch (ctx->pc) {
        case 0x46b910u: goto label_46b910;
        default: break;
    }

    ctx->pc = 0x46b8f0u;

    // 0x46b8f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46b8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46b8f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46b8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46b8f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46b8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46b8fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46b8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46b900: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46b900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b904: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46b904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b908: 0xc11a81c  jal         func_46A070
    ctx->pc = 0x46B908u;
    SET_GPR_U32(ctx, 31, 0x46B910u);
    ctx->pc = 0x46A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A070u, 0x46B908u, 0x46B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B910u;
label_46b910:
    // 0x46b910: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46b910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b914: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x46b914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46b918: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46b918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b91c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x46b91cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x46b920: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46b920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46b924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46b928: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46b928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46b92c: 0x3e00008  jr          $ra
    ctx->pc = 0x46B92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46B934u;
    // 0x46b934: 0x0  nop
    ctx->pc = 0x46b934u;
    // NOP
    // 0x46b938: 0x0  nop
    ctx->pc = 0x46b938u;
    // NOP
    // 0x46b93c: 0x0  nop
    ctx->pc = 0x46b93cu;
    // NOP
    ctx->pc = 0x46b940u;
}
