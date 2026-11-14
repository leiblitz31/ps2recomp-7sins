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

// Function: sub_0044A758
// Address: 0x44a758 - 0x44adc0
void sub_0044A758_0x44a758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044A758_0x44a758");
#endif

    switch (ctx->pc) {
        case 0x44a798u: goto label_44a798;
        case 0x44a7c0u: goto label_44a7c0;
        case 0x44a870u: goto label_44a870;
        case 0x44a8c4u: goto label_44a8c4;
        case 0x44a928u: goto label_44a928;
        case 0x44a968u: goto label_44a968;
        case 0x44a9c0u: goto label_44a9c0;
        case 0x44aa50u: goto label_44aa50;
        case 0x44aa98u: goto label_44aa98;
        case 0x44aab0u: goto label_44aab0;
        case 0x44ab70u: goto label_44ab70;
        case 0x44ac24u: goto label_44ac24;
        case 0x44ac38u: goto label_44ac38;
        case 0x44ac40u: goto label_44ac40;
        case 0x44ace0u: goto label_44ace0;
        default: break;
    }

    ctx->pc = 0x44a758u;

    // 0x44a758: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x44a758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x44a75c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x44a75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x44a760: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x44a760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x44a764: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x44a764u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a768: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x44a768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x44a76c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x44a76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x44a770: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x44a770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x44a774: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x44a774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x44a778: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x44a778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x44a77c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x44a77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x44a780: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44a780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x44a784: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x44a784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x44a788: 0x8fd00008  lw          $s0, 0x8($fp)
    ctx->pc = 0x44a788u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x44a78c: 0x8fd70004  lw          $s7, 0x4($fp)
    ctx->pc = 0x44a78cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x44a790: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x44a790u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a794: 0x0  nop
    ctx->pc = 0x44a794u;
    // NOP
label_44a798:
    // 0x44a798: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x44a798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x44a79c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x44a79cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a7a0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x44a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x44a7a4: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x44A7A4u;
    {
        const bool branch_taken_0x44a7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A7A4u;
        // 0x44a7a8: 0x24780020  addiu       $t8, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a7a4) {
            ctx->pc = 0x44A94Cu;
            goto label_44a94c;
        }
    }
    ctx->pc = 0x44A7ACu;
    // 0x44a7ac: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x44a7acu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x44a7b0: 0x24110024  addiu       $s1, $zero, 0x24
    ctx->pc = 0x44a7b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x44a7b4: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x44a7b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x44a7b8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x44a7b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44a7bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x44a7bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44a7c0:
    // 0x44a7c0: 0x8f020004  lw          $v0, 0x4($t8)
    ctx->pc = 0x44a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x44a7c4: 0x1622021  addu        $a0, $t3, $v0
    ctx->pc = 0x44a7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x44a7c8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x44a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x44a7cc: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x44A7CCu;
    {
        const bool branch_taken_0x44a7cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A7CCu;
        // 0x44a7d0: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a7cc) {
            ctx->pc = 0x44A938u;
            goto label_44a938;
        }
    }
    ctx->pc = 0x44A7D4u;
    // 0x44a7d4: 0x8d82001c  lw          $v0, 0x1C($t4)
    ctx->pc = 0x44a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 28)));
    // 0x44a7d8: 0x8c490008  lw          $t1, 0x8($v0)
    ctx->pc = 0x44a7d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x44a7dc: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x44a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x44a7e0: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x44A7E0u;
    {
        const bool branch_taken_0x44a7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A7E0u;
        // 0x44a7e4: 0x8c870000  lw          $a3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a7e0) {
            ctx->pc = 0x44A8C0u;
            goto label_44a8c0;
        }
    }
    ctx->pc = 0x44A7E8u;
    // 0x44a7e8: 0x8d24000c  lw          $a0, 0xC($t1)
    ctx->pc = 0x44a7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x44a7ec: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x44A7ECu;
    {
        const bool branch_taken_0x44a7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A7ECu;
        // 0x44a7f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a7ec) {
            ctx->pc = 0x44A8C0u;
            goto label_44a8c0;
        }
    }
    ctx->pc = 0x44A7F4u;
    // 0x44a7f4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x44a7f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a7f8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x44a7f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a7fc: 0x19000013  blez        $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x44A7FCu;
    {
        const bool branch_taken_0x44a7fc = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x44A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A7FCu;
        // 0x44a800: 0x31050003  andi        $a1, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a7fc) {
            ctx->pc = 0x44A84Cu;
            goto label_44a84c;
        }
    }
    ctx->pc = 0x44A804u;
    // 0x44a804: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x44A804u;
    {
        const bool branch_taken_0x44a804 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A804u;
        // 0x44a808: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a804) {
            ctx->pc = 0x44A868u;
            goto label_44a868;
        }
    }
    ctx->pc = 0x44A80Cu;
    // 0x44a80c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x44A80Cu;
    {
        const bool branch_taken_0x44a80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44a80c) {
            ctx->pc = 0x44A810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A80Cu;
            // 0x44a810: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A850u;
            goto label_44a850;
        }
    }
    ctx->pc = 0x44A814u;
    // 0x44a814: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x44a814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x44a818: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x44A818u;
    {
        const bool branch_taken_0x44a818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44a818) {
            ctx->pc = 0x44A81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A818u;
            // 0x44a81c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A83Cu;
            goto label_44a83c;
        }
    }
    ctx->pc = 0x44A820u;
    // 0x44a820: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x44a820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44a824: 0x1047002b  beq         $v0, $a3, . + 4 + (0x2B << 2)
    ctx->pc = 0x44A824u;
    {
        const bool branch_taken_0x44a824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x44A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A824u;
        // 0x44a828: 0x24820024  addiu       $v0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a824) {
            ctx->pc = 0x44A8D4u;
            goto label_44a8d4;
        }
    }
    ctx->pc = 0x44A82Cu;
    // 0x44a82c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x44a82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44a830: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x44a830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a834: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x44a834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a838: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x44a838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_44a83c:
    // 0x44a83c: 0x10470025  beq         $v0, $a3, . + 4 + (0x25 << 2)
    ctx->pc = 0x44A83Cu;
    {
        const bool branch_taken_0x44a83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x44A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A83Cu;
        // 0x44a840: 0x24c60024  addiu       $a2, $a2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a83c) {
            ctx->pc = 0x44A8D4u;
            goto label_44a8d4;
        }
    }
    ctx->pc = 0x44A844u;
    // 0x44a844: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x44a844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x44a848: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x44a848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_44a84c:
    // 0x44a84c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x44a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_44a850:
    // 0x44a850: 0x10470020  beq         $v0, $a3, . + 4 + (0x20 << 2)
    ctx->pc = 0x44A850u;
    {
        const bool branch_taken_0x44a850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x44A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A850u;
        // 0x44a854: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a850) {
            ctx->pc = 0x44A8D4u;
            goto label_44a8d4;
        }
    }
    ctx->pc = 0x44A858u;
    // 0x44a858: 0x24c60024  addiu       $a2, $a2, 0x24
    ctx->pc = 0x44a858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
    // 0x44a85c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x44a85cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x44a860: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x44A860u;
    {
        const bool branch_taken_0x44a860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A860u;
        // 0x44a864: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a860) {
            ctx->pc = 0x44A8C0u;
            goto label_44a8c0;
        }
    }
    ctx->pc = 0x44A868u;
