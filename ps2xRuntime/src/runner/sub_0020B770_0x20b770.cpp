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

// Function: sub_0020B770
// Address: 0x20b770 - 0x20b7e0
void sub_0020B770_0x20b770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B770_0x20b770");
#endif

    switch (ctx->pc) {
        case 0x20b7a8u: goto label_20b7a8;
        case 0x20b7c0u: goto label_20b7c0;
        default: break;
    }

    ctx->pc = 0x20b770u;

    // 0x20b770: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20b770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20b774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20b774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20b778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20b778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20b77c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x20b77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x20b780: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x20b780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x20b784: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x20b784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x20b788: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b78c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x20b78cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x20b790: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x20b790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20b794: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x20b794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20b798: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x20b798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b79c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x20b79cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x20b7a0: 0xc082df8  jal         func_20B7E0
    ctx->pc = 0x20B7A0u;
    SET_GPR_U32(ctx, 31, 0x20B7A8u);
    ctx->pc = 0x20B7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B7E0u, 0x20B7A0u, 0x20B7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B7A8u;
label_20b7a8:
    // 0x20b7a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b7a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b7ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b7b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b7b4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x20b7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20b7b8: 0xc081f24  jal         func_207C90
    ctx->pc = 0x20B7B8u;
    SET_GPR_U32(ctx, 31, 0x20B7C0u);
    ctx->pc = 0x207C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207C90u, 0x20B7B8u, 0x20B7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B7C0u;
label_20b7c0:
    // 0x20b7c0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b7c4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x20b7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x20b7c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b7cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20b7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b7d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20b7d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b7d4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x20b7d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20b7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x20B7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B7E0u;
}
