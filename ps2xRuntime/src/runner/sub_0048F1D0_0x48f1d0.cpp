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

// Function: sub_0048F1D0
// Address: 0x48f1d0 - 0x48f210
void sub_0048F1D0_0x48f1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F1D0_0x48f1d0");
#endif

    switch (ctx->pc) {
        case 0x48f1f0u: goto label_48f1f0;
        default: break;
    }

    ctx->pc = 0x48f1d0u;

    // 0x48f1d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48f1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48f1d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48f1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48f1d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48f1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48f1dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48f1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x48f1e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48f1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48f1e4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x48f1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48f1e8: 0xc123930  jal         func_48E4C0
    ctx->pc = 0x48F1E8u;
    SET_GPR_U32(ctx, 31, 0x48F1F0u);
    ctx->pc = 0x48E4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E4C0u, 0x48F1E8u, 0x48F1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F1F0u;
label_48f1f0:
    // 0x48f1f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48f1f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48f1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48f1f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48f1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48f1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x48F1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48F204u;
    // 0x48f204: 0x0  nop
    ctx->pc = 0x48f204u;
    // NOP
    // 0x48f208: 0x0  nop
    ctx->pc = 0x48f208u;
    // NOP
    // 0x48f20c: 0x0  nop
    ctx->pc = 0x48f20cu;
    // NOP
    ctx->pc = 0x48f210u;
}
