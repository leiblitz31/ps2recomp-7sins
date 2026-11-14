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

// Function: sub_00223C30
// Address: 0x223c30 - 0x223c70
void sub_00223C30_0x223c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223C30_0x223c30");
#endif

    switch (ctx->pc) {
        case 0x223c60u: goto label_223c60;
        default: break;
    }

    ctx->pc = 0x223c30u;

    // 0x223c30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x223c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x223c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223c38: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x223c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x223c3c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x223c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x223c40: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x223c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x223c44: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x223c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223c48: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x223c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223c4c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x223c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x223c50: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x223c50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x223c54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x223c54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223c58: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x223C58u;
    SET_GPR_U32(ctx, 31, 0x223C60u);
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x223C58u, 0x223C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223C60u;
label_223c60:
    // 0x223c60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223c64: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x223c64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x223c68: 0x3e00008  jr          $ra
    ctx->pc = 0x223C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223C70u;
}
