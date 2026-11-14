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

// Function: sub_0040AC50
// Address: 0x40ac50 - 0x40af08
void sub_0040AC50_0x40ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040AC50_0x40ac50");
#endif

    switch (ctx->pc) {
        case 0x40ac80u: goto label_40ac80;
        case 0x40ad10u: goto label_40ad10;
        case 0x40ae30u: goto label_40ae30;
        default: break;
    }

    ctx->pc = 0x40ac50u;

    // 0x40ac50: 0xaca7007c  sw          $a3, 0x7C($a1)
    ctx->pc = 0x40ac50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 7));
    // 0x40ac54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x40ac54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ac58: 0xaca70080  sw          $a3, 0x80($a1)
    ctx->pc = 0x40ac58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 7));
    // 0x40ac5c: 0xaca00088  sw          $zero, 0x88($a1)
    ctx->pc = 0x40ac5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 0));
    // 0x40ac60: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x40ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x40ac64: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x40ac64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x40ac68: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x40ac68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x40ac6c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x40AC6Cu;
    {
        const bool branch_taken_0x40ac6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40AC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AC6Cu;
        // 0x40ac70: 0xaca60078  sw          $a2, 0x78($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ac6c) {
            ctx->pc = 0x40ACBCu;
            goto label_40acbc;
        }
    }
    ctx->pc = 0x40AC74u;
    // 0x40ac74: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x40ac74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x40ac78: 0x24430006  addiu       $v1, $v0, 0x6
    ctx->pc = 0x40ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x40ac7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40ac7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40ac80:
    // 0x40ac80: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x40ac80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x40ac84: 0x54470009  bnel        $v0, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x40AC84u;
    {
        const bool branch_taken_0x40ac84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x40ac84) {
            ctx->pc = 0x40AC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40AC84u;
            // 0x40ac88: 0x8c820030  lw          $v0, 0x30($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40ACACu;
            goto label_40acac;
        }
    }
    ctx->pc = 0x40AC8Cu;
    // 0x40ac8c: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x40ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x40ac90: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x40ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x40ac94: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x40ac94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x40ac98: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x40ac98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x40ac9c: 0x8ca20088  lw          $v0, 0x88($a1)
    ctx->pc = 0x40ac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x40aca0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x40aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x40aca4: 0xaca20088  sw          $v0, 0x88($a1)
    ctx->pc = 0x40aca4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 2));
    // 0x40aca8: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x40aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_40acac:
    // 0x40acac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x40acacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x40acb0: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x40acb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x40acb4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x40ACB4u;
    {
        const bool branch_taken_0x40acb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ACB4u;
        // 0x40acb8: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40acb4) {
            ctx->pc = 0x40AC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40ac80;
        }
    }
    ctx->pc = 0x40ACBCu;