label_44a868:
    // 0x44a868: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x44a868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a86c: 0x0  nop
    ctx->pc = 0x44a86cu;
    // NOP
label_44a870:
    // 0x44a870: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x44a870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44a874: 0x10470013  beq         $v0, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x44A874u;
    {
        const bool branch_taken_0x44a874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x44A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A874u;
        // 0x44a878: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a874) {
            ctx->pc = 0x44A8C4u;
            goto label_44a8c4;
        }
    }
    ctx->pc = 0x44A87Cu;
    // 0x44a87c: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x44a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x44a880: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x44a880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x44a884: 0x10470013  beq         $v0, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x44A884u;
    {
        const bool branch_taken_0x44a884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x44A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A884u;
        // 0x44a888: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a884) {
            ctx->pc = 0x44A8D4u;
            goto label_44a8d4;
        }
    }
    ctx->pc = 0x44A88Cu;
    // 0x44a88c: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x44a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x44a890: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x44a890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x44a894: 0x1047000f  beq         $v0, $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x44A894u;
    {
        const bool branch_taken_0x44a894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x44A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A894u;
        // 0x44a898: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a894) {
            ctx->pc = 0x44A8D4u;
            goto label_44a8d4;
        }
    }
    ctx->pc = 0x44A89Cu;
    // 0x44a89c: 0x8ca2006c  lw          $v0, 0x6C($a1)
    ctx->pc = 0x44a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x44a8a0: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x44a8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x44a8a4: 0x1047000b  beq         $v0, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x44A8A4u;
    {
        const bool branch_taken_0x44a8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x44A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A8A4u;
        // 0x44a8a8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a8a4) {
            ctx->pc = 0x44A8D4u;
            goto label_44a8d4;
        }
    }
    ctx->pc = 0x44A8ACu;
    // 0x44a8ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x44a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x44a8b0: 0x24a50090  addiu       $a1, $a1, 0x90
    ctx->pc = 0x44a8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x44a8b4: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x44a8b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x44a8b8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x44A8B8u;
    {
        const bool branch_taken_0x44a8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A8B8u;
        // 0x44a8bc: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a8b8) {
            ctx->pc = 0x44A870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a870;
        }
    }
    ctx->pc = 0x44A8C0u;
label_44a8c0:
    // 0x44a8c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x44a8c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44a8c4:
    // 0x44a8c4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x44A8C4u;
    {
        const bool branch_taken_0x44a8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44a8c4) {
            ctx->pc = 0x44A8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A8C4u;
            // 0x44a8c8: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A8DCu;
            goto label_44a8dc;
        }
    }
    ctx->pc = 0x44A8CCu;
    // 0x44a8cc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x44A8CCu;
    {
        const bool branch_taken_0x44a8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44a8cc) {
            ctx->pc = 0x44A914u;
            goto label_44a914;
        }
    }
    ctx->pc = 0x44A8D4u;
label_44a8d4:
    // 0x44a8d4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x44A8D4u;
    {
        const bool branch_taken_0x44a8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A8D4u;
        // 0x44a8d8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a8d4) {
            ctx->pc = 0x44A8C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a8c4;
        }
    }
    ctx->pc = 0x44A8DCu;
