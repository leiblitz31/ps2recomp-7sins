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

// Function: sub_0044ADC0
// Address: 0x44adc0 - 0x44b1b8
void sub_0044ADC0_0x44adc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044ADC0_0x44adc0");
#endif

    switch (ctx->pc) {
        case 0x44ae00u: goto label_44ae00;
        case 0x44ae20u: goto label_44ae20;
        case 0x44ae40u: goto label_44ae40;
        case 0x44ae80u: goto label_44ae80;
        case 0x44ae8cu: goto label_44ae8c;
        case 0x44aef0u: goto label_44aef0;
        case 0x44af38u: goto label_44af38;
        case 0x44afe8u: goto label_44afe8;
        case 0x44b03cu: goto label_44b03c;
        case 0x44b098u: goto label_44b098;
        case 0x44b0c8u: goto label_44b0c8;
        case 0x44b100u: goto label_44b100;
        case 0x44b130u: goto label_44b130;
        default: break;
    }

    ctx->pc = 0x44adc0u;

    // 0x44adc0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x44adc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x44adc4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x44adc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x44adc8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x44adc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x44adcc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x44adccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44add0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x44add0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x44add4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x44add4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44add8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x44add8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x44addc: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x44addcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x44ade0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x44ade0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x44ade4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x44ade4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x44ade8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x44ade8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x44adec: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x44adecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x44adf0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44adf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x44adf4: 0x8ef40004  lw          $s4, 0x4($s7)
    ctx->pc = 0x44adf4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x44adf8: 0x8ef30008  lw          $s3, 0x8($s7)
    ctx->pc = 0x44adf8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x44adfc: 0x0  nop
    ctx->pc = 0x44adfcu;
    // NOP
label_44ae00:
    // 0x44ae00: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x44ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x44ae04: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x44ae04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x44ae08: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x44ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44ae0c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x44AE0Cu;
    {
        const bool branch_taken_0x44ae0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AE0Cu;
        // 0x44ae10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ae0c) {
            ctx->pc = 0x44AEC0u;
            goto label_44aec0;
        }
    }
    ctx->pc = 0x44AE14u;
    // 0x44ae14: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x44ae14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44ae18: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44ae18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ae1c: 0x0  nop
    ctx->pc = 0x44ae1cu;
    // NOP
label_44ae20:
    // 0x44ae20: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x44ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x44ae24: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x44ae24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x44ae28: 0x728821  addu        $s1, $v1, $s2
    ctx->pc = 0x44ae28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x44ae2c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x44ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x44ae30: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x44AE30u;
    {
        const bool branch_taken_0x44ae30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44ae30) {
            ctx->pc = 0x44AE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44AE30u;
            // 0x44ae34: 0x8e62001c  lw          $v0, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44AEA8u;
            goto label_44aea8;
        }
    }
    ctx->pc = 0x44AE38u;
    // 0x44ae38: 0xc112414  jal         func_449050
    ctx->pc = 0x44AE38u;
    SET_GPR_U32(ctx, 31, 0x44AE40u);
    ctx->pc = 0x44AE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44AE38u;
    // 0x44ae3c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449050u, 0x44AE38u, 0x44AE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44AE40u;
label_44ae40:
    // 0x44ae40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x44ae40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ae44: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x44AE44u;
    {
        const bool branch_taken_0x44ae44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AE44u;
        // 0x44ae48: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ae44) {
            ctx->pc = 0x44AE68u;
            goto label_44ae68;
        }
    }
    ctx->pc = 0x44AE4Cu;
    // 0x44ae4c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x44ae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x44ae50: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x44ae50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x44ae54: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x44ae54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x44ae58: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x44ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x44ae5c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x44ae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x44ae60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x44AE60u;
    {
        const bool branch_taken_0x44ae60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AE60u;
        // 0x44ae64: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ae60) {
            ctx->pc = 0x44AE6Cu;
            goto label_44ae6c;
        }
    }
    ctx->pc = 0x44AE68u;
