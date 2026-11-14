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

// Function: sub_004B4970
// Address: 0x4b4970 - 0x4b4ea8
void sub_004B4970_0x4b4970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4970_0x4b4970");
#endif

    switch (ctx->pc) {
        case 0x4b49e0u: goto label_4b49e0;
        case 0x4b4a10u: goto label_4b4a10;
        case 0x4b4a74u: goto label_4b4a74;
        case 0x4b4aa4u: goto label_4b4aa4;
        case 0x4b4b0cu: goto label_4b4b0c;
        case 0x4b4b34u: goto label_4b4b34;
        case 0x4b4b44u: goto label_4b4b44;
        case 0x4b4b6cu: goto label_4b4b6c;
        case 0x4b4c80u: goto label_4b4c80;
        case 0x4b4ca0u: goto label_4b4ca0;
        case 0x4b4cc4u: goto label_4b4cc4;
        case 0x4b4ce8u: goto label_4b4ce8;
        case 0x4b4d38u: goto label_4b4d38;
        case 0x4b4d54u: goto label_4b4d54;
        case 0x4b4db0u: goto label_4b4db0;
        case 0x4b4de0u: goto label_4b4de0;
        case 0x4b4e44u: goto label_4b4e44;
        case 0x4b4e64u: goto label_4b4e64;
        default: break;
    }

    ctx->pc = 0x4b4970u;

    // 0x4b4970: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b4970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b4974: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4b4974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4b4978: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4b4978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4b497c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4b497cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4980: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4b4980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4b4984: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4b4984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4988: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b4988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4b498c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b498cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4990: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4b4990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4b4994: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4b4994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b4998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b499c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4b499cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b49a0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x4b49a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4b49a4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4b49a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4b49a8: 0x21823  negu        $v1, $v0
    ctx->pc = 0x4b49a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4b49ac: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4b49acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4b49b0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4B49B0u;
    {
        const bool branch_taken_0x4b49b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b49b0) {
            ctx->pc = 0x4B49B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B49B0u;
            // 0x4b49b4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B49B8u;
            goto label_4b49b8;
        }
    }
    ctx->pc = 0x4B49B8u;
label_4b49b8:
    // 0x4b49b8: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x4b49b8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x4b49bc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4b49bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4b49c0: 0x2812  mflo        $a1
    ctx->pc = 0x4b49c0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x4b49c4: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x4B49C4u;
    {
        const bool branch_taken_0x4b49c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B49C4u;
        // 0x4b49c8: 0x225102b  sltu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b49c4) {
            ctx->pc = 0x4B4A78u;
            goto label_4b4a78;
        }
    }
    ctx->pc = 0x4B49CCu;
    // 0x4b49cc: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x4b49ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b49d0: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x4b49d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b49d4: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x4b49d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4b49d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b49d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b49dc: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x4b49dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4b49e0:
    // 0x4b49e0: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x4b49e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x4b49e4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x4b49e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b49e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B49E8u;
    {
        const bool branch_taken_0x4b49e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b49e8) {
            ctx->pc = 0x4B49FCu;
            goto label_4b49fc;
        }
    }
    ctx->pc = 0x4B49F0u;
    // 0x4b49f0: 0x111800a  movz        $s0, $t0, $s1
    ctx->pc = 0x4b49f0u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 8));
    // 0x4b49f4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x4B49F4u;
    {
        const bool branch_taken_0x4b49f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B49F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B49F4u;
        // 0x4b49f8: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b49f4) {
            ctx->pc = 0x4B4A5Cu;
            goto label_4b4a5c;
        }
    }
    ctx->pc = 0x4B49FCu;
label_4b49fc:
    // 0x4b49fc: 0x104c0015  beq         $v0, $t4, . + 4 + (0x15 << 2)
    ctx->pc = 0x4B49FCu;
    {
        const bool branch_taken_0x4b49fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        ctx->pc = 0x4B4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B49FCu;
        // 0x4b4a00: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b49fc) {
            ctx->pc = 0x4B4A54u;
            goto label_4b4a54;
        }
    }
    ctx->pc = 0x4B4A04u;
    // 0x4b4a04: 0x1473021  addu        $a2, $t2, $a3
    ctx->pc = 0x4b4a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x4b4a08: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x4b4a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4a0c: 0x0  nop
    ctx->pc = 0x4b4a0cu;
    // NOP
