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

// Function: sub_00210DC0
// Address: 0x210dc0 - 0x210e30
void sub_00210DC0_0x210dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210DC0_0x210dc0");
#endif

    switch (ctx->pc) {
        case 0x210df8u: goto label_210df8;
        case 0x210e10u: goto label_210e10;
        default: break;
    }

    ctx->pc = 0x210dc0u;

    // 0x210dc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x210dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x210dc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x210dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x210dc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x210dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x210dcc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x210dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x210dd0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x210dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x210dd4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x210dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x210dd8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x210dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210ddc: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x210ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x210de0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x210de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x210de4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x210de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x210de8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x210de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210dec: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x210decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x210df0: 0xc08438c  jal         func_210E30
    ctx->pc = 0x210DF0u;
    SET_GPR_U32(ctx, 31, 0x210DF8u);
    ctx->pc = 0x210E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210E30u, 0x210DF0u, 0x210DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210DF8u;
label_210df8:
    // 0x210df8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x210df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210dfc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x210dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x210e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e04: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x210e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x210e08: 0xc06016c  jal         func_1805B0
    ctx->pc = 0x210E08u;
    SET_GPR_U32(ctx, 31, 0x210E10u);
    ctx->pc = 0x1805B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1805B0u, 0x210E08u, 0x210E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210E10u;
label_210e10:
    // 0x210e10: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x210e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210e14: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x210e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x210e18: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x210e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210e1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x210e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210e20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x210e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210e24: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x210e24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x210e28: 0x3e00008  jr          $ra
    ctx->pc = 0x210E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210E30u;
}
