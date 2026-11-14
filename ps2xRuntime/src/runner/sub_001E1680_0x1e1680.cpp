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

// Function: sub_001E1680
// Address: 0x1e1680 - 0x1e16f0
void sub_001E1680_0x1e1680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1680_0x1e1680");
#endif

    switch (ctx->pc) {
        case 0x1e16b8u: goto label_1e16b8;
        case 0x1e16d0u: goto label_1e16d0;
        default: break;
    }

    ctx->pc = 0x1e1680u;

    // 0x1e1680: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e1680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e1684: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1688: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e168c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e168cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e1690: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e1690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1e1694: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1e1694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1e1698: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e1698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e169c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x1e169cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e16a0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e16a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e16a4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1e16a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e16a8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1e16a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e16ac: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1e16acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1e16b0: 0xc0785bc  jal         func_1E16F0
    ctx->pc = 0x1E16B0u;
    SET_GPR_U32(ctx, 31, 0x1E16B8u);
    ctx->pc = 0x1E16F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E16F0u, 0x1E16B0u, 0x1E16B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E16B8u;
label_1e16b8:
    // 0x1e16b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e16b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e16bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e16bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e16c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e16c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e16c4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1e16c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e16c8: 0xc075904  jal         func_1D6410
    ctx->pc = 0x1E16C8u;
    SET_GPR_U32(ctx, 31, 0x1E16D0u);
    ctx->pc = 0x1D6410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6410u, 0x1E16C8u, 0x1E16D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E16D0u;
label_1e16d0:
    // 0x1e16d0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e16d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e16d4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1e16d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1e16d8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e16d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e16dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e16dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e16e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e16e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e16e4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1e16e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e16e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E16E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E16E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E16F0u;
}
