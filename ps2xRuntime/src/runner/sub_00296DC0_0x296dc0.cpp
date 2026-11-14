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

// Function: sub_00296DC0
// Address: 0x296dc0 - 0x296e50
void sub_00296DC0_0x296dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296DC0_0x296dc0");
#endif

    switch (ctx->pc) {
        case 0x296de8u: goto label_296de8;
        case 0x296e14u: goto label_296e14;
        case 0x296e34u: goto label_296e34;
        default: break;
    }

    ctx->pc = 0x296dc0u;

    // 0x296dc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x296dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x296dc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x296dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x296dc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x296dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x296dcc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x296dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x296dd0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x296dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x296dd4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x296dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296dd8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x296dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x296ddc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x296ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296de0: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x296DE0u;
    SET_GPR_U32(ctx, 31, 0x296DE8u);
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x296DE0u, 0x296DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296DE8u;
label_296de8:
    // 0x296de8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x296DE8u;
    {
        const bool branch_taken_0x296de8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x296de8) {
            ctx->pc = 0x296E14u;
            goto label_296e14;
        }
    }
    ctx->pc = 0x296DF0u;
    // 0x296df0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x296df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296df4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x296df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296df8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x296df8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x296dfc: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x296dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x296e00: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x296e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x296e04: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x296e04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296e08: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x296e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x296e0c: 0xc0a5a60  jal         func_296980
    ctx->pc = 0x296E0Cu;
    SET_GPR_U32(ctx, 31, 0x296E14u);
    ctx->pc = 0x296980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296980u, 0x296E0Cu, 0x296E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296E14u;
label_296e14:
    // 0x296e14: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x296e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296e18: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x296e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x296e1c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x296e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x296e20: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x296e20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x296e24: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x296e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296e28: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x296e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x296e2c: 0xc0a5b94  jal         func_296E50
    ctx->pc = 0x296E2Cu;
    SET_GPR_U32(ctx, 31, 0x296E34u);
    ctx->pc = 0x296E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E50u, 0x296E2Cu, 0x296E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296E34u;
label_296e34:
    // 0x296e34: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x296e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296e38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x296e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296e3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x296e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296e40: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x296e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x296e44: 0x3e00008  jr          $ra
    ctx->pc = 0x296E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296E4Cu;
    // 0x296e4c: 0x0  nop
    ctx->pc = 0x296e4cu;
    // NOP
    ctx->pc = 0x296e50u;
}
