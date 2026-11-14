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

// Function: sub_00210D80
// Address: 0x210d80 - 0x210dc0
void sub_00210D80_0x210d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210D80_0x210d80");
#endif

    switch (ctx->pc) {
        case 0x210db0u: goto label_210db0;
        default: break;
    }

    ctx->pc = 0x210d80u;

    // 0x210d80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x210d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x210d84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x210d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x210d88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x210d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x210d8c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x210d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x210d90: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x210d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x210d94: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x210d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x210d98: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x210d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210d9c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x210d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210da0: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x210da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210da4: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x210da4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210da8: 0xc08484c  jal         func_212130
    ctx->pc = 0x210DA8u;
    SET_GPR_U32(ctx, 31, 0x210DB0u);
    ctx->pc = 0x212130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212130u, 0x210DA8u, 0x210DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210DB0u;
label_210db0:
    // 0x210db0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x210db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210db4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x210db4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x210db8: 0x3e00008  jr          $ra
    ctx->pc = 0x210DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210DC0u;
}
