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

// Function: sub_002081F0
// Address: 0x2081f0 - 0x208230
void sub_002081F0_0x2081f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002081F0_0x2081f0");
#endif

    switch (ctx->pc) {
        case 0x208210u: goto label_208210;
        default: break;
    }

    ctx->pc = 0x2081f0u;

    // 0x2081f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2081f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2081f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2081f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2081f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2081f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2081fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2081fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x208200: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x208200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208204: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x208204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208208: 0xc08208c  jal         func_208230
    ctx->pc = 0x208208u;
    SET_GPR_U32(ctx, 31, 0x208210u);
    ctx->pc = 0x208230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208230u, 0x208208u, 0x208210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208210u;
label_208210:
    // 0x208210: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x208210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208218: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x208218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20821c: 0x3e00008  jr          $ra
    ctx->pc = 0x20821Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20821Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208224u;
    // 0x208224: 0x0  nop
    ctx->pc = 0x208224u;
    // NOP
    // 0x208228: 0x0  nop
    ctx->pc = 0x208228u;
    // NOP
    // 0x20822c: 0x0  nop
    ctx->pc = 0x20822cu;
    // NOP
    ctx->pc = 0x208230u;
}
