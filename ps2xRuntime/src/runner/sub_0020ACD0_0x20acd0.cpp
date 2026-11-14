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

// Function: sub_0020ACD0
// Address: 0x20acd0 - 0x20ad10
void sub_0020ACD0_0x20acd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020ACD0_0x20acd0");
#endif

    switch (ctx->pc) {
        case 0x20ad00u: goto label_20ad00;
        default: break;
    }

    ctx->pc = 0x20acd0u;

    // 0x20acd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20acd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20acd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20acd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20acd8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x20acd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x20acdc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x20acdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x20ace0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x20ace0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x20ace4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20ace4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ace8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x20ace8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20acec: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x20acecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20acf0: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x20acf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x20acf4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20acf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20acf8: 0xc082b44  jal         func_20AD10
    ctx->pc = 0x20ACF8u;
    SET_GPR_U32(ctx, 31, 0x20AD00u);
    ctx->pc = 0x20AD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AD10u, 0x20ACF8u, 0x20AD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD00u;
label_20ad00:
    // 0x20ad00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20ad00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ad04: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x20ad04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20ad08: 0x3e00008  jr          $ra
    ctx->pc = 0x20AD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AD10u;
}
