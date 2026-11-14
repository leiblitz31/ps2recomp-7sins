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

// Function: sub_00192B40
// Address: 0x192b40 - 0x192b70
void sub_00192B40_0x192b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192B40_0x192b40");
#endif

    switch (ctx->pc) {
        case 0x192b60u: goto label_192b60;
        default: break;
    }

    ctx->pc = 0x192b40u;

    // 0x192b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x192b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x192b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192b48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x192b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x192b4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x192b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x192b50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x192b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192b54: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x192b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192b58: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x192B58u;
    SET_GPR_U32(ctx, 31, 0x192B60u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x192B58u, 0x192B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192B60u;
label_192b60:
    // 0x192b60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192b64: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x192b64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x192b68: 0x3e00008  jr          $ra
    ctx->pc = 0x192B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192B70u;
}
