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

// Function: sub_002EBE48
// Address: 0x2ebe48 - 0x2ebfe0
void sub_002EBE48_0x2ebe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBE48_0x2ebe48");
#endif

    switch (ctx->pc) {
        case 0x2ebf00u: goto label_2ebf00;
        case 0x2ebf28u: goto label_2ebf28;
        case 0x2ebf3cu: goto label_2ebf3c;
        case 0x2ebf58u: goto label_2ebf58;
        case 0x2ebfc0u: goto label_2ebfc0;
        default: break;
    }

    ctx->pc = 0x2ebe48u;

label_2ebe48:
    // 0x2ebe48: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x2ebe48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ebe4c: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x2ebe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x2ebe50: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EBE50u;
    {
        const bool branch_taken_0x2ebe50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EBE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE50u;
        // 0x2ebe54: 0x28620073  slti        $v0, $v1, 0x73 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)115) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe50) {
            ctx->pc = 0x2EBE88u;
            goto label_2ebe88;
        }
    }
    ctx->pc = 0x2EBE58u;
    // 0x2ebe58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EBE58u;
    {
        const bool branch_taken_0x2ebe58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE58u;
        // 0x2ebe5c: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe58) {
            ctx->pc = 0x2EBE78u;
            goto label_2ebe78;
        }
    }
    ctx->pc = 0x2EBE60u;
    // 0x2ebe60: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x2ebe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x2ebe64: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EBE64u;
    {
        const bool branch_taken_0x2ebe64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EBE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE64u;
        // 0x2ebe68: 0x24080108  addiu       $t0, $zero, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe64) {
            ctx->pc = 0x2EBEA8u;
            goto label_2ebea8;
        }
    }
    ctx->pc = 0x2EBE6Cu;
    // 0x2ebe6c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2EBE6Cu;
    {
        const bool branch_taken_0x2ebe6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE6Cu;
        // 0x2ebe70: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe6c) {
            ctx->pc = 0x2EBEB8u;
            goto label_2ebeb8;
        }
    }
    ctx->pc = 0x2EBE74u;
    // 0x2ebe74: 0x0  nop
    ctx->pc = 0x2ebe74u;
    // NOP
label_2ebe78:
    // 0x2ebe78: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EBE78u;
    {
        const bool branch_taken_0x2ebe78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EBE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE78u;
        // 0x2ebe7c: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe78) {
            ctx->pc = 0x2EBE98u;
            goto label_2ebe98;
        }
    }
    ctx->pc = 0x2EBE80u;
    // 0x2ebe80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2EBE80u;
    {
        const bool branch_taken_0x2ebe80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE80u;
        // 0x2ebe84: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe80) {
            ctx->pc = 0x2EBEB8u;
            goto label_2ebeb8;
        }
    }
    ctx->pc = 0x2EBE88u;
label_2ebe88:
    // 0x2ebe88: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2ebe88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ebe8c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ebe8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe90: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2EBE90u;
    {
        const bool branch_taken_0x2ebe90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE90u;
        // 0x2ebe94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe90) {
            ctx->pc = 0x2EBEC8u;
            goto label_2ebec8;
        }
    }
    ctx->pc = 0x2EBE98u;
label_2ebe98:
    // 0x2ebe98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ebe98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebe9c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EBE9Cu;
    {
        const bool branch_taken_0x2ebe9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE9Cu;
        // 0x2ebea0: 0x24070600  addiu       $a3, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe9c) {
            ctx->pc = 0x2EBEC8u;
            goto label_2ebec8;
        }
    }
    ctx->pc = 0x2EBEA4u;
    // 0x2ebea4: 0x0  nop
    ctx->pc = 0x2ebea4u;
    // NOP
label_2ebea8:
    // 0x2ebea8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ebea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebeac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBEACu;
    {
        const bool branch_taken_0x2ebeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEACu;
        // 0x2ebeb0: 0x24070208  addiu       $a3, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebeac) {
            ctx->pc = 0x2EBEC8u;
            goto label_2ebec8;
        }
    }
    ctx->pc = 0x2EBEB4u;
    // 0x2ebeb4: 0x0  nop
    ctx->pc = 0x2ebeb4u;
    // NOP
label_2ebeb8:
    // 0x2ebeb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ebeb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebebc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEBCu;
        // 0x2ebec0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBEC4u;
    // 0x2ebec4: 0x0  nop
    ctx->pc = 0x2ebec4u;
    // NOP
label_2ebec8:
    // 0x2ebec8: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x2ebec8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2ebecc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EBECCu;
    {
        const bool branch_taken_0x2ebecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBECCu;
        // 0x2ebed0: 0x2404002b  addiu       $a0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebecc) {
            ctx->pc = 0x2EBEF0u;
            goto label_2ebef0;
        }
    }
    ctx->pc = 0x2EBED4u;
    // 0x2ebed4: 0x50440005  beql        $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EBED4u;
    {
        const bool branch_taken_0x2ebed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ebed4) {
            ctx->pc = 0x2EBED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBED4u;
            // 0x2ebed8: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBEECu;
            goto label_2ebeec;
        }
    }
    ctx->pc = 0x2EBEDCu;
    // 0x2ebedc: 0x80a20002  lb          $v0, 0x2($a1)
    ctx->pc = 0x2ebedcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2ebee0: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBEE0u;
    {
        const bool branch_taken_0x2ebee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2EBEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEE0u;
        // 0x2ebee4: 0x671825  or          $v1, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebee0) {
            ctx->pc = 0x2EBEF4u;
            goto label_2ebef4;
        }
    }
    ctx->pc = 0x2EBEE8u;
    // 0x2ebee8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x2ebee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2ebeec:
    // 0x2ebeec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ebeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ebef0:
    // 0x2ebef0: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x2ebef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_2ebef4:
    // 0x2ebef4: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2ebef4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebef8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEF8u;
        // 0x2ebefc: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBF00u;
