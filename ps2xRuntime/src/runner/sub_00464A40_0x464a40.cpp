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

// Function: sub_00464A40
// Address: 0x464a40 - 0x464a70
void sub_00464A40_0x464a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464A40_0x464a40");
#endif

    switch (ctx->pc) {
        case 0x464a60u: goto label_464a60;
        default: break;
    }

    ctx->pc = 0x464a40u;

    // 0x464a40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x464a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x464a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x464a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x464a48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x464a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x464a4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x464a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x464a50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x464a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x464a54: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x464a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x464a58: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x464A58u;
    SET_GPR_U32(ctx, 31, 0x464A60u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x464A58u, 0x464A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464A60u;
label_464a60:
    // 0x464a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x464a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x464a64: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x464a64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x464a68: 0x3e00008  jr          $ra
    ctx->pc = 0x464A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464A70u;
}
