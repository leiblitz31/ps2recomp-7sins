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

// Function: sub_003DE648
// Address: 0x3de648 - 0x3df100
void sub_003DE648_0x3de648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE648_0x3de648");
#endif

    switch (ctx->pc) {
        case 0x3de758u: goto label_3de758;
        case 0x3de800u: goto label_3de800;
        case 0x3de838u: goto label_3de838;
        case 0x3de900u: goto label_3de900;
        case 0x3de97cu: goto label_3de97c;
        case 0x3dea38u: goto label_3dea38;
        case 0x3deb58u: goto label_3deb58;
        case 0x3deca0u: goto label_3deca0;
        case 0x3ded08u: goto label_3ded08;
        case 0x3ded40u: goto label_3ded40;
        case 0x3dedf8u: goto label_3dedf8;
        case 0x3defa0u: goto label_3defa0;
        case 0x3defd8u: goto label_3defd8;
        case 0x3df020u: goto label_3df020;
        default: break;
    }

    ctx->pc = 0x3de648u;

    // 0x3de648: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x3de648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x3de64c: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x3de64cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de650: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x3de650u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de654: 0xafae00f0  sw          $t6, 0xF0($sp)
    ctx->pc = 0x3de654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 14));
    // 0x3de658: 0xd1023  negu        $v0, $t5
    ctx->pc = 0x3de658u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 13)));
    // 0x3de65c: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x3de65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
    // 0x3de660: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x3de660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
    // 0x3de664: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3de664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3de668: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x3de668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
    // 0x3de66c: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x3de66cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de670: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x3de670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
    // 0x3de674: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x3de674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
    // 0x3de678: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x3de678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
    // 0x3de67c: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x3de67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
    // 0x3de680: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x3de680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
    // 0x3de684: 0x7fbe0130  sq          $fp, 0x130($sp)
    ctx->pc = 0x3de684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 30));
    // 0x3de688: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x3de688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x3de68c: 0xafa700d4  sw          $a3, 0xD4($sp)
    ctx->pc = 0x3de68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 7));
    // 0x3de690: 0xafa800d8  sw          $t0, 0xD8($sp)
    ctx->pc = 0x3de690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 8));
    // 0x3de694: 0xafa900dc  sw          $t1, 0xDC($sp)
    ctx->pc = 0x3de694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 9));
    // 0x3de698: 0xafab00e0  sw          $t3, 0xE0($sp)
    ctx->pc = 0x3de698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 11));
    // 0x3de69c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3de69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3de6a0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3de6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3de6a4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3de6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3de6a8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x3de6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x3de6ac: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x3de6acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x3de6b0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x3de6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x3de6b4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x3de6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x3de6b8: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x3de6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x3de6bc: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3de6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x3de6c0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3de6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x3de6c4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x3de6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x3de6c8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x3de6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x3de6cc: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3de6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x3de6d0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3de6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x3de6d4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3de6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x3de6d8: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3DE6D8u;
    {
        const bool branch_taken_0x3de6d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE6D8u;
        // 0x3de6dc: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de6d8) {
            ctx->pc = 0x3DE758u;
            goto label_3de758;
        }
    }
    ctx->pc = 0x3DE6E0u;
    // 0x3de6e0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3de6e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3de6e4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3DE6E4u;
    {
        const bool branch_taken_0x3de6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE6E4u;
        // 0x3de6e8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de6e4) {
            ctx->pc = 0x3DE734u;
            goto label_3de734;
        }
    }
    ctx->pc = 0x3DE6ECu;
    // 0x3de6ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DE6ECu;
    {
        const bool branch_taken_0x3de6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE6ECu;
        // 0x3de6f0: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de6ec) {
            ctx->pc = 0x3DE714u;
            goto label_3de714;
        }
    }
    ctx->pc = 0x3DE6F4u;
    // 0x3de6f4: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x3de6f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x3de6f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3de6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3de6fc: 0x246c0004  addiu       $t4, $v1, 0x4
    ctx->pc = 0x3de6fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3de700: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3de700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3de704: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x3de704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3de708: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3de708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3de70c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3de70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3de710: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3de710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3de714:
    // 0x3de714: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x3de714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3de718: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x3de718u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x3de71c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x3de71cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x3de720: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3de720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3de724: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x3de724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3de728: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3de728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3de72c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3de72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3de730: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3de730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3de734:
    // 0x3de734: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x3de734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3de738: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x3de738u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x3de73c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x3de73cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x3de740: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3de740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3de744: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x3de744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3de748: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3de748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3de74c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3de74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3de750: 0x11a0001c  beqz        $t5, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DE750u;
    {
        const bool branch_taken_0x3de750 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE750u;
        // 0x3de754: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de750) {
            ctx->pc = 0x3DE7C4u;
            goto label_3de7c4;
        }
    }
    ctx->pc = 0x3DE758u;
label_3de758:
    // 0x3de758: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x3de758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3de75c: 0x25adfffc  addiu       $t5, $t5, -0x4
    ctx->pc = 0x3de75cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967292));
    // 0x3de760: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3de760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3de764: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x3de764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3de768: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3de768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3de76c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3de76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3de770: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3de770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3de774: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x3de774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x3de778: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3de778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3de77c: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x3de77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3de780: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3de780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3de784: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3de784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3de788: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3de788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3de78c: 0x8d830008  lw          $v1, 0x8($t4)
    ctx->pc = 0x3de78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x3de790: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3de790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3de794: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x3de794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3de798: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3de798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3de79c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3de79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3de7a0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3de7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3de7a4: 0x8d83000c  lw          $v1, 0xC($t4)
    ctx->pc = 0x3de7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x3de7a8: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x3de7a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x3de7ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3de7acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3de7b0: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x3de7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3de7b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3de7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3de7b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3de7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3de7bc: 0x15a0ffe6  bnez        $t5, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3DE7BCu;
    {
        const bool branch_taken_0x3de7bc = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DE7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE7BCu;
        // 0x3de7c0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de7bc) {
            ctx->pc = 0x3DE758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3de758;
        }
    }
    ctx->pc = 0x3DE7C4u;
label_3de7c4:
    // 0x3de7c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3de7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3de7c8: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DE7C8u;
    {
        const bool branch_taken_0x3de7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x3DE7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE7C8u;
        // 0x3de7cc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de7c8) {
            ctx->pc = 0x3DE7E4u;
            goto label_3de7e4;
        }
    }
    ctx->pc = 0x3DE7D0u;
    // 0x3de7d0: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x3de7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x3de7d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3de7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de7d8: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x3de7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x3de7dc: 0x1000023c  b           . + 4 + (0x23C << 2)
    ctx->pc = 0x3DE7DCu;
    {
        const bool branch_taken_0x3de7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE7DCu;
        // 0x3de7e0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de7dc) {
            ctx->pc = 0x3DF0D0u;
            goto label_3df0d0;
        }
    }
    ctx->pc = 0x3DE7E4u;
label_3de7e4:
    // 0x3de7e4: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x3de7e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3de7e8: 0x8d5e0000  lw          $fp, 0x0($t2)
    ctx->pc = 0x3de7e8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3de7ec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3DE7ECu;
    {
        const bool branch_taken_0x3de7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DE7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE7ECu;
        // 0x3de7f0: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de7ec) {
            ctx->pc = 0x3DE818u;
            goto label_3de818;
        }
    }
    ctx->pc = 0x3DE7F4u;
    // 0x3de7f4: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x3de7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x3de7f8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3de7f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3de7fc: 0x0  nop
    ctx->pc = 0x3de7fcu;
    // NOP
label_3de800:
    // 0x3de800: 0x2d820010  sltiu       $v0, $t4, 0x10
    ctx->pc = 0x3de800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3de804: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DE804u;
    {
        const bool branch_taken_0x3de804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE804u;
        // 0x3de808: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de804) {
            ctx->pc = 0x3DE818u;
            goto label_3de818;
        }
    }
    ctx->pc = 0x3DE80Cu;
    // 0x3de80c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3de80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3de810: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3DE810u;
    {
        const bool branch_taken_0x3de810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de810) {
            ctx->pc = 0x3DE814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE810u;
            // 0x3de814: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3de800;
        }
    }
    ctx->pc = 0x3DE818u;
