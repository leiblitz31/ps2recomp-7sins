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

// Function: sub_001E3320
// Address: 0x1e3320 - 0x1e3360
void sub_001E3320_0x1e3320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3320_0x1e3320");
#endif

    switch (ctx->pc) {
        case 0x1e3340u: goto label_1e3340;
        default: break;
    }

    ctx->pc = 0x1e3320u;

    // 0x1e3320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e3320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e3324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3328: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e3328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e332c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e332cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e3330: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e3330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3334: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e3334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3338: 0xc078cd8  jal         func_1E3360
    ctx->pc = 0x1E3338u;
    SET_GPR_U32(ctx, 31, 0x1E3340u);
    ctx->pc = 0x1E3360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3360u, 0x1E3338u, 0x1E3340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3340u;
label_1e3340:
    // 0x1e3340: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e3340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3348: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e3348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e334c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E334Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E334Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3354u;
    // 0x1e3354: 0x0  nop
    ctx->pc = 0x1e3354u;
    // NOP
    // 0x1e3358: 0x0  nop
    ctx->pc = 0x1e3358u;
    // NOP
    // 0x1e335c: 0x0  nop
    ctx->pc = 0x1e335cu;
    // NOP
    ctx->pc = 0x1e3360u;
}