label_2ebf00:
    // 0x2ebf00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ebf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ebf04: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ebf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ebf08: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ebf08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf0c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2ebf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf10: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2ebf10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf14: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ebf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ebf18: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2ebf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2ebf1c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2ebf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2ebf20: 0xc0baf92  jal         func_2EBE48
    ctx->pc = 0x2EBF20u;
    SET_GPR_U32(ctx, 31, 0x2EBF28u);
    ctx->pc = 0x2EBF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBF20u;
    // 0x2ebf24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBE48u;
    goto label_2ebe48;
    ctx->pc = 0x2EBF28u;
label_2ebf28:
    // 0x2ebf28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ebf28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf2c: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2EBF2Cu;
    {
        const bool branch_taken_0x2ebf2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF2Cu;
        // 0x2ebf30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebf2c) {
            ctx->pc = 0x2EBFC4u;
            goto label_2ebfc4;
        }
    }
    ctx->pc = 0x2EBF34u;
    // 0x2ebf34: 0xc0baf20  jal         func_2EBC80
    ctx->pc = 0x2EBF34u;
    SET_GPR_U32(ctx, 31, 0x2EBF3Cu);
    ctx->pc = 0x2EBC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBC80u, 0x2EBF34u, 0x2EBF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBF3Cu;
label_2ebf3c:
    // 0x2ebf3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ebf3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ebf40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf44: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2EBF44u;
    {
        const bool branch_taken_0x2ebf44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF44u;
        // 0x2ebf48: 0x240701b6  addiu       $a3, $zero, 0x1B6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 438));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebf44) {
            ctx->pc = 0x2EBFC4u;
            goto label_2ebfc4;
        }
    }
    ctx->pc = 0x2EBF4Cu;
    // 0x2ebf4c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2ebf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ebf50: 0xc0bbc50  jal         func_2EF140
    ctx->pc = 0x2EBF50u;
    SET_GPR_U32(ctx, 31, 0x2EBF58u);
    ctx->pc = 0x2EBF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBF50u;
    // 0x2ebf54: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF140u, 0x2EBF50u, 0x2EBF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBF58u;
label_2ebf58:
    // 0x2ebf58: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2ebf58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2ebf5c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ebf5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ebf60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf64: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x2ebf64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x2ebf68: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2ebf68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2ebf6c: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x2ebf6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x2ebf70: 0x246310c8  addiu       $v1, $v1, 0x10C8
    ctx->pc = 0x2ebf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4296));
    // 0x2ebf74: 0x24841130  addiu       $a0, $a0, 0x1130
    ctx->pc = 0x2ebf74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4400));
    // 0x2ebf78: 0x24a511b0  addiu       $a1, $a1, 0x11B0
    ctx->pc = 0x2ebf78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4528));
    // 0x2ebf7c: 0x24c61218  addiu       $a2, $a2, 0x1218
    ctx->pc = 0x2ebf7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4632));
    // 0x2ebf80: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EBF80u;
    {
        const bool branch_taken_0x2ebf80 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x2EBF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF80u;
        // 0x2ebf84: 0x32280100  andi        $t0, $s1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebf80) {
            ctx->pc = 0x2EBF90u;
            goto label_2ebf90;
        }
    }
    ctx->pc = 0x2EBF88u;
    // 0x2ebf88: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2EBF88u;
    {
        const bool branch_taken_0x2ebf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF88u;
        // 0x2ebf8c: 0xa600000c  sh          $zero, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebf88) {
            ctx->pc = 0x2EBFC4u;
            goto label_2ebfc4;
        }
    }
    ctx->pc = 0x2EBF90u;
label_2ebf90:
    // 0x2ebf90: 0xa607000e  sh          $a3, 0xE($s0)
    ctx->pc = 0x2ebf90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 7));
    // 0x2ebf94: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2ebf94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x2ebf98: 0xae040024  sw          $a0, 0x24($s0)
    ctx->pc = 0x2ebf98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x2ebf9c: 0xae050028  sw          $a1, 0x28($s0)
    ctx->pc = 0x2ebf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
    // 0x2ebfa0: 0xae06002c  sw          $a2, 0x2C($s0)
    ctx->pc = 0x2ebfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 6));
    // 0x2ebfa4: 0xa611000c  sh          $s1, 0xC($s0)
    ctx->pc = 0x2ebfa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 17));
    // 0x2ebfa8: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EBFA8u;
    {
        const bool branch_taken_0x2ebfa8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBFA8u;
        // 0x2ebfac: 0xae10001c  sw          $s0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebfa8) {
            ctx->pc = 0x2EBFC0u;
            goto label_2ebfc0;
        }
    }
    ctx->pc = 0x2EBFB0u;
    // 0x2ebfb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebfb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ebfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebfb8: 0xc0bb17a  jal         func_2EC5E8
    ctx->pc = 0x2EBFB8u;
    SET_GPR_U32(ctx, 31, 0x2EBFC0u);
    ctx->pc = 0x2EBFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBFB8u;
    // 0x2ebfbc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC5E8u, 0x2EBFB8u, 0x2EBFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBFC0u;
label_2ebfc0:
    // 0x2ebfc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ebfc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ebfc4:
    // 0x2ebfc4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ebfc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebfc8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2ebfc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ebfcc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ebfccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebfd0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2ebfd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ebfd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBFD4u;
        // 0x2ebfd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBFDCu;
    // 0x2ebfdc: 0x0  nop
    ctx->pc = 0x2ebfdcu;
    // NOP
    ctx->pc = 0x2ebfe0u;
}