label_4b4a10:
    // 0x4b4a10: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x4b4a10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x4b4a14: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4B4A14u;
    {
        const bool branch_taken_0x4b4a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4A14u;
        // 0x4b4a18: 0x225102b  sltu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4a14) {
            ctx->pc = 0x4B4A60u;
            goto label_4b4a60;
        }
    }
    ctx->pc = 0x4B4A1Cu;
    // 0x4b4a1c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x4b4a1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b4a20: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x4b4a20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4b4a24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b4a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b4a28: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B4A28u;
    {
        const bool branch_taken_0x4b4a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b4a28) {
            ctx->pc = 0x4B4A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B4A28u;
            // 0x4b4a2c: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4A40u;
            goto label_4b4a40;
        }
    }
    ctx->pc = 0x4B4A30u;
    // 0x4b4a30: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x4b4a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4b4a34: 0x51800a  movz        $s0, $v0, $s1
    ctx->pc = 0x4b4a34u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x4b4a38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B4A38u;
    {
        const bool branch_taken_0x4b4a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4A38u;
        // 0x4b4a3c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4a38) {
            ctx->pc = 0x4B4A44u;
            goto label_4b4a44;
        }
    }
    ctx->pc = 0x4B4A40u;
label_4b4a40:
    // 0x4b4a40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b4a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b4a44:
    // 0x4b4a44: 0x1625fff2  bne         $s1, $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x4B4A44u;
    {
        const bool branch_taken_0x4b4a44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x4B4A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4A44u;
        // 0x4b4a48: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4a44) {
            ctx->pc = 0x4B4A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4a10;
        }
    }
    ctx->pc = 0x4B4A4Cu;
    // 0x4b4a4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4A4Cu;
    {
        const bool branch_taken_0x4b4a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4A4Cu;
        // 0x4b4a50: 0x225102b  sltu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4a4c) {
            ctx->pc = 0x4B4A60u;
            goto label_4b4a60;
        }
    }
    ctx->pc = 0x4B4A54u;
label_4b4a54:
    // 0x4b4a54: 0x780c0  sll         $s0, $a3, 3
    ctx->pc = 0x4b4a54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x4b4a58: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b4a58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b4a5c:
    // 0x4b4a5c: 0x225102b  sltu        $v0, $s1, $a1
    ctx->pc = 0x4b4a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4b4a60:
    // 0x4b4a60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B4A60u;
    {
        const bool branch_taken_0x4b4a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4A60u;
        // 0x4b4a64: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4a60) {
            ctx->pc = 0x4B4A88u;
            goto label_4b4a88;
        }
    }
    ctx->pc = 0x4B4A68u;
    // 0x4b4a68: 0xeb102b  sltu        $v0, $a3, $t3
    ctx->pc = 0x4b4a68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x4b4a6c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x4B4A6Cu;
    {
        const bool branch_taken_0x4b4a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4A6Cu;
        // 0x4b4a70: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4a6c) {
            ctx->pc = 0x4B49E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b49e0;
        }
    }
    ctx->pc = 0x4B4A74u;
label_4b4a74:
    // 0x4b4a74: 0x225102b  sltu        $v0, $s1, $a1
    ctx->pc = 0x4b4a74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4b4a78:
    // 0x4b4a78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B4A78u;
    {
        const bool branch_taken_0x4b4a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4A78u;
        // 0x4b4a7c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4a78) {
            ctx->pc = 0x4B4A90u;
            goto label_4b4a90;
        }
    }
    ctx->pc = 0x4B4A80u;
    // 0x4b4a80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4B4A80u;
    {
        const bool branch_taken_0x4b4a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4A80u;
        // 0x4b4a84: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4a80) {
            ctx->pc = 0x4B4AB8u;
            goto label_4b4ab8;
        }
    }
    ctx->pc = 0x4B4A88u;
