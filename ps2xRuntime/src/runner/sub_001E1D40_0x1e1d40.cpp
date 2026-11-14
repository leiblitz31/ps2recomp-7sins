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

// Function: sub_001E1D40
// Address: 0x1e1d40 - 0x1e1d80
void sub_001E1D40_0x1e1d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1D40_0x1e1d40");
#endif

    switch (ctx->pc) {
        case 0x1e1d70u: goto label_1e1d70;
        default: break;
    }

    ctx->pc = 0x1e1d40u;

    // 0x1e1d40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e1d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e1d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1d48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e1d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e1d4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e1d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e1d50: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1e1d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1e1d54: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x1e1d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x1e1d58: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e1d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1d5c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e1d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1d60: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1e1d60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1d64: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x1e1d64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1d68: 0xc07a1c8  jal         func_1E8720
    ctx->pc = 0x1E1D68u;
    SET_GPR_U32(ctx, 31, 0x1E1D70u);
    ctx->pc = 0x1E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8720u, 0x1E1D68u, 0x1E1D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1D70u;
label_1e1d70:
    // 0x1e1d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1d74: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e1d74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e1d78: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1D80u;
}
