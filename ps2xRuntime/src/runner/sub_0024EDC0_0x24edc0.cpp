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

// Function: sub_0024EDC0
// Address: 0x24edc0 - 0x24ee70
void sub_0024EDC0_0x24edc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024EDC0_0x24edc0");
#endif

    switch (ctx->pc) {
        case 0x24edc0u: goto label_24edc0;
        case 0x24edc4u: goto label_24edc4;
        case 0x24edc8u: goto label_24edc8;
        case 0x24edccu: goto label_24edcc;
        case 0x24edd0u: goto label_24edd0;
        case 0x24edd4u: goto label_24edd4;
        case 0x24edd8u: goto label_24edd8;
        case 0x24eddcu: goto label_24eddc;
        case 0x24ede0u: goto label_24ede0;
        case 0x24ede4u: goto label_24ede4;
        case 0x24ede8u: goto label_24ede8;
        case 0x24edecu: goto label_24edec;
        case 0x24edf0u: goto label_24edf0;
        case 0x24edf4u: goto label_24edf4;
        case 0x24edf8u: goto label_24edf8;
        case 0x24edfcu: goto label_24edfc;
        case 0x24ee00u: goto label_24ee00;
        case 0x24ee04u: goto label_24ee04;
        case 0x24ee08u: goto label_24ee08;
        case 0x24ee0cu: goto label_24ee0c;
        case 0x24ee10u: goto label_24ee10;
        case 0x24ee14u: goto label_24ee14;
        case 0x24ee18u: goto label_24ee18;
        case 0x24ee1cu: goto label_24ee1c;
        case 0x24ee20u: goto label_24ee20;
        case 0x24ee24u: goto label_24ee24;
        case 0x24ee28u: goto label_24ee28;
        case 0x24ee2cu: goto label_24ee2c;
        case 0x24ee30u: goto label_24ee30;
        case 0x24ee34u: goto label_24ee34;
        case 0x24ee38u: goto label_24ee38;
        case 0x24ee3cu: goto label_24ee3c;
        case 0x24ee40u: goto label_24ee40;
        case 0x24ee44u: goto label_24ee44;
        case 0x24ee48u: goto label_24ee48;
        case 0x24ee4cu: goto label_24ee4c;
        case 0x24ee50u: goto label_24ee50;
        case 0x24ee54u: goto label_24ee54;
        case 0x24ee58u: goto label_24ee58;
        case 0x24ee5cu: goto label_24ee5c;
        case 0x24ee60u: goto label_24ee60;
        case 0x24ee64u: goto label_24ee64;
        case 0x24ee68u: goto label_24ee68;
        case 0x24ee6cu: goto label_24ee6c;
        default: break;
    }

    ctx->pc = 0x24edc0u;

label_24edc0:
    // 0x24edc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24edc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_24edc4:
    // 0x24edc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24edc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_24edc8:
    // 0x24edc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24edc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24edcc:
    // 0x24edcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24edccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24edd0:
    // 0x24edd0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x24edd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_24edd4:
    // 0x24edd4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x24edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_24edd8:
    // 0x24edd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_24eddc:
    if (ctx->pc == 0x24EDDCu) {
        ctx->pc = 0x24EDE0u;
        goto label_24ede0;
    }
    ctx->pc = 0x24EDD8u;
    {
        const bool branch_taken_0x24edd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24edd8) {
            ctx->pc = 0x24EDE8u;
            goto label_24ede8;
        }
    }
    ctx->pc = 0x24EDE0u;
label_24ede0:
    // 0x24ede0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24ede4:
    // 0x24ede4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x24ede4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_24ede8:
    // 0x24ede8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x24ede8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_24edec:
    // 0x24edec: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x24edecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_24edf0:
    // 0x24edf0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x24edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24edf4:
    // 0x24edf4: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x24edf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_24edf8:
    // 0x24edf8: 0xc119b68  jal         func_466DA0
