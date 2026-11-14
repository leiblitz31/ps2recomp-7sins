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

// Function: sub_00232A30
// Address: 0x232a30 - 0x232ae0
void sub_00232A30_0x232a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232A30_0x232a30");
#endif

    switch (ctx->pc) {
        case 0x232a30u: goto label_232a30;
        case 0x232a34u: goto label_232a34;
        case 0x232a38u: goto label_232a38;
        case 0x232a3cu: goto label_232a3c;
        case 0x232a40u: goto label_232a40;
        case 0x232a44u: goto label_232a44;
        case 0x232a48u: goto label_232a48;
        case 0x232a4cu: goto label_232a4c;
        case 0x232a50u: goto label_232a50;
        case 0x232a54u: goto label_232a54;
        case 0x232a58u: goto label_232a58;
        case 0x232a5cu: goto label_232a5c;
        case 0x232a60u: goto label_232a60;
        case 0x232a64u: goto label_232a64;
        case 0x232a68u: goto label_232a68;
        case 0x232a6cu: goto label_232a6c;
        case 0x232a70u: goto label_232a70;
        case 0x232a74u: goto label_232a74;
        case 0x232a78u: goto label_232a78;
        case 0x232a7cu: goto label_232a7c;
        case 0x232a80u: goto label_232a80;
        case 0x232a84u: goto label_232a84;
        case 0x232a88u: goto label_232a88;
        case 0x232a8cu: goto label_232a8c;
        case 0x232a90u: goto label_232a90;
        case 0x232a94u: goto label_232a94;
        case 0x232a98u: goto label_232a98;
        case 0x232a9cu: goto label_232a9c;
        case 0x232aa0u: goto label_232aa0;
        case 0x232aa4u: goto label_232aa4;
        case 0x232aa8u: goto label_232aa8;
        case 0x232aacu: goto label_232aac;
        case 0x232ab0u: goto label_232ab0;
        case 0x232ab4u: goto label_232ab4;
        case 0x232ab8u: goto label_232ab8;
        case 0x232abcu: goto label_232abc;
        case 0x232ac0u: goto label_232ac0;
        case 0x232ac4u: goto label_232ac4;
        case 0x232ac8u: goto label_232ac8;
        case 0x232accu: goto label_232acc;
        case 0x232ad0u: goto label_232ad0;
        case 0x232ad4u: goto label_232ad4;
        case 0x232ad8u: goto label_232ad8;
        case 0x232adcu: goto label_232adc;
        default: break;
    }

    ctx->pc = 0x232a30u;

label_232a30:
    // 0x232a30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x232a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_232a34:
    // 0x232a34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x232a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_232a38:
    // 0x232a38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x232a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_232a3c:
    // 0x232a3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x232a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_232a40:
    // 0x232a40: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x232a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_232a44:
    // 0x232a44: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x232a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_232a48:
    // 0x232a48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_232a4c:
    if (ctx->pc == 0x232A4Cu) {
        ctx->pc = 0x232A50u;
        goto label_232a50;
    }
    ctx->pc = 0x232A48u;
    {
        const bool branch_taken_0x232a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232a48) {
            ctx->pc = 0x232A58u;
            goto label_232a58;
        }
    }
    ctx->pc = 0x232A50u;
label_232a50:
    // 0x232a50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x232a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232a54:
    // 0x232a54: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x232a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_232a58:
    // 0x232a58: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x232a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_232a5c:
    // 0x232a5c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x232a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_232a60:
    // 0x232a60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x232a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_232a64:
    // 0x232a64: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x232a64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_232a68:
    // 0x232a68: 0xc119b68  jal         func_466DA0
