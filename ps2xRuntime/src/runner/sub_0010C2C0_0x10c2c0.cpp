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

// Function: sub_0010C2C0
// Address: 0x10c2c0 - 0x10c300
void sub_0010C2C0_0x10c2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C2C0_0x10c2c0");
#endif

    switch (ctx->pc) {
        case 0x10c2f0u: goto label_10c2f0;
        default: break;
    }

    ctx->pc = 0x10c2c0u;

    // 0x10c2c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10c2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10c2c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10c2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10c2c8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10c2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10c2cc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x10c2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x10c2d0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x10c2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x10c2d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10c2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c2d8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x10c2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c2dc: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x10c2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10c2e0: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x10c2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x10c2e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10c2e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c2e8: 0xc0430c0  jal         func_10C300
    ctx->pc = 0x10C2E8u;
    SET_GPR_U32(ctx, 31, 0x10C2F0u);
    ctx->pc = 0x10C300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C300u, 0x10C2E8u, 0x10C2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C2F0u;
label_10c2f0:
    // 0x10c2f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10c2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c2f4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x10c2f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x10c2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C300u;
}
