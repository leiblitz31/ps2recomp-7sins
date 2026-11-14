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

// Function: sub_00185080
// Address: 0x185080 - 0x1850f0
void sub_00185080_0x185080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185080_0x185080");
#endif

    switch (ctx->pc) {
        case 0x1850b8u: goto label_1850b8;
        case 0x1850d0u: goto label_1850d0;
        default: break;
    }

    ctx->pc = 0x185080u;

    // 0x185080: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x185080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x185084: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x185084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x185088: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x185088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18508c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x18508cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x185090: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x185090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x185094: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x185094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x185098: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x185098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18509c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x18509cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1850a0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1850a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1850a4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1850a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1850a8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1850a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1850ac: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1850acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1850b0: 0xc05df8c  jal         func_177E30
    ctx->pc = 0x1850B0u;
    SET_GPR_U32(ctx, 31, 0x1850B8u);
    ctx->pc = 0x177E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E30u, 0x1850B0u, 0x1850B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1850B8u;
label_1850b8:
    // 0x1850b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1850b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1850bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1850bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1850c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1850c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1850c4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1850c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1850c8: 0xc05de84  jal         func_177A10
    ctx->pc = 0x1850C8u;
    SET_GPR_U32(ctx, 31, 0x1850D0u);
    ctx->pc = 0x177A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177A10u, 0x1850C8u, 0x1850D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1850D0u;
label_1850d0:
    // 0x1850d0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1850d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1850d4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1850d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1850d8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1850d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1850dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1850dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1850e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1850e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1850e4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1850e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1850e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1850E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1850E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1850F0u;
}
