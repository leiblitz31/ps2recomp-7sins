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

// Function: sub_0037FA88
// Address: 0x37fa88 - 0x37fbb8
void sub_0037FA88_0x37fa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037FA88_0x37fa88");
#endif

    switch (ctx->pc) {
        case 0x37fb38u: goto label_37fb38;
        default: break;
    }

    ctx->pc = 0x37fa88u;

    // 0x37fa88: 0x8f82a8f8  lw          $v0, -0x5708($gp)
    ctx->pc = 0x37fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945016)));
    // 0x37fa8c: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x37fa8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x37fa90: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x37fa90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x37fa94: 0x10c00044  beqz        $a2, . + 4 + (0x44 << 2)
    ctx->pc = 0x37FA94u;
    {
        const bool branch_taken_0x37fa94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FA94u;
        // 0x37fa98: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fa94) {
            ctx->pc = 0x37FBA8u;
            goto label_37fba8;
        }
    }
    ctx->pc = 0x37FA9Cu;
    // 0x37fa9c: 0x8ca80100  lw          $t0, 0x100($a1)
    ctx->pc = 0x37fa9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
    // 0x37faa0: 0x3c0338e3  lui         $v1, 0x38E3
    ctx->pc = 0x37faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14563 << 16));
    // 0x37faa4: 0x34638e39  ori         $v1, $v1, 0x8E39
    ctx->pc = 0x37faa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36409);
    // 0x37faa8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37faa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37faac: 0x8d020058  lw          $v0, 0x58($t0)
    ctx->pc = 0x37faacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x37fab0: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x37fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x37fab4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x37fab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37fab8: 0x10c00032  beqz        $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x37FAB8u;
    {
        const bool branch_taken_0x37fab8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FAB8u;
        // 0x37fabc: 0x22943  sra         $a1, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fab8) {
            ctx->pc = 0x37FB84u;
            goto label_37fb84;
        }
    }
    ctx->pc = 0x37FAC0u;
    // 0x37fac0: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x37fac0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x37fac4: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x37fac4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fac8: 0x31430003  andi        $v1, $t2, 0x3
    ctx->pc = 0x37fac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x37facc: 0x19400012  blez        $t2, . + 4 + (0x12 << 2)
    ctx->pc = 0x37FACCu;
    {
        const bool branch_taken_0x37facc = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x37FAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FACCu;
        // 0x37fad0: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37facc) {
            ctx->pc = 0x37FB18u;
            goto label_37fb18;
        }
    }
    ctx->pc = 0x37FAD4u;
    // 0x37fad4: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x37FAD4u;
    {
        const bool branch_taken_0x37fad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FAD4u;
        // 0x37fad8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fad4) {
            ctx->pc = 0x37FB34u;
            goto label_37fb34;
        }
    }
    ctx->pc = 0x37FADCu;
    // 0x37fadc: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x37FADCu;
    {
        const bool branch_taken_0x37fadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37fadc) {
            ctx->pc = 0x37FAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FADCu;
            // 0x37fae0: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FB1Cu;
            goto label_37fb1c;
        }
    }
    ctx->pc = 0x37FAE4u;
    // 0x37fae4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x37fae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37fae8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x37FAE8u;
    {
        const bool branch_taken_0x37fae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37fae8) {
            ctx->pc = 0x37FAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FAE8u;
            // 0x37faec: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FB08u;
            goto label_37fb08;
        }
    }
    ctx->pc = 0x37FAF0u;
    // 0x37faf0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x37faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x37faf4: 0x10480024  beq         $v0, $t0, . + 4 + (0x24 << 2)
    ctx->pc = 0x37FAF4u;
    {
        const bool branch_taken_0x37faf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x37faf4) {
            ctx->pc = 0x37FB88u;
            goto label_37fb88;
        }
    }
    ctx->pc = 0x37FAFCu;
    // 0x37fafc: 0x24e60014  addiu       $a2, $a3, 0x14
    ctx->pc = 0x37fafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x37fb00: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x37fb00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37fb04: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x37fb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_37fb08:
    // 0x37fb08: 0x1048001f  beq         $v0, $t0, . + 4 + (0x1F << 2)
    ctx->pc = 0x37FB08u;
    {
        const bool branch_taken_0x37fb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x37fb08) {
            ctx->pc = 0x37FB88u;
            goto label_37fb88;
        }
    }
    ctx->pc = 0x37FB10u;
    // 0x37fb10: 0x24c60014  addiu       $a2, $a2, 0x14
    ctx->pc = 0x37fb10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x37fb14: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x37fb14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_37fb18:
    // 0x37fb18: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x37fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_37fb1c:
    // 0x37fb1c: 0x1048001a  beq         $v0, $t0, . + 4 + (0x1A << 2)
    ctx->pc = 0x37FB1Cu;
    {
        const bool branch_taken_0x37fb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x37fb1c) {
            ctx->pc = 0x37FB88u;
            goto label_37fb88;
        }
    }
    ctx->pc = 0x37FB24u;
    // 0x37fb24: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x37fb24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x37fb28: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x37fb28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x37fb2c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x37FB2Cu;
    {
        const bool branch_taken_0x37fb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FB2Cu;
        // 0x37fb30: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fb2c) {
            ctx->pc = 0x37FB84u;
            goto label_37fb84;
        }
    }
    ctx->pc = 0x37FB34u;