label_44ae68:
    // 0x44ae68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x44ae68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44ae6c:
    // 0x44ae6c: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x44AE6Cu;
    {
        const bool branch_taken_0x44ae6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x44AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AE6Cu;
        // 0x44ae70: 0xae24000c  sw          $a0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ae6c) {
            ctx->pc = 0x44AE98u;
            goto label_44ae98;
        }
    }
    ctx->pc = 0x44AE74u;
    // 0x44ae74: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x44ae74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x44ae78: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x44AE78u;
    SET_GPR_U32(ctx, 31, 0x44AE80u);
    ctx->pc = 0x44AE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44AE78u;
    // 0x44ae7c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x44AE78u, 0x44AE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44AE80u;
label_44ae80:
    // 0x44ae80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x44ae80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ae84: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x44AE84u;
    SET_GPR_U32(ctx, 31, 0x44AE8Cu);
    ctx->pc = 0x44AE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44AE84u;
    // 0x44ae88: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x44AE84u, 0x44AE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44AE8Cu;
label_44ae8c:
    // 0x44ae8c: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x44AE8Cu;
    {
        const bool branch_taken_0x44ae8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AE8Cu;
        // 0x44ae90: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ae8c) {
            ctx->pc = 0x44B188u;
            goto label_44b188;
        }
    }
    ctx->pc = 0x44AE94u;
    // 0x44ae94: 0x0  nop
    ctx->pc = 0x44ae94u;
    // NOP
label_44ae98:
    // 0x44ae98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x44ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44ae9c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x44ae9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x44aea0: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x44aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x44aea4: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x44aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_44aea8:
    // 0x44aea8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x44aea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x44aeac: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x44aeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x44aeb0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x44aeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44aeb4: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x44aeb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x44aeb8: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x44AEB8u;
    {
        const bool branch_taken_0x44aeb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x44AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AEB8u;
        // 0x44aebc: 0x26520024  addiu       $s2, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aeb8) {
            ctx->pc = 0x44AE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44ae20;
        }
    }
    ctx->pc = 0x44AEC0u;
label_44aec0:
    // 0x44aec0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x44aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x44aec4: 0x2698ffff  addiu       $t8, $s4, -0x1
    ctx->pc = 0x44aec4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x44aec8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44aec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44aecc: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x44AECCu;
    {
        const bool branch_taken_0x44aecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AECCu;
        // 0x44aed0: 0x26760028  addiu       $s6, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aecc) {
            ctx->pc = 0x44B178u;
            goto label_44b178;
        }
    }
    ctx->pc = 0x44AED4u;
    // 0x44aed4: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x44aed4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x44aed8: 0x8e720008  lw          $s2, 0x8($s3)
    ctx->pc = 0x44aed8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x44aedc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x44aedcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44aee0: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x44aee0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x44aee4: 0x241e0028  addiu       $fp, $zero, 0x28
    ctx->pc = 0x44aee4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x44aee8: 0x24190001  addiu       $t9, $zero, 0x1
    ctx->pc = 0x44aee8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44aeec: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x44aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_44aef0:
    // 0x44aef0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x44aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x44aef4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x44aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44aef8: 0x104b009b  beq         $v0, $t3, . + 4 + (0x9B << 2)
    ctx->pc = 0x44AEF8u;
    {
        const bool branch_taken_0x44aef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 11));
        ctx->pc = 0x44AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AEF8u;
        // 0x44aefc: 0x24af0001  addiu       $t7, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aef8) {
            ctx->pc = 0x44B168u;
            goto label_44b168;
        }
    }
    ctx->pc = 0x44AF00u;
    // 0x44af00: 0x5e2018  mult        $a0, $v0, $fp
    ctx->pc = 0x44af00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x44af04: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x44af04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x44af08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x44af08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x44af0c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x44af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x44af10: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x44af10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x44af14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44af14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44af18: 0x10600093  beqz        $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x44AF18u;
    {
        const bool branch_taken_0x44af18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AF18u;
        // 0x44af1c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44af18) {
            ctx->pc = 0x44B168u;
            goto label_44b168;
        }
    }
    ctx->pc = 0x44AF20u;
    // 0x44af20: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x44af20u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44af24: 0xb96804  sllv        $t5, $t9, $a1
    ctx->pc = 0x44af24u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 5) & 0x1F));
    // 0x44af28: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x44af28u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44af2c: 0x24140024  addiu       $s4, $zero, 0x24
    ctx->pc = 0x44af2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x44af30: 0x2142018  mult        $a0, $s0, $s4
    ctx->pc = 0x44af30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x44af34: 0x0  nop
    ctx->pc = 0x44af34u;
    // NOP
