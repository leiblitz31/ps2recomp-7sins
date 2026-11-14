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

// Function: sub_001F3A70
// Address: 0x1f3a70 - 0x1f3ae0
void sub_001F3A70_0x1f3a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3A70_0x1f3a70");
#endif

    switch (ctx->pc) {
        case 0x1f3aa8u: goto label_1f3aa8;
        case 0x1f3ac0u: goto label_1f3ac0;
        default: break;
    }

    ctx->pc = 0x1f3a70u;

    // 0x1f3a70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f3a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f3a74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f3a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f3a78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f3a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f3a7c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1f3a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1f3a80: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1f3a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1f3a84: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1f3a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1f3a88: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f3a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3a8c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x1f3a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3a90: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1f3a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f3a94: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1f3a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f3a98: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1f3a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f3a9c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1f3a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1f3aa0: 0xc0430b0  jal         func_10C2C0
    ctx->pc = 0x1F3AA0u;
    SET_GPR_U32(ctx, 31, 0x1F3AA8u);
    ctx->pc = 0x10C2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C2C0u, 0x1F3AA0u, 0x1F3AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3AA8u;
label_1f3aa8:
    // 0x1f3aa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f3aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3aac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f3aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3ab4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1f3ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f3ab8: 0xc04307c  jal         func_10C1F0
    ctx->pc = 0x1F3AB8u;
    SET_GPR_U32(ctx, 31, 0x1F3AC0u);
    ctx->pc = 0x10C1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C1F0u, 0x1F3AB8u, 0x1F3AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3AC0u;
label_1f3ac0:
    // 0x1f3ac0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f3ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3ac4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1f3ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1f3ac8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1f3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f3acc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f3accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3ad0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f3ad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3ad4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1f3ad4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f3ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3AE0u;
}
