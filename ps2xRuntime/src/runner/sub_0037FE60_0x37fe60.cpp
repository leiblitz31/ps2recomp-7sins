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

// Function: sub_0037FE60
// Address: 0x37fe60 - 0x37ff90
void sub_0037FE60_0x37fe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037FE60_0x37fe60");
#endif

    switch (ctx->pc) {
        case 0x37ff18u: goto label_37ff18;
        default: break;
    }

    ctx->pc = 0x37fe60u;

    // 0x37fe60: 0x8f82a8f8  lw          $v0, -0x5708($gp)
    ctx->pc = 0x37fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945016)));
    // 0x37fe64: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x37fe64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x37fe68: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x37fe68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x37fe6c: 0x10c00044  beqz        $a2, . + 4 + (0x44 << 2)
    ctx->pc = 0x37FE6Cu;
    {
        const bool branch_taken_0x37fe6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FE6Cu;
        // 0x37fe70: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fe6c) {
            ctx->pc = 0x37FF80u;
            goto label_37ff80;
        }
    }
    ctx->pc = 0x37FE74u;
    // 0x37fe74: 0x8ca80100  lw          $t0, 0x100($a1)
    ctx->pc = 0x37fe74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
    // 0x37fe78: 0x3c0338e3  lui         $v1, 0x38E3
    ctx->pc = 0x37fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14563 << 16));
    // 0x37fe7c: 0x34638e39  ori         $v1, $v1, 0x8E39
    ctx->pc = 0x37fe7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36409);
    // 0x37fe80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37fe80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fe84: 0x8d020058  lw          $v0, 0x58($t0)
    ctx->pc = 0x37fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x37fe88: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x37fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x37fe8c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x37fe8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37fe90: 0x10c00035  beqz        $a2, . + 4 + (0x35 << 2)
    ctx->pc = 0x37FE90u;
    {
        const bool branch_taken_0x37fe90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FE90u;
        // 0x37fe94: 0x22943  sra         $a1, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fe90) {
            ctx->pc = 0x37FF68u;
            goto label_37ff68;
        }
    }
    ctx->pc = 0x37FE98u;
    // 0x37fe98: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x37fe98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x37fe9c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x37fe9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fea0: 0x31430003  andi        $v1, $t2, 0x3
    ctx->pc = 0x37fea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x37fea4: 0x19400013  blez        $t2, . + 4 + (0x13 << 2)
    ctx->pc = 0x37FEA4u;
    {
        const bool branch_taken_0x37fea4 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x37FEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FEA4u;
        // 0x37fea8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fea4) {
            ctx->pc = 0x37FEF4u;
            goto label_37fef4;
        }
    }
    ctx->pc = 0x37FEACu;
    // 0x37feac: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x37FEACu;
    {
        const bool branch_taken_0x37feac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FEACu;
        // 0x37feb0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37feac) {
            ctx->pc = 0x37FF10u;
            goto label_37ff10;
        }
    }
    ctx->pc = 0x37FEB4u;
    // 0x37feb4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x37FEB4u;
    {
        const bool branch_taken_0x37feb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37feb4) {
            ctx->pc = 0x37FEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FEB4u;
            // 0x37feb8: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FEF8u;
            goto label_37fef8;
        }
    }
    ctx->pc = 0x37FEBCu;
    // 0x37febc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x37febcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37fec0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x37FEC0u;
    {
        const bool branch_taken_0x37fec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37fec0) {
            ctx->pc = 0x37FEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FEC0u;
            // 0x37fec4: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FEE4u;
            goto label_37fee4;
        }
    }
    ctx->pc = 0x37FEC8u;
    // 0x37fec8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x37fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x37fecc: 0x54480003  bnel        $v0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37FECCu;
    {
        const bool branch_taken_0x37fecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x37fecc) {
            ctx->pc = 0x37FED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FECCu;
            // 0x37fed0: 0x24e60014  addiu       $a2, $a3, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FEDCu;
            goto label_37fedc;
        }
    }
    ctx->pc = 0x37FED4u;
    // 0x37fed4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x37FED4u;
    {
        const bool branch_taken_0x37fed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FED4u;
        // 0x37fed8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fed4) {
            ctx->pc = 0x37FF6Cu;
            goto label_37ff6c;
        }
    }
    ctx->pc = 0x37FEDCu;