label_44a8dc:
    // 0x44a8dc: 0x8d24000c  lw          $a0, 0xC($t1)
    ctx->pc = 0x44a8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x44a8e0: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x44a8e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x44a8e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x44a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x44a8e8: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x44a8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x44a8ec: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x44a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x44a8f0: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x44a8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x44a8f4: 0xac4d0008  sw          $t5, 0x8($v0)
    ctx->pc = 0x44a8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 13));
    // 0x44a8f8: 0xac490014  sw          $t1, 0x14($v0)
    ctx->pc = 0x44a8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 9));
    // 0x44a8fc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x44a8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x44a900: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x44a900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x44a904: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x44a904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x44a908: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x44a908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x44a90c: 0xac4a001c  sw          $t2, 0x1C($v0)
    ctx->pc = 0x44a90cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 10));
    // 0x44a910: 0xac500020  sw          $s0, 0x20($v0)
    ctx->pc = 0x44a910u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 16));
label_44a914:
    // 0x44a914: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x44A914u;
    {
        const bool branch_taken_0x44a914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44a914) {
            ctx->pc = 0x44A918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A914u;
            // 0x44a918: 0x8f020000  lw          $v0, 0x0($t8) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A93Cu;
            goto label_44a93c;
        }
    }
    ctx->pc = 0x44A91Cu;
    // 0x44a91c: 0xafaf0000  sw          $t7, 0x0($sp)
    ctx->pc = 0x44a91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 15));
    // 0x44a920: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x44A920u;
    SET_GPR_U32(ctx, 31, 0x44A928u);
    ctx->pc = 0x44A924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A920u;
    // 0x44a924: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x44A920u, 0x44A928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A928u;
label_44a928:
    // 0x44a928: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x44a928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a92c: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x44A92Cu;
    {
        const bool branch_taken_0x44a92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A92Cu;
        // 0x44a930: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a92c) {
            ctx->pc = 0x44AC30u;
            goto label_44ac30;
        }
    }
    ctx->pc = 0x44A934u;
    // 0x44a934: 0x0  nop
    ctx->pc = 0x44a934u;
    // NOP
label_44a938:
    // 0x44a938: 0x8f020000  lw          $v0, 0x0($t8)
    ctx->pc = 0x44a938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
label_44a93c:
    // 0x44a93c: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x44a93cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x44a940: 0x1c2102b  sltu        $v0, $t6, $v0
    ctx->pc = 0x44a940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x44a944: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x44A944u;
    {
        const bool branch_taken_0x44a944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A944u;
        // 0x44a948: 0x256b000c  addiu       $t3, $t3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a944) {
            ctx->pc = 0x44A7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a7c0;
        }
    }
    ctx->pc = 0x44A94Cu;
label_44a94c:
    // 0x44a94c: 0x8d820004  lw          $v0, 0x4($t4)
    ctx->pc = 0x44a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x44a950: 0x1040010a  beqz        $v0, . + 4 + (0x10A << 2)
    ctx->pc = 0x44A950u;
    {
        const bool branch_taken_0x44a950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A950u;
        // 0x44a954: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a950) {
            ctx->pc = 0x44AD7Cu;
            goto label_44ad7c;
        }
    }
    ctx->pc = 0x44A958u;
    // 0x44a958: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x44a958u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x44a95c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x44a95cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a960: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x44a960u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x44a964: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x44a964u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44a968:
    // 0x44a968: 0x8d820008  lw          $v0, 0x8($t4)
    ctx->pc = 0x44a968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x44a96c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x44a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x44a970: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x44a970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44a974: 0x105100fb  beq         $v0, $s1, . + 4 + (0xFB << 2)
    ctx->pc = 0x44A974u;
    {
        const bool branch_taken_0x44a974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x44A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A974u;
        // 0x44a978: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a974) {
            ctx->pc = 0x44AD64u;
            goto label_44ad64;
        }
    }
    ctx->pc = 0x44A97Cu;
    // 0x44a97c: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x44a97cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x44a980: 0x433018  mult        $a2, $v0, $v1
    ctx->pc = 0x44a980u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x44a984: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x44a984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x44a988: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x44a988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x44a98c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x44a98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x44a990: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x44a990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x44a994: 0x75c821  addu        $t9, $v1, $s5
    ctx->pc = 0x44a994u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x44a998: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x44a998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44a99c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44a9a0: 0x106000f0  beqz        $v1, . + 4 + (0xF0 << 2)
    ctx->pc = 0x44A9A0u;
    {
        const bool branch_taken_0x44a9a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A9A0u;
        // 0x44a9a4: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a9a0) {
            ctx->pc = 0x44AD64u;
            goto label_44ad64;
        }
    }
    ctx->pc = 0x44A9A8u;
    // 0x44a9a8: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x44a9a8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
    // 0x44a9ac: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x44a9acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44a9b0: 0x1d3b004  sllv        $s6, $s3, $t6
    ctx->pc = 0x44a9b0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 14) & 0x1F));
    // 0x44a9b4: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x44a9b4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x44a9b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44a9b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a9bc: 0x0  nop
    ctx->pc = 0x44a9bcu;
    // NOP
