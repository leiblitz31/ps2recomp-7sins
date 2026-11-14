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

// Function: sub_002D0C30
// Address: 0x2d0c30 - 0x2d0ca0
void sub_002D0C30_0x2d0c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0C30_0x2d0c30");
#endif

    switch (ctx->pc) {
        case 0x2d0c68u: goto label_2d0c68;
        case 0x2d0c80u: goto label_2d0c80;
        default: break;
    }

    ctx->pc = 0x2d0c30u;

    // 0x2d0c30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d0c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d0c34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d0c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d0c38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d0c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d0c3c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2d0c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2d0c40: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2d0c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2d0c44: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2d0c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2d0c48: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d0c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0c4c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2d0c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0c50: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2d0c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d0c54: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2d0c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d0c58: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2d0c58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0c5c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2d0c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2d0c60: 0xc0b4328  jal         func_2D0CA0
    ctx->pc = 0x2D0C60u;
    SET_GPR_U32(ctx, 31, 0x2D0C68u);
    ctx->pc = 0x2D0CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0CA0u, 0x2D0C60u, 0x2D0C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0C68u;
label_2d0c68:
    // 0x2d0c68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d0c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0c6c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d0c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0c74: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2d0c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d0c78: 0xc0b40a0  jal         func_2D0280
    ctx->pc = 0x2D0C78u;
    SET_GPR_U32(ctx, 31, 0x2D0C80u);
    ctx->pc = 0x2D0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0280u, 0x2D0C78u, 0x2D0C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0C80u;
label_2d0c80:
    // 0x2d0c80: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d0c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0c84: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x2d0c84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x2d0c88: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d0c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0c8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0c90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d0c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0c94: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2d0c94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d0c98: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0CA0u;
}
