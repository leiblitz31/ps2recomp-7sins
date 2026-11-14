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

// Function: sub_00155AA0
// Address: 0x155aa0 - 0x155ae0
void sub_00155AA0_0x155aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155AA0_0x155aa0");
#endif

    switch (ctx->pc) {
        case 0x155abcu: goto label_155abc;
        case 0x155accu: goto label_155acc;
        default: break;
    }

    ctx->pc = 0x155aa0u;

    // 0x155aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x155aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x155aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x155aa8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x155aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x155aac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x155aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x155ab0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x155ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155ab4: 0xc054e64  jal         func_153990
    ctx->pc = 0x155AB4u;
    SET_GPR_U32(ctx, 31, 0x155ABCu);
    ctx->pc = 0x153990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153990u, 0x155AB4u, 0x155ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155ABCu;
label_155abc:
    // 0x155abc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x155abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155ac0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x155ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155ac4: 0xc0556b8  jal         func_155AE0
    ctx->pc = 0x155AC4u;
    SET_GPR_U32(ctx, 31, 0x155ACCu);
    ctx->pc = 0x155AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155AE0u, 0x155AC4u, 0x155ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155ACCu;
label_155acc:
    // 0x155acc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155ad0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x155ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x155ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x155AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155ADCu;
    // 0x155adc: 0x0  nop
    ctx->pc = 0x155adcu;
    // NOP
    ctx->pc = 0x155ae0u;
}