label_4b4a88:
    // 0x4b4a88: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B4A88u;
    {
        const bool branch_taken_0x4b4a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4A88u;
        // 0x4b4a8c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4a88) {
            ctx->pc = 0x4B4A74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4a74;
        }
    }
    ctx->pc = 0x4B4A90u;
label_4b4a90:
    // 0x4b4a90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b4a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4a94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4b4a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4a98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4b4a98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4a9c: 0xc12d3ba  jal         func_4B4EE8
    ctx->pc = 0x4B4A9Cu;
    SET_GPR_U32(ctx, 31, 0x4B4AA4u);
    ctx->pc = 0x4B4AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4A9Cu;
    // 0x4b4aa0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4EE8u, 0x4B4A9Cu, 0x4B4AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4AA4u;
label_4b4aa4:
    // 0x4b4aa4: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x4b4aa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4b4aa8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b4aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b4aac: 0x511004  sllv        $v0, $s1, $v0
    ctx->pc = 0x4b4aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
    // 0x4b4ab0: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x4b4ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x4b4ab4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4b4ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4b4ab8:
    // 0x4b4ab8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4b4ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b4abc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4b4abcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4ac0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4b4ac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b4ac4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b4ac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b4ac8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4b4ac8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b4acc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b4accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4AD0u;
        // 0x4b4ad4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4AD8u;
    // 0x4b4ad8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b4ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b4adc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b4adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4b4ae0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b4ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4b4ae4: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x4b4ae4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x4b4ae8: 0x2450f668  addiu       $s0, $v0, -0x998
    ctx->pc = 0x4b4ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964840));
    // 0x4b4aec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b4aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b4af0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x4b4af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4b4af4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4b4af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4b4af8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4b4af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b4afc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4b4afcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4b00: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x4b4b00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4b04: 0xc12aa26  jal         func_4AA898
    ctx->pc = 0x4B4B04u;
    SET_GPR_U32(ctx, 31, 0x4B4B0Cu);
    ctx->pc = 0x4B4B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4B04u;
    // 0x4b4b08: 0x35290800  ori         $t1, $t1, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA898u, 0x4B4B04u, 0x4B4B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4B0Cu;
label_4b4b0c:
    // 0x4b4b0c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B4B0Cu;
    {
        const bool branch_taken_0x4b4b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4B0Cu;
        // 0x4b4b10: 0x3c080066  lui         $t0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4b0c) {
            ctx->pc = 0x4B4B44u;
            goto label_4b4b44;
        }
    }
    ctx->pc = 0x4B4B14u;
    // 0x4b4b14: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x4b4b14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x4b4b18: 0x2508f690  addiu       $t0, $t0, -0x970
    ctx->pc = 0x4b4b18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964880));
    // 0x4b4b1c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x4b4b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4b4b20: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4b4b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4b4b24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4b4b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b4b28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4b4b28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4b2c: 0xc12aa26  jal         func_4AA898
    ctx->pc = 0x4B4B2Cu;
    SET_GPR_U32(ctx, 31, 0x4B4B34u);
    ctx->pc = 0x4B4B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4B2Cu;
    // 0x4b4b30: 0x35290800  ori         $t1, $t1, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA898u, 0x4B4B2Cu, 0x4B4B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4B34u;
label_4b4b34:
    // 0x4b4b34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4B34u;
    {
        const bool branch_taken_0x4b4b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4B34u;
        // 0x4b4b38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4b34) {
            ctx->pc = 0x4B4B48u;
            goto label_4b4b48;
        }
    }
    ctx->pc = 0x4B4B3Cu;
    // 0x4b4b3c: 0xc12aa86  jal         func_4AAA18
    ctx->pc = 0x4B4B3Cu;
    SET_GPR_U32(ctx, 31, 0x4B4B44u);
    ctx->pc = 0x4B4B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4B3Cu;
    // 0x4b4b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x4B4B3Cu, 0x4B4B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4B44u;
