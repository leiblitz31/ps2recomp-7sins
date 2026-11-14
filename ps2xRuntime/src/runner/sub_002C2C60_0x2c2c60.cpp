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

// Function: sub_002C2C60
// Address: 0x2c2c60 - 0x2c2d50
void sub_002C2C60_0x2c2c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2C60_0x2c2c60");
#endif

    switch (ctx->pc) {
        case 0x2c2c98u: goto label_2c2c98;
        case 0x2c2ca8u: goto label_2c2ca8;
        case 0x2c2cc4u: goto label_2c2cc4;
        case 0x2c2cd0u: goto label_2c2cd0;
        case 0x2c2ce4u: goto label_2c2ce4;
        case 0x2c2cfcu: goto label_2c2cfc;
        case 0x2c2d08u: goto label_2c2d08;
        case 0x2c2d14u: goto label_2c2d14;
        case 0x2c2d20u: goto label_2c2d20;
        case 0x2c2d34u: goto label_2c2d34;
        default: break;
    }

    ctx->pc = 0x2c2c60u;

    // 0x2c2c60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c2c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c2c64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c2c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c2c68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c2c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c2c6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c2c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c2c70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c2c74: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2c2c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2c2c78: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c2c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2c2c7c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2c2c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2c80: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2C2C80u;
    {
        const bool branch_taken_0x2c2c80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2c80) {
            ctx->pc = 0x2C2D24u;
            goto label_2c2d24;
        }
    }
    ctx->pc = 0x2C2C88u;
    // 0x2c2c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2c8c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2c2c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2c2c90: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C2C90u;
    SET_GPR_U32(ctx, 31, 0x2C2C98u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C2C90u, 0x2C2C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2C98u;
label_2c2c98:
    // 0x2c2c98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c2c98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2c9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c2c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ca0: 0xc0ae184  jal         func_2B8610
    ctx->pc = 0x2C2CA0u;
    SET_GPR_U32(ctx, 31, 0x2C2CA8u);
    ctx->pc = 0x2B8610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8610u, 0x2C2CA0u, 0x2C2CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2CA8u;
label_2c2ca8:
    // 0x2c2ca8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2CA8u;
    {
        const bool branch_taken_0x2c2ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2ca8) {
            ctx->pc = 0x2C2CBCu;
            goto label_2c2cbc;
        }
    }
    ctx->pc = 0x2C2CB0u;
    // 0x2c2cb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2cb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2cb4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2C2CB4u;
    {
        const bool branch_taken_0x2c2cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2cb4) {
            ctx->pc = 0x2C2D34u;
            goto label_2c2d34;
        }
    }
    ctx->pc = 0x2C2CBCu;
label_2c2cbc:
    // 0x2c2cbc: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x2C2CBCu;
    SET_GPR_U32(ctx, 31, 0x2C2CC4u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x2C2CBCu, 0x2C2CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2CC4u;
label_2c2cc4:
    // 0x2c2cc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c2cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2cc8: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x2C2CC8u;
    SET_GPR_U32(ctx, 31, 0x2C2CD0u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x2C2CC8u, 0x2C2CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2CD0u;
label_2c2cd0:
    // 0x2c2cd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c2cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2cd4: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C2CD4u;
    {
        const bool branch_taken_0x2c2cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c2cd4) {
            ctx->pc = 0x2C2D24u;
            goto label_2c2d24;
        }
    }
    ctx->pc = 0x2C2CDCu;
    // 0x2c2cdc: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2C2CDCu;
    SET_GPR_U32(ctx, 31, 0x2C2CE4u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2C2CDCu, 0x2C2CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2CE4u;
label_2c2ce4:
    // 0x2c2ce4: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x2c2ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2c2ce8: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x2c2ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2c2cec: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C2CECu;
    {
        const bool branch_taken_0x2c2cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c2cec) {
            ctx->pc = 0x2C2D24u;
            goto label_2c2d24;
        }
    }
    ctx->pc = 0x2C2CF4u;
    // 0x2c2cf4: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2C2CF4u;
    SET_GPR_U32(ctx, 31, 0x2C2CFCu);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2C2CF4u, 0x2C2CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2CFCu;
label_2c2cfc:
    // 0x2c2cfc: 0x8c520050  lw          $s2, 0x50($v0)
    ctx->pc = 0x2c2cfcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2c2d00: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2C2D00u;
    SET_GPR_U32(ctx, 31, 0x2C2D08u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2C2D00u, 0x2C2D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2D08u;
label_2c2d08:
    // 0x2c2d08: 0xac520054  sw          $s2, 0x54($v0)
    ctx->pc = 0x2c2d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 18));
    // 0x2c2d0c: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2C2D0Cu;
    SET_GPR_U32(ctx, 31, 0x2C2D14u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2C2D0Cu, 0x2C2D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2D14u;
label_2c2d14:
    // 0x2c2d14: 0x8c52004c  lw          $s2, 0x4C($v0)
    ctx->pc = 0x2c2d14u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2c2d18: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2C2D18u;
    SET_GPR_U32(ctx, 31, 0x2C2D20u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2C2D18u, 0x2C2D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2D20u;
label_2c2d20:
    // 0x2c2d20: 0xac520060  sw          $s2, 0x60($v0)
    ctx->pc = 0x2c2d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 18));
label_2c2d24:
    // 0x2c2d24: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2c2d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c2d28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c2d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d2c: 0xc0b0c24  jal         func_2C3090
    ctx->pc = 0x2C2D2Cu;
    SET_GPR_U32(ctx, 31, 0x2C2D34u);
    ctx->pc = 0x2C3090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3090u, 0x2C2D2Cu, 0x2C2D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2D34u;
label_2c2d34:
    // 0x2c2d34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c2d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2d38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c2d38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2d3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c2d3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2d40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2d44: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2c2d44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c2d48: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2D50u;
}
