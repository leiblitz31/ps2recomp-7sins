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

// Function: sub_002428E0
// Address: 0x2428e0 - 0x242920
void sub_002428E0_0x2428e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002428E0_0x2428e0");
#endif

    switch (ctx->pc) {
        case 0x242908u: goto label_242908;
        default: break;
    }

    ctx->pc = 0x2428e0u;

    // 0x2428e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2428e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2428e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2428e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2428e8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2428e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2428ec: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2428ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2428f0: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2428f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2428f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2428f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2428f8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2428f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2428fc: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x2428fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x242900: 0xc090a48  jal         func_242920
    ctx->pc = 0x242900u;
    SET_GPR_U32(ctx, 31, 0x242908u);
    ctx->pc = 0x242920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242920u, 0x242900u, 0x242908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242908u;
label_242908:
    // 0x242908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24290c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x24290cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x242910: 0x3e00008  jr          $ra
    ctx->pc = 0x242910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242918u;
    // 0x242918: 0x0  nop
    ctx->pc = 0x242918u;
    // NOP
    // 0x24291c: 0x0  nop
    ctx->pc = 0x24291cu;
    // NOP
    ctx->pc = 0x242920u;
}