label_4b4b44:
    // 0x4b4b44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b4b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b4b48:
    // 0x4b4b48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b4b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b4b4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b4b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4b50: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4B50u;
        // 0x4b4b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4B58u;
    // 0x4b4b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b4b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b4b5c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4b4b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4b4b60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b4b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b4b64: 0xc12aa86  jal         func_4AAA18
    ctx->pc = 0x4B4B64u;
    SET_GPR_U32(ctx, 31, 0x4B4B6Cu);
    ctx->pc = 0x4B4B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4B64u;
    // 0x4b4b68: 0x2484f668  addiu       $a0, $a0, -0x998 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x4B4B64u, 0x4B4B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4B6Cu;
label_4b4b6c:
    // 0x4b4b6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b4b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4b70: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4B70u;
        // 0x4b4b74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4B78u;
    // 0x4b4b78: 0x410c2  srl         $v0, $a0, 3
    ctx->pc = 0x4b4b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x4b4b7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b4b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b4b80: 0x62100a  movz        $v0, $v1, $v0
    ctx->pc = 0x4b4b80u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x4b4b84: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4B84u;
        // 0x4b4b88: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4B8Cu;
    // 0x4b4b8c: 0x0  nop
    ctx->pc = 0x4b4b8cu;
    // NOP
    // 0x4b4b90: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x4b4b90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x4b4b94: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x4b4b94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x4b4b98: 0xa0800009  sb          $zero, 0x9($a0)
    ctx->pc = 0x4b4b98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x4b4b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4B9Cu;
        // 0x4b4ba0: 0xa0800008  sb          $zero, 0x8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4BA4u;
    // 0x4b4ba4: 0x0  nop
    ctx->pc = 0x4b4ba4u;
    // NOP
    // 0x4b4ba8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4b4ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4b4bac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b4bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b4bb0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4b4bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4b4bb4: 0x24840007  addiu       $a0, $a0, 0x7
    ctx->pc = 0x4b4bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x4b4bb8: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x4b4bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x4b4bbc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4b4bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4b4bc0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4b4bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4b4bc4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4b4bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4b4bc8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4b4bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4b4bcc: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x4b4bccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b4bd0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4b4bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4b4bd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4b4bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4bd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b4bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b4bdc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4b4bdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4be0: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x4b4be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x4b4be4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x4B4BE4u;
    {
        const bool branch_taken_0x4b4be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4BE4u;
        // 0x4b4be8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4be4) {
            ctx->pc = 0x4B4C30u;
            goto label_4b4c30;
        }
    }
    ctx->pc = 0x4B4BECu;
    // 0x4b4bec: 0x101c02  srl         $v1, $s0, 16
    ctx->pc = 0x4b4becu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x4b4bf0: 0x3062ff00  andi        $v0, $v1, 0xFF00
    ctx->pc = 0x4b4bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x4b4bf4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B4BF4u;
    {
        const bool branch_taken_0x4b4bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4BF4u;
        // 0x4b4bf8: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4bf4) {
            ctx->pc = 0x4B4C18u;
            goto label_4b4c18;
        }
    }
    ctx->pc = 0x4B4BFCu;
    // 0x4b4bfc: 0x102602  srl         $a0, $s0, 24
    ctx->pc = 0x4b4bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x4b4c00: 0x2442c8c8  addiu       $v0, $v0, -0x3738
    ctx->pc = 0x4b4c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953160));
    // 0x4b4c04: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4b4c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4b4c08: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x4b4c08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b4c0c: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x4b4c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x4b4c10: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4B4C10u;
    {
        const bool branch_taken_0x4b4c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4C10u;
        // 0x4b4c14: 0x307200ff  andi        $s2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4c10) {
            ctx->pc = 0x4B4C64u;
            goto label_4b4c64;
        }
    }
    ctx->pc = 0x4B4C18u;