label_40acbc:
    // 0x40acbc: 0x3e00008  jr          $ra
    ctx->pc = 0x40ACBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ACBCu;
        // 0x40acc0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40ACBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40ACC4u;
    // 0x40acc4: 0x0  nop
    ctx->pc = 0x40acc4u;
    // NOP
    // 0x40acc8: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x40acc8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40accc: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x40acccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x40acd0: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x40acd0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x40acd4: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x40acd4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x40acd8: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x40acd8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x40acdc: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x40acdcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x40ace0: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x40ace0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
    // 0x40ace4: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x40ace4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
    // 0x40ace8: 0xad00001c  sw          $zero, 0x1C($t0)
    ctx->pc = 0x40ace8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
    // 0x40acec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x40acecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x40acf0: 0x244fe390  addiu       $t7, $v0, -0x1C70
    ctx->pc = 0x40acf0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960016));
    // 0x40acf4: 0x8cad0010  lw          $t5, 0x10($a1)
    ctx->pc = 0x40acf4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x40acf8: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x40acf8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40acfc: 0x24190001  addiu       $t9, $zero, 0x1
    ctx->pc = 0x40acfcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40ad00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x40ad00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ad04: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x40ad04u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ad08: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x40ad08u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ad0c: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x40ad0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_40ad10:
    // 0x40ad10: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x40ad10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x40ad14: 0x62942  srl         $a1, $a2, 5
    ctx->pc = 0x40ad14u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x40ad18: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x40ad18u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x40ad1c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x40ad1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x40ad20: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x40ad20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x40ad24: 0x30c2001f  andi        $v0, $a2, 0x1F
    ctx->pc = 0x40ad24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x40ad28: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x40ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40ad2c: 0x591004  sllv        $v0, $t9, $v0
    ctx->pc = 0x40ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 2) & 0x1F));
    // 0x40ad30: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x40ad30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x40ad34: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x40ad34u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x40ad38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x40ad38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x40ad3c: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x40ad3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x40ad40: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x40ad40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x40ad44: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x40ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x40ad48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x40ad48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x40ad4c: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x40AD4Cu;
    {
        const bool branch_taken_0x40ad4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AD4Cu;
        // 0x40ad50: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ad4c) {
            ctx->pc = 0x40AEE8u;
            goto label_40aee8;
        }
    }
    ctx->pc = 0x40AD54u;
    // 0x40ad54: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x40ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x40ad58: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x40ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x40ad5c: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x40ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x40ad60: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x40ad60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x40ad64: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x40ad64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x40ad68: 0x5460005c  bnel        $v1, $zero, . + 4 + (0x5C << 2)
    ctx->pc = 0x40AD68u;
    {
        const bool branch_taken_0x40ad68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x40ad68) {
            ctx->pc = 0x40AD6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40AD68u;
            // 0x40ad6c: 0x254afffc  addiu       $t2, $t2, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40AEDCu;
            goto label_40aedc;
        }
    }
    ctx->pc = 0x40AD70u;
    // 0x40ad70: 0x11200059  beqz        $t1, . + 4 + (0x59 << 2)
    ctx->pc = 0x40AD70u;
    {
        const bool branch_taken_0x40ad70 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x40AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AD70u;
        // 0x40ad74: 0x91023  negu        $v0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ad70) {
            ctx->pc = 0x40AED8u;
            goto label_40aed8;
        }
    }
    ctx->pc = 0x40AD78u;
    // 0x40ad78: 0x16f2021  addu        $a0, $t3, $t7
    ctx->pc = 0x40ad78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x40ad7c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x40ad7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x40ad80: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x40AD80u;
    {
        const bool branch_taken_0x40ad80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AD80u;
        // 0x40ad84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ad80) {
            ctx->pc = 0x40AE28u;
            goto label_40ae28;
        }
    }
    ctx->pc = 0x40AD88u;
    // 0x40ad88: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x40ad88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x40ad8c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x40AD8Cu;
    {
        const bool branch_taken_0x40ad8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AD8Cu;
        // 0x40ad90: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ad8c) {
            ctx->pc = 0x40ADF4u;
            goto label_40adf4;
        }
    }
    ctx->pc = 0x40AD94u;
    // 0x40ad94: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x40AD94u;
    {
        const bool branch_taken_0x40ad94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40AD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AD94u;
        // 0x40ad98: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ad94) {
            ctx->pc = 0x40ADC8u;
            goto label_40adc8;
        }
    }
    ctx->pc = 0x40AD9Cu;
    // 0x40ad9c: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x40ad9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x40ada0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x40ada0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ada4: 0x258cfffc  addiu       $t4, $t4, -0x4
    ctx->pc = 0x40ada4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
    // 0x40ada8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x40ada8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40adac: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x40adacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x40adb0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x40adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x40adb4: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x40adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x40adb8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x40adbc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40adbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x40adc0: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x40ADC0u;
    {
        const bool branch_taken_0x40adc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ADC0u;
        // 0x40adc4: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40adc0) {
            ctx->pc = 0x40AED8u;
            goto label_40aed8;
        }
    }
    ctx->pc = 0x40ADC8u;
label_40adc8:
    // 0x40adc8: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x40adc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x40adcc: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x40adccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x40add0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x40add0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40add4: 0x258cfffc  addiu       $t4, $t4, -0x4
    ctx->pc = 0x40add4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
    // 0x40add8: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x40add8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x40addc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x40addcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x40ade0: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x40ade0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x40ade4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x40ade8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40ade8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x40adec: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x40ADECu;
    {
        const bool branch_taken_0x40adec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ADECu;
        // 0x40adf0: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40adec) {
            ctx->pc = 0x40AED8u;
            goto label_40aed8;
        }
    }
    ctx->pc = 0x40ADF4u;
label_40adf4:
    // 0x40adf4: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x40adf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x40adf8: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x40adf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x40adfc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x40adfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40ae00: 0x258cfffc  addiu       $t4, $t4, -0x4
    ctx->pc = 0x40ae00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
    // 0x40ae04: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x40ae04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x40ae08: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x40ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x40ae0c: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x40ae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x40ae10: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x40ae14: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40ae14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x40ae18: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x40AE18u;
    {
        const bool branch_taken_0x40ae18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AE18u;
        // 0x40ae1c: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ae18) {
            ctx->pc = 0x40AED8u;
            goto label_40aed8;
        }
    }
    ctx->pc = 0x40AE20u;
    // 0x40ae20: 0x5120002e  beql        $t1, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x40AE20u;
    {
        const bool branch_taken_0x40ae20 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x40ae20) {
            ctx->pc = 0x40AE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40AE20u;
            // 0x40ae24: 0x254afffc  addiu       $t2, $t2, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40AEDCu;
            goto label_40aedc;
        }
    }
    ctx->pc = 0x40AE28u;
