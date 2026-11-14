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

// Function: sub_00393A80
// Address: 0x393a80 - 0x393c28
void sub_00393A80_0x393a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00393A80_0x393a80");
#endif

    switch (ctx->pc) {
        case 0x393a98u: goto label_393a98;
        case 0x393ad0u: goto label_393ad0;
        case 0x393b68u: goto label_393b68;
        default: break;
    }

    ctx->pc = 0x393a80u;

    // 0x393a80: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x393a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x393a84: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x393a84u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393a88: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x393A88u;
    {
        const bool branch_taken_0x393a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A88u;
        // 0x393a8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393a88) {
            ctx->pc = 0x393ABCu;
            goto label_393abc;
        }
    }
    ctx->pc = 0x393A90u;
    // 0x393a90: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x393a90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x393a94: 0x0  nop
    ctx->pc = 0x393a94u;
    // NOP
label_393a98:
    // 0x393a98: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x393a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x393a9c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x393a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x393aa0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x393aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x393aa4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x393aa4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x393aa8: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x393aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x393aac: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x393aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x393ab0: 0xe4202b  sltu        $a0, $a3, $a0
    ctx->pc = 0x393ab0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x393ab4: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x393AB4u;
    {
        const bool branch_taken_0x393ab4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x393AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393AB4u;
        // 0x393ab8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393ab4) {
            ctx->pc = 0x393A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393a98;
        }
    }
    ctx->pc = 0x393ABCu;
label_393abc:
    // 0x393abc: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x393abcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x393ac0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x393ac0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393ac4: 0x8cb8000c  lw          $t8, 0xC($a1)
    ctx->pc = 0x393ac4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x393ac8: 0x25af0004  addiu       $t7, $t5, 0x4
    ctx->pc = 0x393ac8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x393acc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x393accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_393ad0:
    // 0x393ad0: 0x246e0001  addiu       $t6, $v1, 0x1
    ctx->pc = 0x393ad0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x393ad4: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x393ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x393ad8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x393ad8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393adc: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x393adcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x393ae0: 0x8d2c0018  lw          $t4, 0x18($t1)
    ctx->pc = 0x393ae0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x393ae4: 0x11800034  beqz        $t4, . + 4 + (0x34 << 2)
    ctx->pc = 0x393AE4u;
    {
        const bool branch_taken_0x393ae4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x393AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393AE4u;
        // 0x393ae8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393ae4) {
            ctx->pc = 0x393BB8u;
            goto label_393bb8;
        }
    }
    ctx->pc = 0x393AECu;
    // 0x393aec: 0x2525001c  addiu       $a1, $t1, 0x1C
    ctx->pc = 0x393aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 28));
    // 0x393af0: 0x19800013  blez        $t4, . + 4 + (0x13 << 2)
    ctx->pc = 0x393AF0u;
    {
        const bool branch_taken_0x393af0 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x393AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393AF0u;
        // 0x393af4: 0x31830003  andi        $v1, $t4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x393af0) {
            ctx->pc = 0x393B40u;
            goto label_393b40;
        }
    }
    ctx->pc = 0x393AF8u;
    // 0x393af8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x393AF8u;
    {
        const bool branch_taken_0x393af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x393AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393AF8u;
        // 0x393afc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x393af8) {
            ctx->pc = 0x393B60u;
            goto label_393b60;
        }
    }
    ctx->pc = 0x393B00u;
    // 0x393b00: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x393B00u;
    {
        const bool branch_taken_0x393b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x393b00) {
            ctx->pc = 0x393B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393B00u;
            // 0x393b04: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393B44u;
            goto label_393b44;
        }
    }
    ctx->pc = 0x393B08u;
    // 0x393b08: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x393b08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x393b0c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x393B0Cu;
    {
        const bool branch_taken_0x393b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x393b0c) {
            ctx->pc = 0x393B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393B0Cu;
            // 0x393b10: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393B2Cu;
            goto label_393b2c;
        }
    }
    ctx->pc = 0x393B14u;
    // 0x393b14: 0x8d23001c  lw          $v1, 0x1C($t1)
    ctx->pc = 0x393b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x393b18: 0x25250020  addiu       $a1, $t1, 0x20
    ctx->pc = 0x393b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x393b1c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x393b1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x393b20: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x393b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x393b24: 0x2382b  sltu        $a3, $zero, $v0
    ctx->pc = 0x393b24u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x393b28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x393b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_393b2c:
    // 0x393b2c: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x393b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x393b30: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x393b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x393b34: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x393b34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x393b38: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x393b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x393b3c: 0x83380b  movn        $a3, $a0, $v1
    ctx->pc = 0x393b3cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