label_3de818:
    // 0x3de818: 0xafac00ec  sw          $t4, 0xEC($sp)
    ctx->pc = 0x3de818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 12));
    // 0x3de81c: 0x240d000f  addiu       $t5, $zero, 0xF
    ctx->pc = 0x3de81cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3de820: 0x3cc102b  sltu        $v0, $fp, $t4
    ctx->pc = 0x3de820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x3de824: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DE824u;
    {
        const bool branch_taken_0x3de824 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DE828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE824u;
        // 0x3de828: 0x182f00b  movn        $fp, $t4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de824) {
            ctx->pc = 0x3DE84Cu;
            goto label_3de84c;
        }
    }
    ctx->pc = 0x3DE82Cu;
    // 0x3de82c: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x3de82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x3de830: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x3de830u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x3de834: 0x0  nop
    ctx->pc = 0x3de834u;
    // NOP
label_3de838:
    // 0x3de838: 0x11a00004  beqz        $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DE838u;
    {
        const bool branch_taken_0x3de838 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE838u;
        // 0x3de83c: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de838) {
            ctx->pc = 0x3DE84Cu;
            goto label_3de84c;
        }
    }
    ctx->pc = 0x3DE840u;
    // 0x3de840: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3de840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3de844: 0x5040fffc  beql        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x3DE844u;
    {
        const bool branch_taken_0x3de844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de844) {
            ctx->pc = 0x3DE848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE844u;
            // 0x3de848: 0x25adffff  addiu       $t5, $t5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3de838;
        }
    }
    ctx->pc = 0x3DE84Cu;
label_3de84c:
    // 0x3de84c: 0xafad00e4  sw          $t5, 0xE4($sp)
    ctx->pc = 0x3de84cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 13));
    // 0x3de850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3de850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3de854: 0x182c804  sllv        $t9, $v0, $t4
    ctx->pc = 0x3de854u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 12) & 0x1F));
    // 0x3de858: 0x1be182b  sltu        $v1, $t5, $fp
    ctx->pc = 0x3de858u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x3de85c: 0x18d102b  sltu        $v0, $t4, $t5
    ctx->pc = 0x3de85cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3de860: 0x1a3f00b  movn        $fp, $t5, $v1
    ctx->pc = 0x3de860u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 13));
    // 0x3de864: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3DE864u;
    {
        const bool branch_taken_0x3de864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE864u;
        // 0x3de868: 0xad5e0000  sw          $fp, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de864) {
            ctx->pc = 0x3DE95Cu;
            goto label_3de95c;
        }
    }
    ctx->pc = 0x3DE86Cu;
    // 0x3de86c: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x3de86cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x3de870: 0xc1080  sll         $v0, $t4, 2
    ctx->pc = 0x3de870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x3de874: 0x5d5021  addu        $t2, $v0, $sp
    ctx->pc = 0x3de874u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3de878: 0xcc1823  subu        $v1, $a2, $t4
    ctx->pc = 0x3de878u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x3de87c: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x3de87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de880: 0x186102a  slt         $v0, $t4, $a2
    ctx->pc = 0x3de880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3de884: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3DE884u;
    {
        const bool branch_taken_0x3de884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE884u;
        // 0x3de888: 0x30630003  andi        $v1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de884) {
            ctx->pc = 0x3DE8D8u;
            goto label_3de8d8;
        }
    }
    ctx->pc = 0x3DE88Cu;
    // 0x3de88c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3DE88Cu;
    {
        const bool branch_taken_0x3de88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE88Cu;
        // 0x3de890: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de88c) {
            ctx->pc = 0x3DE8F8u;
            goto label_3de8f8;
        }
    }
    ctx->pc = 0x3DE894u;
    // 0x3de894: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3DE894u;
    {
        const bool branch_taken_0x3de894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3de894) {
            ctx->pc = 0x3DE898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE894u;
            // 0x3de898: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE8DCu;
            goto label_3de8dc;
        }
    }
    ctx->pc = 0x3DE89Cu;
    // 0x3de89c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3de89cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3de8a0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DE8A0u;
    {
        const bool branch_taken_0x3de8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3de8a0) {
            ctx->pc = 0x3DE8A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE8A0u;
            // 0x3de8a4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE8C4u;
            goto label_3de8c4;
        }
    }
    ctx->pc = 0x3DE8A8u;
    // 0x3de8a8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x3de8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3de8ac: 0x322c823  subu        $t9, $t9, $v0
    ctx->pc = 0x3de8acu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x3de8b0: 0x7200030  bltz        $t9, . + 4 + (0x30 << 2)
    ctx->pc = 0x3DE8B0u;
    {
        const bool branch_taken_0x3de8b0 = (GPR_S32(ctx, 25) < 0);
        ctx->pc = 0x3DE8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE8B0u;
        // 0x3de8b4: 0x25440004  addiu       $a0, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de8b0) {
            ctx->pc = 0x3DE974u;
            goto label_3de974;
        }
    }
    ctx->pc = 0x3DE8B8u;
    // 0x3de8b8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3de8b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3de8bc: 0x19c840  sll         $t9, $t9, 1
    ctx->pc = 0x3de8bcu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 1));
    // 0x3de8c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3de8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3de8c4:
    // 0x3de8c4: 0x322c823  subu        $t9, $t9, $v0
    ctx->pc = 0x3de8c4u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x3de8c8: 0x720002a  bltz        $t9, . + 4 + (0x2A << 2)
    ctx->pc = 0x3DE8C8u;
    {
        const bool branch_taken_0x3de8c8 = (GPR_S32(ctx, 25) < 0);
        ctx->pc = 0x3DE8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE8C8u;
        // 0x3de8cc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de8c8) {
            ctx->pc = 0x3DE974u;
            goto label_3de974;
        }
    }
    ctx->pc = 0x3DE8D0u;
    // 0x3de8d0: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3de8d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3de8d4: 0x19c840  sll         $t9, $t9, 1
    ctx->pc = 0x3de8d4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 1));
label_3de8d8:
    // 0x3de8d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3de8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3de8dc:
    // 0x3de8dc: 0x322c823  subu        $t9, $t9, $v0
    ctx->pc = 0x3de8dcu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x3de8e0: 0x7200024  bltz        $t9, . + 4 + (0x24 << 2)
    ctx->pc = 0x3DE8E0u;
    {
        const bool branch_taken_0x3de8e0 = (GPR_S32(ctx, 25) < 0);
        ctx->pc = 0x3DE8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE8E0u;
        // 0x3de8e4: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de8e0) {
            ctx->pc = 0x3DE974u;
            goto label_3de974;
        }
    }
    ctx->pc = 0x3DE8E8u;
    // 0x3de8e8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3de8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3de8ec: 0x18d102b  sltu        $v0, $t4, $t5
    ctx->pc = 0x3de8ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3de8f0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3DE8F0u;
    {
        const bool branch_taken_0x3de8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE8F0u;
        // 0x3de8f4: 0x19c840  sll         $t9, $t9, 1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de8f0) {
            ctx->pc = 0x3DE95Cu;
            goto label_3de95c;
        }
    }
    ctx->pc = 0x3DE8F8u;
label_3de8f8:
    // 0x3de8f8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3de8f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de8fc: 0x0  nop
    ctx->pc = 0x3de8fcu;
    // NOP
