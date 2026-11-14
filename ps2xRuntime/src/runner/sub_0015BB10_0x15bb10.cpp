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

// Function: sub_0015BB10
// Address: 0x15bb10 - 0x15bb50
void sub_0015BB10_0x15bb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BB10_0x15bb10");
#endif

    switch (ctx->pc) {
        case 0x15bb38u: goto label_15bb38;
        default: break;
    }

    ctx->pc = 0x15bb10u;

    // 0x15bb10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15bb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15bb14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15bb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15bb18: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x15bb18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x15bb1c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x15bb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x15bb20: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x15bb20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x15bb24: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15bb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bb28: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x15bb28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15bb2c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x15bb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x15bb30: 0xc056ed4  jal         func_15BB50
    ctx->pc = 0x15BB30u;
    SET_GPR_U32(ctx, 31, 0x15BB38u);
    ctx->pc = 0x15BB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BB50u, 0x15BB30u, 0x15BB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BB38u;
label_15bb38:
    // 0x15bb38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15bb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bb3c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15bb3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15bb40: 0x3e00008  jr          $ra
    ctx->pc = 0x15BB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BB48u;
    // 0x15bb48: 0x0  nop
    ctx->pc = 0x15bb48u;
    // NOP
    // 0x15bb4c: 0x0  nop
    ctx->pc = 0x15bb4cu;
    // NOP
    ctx->pc = 0x15bb50u;
}
