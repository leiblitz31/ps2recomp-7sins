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

// Function: sub_0025C280
// Address: 0x25c280 - 0x25c2b0
void sub_0025C280_0x25c280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C280_0x25c280");
#endif

    switch (ctx->pc) {
        case 0x25c2a0u: goto label_25c2a0;
        default: break;
    }

    ctx->pc = 0x25c280u;

    // 0x25c280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25c280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25c284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25c288: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25c288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25c28c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25c28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25c290: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25c290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c294: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x25c294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c298: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x25C298u;
    SET_GPR_U32(ctx, 31, 0x25C2A0u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x25C298u, 0x25C2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C2A0u;
label_25c2a0:
    // 0x25c2a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c2a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25c2a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25c2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x25C2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C2B0u;
}