label_4b4c18:
    // 0x4b4c18: 0x2442c8c8  addiu       $v0, $v0, -0x3738
    ctx->pc = 0x4b4c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953160));
    // 0x4b4c1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4b4c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b4c20: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4b4c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b4c24: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4b4c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4b4c28: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4B4C28u;
    {
        const bool branch_taken_0x4b4c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4C28u;
        // 0x4b4c2c: 0x307200ff  andi        $s2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4c28) {
            ctx->pc = 0x4B4C64u;
            goto label_4b4c64;
        }
    }
    ctx->pc = 0x4B4C30u;
label_4b4c30:
    // 0x4b4c30: 0x3082ff00  andi        $v0, $a0, 0xFF00
    ctx->pc = 0x4b4c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x4b4c34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B4C34u;
    {
        const bool branch_taken_0x4b4c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4C34u;
        // 0x4b4c38: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4c34) {
            ctx->pc = 0x4B4C58u;
            goto label_4b4c58;
        }
    }
    ctx->pc = 0x4B4C3Cu;
    // 0x4b4c3c: 0x102202  srl         $a0, $s0, 8
    ctx->pc = 0x4b4c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x4b4c40: 0x2442c8c8  addiu       $v0, $v0, -0x3738
    ctx->pc = 0x4b4c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953160));
    // 0x4b4c44: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4b4c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4b4c48: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x4b4c48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b4c4c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x4b4c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x4b4c50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4C50u;
    {
        const bool branch_taken_0x4b4c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4C50u;
        // 0x4b4c54: 0x307200ff  andi        $s2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4c50) {
            ctx->pc = 0x4B4C64u;
            goto label_4b4c64;
        }
    }
    ctx->pc = 0x4B4C58u;
label_4b4c58:
    // 0x4b4c58: 0x2442c8c8  addiu       $v0, $v0, -0x3738
    ctx->pc = 0x4b4c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953160));
    // 0x4b4c5c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4b4c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4b4c60: 0x90520000  lbu         $s2, 0x0($v0)
    ctx->pc = 0x4b4c60u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4b4c64:
    // 0x4b4c64: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B4C64u;
    {
        const bool branch_taken_0x4b4c64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4C64u;
        // 0x4b4c68: 0x1080c2  srl         $s0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4c64) {
            ctx->pc = 0x4B4C8Cu;
            goto label_4b4c8c;
        }
    }
    ctx->pc = 0x4B4C6Cu;
    // 0x4b4c6c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4b4c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4b4c70: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4b4c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x4b4c74: 0x2484f668  addiu       $a0, $a0, -0x998
    ctx->pc = 0x4b4c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964840));
    // 0x4b4c78: 0xc12a936  jal         func_4AA4D8
    ctx->pc = 0x4B4C78u;
    SET_GPR_U32(ctx, 31, 0x4B4C80u);
    ctx->pc = 0x4B4C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4C78u;
    // 0x4b4c7c: 0x34a50800  ori         $a1, $a1, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA4D8u, 0x4B4C78u, 0x4B4C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4C80u;
label_4b4c80:
    // 0x4b4c80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4b4c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4c84: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x4B4C84u;
    {
        const bool branch_taken_0x4b4c84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4C84u;
        // 0x4b4c88: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4c84) {
            ctx->pc = 0x4B4CECu;
            goto label_4b4cec;
        }
    }
    ctx->pc = 0x4B4C8Cu;
label_4b4c8c:
    // 0x4b4c8c: 0x56600008  bnel        $s3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B4C8Cu;
    {
        const bool branch_taken_0x4b4c8c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b4c8c) {
            ctx->pc = 0x4B4C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B4C8Cu;
            // 0x4b4c90: 0xa2320008  sb          $s2, 0x8($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4CB0u;
            goto label_4b4cb0;
        }
    }
    ctx->pc = 0x4B4C94u;
    // 0x4b4c94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b4c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4c98: 0xc127ca4  jal         func_49F290
    ctx->pc = 0x4B4C98u;
    SET_GPR_U32(ctx, 31, 0x4B4CA0u);
    ctx->pc = 0x4B4C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4C98u;
    // 0x4b4c9c: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x4B4C98u, 0x4B4CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4CA0u;
