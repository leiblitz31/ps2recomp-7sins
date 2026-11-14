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

// Function: sub_0022AD30
// Address: 0x22ad30 - 0x22ade0
void sub_0022AD30_0x22ad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AD30_0x22ad30");
#endif

    switch (ctx->pc) {
        case 0x22ad30u: goto label_22ad30;
        case 0x22ad34u: goto label_22ad34;
        case 0x22ad38u: goto label_22ad38;
        case 0x22ad3cu: goto label_22ad3c;
        case 0x22ad40u: goto label_22ad40;
        case 0x22ad44u: goto label_22ad44;
        case 0x22ad48u: goto label_22ad48;
        case 0x22ad4cu: goto label_22ad4c;
        case 0x22ad50u: goto label_22ad50;
        case 0x22ad54u: goto label_22ad54;
        case 0x22ad58u: goto label_22ad58;
        case 0x22ad5cu: goto label_22ad5c;
        case 0x22ad60u: goto label_22ad60;
        case 0x22ad64u: goto label_22ad64;
        case 0x22ad68u: goto label_22ad68;
        case 0x22ad6cu: goto label_22ad6c;
        case 0x22ad70u: goto label_22ad70;
        case 0x22ad74u: goto label_22ad74;
        case 0x22ad78u: goto label_22ad78;
        case 0x22ad7cu: goto label_22ad7c;
        case 0x22ad80u: goto label_22ad80;
        case 0x22ad84u: goto label_22ad84;
        case 0x22ad88u: goto label_22ad88;
        case 0x22ad8cu: goto label_22ad8c;
        case 0x22ad90u: goto label_22ad90;
        case 0x22ad94u: goto label_22ad94;
        case 0x22ad98u: goto label_22ad98;
        case 0x22ad9cu: goto label_22ad9c;
        case 0x22ada0u: goto label_22ada0;
        case 0x22ada4u: goto label_22ada4;
        case 0x22ada8u: goto label_22ada8;
        case 0x22adacu: goto label_22adac;
        case 0x22adb0u: goto label_22adb0;
        case 0x22adb4u: goto label_22adb4;
        case 0x22adb8u: goto label_22adb8;
        case 0x22adbcu: goto label_22adbc;
        case 0x22adc0u: goto label_22adc0;
        case 0x22adc4u: goto label_22adc4;
        case 0x22adc8u: goto label_22adc8;
        case 0x22adccu: goto label_22adcc;
        case 0x22add0u: goto label_22add0;
        case 0x22add4u: goto label_22add4;
        case 0x22add8u: goto label_22add8;
        case 0x22addcu: goto label_22addc;
        default: break;
    }

    ctx->pc = 0x22ad30u;

label_22ad30:
    // 0x22ad30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22ad30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_22ad34:
    // 0x22ad34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22ad34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22ad38:
    // 0x22ad38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22ad38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22ad3c:
    // 0x22ad3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22ad3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22ad40:
    // 0x22ad40: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x22ad40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_22ad44:
    // 0x22ad44: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_22ad48:
    // 0x22ad48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_22ad4c:
    if (ctx->pc == 0x22AD4Cu) {
        ctx->pc = 0x22AD50u;
        goto label_22ad50;
    }
    ctx->pc = 0x22AD48u;
    {
        const bool branch_taken_0x22ad48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ad48) {
            ctx->pc = 0x22AD58u;
            goto label_22ad58;
        }
    }
    ctx->pc = 0x22AD50u;
label_22ad50:
    // 0x22ad50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22ad54:
    // 0x22ad54: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x22ad54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_22ad58:
    // 0x22ad58: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x22ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_22ad5c:
    // 0x22ad5c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x22ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22ad60:
    // 0x22ad60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22ad64:
    // 0x22ad64: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_22ad68:
    // 0x22ad68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22ad6c:
    // 0x22ad6c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x22ad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22ad70:
    // 0x22ad70: 0xc119b68  jal         func_466DA0
