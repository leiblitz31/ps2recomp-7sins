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

// Function: sub_0014AA30
// Address: 0x14aa30 - 0x14aa70
void sub_0014AA30_0x14aa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AA30_0x14aa30");
#endif

    switch (ctx->pc) {
        case 0x14aa4cu: goto label_14aa4c;
        case 0x14aa5cu: goto label_14aa5c;
        default: break;
    }

    ctx->pc = 0x14aa30u;

    // 0x14aa30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14aa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14aa34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14aa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14aa38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14aa38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14aa3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x14aa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x14aa40: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14aa40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14aa44: 0xc05279c  jal         func_149E70
    ctx->pc = 0x14AA44u;
    SET_GPR_U32(ctx, 31, 0x14AA4Cu);
    ctx->pc = 0x149E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149E70u, 0x14AA44u, 0x14AA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA4Cu;
label_14aa4c:
    // 0x14aa4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14aa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14aa50: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14aa50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14aa54: 0xc052a3c  jal         func_14A8F0
    ctx->pc = 0x14AA54u;
    SET_GPR_U32(ctx, 31, 0x14AA5Cu);
    ctx->pc = 0x14A8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A8F0u, 0x14AA54u, 0x14AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA5Cu;
label_14aa5c:
    // 0x14aa5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14aa5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14aa60: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14aa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14aa64: 0x3e00008  jr          $ra
    ctx->pc = 0x14AA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AA6Cu;
    // 0x14aa6c: 0x0  nop
    ctx->pc = 0x14aa6cu;
    // NOP
    ctx->pc = 0x14aa70u;
}
