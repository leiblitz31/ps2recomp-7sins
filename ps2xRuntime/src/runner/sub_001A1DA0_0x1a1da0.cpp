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

// Function: sub_001A1DA0
// Address: 0x1a1da0 - 0x1a1de0
void sub_001A1DA0_0x1a1da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1DA0_0x1a1da0");
#endif

    switch (ctx->pc) {
        case 0x1a1dc8u: goto label_1a1dc8;
        default: break;
    }

    ctx->pc = 0x1a1da0u;

    // 0x1a1da0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a1da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a1da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1da8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1a1da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1a1dac: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1a1dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1a1db0: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1a1db0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1db4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a1db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1db8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1a1db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1dbc: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x1a1dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1a1dc0: 0xc068778  jal         func_1A1DE0
    ctx->pc = 0x1A1DC0u;
    SET_GPR_U32(ctx, 31, 0x1A1DC8u);
    ctx->pc = 0x1A1DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DE0u, 0x1A1DC0u, 0x1A1DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1DC8u;
label_1a1dc8:
    // 0x1a1dc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1dcc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a1dccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a1dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1DD8u;
    // 0x1a1dd8: 0x0  nop
    ctx->pc = 0x1a1dd8u;
    // NOP
    // 0x1a1ddc: 0x0  nop
    ctx->pc = 0x1a1ddcu;
    // NOP
    ctx->pc = 0x1a1de0u;
}
