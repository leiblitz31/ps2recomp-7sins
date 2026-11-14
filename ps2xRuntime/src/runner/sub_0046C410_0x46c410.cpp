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

// Function: sub_0046C410
// Address: 0x46c410 - 0x46c450
void sub_0046C410_0x46c410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C410_0x46c410");
#endif

    switch (ctx->pc) {
        case 0x46c430u: goto label_46c430;
        default: break;
    }

    ctx->pc = 0x46c410u;

    // 0x46c410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46c410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46c414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46c414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46c418: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46c418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46c41c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46c41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46c420: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46c420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c424: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46c424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c428: 0xc11b114  jal         func_46C450
    ctx->pc = 0x46C428u;
    SET_GPR_U32(ctx, 31, 0x46C430u);
    ctx->pc = 0x46C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C450u, 0x46C428u, 0x46C430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C430u;
label_46c430:
    // 0x46c430: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46c430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46c434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46c438: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46c438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46c43c: 0x3e00008  jr          $ra
    ctx->pc = 0x46C43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C444u;
    // 0x46c444: 0x0  nop
    ctx->pc = 0x46c444u;
    // NOP
    // 0x46c448: 0x0  nop
    ctx->pc = 0x46c448u;
    // NOP
    // 0x46c44c: 0x0  nop
    ctx->pc = 0x46c44cu;
    // NOP
    ctx->pc = 0x46c450u;
}
