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

// Function: sub_00132710
// Address: 0x132710 - 0x132750
void sub_00132710_0x132710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132710_0x132710");
#endif

    switch (ctx->pc) {
        case 0x132738u: goto label_132738;
        default: break;
    }

    ctx->pc = 0x132710u;

    // 0x132710: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x132710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x132714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132718: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x132718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13271c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x13271cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x132720: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x132720u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x132724: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x132724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132728: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x132728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13272c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x13272cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x132730: 0xc04c9d4  jal         func_132750
    ctx->pc = 0x132730u;
    SET_GPR_U32(ctx, 31, 0x132738u);
    ctx->pc = 0x132750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132750u, 0x132730u, 0x132738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132738u;
label_132738:
    // 0x132738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13273c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13273cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x132740: 0x3e00008  jr          $ra
    ctx->pc = 0x132740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132748u;
    // 0x132748: 0x0  nop
    ctx->pc = 0x132748u;
    // NOP
    // 0x13274c: 0x0  nop
    ctx->pc = 0x13274cu;
    // NOP
    ctx->pc = 0x132750u;
}
