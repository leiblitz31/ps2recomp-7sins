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

// Function: sub_0049AD70
// Address: 0x49ad70 - 0x49adf0
void sub_0049AD70_0x49ad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049AD70_0x49ad70");
#endif

    switch (ctx->pc) {
        case 0x49adacu: goto label_49adac;
        case 0x49adc0u: goto label_49adc0;
        case 0x49add0u: goto label_49add0;
        default: break;
    }

    ctx->pc = 0x49ad70u;

    // 0x49ad70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49ad70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49ad74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49ad74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x49ad78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49ad78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49ad7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49ad7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49ad80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x49ad80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ad84: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x49ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49ad88: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x49ad88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x49ad8c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x49AD8Cu;
    {
        const bool branch_taken_0x49ad8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AD8Cu;
        // 0x49ad90: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ad8c) {
            ctx->pc = 0x49ADD4u;
            goto label_49add4;
        }
    }
    ctx->pc = 0x49AD94u;
    // 0x49ad94: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x49ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x49ad98: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x49AD98u;
    {
        const bool branch_taken_0x49ad98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AD98u;
        // 0x49ad9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ad98) {
            ctx->pc = 0x49ADD4u;
            goto label_49add4;
        }
    }
    ctx->pc = 0x49ADA0u;
    // 0x49ada0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x49ada0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49ada4: 0xc12732e  jal         func_49CCB8
    ctx->pc = 0x49ADA4u;
    SET_GPR_U32(ctx, 31, 0x49ADACu);
    ctx->pc = 0x49ADA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49ADA4u;
    // 0x49ada8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49CCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49CCB8u, 0x49ADA4u, 0x49ADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49ADACu;
label_49adac:
    // 0x49adac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x49ADACu;
    {
        const bool branch_taken_0x49adac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ADACu;
        // 0x49adb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49adac) {
            ctx->pc = 0x49ADD8u;
            goto label_49add8;
        }
    }
    ctx->pc = 0x49ADB4u;
    // 0x49adb4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x49adb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x49adb8: 0xc12ab2c  jal         func_4AACB0
    ctx->pc = 0x49ADB8u;
    SET_GPR_U32(ctx, 31, 0x49ADC0u);
    ctx->pc = 0x49ADBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49ADB8u;
    // 0x49adbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AACB0u, 0x49ADB8u, 0x49ADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49ADC0u;
label_49adc0:
    // 0x49adc0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49ADC0u;
    {
        const bool branch_taken_0x49adc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ADC0u;
        // 0x49adc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49adc0) {
            ctx->pc = 0x49ADD8u;
            goto label_49add8;
        }
    }
    ctx->pc = 0x49ADC8u;
    // 0x49adc8: 0xc12aba0  jal         func_4AAE80
    ctx->pc = 0x49ADC8u;
    SET_GPR_U32(ctx, 31, 0x49ADD0u);
    ctx->pc = 0x49ADCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49ADC8u;
    // 0x49adcc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAE80u, 0x49ADC8u, 0x49ADD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49ADD0u;
label_49add0:
    // 0x49add0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x49add0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_49add4:
    // 0x49add4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49add4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49add8:
    // 0x49add8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49add8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49addc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49addcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49ade0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49ade0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ade4: 0x3e00008  jr          $ra
    ctx->pc = 0x49ADE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49ADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ADE4u;
        // 0x49ade8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49ADE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49ADECu;
    // 0x49adec: 0x0  nop
    ctx->pc = 0x49adecu;
    // NOP
    ctx->pc = 0x49adf0u;
}
