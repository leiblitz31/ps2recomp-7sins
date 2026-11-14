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

// Function: sub_0046CCA0
// Address: 0x46cca0 - 0x46cce0
void sub_0046CCA0_0x46cca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046CCA0_0x46cca0");
#endif

    switch (ctx->pc) {
        case 0x46ccc4u: goto label_46ccc4;
        default: break;
    }

    ctx->pc = 0x46cca0u;

    // 0x46cca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46cca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46cca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46cca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46cca8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46cca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46ccac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46ccacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46ccb0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46ccb4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46ccb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ccb8: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x46ccb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x46ccbc: 0xc11b338  jal         func_46CCE0
    ctx->pc = 0x46CCBCu;
    SET_GPR_U32(ctx, 31, 0x46CCC4u);
    ctx->pc = 0x46CCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CCE0u, 0x46CCBCu, 0x46CCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CCC4u;
label_46ccc4:
    // 0x46ccc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46ccc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46ccc8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46ccc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46cccc: 0x3e00008  jr          $ra
    ctx->pc = 0x46CCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46CCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46CCD4u;
    // 0x46ccd4: 0x0  nop
    ctx->pc = 0x46ccd4u;
    // NOP
    // 0x46ccd8: 0x0  nop
    ctx->pc = 0x46ccd8u;
    // NOP
    // 0x46ccdc: 0x0  nop
    ctx->pc = 0x46ccdcu;
    // NOP
    ctx->pc = 0x46cce0u;
}