label_44a9c0:
    // 0x44a9c0: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x44a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x44a9c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x44a9c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a9c8: 0x8f080000  lw          $t0, 0x0($t8)
    ctx->pc = 0x44a9c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x44a9cc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x44a9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x44a9d0: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x44a9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x44a9d4: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x44a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x44a9d8: 0x1100002d  beqz        $t0, . + 4 + (0x2D << 2)
    ctx->pc = 0x44A9D8u;
    {
        const bool branch_taken_0x44a9d8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A9D8u;
        // 0x44a9dc: 0x8c8a0000  lw          $t2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a9d8) {
            ctx->pc = 0x44AA90u;
            goto label_44aa90;
        }
    }
    ctx->pc = 0x44A9E0u;
    // 0x44a9e0: 0x8f090004  lw          $t1, 0x4($t8)
    ctx->pc = 0x44a9e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x44a9e4: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x44a9e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a9e8: 0x31630003  andi        $v1, $t3, 0x3
    ctx->pc = 0x44a9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x44a9ec: 0x19600010  blez        $t3, . + 4 + (0x10 << 2)
    ctx->pc = 0x44A9ECu;
    {
        const bool branch_taken_0x44a9ec = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x44A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A9ECu;
        // 0x44a9f0: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a9ec) {
            ctx->pc = 0x44AA30u;
            goto label_44aa30;
        }
    }
    ctx->pc = 0x44A9F4u;
    // 0x44a9f4: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x44A9F4u;
    {
        const bool branch_taken_0x44a9f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A9F4u;
        // 0x44a9f8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a9f4) {
            ctx->pc = 0x44AA4Cu;
            goto label_44aa4c;
        }
    }
    ctx->pc = 0x44A9FCu;
    // 0x44a9fc: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x44A9FCu;
    {
        const bool branch_taken_0x44a9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44a9fc) {
            ctx->pc = 0x44AA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A9FCu;
            // 0x44aa00: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44AA34u;
            goto label_44aa34;
        }
    }
    ctx->pc = 0x44AA04u;
    // 0x44aa04: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x44aa04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x44aa08: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x44AA08u;
    {
        const bool branch_taken_0x44aa08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44aa08) {
            ctx->pc = 0x44AA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44AA08u;
            // 0x44aa0c: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44AA24u;
            goto label_44aa24;
        }
    }
    ctx->pc = 0x44AA10u;
    // 0x44aa10: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x44aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x44aa14: 0x104a0024  beq         $v0, $t2, . + 4 + (0x24 << 2)
    ctx->pc = 0x44AA14u;
    {
        const bool branch_taken_0x44aa14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x44AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AA14u;
        // 0x44aa18: 0x2528000c  addiu       $t0, $t1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aa14) {
            ctx->pc = 0x44AAA8u;
            goto label_44aaa8;
        }
    }
    ctx->pc = 0x44AA1Cu;
    // 0x44aa1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x44aa1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44aa20: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x44aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_44aa24:
    // 0x44aa24: 0x104a0020  beq         $v0, $t2, . + 4 + (0x20 << 2)
    ctx->pc = 0x44AA24u;
    {
        const bool branch_taken_0x44aa24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x44AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AA24u;
        // 0x44aa28: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aa24) {
            ctx->pc = 0x44AAA8u;
            goto label_44aaa8;
        }
    }
    ctx->pc = 0x44AA2Cu;
    // 0x44aa2c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x44aa2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_44aa30:
    // 0x44aa30: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x44aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_44aa34:
    // 0x44aa34: 0x104a0018  beq         $v0, $t2, . + 4 + (0x18 << 2)
    ctx->pc = 0x44AA34u;
    {
        const bool branch_taken_0x44aa34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x44AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AA34u;
        // 0x44aa38: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aa34) {
            ctx->pc = 0x44AA98u;
            goto label_44aa98;
        }
    }
    ctx->pc = 0x44AA3Cu;
    // 0x44aa3c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x44aa3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x44aa40: 0xeb102b  sltu        $v0, $a3, $t3
    ctx->pc = 0x44aa40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x44aa44: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x44AA44u;
    {
        const bool branch_taken_0x44aa44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AA44u;
        // 0x44aa48: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aa44) {
            ctx->pc = 0x44AA90u;
            goto label_44aa90;
        }
    }
    ctx->pc = 0x44AA4Cu;
label_44aa4c:
    // 0x44aa4c: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x44aa4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_44aa50:
    // 0x44aa50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x44aa54: 0x104a0010  beq         $v0, $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x44AA54u;
    {
        const bool branch_taken_0x44aa54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x44AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AA54u;
        // 0x44aa58: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aa54) {
            ctx->pc = 0x44AA98u;
            goto label_44aa98;
        }
    }
    ctx->pc = 0x44AA5Cu;
    // 0x44aa5c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x44aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x44aa60: 0x104a0011  beq         $v0, $t2, . + 4 + (0x11 << 2)
    ctx->pc = 0x44AA60u;
    {
        const bool branch_taken_0x44aa60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x44AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AA60u;
        // 0x44aa64: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aa60) {
            ctx->pc = 0x44AAA8u;
            goto label_44aaa8;
        }
    }
    ctx->pc = 0x44AA68u;
    // 0x44aa68: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x44aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x44aa6c: 0x104a000e  beq         $v0, $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x44AA6Cu;
    {
        const bool branch_taken_0x44aa6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x44AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AA6Cu;
        // 0x44aa70: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aa6c) {
            ctx->pc = 0x44AAA8u;
            goto label_44aaa8;
        }
    }
    ctx->pc = 0x44AA74u;
    // 0x44aa74: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x44aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x44aa78: 0x104a000b  beq         $v0, $t2, . + 4 + (0xB << 2)
    ctx->pc = 0x44AA78u;
    {
        const bool branch_taken_0x44aa78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x44AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AA78u;
        // 0x44aa7c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aa78) {
            ctx->pc = 0x44AAA8u;
            goto label_44aaa8;
        }
    }
    ctx->pc = 0x44AA80u;
    // 0x44aa80: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x44aa80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x44aa84: 0xeb102b  sltu        $v0, $a3, $t3
    ctx->pc = 0x44aa84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x44aa88: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x44AA88u;
    {
        const bool branch_taken_0x44aa88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AA88u;
        // 0x44aa8c: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aa88) {
            ctx->pc = 0x44AA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44aa50;
        }
    }
    ctx->pc = 0x44AA90u;