label_22ad74:
    if (ctx->pc == 0x22AD74u) {
        ctx->pc = 0x22AD78u;
        goto label_22ad78;
    }
    ctx->pc = 0x22AD70u;
    SET_GPR_U32(ctx, 31, 0x22AD78u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x22AD70u, 0x22AD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AD78u;
label_22ad78:
    // 0x22ad78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22ad78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22ad7c:
    // 0x22ad7c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_22ad80:
    if (ctx->pc == 0x22AD80u) {
        ctx->pc = 0x22AD84u;
        goto label_22ad84;
    }
    ctx->pc = 0x22AD7Cu;
    {
        const bool branch_taken_0x22ad7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ad7c) {
            ctx->pc = 0x22AD90u;
            goto label_22ad90;
        }
    }
    ctx->pc = 0x22AD84u;
label_22ad84:
    // 0x22ad84: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22ad84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ad88:
    // 0x22ad88: 0x1000000e  b           . + 4 + (0xE << 2)
label_22ad8c:
    if (ctx->pc == 0x22AD8Cu) {
        ctx->pc = 0x22AD90u;
        goto label_22ad90;
    }
    ctx->pc = 0x22AD88u;
    {
        const bool branch_taken_0x22ad88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ad88) {
            ctx->pc = 0x22ADC4u;
            goto label_22adc4;
        }
    }
    ctx->pc = 0x22AD90u;
label_22ad90:
    // 0x22ad90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22ad90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ad94:
    // 0x22ad94: 0xc0ba088  jal         func_2E8220
label_22ad98:
    if (ctx->pc == 0x22AD98u) {
        ctx->pc = 0x22AD9Cu;
        goto label_22ad9c;
    }
    ctx->pc = 0x22AD94u;
    SET_GPR_U32(ctx, 31, 0x22AD9Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x22AD94u, 0x22AD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AD9Cu;
label_22ad9c:
    // 0x22ad9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22ad9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22ada0:
    // 0x22ada0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ada0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22ada4:
    // 0x22ada4: 0xc0ba088  jal         func_2E8220
label_22ada8:
    if (ctx->pc == 0x22ADA8u) {
        ctx->pc = 0x22ADACu;
        goto label_22adac;
    }
    ctx->pc = 0x22ADA4u;
    SET_GPR_U32(ctx, 31, 0x22ADACu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x22ADA4u, 0x22ADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ADACu;
label_22adac:
    // 0x22adac: 0x1200ffea  beqz        $s0, . + 4 + (-0x16 << 2)
label_22adb0:
    if (ctx->pc == 0x22ADB0u) {
        ctx->pc = 0x22ADB4u;
        goto label_22adb4;
    }
    ctx->pc = 0x22ADACu;
    {
        const bool branch_taken_0x22adac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22adac) {
            ctx->pc = 0x22AD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ad58;
        }
    }
    ctx->pc = 0x22ADB4u;
label_22adb4:
    // 0x22adb4: 0x200f809  jalr        $s0
label_22adb8:
    if (ctx->pc == 0x22ADB8u) {
        ctx->pc = 0x22ADBCu;
        goto label_22adbc;
    }
    ctx->pc = 0x22ADB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x22ADBCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ADB4u, 0x22ADBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22ADBCu;
label_22adbc:
    // 0x22adbc: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
label_22adc0:
    if (ctx->pc == 0x22ADC0u) {
        ctx->pc = 0x22ADC4u;
        goto label_22adc4;
    }
    ctx->pc = 0x22ADBCu;
    {
        const bool branch_taken_0x22adbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22adbc) {
            ctx->pc = 0x22AD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ad58;
        }
    }
    ctx->pc = 0x22ADC4u;
label_22adc4:
    // 0x22adc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22adc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22adc8:
    // 0x22adc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22adc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22adcc:
    // 0x22adcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22adccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22add0:
    // 0x22add0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x22add0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_22add4:
    // 0x22add4: 0x3e00008  jr          $ra
label_22add8:
    if (ctx->pc == 0x22ADD8u) {
        ctx->pc = 0x22ADDCu;
        goto label_22addc;
    }
    ctx->pc = 0x22ADD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ADD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22ADDCu;
label_22addc:
    // 0x22addc: 0x0  nop
    ctx->pc = 0x22addcu;
    // NOP
    ctx->pc = 0x22ade0u;
}
