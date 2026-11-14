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

// Function: sub_001E1A60
// Address: 0x1e1a60 - 0x1e1ad0
void sub_001E1A60_0x1e1a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1A60_0x1e1a60");
#endif

    switch (ctx->pc) {
        case 0x1e1a98u: goto label_1e1a98;
        case 0x1e1ab0u: goto label_1e1ab0;
        default: break;
    }

    ctx->pc = 0x1e1a60u;

    // 0x1e1a60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e1a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e1a64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e1a6c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e1a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e1a70: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e1a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1e1a74: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1e1a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1e1a78: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e1a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1a7c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x1e1a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e1a80: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e1a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e1a84: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1e1a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e1a88: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1e1a88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1a8c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1e1a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1e1a90: 0xc0786b4  jal         func_1E1AD0
    ctx->pc = 0x1E1A90u;
    SET_GPR_U32(ctx, 31, 0x1E1A98u);
    ctx->pc = 0x1E1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1AD0u, 0x1E1A90u, 0x1E1A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1A98u;
label_1e1a98:
    // 0x1e1a98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1a9c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e1a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1aa4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1e1aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e1aa8: 0xc075a48  jal         func_1D6920
    ctx->pc = 0x1E1AA8u;
    SET_GPR_U32(ctx, 31, 0x1E1AB0u);
    ctx->pc = 0x1D6920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6920u, 0x1E1AA8u, 0x1E1AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1AB0u;
label_1e1ab0:
    // 0x1e1ab0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e1ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1ab4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1e1ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1e1ab8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e1ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1abc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1ac0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1ac4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1e1ac4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e1ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1AD0u;
}
