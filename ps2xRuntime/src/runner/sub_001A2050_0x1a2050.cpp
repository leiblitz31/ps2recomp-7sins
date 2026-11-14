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

// Function: sub_001A2050
// Address: 0x1a2050 - 0x1a2090
void sub_001A2050_0x1a2050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2050_0x1a2050");
#endif

    switch (ctx->pc) {
        case 0x1a2070u: goto label_1a2070;
        default: break;
    }

    ctx->pc = 0x1a2050u;

    // 0x1a2050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a2054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2058: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a2058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a205c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a205cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a2060: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a2060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2064: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1a2064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2068: 0xc068824  jal         func_1A2090
    ctx->pc = 0x1A2068u;
    SET_GPR_U32(ctx, 31, 0x1A2070u);
    ctx->pc = 0x1A2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2090u, 0x1A2068u, 0x1A2070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2070u;
label_1a2070:
    // 0x1a2070: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a2070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2078: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a2078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a207c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A207Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A207Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2084u;
    // 0x1a2084: 0x0  nop
    ctx->pc = 0x1a2084u;
    // NOP
    // 0x1a2088: 0x0  nop
    ctx->pc = 0x1a2088u;
    // NOP
    // 0x1a208c: 0x0  nop
    ctx->pc = 0x1a208cu;
    // NOP
    ctx->pc = 0x1a2090u;
}
