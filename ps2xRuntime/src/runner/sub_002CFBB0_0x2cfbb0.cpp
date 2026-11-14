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

// Function: sub_002CFBB0
// Address: 0x2cfbb0 - 0x2cfc50
void sub_002CFBB0_0x2cfbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFBB0_0x2cfbb0");
#endif

    switch (ctx->pc) {
        case 0x2cfbb0u: goto label_2cfbb0;
        case 0x2cfbb4u: goto label_2cfbb4;
        case 0x2cfbb8u: goto label_2cfbb8;
        case 0x2cfbbcu: goto label_2cfbbc;
        case 0x2cfbc0u: goto label_2cfbc0;
        case 0x2cfbc4u: goto label_2cfbc4;
        case 0x2cfbc8u: goto label_2cfbc8;
        case 0x2cfbccu: goto label_2cfbcc;
        case 0x2cfbd0u: goto label_2cfbd0;
        case 0x2cfbd4u: goto label_2cfbd4;
        case 0x2cfbd8u: goto label_2cfbd8;
        case 0x2cfbdcu: goto label_2cfbdc;
        case 0x2cfbe0u: goto label_2cfbe0;
        case 0x2cfbe4u: goto label_2cfbe4;
        case 0x2cfbe8u: goto label_2cfbe8;
        case 0x2cfbecu: goto label_2cfbec;
        case 0x2cfbf0u: goto label_2cfbf0;
        case 0x2cfbf4u: goto label_2cfbf4;
        case 0x2cfbf8u: goto label_2cfbf8;
        case 0x2cfbfcu: goto label_2cfbfc;
        case 0x2cfc00u: goto label_2cfc00;
        case 0x2cfc04u: goto label_2cfc04;
        case 0x2cfc08u: goto label_2cfc08;
        case 0x2cfc0cu: goto label_2cfc0c;
        case 0x2cfc10u: goto label_2cfc10;
        case 0x2cfc14u: goto label_2cfc14;
        case 0x2cfc18u: goto label_2cfc18;
        case 0x2cfc1cu: goto label_2cfc1c;
        case 0x2cfc20u: goto label_2cfc20;
        case 0x2cfc24u: goto label_2cfc24;
        case 0x2cfc28u: goto label_2cfc28;
        case 0x2cfc2cu: goto label_2cfc2c;
        case 0x2cfc30u: goto label_2cfc30;
        case 0x2cfc34u: goto label_2cfc34;
        case 0x2cfc38u: goto label_2cfc38;
        case 0x2cfc3cu: goto label_2cfc3c;
        case 0x2cfc40u: goto label_2cfc40;
        case 0x2cfc44u: goto label_2cfc44;
        case 0x2cfc48u: goto label_2cfc48;
        case 0x2cfc4cu: goto label_2cfc4c;
        default: break;
    }

    ctx->pc = 0x2cfbb0u;

label_2cfbb0:
    // 0x2cfbb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cfbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2cfbb4:
    // 0x2cfbb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cfbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cfbb8:
    // 0x2cfbb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cfbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cfbbc:
    // 0x2cfbbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cfbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cfbc0:
    // 0x2cfbc0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2cfbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2cfbc4:
    // 0x2cfbc4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cfbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2cfbc8:
    // 0x2cfbc8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2cfbcc:
    if (ctx->pc == 0x2CFBCCu) {
        ctx->pc = 0x2CFBD0u;
        goto label_2cfbd0;
    }
    ctx->pc = 0x2CFBC8u;
    {
        const bool branch_taken_0x2cfbc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfbc8) {
            ctx->pc = 0x2CFBD8u;
            goto label_2cfbd8;
        }
    }
    ctx->pc = 0x2CFBD0u;
label_2cfbd0:
    // 0x2cfbd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cfbd4:
    // 0x2cfbd4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2cfbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2cfbd8:
    // 0x2cfbd8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cfbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2cfbdc:
    // 0x2cfbdc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2cfbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2cfbe0:
    // 0x2cfbe0: 0xc119b68  jal         func_466DA0