label_4b4ca0:
    // 0x4b4ca0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4b4ca0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4ca4: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x4B4CA4u;
    {
        const bool branch_taken_0x4b4ca4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4CA4u;
        // 0x4b4ca8: 0x36940002  ori         $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4ca4) {
            ctx->pc = 0x4B4CD0u;
            goto label_4b4cd0;
        }
    }
    ctx->pc = 0x4B4CACu;
    // 0x4b4cac: 0xa2320008  sb          $s2, 0x8($s1)
    ctx->pc = 0x4b4cacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 18));
label_4b4cb0:
    // 0x4b4cb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b4cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4cb4: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x4b4cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x4b4cb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b4cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4cbc: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4B4CBCu;
    SET_GPR_U32(ctx, 31, 0x4B4CC4u);
    ctx->pc = 0x4B4CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4CBCu;
    // 0x4b4cc0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4B4CBCu, 0x4B4CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4CC4u;
label_4b4cc4:
    // 0x4b4cc4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x4b4cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x4b4cc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4B4CC8u;
    {
        const bool branch_taken_0x4b4cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4CC8u;
        // 0x4b4ccc: 0xa2340009  sb          $s4, 0x9($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4cc8) {
            ctx->pc = 0x4B4CECu;
            goto label_4b4cec;
        }
    }
    ctx->pc = 0x4B4CD0u;
label_4b4cd0:
    // 0x4b4cd0: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x4b4cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x4b4cd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4CD4u;
    {
        const bool branch_taken_0x4b4cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4CD4u;
        // 0x4b4cd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4cd4) {
            ctx->pc = 0x4B4CE8u;
            goto label_4b4ce8;
        }
    }
    ctx->pc = 0x4B4CDCu;
    // 0x4b4cdc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4b4cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4b4ce0: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x4B4CE0u;
    SET_GPR_U32(ctx, 31, 0x4B4CE8u);
    ctx->pc = 0x4B4CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4CE0u;
    // 0x4b4ce4: 0x2484f668  addiu       $a0, $a0, -0x998 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4B4CE0u, 0x4B4CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4CE8u;
label_4b4ce8:
    // 0x4b4ce8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b4ce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b4cec:
    // 0x4b4cec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b4cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4cf0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4b4cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b4cf4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4b4cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b4cf8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4b4cf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b4cfc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4b4cfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b4d00: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4b4d00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b4d04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b4d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4d08: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4D08u;
        // 0x4b4d0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4D10u;
    // 0x4b4d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b4d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b4d14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b4d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4b4d18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b4d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b4d1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b4d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4d20: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x4b4d20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x4b4d24: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4b4d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4b4d28: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4D28u;
    {
        const bool branch_taken_0x4b4d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4d28) {
            ctx->pc = 0x4B4D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B4D28u;
            // 0x4b4d2c: 0x92020009  lbu         $v0, 0x9($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4D3Cu;
            goto label_4b4d3c;
        }
    }
    ctx->pc = 0x4B4D30u;
    // 0x4b4d30: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4B4D30u;
    SET_GPR_U32(ctx, 31, 0x4B4D38u);
    ctx->pc = 0x4B4D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4D30u;
    // 0x4b4d34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4B4D30u, 0x4B4D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4D38u;
label_4b4d38:
    // 0x4b4d38: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x4b4d38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_4b4d3c:
    // 0x4b4d3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b4d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b4d40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4D40u;
    {
        const bool branch_taken_0x4b4d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4D40u;
        // 0x4b4d44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4d40) {
            ctx->pc = 0x4B4D54u;
            goto label_4b4d54;
        }
    }
    ctx->pc = 0x4B4D48u;
    // 0x4b4d48: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4b4d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4b4d4c: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x4B4D4Cu;
    SET_GPR_U32(ctx, 31, 0x4B4D54u);
    ctx->pc = 0x4B4D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4D4Cu;
    // 0x4b4d50: 0x2484f668  addiu       $a0, $a0, -0x998 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4B4D4Cu, 0x4B4D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4D54u;
