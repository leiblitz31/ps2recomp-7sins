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

// Function: sub_0023D2D0
// Address: 0x23d2d0 - 0x23d340
void sub_0023D2D0_0x23d2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D2D0_0x23d2d0");
#endif

    switch (ctx->pc) {
        case 0x23d308u: goto label_23d308;
        case 0x23d320u: goto label_23d320;
        default: break;
    }

    ctx->pc = 0x23d2d0u;

    // 0x23d2d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23d2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23d2d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23d2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23d2d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23d2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23d2dc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x23d2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x23d2e0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x23d2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x23d2e4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x23d2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x23d2e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d2ec: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x23d2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x23d2f0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x23d2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23d2f4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x23d2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23d2f8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x23d2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23d2fc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x23d2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x23d300: 0xc08f4d0  jal         func_23D340
    ctx->pc = 0x23D300u;
    SET_GPR_U32(ctx, 31, 0x23D308u);
    ctx->pc = 0x23D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D340u, 0x23D300u, 0x23D308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D308u;
label_23d308:
    // 0x23d308: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23d308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d30c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d314: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x23d314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23d318: 0xc08f0a4  jal         func_23C290
    ctx->pc = 0x23D318u;
    SET_GPR_U32(ctx, 31, 0x23D320u);
    ctx->pc = 0x23C290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C290u, 0x23D318u, 0x23D320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D320u;
label_23d320:
    // 0x23d320: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23d320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d324: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x23d324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x23d328: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23d328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23d32c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23d32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d330: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23d330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d334: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x23d334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23d338: 0x3e00008  jr          $ra
    ctx->pc = 0x23D338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D340u;
}
