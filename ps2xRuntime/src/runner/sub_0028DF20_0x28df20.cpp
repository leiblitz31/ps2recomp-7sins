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

// Function: sub_0028DF20
// Address: 0x28df20 - 0x28dfc0
void sub_0028DF20_0x28df20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DF20_0x28df20");
#endif

    switch (ctx->pc) {
        case 0x28df20u: goto label_28df20;
        case 0x28df24u: goto label_28df24;
        case 0x28df28u: goto label_28df28;
        case 0x28df2cu: goto label_28df2c;
        case 0x28df30u: goto label_28df30;
        case 0x28df34u: goto label_28df34;
        case 0x28df38u: goto label_28df38;
        case 0x28df3cu: goto label_28df3c;
        case 0x28df40u: goto label_28df40;
        case 0x28df44u: goto label_28df44;
        case 0x28df48u: goto label_28df48;
        case 0x28df4cu: goto label_28df4c;
        case 0x28df50u: goto label_28df50;
        case 0x28df54u: goto label_28df54;
        case 0x28df58u: goto label_28df58;
        case 0x28df5cu: goto label_28df5c;
        case 0x28df60u: goto label_28df60;
        case 0x28df64u: goto label_28df64;
        case 0x28df68u: goto label_28df68;
        case 0x28df6cu: goto label_28df6c;
        case 0x28df70u: goto label_28df70;
        case 0x28df74u: goto label_28df74;
        case 0x28df78u: goto label_28df78;
        case 0x28df7cu: goto label_28df7c;
        case 0x28df80u: goto label_28df80;
        case 0x28df84u: goto label_28df84;
        case 0x28df88u: goto label_28df88;
        case 0x28df8cu: goto label_28df8c;
        case 0x28df90u: goto label_28df90;
        case 0x28df94u: goto label_28df94;
        case 0x28df98u: goto label_28df98;
        case 0x28df9cu: goto label_28df9c;
        case 0x28dfa0u: goto label_28dfa0;
        case 0x28dfa4u: goto label_28dfa4;
        case 0x28dfa8u: goto label_28dfa8;
        case 0x28dfacu: goto label_28dfac;
        case 0x28dfb0u: goto label_28dfb0;
        case 0x28dfb4u: goto label_28dfb4;
        case 0x28dfb8u: goto label_28dfb8;
        case 0x28dfbcu: goto label_28dfbc;
        default: break;
    }

    ctx->pc = 0x28df20u;

label_28df20:
    // 0x28df20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28df20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_28df24:
    // 0x28df24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28df24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_28df28:
    // 0x28df28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28df28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28df2c:
    // 0x28df2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28df2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28df30:
    // 0x28df30: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x28df30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_28df34:
    // 0x28df34: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x28df34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_28df38:
    // 0x28df38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28df3c:
    if (ctx->pc == 0x28DF3Cu) {
        ctx->pc = 0x28DF40u;
        goto label_28df40;
    }
    ctx->pc = 0x28DF38u;
    {
        const bool branch_taken_0x28df38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28df38) {
            ctx->pc = 0x28DF48u;
            goto label_28df48;
        }
    }
    ctx->pc = 0x28DF40u;
label_28df40:
    // 0x28df40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28df40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28df44:
    // 0x28df44: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x28df44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_28df48:
    // 0x28df48: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x28df48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_28df4c:
    // 0x28df4c: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x28df4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_28df50:
    // 0x28df50: 0xc119b68  jal         func_466DA0
label_28df54:
    if (ctx->pc == 0x28DF54u) {
        ctx->pc = 0x28DF58u;
        goto label_28df58;
    }
    ctx->pc = 0x28DF50u;
    SET_GPR_U32(ctx, 31, 0x28DF58u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x28DF50u, 0x28DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF58u;
label_28df58:
    // 0x28df58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28df58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28df5c:
    // 0x28df5c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_28df60:
    if (ctx->pc == 0x28DF60u) {
        ctx->pc = 0x28DF64u;
        goto label_28df64;
    }
    ctx->pc = 0x28DF5Cu;
    {
        const bool branch_taken_0x28df5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x28df5c) {
            ctx->pc = 0x28DF70u;
            goto label_28df70;
        }
    }
    ctx->pc = 0x28DF64u;
label_28df64:
    // 0x28df64: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28df64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28df68:
    // 0x28df68: 0x1000000e  b           . + 4 + (0xE << 2)
label_28df6c:
    if (ctx->pc == 0x28DF6Cu) {
        ctx->pc = 0x28DF70u;
        goto label_28df70;
    }
    ctx->pc = 0x28DF68u;
    {
        const bool branch_taken_0x28df68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28df68) {
            ctx->pc = 0x28DFA4u;
            goto label_28dfa4;
        }
    }
    ctx->pc = 0x28DF70u;
label_28df70:
    // 0x28df70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28df70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28df74:
    // 0x28df74: 0xc0ba088  jal         func_2E8220
label_28df78:
    if (ctx->pc == 0x28DF78u) {
        ctx->pc = 0x28DF7Cu;
        goto label_28df7c;
    }
    ctx->pc = 0x28DF74u;
    SET_GPR_U32(ctx, 31, 0x28DF7Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x28DF74u, 0x28DF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF7Cu;
label_28df7c:
    // 0x28df7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28df7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28df80:
    // 0x28df80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28df80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28df84:
    // 0x28df84: 0xc0ba088  jal         func_2E8220
label_28df88:
    if (ctx->pc == 0x28DF88u) {
        ctx->pc = 0x28DF8Cu;
        goto label_28df8c;
    }
    ctx->pc = 0x28DF84u;
    SET_GPR_U32(ctx, 31, 0x28DF8Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x28DF84u, 0x28DF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF8Cu;
label_28df8c:
    // 0x28df8c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_28df90:
    if (ctx->pc == 0x28DF90u) {
        ctx->pc = 0x28DF94u;
        goto label_28df94;
    }
    ctx->pc = 0x28DF8Cu;
    {
        const bool branch_taken_0x28df8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28df8c) {
            ctx->pc = 0x28DF48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28df48;
        }
    }
    ctx->pc = 0x28DF94u;
label_28df94:
    // 0x28df94: 0x200f809  jalr        $s0
label_28df98:
    if (ctx->pc == 0x28DF98u) {
        ctx->pc = 0x28DF9Cu;
        goto label_28df9c;
    }
    ctx->pc = 0x28DF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x28DF9Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DF94u, 0x28DF9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28DF9Cu;
label_28df9c:
    // 0x28df9c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_28dfa0:
    if (ctx->pc == 0x28DFA0u) {
        ctx->pc = 0x28DFA4u;
        goto label_28dfa4;
    }
    ctx->pc = 0x28DF9Cu;
    {
        const bool branch_taken_0x28df9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28df9c) {
            ctx->pc = 0x28DF48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28df48;
        }
    }
    ctx->pc = 0x28DFA4u;
label_28dfa4:
    // 0x28dfa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28dfa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28dfa8:
    // 0x28dfa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28dfa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28dfac:
    // 0x28dfac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28dfacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28dfb0:
    // 0x28dfb0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x28dfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_28dfb4:
    // 0x28dfb4: 0x3e00008  jr          $ra
label_28dfb8:
    if (ctx->pc == 0x28DFB8u) {
        ctx->pc = 0x28DFBCu;
        goto label_28dfbc;
    }
    ctx->pc = 0x28DFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DFBCu;
label_28dfbc:
    // 0x28dfbc: 0x0  nop
    ctx->pc = 0x28dfbcu;
    // NOP
    ctx->pc = 0x28dfc0u;
}