label_44aa90:
    // 0x44aa90: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x44aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x44aa94: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x44aa94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_44aa98:
    // 0x44aa98: 0x544d0007  bnel        $v0, $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x44AA98u;
    {
        const bool branch_taken_0x44aa98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 13));
        if (branch_taken_0x44aa98) {
            ctx->pc = 0x44AA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44AA98u;
            // 0x44aa9c: 0x8f230004  lw          $v1, 0x4($t9) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44AAB8u;
            goto label_44aab8;
        }
    }
    ctx->pc = 0x44AAA0u;
    // 0x44aaa0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x44AAA0u;
    {
        const bool branch_taken_0x44aaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AAA0u;
        // 0x44aaa4: 0x8f220008  lw          $v0, 0x8($t9) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aaa0) {
            ctx->pc = 0x44AAC4u;
            goto label_44aac4;
        }
    }
    ctx->pc = 0x44AAA8u;
label_44aaa8:
    // 0x44aaa8: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x44AAA8u;
    {
        const bool branch_taken_0x44aaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AAA8u;
        // 0x44aaac: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aaa8) {
            ctx->pc = 0x44AA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44aa98;
        }
    }
    ctx->pc = 0x44AAB0u;
label_44aab0:
    // 0x44aab0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x44AAB0u;
    {
        const bool branch_taken_0x44aab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AAB0u;
        // 0x44aab4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aab0) {
            ctx->pc = 0x44ABC4u;
            goto label_44abc4;
        }
    }
    ctx->pc = 0x44AAB8u;
label_44aab8:
    // 0x44aab8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x44aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x44aabc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x44aac0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x44aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44aac4:
    // 0x44aac4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x44aac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x44aac8: 0x504700a0  beql        $v0, $a3, . + 4 + (0xA0 << 2)
    ctx->pc = 0x44AAC8u;
    {
        const bool branch_taken_0x44aac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x44aac8) {
            ctx->pc = 0x44AACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44AAC8u;
            // 0x44aacc: 0x8ca4001c  lw          $a0, 0x1C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44AD4Cu;
            goto label_44ad4c;
        }
    }
    ctx->pc = 0x44AAD0u;
    // 0x44aad0: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x44AAD0u;
    {
        const bool branch_taken_0x44aad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AAD0u;
        // 0x44aad4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aad0) {
            ctx->pc = 0x44AC48u;
            goto label_44ac48;
        }
    }
    ctx->pc = 0x44AAD8u;
    // 0x44aad8: 0x8d82001c  lw          $v0, 0x1C($t4)
    ctx->pc = 0x44aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 28)));
    // 0x44aadc: 0x8c4b0008  lw          $t3, 0x8($v0)
    ctx->pc = 0x44aadcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x44aae0: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x44aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x44aae4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x44AAE4u;
    {
        const bool branch_taken_0x44aae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AAE4u;
        // 0x44aae8: 0x8c890000  lw          $t1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aae4) {
            ctx->pc = 0x44ABC0u;
            goto label_44abc0;
        }
    }
    ctx->pc = 0x44AAECu;
    // 0x44aaec: 0x8d64000c  lw          $a0, 0xC($t3)
    ctx->pc = 0x44aaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x44aaf0: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x44AAF0u;
    {
        const bool branch_taken_0x44aaf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AAF0u;
        // 0x44aaf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aaf0) {
            ctx->pc = 0x44ABC0u;
            goto label_44abc0;
        }
    }
    ctx->pc = 0x44AAF8u;
    // 0x44aaf8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x44aaf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44aafc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x44aafcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ab00: 0x19400013  blez        $t2, . + 4 + (0x13 << 2)
    ctx->pc = 0x44AB00u;
    {
        const bool branch_taken_0x44ab00 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x44AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AB00u;
        // 0x44ab04: 0x31430003  andi        $v1, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ab00) {
            ctx->pc = 0x44AB50u;
            goto label_44ab50;
        }
    }
    ctx->pc = 0x44AB08u;
    // 0x44ab08: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x44AB08u;
    {
        const bool branch_taken_0x44ab08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AB08u;
        // 0x44ab0c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ab08) {
            ctx->pc = 0x44AB6Cu;
            goto label_44ab6c;
        }
    }
    ctx->pc = 0x44AB10u;
    // 0x44ab10: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x44AB10u;
    {
        const bool branch_taken_0x44ab10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44ab10) {
            ctx->pc = 0x44AB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44AB10u;
            // 0x44ab14: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44AB54u;
            goto label_44ab54;
        }
    }
    ctx->pc = 0x44AB18u;
    // 0x44ab18: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x44ab18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x44ab1c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x44AB1Cu;
    {
        const bool branch_taken_0x44ab1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44ab1c) {
            ctx->pc = 0x44AB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44AB1Cu;
            // 0x44ab20: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44AB40u;
            goto label_44ab40;
        }
    }
    ctx->pc = 0x44AB24u;
    // 0x44ab24: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x44ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44ab28: 0x1049ffe1  beq         $v0, $t1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x44AB28u;
    {
        const bool branch_taken_0x44ab28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x44AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AB28u;
        // 0x44ab2c: 0x24820024  addiu       $v0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ab28) {
            ctx->pc = 0x44AAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44aab0;
        }
    }
    ctx->pc = 0x44AB30u;
    // 0x44ab30: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x44ab30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44ab34: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x44ab34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ab38: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x44ab38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ab3c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x44ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_44ab40:
    // 0x44ab40: 0x1049ffdb  beq         $v0, $t1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x44AB40u;
    {
        const bool branch_taken_0x44ab40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x44AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AB40u;
        // 0x44ab44: 0x25080024  addiu       $t0, $t0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ab40) {
            ctx->pc = 0x44AAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44aab0;
        }
    }
    ctx->pc = 0x44AB48u;
    // 0x44ab48: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x44ab48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x44ab4c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x44ab4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_44ab50:
    // 0x44ab50: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x44ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_44ab54:
    // 0x44ab54: 0x1049ffd6  beq         $v0, $t1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x44AB54u;
    {
        const bool branch_taken_0x44ab54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x44AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AB54u;
        // 0x44ab58: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ab54) {
            ctx->pc = 0x44AAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44aab0;
        }
    }
    ctx->pc = 0x44AB5Cu;
    // 0x44ab5c: 0x25080024  addiu       $t0, $t0, 0x24
    ctx->pc = 0x44ab5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 36));
    // 0x44ab60: 0xea102b  sltu        $v0, $a3, $t2
    ctx->pc = 0x44ab60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x44ab64: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x44AB64u;
    {
        const bool branch_taken_0x44ab64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AB64u;
        // 0x44ab68: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ab64) {
            ctx->pc = 0x44ABC0u;
            goto label_44abc0;
        }
    }
    ctx->pc = 0x44AB6Cu;
