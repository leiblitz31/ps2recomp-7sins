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

// Function: sub_0019DA20
// Address: 0x19da20 - 0x19da60
void sub_0019DA20_0x19da20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DA20_0x19da20");
#endif

    switch (ctx->pc) {
        case 0x19da50u: goto label_19da50;
        default: break;
    }

    ctx->pc = 0x19da20u;

    // 0x19da20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19da20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19da24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19da24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19da28: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19da28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x19da2c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x19da2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x19da30: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x19da30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x19da34: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x19da34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x19da38: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19da38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19da3c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x19da3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19da40: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x19da40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19da44: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x19da44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x19da48: 0xc067650  jal         func_19D940
    ctx->pc = 0x19DA48u;
    SET_GPR_U32(ctx, 31, 0x19DA50u);
    ctx->pc = 0x19D940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D940u, 0x19DA48u, 0x19DA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DA50u;
label_19da50:
    // 0x19da50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19da50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19da54: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x19da54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19da58: 0x3e00008  jr          $ra
    ctx->pc = 0x19DA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DA60u;
}
