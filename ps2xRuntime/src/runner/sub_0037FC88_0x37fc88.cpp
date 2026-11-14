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

// Function: sub_0037FC88
// Address: 0x37fc88 - 0x37fdd0
void sub_0037FC88_0x37fc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037FC88_0x37fc88");
#endif

    switch (ctx->pc) {
        case 0x37fd40u: goto label_37fd40;
        default: break;
    }

    ctx->pc = 0x37fc88u;

    // 0x37fc88: 0x8f82a8f8  lw          $v0, -0x5708($gp)
    ctx->pc = 0x37fc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945016)));
    // 0x37fc8c: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x37fc8cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fc90: 0x1623821  addu        $a3, $t3, $v0
    ctx->pc = 0x37fc90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x37fc94: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x37fc94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x37fc98: 0x10c00045  beqz        $a2, . + 4 + (0x45 << 2)
    ctx->pc = 0x37FC98u;
    {
        const bool branch_taken_0x37fc98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FC98u;
        // 0x37fc9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fc98) {
            ctx->pc = 0x37FDB0u;
            goto label_37fdb0;
        }
    }
    ctx->pc = 0x37FCA0u;
    // 0x37fca0: 0x8ca80100  lw          $t0, 0x100($a1)
    ctx->pc = 0x37fca0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
    // 0x37fca4: 0x3c0338e3  lui         $v1, 0x38E3
    ctx->pc = 0x37fca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14563 << 16));
    // 0x37fca8: 0x34638e39  ori         $v1, $v1, 0x8E39
    ctx->pc = 0x37fca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36409);
    // 0x37fcac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37fcacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fcb0: 0x8d020058  lw          $v0, 0x58($t0)
    ctx->pc = 0x37fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x37fcb4: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x37fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x37fcb8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x37fcb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37fcbc: 0x10c00032  beqz        $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x37FCBCu;
    {
        const bool branch_taken_0x37fcbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FCBCu;
        // 0x37fcc0: 0x22943  sra         $a1, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fcbc) {
            ctx->pc = 0x37FD88u;
            goto label_37fd88;
        }
    }
    ctx->pc = 0x37FCC4u;
    // 0x37fcc4: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x37fcc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x37fcc8: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x37fcc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fccc: 0x31430003  andi        $v1, $t2, 0x3
    ctx->pc = 0x37fcccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x37fcd0: 0x19400013  blez        $t2, . + 4 + (0x13 << 2)
    ctx->pc = 0x37FCD0u;
    {
        const bool branch_taken_0x37fcd0 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x37FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FCD0u;
        // 0x37fcd4: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fcd0) {
            ctx->pc = 0x37FD20u;
            goto label_37fd20;
        }
    }
    ctx->pc = 0x37FCD8u;
    // 0x37fcd8: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x37FCD8u;
    {
        const bool branch_taken_0x37fcd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FCD8u;
        // 0x37fcdc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fcd8) {
            ctx->pc = 0x37FD3Cu;
            goto label_37fd3c;
        }
    }
    ctx->pc = 0x37FCE0u;
    // 0x37fce0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x37FCE0u;
    {
        const bool branch_taken_0x37fce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37fce0) {
            ctx->pc = 0x37FCE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FCE0u;
            // 0x37fce4: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FD24u;
            goto label_37fd24;
        }
    }
    ctx->pc = 0x37FCE8u;
    // 0x37fce8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x37fce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37fcec: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x37FCECu;
    {
        const bool branch_taken_0x37fcec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37fcec) {
            ctx->pc = 0x37FCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FCECu;
            // 0x37fcf0: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FD10u;
            goto label_37fd10;
        }
    }
    ctx->pc = 0x37FCF4u;
    // 0x37fcf4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x37fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x37fcf8: 0x54480003  bnel        $v0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37FCF8u;
    {
        const bool branch_taken_0x37fcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x37fcf8) {
            ctx->pc = 0x37FCFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FCF8u;
            // 0x37fcfc: 0x24e60014  addiu       $a2, $a3, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FD08u;
            goto label_37fd08;
        }
    }
    ctx->pc = 0x37FD00u;
    // 0x37fd00: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x37FD00u;
    {
        const bool branch_taken_0x37fd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FD00u;
        // 0x37fd04: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fd00) {
            ctx->pc = 0x37FD8Cu;
            goto label_37fd8c;
        }
    }
    ctx->pc = 0x37FD08u;