label_3de900:
    // 0x3de900: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3de900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3de904: 0x322c823  subu        $t9, $t9, $v0
    ctx->pc = 0x3de904u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x3de908: 0x720001a  bltz        $t9, . + 4 + (0x1A << 2)
    ctx->pc = 0x3DE908u;
    {
        const bool branch_taken_0x3de908 = (GPR_S32(ctx, 25) < 0);
        ctx->pc = 0x3DE90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE908u;
        // 0x3de90c: 0x19c840  sll         $t9, $t9, 1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de908) {
            ctx->pc = 0x3DE974u;
            goto label_3de974;
        }
    }
    ctx->pc = 0x3DE910u;
    // 0x3de910: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3de910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3de914: 0x322c823  subu        $t9, $t9, $v0
    ctx->pc = 0x3de914u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x3de918: 0x7200016  bltz        $t9, . + 4 + (0x16 << 2)
    ctx->pc = 0x3DE918u;
    {
        const bool branch_taken_0x3de918 = (GPR_S32(ctx, 25) < 0);
        ctx->pc = 0x3DE91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE918u;
        // 0x3de91c: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de918) {
            ctx->pc = 0x3DE974u;
            goto label_3de974;
        }
    }
    ctx->pc = 0x3DE920u;
    // 0x3de920: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3de920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3de924: 0x19c840  sll         $t9, $t9, 1
    ctx->pc = 0x3de924u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 1));
    // 0x3de928: 0x322c823  subu        $t9, $t9, $v0
    ctx->pc = 0x3de928u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x3de92c: 0x7200011  bltz        $t9, . + 4 + (0x11 << 2)
    ctx->pc = 0x3DE92Cu;
    {
        const bool branch_taken_0x3de92c = (GPR_S32(ctx, 25) < 0);
        ctx->pc = 0x3DE930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE92Cu;
        // 0x3de930: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de92c) {
            ctx->pc = 0x3DE974u;
            goto label_3de974;
        }
    }
    ctx->pc = 0x3DE934u;
    // 0x3de934: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3de934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3de938: 0x19c840  sll         $t9, $t9, 1
    ctx->pc = 0x3de938u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 1));
    // 0x3de93c: 0x322c823  subu        $t9, $t9, $v0
    ctx->pc = 0x3de93cu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x3de940: 0x720000c  bltz        $t9, . + 4 + (0xC << 2)
    ctx->pc = 0x3DE940u;
    {
        const bool branch_taken_0x3de940 = (GPR_S32(ctx, 25) < 0);
        ctx->pc = 0x3DE944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE940u;
        // 0x3de944: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de940) {
            ctx->pc = 0x3DE974u;
            goto label_3de974;
        }
    }
    ctx->pc = 0x3DE948u;
    // 0x3de948: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3de948u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3de94c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3de94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3de950: 0x18d102b  sltu        $v0, $t4, $t5
    ctx->pc = 0x3de950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3de954: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3DE954u;
    {
        const bool branch_taken_0x3de954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DE958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE954u;
        // 0x3de958: 0x19c840  sll         $t9, $t9, 1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de954) {
            ctx->pc = 0x3DE900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3de900;
        }
    }
    ctx->pc = 0x3DE95Cu;
label_3de95c:
    // 0x3de95c: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x3de95cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x3de960: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3de960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3de964: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3de964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3de968: 0x322c823  subu        $t9, $t9, $v0
    ctx->pc = 0x3de968u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x3de96c: 0x7210005  bgez        $t9, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DE96Cu;
    {
        const bool branch_taken_0x3de96c = (GPR_S32(ctx, 25) >= 0);
        ctx->pc = 0x3DE970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE96Cu;
        // 0x3de970: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de96c) {
            ctx->pc = 0x3DE984u;
            goto label_3de984;
        }
    }
    ctx->pc = 0x3DE974u;
label_3de974:
    // 0x3de974: 0x100001d6  b           . + 4 + (0x1D6 << 2)
    ctx->pc = 0x3DE974u;
    {
        const bool branch_taken_0x3de974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE974u;
        // 0x3de978: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de974) {
            ctx->pc = 0x3DF0D0u;
            goto label_3df0d0;
        }
    }
    ctx->pc = 0x3DE97Cu;
label_3de97c:
    // 0x3de97c: 0x100001d4  b           . + 4 + (0x1D4 << 2)
    ctx->pc = 0x3DE97Cu;
    {
        const bool branch_taken_0x3de97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE97Cu;
        // 0x3de980: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de97c) {
            ctx->pc = 0x3DF0D0u;
            goto label_3df0d0;
        }
    }
    ctx->pc = 0x3DE984u;
label_3de984:
    // 0x3de984: 0x591021  addu        $v0, $v0, $t9
    ctx->pc = 0x3de984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x3de988: 0xafa800f0  sw          $t0, 0xF0($sp)
    ctx->pc = 0x3de988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 8));
    // 0x3de98c: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x3de98cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3de990: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3de990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3de994: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3de994u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de998: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x3de998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x3de99c: 0x27aa0098  addiu       $t2, $sp, 0x98
    ctx->pc = 0x3de99cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x3de9a0: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x3de9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x3de9a4: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x3de9a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x3de9a8: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x3de9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x3de9ac: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x3de9acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3de9b0: 0xafa90114  sw          $t1, 0x114($sp)
    ctx->pc = 0x3de9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 9));
    // 0x3de9b4: 0x1e3023  negu        $a2, $fp
    ctx->pc = 0x3de9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
    // 0x3de9b8: 0x11a0002f  beqz        $t5, . + 4 + (0x2F << 2)
    ctx->pc = 0x3DE9B8u;
    {
        const bool branch_taken_0x3de9b8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE9B8u;
        // 0x3de9bc: 0x43402a  slt         $t0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de9b8) {
            ctx->pc = 0x3DEA78u;
            goto label_3dea78;
        }
    }
    ctx->pc = 0x3DE9C0u;
    // 0x3de9c0: 0xd1023  negu        $v0, $t5
    ctx->pc = 0x3de9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 13)));
    // 0x3de9c4: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x3de9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de9c8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3de9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3de9cc: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3DE9CCu;
    {
        const bool branch_taken_0x3de9cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE9CCu;
        // 0x3de9d0: 0x8faa00f0  lw          $t2, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de9cc) {
            ctx->pc = 0x3DEA30u;
            goto label_3dea30;
        }
    }
    ctx->pc = 0x3DE9D4u;
    // 0x3de9d4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3de9d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3de9d8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3DE9D8u;
    {
        const bool branch_taken_0x3de9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE9D8u;
        // 0x3de9dc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de9d8) {
            ctx->pc = 0x3DEA14u;
            goto label_3dea14;
        }
    }
    ctx->pc = 0x3DE9E0u;
    // 0x3de9e0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DE9E0u;
    {
        const bool branch_taken_0x3de9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de9e0) {
            ctx->pc = 0x3DE9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE9E0u;
            // 0x3de9e4: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DEA00u;
            goto label_3dea00;
        }
    }
    ctx->pc = 0x3DE9E8u;
    // 0x3de9e8: 0x8d4c0000  lw          $t4, 0x0($t2)
    ctx->pc = 0x3de9e8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3de9ec: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x3de9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x3de9f0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3de9f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x3de9f4: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x3de9f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x3de9f8: 0xafac0098  sw          $t4, 0x98($sp)
    ctx->pc = 0x3de9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 12));
    // 0x3de9fc: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x3de9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_3dea00:
    // 0x3dea00: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x3dea00u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x3dea04: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3dea04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x3dea08: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x3dea08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3dea0c: 0xac8c0000  sw          $t4, 0x0($a0)
    ctx->pc = 0x3dea0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 12));
    // 0x3dea10: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3dea10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3dea14:
    // 0x3dea14: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x3dea14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3dea18: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x3dea18u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x3dea1c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3dea1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x3dea20: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x3dea20u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3dea24: 0xac8c0000  sw          $t4, 0x0($a0)
    ctx->pc = 0x3dea24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 12));
    // 0x3dea28: 0x11a00013  beqz        $t5, . + 4 + (0x13 << 2)
    ctx->pc = 0x3DEA28u;
    {
        const bool branch_taken_0x3dea28 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEA28u;
        // 0x3dea2c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dea28) {
            ctx->pc = 0x3DEA78u;
            goto label_3dea78;
        }
    }
    ctx->pc = 0x3DEA30u;
label_3dea30:
    // 0x3dea30: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x3dea30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dea34: 0x0  nop
    ctx->pc = 0x3dea34u;
    // NOP
