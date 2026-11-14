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

// Function: sub_0020AC20
// Address: 0x20ac20 - 0x20ac60
void sub_0020AC20_0x20ac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AC20_0x20ac20");
#endif

    switch (ctx->pc) {
        case 0x20ac50u: goto label_20ac50;
        default: break;
    }

    ctx->pc = 0x20ac20u;

    // 0x20ac20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20ac20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20ac24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ac24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20ac28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x20ac28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x20ac2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x20ac2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x20ac30: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x20ac30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x20ac34: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x20ac34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x20ac38: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x20ac38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ac3c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x20ac3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ac40: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x20ac40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ac44: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x20ac44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20ac48: 0xc084054  jal         func_210150
    ctx->pc = 0x20AC48u;
    SET_GPR_U32(ctx, 31, 0x20AC50u);
    ctx->pc = 0x210150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210150u, 0x20AC48u, 0x20AC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AC50u;
label_20ac50:
    // 0x20ac50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20ac50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ac54: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x20ac54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20ac58: 0x3e00008  jr          $ra
    ctx->pc = 0x20AC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AC60u;
}
