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

// Function: sub_0020AC60
// Address: 0x20ac60 - 0x20acd0
void sub_0020AC60_0x20ac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AC60_0x20ac60");
#endif

    switch (ctx->pc) {
        case 0x20ac98u: goto label_20ac98;
        case 0x20acb0u: goto label_20acb0;
        default: break;
    }

    ctx->pc = 0x20ac60u;

    // 0x20ac60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20ac60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20ac64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20ac64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20ac68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20ac68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20ac6c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x20ac6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x20ac70: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x20ac70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x20ac74: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x20ac74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x20ac78: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20ac78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ac7c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x20ac7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x20ac80: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x20ac80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20ac84: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x20ac84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20ac88: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x20ac88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20ac8c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x20ac8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x20ac90: 0xc082b34  jal         func_20ACD0
    ctx->pc = 0x20AC90u;
    SET_GPR_U32(ctx, 31, 0x20AC98u);
    ctx->pc = 0x20ACD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ACD0u, 0x20AC90u, 0x20AC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AC98u;
label_20ac98:
    // 0x20ac98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20ac98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ac9c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20ac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20aca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20aca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aca4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x20aca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20aca8: 0xc082030  jal         func_2080C0
    ctx->pc = 0x20ACA8u;
    SET_GPR_U32(ctx, 31, 0x20ACB0u);
    ctx->pc = 0x2080C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080C0u, 0x20ACA8u, 0x20ACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ACB0u;
label_20acb0:
    // 0x20acb0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20acb4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x20acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x20acb8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20acbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20acbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20acc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20acc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20acc4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x20acc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20acc8: 0x3e00008  jr          $ra
    ctx->pc = 0x20ACC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ACC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20ACD0u;
}