label_44af38:
    // 0x44af38: 0x8dc3000c  lw          $v1, 0xC($t6)
    ctx->pc = 0x44af38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x44af3c: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x44af3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x44af40: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x44af40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x44af44: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x44AF44u;
    {
        const bool branch_taken_0x44af44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AF44u;
        // 0x44af48: 0x260a0001  addiu       $t2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44af44) {
            ctx->pc = 0x44B158u;
            goto label_44b158;
        }
    }
    ctx->pc = 0x44AF4Cu;
    // 0x44af4c: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x44af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x44af50: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x44af50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x44af54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44af54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44af58: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x44AF58u;
    {
        const bool branch_taken_0x44af58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AF58u;
        // 0x44af5c: 0x8d270000  lw          $a3, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44af58) {
            ctx->pc = 0x44B038u;
            goto label_44b038;
        }
    }
    ctx->pc = 0x44AF60u;
    // 0x44af60: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x44af60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x44af64: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x44AF64u;
    {
        const bool branch_taken_0x44af64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AF64u;
        // 0x44af68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44af64) {
            ctx->pc = 0x44B038u;
            goto label_44b038;
        }
    }
    ctx->pc = 0x44AF6Cu;
    // 0x44af6c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x44af6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44af70: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x44af70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44af74: 0x19000013  blez        $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x44AF74u;
    {
        const bool branch_taken_0x44af74 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x44AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AF74u;
        // 0x44af78: 0x31030003  andi        $v1, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44af74) {
            ctx->pc = 0x44AFC4u;
            goto label_44afc4;
        }
    }
    ctx->pc = 0x44AF7Cu;
    // 0x44af7c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x44AF7Cu;
    {
        const bool branch_taken_0x44af7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AF7Cu;
        // 0x44af80: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44af7c) {
            ctx->pc = 0x44AFE0u;
            goto label_44afe0;
        }
    }
    ctx->pc = 0x44AF84u;
    // 0x44af84: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x44AF84u;
    {
        const bool branch_taken_0x44af84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44af84) {
            ctx->pc = 0x44AF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44AF84u;
            // 0x44af88: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44AFC8u;
            goto label_44afc8;
        }
    }
    ctx->pc = 0x44AF8Cu;
    // 0x44af8c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x44af8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x44af90: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x44AF90u;
    {
        const bool branch_taken_0x44af90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44af90) {
            ctx->pc = 0x44AF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44AF90u;
            // 0x44af94: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44AFB4u;
            goto label_44afb4;
        }
    }
    ctx->pc = 0x44AF98u;
    // 0x44af98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x44af98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44af9c: 0x10470036  beq         $v0, $a3, . + 4 + (0x36 << 2)
    ctx->pc = 0x44AF9Cu;
    {
        const bool branch_taken_0x44af9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x44AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AF9Cu;
        // 0x44afa0: 0x24820024  addiu       $v0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44af9c) {
            ctx->pc = 0x44B078u;
            goto label_44b078;
        }
    }
    ctx->pc = 0x44AFA4u;
    // 0x44afa4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x44afa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44afa8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x44afa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44afac: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x44afacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44afb0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x44afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_44afb4:
    // 0x44afb4: 0x10470030  beq         $v0, $a3, . + 4 + (0x30 << 2)
    ctx->pc = 0x44AFB4u;
    {
        const bool branch_taken_0x44afb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x44AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AFB4u;
        // 0x44afb8: 0x24c60024  addiu       $a2, $a2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44afb4) {
            ctx->pc = 0x44B078u;
            goto label_44b078;
        }
    }
    ctx->pc = 0x44AFBCu;
    // 0x44afbc: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x44afbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x44afc0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x44afc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_44afc4:
    // 0x44afc4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x44afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_44afc8:
    // 0x44afc8: 0x1047002b  beq         $v0, $a3, . + 4 + (0x2B << 2)
    ctx->pc = 0x44AFC8u;
    {
        const bool branch_taken_0x44afc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x44AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AFC8u;
        // 0x44afcc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44afc8) {
            ctx->pc = 0x44B078u;
            goto label_44b078;
        }
    }
    ctx->pc = 0x44AFD0u;
    // 0x44afd0: 0x24c60024  addiu       $a2, $a2, 0x24
    ctx->pc = 0x44afd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
    // 0x44afd4: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x44afd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x44afd8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x44AFD8u;
    {
        const bool branch_taken_0x44afd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AFD8u;
        // 0x44afdc: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44afd8) {
            ctx->pc = 0x44B038u;
            goto label_44b038;
        }
    }
    ctx->pc = 0x44AFE0u;