label_37fedc:
    // 0x37fedc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x37fedcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37fee0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x37fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_37fee4:
    // 0x37fee4: 0x10480021  beq         $v0, $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x37FEE4u;
    {
        const bool branch_taken_0x37fee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x37FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FEE4u;
        // 0x37fee8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fee4) {
            ctx->pc = 0x37FF6Cu;
            goto label_37ff6c;
        }
    }
    ctx->pc = 0x37FEECu;
    // 0x37feec: 0x24c60014  addiu       $a2, $a2, 0x14
    ctx->pc = 0x37feecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x37fef0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x37fef0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_37fef4:
    // 0x37fef4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x37fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_37fef8:
    // 0x37fef8: 0x1048001c  beq         $v0, $t0, . + 4 + (0x1C << 2)
    ctx->pc = 0x37FEF8u;
    {
        const bool branch_taken_0x37fef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x37FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FEF8u;
        // 0x37fefc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fef8) {
            ctx->pc = 0x37FF6Cu;
            goto label_37ff6c;
        }
    }
    ctx->pc = 0x37FF00u;
    // 0x37ff00: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x37ff00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x37ff04: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x37ff04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x37ff08: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x37FF08u;
    {
        const bool branch_taken_0x37ff08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FF08u;
        // 0x37ff0c: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ff08) {
            ctx->pc = 0x37FF68u;
            goto label_37ff68;
        }
    }
    ctx->pc = 0x37FF10u;
label_37ff10:
    // 0x37ff10: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x37ff10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ff14: 0x0  nop
    ctx->pc = 0x37ff14u;
    // NOP
label_37ff18:
    // 0x37ff18: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x37ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x37ff1c: 0x54480003  bnel        $v0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37FF1Cu;
    {
        const bool branch_taken_0x37ff1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x37ff1c) {
            ctx->pc = 0x37FF20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FF1Cu;
            // 0x37ff20: 0x8ce20014  lw          $v0, 0x14($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FF2Cu;
            goto label_37ff2c;
        }
    }
    ctx->pc = 0x37FF24u;
    // 0x37ff24: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x37FF24u;
    {
        const bool branch_taken_0x37ff24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FF24u;
        // 0x37ff28: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ff24) {
            ctx->pc = 0x37FF6Cu;
            goto label_37ff6c;
        }
    }
    ctx->pc = 0x37FF2Cu;
label_37ff2c:
    // 0x37ff2c: 0x10480007  beq         $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37FF2Cu;
    {
        const bool branch_taken_0x37ff2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x37FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FF2Cu;
        // 0x37ff30: 0x24c30014  addiu       $v1, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ff2c) {
            ctx->pc = 0x37FF4Cu;
            goto label_37ff4c;
        }
    }
    ctx->pc = 0x37FF34u;
    // 0x37ff34: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x37ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x37ff38: 0x10480004  beq         $v0, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37FF38u;
    {
        const bool branch_taken_0x37ff38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x37FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FF38u;
        // 0x37ff3c: 0x24c30028  addiu       $v1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ff38) {
            ctx->pc = 0x37FF4Cu;
            goto label_37ff4c;
        }
    }
    ctx->pc = 0x37FF40u;
    // 0x37ff40: 0x8ce2003c  lw          $v0, 0x3C($a3)
    ctx->pc = 0x37ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x37ff44: 0x14480003  bne         $v0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37FF44u;
    {
        const bool branch_taken_0x37ff44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x37FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FF44u;
        // 0x37ff48: 0x24c3003c  addiu       $v1, $a2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ff44) {
            ctx->pc = 0x37FF54u;
            goto label_37ff54;
        }
    }
    ctx->pc = 0x37FF4Cu;
label_37ff4c:
    // 0x37ff4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37FF4Cu;
    {
        const bool branch_taken_0x37ff4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FF4Cu;
        // 0x37ff50: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ff4c) {
            ctx->pc = 0x37FF6Cu;
            goto label_37ff6c;
        }
    }
    ctx->pc = 0x37FF54u;
label_37ff54:
    // 0x37ff54: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x37ff54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x37ff58: 0x24e70050  addiu       $a3, $a3, 0x50
    ctx->pc = 0x37ff58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x37ff5c: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x37ff5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x37ff60: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x37FF60u;
    {
        const bool branch_taken_0x37ff60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FF60u;
        // 0x37ff64: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ff60) {
            ctx->pc = 0x37FF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37ff18;
        }
    }
    ctx->pc = 0x37FF68u;
label_37ff68:
    // 0x37ff68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37ff68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37ff6c:
    // 0x37ff6c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x37FF6Cu;
    {
        const bool branch_taken_0x37ff6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ff6c) {
            ctx->pc = 0x37FF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FF6Cu;
            // 0x37ff70: 0x24820004  addiu       $v0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FF84u;
            goto label_37ff84;
        }
    }
    ctx->pc = 0x37FF74u;
    // 0x37ff74: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x37ff74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x37ff78: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x37ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x37ff7c: 0x625821  addu        $t3, $v1, $v0
    ctx->pc = 0x37ff7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_37ff80:
    // 0x37ff80: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x37ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_37ff84:
    // 0x37ff84: 0x3e00008  jr          $ra
    ctx->pc = 0x37FF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FF84u;
        // 0x37ff88: 0x16b100b  movn        $v0, $t3, $t3 (Delay Slot)
        if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37FF8Cu;
    // 0x37ff8c: 0x0  nop
    ctx->pc = 0x37ff8cu;
    // NOP
    ctx->pc = 0x37ff90u;
}
