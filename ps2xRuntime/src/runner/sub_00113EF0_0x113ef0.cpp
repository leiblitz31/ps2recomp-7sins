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

// Function: sub_00113EF0
// Address: 0x113ef0 - 0x113f30
void sub_00113EF0_0x113ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113EF0_0x113ef0");
#endif

    switch (ctx->pc) {
        case 0x113f0cu: goto label_113f0c;
        case 0x113f1cu: goto label_113f1c;
        default: break;
    }

    ctx->pc = 0x113ef0u;

    // 0x113ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113ef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113ef8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x113ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x113efc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x113efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x113f00: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x113f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113f04: 0xc044ccc  jal         func_113330
    ctx->pc = 0x113F04u;
    SET_GPR_U32(ctx, 31, 0x113F0Cu);
    ctx->pc = 0x113330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113330u, 0x113F04u, 0x113F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F0Cu;
label_113f0c:
    // 0x113f0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x113f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113f10: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x113f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113f14: 0xc044e14  jal         func_113850
    ctx->pc = 0x113F14u;
    SET_GPR_U32(ctx, 31, 0x113F1Cu);
    ctx->pc = 0x113850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113850u, 0x113F14u, 0x113F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F1Cu;
label_113f1c:
    // 0x113f1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113f20: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x113f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113f24: 0x3e00008  jr          $ra
    ctx->pc = 0x113F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113F2Cu;
    // 0x113f2c: 0x0  nop
    ctx->pc = 0x113f2cu;
    // NOP
    ctx->pc = 0x113f30u;
}
