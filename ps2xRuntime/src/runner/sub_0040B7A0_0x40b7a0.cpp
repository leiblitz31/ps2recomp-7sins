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

// Function: sub_0040B7A0
// Address: 0x40b7a0 - 0x40b8f0
void sub_0040B7A0_0x40b7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040B7A0_0x40b7a0");
#endif

    switch (ctx->pc) {
        case 0x40b808u: goto label_40b808;
        case 0x40b880u: goto label_40b880;
        case 0x40b8bcu: goto label_40b8bc;
        case 0x40b8ccu: goto label_40b8cc;
        default: break;
    }

    ctx->pc = 0x40b7a0u;

    // 0x40b7a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x40b7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x40b7a4: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x40b7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x40b7a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40b7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x40b7ac: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x40b7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
    // 0x40b7b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x40b7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x40b7b4: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x40b7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x40b7b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x40b7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x40b7bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x40b7bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b7c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40b7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40b7c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x40b7c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b7c8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x40b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x40b7cc: 0x8e300064  lw          $s0, 0x64($s1)
    ctx->pc = 0x40b7ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x40b7d0: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x40b7d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x40b7d4: 0x8e480008  lw          $t0, 0x8($s2)
    ctx->pc = 0x40b7d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x40b7d8: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x40b7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x40b7dc: 0x8e290070  lw          $t1, 0x70($s1)
    ctx->pc = 0x40b7dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x40b7e0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x40b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x40b7e4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x40b7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x40b7e8: 0x2452823  subu        $a1, $s2, $a1
    ctx->pc = 0x40b7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x40b7ec: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x40b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x40b7f0: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x40b7f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x40b7f4: 0x1048000b  beq         $v0, $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x40B7F4u;
    {
        const bool branch_taken_0x40b7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x40B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B7F4u;
        // 0x40b7f8: 0x53883  sra         $a3, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b7f4) {
            ctx->pc = 0x40B824u;
            goto label_40b824;
        }
    }
    ctx->pc = 0x40B7FCu;
    // 0x40b7fc: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x40b7fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b800: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x40b800u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x40b804: 0x0  nop
    ctx->pc = 0x40b804u;
    // NOP
label_40b808:
    // 0x40b808: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x40b808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x40b80c: 0x0  nop
    ctx->pc = 0x40b80cu;
    // NOP
    // 0x40b810: 0x0  nop
    ctx->pc = 0x40b810u;
    // NOP
    // 0x40b814: 0x0  nop
    ctx->pc = 0x40b814u;
    // NOP
    // 0x40b818: 0x0  nop
    ctx->pc = 0x40b818u;
    // NOP
    // 0x40b81c: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x40B81Cu;
    {
        const bool branch_taken_0x40b81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x40b81c) {
            ctx->pc = 0x40B820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40B81Cu;
            // 0x40b820: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40B808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40b808;
        }
    }
    ctx->pc = 0x40B824u;
label_40b824:
    // 0x40b824: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x40b824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x40b828: 0x92030070  lbu         $v1, 0x70($s0)
    ctx->pc = 0x40b828u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x40b82c: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x40b82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x40b830: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40b830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b834: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x40B834u;
    {
        const bool branch_taken_0x40b834 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x40B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B834u;
        // 0x40b838: 0xa0c30001  sb          $v1, 0x1($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b834) {
            ctx->pc = 0x40B844u;
            goto label_40b844;
        }
    }
    ctx->pc = 0x40B83Cu;
    // 0x40b83c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x40B83Cu;
    {
        const bool branch_taken_0x40b83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B83Cu;
        // 0x40b840: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b83c) {
            ctx->pc = 0x40B854u;
            goto label_40b854;
        }
    }
    ctx->pc = 0x40B844u;
label_40b844:
    // 0x40b844: 0x90c2ffff  lbu         $v0, -0x1($a2)
    ctx->pc = 0x40b844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x40b848: 0x90c3fffe  lbu         $v1, -0x2($a2)
    ctx->pc = 0x40b848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967294)));
    // 0x40b84c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x40b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x40b850: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x40b850u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_40b854:
    // 0x40b854: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x40b854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x40b858: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x40b858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x40b85c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x40b85cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40b860: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40b860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b864: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x40b864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x40b868: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x40b868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x40b86c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x40B86Cu;
    {
        const bool branch_taken_0x40b86c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B86Cu;
        // 0x40b870: 0x1221021  addu        $v0, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b86c) {
            ctx->pc = 0x40B8ACu;
            goto label_40b8ac;
        }
    }
    ctx->pc = 0x40B874u;
    // 0x40b874: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x40b874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b878: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x40b878u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b87c: 0x0  nop
    ctx->pc = 0x40b87cu;
    // NOP
label_40b880:
    // 0x40b880: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x40b880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x40b884: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x40b884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x40b888: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x40b888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x40b88c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x40b88cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x40b890: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x40b890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x40b894: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x40b894u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x40b898: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x40b898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x40b89c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x40b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x40b8a0: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x40b8a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x40b8a4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x40B8A4u;
    {
        const bool branch_taken_0x40b8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B8A4u;
        // 0x40b8a8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b8a4) {
            ctx->pc = 0x40B880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40b880;
        }
    }
    ctx->pc = 0x40B8ACu;
label_40b8ac:
    // 0x40b8ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40b8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b8b0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x40b8b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b8b4: 0xc102bc2  jal         func_40AF08
    ctx->pc = 0x40B8B4u;
    SET_GPR_U32(ctx, 31, 0x40B8BCu);
    ctx->pc = 0x40B8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B8B4u;
    // 0x40b8b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40AF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40AF08u, 0x40B8B4u, 0x40B8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B8BCu;
label_40b8bc:
    // 0x40b8bc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x40b8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x40b8c0: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x40b8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x40b8c4: 0xc0e3df2  jal         func_38F7C8
    ctx->pc = 0x40B8C4u;
    SET_GPR_U32(ctx, 31, 0x40B8CCu);
    ctx->pc = 0x40B8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B8C4u;
    // 0x40b8c8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F7C8u, 0x40B8C4u, 0x40B8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B8CCu;
label_40b8cc:
    // 0x40b8cc: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x40b8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x40b8d0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x40b8d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b8d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x40b8d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40b8d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40b8d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40b8dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x40b8dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40b8e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40b8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40b8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x40B8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B8E4u;
        // 0x40b8e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40B8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40B8ECu;
    // 0x40b8ec: 0x0  nop
    ctx->pc = 0x40b8ecu;
    // NOP
    ctx->pc = 0x40b8f0u;
}