label_44ab6c:
    // 0x44ab6c: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x44ab6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_44ab70:
    // 0x44ab70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x44ab74: 0x10490013  beq         $v0, $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x44AB74u;
    {
        const bool branch_taken_0x44ab74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x44AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AB74u;
        // 0x44ab78: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ab74) {
            ctx->pc = 0x44ABC4u;
            goto label_44abc4;
        }
    }
    ctx->pc = 0x44AB7Cu;
    // 0x44ab7c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x44ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x44ab80: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x44ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x44ab84: 0x1049ffca  beq         $v0, $t1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x44AB84u;
    {
        const bool branch_taken_0x44ab84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x44AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AB84u;
        // 0x44ab88: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ab84) {
            ctx->pc = 0x44AAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44aab0;
        }
    }
    ctx->pc = 0x44AB8Cu;
    // 0x44ab8c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x44ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x44ab90: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x44ab90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x44ab94: 0x1049ffc6  beq         $v0, $t1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x44AB94u;
    {
        const bool branch_taken_0x44ab94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x44AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AB94u;
        // 0x44ab98: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ab94) {
            ctx->pc = 0x44AAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44aab0;
        }
    }
    ctx->pc = 0x44AB9Cu;
    // 0x44ab9c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x44ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x44aba0: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x44aba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x44aba4: 0x1049ffc2  beq         $v0, $t1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x44ABA4u;
    {
        const bool branch_taken_0x44aba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x44ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ABA4u;
        // 0x44aba8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aba4) {
            ctx->pc = 0x44AAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44aab0;
        }
    }
    ctx->pc = 0x44ABACu;
    // 0x44abac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x44abacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x44abb0: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x44abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x44abb4: 0xea102b  sltu        $v0, $a3, $t2
    ctx->pc = 0x44abb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x44abb8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x44ABB8u;
    {
        const bool branch_taken_0x44abb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ABB8u;
        // 0x44abbc: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44abb8) {
            ctx->pc = 0x44AB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44ab70;
        }
    }
    ctx->pc = 0x44ABC0u;
label_44abc0:
    // 0x44abc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x44abc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44abc4:
    // 0x44abc4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x44ABC4u;
    {
        const bool branch_taken_0x44abc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ABC4u;
        // 0x44abc8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44abc4) {
            ctx->pc = 0x44AC10u;
            goto label_44ac10;
        }
    }
    ctx->pc = 0x44ABCCu;
    // 0x44abcc: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x44abccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x44abd0: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x44abd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x44abd4: 0x8d64000c  lw          $a0, 0xC($t3)
    ctx->pc = 0x44abd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x44abd8: 0x471818  mult        $v1, $v0, $a3
    ctx->pc = 0x44abd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x44abdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x44abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x44abe0: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x44abe0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x44abe4: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x44abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x44abe8: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x44abe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x44abec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x44abecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44abf0: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x44abf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x44abf4: 0xac4b0014  sw          $t3, 0x14($v0)
    ctx->pc = 0x44abf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 11));
    // 0x44abf8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x44abf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x44abfc: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x44abfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x44ac00: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x44ac00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x44ac04: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x44ac04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x44ac08: 0xac4d001c  sw          $t5, 0x1C($v0)
    ctx->pc = 0x44ac08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 13));
    // 0x44ac0c: 0xac500020  sw          $s0, 0x20($v0)
    ctx->pc = 0x44ac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 16));
label_44ac10:
    // 0x44ac10: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x44AC10u;
    {
        const bool branch_taken_0x44ac10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44ac10) {
            ctx->pc = 0x44AD34u;
            goto label_44ad34;
        }
    }
    ctx->pc = 0x44AC18u;
    // 0x44ac18: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x44ac18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x44ac1c: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x44AC1Cu;
    SET_GPR_U32(ctx, 31, 0x44AC24u);
    ctx->pc = 0x44AC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44AC1Cu;
    // 0x44ac20: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x44AC1Cu, 0x44AC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44AC24u;
