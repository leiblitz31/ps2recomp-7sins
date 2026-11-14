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

// Function: sub_00190620
// Address: 0x190620 - 0x190660
void sub_00190620_0x190620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190620_0x190620");
#endif

    switch (ctx->pc) {
        case 0x19063cu: goto label_19063c;
        case 0x19064cu: goto label_19064c;
        default: break;
    }

    ctx->pc = 0x190620u;

    // 0x190620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x190620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x190624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190628: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x190628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19062c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19062cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x190630: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x190630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190634: 0xc064198  jal         func_190660
    ctx->pc = 0x190634u;
    SET_GPR_U32(ctx, 31, 0x19063Cu);
    ctx->pc = 0x190660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190660u, 0x190634u, 0x19063Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19063Cu;
label_19063c:
    // 0x19063c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19063cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190640: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x190640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190644: 0xc064154  jal         func_190550
    ctx->pc = 0x190644u;
    SET_GPR_U32(ctx, 31, 0x19064Cu);
    ctx->pc = 0x190550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190550u, 0x190644u, 0x19064Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19064Cu;
label_19064c:
    // 0x19064c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19064cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190650: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x190650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x190654: 0x3e00008  jr          $ra
    ctx->pc = 0x190654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19065Cu;
    // 0x19065c: 0x0  nop
    ctx->pc = 0x19065cu;
    // NOP
    ctx->pc = 0x190660u;
}