label_3dea38:
    // 0x3dea38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3dea38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dea3c: 0x25adfffc  addiu       $t5, $t5, -0x4
    ctx->pc = 0x3dea3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967292));
    // 0x3dea40: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x3dea40u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3dea44: 0xac8c0000  sw          $t4, 0x0($a0)
    ctx->pc = 0x3dea44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 12));
    // 0x3dea48: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3dea48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3dea4c: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x3dea4cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3dea50: 0xac8c0004  sw          $t4, 0x4($a0)
    ctx->pc = 0x3dea50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 12));
    // 0x3dea54: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3dea54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3dea58: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x3dea58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3dea5c: 0xac8c0008  sw          $t4, 0x8($a0)
    ctx->pc = 0x3dea5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 12));
    // 0x3dea60: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3dea60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3dea64: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3dea64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3dea68: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x3dea68u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3dea6c: 0xac8c000c  sw          $t4, 0xC($a0)
    ctx->pc = 0x3dea6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 12));
    // 0x3dea70: 0x15a0fff1  bnez        $t5, . + 4 + (-0xF << 2)
    ctx->pc = 0x3DEA70u;
    {
        const bool branch_taken_0x3dea70 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DEA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEA70u;
        // 0x3dea74: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dea70) {
            ctx->pc = 0x3DEA38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dea38;
        }
    }
    ctx->pc = 0x3DEA78u;
label_3dea78:
    // 0x3dea78: 0xafae00f0  sw          $t6, 0xF0($sp)
    ctx->pc = 0x3dea78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 14));
    // 0x3dea7c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3dea7cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dea80: 0x8faf0114  lw          $t7, 0x114($sp)
    ctx->pc = 0x3dea80u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x3dea84: 0x30a30003  andi        $v1, $a1, 0x3
    ctx->pc = 0x3dea84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x3dea88: 0x18a00021  blez        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3DEA88u;
    {
        const bool branch_taken_0x3dea88 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3DEA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEA88u;
        // 0x3dea8c: 0x1c0502d  daddu       $t2, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dea88) {
            ctx->pc = 0x3DEB10u;
            goto label_3deb10;
        }
    }
    ctx->pc = 0x3DEA90u;
    // 0x3dea90: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x3DEA90u;
    {
        const bool branch_taken_0x3dea90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEA90u;
        // 0x3dea94: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dea90) {
            ctx->pc = 0x3DEB50u;
            goto label_3deb50;
        }
    }
    ctx->pc = 0x3DEA98u;
    // 0x3dea98: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3DEA98u;
    {
        const bool branch_taken_0x3dea98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DEA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEA98u;
        // 0x3dea9c: 0x8d4c0000  lw          $t4, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dea98) {
            ctx->pc = 0x3DEB14u;
            goto label_3deb14;
        }
    }
    ctx->pc = 0x3DEAA0u;
    // 0x3deaa0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3deaa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3deaa4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3DEAA4u;
    {
        const bool branch_taken_0x3deaa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3deaa4) {
            ctx->pc = 0x3DEAE0u;
            goto label_3deae0;
        }
    }
    ctx->pc = 0x3DEAACu;
    // 0x3deaac: 0x1180000a  beqz        $t4, . + 4 + (0xA << 2)
    ctx->pc = 0x3DEAACu;
    {
        const bool branch_taken_0x3deaac = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEAACu;
        // 0x3deab0: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deaac) {
            ctx->pc = 0x3DEAD8u;
            goto label_3dead8;
        }
    }
    ctx->pc = 0x3DEAB4u;
    // 0x3deab4: 0xc1080  sll         $v0, $t4, 2
    ctx->pc = 0x3deab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x3deab8: 0x8fa901c8  lw          $t1, 0x1C8($sp)
    ctx->pc = 0x3deab8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x3deabc: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x3deabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x3deac0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3deac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3deac4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3deac4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3deac8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3deac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3deacc: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x3deaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x3dead0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3dead0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3dead4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3dead4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_3dead8:
    // 0x3dead8: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x3dead8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3deadc: 0x8d4c0000  lw          $t4, 0x0($t2)
    ctx->pc = 0x3deadcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_3deae0:
    // 0x3deae0: 0x1180000a  beqz        $t4, . + 4 + (0xA << 2)
    ctx->pc = 0x3DEAE0u;
    {
        const bool branch_taken_0x3deae0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEAE0u;
        // 0x3deae4: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deae0) {
            ctx->pc = 0x3DEB0Cu;
            goto label_3deb0c;
        }
    }
    ctx->pc = 0x3DEAE8u;
    // 0x3deae8: 0xc1080  sll         $v0, $t4, 2
    ctx->pc = 0x3deae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x3deaec: 0x8fa901c8  lw          $t1, 0x1C8($sp)
    ctx->pc = 0x3deaecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x3deaf0: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x3deaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x3deaf4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3deaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3deaf8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3deaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3deafc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3deafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3deb00: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x3deb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x3deb04: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3deb04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3deb08: 0xac8d0000  sw          $t5, 0x0($a0)
    ctx->pc = 0x3deb08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 13));
label_3deb0c:
    // 0x3deb0c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x3deb0cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_3deb10:
    // 0x3deb10: 0x8d4c0000  lw          $t4, 0x0($t2)
    ctx->pc = 0x3deb10u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_3deb14:
    // 0x3deb14: 0x1180000a  beqz        $t4, . + 4 + (0xA << 2)
    ctx->pc = 0x3DEB14u;
    {
        const bool branch_taken_0x3deb14 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEB14u;
        // 0x3deb18: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deb14) {
            ctx->pc = 0x3DEB40u;
            goto label_3deb40;
        }
    }
    ctx->pc = 0x3DEB1Cu;
    // 0x3deb1c: 0xc1080  sll         $v0, $t4, 2
    ctx->pc = 0x3deb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x3deb20: 0x8fa901c8  lw          $t1, 0x1C8($sp)
    ctx->pc = 0x3deb20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x3deb24: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x3deb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x3deb28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3deb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3deb2c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3deb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3deb30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3deb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3deb34: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x3deb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x3deb38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3deb38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3deb3c: 0xac8d0000  sw          $t5, 0x0($a0)
    ctx->pc = 0x3deb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 13));
label_3deb40:
    // 0x3deb40: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x3deb40u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x3deb44: 0x1a5102b  sltu        $v0, $t5, $a1
    ctx->pc = 0x3deb44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3deb48: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x3DEB48u;
    {
        const bool branch_taken_0x3deb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3deb48) {
            ctx->pc = 0x3DEB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DEB48u;
            // 0x3deb4c: 0x8faa0114  lw          $t2, 0x114($sp) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DEC28u;
            goto label_3dec28;
        }
    }
    ctx->pc = 0x3DEB50u;
label_3deb50:
    // 0x3deb50: 0x140702d  daddu       $t6, $t2, $zero
    ctx->pc = 0x3deb50u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3deb54: 0x8dcc0000  lw          $t4, 0x0($t6)
    ctx->pc = 0x3deb54u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_3deb58:
    // 0x3deb58: 0x11800009  beqz        $t4, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DEB58u;
    {
        const bool branch_taken_0x3deb58 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEB58u;
        // 0x3deb5c: 0xc1080  sll         $v0, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deb58) {
            ctx->pc = 0x3DEB80u;
            goto label_3deb80;
        }
    }
    ctx->pc = 0x3DEB60u;
    // 0x3deb60: 0x8faa01c8  lw          $t2, 0x1C8($sp)
    ctx->pc = 0x3deb60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x3deb64: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x3deb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x3deb68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3deb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3deb6c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3deb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3deb70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3deb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3deb74: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x3deb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x3deb78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3deb78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3deb7c: 0xac8d0000  sw          $t5, 0x0($a0)
    ctx->pc = 0x3deb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 13));