label_44afe0:
    // 0x44afe0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x44afe0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44afe4: 0x0  nop
    ctx->pc = 0x44afe4u;
    // NOP
label_44afe8:
    // 0x44afe8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x44afec: 0x50470013  beql        $v0, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x44AFECu;
    {
        const bool branch_taken_0x44afec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x44afec) {
            ctx->pc = 0x44AFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44AFECu;
            // 0x44aff0: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B03Cu;
            goto label_44b03c;
        }
    }
    ctx->pc = 0x44AFF4u;
    // 0x44aff4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x44aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x44aff8: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x44aff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x44affc: 0x1047001e  beq         $v0, $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x44AFFCu;
    {
        const bool branch_taken_0x44affc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x44B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AFFCu;
        // 0x44b000: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44affc) {
            ctx->pc = 0x44B078u;
            goto label_44b078;
        }
    }
    ctx->pc = 0x44B004u;
    // 0x44b004: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x44b004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x44b008: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x44b008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x44b00c: 0x1047001a  beq         $v0, $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x44B00Cu;
    {
        const bool branch_taken_0x44b00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x44B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B00Cu;
        // 0x44b010: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b00c) {
            ctx->pc = 0x44B078u;
            goto label_44b078;
        }
    }
    ctx->pc = 0x44B014u;
    // 0x44b014: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x44b014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x44b018: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x44b018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x44b01c: 0x10470016  beq         $v0, $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x44B01Cu;
    {
        const bool branch_taken_0x44b01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x44B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B01Cu;
        // 0x44b020: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b01c) {
            ctx->pc = 0x44B078u;
            goto label_44b078;
        }
    }
    ctx->pc = 0x44B024u;
    // 0x44b024: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x44b024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x44b028: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x44b028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x44b02c: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x44b02cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x44b030: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x44B030u;
    {
        const bool branch_taken_0x44b030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B030u;
        // 0x44b034: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b030) {
            ctx->pc = 0x44AFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44afe8;
        }
    }
    ctx->pc = 0x44B038u;
label_44b038:
    // 0x44b038: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x44b038u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44b03c:
    // 0x44b03c: 0x50600047  beql        $v1, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x44B03Cu;
    {
        const bool branch_taken_0x44b03c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b03c) {
            ctx->pc = 0x44B040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B03Cu;
            // 0x44b040: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B15Cu;
            goto label_44b15c;
        }
    }
    ctx->pc = 0x44B044u;
    // 0x44b044: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x44b044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x44b048: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x44b048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x44b04c: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x44B04Cu;
    {
        const bool branch_taken_0x44b04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b04c) {
            ctx->pc = 0x44B050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B04Cu;
            // 0x44b050: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B15Cu;
            goto label_44b15c;
        }
    }
    ctx->pc = 0x44B054u;
    // 0x44b054: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x44b054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x44b058: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x44B058u;
    {
        const bool branch_taken_0x44b058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44b058) {
            ctx->pc = 0x44B05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B058u;
            // 0x44b05c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B080u;
            goto label_44b080;
        }
    }
    ctx->pc = 0x44B060u;
    // 0x44b060: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x44b060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x44b064: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44b064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44b068: 0xad22000c  sw          $v0, 0xC($t1)
    ctx->pc = 0x44b068u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
    // 0x44b06c: 0xad230010  sw          $v1, 0x10($t1)
    ctx->pc = 0x44b06cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 3));
    // 0x44b070: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x44B070u;
    {
        const bool branch_taken_0x44b070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B070u;
        // 0x44b074: 0xac490000  sw          $t1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b070) {
            ctx->pc = 0x44B158u;
            goto label_44b158;
        }
    }
    ctx->pc = 0x44B078u;