label_4b4d54:
    // 0x4b4d54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b4d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b4d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b4d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4D5Cu;
        // 0x4b4d60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4D64u;
    // 0x4b4d64: 0x0  nop
    ctx->pc = 0x4b4d64u;
    // NOP
    // 0x4b4d68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b4d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b4d6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4b4d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4d70: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4b4d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4b4d74: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4b4d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4b4d78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4b4d78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4d7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b4d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4b4d80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b4d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4d84: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4b4d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4b4d88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4b4d88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4d8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b4d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b4d90: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4b4d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4b4d94: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x4B4D94u;
    {
        const bool branch_taken_0x4b4d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4D94u;
        // 0x4b4d98: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4d94) {
            ctx->pc = 0x4B4E44u;
            goto label_4b4e44;
        }
    }
    ctx->pc = 0x4B4D9Cu;
    // 0x4b4d9c: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x4b4d9cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b4da0: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x4b4da0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4da4: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x4b4da4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4b4da8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b4da8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4dac: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x4b4dacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4b4db0:
    // 0x4b4db0: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x4b4db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x4b4db4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x4b4db4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b4db8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4DB8u;
    {
        const bool branch_taken_0x4b4db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b4db8) {
            ctx->pc = 0x4B4DCCu;
            goto label_4b4dcc;
        }
    }
    ctx->pc = 0x4B4DC0u;
    // 0x4b4dc0: 0x110880a  movz        $s1, $t0, $s0
    ctx->pc = 0x4b4dc0u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
    // 0x4b4dc4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x4B4DC4u;
    {
        const bool branch_taken_0x4b4dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4DC4u;
        // 0x4b4dc8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4dc4) {
            ctx->pc = 0x4B4E2Cu;
            goto label_4b4e2c;
        }
    }
    ctx->pc = 0x4B4DCCu;
label_4b4dcc:
    // 0x4b4dcc: 0x104c0015  beq         $v0, $t4, . + 4 + (0x15 << 2)
    ctx->pc = 0x4B4DCCu;
    {
        const bool branch_taken_0x4b4dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        ctx->pc = 0x4B4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4DCCu;
        // 0x4b4dd0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4dcc) {
            ctx->pc = 0x4B4E24u;
            goto label_4b4e24;
        }
    }
    ctx->pc = 0x4B4DD4u;
    // 0x4b4dd4: 0x1473021  addu        $a2, $t2, $a3
    ctx->pc = 0x4b4dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x4b4dd8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x4b4dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4ddc: 0x0  nop
    ctx->pc = 0x4b4ddcu;
    // NOP
label_4b4de0:
    // 0x4b4de0: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x4b4de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x4b4de4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4B4DE4u;
    {
        const bool branch_taken_0x4b4de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4DE4u;
        // 0x4b4de8: 0x205102b  sltu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4de4) {
            ctx->pc = 0x4B4E30u;
            goto label_4b4e30;
        }
    }
    ctx->pc = 0x4B4DECu;
    // 0x4b4dec: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x4b4decu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b4df0: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x4b4df0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4b4df4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b4df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b4df8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B4DF8u;
    {
        const bool branch_taken_0x4b4df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b4df8) {
            ctx->pc = 0x4B4DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B4DF8u;
            // 0x4b4dfc: 0x838821  addu        $s1, $a0, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4E10u;
            goto label_4b4e10;
        }
    }
    ctx->pc = 0x4B4E00u;
    // 0x4b4e00: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x4b4e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4b4e04: 0x50880a  movz        $s1, $v0, $s0
    ctx->pc = 0x4b4e04u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x4b4e08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B4E08u;
    {
        const bool branch_taken_0x4b4e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4E08u;
        // 0x4b4e0c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4e08) {
            ctx->pc = 0x4B4E14u;
            goto label_4b4e14;
        }
    }
    ctx->pc = 0x4B4E10u;
