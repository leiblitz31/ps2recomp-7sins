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

// Function: sub_0022D2C0
// Address: 0x22d2c0 - 0x22d330
void sub_0022D2C0_0x22d2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D2C0_0x22d2c0");
#endif

    switch (ctx->pc) {
        case 0x22d2f8u: goto label_22d2f8;
        case 0x22d310u: goto label_22d310;
        default: break;
    }

    ctx->pc = 0x22d2c0u;

    // 0x22d2c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22d2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22d2c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22d2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22d2c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22d2cc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x22d2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x22d2d0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x22d2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x22d2d4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x22d2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x22d2d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x22d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d2dc: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x22d2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x22d2e0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x22d2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22d2e4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x22d2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22d2e8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x22d2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d2ec: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x22d2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x22d2f0: 0xc08b4cc  jal         func_22D330
    ctx->pc = 0x22D2F0u;
    SET_GPR_U32(ctx, 31, 0x22D2F8u);
    ctx->pc = 0x22D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D330u, 0x22D2F0u, 0x22D2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D2F8u;
label_22d2f8:
    // 0x22d2f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22d2f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d2fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x22d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d304: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x22d304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22d308: 0xc08b138  jal         func_22C4E0
    ctx->pc = 0x22D308u;
    SET_GPR_U32(ctx, 31, 0x22D310u);
    ctx->pc = 0x22C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C4E0u, 0x22D308u, 0x22D310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D310u;
label_22d310:
    // 0x22d310: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x22d310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d314: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x22d314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x22d318: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22d318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d31c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22d31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d324: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x22d324u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22d328: 0x3e00008  jr          $ra
    ctx->pc = 0x22D328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D330u;
}
