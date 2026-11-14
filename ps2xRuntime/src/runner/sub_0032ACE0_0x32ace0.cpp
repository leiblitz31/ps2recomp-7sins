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

// Function: sub_0032ACE0
// Address: 0x32ace0 - 0x32ae38
void sub_0032ACE0_0x32ace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032ACE0_0x32ace0");
#endif

    switch (ctx->pc) {
        case 0x32ad18u: goto label_32ad18;
        case 0x32ad34u: goto label_32ad34;
        case 0x32ad70u: goto label_32ad70;
        case 0x32adb8u: goto label_32adb8;
        case 0x32adecu: goto label_32adec;
        default: break;
    }

    ctx->pc = 0x32ace0u;

    // 0x32ace0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32ace0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x32ace4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x32ace4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x32ace8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x32ace8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x32acec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x32acecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x32acf0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32acf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32acf4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x32acf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x32acf8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x32acf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x32acfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32acfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32ad00: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x32ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x32ad04: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x32AD04u;
    {
        const bool branch_taken_0x32ad04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD04u;
        // 0x32ad08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad04) {
            ctx->pc = 0x32AD54u;
            goto label_32ad54;
        }
    }
    ctx->pc = 0x32AD0Cu;
    // 0x32ad0c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x32ad0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ad10: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x32ad10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ad14: 0x0  nop
    ctx->pc = 0x32ad14u;
    // NOP
label_32ad18:
    // 0x32ad18: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x32ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x32ad1c: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x32ad1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x32ad20: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x32ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32ad24: 0x54740007  bnel        $v1, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x32AD24u;
    {
        const bool branch_taken_0x32ad24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x32ad24) {
            ctx->pc = 0x32AD28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AD24u;
            // 0x32ad28: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AD44u;
            goto label_32ad44;
        }
    }
    ctx->pc = 0x32AD2Cu;
    // 0x32ad2c: 0xc0cac08  jal         func_32B020
    ctx->pc = 0x32AD2Cu;
    SET_GPR_U32(ctx, 31, 0x32AD34u);
    ctx->pc = 0x32AD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AD2Cu;
    // 0x32ad30: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B020u, 0x32AD2Cu, 0x32AD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AD34u;
label_32ad34:
    // 0x32ad34: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x32ad34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32ad38: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x32ad38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x32ad3c: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x32ad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x32ad40: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x32ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_32ad44:
    // 0x32ad44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32ad44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32ad48: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x32ad48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x32ad4c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x32AD4Cu;
    {
        const bool branch_taken_0x32ad4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD4Cu;
        // 0x32ad50: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad4c) {
            ctx->pc = 0x32AD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32ad18;
        }
    }
    ctx->pc = 0x32AD54u;
label_32ad54:
    // 0x32ad54: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x32ad54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x32ad58: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32ad58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ad5c: 0x10e0002a  beqz        $a3, . + 4 + (0x2A << 2)
    ctx->pc = 0x32AD5Cu;
    {
        const bool branch_taken_0x32ad5c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD5Cu;
        // 0x32ad60: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad5c) {
            ctx->pc = 0x32AE08u;
            goto label_32ae08;
        }
    }
    ctx->pc = 0x32AD64u;
    // 0x32ad64: 0x24130014  addiu       $s3, $zero, 0x14
    ctx->pc = 0x32ad64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x32ad68: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x32ad68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32ad6c: 0x0  nop
    ctx->pc = 0x32ad6cu;
    // NOP