label_37fb34:
    // 0x37fb34: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x37fb34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37fb38:
    // 0x37fb38: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x37fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x37fb3c: 0x10480012  beq         $v0, $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x37FB3Cu;
    {
        const bool branch_taken_0x37fb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x37fb3c) {
            ctx->pc = 0x37FB88u;
            goto label_37fb88;
        }
    }
    ctx->pc = 0x37FB44u;
    // 0x37fb44: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x37fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x37fb48: 0x10480007  beq         $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37FB48u;
    {
        const bool branch_taken_0x37fb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x37FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FB48u;
        // 0x37fb4c: 0x24c30014  addiu       $v1, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fb48) {
            ctx->pc = 0x37FB68u;
            goto label_37fb68;
        }
    }
    ctx->pc = 0x37FB50u;
    // 0x37fb50: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x37fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x37fb54: 0x10480004  beq         $v0, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37FB54u;
    {
        const bool branch_taken_0x37fb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x37FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FB54u;
        // 0x37fb58: 0x24c30028  addiu       $v1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fb54) {
            ctx->pc = 0x37FB68u;
            goto label_37fb68;
        }
    }
    ctx->pc = 0x37FB5Cu;
    // 0x37fb5c: 0x8ce2003c  lw          $v0, 0x3C($a3)
    ctx->pc = 0x37fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x37fb60: 0x14480003  bne         $v0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37FB60u;
    {
        const bool branch_taken_0x37fb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x37FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FB60u;
        // 0x37fb64: 0x24c3003c  addiu       $v1, $a2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fb60) {
            ctx->pc = 0x37FB70u;
            goto label_37fb70;
        }
    }
    ctx->pc = 0x37FB68u;
label_37fb68:
    // 0x37fb68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37FB68u;
    {
        const bool branch_taken_0x37fb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FB68u;
        // 0x37fb6c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fb68) {
            ctx->pc = 0x37FB88u;
            goto label_37fb88;
        }
    }
    ctx->pc = 0x37FB70u;
label_37fb70:
    // 0x37fb70: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x37fb70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x37fb74: 0x24e70050  addiu       $a3, $a3, 0x50
    ctx->pc = 0x37fb74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x37fb78: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x37fb78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x37fb7c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x37FB7Cu;
    {
        const bool branch_taken_0x37fb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FB7Cu;
        // 0x37fb80: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fb7c) {
            ctx->pc = 0x37FB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37fb38;
        }
    }
    ctx->pc = 0x37FB84u;
label_37fb84:
    // 0x37fb84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37fb84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37fb88:
    // 0x37fb88: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x37FB88u;
    {
        const bool branch_taken_0x37fb88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FB88u;
        // 0x37fb8c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fb88) {
            ctx->pc = 0x37FBA8u;
            goto label_37fba8;
        }
    }
    ctx->pc = 0x37FB90u;
    // 0x37fb90: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x37fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x37fb94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37fb98: 0x8c4b0000  lw          $t3, 0x0($v0)
    ctx->pc = 0x37fb98u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37fb9c: 0x15600004  bnez        $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x37FB9Cu;
    {
        const bool branch_taken_0x37fb9c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x37fb9c) {
            ctx->pc = 0x37FBB0u;
            goto label_37fbb0;
        }
    }
    ctx->pc = 0x37FBA4u;
    // 0x37fba4: 0x8ccb0004  lw          $t3, 0x4($a2)
    ctx->pc = 0x37fba4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_37fba8:
    // 0x37fba8: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37FBA8u;
    {
        const bool branch_taken_0x37fba8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fba8) {
            ctx->pc = 0x37FBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FBA8u;
            // 0x37fbac: 0x8c8b0000  lw          $t3, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FBB0u;
            goto label_37fbb0;
        }
    }
    ctx->pc = 0x37FBB0u;
label_37fbb0:
    // 0x37fbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x37FBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FBB0u;
        // 0x37fbb4: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37FBB8u;
}
