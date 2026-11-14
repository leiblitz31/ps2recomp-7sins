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

// Function: sub_001A1A40
// Address: 0x1a1a40 - 0x1a1ae0
void sub_001A1A40_0x1a1a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1A40_0x1a1a40");
#endif

    switch (ctx->pc) {
        case 0x1a1a40u: goto label_1a1a40;
        case 0x1a1a44u: goto label_1a1a44;
        case 0x1a1a48u: goto label_1a1a48;
        case 0x1a1a4cu: goto label_1a1a4c;
        case 0x1a1a50u: goto label_1a1a50;
        case 0x1a1a54u: goto label_1a1a54;
        case 0x1a1a58u: goto label_1a1a58;
        case 0x1a1a5cu: goto label_1a1a5c;
        case 0x1a1a60u: goto label_1a1a60;
        case 0x1a1a64u: goto label_1a1a64;
        case 0x1a1a68u: goto label_1a1a68;
        case 0x1a1a6cu: goto label_1a1a6c;
        case 0x1a1a70u: goto label_1a1a70;
        case 0x1a1a74u: goto label_1a1a74;
        case 0x1a1a78u: goto label_1a1a78;
        case 0x1a1a7cu: goto label_1a1a7c;
        case 0x1a1a80u: goto label_1a1a80;
        case 0x1a1a84u: goto label_1a1a84;
        case 0x1a1a88u: goto label_1a1a88;
        case 0x1a1a8cu: goto label_1a1a8c;
        case 0x1a1a90u: goto label_1a1a90;
        case 0x1a1a94u: goto label_1a1a94;
        case 0x1a1a98u: goto label_1a1a98;
        case 0x1a1a9cu: goto label_1a1a9c;
        case 0x1a1aa0u: goto label_1a1aa0;
        case 0x1a1aa4u: goto label_1a1aa4;
        case 0x1a1aa8u: goto label_1a1aa8;
        case 0x1a1aacu: goto label_1a1aac;
        case 0x1a1ab0u: goto label_1a1ab0;
        case 0x1a1ab4u: goto label_1a1ab4;
        case 0x1a1ab8u: goto label_1a1ab8;
        case 0x1a1abcu: goto label_1a1abc;
        case 0x1a1ac0u: goto label_1a1ac0;
        case 0x1a1ac4u: goto label_1a1ac4;
        case 0x1a1ac8u: goto label_1a1ac8;
        case 0x1a1accu: goto label_1a1acc;
        case 0x1a1ad0u: goto label_1a1ad0;
        case 0x1a1ad4u: goto label_1a1ad4;
        case 0x1a1ad8u: goto label_1a1ad8;
        case 0x1a1adcu: goto label_1a1adc;
        default: break;
    }

    ctx->pc = 0x1a1a40u;

label_1a1a40:
    // 0x1a1a40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a1a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a1a44:
    // 0x1a1a44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a1a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a1a48:
    // 0x1a1a48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a1a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a1a4c:
    // 0x1a1a4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a1a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a1a50:
    // 0x1a1a50: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1a1a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1a1a54:
    // 0x1a1a54: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1a1a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1a1a58:
    // 0x1a1a58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a1a5c:
    if (ctx->pc == 0x1A1A5Cu) {
        ctx->pc = 0x1A1A60u;
        goto label_1a1a60;
    }
    ctx->pc = 0x1A1A58u;
    {
        const bool branch_taken_0x1a1a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a58) {
            ctx->pc = 0x1A1A68u;
            goto label_1a1a68;
        }
    }
    ctx->pc = 0x1A1A60u;
label_1a1a60:
    // 0x1a1a60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1a64:
    // 0x1a1a64: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1a1a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1a1a68:
    // 0x1a1a68: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1a1a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1a1a6c:
    // 0x1a1a6c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1a1a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a1a70:
    // 0x1a1a70: 0xc119b68  jal         func_466DA0
