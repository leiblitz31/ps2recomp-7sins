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

// Function: sub_00223DB0
// Address: 0x223db0 - 0x223df0
void sub_00223DB0_0x223db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223DB0_0x223db0");
#endif

    switch (ctx->pc) {
        case 0x223dd0u: goto label_223dd0;
        default: break;
    }

    ctx->pc = 0x223db0u;

    // 0x223db0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x223db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223db8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x223db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x223dbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x223dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x223dc0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x223dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223dc4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x223dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223dc8: 0xc088f7c  jal         func_223DF0
    ctx->pc = 0x223DC8u;
    SET_GPR_U32(ctx, 31, 0x223DD0u);
    ctx->pc = 0x223DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DF0u, 0x223DC8u, 0x223DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223DD0u;
label_223dd0:
    // 0x223dd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x223dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223dd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223dd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x223dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x223ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x223DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223DE4u;
    // 0x223de4: 0x0  nop
    ctx->pc = 0x223de4u;
    // NOP
    // 0x223de8: 0x0  nop
    ctx->pc = 0x223de8u;
    // NOP
    // 0x223dec: 0x0  nop
    ctx->pc = 0x223decu;
    // NOP
    ctx->pc = 0x223df0u;
}
