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

// Function: sub_00177DC0
// Address: 0x177dc0 - 0x177e30
void sub_00177DC0_0x177dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177DC0_0x177dc0");
#endif

    switch (ctx->pc) {
        case 0x177df8u: goto label_177df8;
        case 0x177e10u: goto label_177e10;
        default: break;
    }

    ctx->pc = 0x177dc0u;

    // 0x177dc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x177dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x177dc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x177dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x177dc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x177dcc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x177dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x177dd0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x177dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x177dd4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x177dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x177dd8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x177dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177ddc: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x177ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x177de0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x177de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x177de4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x177de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x177de8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x177de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177dec: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x177decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x177df0: 0xc05df8c  jal         func_177E30
    ctx->pc = 0x177DF0u;
    SET_GPR_U32(ctx, 31, 0x177DF8u);
    ctx->pc = 0x177E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E30u, 0x177DF0u, 0x177DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177DF8u;
label_177df8:
    // 0x177df8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x177df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177dfc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x177dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e04: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x177e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x177e08: 0xc05de84  jal         func_177A10
    ctx->pc = 0x177E08u;
    SET_GPR_U32(ctx, 31, 0x177E10u);
    ctx->pc = 0x177A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177A10u, 0x177E08u, 0x177E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E10u;
label_177e10:
    // 0x177e10: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x177e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177e14: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x177e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x177e18: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x177e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177e1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x177e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177e20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177e24: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x177e24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x177e28: 0x3e00008  jr          $ra
    ctx->pc = 0x177E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177E30u;
}