label_24edfc:
    if (ctx->pc == 0x24EDFCu) {
        ctx->pc = 0x24EE00u;
        goto label_24ee00;
    }
    ctx->pc = 0x24EDF8u;
    SET_GPR_U32(ctx, 31, 0x24EE00u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x24EDF8u, 0x24EE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EE00u;
label_24ee00:
    // 0x24ee00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24ee00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24ee04:
    // 0x24ee04: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_24ee08:
    if (ctx->pc == 0x24EE08u) {
        ctx->pc = 0x24EE0Cu;
        goto label_24ee0c;
    }
    ctx->pc = 0x24EE04u;
    {
        const bool branch_taken_0x24ee04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ee04) {
            ctx->pc = 0x24EE18u;
            goto label_24ee18;
        }
    }
    ctx->pc = 0x24EE0Cu;
label_24ee0c:
    // 0x24ee0c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x24ee0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24ee10:
    // 0x24ee10: 0x1000000e  b           . + 4 + (0xE << 2)
label_24ee14:
    if (ctx->pc == 0x24EE14u) {
        ctx->pc = 0x24EE18u;
        goto label_24ee18;
    }
    ctx->pc = 0x24EE10u;
    {
        const bool branch_taken_0x24ee10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ee10) {
            ctx->pc = 0x24EE4Cu;
            goto label_24ee4c;
        }
    }
    ctx->pc = 0x24EE18u;
label_24ee18:
    // 0x24ee18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24ee18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ee1c:
    // 0x24ee1c: 0xc0ba088  jal         func_2E8220
label_24ee20:
    if (ctx->pc == 0x24EE20u) {
        ctx->pc = 0x24EE24u;
        goto label_24ee24;
    }
    ctx->pc = 0x24EE1Cu;
    SET_GPR_U32(ctx, 31, 0x24EE24u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x24EE1Cu, 0x24EE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EE24u;
label_24ee24:
    // 0x24ee24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24ee24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24ee28:
    // 0x24ee28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ee28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24ee2c:
    // 0x24ee2c: 0xc0ba088  jal         func_2E8220
label_24ee30:
    if (ctx->pc == 0x24EE30u) {
        ctx->pc = 0x24EE34u;
        goto label_24ee34;
    }
    ctx->pc = 0x24EE2Cu;
    SET_GPR_U32(ctx, 31, 0x24EE34u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x24EE2Cu, 0x24EE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EE34u;
label_24ee34:
    // 0x24ee34: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_24ee38:
    if (ctx->pc == 0x24EE38u) {
        ctx->pc = 0x24EE3Cu;
        goto label_24ee3c;
    }
    ctx->pc = 0x24EE34u;
    {
        const bool branch_taken_0x24ee34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ee34) {
            ctx->pc = 0x24EDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ede8;
        }
    }
    ctx->pc = 0x24EE3Cu;
label_24ee3c:
    // 0x24ee3c: 0x200f809  jalr        $s0
label_24ee40:
    if (ctx->pc == 0x24EE40u) {
        ctx->pc = 0x24EE44u;
        goto label_24ee44;
    }
    ctx->pc = 0x24EE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x24EE44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EE3Cu, 0x24EE44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24EE44u;
label_24ee44:
    // 0x24ee44: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_24ee48:
    if (ctx->pc == 0x24EE48u) {
        ctx->pc = 0x24EE4Cu;
        goto label_24ee4c;
    }
    ctx->pc = 0x24EE44u;
    {
        const bool branch_taken_0x24ee44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ee44) {
            ctx->pc = 0x24EDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ede8;
        }
    }
    ctx->pc = 0x24EE4Cu;
label_24ee4c:
    // 0x24ee4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24ee4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24ee50:
    // 0x24ee50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24ee50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24ee54:
    // 0x24ee54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24ee54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24ee58:
    // 0x24ee58: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x24ee58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_24ee5c:
    // 0x24ee5c: 0x3e00008  jr          $ra
label_24ee60:
    if (ctx->pc == 0x24EE60u) {
        ctx->pc = 0x24EE64u;
        goto label_24ee64;
    }
    ctx->pc = 0x24EE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EE64u;
label_24ee64:
    // 0x24ee64: 0x0  nop
    ctx->pc = 0x24ee64u;
    // NOP
label_24ee68:
    // 0x24ee68: 0x0  nop
    ctx->pc = 0x24ee68u;
    // NOP
label_24ee6c:
    // 0x24ee6c: 0x0  nop
    ctx->pc = 0x24ee6cu;
    // NOP
    ctx->pc = 0x24ee70u;
}
