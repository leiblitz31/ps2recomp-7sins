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

// Function: sub_00221B70
// Address: 0x221b70 - 0x221bb0
void sub_00221B70_0x221b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221B70_0x221b70");
#endif

    switch (ctx->pc) {
        case 0x221b98u: goto label_221b98;
        default: break;
    }

    ctx->pc = 0x221b70u;

    // 0x221b70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x221b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x221b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221b78: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x221b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x221b7c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x221b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x221b80: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x221b80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x221b84: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x221b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221b88: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x221b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221b8c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x221b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x221b90: 0xc0886ec  jal         func_221BB0
    ctx->pc = 0x221B90u;
    SET_GPR_U32(ctx, 31, 0x221B98u);
    ctx->pc = 0x221BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221BB0u, 0x221B90u, 0x221B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221B98u;
label_221b98:
    // 0x221b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221b9c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x221b9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x221ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x221BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221BA8u;
    // 0x221ba8: 0x0  nop
    ctx->pc = 0x221ba8u;
    // NOP
    // 0x221bac: 0x0  nop
    ctx->pc = 0x221bacu;
    // NOP
    ctx->pc = 0x221bb0u;
}