label_3deb80:
    // 0x3deb80: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x3deb80u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x3deb84: 0x1180000a  beqz        $t4, . + 4 + (0xA << 2)
    ctx->pc = 0x3DEB84u;
    {
        const bool branch_taken_0x3deb84 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEB84u;
        // 0x3deb88: 0x25aa0001  addiu       $t2, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deb84) {
            ctx->pc = 0x3DEBB0u;
            goto label_3debb0;
        }
    }
    ctx->pc = 0x3DEB8Cu;
    // 0x3deb8c: 0xc2080  sll         $a0, $t4, 2
    ctx->pc = 0x3deb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x3deb90: 0x8fa901c8  lw          $t1, 0x1C8($sp)
    ctx->pc = 0x3deb90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x3deb94: 0x1e42021  addu        $a0, $t7, $a0
    ctx->pc = 0x3deb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x3deb98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3deb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3deb9c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3deb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3deba0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3deba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3deba4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3deba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3deba8: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x3deba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x3debac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3debacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3debb0:
    // 0x3debb0: 0x8dcc0008  lw          $t4, 0x8($t6)
    ctx->pc = 0x3debb0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x3debb4: 0x1180000a  beqz        $t4, . + 4 + (0xA << 2)
    ctx->pc = 0x3DEBB4u;
    {
        const bool branch_taken_0x3debb4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEBB4u;
        // 0x3debb8: 0x25aa0002  addiu       $t2, $t5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3debb4) {
            ctx->pc = 0x3DEBE0u;
            goto label_3debe0;
        }
    }
    ctx->pc = 0x3DEBBCu;
    // 0x3debbc: 0xc2080  sll         $a0, $t4, 2
    ctx->pc = 0x3debbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x3debc0: 0x8fa901c8  lw          $t1, 0x1C8($sp)
    ctx->pc = 0x3debc0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x3debc4: 0x1e42021  addu        $a0, $t7, $a0
    ctx->pc = 0x3debc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x3debc8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3debc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3debcc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3debccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3debd0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3debd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3debd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3debd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3debd8: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x3debd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x3debdc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3debdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3debe0:
    // 0x3debe0: 0x8dcc000c  lw          $t4, 0xC($t6)
    ctx->pc = 0x3debe0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x3debe4: 0x25aa0003  addiu       $t2, $t5, 0x3
    ctx->pc = 0x3debe4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
    // 0x3debe8: 0x1180000a  beqz        $t4, . + 4 + (0xA << 2)
    ctx->pc = 0x3DEBE8u;
    {
        const bool branch_taken_0x3debe8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEBE8u;
        // 0x3debec: 0x25ce0010  addiu       $t6, $t6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3debe8) {
            ctx->pc = 0x3DEC14u;
            goto label_3dec14;
        }
    }
    ctx->pc = 0x3DEBF0u;
    // 0x3debf0: 0xc2080  sll         $a0, $t4, 2
    ctx->pc = 0x3debf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x3debf4: 0x8fa901c8  lw          $t1, 0x1C8($sp)
    ctx->pc = 0x3debf4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x3debf8: 0x1e42021  addu        $a0, $t7, $a0
    ctx->pc = 0x3debf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x3debfc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3debfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dec00: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3dec00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3dec04: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3dec04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3dec08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3dec08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3dec0c: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x3dec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x3dec10: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3dec10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3dec14:
    // 0x3dec14: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x3dec14u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x3dec18: 0x1a5102b  sltu        $v0, $t5, $a1
    ctx->pc = 0x3dec18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3dec1c: 0x5440ffce  bnel        $v0, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x3DEC1Cu;
    {
        const bool branch_taken_0x3dec1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dec1c) {
            ctx->pc = 0x3DEC20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DEC1Cu;
            // 0x3dec20: 0x8dcc0000  lw          $t4, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DEB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3deb58;
        }
    }
    ctx->pc = 0x3DEC24u;
    // 0x3dec24: 0x8faa0114  lw          $t2, 0x114($sp)
    ctx->pc = 0x3dec24u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_3dec28:
    // 0x3dec28: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3dec28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3dec2c: 0xc0c02d  daddu       $t8, $a2, $zero
    ctx->pc = 0x3dec2cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec30: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3dec30u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec34: 0x1471021  addu        $v0, $t2, $a3
    ctx->pc = 0x3dec34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x3dec38: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x3dec38u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec3c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3dec3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3dec40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3dec40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec44: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x3dec44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x3dec48: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x3dec48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x3dec4c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x3dec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x3dec50: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x3dec50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x3dec54: 0x15000117  bnez        $t0, . + 4 + (0x117 << 2)
    ctx->pc = 0x3DEC54u;
    {
        const bool branch_taken_0x3dec54 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DEC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEC54u;
        // 0x3dec58: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dec54) {
            ctx->pc = 0x3DF0B4u;
            goto label_3df0b4;
        }
    }
    ctx->pc = 0x3DEC5Cu;
    // 0x3dec5c: 0x8fa600ec  lw          $a2, 0xEC($sp)
    ctx->pc = 0x3dec5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x3dec60: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3dec60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3dec64: 0x8fa800ec  lw          $t0, 0xEC($sp)
    ctx->pc = 0x3dec64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x3dec68: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3dec68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3dec6c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3dec6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3dec70: 0xafaa0110  sw          $t2, 0x110($sp)
    ctx->pc = 0x3dec70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 10));
    // 0x3dec74: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x3dec74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x3dec78: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3dec78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3dec7c: 0xdd4821  addu        $t1, $a2, $sp
    ctx->pc = 0x3dec7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x3dec80: 0x240afffc  addiu       $t2, $zero, -0x4
    ctx->pc = 0x3dec80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x3dec84: 0xafa6011c  sw          $a2, 0x11C($sp)
    ctx->pc = 0x3dec84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 6));
    // 0x3dec88: 0xafa50104  sw          $a1, 0x104($sp)
    ctx->pc = 0x3dec88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 5));
    // 0x3dec8c: 0xafa4010c  sw          $a0, 0x10C($sp)
    ctx->pc = 0x3dec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 4));
    // 0x3dec90: 0xafa80120  sw          $t0, 0x120($sp)
    ctx->pc = 0x3dec90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 8));
    // 0x3dec94: 0xafa90124  sw          $t1, 0x124($sp)
    ctx->pc = 0x3dec94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 9));
    // 0x3dec98: 0xafaa0128  sw          $t2, 0x128($sp)
    ctx->pc = 0x3dec98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 10));
    // 0x3dec9c: 0x0  nop
    ctx->pc = 0x3dec9cu;
    // NOP
