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

// Function: sub_0017F2B0
// Address: 0x17f2b0 - 0x17f320
void sub_0017F2B0_0x17f2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F2B0_0x17f2b0");
#endif

    switch (ctx->pc) {
        case 0x17f2e8u: goto label_17f2e8;
        case 0x17f300u: goto label_17f300;
        default: break;
    }

    ctx->pc = 0x17f2b0u;

    // 0x17f2b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17f2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17f2b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17f2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17f2b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17f2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17f2bc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x17f2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x17f2c0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x17f2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x17f2c4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x17f2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x17f2c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x17f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f2cc: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x17f2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f2d0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x17f2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17f2d4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x17f2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17f2d8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x17f2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f2dc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x17f2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x17f2e0: 0xc05fcc8  jal         func_17F320
    ctx->pc = 0x17F2E0u;
    SET_GPR_U32(ctx, 31, 0x17F2E8u);
    ctx->pc = 0x17F320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F320u, 0x17F2E0u, 0x17F2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F2E8u;
label_17f2e8:
    // 0x17f2e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17f2e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x17f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17f2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2f4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x17f2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17f2f8: 0xc056eb4  jal         func_15BAD0
    ctx->pc = 0x17F2F8u;
    SET_GPR_U32(ctx, 31, 0x17F300u);
    ctx->pc = 0x15BAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BAD0u, 0x17F2F8u, 0x17F300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F300u;
label_17f300:
    // 0x17f300: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x17f300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f304: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x17f304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x17f308: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17f308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f30c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17f30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f310: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17f310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f314: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x17f314u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17f318: 0x3e00008  jr          $ra
    ctx->pc = 0x17F318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F320u;
}
