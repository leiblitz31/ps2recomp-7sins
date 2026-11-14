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

// Function: sub_001E90A0
// Address: 0x1e90a0 - 0x1e90e0
void sub_001E90A0_0x1e90a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E90A0_0x1e90a0");
#endif

    switch (ctx->pc) {
        case 0x1e90c4u: goto label_1e90c4;
        default: break;
    }

    ctx->pc = 0x1e90a0u;

    // 0x1e90a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e90a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e90a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e90a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e90a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e90a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e90ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e90acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e90b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e90b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e90b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e90b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e90b8: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x1e90b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e90bc: 0xc078810  jal         func_1E2040
    ctx->pc = 0x1E90BCu;
    SET_GPR_U32(ctx, 31, 0x1E90C4u);
    ctx->pc = 0x1E2040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2040u, 0x1E90BCu, 0x1E90C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E90C4u;
label_1e90c4:
    // 0x1e90c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e90c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e90c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e90c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e90cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E90CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E90CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E90D4u;
    // 0x1e90d4: 0x0  nop
    ctx->pc = 0x1e90d4u;
    // NOP
    // 0x1e90d8: 0x0  nop
    ctx->pc = 0x1e90d8u;
    // NOP
    // 0x1e90dc: 0x0  nop
    ctx->pc = 0x1e90dcu;
    // NOP
    ctx->pc = 0x1e90e0u;
}
