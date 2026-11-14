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

// Function: sub_002D9010
// Address: 0x2d9010 - 0x2d9060
void sub_002D9010_0x2d9010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9010_0x2d9010");
#endif

    switch (ctx->pc) {
        case 0x2d9030u: goto label_2d9030;
        case 0x2d9048u: goto label_2d9048;
        default: break;
    }

    ctx->pc = 0x2d9010u;

    // 0x2d9010: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d9010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d9014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9018: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2d9018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2d901c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2d901cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2d9020: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2d9020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2d9024: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2d9024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2d9028: 0xc0b6440  jal         func_2D9100
    ctx->pc = 0x2D9028u;
    SET_GPR_U32(ctx, 31, 0x2D9030u);
    ctx->pc = 0x2D9100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9100u, 0x2D9028u, 0x2D9030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9030u;
label_2d9030:
    // 0x2d9030: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d9030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9034: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2d9034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9038: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2d9038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d903c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2d903cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2d9040: 0xc0b6418  jal         func_2D9060
    ctx->pc = 0x2D9040u;
    SET_GPR_U32(ctx, 31, 0x2D9048u);
    ctx->pc = 0x2D9060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9060u, 0x2D9040u, 0x2D9048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9048u;
label_2d9048:
    // 0x2d9048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d904c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2d904cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d9050: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9058u;
    // 0x2d9058: 0x0  nop
    ctx->pc = 0x2d9058u;
    // NOP
    // 0x2d905c: 0x0  nop
    ctx->pc = 0x2d905cu;
    // NOP
    ctx->pc = 0x2d9060u;
}
