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

// Function: sub_00210C60
// Address: 0x210c60 - 0x210cb0
void sub_00210C60_0x210c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210C60_0x210c60");
#endif

    switch (ctx->pc) {
        case 0x210c7cu: goto label_210c7c;
        case 0x210c90u: goto label_210c90;
        case 0x210ca0u: goto label_210ca0;
        default: break;
    }

    ctx->pc = 0x210c60u;

    // 0x210c60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x210c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x210c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x210c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x210c68: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x210c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x210c6c: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x210c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x210c70: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x210c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x210c74: 0xc084578  jal         func_2115E0
    ctx->pc = 0x210C74u;
    SET_GPR_U32(ctx, 31, 0x210C7Cu);
    ctx->pc = 0x2115E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2115E0u, 0x210C74u, 0x210C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210C7Cu;
label_210c7c:
    // 0x210c7c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x210c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210c80: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x210c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x210c84: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x210c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x210c88: 0xc08432c  jal         func_210CB0
    ctx->pc = 0x210C88u;
    SET_GPR_U32(ctx, 31, 0x210C90u);
    ctx->pc = 0x210CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210CB0u, 0x210C88u, 0x210C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210C90u;
label_210c90:
    // 0x210c90: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x210c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x210c94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x210c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210c98: 0xc0845a0  jal         func_211680
    ctx->pc = 0x210C98u;
    SET_GPR_U32(ctx, 31, 0x210CA0u);
    ctx->pc = 0x211680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211680u, 0x210C98u, 0x210CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210CA0u;
label_210ca0:
    // 0x210ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x210ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210ca4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x210ca4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x210ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x210CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210CB0u;
}