label_44ac24:
    // 0x44ac24: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x44ac24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x44ac28: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x44ac28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x44ac2c: 0x0  nop
    ctx->pc = 0x44ac2cu;
    // NOP
label_44ac30:
    // 0x44ac30: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x44AC30u;
    SET_GPR_U32(ctx, 31, 0x44AC38u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x44AC30u, 0x44AC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44AC38u;
label_44ac38:
    // 0x44ac38: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x44AC38u;
    {
        const bool branch_taken_0x44ac38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AC38u;
        // 0x44ac3c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ac38) {
            ctx->pc = 0x44AD90u;
            goto label_44ad90;
        }
    }
    ctx->pc = 0x44AC40u;
label_44ac40:
    // 0x44ac40: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x44AC40u;
    {
        const bool branch_taken_0x44ac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AC40u;
        // 0x44ac44: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ac40) {
            ctx->pc = 0x44AD34u;
            goto label_44ad34;
        }
    }
    ctx->pc = 0x44AC48u;
label_44ac48:
    // 0x44ac48: 0x8d82001c  lw          $v0, 0x1C($t4)
    ctx->pc = 0x44ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 28)));
    // 0x44ac4c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x44ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x44ac50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44ac54: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x44AC54u;
    {
        const bool branch_taken_0x44ac54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AC54u;
        // 0x44ac58: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ac54) {
            ctx->pc = 0x44AD30u;
            goto label_44ad30;
        }
    }
    ctx->pc = 0x44AC5Cu;
    // 0x44ac5c: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x44ac5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x44ac60: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x44AC60u;
    {
        const bool branch_taken_0x44ac60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AC60u;
        // 0x44ac64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ac60) {
            ctx->pc = 0x44AD30u;
            goto label_44ad30;
        }
    }
    ctx->pc = 0x44AC68u;
    // 0x44ac68: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x44ac68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ac6c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x44ac6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ac70: 0x19400013  blez        $t2, . + 4 + (0x13 << 2)
    ctx->pc = 0x44AC70u;
    {
        const bool branch_taken_0x44ac70 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x44AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AC70u;
        // 0x44ac74: 0x31430003  andi        $v1, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ac70) {
            ctx->pc = 0x44ACC0u;
            goto label_44acc0;
        }
    }
    ctx->pc = 0x44AC78u;
    // 0x44ac78: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x44AC78u;
    {
        const bool branch_taken_0x44ac78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AC78u;
        // 0x44ac7c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ac78) {
            ctx->pc = 0x44ACDCu;
            goto label_44acdc;
        }
    }
    ctx->pc = 0x44AC80u;
    // 0x44ac80: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x44AC80u;
    {
        const bool branch_taken_0x44ac80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44ac80) {
            ctx->pc = 0x44AC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44AC80u;
            // 0x44ac84: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44ACC4u;
            goto label_44acc4;
        }
    }
    ctx->pc = 0x44AC88u;
    // 0x44ac88: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x44ac88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x44ac8c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x44AC8Cu;
    {
        const bool branch_taken_0x44ac8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44ac8c) {
            ctx->pc = 0x44AC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44AC8Cu;
            // 0x44ac90: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44ACB0u;
            goto label_44acb0;
        }
    }
    ctx->pc = 0x44AC94u;
    // 0x44ac94: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x44ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x44ac98: 0x1044ffe9  beq         $v0, $a0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x44AC98u;
    {
        const bool branch_taken_0x44ac98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x44AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AC98u;
        // 0x44ac9c: 0x24e20024  addiu       $v0, $a3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ac98) {
            ctx->pc = 0x44AC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44ac40;
        }
    }
    ctx->pc = 0x44ACA0u;
    // 0x44aca0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x44aca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44aca4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x44aca4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44aca8: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x44aca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44acac: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x44acacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_44acb0:
    // 0x44acb0: 0x1044ffe3  beq         $v0, $a0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x44ACB0u;
    {
        const bool branch_taken_0x44acb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x44ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ACB0u;
        // 0x44acb4: 0x25290024  addiu       $t1, $t1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44acb0) {
            ctx->pc = 0x44AC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44ac40;
        }
    }
    ctx->pc = 0x44ACB8u;
    // 0x44acb8: 0x24e70024  addiu       $a3, $a3, 0x24
    ctx->pc = 0x44acb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
    // 0x44acbc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x44acbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_44acc0:
    // 0x44acc0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x44acc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_44acc4:
    // 0x44acc4: 0x1044ffde  beq         $v0, $a0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x44ACC4u;
    {
        const bool branch_taken_0x44acc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x44ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ACC4u;
        // 0x44acc8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44acc4) {
            ctx->pc = 0x44AC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44ac40;
        }
    }
    ctx->pc = 0x44ACCCu;
    // 0x44accc: 0x25290024  addiu       $t1, $t1, 0x24
    ctx->pc = 0x44acccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 36));
    // 0x44acd0: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x44acd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x44acd4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x44ACD4u;
    {
        const bool branch_taken_0x44acd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ACD4u;
        // 0x44acd8: 0x24e70024  addiu       $a3, $a3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44acd4) {
            ctx->pc = 0x44AD30u;
            goto label_44ad30;
        }
    }
    ctx->pc = 0x44ACDCu;