label_32ad70:
    // 0x32ad70: 0x2332018  mult        $a0, $s1, $s3
    ctx->pc = 0x32ad70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x32ad74: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x32ad74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x32ad78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32ad78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32ad7c: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x32ad7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32ad80: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x32ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32ad84: 0x1454001c  bne         $v0, $s4, . + 4 + (0x1C << 2)
    ctx->pc = 0x32AD84u;
    {
        const bool branch_taken_0x32ad84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x32AD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD84u;
        // 0x32ad88: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad84) {
            ctx->pc = 0x32ADF8u;
            goto label_32adf8;
        }
    }
    ctx->pc = 0x32AD8Cu;
    // 0x32ad8c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x32ad8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32ad90: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x32AD90u;
    {
        const bool branch_taken_0x32ad90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD90u;
        // 0x32ad94: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad90) {
            ctx->pc = 0x32ADE0u;
            goto label_32ade0;
        }
    }
    ctx->pc = 0x32AD98u;
    // 0x32ad98: 0x10e00012  beqz        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x32AD98u;
    {
        const bool branch_taken_0x32ad98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD98u;
        // 0x32ad9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad98) {
            ctx->pc = 0x32ADE4u;
            goto label_32ade4;
        }
    }
    ctx->pc = 0x32ADA0u;
    // 0x32ada0: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x32ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x32ada4: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32ADA4u;
    {
        const bool branch_taken_0x32ada4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x32ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADA4u;
        // 0x32ada8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ada4) {
            ctx->pc = 0x32ADB8u;
            goto label_32adb8;
        }
    }
    ctx->pc = 0x32ADACu;
    // 0x32adac: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x32adacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x32adb0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32ADB0u;
    {
        const bool branch_taken_0x32adb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADB0u;
        // 0x32adb4: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32adb0) {
            ctx->pc = 0x32ADE4u;
            goto label_32ade4;
        }
    }
    ctx->pc = 0x32ADB8u;
label_32adb8:
    // 0x32adb8: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x32adb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x32adbc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32ADBCu;
    {
        const bool branch_taken_0x32adbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADBCu;
        // 0x32adc0: 0xb31018  mult        $v0, $a1, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32adbc) {
            ctx->pc = 0x32ADE4u;
            goto label_32ade4;
        }
    }
    ctx->pc = 0x32ADC4u;
    // 0x32adc4: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x32adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x32adc8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x32adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x32adcc: 0x14c2fffa  bne         $a2, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32ADCCu;
    {
        const bool branch_taken_0x32adcc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x32ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADCCu;
        // 0x32add0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32adcc) {
            ctx->pc = 0x32ADB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32adb8;
        }
    }
    ctx->pc = 0x32ADD4u;
    // 0x32add4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x32add4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x32add8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32ADD8u;
    {
        const bool branch_taken_0x32add8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADD8u;
        // 0x32addc: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32add8) {
            ctx->pc = 0x32ADE4u;
            goto label_32ade4;
        }
    }
    ctx->pc = 0x32ADE0u;
label_32ade0:
    // 0x32ade0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x32ade0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_32ade4:
    // 0x32ade4: 0xc0cac94  jal         func_32B250
    ctx->pc = 0x32ADE4u;
    SET_GPR_U32(ctx, 31, 0x32ADECu);
    ctx->pc = 0x32B250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B250u, 0x32ADE4u, 0x32ADECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ADECu;
label_32adec:
    // 0x32adec: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x32adecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32adf0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x32adf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x32adf4: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x32adf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_32adf8:
    // 0x32adf8: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x32adf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x32adfc: 0x227102b  sltu        $v0, $s1, $a3
    ctx->pc = 0x32adfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x32ae00: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x32AE00u;
    {
        const bool branch_taken_0x32ae00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32AE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE00u;
        // 0x32ae04: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ae00) {
            ctx->pc = 0x32AD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32ad70;
        }
    }
    ctx->pc = 0x32AE08u;
label_32ae08:
    // 0x32ae08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ae0c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x32ae0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ae10: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x32ae10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x32ae14: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x32ae14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32ae18: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x32ae18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32ae1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x32ae1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32ae20: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x32ae20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32ae24: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x32ae24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ae28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32ae28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ae2c: 0x3e00008  jr          $ra
    ctx->pc = 0x32AE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE2Cu;
        // 0x32ae30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AE34u;
    // 0x32ae34: 0x0  nop
    ctx->pc = 0x32ae34u;
    // NOP
    ctx->pc = 0x32ae38u;
}
