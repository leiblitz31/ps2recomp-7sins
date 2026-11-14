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

// Function: sub_00216C60
// Address: 0x216c60 - 0x216ca0
void sub_00216C60_0x216c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216C60_0x216c60");
#endif

    switch (ctx->pc) {
        case 0x216c90u: goto label_216c90;
        default: break;
    }

    ctx->pc = 0x216c60u;

    // 0x216c60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x216c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x216c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216c68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x216c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x216c6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x216c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x216c70: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x216c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x216c74: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x216c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x216c78: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x216c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216c7c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x216c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216c80: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x216c80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216c84: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x216c84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x216c88: 0xc085bb4  jal         func_216ED0
    ctx->pc = 0x216C88u;
    SET_GPR_U32(ctx, 31, 0x216C90u);
    ctx->pc = 0x216ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216ED0u, 0x216C88u, 0x216C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C90u;
label_216c90:
    // 0x216c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216c94: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x216c94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x216c98: 0x3e00008  jr          $ra
    ctx->pc = 0x216C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216CA0u;
}
