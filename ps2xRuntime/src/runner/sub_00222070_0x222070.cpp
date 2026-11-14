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

// Function: sub_00222070
// Address: 0x222070 - 0x2220a0
void sub_00222070_0x222070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222070_0x222070");
#endif

    switch (ctx->pc) {
        case 0x22208cu: goto label_22208c;
        default: break;
    }

    ctx->pc = 0x222070u;

    // 0x222070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x222070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x222074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222078: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x222078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22207c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22207cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222080: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x222080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222084: 0xc088828  jal         func_2220A0
    ctx->pc = 0x222084u;
    SET_GPR_U32(ctx, 31, 0x22208Cu);
    ctx->pc = 0x2220A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2220A0u, 0x222084u, 0x22208Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22208Cu;
label_22208c:
    // 0x22208c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22208cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222090: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x222090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x222094: 0x3e00008  jr          $ra
    ctx->pc = 0x222094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22209Cu;
    // 0x22209c: 0x0  nop
    ctx->pc = 0x22209cu;
    // NOP
    ctx->pc = 0x2220a0u;
}