label_44acdc:
    // 0x44acdc: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x44acdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_44ace0:
    // 0x44ace0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x44ace4: 0x50440013  beql        $v0, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x44ACE4u;
    {
        const bool branch_taken_0x44ace4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x44ace4) {
            ctx->pc = 0x44ACE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44ACE4u;
            // 0x44ace8: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44AD34u;
            goto label_44ad34;
        }
    }
    ctx->pc = 0x44ACECu;
    // 0x44acec: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x44acecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x44acf0: 0x24e70024  addiu       $a3, $a3, 0x24
    ctx->pc = 0x44acf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
    // 0x44acf4: 0x1044ffd2  beq         $v0, $a0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x44ACF4u;
    {
        const bool branch_taken_0x44acf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x44ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ACF4u;
        // 0x44acf8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44acf4) {
            ctx->pc = 0x44AC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44ac40;
        }
    }
    ctx->pc = 0x44ACFCu;
    // 0x44acfc: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x44acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x44ad00: 0x24e70024  addiu       $a3, $a3, 0x24
    ctx->pc = 0x44ad00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
    // 0x44ad04: 0x1044ffce  beq         $v0, $a0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x44AD04u;
    {
        const bool branch_taken_0x44ad04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x44AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AD04u;
        // 0x44ad08: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ad04) {
            ctx->pc = 0x44AC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44ac40;
        }
    }
    ctx->pc = 0x44AD0Cu;
    // 0x44ad0c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x44ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x44ad10: 0x24e70024  addiu       $a3, $a3, 0x24
    ctx->pc = 0x44ad10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
    // 0x44ad14: 0x1044ffca  beq         $v0, $a0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x44AD14u;
    {
        const bool branch_taken_0x44ad14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x44AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AD14u;
        // 0x44ad18: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ad14) {
            ctx->pc = 0x44AC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44ac40;
        }
    }
    ctx->pc = 0x44AD1Cu;
    // 0x44ad1c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x44ad1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x44ad20: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x44ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x44ad24: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x44ad24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x44ad28: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x44AD28u;
    {
        const bool branch_taken_0x44ad28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AD28u;
        // 0x44ad2c: 0x24e70024  addiu       $a3, $a3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ad28) {
            ctx->pc = 0x44ACE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44ace0;
        }
    }
    ctx->pc = 0x44AD30u;
label_44ad30:
    // 0x44ad30: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x44ad30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44ad34:
    // 0x44ad34: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x44AD34u;
    {
        const bool branch_taken_0x44ad34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ad34) {
            ctx->pc = 0x44AD38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44AD34u;
            // 0x44ad38: 0x8ca4001c  lw          $a0, 0x1C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44AD4Cu;
            goto label_44ad4c;
        }
    }
    ctx->pc = 0x44AD3Cu;
    // 0x44ad3c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x44ad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x44ad40: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x44ad40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x44ad44: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x44ad44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x44ad48: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x44ad48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_44ad4c:
    // 0x44ad4c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x44ad4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x44ad50: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x44ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44ad54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x44ad58: 0x1e2102b  sltu        $v0, $t7, $v0
    ctx->pc = 0x44ad58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x44ad5c: 0x1440ff18  bnez        $v0, . + 4 + (-0xE8 << 2)
    ctx->pc = 0x44AD5Cu;
    {
        const bool branch_taken_0x44ad5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AD5Cu;
        // 0x44ad60: 0x26520024  addiu       $s2, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ad5c) {
            ctx->pc = 0x44A9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a9c0;
        }
    }
    ctx->pc = 0x44AD64u;
label_44ad64:
    // 0x44ad64: 0x8d820004  lw          $v0, 0x4($t4)
    ctx->pc = 0x44ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x44ad68: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x44ad68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x44ad6c: 0x26b5000c  addiu       $s5, $s5, 0xC
    ctx->pc = 0x44ad6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x44ad70: 0x1c2102b  sltu        $v0, $t6, $v0
    ctx->pc = 0x44ad70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x44ad74: 0x1440fefc  bnez        $v0, . + 4 + (-0x104 << 2)
    ctx->pc = 0x44AD74u;
    {
        const bool branch_taken_0x44ad74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AD74u;
        // 0x44ad78: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ad74) {
            ctx->pc = 0x44A968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a968;
        }
    }
    ctx->pc = 0x44AD7Cu;
label_44ad7c:
    // 0x44ad7c: 0x258c0028  addiu       $t4, $t4, 0x28
    ctx->pc = 0x44ad7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 40));
    // 0x44ad80: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x44ad80u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x44ad84: 0x16e0fe84  bnez        $s7, . + 4 + (-0x17C << 2)
    ctx->pc = 0x44AD84u;
    {
        const bool branch_taken_0x44ad84 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x44AD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AD84u;
        // 0x44ad88: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ad84) {
            ctx->pc = 0x44A798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a798;
        }
    }
    ctx->pc = 0x44AD8Cu;
    // 0x44ad8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x44ad8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44ad90:
    // 0x44ad90: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x44ad90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x44ad94: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x44ad94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x44ad98: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x44ad98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x44ad9c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x44ad9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x44ada0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x44ada0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x44ada4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x44ada4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x44ada8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x44ada8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x44adac: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x44adacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44adb0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x44adb0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44adb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44adb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44adb8: 0x3e00008  jr          $ra
    ctx->pc = 0x44ADB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ADB8u;
        // 0x44adbc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44ADB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44ADC0u;
}