label_40ae28:
    // 0x40ae28: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x40ae28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ae2c: 0x8c83fffc  lw          $v1, -0x4($a0)
    ctx->pc = 0x40ae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
label_40ae30:
    // 0x40ae30: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x40ae30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x40ae34: 0x258cfffc  addiu       $t4, $t4, -0x4
    ctx->pc = 0x40ae34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
    // 0x40ae38: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x40ae38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x40ae3c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x40ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x40ae40: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x40ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x40ae44: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x40ae48: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40ae48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x40ae4c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x40AE4Cu;
    {
        const bool branch_taken_0x40ae4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AE4Cu;
        // 0x40ae50: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ae4c) {
            ctx->pc = 0x40AED8u;
            goto label_40aed8;
        }
    }
    ctx->pc = 0x40AE54u;
    // 0x40ae54: 0x8c83fff8  lw          $v1, -0x8($a0)
    ctx->pc = 0x40ae54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
    // 0x40ae58: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x40ae58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x40ae5c: 0x258cfffc  addiu       $t4, $t4, -0x4
    ctx->pc = 0x40ae5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
    // 0x40ae60: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x40ae60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x40ae64: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x40ae64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x40ae68: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x40ae68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x40ae6c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x40ae70: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40ae70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x40ae74: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x40AE74u;
    {
        const bool branch_taken_0x40ae74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40AE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AE74u;
        // 0x40ae78: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ae74) {
            ctx->pc = 0x40AED8u;
            goto label_40aed8;
        }
    }
    ctx->pc = 0x40AE7Cu;
    // 0x40ae7c: 0x8c83fff4  lw          $v1, -0xC($a0)
    ctx->pc = 0x40ae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967284)));
    // 0x40ae80: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x40ae80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x40ae84: 0x258cfffc  addiu       $t4, $t4, -0x4
    ctx->pc = 0x40ae84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
    // 0x40ae88: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x40ae88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x40ae8c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x40ae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x40ae90: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x40ae90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x40ae94: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x40ae98: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40ae98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x40ae9c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x40AE9Cu;
    {
        const bool branch_taken_0x40ae9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AE9Cu;
        // 0x40aea0: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ae9c) {
            ctx->pc = 0x40AED8u;
            goto label_40aed8;
        }
    }
    ctx->pc = 0x40AEA4u;
    // 0x40aea4: 0x2484fff0  addiu       $a0, $a0, -0x10
    ctx->pc = 0x40aea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x40aea8: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x40aea8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x40aeac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x40aeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40aeb0: 0x258cfffc  addiu       $t4, $t4, -0x4
    ctx->pc = 0x40aeb0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
    // 0x40aeb4: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x40aeb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x40aeb8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x40aeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x40aebc: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x40aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x40aec0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x40aec4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40aec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x40aec8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x40AEC8u;
    {
        const bool branch_taken_0x40aec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AEC8u;
        // 0x40aecc: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40aec8) {
            ctx->pc = 0x40AED8u;
            goto label_40aed8;
        }
    }
    ctx->pc = 0x40AED0u;
    // 0x40aed0: 0x5520ffd7  bnel        $t1, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x40AED0u;
    {
        const bool branch_taken_0x40aed0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x40aed0) {
            ctx->pc = 0x40AED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40AED0u;
            // 0x40aed4: 0x8c83fffc  lw          $v1, -0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40AE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40ae30;
        }
    }
    ctx->pc = 0x40AED8u;
label_40aed8:
    // 0x40aed8: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x40aed8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
label_40aedc:
    // 0x40aedc: 0x258cfffc  addiu       $t4, $t4, -0x4
    ctx->pc = 0x40aedcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
    // 0x40aee0: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x40aee0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x40aee4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x40aee4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_40aee8:
    // 0x40aee8: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x40aee8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x40aeec: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x40aeecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x40aef0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x40aef0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x40aef4: 0x1520ff86  bnez        $t1, . + 4 + (-0x7A << 2)
    ctx->pc = 0x40AEF4u;
    {
        const bool branch_taken_0x40aef4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x40AEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AEF4u;
        // 0x40aef8: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40aef4) {
            ctx->pc = 0x40AD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40ad10;
        }
    }
    ctx->pc = 0x40AEFCu;
    // 0x40aefc: 0xacee0000  sw          $t6, 0x0($a3)
    ctx->pc = 0x40aefcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 14));
    // 0x40af00: 0x3e00008  jr          $ra
    ctx->pc = 0x40AF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AF00u;
        // 0x40af04: 0x300102d  daddu       $v0, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40AF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40AF08u;
}