label_3deca0:
    // 0x3deca0: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x3deca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x3deca4: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x3deca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x3deca8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3deca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3decac: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3decacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3decb0: 0x10c300f1  beq         $a2, $v1, . + 4 + (0xF1 << 2)
    ctx->pc = 0x3DECB0u;
    {
        const bool branch_taken_0x3decb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DECB0u;
        // 0x3decb4: 0x8fa400e8  lw          $a0, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3decb0) {
            ctx->pc = 0x3DF078u;
            goto label_3df078;
        }
    }
    ctx->pc = 0x3DECB8u;
    // 0x3decb8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x3decb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x3decbc: 0x8fa801c8  lw          $t0, 0x1C8($sp)
    ctx->pc = 0x3decbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x3decc0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x3decc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x3decc4: 0x8fa90104  lw          $t1, 0x104($sp)
    ctx->pc = 0x3decc4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x3decc8: 0x4a880  sll         $s5, $a0, 2
    ctx->pc = 0x3decc8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3deccc: 0x8faa0114  lw          $t2, 0x114($sp)
    ctx->pc = 0x3decccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x3decd0: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x3decd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3decd4: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x3decd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x3decd8: 0x1e1023  negu        $v0, $fp
    ctx->pc = 0x3decd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
    // 0x3decdc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3decdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3dece0: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x3dece0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dece4: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x3dece4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3dece8: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x3dece8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3decec: 0xafa80108  sw          $t0, 0x108($sp)
    ctx->pc = 0x3dececu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 8));
    // 0x3decf0: 0xafa500f4  sw          $a1, 0xF4($sp)
    ctx->pc = 0x3decf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 5));
    // 0x3decf4: 0x64b021  addu        $s6, $v1, $a0
    ctx->pc = 0x3decf4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3decf8: 0xafaa0100  sw          $t2, 0x100($sp)
    ctx->pc = 0x3decf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 10));
    // 0x3decfc: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x3decfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    // 0x3ded00: 0x8fb200f0  lw          $s2, 0xF0($sp)
    ctx->pc = 0x3ded00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3ded04: 0x8fa500ec  lw          $a1, 0xEC($sp)
    ctx->pc = 0x3ded04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_3ded08:
    // 0x3ded08: 0x31e7821  addu        $t7, $t8, $fp
    ctx->pc = 0x3ded08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 30)));
    // 0x3ded0c: 0x1e5102a  slt         $v0, $t7, $a1
    ctx->pc = 0x3ded0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3ded10: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x3DED10u;
    {
        const bool branch_taken_0x3ded10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DED10u;
        // 0x3ded14: 0x8fa9011c  lw          $t1, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ded10) {
            ctx->pc = 0x3DEEC0u;
            goto label_3deec0;
        }
    }
    ctx->pc = 0x3DED18u;
    // 0x3ded18: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x3ded18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ded1c: 0x8faa0118  lw          $t2, 0x118($sp)
    ctx->pc = 0x3ded1cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3ded20: 0x1e0802d  daddu       $s0, $t7, $zero
    ctx->pc = 0x3ded20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ded24: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x3ded24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3ded28: 0x26ebfffc  addiu       $t3, $s7, -0x4
    ctx->pc = 0x3ded28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967292));
    // 0x3ded2c: 0xafa800f8  sw          $t0, 0xF8($sp)
    ctx->pc = 0x3ded2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 8));
    // 0x3ded30: 0x1ea8821  addu        $s1, $t7, $t2
    ctx->pc = 0x3ded30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
    // 0x3ded34: 0xafa900fc  sw          $t1, 0xFC($sp)
    ctx->pc = 0x3ded34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 9));
    // 0x3ded38: 0x2624021  addu        $t0, $s3, $v0
    ctx->pc = 0x3ded38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3ded3c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3ded3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ded40:
    // 0x3ded40: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x3ded40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x3ded44: 0x200c02d  daddu       $t8, $s0, $zero
    ctx->pc = 0x3ded44u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ded48: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x3ded48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x3ded4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ded4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ded50: 0x783823  subu        $a3, $v1, $t8
    ctx->pc = 0x3ded50u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x3ded54: 0x8faa0128  lw          $t2, 0x128($sp)
    ctx->pc = 0x3ded54u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3ded58: 0x3c7102b  sltu        $v0, $fp, $a3
    ctx->pc = 0x3ded58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3ded5c: 0x986023  subu        $t4, $a0, $t8
    ctx->pc = 0x3ded5cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
    // 0x3ded60: 0x3c2380b  movn        $a3, $fp, $v0
    ctx->pc = 0x3ded60u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 30));
    // 0x3ded64: 0x1851804  sllv        $v1, $a1, $t4
    ctx->pc = 0x3ded64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x3ded68: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3ded68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3ded6c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3ded6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x3ded70: 0xafaa0128  sw          $t2, 0x128($sp)
    ctx->pc = 0x3ded70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 10));
    // 0x3ded74: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x3ded74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3ded78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ded78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ded7c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x3ded7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x3ded80: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x3ded80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x3ded84: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3ded84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3ded88: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x3ded88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x3ded8c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x3ded8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x3ded90: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x3ded90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x3ded94: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x3ded94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x3ded98: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x3ded98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x3ded9c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3ded9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x3deda0: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x3deda0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x3deda4: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x3deda4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3deda8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DEDA8u;
    {
        const bool branch_taken_0x3deda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEDA8u;
        // 0x3dedac: 0x8cae0000  lw          $t6, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deda8) {
            ctx->pc = 0x3DEE1Cu;
            goto label_3dee1c;
        }
    }
    ctx->pc = 0x3DEDB0u;
    // 0x3dedb0: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3dedb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x3dedb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3dedb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3dedb8: 0x3a25021  addu        $t2, $sp, $v0
    ctx->pc = 0x3dedb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3dedbc: 0x187102b  sltu        $v0, $t4, $a3
    ctx->pc = 0x3dedbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3dedc0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3DEDC0u;
    {
        const bool branch_taken_0x3dedc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEDC0u;
        // 0x3dedc4: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dedc0) {
            ctx->pc = 0x3DEE1Cu;
            goto label_3dee1c;
        }
    }
    ctx->pc = 0x3DEDC8u;
    // 0x3dedc8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3dedc8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3dedcc: 0x187102b  sltu        $v0, $t4, $a3
    ctx->pc = 0x3dedccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3dedd0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3DEDD0u;
    {
        const bool branch_taken_0x3dedd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEDD0u;
        // 0x3dedd4: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dedd0) {
            ctx->pc = 0x3DEE1Cu;
            goto label_3dee1c;
        }
    }
    ctx->pc = 0x3DEDD8u;
    // 0x3dedd8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3dedd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3deddc: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x3deddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3dede0: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x3dede0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3dede4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3DEDE4u;
    {
        const bool branch_taken_0x3dede4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dede4) {
            ctx->pc = 0x3DEDE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DEDE4u;
            // 0x3dede8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DEE20u;
            goto label_3dee20;
        }
    }
    ctx->pc = 0x3DEDECu;
    // 0x3dedec: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3dedecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dedf0: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3dedf0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3dedf4: 0x0  nop
    ctx->pc = 0x3dedf4u;
    // NOP
label_3dedf8:
    // 0x3dedf8: 0x187102b  sltu        $v0, $t4, $a3
    ctx->pc = 0x3dedf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3dedfc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DEDFCu;
    {
        const bool branch_taken_0x3dedfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEDFCu;
        // 0x3dee00: 0x641823  subu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dedfc) {
            ctx->pc = 0x3DEE1Cu;
            goto label_3dee1c;
        }
    }
    ctx->pc = 0x3DEE04u;
    // 0x3dee04: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3dee04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3dee08: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3dee08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3dee0c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3dee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3dee10: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x3dee10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3dee14: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3DEE14u;
    {
        const bool branch_taken_0x3dee14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dee14) {
            ctx->pc = 0x3DEE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DEE14u;
            // 0x3dee18: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DEDF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dedf8;
        }
    }
    ctx->pc = 0x3DEE1Cu;
label_3dee1c:
    // 0x3dee1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dee20:
    // 0x3dee20: 0x1833804  sllv        $a3, $v1, $t4
    ctx->pc = 0x3dee20u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 12) & 0x1F));
    // 0x3dee24: 0x1c72021  addu        $a0, $t6, $a3
    ctx->pc = 0x3dee24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x3dee28: 0x2c8205a1  sltiu       $v0, $a0, 0x5A1
    ctx->pc = 0x3dee28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1441) ? 1 : 0);
    // 0x3dee2c: 0x1040fed3  beqz        $v0, . + 4 + (-0x12D << 2)
    ctx->pc = 0x3DEE2Cu;
    {
        const bool branch_taken_0x3dee2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEE2Cu;
        // 0x3dee30: 0x8faa00e0  lw          $t2, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dee2c) {
            ctx->pc = 0x3DE97Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3de97c;
        }
    }
    ctx->pc = 0x3DEE34u;
    // 0x3dee34: 0xe18c0  sll         $v1, $t6, 3
    ctx->pc = 0x3dee34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x3dee38: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3dee38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3dee3c: 0x1437021  addu        $t6, $t2, $v1
    ctx->pc = 0x3dee3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x3dee40: 0xa91021  addu        $v0, $a1, $t1
    ctx->pc = 0x3dee40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x3dee44: 0xac4e0000  sw          $t6, 0x0($v0)
    ctx->pc = 0x3dee44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 14));
    // 0x3dee48: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x3dee48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x3dee4c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3dee4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3dee50: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3dee50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3dee54: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3DEE54u;
    {
        const bool branch_taken_0x3dee54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEE54u;
        // 0x3dee58: 0xab2821  addu        $a1, $a1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dee54) {
            ctx->pc = 0x3DEEA0u;
            goto label_3deea0;
        }
    }
    ctx->pc = 0x3DEE5Cu;
    // 0x3dee5c: 0xad0d0000  sw          $t5, 0x0($t0)
    ctx->pc = 0x3dee5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 13));
    // 0x3dee60: 0xa3ac0040  sb          $t4, 0x40($sp)
    ctx->pc = 0x3dee60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 12));
    // 0x3dee64: 0xa3be0041  sb          $fp, 0x41($sp)
    ctx->pc = 0x3dee64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 30));
    // 0x3dee68: 0x22d6006  srlv        $t4, $t5, $s1
    ctx->pc = 0x3dee68u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 17) & 0x1F));
    // 0x3dee6c: 0xc20c0  sll         $a0, $t4, 3
    ctx->pc = 0x3dee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x3dee70: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3dee70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3dee74: 0x1c31023  subu        $v0, $t6, $v1
    ctx->pc = 0x3dee74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x3dee78: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3dee78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3dee7c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3dee7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3dee80: 0x4c1023  subu        $v0, $v0, $t4
    ctx->pc = 0x3dee80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x3dee84: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x3dee84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x3dee88: 0x6ba50047  ldl         $a1, 0x47($sp)
    ctx->pc = 0x3dee88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3dee8c: 0x6fa50040  ldr         $a1, 0x40($sp)
    ctx->pc = 0x3dee8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3dee90: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x3dee90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3dee94: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x3dee94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3dee98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DEE98u;
    {
        const bool branch_taken_0x3dee98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEE98u;
        // 0x3dee9c: 0x8fa500ec  lw          $a1, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dee98) {
            ctx->pc = 0x3DEEACu;
            goto label_3deeac;
        }
    }
    ctx->pc = 0x3DEEA0u;
