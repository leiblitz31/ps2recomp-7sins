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

// Function: sub_003A1B48
// Address: 0x3a1b48 - 0x3a1c60
void sub_003A1B48_0x3a1b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1B48_0x3a1b48");
#endif

    ctx->pc = 0x3a1b48u;

    // 0x3a1b48: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x3a1b48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1b4c: 0x8d6a0018  lw          $t2, 0x18($t3)
    ctx->pc = 0x3a1b4cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x3a1b50: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x3a1b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x3a1b54: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x3a1b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3a1b58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a1b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a1b5c: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x3A1B5Cu;
    {
        const bool branch_taken_0x3a1b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B5Cu;
        // 0x3a1b60: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1b5c) {
            ctx->pc = 0x3A1C58u;
            goto label_3a1c58;
        }
    }
    ctx->pc = 0x3A1B64u;
    // 0x3a1b64: 0x91430008  lbu         $v1, 0x8($t2)
    ctx->pc = 0x3a1b64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3a1b68: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x3a1b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x3a1b6c: 0x8d26000c  lw          $a2, 0xC($t1)
    ctx->pc = 0x3a1b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x3a1b70: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x3a1b70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x3a1b74: 0x91440018  lbu         $a0, 0x18($t2)
    ctx->pc = 0x3a1b74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x3a1b78: 0x3063009f  andi        $v1, $v1, 0x9F
    ctx->pc = 0x3a1b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)159);
    // 0x3a1b7c: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x3a1b7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3a1b80: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3a1b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3a1b84: 0x8d260014  lw          $a2, 0x14($t1)
    ctx->pc = 0x3a1b84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x3a1b88: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x3a1b88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x3a1b8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a1b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a1b90: 0x8d270010  lw          $a3, 0x10($t1)
    ctx->pc = 0x3a1b90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x3a1b94: 0x444025  or          $t0, $v0, $a0
    ctx->pc = 0x3a1b94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3a1b98: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x3a1b98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x3a1b9c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x3a1b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3a1ba0: 0xad280018  sw          $t0, 0x18($t1)
    ctx->pc = 0x3a1ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 8));
    // 0x3a1ba4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3A1BA4u;
    {
        const bool branch_taken_0x3a1ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1BA4u;
        // 0x3a1ba8: 0xad260014  sw          $a2, 0x14($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1ba4) {
            ctx->pc = 0x3A1C58u;
            goto label_3a1c58;
        }
    }
    ctx->pc = 0x3A1BACu;
    // 0x3a1bac: 0x24470018  addiu       $a3, $v0, 0x18
    ctx->pc = 0x3a1bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x3a1bb0: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x3a1bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x3a1bb4: 0x1105000d  beq         $t0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x3A1BB4u;
    {
        const bool branch_taken_0x3a1bb4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x3A1BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1BB4u;
        // 0x3a1bb8: 0x2564004c  addiu       $a0, $t3, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1bb4) {
            ctx->pc = 0x3A1BECu;
            goto label_3a1bec;
        }
    }
    ctx->pc = 0x3A1BBCu;
    // 0x3a1bbc: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x3a1bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x3a1bc0: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x3a1bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x3a1bc4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3a1bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3a1bc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3a1bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3a1bcc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A1BCCu;
    {
        const bool branch_taken_0x3a1bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A1BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1BCCu;
        // 0x3a1bd0: 0x34c20008  ori         $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1bcc) {
            ctx->pc = 0x3A1BE8u;
            goto label_3a1be8;
        }
    }
    ctx->pc = 0x3A1BD4u;
    // 0x3a1bd4: 0x81e02  srl         $v1, $t0, 24
    ctx->pc = 0x3a1bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x3a1bd8: 0x51602  srl         $v0, $a1, 24
    ctx->pc = 0x3a1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x3a1bdc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A1BDCu;
    {
        const bool branch_taken_0x3a1bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A1BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1BDCu;
        // 0x3a1be0: 0x34c20008  ori         $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1bdc) {
            ctx->pc = 0x3A1BE8u;
            goto label_3a1be8;
        }
    }
    ctx->pc = 0x3A1BE4u;
    // 0x3a1be4: 0x34c20004  ori         $v0, $a2, 0x4
    ctx->pc = 0x3a1be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
label_3a1be8:
    // 0x3a1be8: 0xad220014  sw          $v0, 0x14($t1)
    ctx->pc = 0x3a1be8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
label_3a1bec:
    // 0x3a1bec: 0x9542000c  lhu         $v0, 0xC($t2)
    ctx->pc = 0x3a1becu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x3a1bf0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A1BF0u;
    {
        const bool branch_taken_0x3a1bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1BF0u;
        // 0x3a1bf4: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1bf0) {
            ctx->pc = 0x3A1C1Cu;
            goto label_3a1c1c;
        }
    }
    ctx->pc = 0x3A1BF8u;
    // 0x3a1bf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A1BF8u;
    {
        const bool branch_taken_0x3a1bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1BF8u;
        // 0x3a1bfc: 0x8d220014  lw          $v0, 0x14($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1bf8) {
            ctx->pc = 0x3A1C08u;
            goto label_3a1c08;
        }
    }
    ctx->pc = 0x3A1C00u;
    // 0x3a1c00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A1C00u;
    {
        const bool branch_taken_0x3a1c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C00u;
        // 0x3a1c04: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1c00) {
            ctx->pc = 0x3A1C18u;
            goto label_3a1c18;
        }
    }
    ctx->pc = 0x3A1C08u;
label_3a1c08:
    // 0x3a1c08: 0x9543000c  lhu         $v1, 0xC($t2)
    ctx->pc = 0x3a1c08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x3a1c0c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3a1c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3a1c10: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3a1c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3a1c14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a1c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3a1c18:
    // 0x3a1c18: 0xad220014  sw          $v0, 0x14($t1)
    ctx->pc = 0x3a1c18u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
label_3a1c1c:
    // 0x3a1c1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a1c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a1c20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a1c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a1c24: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A1C24u;
    {
        const bool branch_taken_0x3a1c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1c24) {
            ctx->pc = 0x3A1C58u;
            goto label_3a1c58;
        }
    }
    ctx->pc = 0x3A1C2Cu;
    // 0x3a1c2c: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x3a1c2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3a1c30: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x3a1c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x3a1c34: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A1C34u;
    {
        const bool branch_taken_0x3a1c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a1c34) {
            ctx->pc = 0x3A1C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1C34u;
            // 0x3a1c38: 0x8d220014  lw          $v0, 0x14($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1C50u;
            goto label_3a1c50;
        }
    }
    ctx->pc = 0x3A1C3Cu;
    // 0x3a1c3c: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x3a1c3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3a1c40: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x3a1c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x3a1c44: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A1C44u;
    {
        const bool branch_taken_0x3a1c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a1c44) {
            ctx->pc = 0x3A1C58u;
            goto label_3a1c58;
        }
    }
    ctx->pc = 0x3A1C4Cu;
    // 0x3a1c4c: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x3a1c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
label_3a1c50:
    // 0x3a1c50: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3a1c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x3a1c54: 0xad220014  sw          $v0, 0x14($t1)
    ctx->pc = 0x3a1c54u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
label_3a1c58:
    // 0x3a1c58: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1C60u;
}
