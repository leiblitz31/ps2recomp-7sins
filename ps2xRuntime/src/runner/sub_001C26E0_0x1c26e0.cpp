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

// Function: sub_001C26E0
// Address: 0x1c26e0 - 0x1c2720
void sub_001C26E0_0x1c26e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C26E0_0x1c26e0");
#endif

    switch (ctx->pc) {
        case 0x1c2700u: goto label_1c2700;
        default: break;
    }

    ctx->pc = 0x1c26e0u;

    // 0x1c26e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c26e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c26e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c26e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c26e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c26e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c26ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c26ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c26f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c26f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c26f4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1c26f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c26f8: 0xc0709c8  jal         func_1C2720
    ctx->pc = 0x1C26F8u;
    SET_GPR_U32(ctx, 31, 0x1C2700u);
    ctx->pc = 0x1C2720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2720u, 0x1C26F8u, 0x1C2700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2700u;
label_1c2700:
    // 0x1c2700: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c2700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2708: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c2708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c270c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C270Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C270Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2714u;
    // 0x1c2714: 0x0  nop
    ctx->pc = 0x1c2714u;
    // NOP
    // 0x1c2718: 0x0  nop
    ctx->pc = 0x1c2718u;
    // NOP
    // 0x1c271c: 0x0  nop
    ctx->pc = 0x1c271cu;
    // NOP
    ctx->pc = 0x1c2720u;
}
