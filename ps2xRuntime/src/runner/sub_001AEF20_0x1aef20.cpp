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

// Function: sub_001AEF20
// Address: 0x1aef20 - 0x1aef60
void sub_001AEF20_0x1aef20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEF20_0x1aef20");
#endif

    switch (ctx->pc) {
        case 0x1aef48u: goto label_1aef48;
        default: break;
    }

    ctx->pc = 0x1aef20u;

    // 0x1aef20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1aef20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1aef24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aef24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aef28: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1aef28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1aef2c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1aef2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1aef30: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1aef30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aef34: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1aef34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aef38: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1aef38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aef3c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x1aef3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1aef40: 0xc06bbd8  jal         func_1AEF60
    ctx->pc = 0x1AEF40u;
    SET_GPR_U32(ctx, 31, 0x1AEF48u);
    ctx->pc = 0x1AEF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF60u, 0x1AEF40u, 0x1AEF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEF48u;
label_1aef48:
    // 0x1aef48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aef48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aef4c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1aef4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1aef50: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEF58u;
    // 0x1aef58: 0x0  nop
    ctx->pc = 0x1aef58u;
    // NOP
    // 0x1aef5c: 0x0  nop
    ctx->pc = 0x1aef5cu;
    // NOP
    ctx->pc = 0x1aef60u;
}
