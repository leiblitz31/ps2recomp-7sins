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

// Function: sub_0016E260
// Address: 0x16e260 - 0x16e2a0
void sub_0016E260_0x16e260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E260_0x16e260");
#endif

    switch (ctx->pc) {
        case 0x16e280u: goto label_16e280;
        default: break;
    }

    ctx->pc = 0x16e260u;

    // 0x16e260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16e260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16e264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e268: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16e268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16e26c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x16e26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x16e270: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16e270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e274: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x16e274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e278: 0xc05b8a8  jal         func_16E2A0
    ctx->pc = 0x16E278u;
    SET_GPR_U32(ctx, 31, 0x16E280u);
    ctx->pc = 0x16E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E2A0u, 0x16E278u, 0x16E280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E280u;
label_16e280:
    // 0x16e280: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e288: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16e288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16e28c: 0x3e00008  jr          $ra
    ctx->pc = 0x16E28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E294u;
    // 0x16e294: 0x0  nop
    ctx->pc = 0x16e294u;
    // NOP
    // 0x16e298: 0x0  nop
    ctx->pc = 0x16e298u;
    // NOP
    // 0x16e29c: 0x0  nop
    ctx->pc = 0x16e29cu;
    // NOP
    ctx->pc = 0x16e2a0u;
}