label_2cfbe4:
    if (ctx->pc == 0x2CFBE4u) {
        ctx->pc = 0x2CFBE8u;
        goto label_2cfbe8;
    }
    ctx->pc = 0x2CFBE0u;
    SET_GPR_U32(ctx, 31, 0x2CFBE8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2CFBE0u, 0x2CFBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFBE8u;
label_2cfbe8:
    // 0x2cfbe8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cfbe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cfbec:
    // 0x2cfbec: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2cfbf0:
    if (ctx->pc == 0x2CFBF0u) {
        ctx->pc = 0x2CFBF4u;
        goto label_2cfbf4;
    }
    ctx->pc = 0x2CFBECu;
    {
        const bool branch_taken_0x2cfbec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfbec) {
            ctx->pc = 0x2CFC00u;
            goto label_2cfc00;
        }
    }
    ctx->pc = 0x2CFBF4u;
label_2cfbf4:
    // 0x2cfbf4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cfbf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cfbf8:
    // 0x2cfbf8: 0x1000000e  b           . + 4 + (0xE << 2)
label_2cfbfc:
    if (ctx->pc == 0x2CFBFCu) {
        ctx->pc = 0x2CFC00u;
        goto label_2cfc00;
    }
    ctx->pc = 0x2CFBF8u;
    {
        const bool branch_taken_0x2cfbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfbf8) {
            ctx->pc = 0x2CFC34u;
            goto label_2cfc34;
        }
    }
    ctx->pc = 0x2CFC00u;
label_2cfc00:
    // 0x2cfc00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2cfc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cfc04:
    // 0x2cfc04: 0xc0ba088  jal         func_2E8220
label_2cfc08:
    if (ctx->pc == 0x2CFC08u) {
        ctx->pc = 0x2CFC0Cu;
        goto label_2cfc0c;
    }
    ctx->pc = 0x2CFC04u;
    SET_GPR_U32(ctx, 31, 0x2CFC0Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2CFC04u, 0x2CFC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFC0Cu;
label_2cfc0c:
    // 0x2cfc0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cfc0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cfc10:
    // 0x2cfc10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cfc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cfc14:
    // 0x2cfc14: 0xc0ba088  jal         func_2E8220
label_2cfc18:
    if (ctx->pc == 0x2CFC18u) {
        ctx->pc = 0x2CFC1Cu;
        goto label_2cfc1c;
    }
    ctx->pc = 0x2CFC14u;
    SET_GPR_U32(ctx, 31, 0x2CFC1Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2CFC14u, 0x2CFC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFC1Cu;
label_2cfc1c:
    // 0x2cfc1c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2cfc20:
    if (ctx->pc == 0x2CFC20u) {
        ctx->pc = 0x2CFC24u;
        goto label_2cfc24;
    }
    ctx->pc = 0x2CFC1Cu;
    {
        const bool branch_taken_0x2cfc1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfc1c) {
            ctx->pc = 0x2CFBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cfbd8;
        }
    }
    ctx->pc = 0x2CFC24u;
label_2cfc24:
    // 0x2cfc24: 0x200f809  jalr        $s0
label_2cfc28:
    if (ctx->pc == 0x2CFC28u) {
        ctx->pc = 0x2CFC2Cu;
        goto label_2cfc2c;
    }
    ctx->pc = 0x2CFC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2CFC2Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFC24u, 0x2CFC2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CFC2Cu;
label_2cfc2c:
    // 0x2cfc2c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2cfc30:
    if (ctx->pc == 0x2CFC30u) {
        ctx->pc = 0x2CFC34u;
        goto label_2cfc34;
    }
    ctx->pc = 0x2CFC2Cu;
    {
        const bool branch_taken_0x2cfc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfc2c) {
            ctx->pc = 0x2CFBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cfbd8;
        }
    }
    ctx->pc = 0x2CFC34u;
label_2cfc34:
    // 0x2cfc34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cfc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cfc38:
    // 0x2cfc38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cfc38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cfc3c:
    // 0x2cfc3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cfc3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cfc40:
    // 0x2cfc40: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2cfc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2cfc44:
    // 0x2cfc44: 0x3e00008  jr          $ra
label_2cfc48:
    if (ctx->pc == 0x2CFC48u) {
        ctx->pc = 0x2CFC4Cu;
        goto label_2cfc4c;
    }
    ctx->pc = 0x2CFC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFC4Cu;
label_2cfc4c:
    // 0x2cfc4c: 0x0  nop
    ctx->pc = 0x2cfc4cu;
    // NOP
    ctx->pc = 0x2cfc50u;
}
