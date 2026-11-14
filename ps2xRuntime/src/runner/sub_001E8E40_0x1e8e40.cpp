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

// Function: sub_001E8E40
// Address: 0x1e8e40 - 0x1e8e80
void sub_001E8E40_0x1e8e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8E40_0x1e8e40");
#endif

    switch (ctx->pc) {
        case 0x1e8e60u: goto label_1e8e60;
        default: break;
    }

    ctx->pc = 0x1e8e40u;

    // 0x1e8e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e8e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e8e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8e48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e8e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e8e4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e8e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e8e50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e8e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8e54: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e8e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8e58: 0xc07a3a0  jal         func_1E8E80
    ctx->pc = 0x1E8E58u;
    SET_GPR_U32(ctx, 31, 0x1E8E60u);
    ctx->pc = 0x1E8E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E80u, 0x1E8E58u, 0x1E8E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E60u;
label_1e8e60:
    // 0x1e8e60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8e64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8e68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e8e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e8e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8E74u;
    // 0x1e8e74: 0x0  nop
    ctx->pc = 0x1e8e74u;
    // NOP
    // 0x1e8e78: 0x0  nop
    ctx->pc = 0x1e8e78u;
    // NOP
    // 0x1e8e7c: 0x0  nop
    ctx->pc = 0x1e8e7cu;
    // NOP
    ctx->pc = 0x1e8e80u;
}