label_3deea0:
    // 0x3deea0: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x3deea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x3deea4: 0xac8e0000  sw          $t6, 0x0($a0)
    ctx->pc = 0x3deea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 14));
    // 0x3deea8: 0x8fa500ec  lw          $a1, 0xEC($sp)
    ctx->pc = 0x3deea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_3deeac:
    // 0x3deeac: 0x1fe7821  addu        $t7, $t7, $fp
    ctx->pc = 0x3deeacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 30)));
    // 0x3deeb0: 0x23e8821  addu        $s1, $s1, $fp
    ctx->pc = 0x3deeb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x3deeb4: 0x1e5102a  slt         $v0, $t7, $a1
    ctx->pc = 0x3deeb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3deeb8: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x3DEEB8u;
    {
        const bool branch_taken_0x3deeb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DEEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEEB8u;
        // 0x3deebc: 0x21e8021  addu        $s0, $s0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deeb8) {
            ctx->pc = 0x3DED40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ded40;
        }
    }
    ctx->pc = 0x3DEEC0u;
label_3deec0:
    // 0x3deec0: 0x8fa800ec  lw          $t0, 0xEC($sp)
    ctx->pc = 0x3deec0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x3deec4: 0x8fa900f0  lw          $t1, 0xF0($sp)
    ctx->pc = 0x3deec4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3deec8: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x3deec8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x3deecc: 0x1181023  subu        $v0, $t0, $t8
    ctx->pc = 0x3deeccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 24)));
    // 0x3deed0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3deed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3deed4: 0x12a182b  sltu        $v1, $t1, $t2
    ctx->pc = 0x3deed4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3deed8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DEED8u;
    {
        const bool branch_taken_0x3deed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEED8u;
        // 0x3deedc: 0xa3a20041  sb          $v0, 0x41($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deed8) {
            ctx->pc = 0x3DEEECu;
            goto label_3deeec;
        }
    }
    ctx->pc = 0x3DEEE0u;
    // 0x3deee0: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x3deee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x3deee4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3DEEE4u;
    {
        const bool branch_taken_0x3deee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEEE4u;
        // 0x3deee8: 0xa3a20040  sb          $v0, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deee4) {
            ctx->pc = 0x3DEF78u;
            goto label_3def78;
        }
    }
    ctx->pc = 0x3DEEECu;
label_3deeec:
    // 0x3deeec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3deeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3deef0: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x3deef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3deef4: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x3deef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3deef8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3DEEF8u;
    {
        const bool branch_taken_0x3deef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEEF8u;
        // 0x3deefc: 0x2c620100  sltiu       $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deef8) {
            ctx->pc = 0x3DEF2Cu;
            goto label_3def2c;
        }
    }
    ctx->pc = 0x3DEF00u;
    // 0x3def00: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3DEF00u;
    {
        const bool branch_taken_0x3def00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DEF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEF00u;
        // 0x3def04: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3def00) {
            ctx->pc = 0x3DEF0Cu;
            goto label_3def0c;
        }
    }
    ctx->pc = 0x3DEF08u;
    // 0x3def08: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x3def08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_3def0c:
    // 0x3def0c: 0x8fa800f0  lw          $t0, 0xF0($sp)
    ctx->pc = 0x3def0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3def10: 0xa3a30040  sb          $v1, 0x40($sp)
    ctx->pc = 0x3def10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x3def14: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3def14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3def18: 0xafa800f0  sw          $t0, 0xF0($sp)
    ctx->pc = 0x3def18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 8));
    // 0x3def1c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3def1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3def20: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3def20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x3def24: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3DEF24u;
    {
        const bool branch_taken_0x3def24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEF24u;
        // 0x3def28: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3def24) {
            ctx->pc = 0x3DEF78u;
            goto label_3def78;
        }
    }
    ctx->pc = 0x3DEF2Cu;
label_3def2c:
    // 0x3def2c: 0x8fa900d0  lw          $t1, 0xD0($sp)
    ctx->pc = 0x3def2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3def30: 0x8faa00f0  lw          $t2, 0xF0($sp)
    ctx->pc = 0x3def30u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3def34: 0x691023  subu        $v0, $v1, $t1
    ctx->pc = 0x3def34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3def38: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x3def38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x3def3c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x3def3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3def40: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3def40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x3def44: 0xafaa00f0  sw          $t2, 0xF0($sp)
    ctx->pc = 0x3def44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 10));
    // 0x3def48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3def48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3def4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3def4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3def50: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3def50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3def54: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x3def54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x3def58: 0xa3a30040  sb          $v1, 0x40($sp)
    ctx->pc = 0x3def58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x3def5c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3def5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3def60: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3def60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x3def64: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x3def64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3def68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3def68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3def6c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3def6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3def70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3def70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3def74: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x3def74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_3def78:
    // 0x3def78: 0x30d6006  srlv        $t4, $t5, $t8
    ctx->pc = 0x3def78u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 24) & 0x1F));
    // 0x3def7c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3def7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3def80: 0x881804  sllv        $v1, $t0, $a0
    ctx->pc = 0x3def80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x3def84: 0x24cfffff  addiu       $t7, $a2, -0x1
    ctx->pc = 0x3def84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3def88: 0x187102b  sltu        $v0, $t4, $a3
    ctx->pc = 0x3def88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3def8c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3DEF8Cu;
    {
        const bool branch_taken_0x3def8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEF8Cu;
        // 0x3def90: 0x8faa0120  lw          $t2, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3def8c) {
            ctx->pc = 0x3DEFC0u;
            goto label_3defc0;
        }
    }
    ctx->pc = 0x3DEF94u;
    // 0x3def94: 0xc10c0  sll         $v0, $t4, 3
    ctx->pc = 0x3def94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x3def98: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x3def98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3def9c: 0x4e2021  addu        $a0, $v0, $t6
    ctx->pc = 0x3def9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
label_3defa0:
    // 0x3defa0: 0x6ba90047  ldl         $t1, 0x47($sp)
    ctx->pc = 0x3defa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x3defa4: 0x6fa90040  ldr         $t1, 0x40($sp)
    ctx->pc = 0x3defa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3defa8: 0xb0890007  sdl         $t1, 0x7($a0)
    ctx->pc = 0x3defa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3defac: 0xb4890000  sdr         $t1, 0x0($a0)
    ctx->pc = 0x3defacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3defb0: 0x1836021  addu        $t4, $t4, $v1
    ctx->pc = 0x3defb0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x3defb4: 0x187102b  sltu        $v0, $t4, $a3
    ctx->pc = 0x3defb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3defb8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3DEFB8u;
    {
        const bool branch_taken_0x3defb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DEFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEFB8u;
        // 0x3defbc: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3defb8) {
            ctx->pc = 0x3DEFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3defa0;
        }
    }
    ctx->pc = 0x3DEFC0u;
