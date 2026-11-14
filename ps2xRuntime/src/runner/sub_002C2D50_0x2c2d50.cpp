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

// Function: sub_002C2D50
// Address: 0x2c2d50 - 0x2c2e80
void sub_002C2D50_0x2c2d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2D50_0x2c2d50");
#endif

    switch (ctx->pc) {
        case 0x2c2d70u: goto label_2c2d70;
        case 0x2c2d7cu: goto label_2c2d7c;
        case 0x2c2da4u: goto label_2c2da4;
        case 0x2c2db4u: goto label_2c2db4;
        case 0x2c2dd8u: goto label_2c2dd8;
        case 0x2c2de8u: goto label_2c2de8;
        case 0x2c2df4u: goto label_2c2df4;
        case 0x2c2e08u: goto label_2c2e08;
        case 0x2c2e20u: goto label_2c2e20;
        case 0x2c2e2cu: goto label_2c2e2c;
        case 0x2c2e3cu: goto label_2c2e3c;
        case 0x2c2e50u: goto label_2c2e50;
        default: break;
    }

    ctx->pc = 0x2c2d50u;

    // 0x2c2d50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c2d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c2d54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c2d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c2d58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c2d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c2d5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c2d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c2d60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c2d64: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2c2d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2c2d68: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x2C2D68u;
    SET_GPR_U32(ctx, 31, 0x2C2D70u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x2C2D68u, 0x2C2D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2D70u;
label_2c2d70:
    // 0x2c2d70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c2d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d74: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x2C2D74u;
    SET_GPR_U32(ctx, 31, 0x2C2D7Cu);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x2C2D74u, 0x2C2D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2D7Cu;
label_2c2d7c:
    // 0x2c2d7c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C2D7Cu;
    {
        const bool branch_taken_0x2c2d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2d7c) {
            ctx->pc = 0x2C2DE0u;
            goto label_2c2de0;
        }
    }
    ctx->pc = 0x2C2D84u;
    // 0x2c2d84: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c2d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2c2d88: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2c2d88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2d8c: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2C2D8Cu;
    {
        const bool branch_taken_0x2c2d8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2d8c) {
            ctx->pc = 0x2C2E58u;
            goto label_2c2e58;
        }
    }
    ctx->pc = 0x2C2D94u;
    // 0x2c2d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d98: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2c2d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2c2d9c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C2D9Cu;
    SET_GPR_U32(ctx, 31, 0x2C2DA4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C2D9Cu, 0x2C2DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2DA4u;
label_2c2da4:
    // 0x2c2da4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c2da4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2da8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c2da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2dac: 0xc0ae184  jal         func_2B8610
    ctx->pc = 0x2C2DACu;
    SET_GPR_U32(ctx, 31, 0x2C2DB4u);
    ctx->pc = 0x2B8610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8610u, 0x2C2DACu, 0x2C2DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2DB4u;
label_2c2db4:
    // 0x2c2db4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2DB4u;
    {
        const bool branch_taken_0x2c2db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2db4) {
            ctx->pc = 0x2C2DC8u;
            goto label_2c2dc8;
        }
    }
    ctx->pc = 0x2C2DBCu;
    // 0x2c2dbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2dbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2dc0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2C2DC0u;
    {
        const bool branch_taken_0x2c2dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2dc0) {
            ctx->pc = 0x2C2E5Cu;
            goto label_2c2e5c;
        }
    }
    ctx->pc = 0x2C2DC8u;
label_2c2dc8:
    // 0x2c2dc8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2c2dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c2dcc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c2dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c2dd0: 0xc0b0c24  jal         func_2C3090
    ctx->pc = 0x2C2DD0u;
    SET_GPR_U32(ctx, 31, 0x2C2DD8u);
    ctx->pc = 0x2C3090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3090u, 0x2C2DD0u, 0x2C2DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2DD8u;
label_2c2dd8:
    // 0x2c2dd8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2C2DD8u;
    {
        const bool branch_taken_0x2c2dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2dd8) {
            ctx->pc = 0x2C2E5Cu;
            goto label_2c2e5c;
        }
    }
    ctx->pc = 0x2C2DE0u;
label_2c2de0:
    // 0x2c2de0: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x2C2DE0u;
    SET_GPR_U32(ctx, 31, 0x2C2DE8u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x2C2DE0u, 0x2C2DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2DE8u;
label_2c2de8:
    // 0x2c2de8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c2de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2dec: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x2C2DECu;
    SET_GPR_U32(ctx, 31, 0x2C2DF4u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x2C2DECu, 0x2C2DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2DF4u;
label_2c2df4:
    // 0x2c2df4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c2df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2df8: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C2DF8u;
    {
        const bool branch_taken_0x2c2df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c2df8) {
            ctx->pc = 0x2C2E58u;
            goto label_2c2e58;
        }
    }
    ctx->pc = 0x2C2E00u;
    // 0x2c2e00: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2C2E00u;
    SET_GPR_U32(ctx, 31, 0x2C2E08u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2C2E00u, 0x2C2E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2E08u;
label_2c2e08:
    // 0x2c2e08: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2c2e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2c2e0c: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x2c2e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2c2e10: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C2E10u;
    {
        const bool branch_taken_0x2c2e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c2e10) {
            ctx->pc = 0x2C2E58u;
            goto label_2c2e58;
        }
    }
    ctx->pc = 0x2C2E18u;
    // 0x2c2e18: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2C2E18u;
    SET_GPR_U32(ctx, 31, 0x2C2E20u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2C2E18u, 0x2C2E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2E20u;
label_2c2e20:
    // 0x2c2e20: 0x8c52005c  lw          $s2, 0x5C($v0)
    ctx->pc = 0x2c2e20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2c2e24: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2C2E24u;
    SET_GPR_U32(ctx, 31, 0x2C2E2Cu);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2C2E24u, 0x2C2E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2E2Cu;
label_2c2e2c:
    // 0x2c2e2c: 0xac520054  sw          $s2, 0x54($v0)
    ctx->pc = 0x2c2e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 18));
    // 0x2c2e30: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x2c2e30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c2e34: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2C2E34u;
    SET_GPR_U32(ctx, 31, 0x2C2E3Cu);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2C2E34u, 0x2C2E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2E3Cu;
label_2c2e3c:
    // 0x2c2e3c: 0xac520060  sw          $s2, 0x60($v0)
    ctx->pc = 0x2c2e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 18));
    // 0x2c2e40: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2c2e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c2e44: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c2e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c2e48: 0xc0b0c24  jal         func_2C3090
    ctx->pc = 0x2C2E48u;
    SET_GPR_U32(ctx, 31, 0x2C2E50u);
    ctx->pc = 0x2C3090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3090u, 0x2C2E48u, 0x2C2E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2E50u;
label_2c2e50:
    // 0x2c2e50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C2E50u;
    {
        const bool branch_taken_0x2c2e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2e50) {
            ctx->pc = 0x2C2E5Cu;
            goto label_2c2e5c;
        }
    }
    ctx->pc = 0x2C2E58u;
label_2c2e58:
    // 0x2c2e58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2e58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2e5c:
    // 0x2c2e5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c2e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2e60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c2e60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2e64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c2e64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2e68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2e6c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2c2e6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c2e70: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2E78u;
    // 0x2c2e78: 0x0  nop
    ctx->pc = 0x2c2e78u;
    // NOP
    // 0x2c2e7c: 0x0  nop
    ctx->pc = 0x2c2e7cu;
    // NOP
    ctx->pc = 0x2c2e80u;
}