label_37fd08:
    // 0x37fd08: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x37fd08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37fd0c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x37fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_37fd10:
    // 0x37fd10: 0x1048001e  beq         $v0, $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x37FD10u;
    {
        const bool branch_taken_0x37fd10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x37FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FD10u;
        // 0x37fd14: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fd10) {
            ctx->pc = 0x37FD8Cu;
            goto label_37fd8c;
        }
    }
    ctx->pc = 0x37FD18u;
    // 0x37fd18: 0x24c60014  addiu       $a2, $a2, 0x14
    ctx->pc = 0x37fd18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x37fd1c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x37fd1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_37fd20:
    // 0x37fd20: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x37fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_37fd24:
    // 0x37fd24: 0x10480019  beq         $v0, $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x37FD24u;
    {
        const bool branch_taken_0x37fd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x37FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FD24u;
        // 0x37fd28: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fd24) {
            ctx->pc = 0x37FD8Cu;
            goto label_37fd8c;
        }
    }
    ctx->pc = 0x37FD2Cu;
    // 0x37fd2c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x37fd2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x37fd30: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x37fd30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x37fd34: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x37FD34u;
    {
        const bool branch_taken_0x37fd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FD34u;
        // 0x37fd38: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fd34) {
            ctx->pc = 0x37FD88u;
            goto label_37fd88;
        }
    }
    ctx->pc = 0x37FD3Cu;
label_37fd3c:
    // 0x37fd3c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x37fd3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37fd40:
    // 0x37fd40: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x37fd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x37fd44: 0x54480003  bnel        $v0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37FD44u;
    {
        const bool branch_taken_0x37fd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x37fd44) {
            ctx->pc = 0x37FD48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FD44u;
            // 0x37fd48: 0x8ce20014  lw          $v0, 0x14($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FD54u;
            goto label_37fd54;
        }
    }
    ctx->pc = 0x37FD4Cu;
    // 0x37fd4c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x37FD4Cu;
    {
        const bool branch_taken_0x37fd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FD4Cu;
        // 0x37fd50: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fd4c) {
            ctx->pc = 0x37FD8Cu;
            goto label_37fd8c;
        }
    }
    ctx->pc = 0x37FD54u;
label_37fd54:
    // 0x37fd54: 0x1048000d  beq         $v0, $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x37FD54u;
    {
        const bool branch_taken_0x37fd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x37FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FD54u;
        // 0x37fd58: 0x24c30014  addiu       $v1, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fd54) {
            ctx->pc = 0x37FD8Cu;
            goto label_37fd8c;
        }
    }
    ctx->pc = 0x37FD5Cu;
    // 0x37fd5c: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x37fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x37fd60: 0x1048000a  beq         $v0, $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x37FD60u;
    {
        const bool branch_taken_0x37fd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x37FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FD60u;
        // 0x37fd64: 0x24c30028  addiu       $v1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fd60) {
            ctx->pc = 0x37FD8Cu;
            goto label_37fd8c;
        }
    }
    ctx->pc = 0x37FD68u;
    // 0x37fd68: 0x8ce2003c  lw          $v0, 0x3C($a3)
    ctx->pc = 0x37fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x37fd6c: 0x10480007  beq         $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37FD6Cu;
    {
        const bool branch_taken_0x37fd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x37FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FD6Cu;
        // 0x37fd70: 0x24c3003c  addiu       $v1, $a2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fd6c) {
            ctx->pc = 0x37FD8Cu;
            goto label_37fd8c;
        }
    }
    ctx->pc = 0x37FD74u;
    // 0x37fd74: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x37fd74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x37fd78: 0x24e70050  addiu       $a3, $a3, 0x50
    ctx->pc = 0x37fd78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x37fd7c: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x37fd7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x37fd80: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x37FD80u;
    {
        const bool branch_taken_0x37fd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FD80u;
        // 0x37fd84: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fd80) {
            ctx->pc = 0x37FD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37fd40;
        }
    }
    ctx->pc = 0x37FD88u;
label_37fd88:
    // 0x37fd88: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x37fd88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37fd8c:
    // 0x37fd8c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x37FD8Cu;
    {
        const bool branch_taken_0x37fd8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fd8c) {
            ctx->pc = 0x37FDB0u;
            goto label_37fdb0;
        }
    }
    ctx->pc = 0x37FD94u;
    // 0x37fd94: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x37fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x37fd98: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x37fd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x37fd9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37fda0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x37fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x37fda4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37fda8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37fdac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x37fdacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37fdb0:
    // 0x37fdb0: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37FDB0u;
    {
        const bool branch_taken_0x37fdb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x37FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FDB0u;
        // 0x37fdb4: 0x8f82a634  lw          $v0, -0x59CC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fdb0) {
            ctx->pc = 0x37FDC4u;
            goto label_37fdc4;
        }
    }
    ctx->pc = 0x37FDB8u;
    // 0x37fdb8: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x37fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x37fdbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37fdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37fdc0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x37fdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37fdc4:
    // 0x37fdc4: 0x3e00008  jr          $ra
    ctx->pc = 0x37FDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FDC4u;
        // 0x37fdc8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FDC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37FDCCu;
    // 0x37fdcc: 0x0  nop
    ctx->pc = 0x37fdccu;
    // NOP
    ctx->pc = 0x37fdd0u;
}