label_4b4e10:
    // 0x4b4e10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4b4e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b4e14:
    // 0x4b4e14: 0x1605fff2  bne         $s0, $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x4B4E14u;
    {
        const bool branch_taken_0x4b4e14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x4B4E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4E14u;
        // 0x4b4e18: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4e14) {
            ctx->pc = 0x4B4DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4de0;
        }
    }
    ctx->pc = 0x4B4E1Cu;
    // 0x4b4e1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4E1Cu;
    {
        const bool branch_taken_0x4b4e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4E1Cu;
        // 0x4b4e20: 0x205102b  sltu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4e1c) {
            ctx->pc = 0x4B4E30u;
            goto label_4b4e30;
        }
    }
    ctx->pc = 0x4B4E24u;
label_4b4e24:
    // 0x4b4e24: 0x788c0  sll         $s1, $a3, 3
    ctx->pc = 0x4b4e24u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x4b4e28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4b4e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b4e2c:
    // 0x4b4e2c: 0x205102b  sltu        $v0, $s0, $a1
    ctx->pc = 0x4b4e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4b4e30:
    // 0x4b4e30: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4B4E30u;
    {
        const bool branch_taken_0x4b4e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4E30u;
        // 0x4b4e34: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4e30) {
            ctx->pc = 0x4B4E7Cu;
            goto label_4b4e7c;
        }
    }
    ctx->pc = 0x4B4E38u;
    // 0x4b4e38: 0xeb102b  sltu        $v0, $a3, $t3
    ctx->pc = 0x4b4e38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x4b4e3c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x4B4E3Cu;
    {
        const bool branch_taken_0x4b4e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4E3Cu;
        // 0x4b4e40: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4e3c) {
            ctx->pc = 0x4B4DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4db0;
        }
    }
    ctx->pc = 0x4B4E44u;
label_4b4e44:
    // 0x4b4e44: 0x205102b  sltu        $v0, $s0, $a1
    ctx->pc = 0x4b4e44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4b4e48: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4B4E48u;
    {
        const bool branch_taken_0x4b4e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b4e48) {
            ctx->pc = 0x4B4E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B4E48u;
            // 0x4b4e4c: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4E84u;
            goto label_4b4e84;
        }
    }
    ctx->pc = 0x4B4E50u;
    // 0x4b4e50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b4e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4e54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4b4e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4e58: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4b4e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4e5c: 0xc12d3ba  jal         func_4B4EE8
    ctx->pc = 0x4B4E5Cu;
    SET_GPR_U32(ctx, 31, 0x4B4E64u);
    ctx->pc = 0x4B4E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4E5Cu;
    // 0x4b4e60: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4EE8u, 0x4B4E5Cu, 0x4B4E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4E64u;
label_4b4e64:
    // 0x4b4e64: 0x92430008  lbu         $v1, 0x8($s2)
    ctx->pc = 0x4b4e64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4b4e68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b4e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b4e6c: 0x701804  sllv        $v1, $s0, $v1
    ctx->pc = 0x4b4e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
    // 0x4b4e70: 0x2231825  or          $v1, $s1, $v1
    ctx->pc = 0x4b4e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x4b4e74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4E74u;
    {
        const bool branch_taken_0x4b4e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4E74u;
        // 0x4b4e78: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4e74) {
            ctx->pc = 0x4B4E88u;
            goto label_4b4e88;
        }
    }
    ctx->pc = 0x4B4E7Cu;
label_4b4e7c:
    // 0x4b4e7c: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x4B4E7Cu;
    {
        const bool branch_taken_0x4b4e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4E7Cu;
        // 0x4b4e80: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4e7c) {
            ctx->pc = 0x4B4E44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4e44;
        }
    }
    ctx->pc = 0x4B4E84u;
label_4b4e84:
    // 0x4b4e84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b4e84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b4e88:
    // 0x4b4e88: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4b4e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b4e8c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4b4e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b4e90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b4e90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b4e94: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4b4e94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b4e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b4e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4E9Cu;
        // 0x4b4ea0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4EA4u;
    // 0x4b4ea4: 0x0  nop
    ctx->pc = 0x4b4ea4u;
    // NOP
    ctx->pc = 0x4b4ea8u;
}