label_44b078:
    // 0x44b078: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x44B078u;
    {
        const bool branch_taken_0x44b078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B078u;
        // 0x44b07c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b078) {
            ctx->pc = 0x44B03Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b03c;
        }
    }
    ctx->pc = 0x44B080u;
label_44b080:
    // 0x44b080: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x44b080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b084: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x44b084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x44b088: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x44b088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b08c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x44B08Cu;
    {
        const bool branch_taken_0x44b08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B08Cu;
        // 0x44b090: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b08c) {
            ctx->pc = 0x44B0B4u;
            goto label_44b0b4;
        }
    }
    ctx->pc = 0x44B094u;
    // 0x44b094: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x44b094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_44b098:
    // 0x44b098: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x44b098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x44b09c: 0x0  nop
    ctx->pc = 0x44b09cu;
    // NOP
    // 0x44b0a0: 0x0  nop
    ctx->pc = 0x44b0a0u;
    // NOP
    // 0x44b0a4: 0x0  nop
    ctx->pc = 0x44b0a4u;
    // NOP
    // 0x44b0a8: 0x0  nop
    ctx->pc = 0x44b0a8u;
    // NOP
    // 0x44b0ac: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x44B0ACu;
    {
        const bool branch_taken_0x44b0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44b0ac) {
            ctx->pc = 0x44B0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B0ACu;
            // 0x44b0b0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b098;
        }
    }
    ctx->pc = 0x44B0B4u;
label_44b0b4:
    // 0x44b0b4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x44b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x44b0b8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x44B0B8u;
    {
        const bool branch_taken_0x44b0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b0b8) {
            ctx->pc = 0x44B0E4u;
            goto label_44b0e4;
        }
    }
    ctx->pc = 0x44B0C0u;
    // 0x44b0c0: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x44b0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x44b0c4: 0x0  nop
    ctx->pc = 0x44b0c4u;
    // NOP
label_44b0c8:
    // 0x44b0c8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x44b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x44b0cc: 0x0  nop
    ctx->pc = 0x44b0ccu;
    // NOP
    // 0x44b0d0: 0x0  nop
    ctx->pc = 0x44b0d0u;
    // NOP
    // 0x44b0d4: 0x0  nop
    ctx->pc = 0x44b0d4u;
    // NOP
    // 0x44b0d8: 0x0  nop
    ctx->pc = 0x44b0d8u;
    // NOP
    // 0x44b0dc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x44B0DCu;
    {
        const bool branch_taken_0x44b0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44b0dc) {
            ctx->pc = 0x44B0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B0DCu;
            // 0x44b0e0: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b0c8;
        }
    }
    ctx->pc = 0x44B0E4u;
label_44b0e4:
    // 0x44b0e4: 0x1085001d  beq         $a0, $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x44B0E4u;
    {
        const bool branch_taken_0x44b0e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x44B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B0E4u;
        // 0x44b0e8: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b0e4) {
            ctx->pc = 0x44B15Cu;
            goto label_44b15c;
        }
    }
    ctx->pc = 0x44B0ECu;
    // 0x44b0ec: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x44b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x44b0f0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x44B0F0u;
    {
        const bool branch_taken_0x44b0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B0F0u;
        // 0x44b0f4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b0f0) {
            ctx->pc = 0x44B11Cu;
            goto label_44b11c;
        }
    }
    ctx->pc = 0x44B0F8u;
    // 0x44b0f8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x44b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x44b0fc: 0x0  nop
    ctx->pc = 0x44b0fcu;
    // NOP
