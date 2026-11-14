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

// Function: sub_00271A40
// Address: 0x271a40 - 0x271ae0
void sub_00271A40_0x271a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271A40_0x271a40");
#endif

    switch (ctx->pc) {
        case 0x271a40u: goto label_271a40;
        case 0x271a44u: goto label_271a44;
        case 0x271a48u: goto label_271a48;
        case 0x271a4cu: goto label_271a4c;
        case 0x271a50u: goto label_271a50;
        case 0x271a54u: goto label_271a54;
        case 0x271a58u: goto label_271a58;
        case 0x271a5cu: goto label_271a5c;
        case 0x271a60u: goto label_271a60;
        case 0x271a64u: goto label_271a64;
        case 0x271a68u: goto label_271a68;
        case 0x271a6cu: goto label_271a6c;
        case 0x271a70u: goto label_271a70;
        case 0x271a74u: goto label_271a74;
        case 0x271a78u: goto label_271a78;
        case 0x271a7cu: goto label_271a7c;
        case 0x271a80u: goto label_271a80;
        case 0x271a84u: goto label_271a84;
        case 0x271a88u: goto label_271a88;
        case 0x271a8cu: goto label_271a8c;
        case 0x271a90u: goto label_271a90;
        case 0x271a94u: goto label_271a94;
        case 0x271a98u: goto label_271a98;
        case 0x271a9cu: goto label_271a9c;
        case 0x271aa0u: goto label_271aa0;
        case 0x271aa4u: goto label_271aa4;
        case 0x271aa8u: goto label_271aa8;
        case 0x271aacu: goto label_271aac;
        case 0x271ab0u: goto label_271ab0;
        case 0x271ab4u: goto label_271ab4;
        case 0x271ab8u: goto label_271ab8;
        case 0x271abcu: goto label_271abc;
        case 0x271ac0u: goto label_271ac0;
        case 0x271ac4u: goto label_271ac4;
        case 0x271ac8u: goto label_271ac8;
        case 0x271accu: goto label_271acc;
        case 0x271ad0u: goto label_271ad0;
        case 0x271ad4u: goto label_271ad4;
        case 0x271ad8u: goto label_271ad8;
        case 0x271adcu: goto label_271adc;
        default: break;
    }

    ctx->pc = 0x271a40u;

label_271a40:
    // 0x271a40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x271a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_271a44:
    // 0x271a44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x271a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_271a48:
    // 0x271a48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x271a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_271a4c:
    // 0x271a4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x271a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_271a50:
    // 0x271a50: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x271a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_271a54:
    // 0x271a54: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x271a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_271a58:
    // 0x271a58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_271a5c:
    if (ctx->pc == 0x271A5Cu) {
        ctx->pc = 0x271A60u;
        goto label_271a60;
    }
    ctx->pc = 0x271A58u;
    {
        const bool branch_taken_0x271a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271a58) {
            ctx->pc = 0x271A68u;
            goto label_271a68;
        }
    }
    ctx->pc = 0x271A60u;
label_271a60:
    // 0x271a60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_271a64:
    // 0x271a64: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x271a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_271a68:
    // 0x271a68: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x271a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_271a6c:
    // 0x271a6c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x271a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_271a70:
    // 0x271a70: 0xc119b68  jal         func_466DA0
label_271a74:
    if (ctx->pc == 0x271A74u) {
        ctx->pc = 0x271A78u;
        goto label_271a78;
    }
    ctx->pc = 0x271A70u;
    SET_GPR_U32(ctx, 31, 0x271A78u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x271A70u, 0x271A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271A78u;
label_271a78:
    // 0x271a78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x271a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271a7c:
    // 0x271a7c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_271a80:
    if (ctx->pc == 0x271A80u) {
        ctx->pc = 0x271A84u;
        goto label_271a84;
    }
    ctx->pc = 0x271A7Cu;
    {
        const bool branch_taken_0x271a7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x271a7c) {
            ctx->pc = 0x271A90u;
            goto label_271a90;
        }
    }
    ctx->pc = 0x271A84u;
label_271a84:
    // 0x271a84: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x271a84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_271a88:
    // 0x271a88: 0x1000000e  b           . + 4 + (0xE << 2)
label_271a8c:
    if (ctx->pc == 0x271A8Cu) {
        ctx->pc = 0x271A90u;
        goto label_271a90;
    }
    ctx->pc = 0x271A88u;
    {
        const bool branch_taken_0x271a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271a88) {
            ctx->pc = 0x271AC4u;
            goto label_271ac4;
        }
    }
    ctx->pc = 0x271A90u;
label_271a90:
    // 0x271a90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x271a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271a94:
    // 0x271a94: 0xc0ba088  jal         func_2E8220
label_271a98:
    if (ctx->pc == 0x271A98u) {
        ctx->pc = 0x271A9Cu;
        goto label_271a9c;
    }
    ctx->pc = 0x271A94u;
    SET_GPR_U32(ctx, 31, 0x271A9Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x271A94u, 0x271A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271A9Cu;
label_271a9c:
    // 0x271a9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271aa0:
    // 0x271aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271aa4:
    // 0x271aa4: 0xc0ba088  jal         func_2E8220
label_271aa8:
    if (ctx->pc == 0x271AA8u) {
        ctx->pc = 0x271AACu;
        goto label_271aac;
    }
    ctx->pc = 0x271AA4u;
    SET_GPR_U32(ctx, 31, 0x271AACu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x271AA4u, 0x271AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271AACu;
label_271aac:
    // 0x271aac: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_271ab0:
    if (ctx->pc == 0x271AB0u) {
        ctx->pc = 0x271AB4u;
        goto label_271ab4;
    }
    ctx->pc = 0x271AACu;
    {
        const bool branch_taken_0x271aac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x271aac) {
            ctx->pc = 0x271A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271a68;
        }
    }
    ctx->pc = 0x271AB4u;
label_271ab4:
    // 0x271ab4: 0x200f809  jalr        $s0
label_271ab8:
    if (ctx->pc == 0x271AB8u) {
        ctx->pc = 0x271ABCu;
        goto label_271abc;
    }
    ctx->pc = 0x271AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x271ABCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271AB4u, 0x271ABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271ABCu;
label_271abc:
    // 0x271abc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_271ac0:
    if (ctx->pc == 0x271AC0u) {
        ctx->pc = 0x271AC4u;
        goto label_271ac4;
    }
    ctx->pc = 0x271ABCu;
    {
        const bool branch_taken_0x271abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271abc) {
            ctx->pc = 0x271A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271a68;
        }
    }
    ctx->pc = 0x271AC4u;
label_271ac4:
    // 0x271ac4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x271ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_271ac8:
    // 0x271ac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x271ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_271acc:
    // 0x271acc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_271ad0:
    // 0x271ad0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x271ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_271ad4:
    // 0x271ad4: 0x3e00008  jr          $ra
label_271ad8:
    if (ctx->pc == 0x271AD8u) {
        ctx->pc = 0x271ADCu;
        goto label_271adc;
    }
    ctx->pc = 0x271AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271ADCu;
label_271adc:
    // 0x271adc: 0x0  nop
    ctx->pc = 0x271adcu;
    // NOP
    ctx->pc = 0x271ae0u;
}
