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

// Function: sub_002E3770
// Address: 0x2e3770 - 0x2e37e0
void sub_002E3770_0x2e3770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3770_0x2e3770");
#endif

    switch (ctx->pc) {
        case 0x2e37a8u: goto label_2e37a8;
        case 0x2e37c0u: goto label_2e37c0;
        default: break;
    }

    ctx->pc = 0x2e3770u;

    // 0x2e3770: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e3770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e3774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e3774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e3778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e3778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e377c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2e377cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2e3780: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2e3780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2e3784: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2e3784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2e3788: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e3788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e378c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2e378cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3790: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2e3790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e3794: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2e3794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e3798: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2e3798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e379c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2e379cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2e37a0: 0xc0b8df8  jal         func_2E37E0
    ctx->pc = 0x2E37A0u;
    SET_GPR_U32(ctx, 31, 0x2E37A8u);
    ctx->pc = 0x2E37E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E37E0u, 0x2E37A0u, 0x2E37A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E37A8u;
label_2e37a8:
    // 0x2e37a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e37a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e37ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e37acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e37b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e37b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e37b4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2e37b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e37b8: 0xc0b4708  jal         func_2D1C20
    ctx->pc = 0x2E37B8u;
    SET_GPR_U32(ctx, 31, 0x2E37C0u);
    ctx->pc = 0x2D1C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1C20u, 0x2E37B8u, 0x2E37C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E37C0u;
label_2e37c0:
    // 0x2e37c0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e37c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e37c4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x2e37c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x2e37c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e37c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e37cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e37ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e37d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e37d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e37d4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2e37d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e37d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E37D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E37D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E37E0u;
}
