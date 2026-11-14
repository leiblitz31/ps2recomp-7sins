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

// Function: sub_00221DB0
// Address: 0x221db0 - 0x221df0
void sub_00221DB0_0x221db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221DB0_0x221db0");
#endif

    switch (ctx->pc) {
        case 0x221dd0u: goto label_221dd0;
        default: break;
    }

    ctx->pc = 0x221db0u;

    // 0x221db0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x221db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x221db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221db8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x221db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x221dbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x221dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x221dc0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x221dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221dc4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x221dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221dc8: 0xc08877c  jal         func_221DF0
    ctx->pc = 0x221DC8u;
    SET_GPR_U32(ctx, 31, 0x221DD0u);
    ctx->pc = 0x221DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221DF0u, 0x221DC8u, 0x221DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221DD0u;
label_221dd0:
    // 0x221dd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x221dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221dd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221dd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x221dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x221ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x221DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221DE4u;
    // 0x221de4: 0x0  nop
    ctx->pc = 0x221de4u;
    // NOP
    // 0x221de8: 0x0  nop
    ctx->pc = 0x221de8u;
    // NOP
    // 0x221dec: 0x0  nop
    ctx->pc = 0x221decu;
    // NOP
    ctx->pc = 0x221df0u;
}
