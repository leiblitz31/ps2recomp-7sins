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

// Function: sub_001B9360
// Address: 0x1b9360 - 0x1b93a0
void sub_001B9360_0x1b9360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9360_0x1b9360");
#endif

    switch (ctx->pc) {
        case 0x1b9388u: goto label_1b9388;
        default: break;
    }

    ctx->pc = 0x1b9360u;

    // 0x1b9360: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b9360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b9364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9368: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b9368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1b936c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1b936cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1b9370: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1b9370u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b9374: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b9374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9378: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1b9378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b937c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x1b937cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1b9380: 0xc06e4e8  jal         func_1B93A0
    ctx->pc = 0x1B9380u;
    SET_GPR_U32(ctx, 31, 0x1B9388u);
    ctx->pc = 0x1B93A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93A0u, 0x1B9380u, 0x1B9388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9388u;
label_1b9388:
    // 0x1b9388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b938c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1b938cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b9390: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9398u;
    // 0x1b9398: 0x0  nop
    ctx->pc = 0x1b9398u;
    // NOP
    // 0x1b939c: 0x0  nop
    ctx->pc = 0x1b939cu;
    // NOP
    ctx->pc = 0x1b93a0u;
}
