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

// Function: sub_0048F410
// Address: 0x48f410 - 0x48f450
void sub_0048F410_0x48f410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F410_0x48f410");
#endif

    switch (ctx->pc) {
        case 0x48f430u: goto label_48f430;
        default: break;
    }

    ctx->pc = 0x48f410u;

    // 0x48f410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48f410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48f414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48f414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48f418: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48f418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48f41c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48f41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x48f420: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48f420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48f424: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x48f424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48f428: 0xc123d14  jal         func_48F450
    ctx->pc = 0x48F428u;
    SET_GPR_U32(ctx, 31, 0x48F430u);
    ctx->pc = 0x48F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F450u, 0x48F428u, 0x48F430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F430u;
label_48f430:
    // 0x48f430: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48f430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48f434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48f434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48f438: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48f438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48f43c: 0x3e00008  jr          $ra
    ctx->pc = 0x48F43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48F444u;
    // 0x48f444: 0x0  nop
    ctx->pc = 0x48f444u;
    // NOP
    // 0x48f448: 0x0  nop
    ctx->pc = 0x48f448u;
    // NOP
    // 0x48f44c: 0x0  nop
    ctx->pc = 0x48f44cu;
    // NOP
    ctx->pc = 0x48f450u;
}
