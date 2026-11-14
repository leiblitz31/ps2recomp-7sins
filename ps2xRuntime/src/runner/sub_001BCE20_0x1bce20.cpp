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

// Function: sub_001BCE20
// Address: 0x1bce20 - 0x1bce60
void sub_001BCE20_0x1bce20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCE20_0x1bce20");
#endif

    switch (ctx->pc) {
        case 0x1bce3cu: goto label_1bce3c;
        default: break;
    }

    ctx->pc = 0x1bce20u;

    // 0x1bce20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bce20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bce24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bce24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bce28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1bce28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1bce2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1bce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1bce30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1bce30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bce34: 0xc06f398  jal         func_1BCE60
    ctx->pc = 0x1BCE34u;
    SET_GPR_U32(ctx, 31, 0x1BCE3Cu);
    ctx->pc = 0x1BCE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCE60u, 0x1BCE34u, 0x1BCE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE3Cu;
label_1bce3c:
    // 0x1bce3c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1bce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bce40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bce40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bce44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bce44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bce48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bce48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bce4c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1bce4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bce50: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCE58u;
    // 0x1bce58: 0x0  nop
    ctx->pc = 0x1bce58u;
    // NOP
    // 0x1bce5c: 0x0  nop
    ctx->pc = 0x1bce5cu;
    // NOP
    ctx->pc = 0x1bce60u;
}
