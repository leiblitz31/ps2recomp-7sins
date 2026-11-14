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

// Function: sub_002A3320
// Address: 0x2a3320 - 0x2a3360
void sub_002A3320_0x2a3320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3320_0x2a3320");
#endif

    switch (ctx->pc) {
        case 0x2a3348u: goto label_2a3348;
        default: break;
    }

    ctx->pc = 0x2a3320u;

    // 0x2a3320: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a3320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a3324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a3324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a3328: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a3328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a332c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2a332cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2a3330: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2a3330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2a3334: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a3334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3338: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2a3338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a333c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2a333cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a3340: 0xc04f1e8  jal         func_13C7A0
    ctx->pc = 0x2A3340u;
    SET_GPR_U32(ctx, 31, 0x2A3348u);
    ctx->pc = 0x13C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C7A0u, 0x2A3340u, 0x2A3348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3348u;
label_2a3348:
    // 0x2a3348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a3348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a334c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2a334cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a3350: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3358u;
    // 0x2a3358: 0x0  nop
    ctx->pc = 0x2a3358u;
    // NOP
    // 0x2a335c: 0x0  nop
    ctx->pc = 0x2a335cu;
    // NOP
    ctx->pc = 0x2a3360u;
}
