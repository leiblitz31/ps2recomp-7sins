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

// Function: sub_00254D60
// Address: 0x254d60 - 0x254dd0
void sub_00254D60_0x254d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254D60_0x254d60");
#endif

    switch (ctx->pc) {
        case 0x254d98u: goto label_254d98;
        case 0x254db0u: goto label_254db0;
        default: break;
    }

    ctx->pc = 0x254d60u;

    // 0x254d60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x254d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x254d64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x254d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x254d68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254d6c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x254d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x254d70: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x254d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x254d74: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x254d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x254d78: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x254d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254d7c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x254d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x254d80: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x254d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x254d84: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x254d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x254d88: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x254d88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254d8c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x254d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x254d90: 0xc095374  jal         func_254DD0
    ctx->pc = 0x254D90u;
    SET_GPR_U32(ctx, 31, 0x254D98u);
    ctx->pc = 0x254DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DD0u, 0x254D90u, 0x254D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254D98u;
label_254d98:
    // 0x254d98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x254d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d9c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x254d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254da4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x254da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x254da8: 0xc0951ac  jal         func_2546B0
    ctx->pc = 0x254DA8u;
    SET_GPR_U32(ctx, 31, 0x254DB0u);
    ctx->pc = 0x2546B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2546B0u, 0x254DA8u, 0x254DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254DB0u;
label_254db0:
    // 0x254db0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x254db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254db4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x254db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x254db8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x254db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254dbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x254dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254dc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254dc4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x254dc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x254dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x254DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254DD0u;
}
