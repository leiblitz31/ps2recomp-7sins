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

// Function: sub_0046BA90
// Address: 0x46ba90 - 0x46bad0
void sub_0046BA90_0x46ba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046BA90_0x46ba90");
#endif

    switch (ctx->pc) {
        case 0x46bab4u: goto label_46bab4;
        default: break;
    }

    ctx->pc = 0x46ba90u;

    // 0x46ba90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46ba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46ba94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46ba94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46ba98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46ba98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46ba9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46ba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46baa0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46baa4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46baa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46baa8: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x46baa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x46baac: 0xc11a81c  jal         func_46A070
    ctx->pc = 0x46BAACu;
    SET_GPR_U32(ctx, 31, 0x46BAB4u);
    ctx->pc = 0x46A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A070u, 0x46BAACu, 0x46BAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BAB4u;
label_46bab4:
    // 0x46bab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46bab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46bab8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46bab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46babc: 0x3e00008  jr          $ra
    ctx->pc = 0x46BABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46BAC4u;
    // 0x46bac4: 0x0  nop
    ctx->pc = 0x46bac4u;
    // NOP
    // 0x46bac8: 0x0  nop
    ctx->pc = 0x46bac8u;
    // NOP
    // 0x46bacc: 0x0  nop
    ctx->pc = 0x46baccu;
    // NOP
    ctx->pc = 0x46bad0u;
}