label_3defc0:
    // 0x3defc0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3defc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3defc4: 0x1496004  sllv        $t4, $t1, $t2
    ctx->pc = 0x3defc4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 10) & 0x1F));
    // 0x3defc8: 0x1ac1024  and         $v0, $t5, $t4
    ctx->pc = 0x3defc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 12));
    // 0x3defcc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3DEFCCu;
    {
        const bool branch_taken_0x3defcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEFCCu;
        // 0x3defd0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3defcc) {
            ctx->pc = 0x3DEFF8u;
            goto label_3deff8;
        }
    }
    ctx->pc = 0x3DEFD4u;
    // 0x3defd4: 0x1ac6826  xor         $t5, $t5, $t4
    ctx->pc = 0x3defd4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 12));
label_3defd8:
    // 0x3defd8: 0xc6042  srl         $t4, $t4, 1
    ctx->pc = 0x3defd8u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
    // 0x3defdc: 0x1ac1024  and         $v0, $t5, $t4
    ctx->pc = 0x3defdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 12));
    // 0x3defe0: 0x0  nop
    ctx->pc = 0x3defe0u;
    // NOP
    // 0x3defe4: 0x0  nop
    ctx->pc = 0x3defe4u;
    // NOP
    // 0x3defe8: 0x0  nop
    ctx->pc = 0x3defe8u;
    // NOP
    // 0x3defec: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3DEFECu;
    {
        const bool branch_taken_0x3defec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3defec) {
            ctx->pc = 0x3DEFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DEFECu;
            // 0x3deff0: 0x1ac6826  xor         $t5, $t5, $t4 (Delay Slot)
            SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DEFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3defd8;
        }
    }
    ctx->pc = 0x3DEFF4u;
    // 0x3deff4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3deff4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3deff8:
    // 0x3deff8: 0x1ac6826  xor         $t5, $t5, $t4
    ctx->pc = 0x3deff8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 12));
    // 0x3deffc: 0x30a1004  sllv        $v0, $t2, $t8
    ctx->pc = 0x3deffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 24) & 0x1F));
    // 0x3df000: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x3df000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3df004: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3df004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3df008: 0x1a21024  and         $v0, $t5, $v0
    ctx->pc = 0x3df008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 2));
    // 0x3df00c: 0x10430016  beq         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3DF00Cu;
    {
        const bool branch_taken_0x3df00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DF010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF00Cu;
        // 0x3df010: 0x8fa20114  lw          $v0, 0x114($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df00c) {
            ctx->pc = 0x3DF068u;
            goto label_3df068;
        }
    }
    ctx->pc = 0x3DF014u;
    // 0x3df014: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3df014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3df018: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x3df018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x3df01c: 0x0  nop
    ctx->pc = 0x3df01cu;
    // NOP
label_3df020:
    // 0x3df020: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x3df020u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3df024: 0x31ec023  subu        $t8, $t8, $fp
    ctx->pc = 0x3df024u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 30)));
    // 0x3df028: 0x8fa800e8  lw          $t0, 0xE8($sp)
    ctx->pc = 0x3df028u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3df02c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x3df02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x3df030: 0x3051004  sllv        $v0, $a1, $t8
    ctx->pc = 0x3df030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 24) & 0x1F));
    // 0x3df034: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3df034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3df038: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3df038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3df03c: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x3df03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x3df040: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3df040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3df044: 0x26d6fffc  addiu       $s6, $s6, -0x4
    ctx->pc = 0x3df044u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
    // 0x3df048: 0x1a21024  and         $v0, $t5, $v0
    ctx->pc = 0x3df048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 2));
    // 0x3df04c: 0x26b5fffc  addiu       $s5, $s5, -0x4
    ctx->pc = 0x3df04cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
    // 0x3df050: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x3df050u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    // 0x3df054: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x3df054u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x3df058: 0x26f7fffc  addiu       $s7, $s7, -0x4
    ctx->pc = 0x3df058u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967292));
    // 0x3df05c: 0xafa60128  sw          $a2, 0x128($sp)
    ctx->pc = 0x3df05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 6));
    // 0x3df060: 0x1443ffef  bne         $v0, $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3DF060u;
    {
        const bool branch_taken_0x3df060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DF064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF060u;
        // 0x3df064: 0xafa800e8  sw          $t0, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df060) {
            ctx->pc = 0x3DF020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3df020;
        }
    }
    ctx->pc = 0x3DF068u;
label_3df068:
    // 0x3df068: 0x8fa900f4  lw          $t1, 0xF4($sp)
    ctx->pc = 0x3df068u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x3df06c: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x3df06cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df070: 0x14c9ff25  bne         $a2, $t1, . + 4 + (-0xDB << 2)
    ctx->pc = 0x3DF070u;
    {
        const bool branch_taken_0x3df070 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 9));
        ctx->pc = 0x3DF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF070u;
        // 0x3df074: 0x8fa500ec  lw          $a1, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df070) {
            ctx->pc = 0x3DED08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ded08;
        }
    }
    ctx->pc = 0x3DF078u;
label_3df078:
    // 0x3df078: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x3df078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x3df07c: 0x8faa00ec  lw          $t2, 0xEC($sp)
    ctx->pc = 0x3df07cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x3df080: 0x8fa30124  lw          $v1, 0x124($sp)
    ctx->pc = 0x3df080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x3df084: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3df084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3df088: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x3df088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3df08c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3df08cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3df090: 0x8fa500e4  lw          $a1, 0xE4($sp)
    ctx->pc = 0x3df090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x3df094: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3df094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3df098: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x3df098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
    // 0x3df09c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3df09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3df0a0: 0xafaa00ec  sw          $t2, 0xEC($sp)
    ctx->pc = 0x3df0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 10));
    // 0x3df0a4: 0xaa102a  slt         $v0, $a1, $t2
    ctx->pc = 0x3df0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3df0a8: 0xafa30124  sw          $v1, 0x124($sp)
    ctx->pc = 0x3df0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
    // 0x3df0ac: 0x1040fefc  beqz        $v0, . + 4 + (-0x104 << 2)
    ctx->pc = 0x3DF0ACu;
    {
        const bool branch_taken_0x3df0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF0ACu;
        // 0x3df0b0: 0xafa40120  sw          $a0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df0ac) {
            ctx->pc = 0x3DECA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3deca0;
        }
    }
    ctx->pc = 0x3DF0B4u;
label_3df0b4:
    // 0x3df0b4: 0x13200005  beqz        $t9, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DF0B4u;
    {
        const bool branch_taken_0x3df0b4 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF0B4u;
        // 0x3df0b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df0b4) {
            ctx->pc = 0x3DF0CCu;
            goto label_3df0cc;
        }
    }
    ctx->pc = 0x3DF0BCu;
    // 0x3df0bc: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x3df0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x3df0c0: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x3df0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x3df0c4: 0x38c20001  xori        $v0, $a2, 0x1
    ctx->pc = 0x3df0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x3df0c8: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x3df0c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_3df0cc:
    // 0x3df0cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3df0ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3df0d0:
    // 0x3df0d0: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x3df0d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x3df0d4: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x3df0d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x3df0d8: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x3df0d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x3df0dc: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x3df0dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x3df0e0: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x3df0e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x3df0e4: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x3df0e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x3df0e8: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x3df0e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x3df0ec: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x3df0ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3df0f0: 0x7bbe0130  lq          $fp, 0x130($sp)
    ctx->pc = 0x3df0f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3df0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF0F4u;
        // 0x3df0f8: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF0FCu;
    // 0x3df0fc: 0x0  nop
    ctx->pc = 0x3df0fcu;
    // NOP
    ctx->pc = 0x3df100u;
}