label_44b100:
    // 0x44b100: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x44b100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x44b104: 0x0  nop
    ctx->pc = 0x44b104u;
    // NOP
    // 0x44b108: 0x0  nop
    ctx->pc = 0x44b108u;
    // NOP
    // 0x44b10c: 0x0  nop
    ctx->pc = 0x44b10cu;
    // NOP
    // 0x44b110: 0x0  nop
    ctx->pc = 0x44b110u;
    // NOP
    // 0x44b114: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x44B114u;
    {
        const bool branch_taken_0x44b114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44b114) {
            ctx->pc = 0x44B118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B114u;
            // 0x44b118: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b100;
        }
    }
    ctx->pc = 0x44B11Cu;
label_44b11c:
    // 0x44b11c: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x44b11cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x44b120: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x44b120u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x44b124: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x44b124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x44b128: 0x50450009  beql        $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x44B128u;
    {
        const bool branch_taken_0x44b128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x44b128) {
            ctx->pc = 0x44B12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B128u;
            // 0x44b12c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B150u;
            goto label_44b150;
        }
    }
    ctx->pc = 0x44B130u;
label_44b130:
    // 0x44b130: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x44b130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44b134: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x44b134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x44b138: 0x0  nop
    ctx->pc = 0x44b138u;
    // NOP
    // 0x44b13c: 0x0  nop
    ctx->pc = 0x44b13cu;
    // NOP
    // 0x44b140: 0x0  nop
    ctx->pc = 0x44b140u;
    // NOP
    // 0x44b144: 0x1465fffa  bne         $v1, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x44B144u;
    {
        const bool branch_taken_0x44b144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x44B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B144u;
        // 0x44b148: 0x24460008  addiu       $a2, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b144) {
            ctx->pc = 0x44B130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b130;
        }
    }
    ctx->pc = 0x44B14Cu;
    // 0x44b14c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x44b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_44b150:
    // 0x44b150: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x44b150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x44b154: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x44b154u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_44b158:
    // 0x44b158: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x44b158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_44b15c:
    // 0x44b15c: 0x20c102b  sltu        $v0, $s0, $t4
    ctx->pc = 0x44b15cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x44b160: 0x1440ff75  bnez        $v0, . + 4 + (-0x8B << 2)
    ctx->pc = 0x44B160u;
    {
        const bool branch_taken_0x44b160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B160u;
        // 0x44b164: 0x2142018  mult        $a0, $s0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b160) {
            ctx->pc = 0x44AF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44af38;
        }
    }
    ctx->pc = 0x44B168u;
label_44b168:
    // 0x44b168: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x44b168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b16c: 0xb1102b  sltu        $v0, $a1, $s1
    ctx->pc = 0x44b16cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x44b170: 0x1440ff5f  bnez        $v0, . + 4 + (-0xA1 << 2)
    ctx->pc = 0x44B170u;
    {
        const bool branch_taken_0x44b170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B170u;
        // 0x44b174: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b170) {
            ctx->pc = 0x44AEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44aef0;
        }
    }
    ctx->pc = 0x44B178u;
label_44b178:
    // 0x44b178: 0x300a02d  daddu       $s4, $t8, $zero
    ctx->pc = 0x44b178u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b17c: 0x1680ff20  bnez        $s4, . + 4 + (-0xE0 << 2)
    ctx->pc = 0x44B17Cu;
    {
        const bool branch_taken_0x44b17c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B17Cu;
        // 0x44b180: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b17c) {
            ctx->pc = 0x44AE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44ae00;
        }
    }
    ctx->pc = 0x44B184u;
    // 0x44b184: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x44b184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44b188:
    // 0x44b188: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x44b188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x44b18c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x44b18cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x44b190: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x44b190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x44b194: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x44b194u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x44b198: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x44b198u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x44b19c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x44b19cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x44b1a0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x44b1a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44b1a4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x44b1a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44b1a8: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x44b1a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44b1ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44b1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44b1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x44B1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B1B0u;
        // 0x44b1b4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44B1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44B1B8u;
}
