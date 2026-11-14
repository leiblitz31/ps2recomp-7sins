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

// Function: sub_0048C5E0
// Address: 0x48c5e0 - 0x48c650
void sub_0048C5E0_0x48c5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C5E0_0x48c5e0");
#endif

    switch (ctx->pc) {
        case 0x48c618u: goto label_48c618;
        case 0x48c630u: goto label_48c630;
        default: break;
    }

    ctx->pc = 0x48c5e0u;

    // 0x48c5e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x48c5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x48c5e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48c5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48c5e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48c5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48c5ec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x48c5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x48c5f0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x48c5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x48c5f4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x48c5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x48c5f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x48c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48c5fc: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x48c5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x48c600: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x48c600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48c604: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x48c604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48c608: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x48c608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48c60c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x48c60cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x48c610: 0xc123194  jal         func_48C650
    ctx->pc = 0x48C610u;
    SET_GPR_U32(ctx, 31, 0x48C618u);
    ctx->pc = 0x48C650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C650u, 0x48C610u, 0x48C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C618u;
label_48c618:
    // 0x48c618: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48c618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c61c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x48c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48c620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48c620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c624: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x48c624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48c628: 0xc122f2c  jal         func_48BCB0
    ctx->pc = 0x48C628u;
    SET_GPR_U32(ctx, 31, 0x48C630u);
    ctx->pc = 0x48BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BCB0u, 0x48C628u, 0x48C630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C630u;
label_48c630:
    // 0x48c630: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x48c630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48c634: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x48c634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x48c638: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48c638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48c63c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48c63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c640: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48c640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c644: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x48c644u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x48c648: 0x3e00008  jr          $ra
    ctx->pc = 0x48C648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48C650u;
}