label_1a1a74:
    if (ctx->pc == 0x1A1A74u) {
        ctx->pc = 0x1A1A78u;
        goto label_1a1a78;
    }
    ctx->pc = 0x1A1A70u;
    SET_GPR_U32(ctx, 31, 0x1A1A78u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1A1A70u, 0x1A1A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A78u;
label_1a1a78:
    // 0x1a1a78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a1a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1a7c:
    // 0x1a1a7c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1a1a80:
    if (ctx->pc == 0x1A1A80u) {
        ctx->pc = 0x1A1A84u;
        goto label_1a1a84;
    }
    ctx->pc = 0x1A1A7Cu;
    {
        const bool branch_taken_0x1a1a7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a7c) {
            ctx->pc = 0x1A1A90u;
            goto label_1a1a90;
        }
    }
    ctx->pc = 0x1A1A84u;
label_1a1a84:
    // 0x1a1a84: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a1a84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1a88:
    // 0x1a1a88: 0x1000000e  b           . + 4 + (0xE << 2)
label_1a1a8c:
    if (ctx->pc == 0x1A1A8Cu) {
        ctx->pc = 0x1A1A90u;
        goto label_1a1a90;
    }
    ctx->pc = 0x1A1A88u;
    {
        const bool branch_taken_0x1a1a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a88) {
            ctx->pc = 0x1A1AC4u;
            goto label_1a1ac4;
        }
    }
    ctx->pc = 0x1A1A90u;
label_1a1a90:
    // 0x1a1a90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1a94:
    // 0x1a1a94: 0xc0ba088  jal         func_2E8220
label_1a1a98:
    if (ctx->pc == 0x1A1A98u) {
        ctx->pc = 0x1A1A9Cu;
        goto label_1a1a9c;
    }
    ctx->pc = 0x1A1A94u;
    SET_GPR_U32(ctx, 31, 0x1A1A9Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1A1A94u, 0x1A1A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A9Cu;
label_1a1a9c:
    // 0x1a1a9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a1a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1aa0:
    // 0x1a1aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1aa4:
    // 0x1a1aa4: 0xc0ba088  jal         func_2E8220
label_1a1aa8:
    if (ctx->pc == 0x1A1AA8u) {
        ctx->pc = 0x1A1AACu;
        goto label_1a1aac;
    }
    ctx->pc = 0x1A1AA4u;
    SET_GPR_U32(ctx, 31, 0x1A1AACu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1A1AA4u, 0x1A1AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1AACu;
label_1a1aac:
    // 0x1a1aac: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_1a1ab0:
    if (ctx->pc == 0x1A1AB0u) {
        ctx->pc = 0x1A1AB4u;
        goto label_1a1ab4;
    }
    ctx->pc = 0x1A1AACu;
    {
        const bool branch_taken_0x1a1aac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1aac) {
            ctx->pc = 0x1A1A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1a68;
        }
    }
    ctx->pc = 0x1A1AB4u;
label_1a1ab4:
    // 0x1a1ab4: 0x200f809  jalr        $s0
label_1a1ab8:
    if (ctx->pc == 0x1A1AB8u) {
        ctx->pc = 0x1A1ABCu;
        goto label_1a1abc;
    }
    ctx->pc = 0x1A1AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1A1ABCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1AB4u, 0x1A1ABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1ABCu;
label_1a1abc:
    // 0x1a1abc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_1a1ac0:
    if (ctx->pc == 0x1A1AC0u) {
        ctx->pc = 0x1A1AC4u;
        goto label_1a1ac4;
    }
    ctx->pc = 0x1A1ABCu;
    {
        const bool branch_taken_0x1a1abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1abc) {
            ctx->pc = 0x1A1A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1a68;
        }
    }
    ctx->pc = 0x1A1AC4u;
label_1a1ac4:
    // 0x1a1ac4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a1ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a1ac8:
    // 0x1a1ac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a1ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a1acc:
    // 0x1a1acc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1ad0:
    // 0x1a1ad0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1a1ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1a1ad4:
    // 0x1a1ad4: 0x3e00008  jr          $ra
label_1a1ad8:
    if (ctx->pc == 0x1A1AD8u) {
        ctx->pc = 0x1A1ADCu;
        goto label_1a1adc;
    }
    ctx->pc = 0x1A1AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1ADCu;
label_1a1adc:
    // 0x1a1adc: 0x0  nop
    ctx->pc = 0x1a1adcu;
    // NOP
    ctx->pc = 0x1a1ae0u;
}