label_232a6c:
    if (ctx->pc == 0x232A6Cu) {
        ctx->pc = 0x232A70u;
        goto label_232a70;
    }
    ctx->pc = 0x232A68u;
    SET_GPR_U32(ctx, 31, 0x232A70u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x232A68u, 0x232A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A70u;
label_232a70:
    // 0x232a70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x232a70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_232a74:
    // 0x232a74: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_232a78:
    if (ctx->pc == 0x232A78u) {
        ctx->pc = 0x232A7Cu;
        goto label_232a7c;
    }
    ctx->pc = 0x232A74u;
    {
        const bool branch_taken_0x232a74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x232a74) {
            ctx->pc = 0x232A88u;
            goto label_232a88;
        }
    }
    ctx->pc = 0x232A7Cu;
label_232a7c:
    // 0x232a7c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x232a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232a80:
    // 0x232a80: 0x1000000e  b           . + 4 + (0xE << 2)
label_232a84:
    if (ctx->pc == 0x232A84u) {
        ctx->pc = 0x232A88u;
        goto label_232a88;
    }
    ctx->pc = 0x232A80u;
    {
        const bool branch_taken_0x232a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232a80) {
            ctx->pc = 0x232ABCu;
            goto label_232abc;
        }
    }
    ctx->pc = 0x232A88u;
label_232a88:
    // 0x232a88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x232a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232a8c:
    // 0x232a8c: 0xc0ba088  jal         func_2E8220
label_232a90:
    if (ctx->pc == 0x232A90u) {
        ctx->pc = 0x232A94u;
        goto label_232a94;
    }
    ctx->pc = 0x232A8Cu;
    SET_GPR_U32(ctx, 31, 0x232A94u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x232A8Cu, 0x232A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A94u;
label_232a94:
    // 0x232a94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x232a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_232a98:
    // 0x232a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232a9c:
    // 0x232a9c: 0xc0ba088  jal         func_2E8220
label_232aa0:
    if (ctx->pc == 0x232AA0u) {
        ctx->pc = 0x232AA4u;
        goto label_232aa4;
    }
    ctx->pc = 0x232A9Cu;
    SET_GPR_U32(ctx, 31, 0x232AA4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x232A9Cu, 0x232AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232AA4u;
label_232aa4:
    // 0x232aa4: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_232aa8:
    if (ctx->pc == 0x232AA8u) {
        ctx->pc = 0x232AACu;
        goto label_232aac;
    }
    ctx->pc = 0x232AA4u;
    {
        const bool branch_taken_0x232aa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x232aa4) {
            ctx->pc = 0x232A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232a58;
        }
    }
    ctx->pc = 0x232AACu;
label_232aac:
    // 0x232aac: 0x200f809  jalr        $s0
label_232ab0:
    if (ctx->pc == 0x232AB0u) {
        ctx->pc = 0x232AB4u;
        goto label_232ab4;
    }
    ctx->pc = 0x232AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x232AB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232AACu, 0x232AB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x232AB4u;
label_232ab4:
    // 0x232ab4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_232ab8:
    if (ctx->pc == 0x232AB8u) {
        ctx->pc = 0x232ABCu;
        goto label_232abc;
    }
    ctx->pc = 0x232AB4u;
    {
        const bool branch_taken_0x232ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232ab4) {
            ctx->pc = 0x232A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232a58;
        }
    }
    ctx->pc = 0x232ABCu;
label_232abc:
    // 0x232abc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x232abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_232ac0:
    // 0x232ac0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x232ac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_232ac4:
    // 0x232ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x232ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_232ac8:
    // 0x232ac8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x232ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_232acc:
    // 0x232acc: 0x3e00008  jr          $ra
label_232ad0:
    if (ctx->pc == 0x232AD0u) {
        ctx->pc = 0x232AD4u;
        goto label_232ad4;
    }
    ctx->pc = 0x232ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232AD4u;
label_232ad4:
    // 0x232ad4: 0x0  nop
    ctx->pc = 0x232ad4u;
    // NOP
label_232ad8:
    // 0x232ad8: 0x0  nop
    ctx->pc = 0x232ad8u;
    // NOP
label_232adc:
    // 0x232adc: 0x0  nop
    ctx->pc = 0x232adcu;
    // NOP
    ctx->pc = 0x232ae0u;
}