label_393b40:
    // 0x393b40: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x393b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_393b44:
    // 0x393b44: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x393b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x393b48: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x393b48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x393b4c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x393b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x393b50: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x393b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x393b54: 0x16c502b  sltu        $t2, $t3, $t4
    ctx->pc = 0x393b54u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x393b58: 0x11400017  beqz        $t2, . + 4 + (0x17 << 2)
    ctx->pc = 0x393B58u;
    {
        const bool branch_taken_0x393b58 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x393B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393B58u;
        // 0x393b5c: 0x83380b  movn        $a3, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393b58) {
            ctx->pc = 0x393BB8u;
            goto label_393bb8;
        }
    }
    ctx->pc = 0x393B60u;
label_393b60:
    // 0x393b60: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x393b60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393b64: 0x0  nop
    ctx->pc = 0x393b64u;
    // NOP
label_393b68:
    // 0x393b68: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x393b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x393b6c: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x393b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x393b70: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x393b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x393b74: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x393b74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x393b78: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x393b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x393b7c: 0x16c502b  sltu        $t2, $t3, $t4
    ctx->pc = 0x393b7cu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x393b80: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x393b80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x393b84: 0xa2380b  movn        $a3, $a1, $v0
    ctx->pc = 0x393b84u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x393b88: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x393b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x393b8c: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x393b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x393b90: 0x8d05000c  lw          $a1, 0xC($t0)
    ctx->pc = 0x393b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x393b94: 0x46380b  movn        $a3, $v0, $a2
    ctx->pc = 0x393b94u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x393b98: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x393b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x393b9c: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x393b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x393ba0: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x393ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x393ba4: 0x43380b  movn        $a3, $v0, $v1
    ctx->pc = 0x393ba4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x393ba8: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x393ba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x393bac: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x393bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x393bb0: 0x1540ffed  bnez        $t2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x393BB0u;
    {
        const bool branch_taken_0x393bb0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x393BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393BB0u;
        // 0x393bb4: 0x44380b  movn        $a3, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393bb0) {
            ctx->pc = 0x393B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393b68;
        }
    }
    ctx->pc = 0x393BB8u;
label_393bb8:
    // 0x393bb8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x393bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x393bbc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x393BBCu;
    {
        const bool branch_taken_0x393bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x393BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393BBCu;
        // 0x393bc0: 0x2ce20002  sltiu       $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x393bbc) {
            ctx->pc = 0x393BECu;
            goto label_393bec;
        }
    }
    ctx->pc = 0x393BC4u;
    // 0x393bc4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x393BC4u;
    {
        const bool branch_taken_0x393bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x393bc4) {
            ctx->pc = 0x393BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393BC4u;
            // 0x393bc8: 0x1c0182d  daddu       $v1, $t6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393C10u;
            goto label_393c10;
        }
    }
    ctx->pc = 0x393BCCu;
    // 0x393bcc: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x393bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x393bd0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x393bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x393bd4: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x393bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x393bd8: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x393bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x393bdc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x393bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x393be0: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x393be0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x393be4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x393BE4u;
    {
        const bool branch_taken_0x393be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393BE4u;
        // 0x393be8: 0xad200004  sw          $zero, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393be4) {
            ctx->pc = 0x393C0Cu;
            goto label_393c0c;
        }
    }
    ctx->pc = 0x393BECu;
label_393bec:
    // 0x393bec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x393BECu;
    {
        const bool branch_taken_0x393bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393BECu;
        // 0x393bf0: 0x1c0182d  daddu       $v1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393bec) {
            ctx->pc = 0x393C10u;
            goto label_393c10;
        }
    }
    ctx->pc = 0x393BF4u;
    // 0x393bf4: 0x8da30004  lw          $v1, 0x4($t5)
    ctx->pc = 0x393bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x393bf8: 0xad2f0004  sw          $t7, 0x4($t1)
    ctx->pc = 0x393bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 15));
    // 0x393bfc: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x393bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x393c00: 0x8da20004  lw          $v0, 0x4($t5)
    ctx->pc = 0x393c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x393c04: 0xac490004  sw          $t1, 0x4($v0)
    ctx->pc = 0x393c04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 9));
    // 0x393c08: 0xada90004  sw          $t1, 0x4($t5)
    ctx->pc = 0x393c08u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 9));
label_393c0c:
    // 0x393c0c: 0x1c0182d  daddu       $v1, $t6, $zero
    ctx->pc = 0x393c0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_393c10:
    // 0x393c10: 0x323102b  sltu        $v0, $t9, $v1
    ctx->pc = 0x393c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x393c14: 0x1040ffae  beqz        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x393C14u;
    {
        const bool branch_taken_0x393c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C14u;
        // 0x393c18: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393c14) {
            ctx->pc = 0x393AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393ad0;
        }
    }
    ctx->pc = 0x393C1Cu;
    // 0x393c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x393C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393C24u;
    // 0x393c24: 0x0  nop
    ctx->pc = 0x393c24u;
    // NOP
    ctx->pc = 0x393c28u;
}
