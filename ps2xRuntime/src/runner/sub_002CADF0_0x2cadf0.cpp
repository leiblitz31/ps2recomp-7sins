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

// Function: sub_002CADF0
// Address: 0x2cadf0 - 0x2cae30
void sub_002CADF0_0x2cadf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CADF0_0x2cadf0");
#endif

    switch (ctx->pc) {
        case 0x2cae20u: goto label_2cae20;
        default: break;
    }

    ctx->pc = 0x2cadf0u;

    // 0x2cadf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cadf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2cadf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cadf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cadf8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2cadf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2cadfc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2cadfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2cae00: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2cae00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2cae04: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2cae04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cae08: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2cae08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cae0c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2cae0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cae10: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2cae10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2cae14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2cae14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cae18: 0xc0b2b8c  jal         func_2CAE30
    ctx->pc = 0x2CAE18u;
    SET_GPR_U32(ctx, 31, 0x2CAE20u);
    ctx->pc = 0x2CAE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAE30u, 0x2CAE18u, 0x2CAE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAE20u;
label_2cae20:
    // 0x2cae20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cae20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cae24: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2cae24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2cae28: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAE30u;
}
