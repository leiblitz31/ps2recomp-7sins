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

// Function: sub_001D6040
// Address: 0x1d6040 - 0x1d6080
void sub_001D6040_0x1d6040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6040_0x1d6040");
#endif

    switch (ctx->pc) {
        case 0x1d6068u: goto label_1d6068;
        default: break;
    }

    ctx->pc = 0x1d6040u;

    // 0x1d6040: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d6040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d6044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6048: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1d6048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1d604c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1d604cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1d6050: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1d6050u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d6054: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1d6054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6058: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1d6058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d605c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x1d605cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1d6060: 0xc075820  jal         func_1D6080
    ctx->pc = 0x1D6060u;
    SET_GPR_U32(ctx, 31, 0x1D6068u);
    ctx->pc = 0x1D6080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6080u, 0x1D6060u, 0x1D6068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6068u;
label_1d6068:
    // 0x1d6068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d606c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1d606cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d6070: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6078u;
    // 0x1d6078: 0x0  nop
    ctx->pc = 0x1d6078u;
    // NOP
    // 0x1d607c: 0x0  nop
    ctx->pc = 0x1d607cu;
    // NOP
    ctx->pc = 0x1d6080u;
}
