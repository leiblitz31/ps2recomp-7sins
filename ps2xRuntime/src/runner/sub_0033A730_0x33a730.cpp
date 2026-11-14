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

// Function: sub_0033A730
// Address: 0x33a730 - 0x33ab40
void sub_0033A730_0x33a730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A730_0x33a730");
#endif

    switch (ctx->pc) {
        case 0x33a748u: goto label_33a748;
        case 0x33a848u: goto label_33a848;
        case 0x33aa20u: goto label_33aa20;
        default: break;
    }

    ctx->pc = 0x33a730u;

    // 0x33a730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33a730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33a734: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x33a734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x33a738: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33a738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33a73c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33a73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33a740: 0xc0d2612  jal         func_349848
    ctx->pc = 0x33A740u;
    SET_GPR_U32(ctx, 31, 0x33A748u);
    ctx->pc = 0x33A744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A740u;
    // 0x33a744: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349848u, 0x33A740u, 0x33A748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A748u;
label_33a748:
    // 0x33a748: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x33a748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x33a74c: 0x104000f5  beqz        $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x33A74Cu;
    {
        const bool branch_taken_0x33a74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A74Cu;
        // 0x33a750: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a74c) {
            ctx->pc = 0x33AB24u;
            goto label_33ab24;
        }
    }
    ctx->pc = 0x33A754u;
    // 0x33a754: 0x8e0b0020  lw          $t3, 0x20($s0)
    ctx->pc = 0x33a754u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x33a758: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x33a758u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x33a75c: 0x14e2007a  bne         $a3, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x33A75Cu;
    {
        const bool branch_taken_0x33a75c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x33A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A75Cu;
        // 0x33a760: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a75c) {
            ctx->pc = 0x33A948u;
            goto label_33a948;
        }
    }
    ctx->pc = 0x33A764u;
    // 0x33a764: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x33a764u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33a768: 0x1b1102a  slt         $v0, $t5, $s1
    ctx->pc = 0x33a768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x33a76c: 0x104000e9  beqz        $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x33A76Cu;
    {
        const bool branch_taken_0x33a76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A76Cu;
        // 0x33a770: 0x3c190100  lui         $t9, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a76c) {
            ctx->pc = 0x33AB14u;
            goto label_33ab14;
        }
    }
    ctx->pc = 0x33A774u;
    // 0x33a774: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x33a774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x33a778: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33a778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33a77c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x33a77cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x33a780: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x33a780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x33a784: 0x3c180100  lui         $t8, 0x100
    ctx->pc = 0x33a784u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)256 << 16));
    // 0x33a788: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x33a788u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a78c: 0x3c0f0100  lui         $t7, 0x100
    ctx->pc = 0x33a78cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)256 << 16));
    // 0x33a790: 0x3c0e0100  lui         $t6, 0x100
    ctx->pc = 0x33a790u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)256 << 16));
    // 0x33a794: 0x262dffff  addiu       $t5, $s1, -0x1
    ctx->pc = 0x33a794u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x33a798: 0x37390002  ori         $t9, $t9, 0x2
    ctx->pc = 0x33a798u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)2);
    // 0x33a79c: 0x34c6fff0  ori         $a2, $a2, 0xFFF0
    ctx->pc = 0x33a79cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65520);
    // 0x33a7a0: 0x37180003  ori         $t8, $t8, 0x3
    ctx->pc = 0x33a7a0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)3);
    // 0x33a7a4: 0x35ef0004  ori         $t7, $t7, 0x4
    ctx->pc = 0x33a7a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)4);
    // 0x33a7a8: 0x35ce0005  ori         $t6, $t6, 0x5
    ctx->pc = 0x33a7a8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)5);
    // 0x33a7ac: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x33a7acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33a7b0: 0x246a0004  addiu       $t2, $v1, 0x4
    ctx->pc = 0x33a7b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x33a7b4: 0x31a20001  andi        $v0, $t5, 0x1
    ctx->pc = 0x33a7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x33a7b8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x33A7B8u;
    {
        const bool branch_taken_0x33a7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A7B8u;
        // 0x33a7bc: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a7b8) {
            ctx->pc = 0x33A83Cu;
            goto label_33a83c;
        }
    }
    ctx->pc = 0x33A7C0u;
    // 0x33a7c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x33a7c4: 0x1059000b  beq         $v0, $t9, . + 4 + (0xB << 2)
    ctx->pc = 0x33A7C4u;
    {
        const bool branch_taken_0x33a7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 25));
        ctx->pc = 0x33A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A7C4u;
        // 0x33a7c8: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a7c4) {
            ctx->pc = 0x33A7F4u;
            goto label_33a7f4;
        }
    }
    ctx->pc = 0x33A7CCu;
    // 0x33a7cc: 0x14580005  bne         $v0, $t8, . + 4 + (0x5 << 2)
    ctx->pc = 0x33A7CCu;
    {
        const bool branch_taken_0x33a7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 24));
        if (branch_taken_0x33a7cc) {
            ctx->pc = 0x33A7E4u;
            goto label_33a7e4;
        }
    }
    ctx->pc = 0x33A7D4u;
    // 0x33a7d4: 0x2462fffb  addiu       $v0, $v1, -0x5
    ctx->pc = 0x33a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x33a7d8: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x33a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x33a7dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33A7DCu;
    {
        const bool branch_taken_0x33a7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A7DCu;
        // 0x33a7e0: 0x462024  and         $a0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a7dc) {
            ctx->pc = 0x33A800u;
            goto label_33a800;
        }
    }
    ctx->pc = 0x33A7E4u;
label_33a7e4:
    // 0x33a7e4: 0x504f0004  beql        $v0, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x33A7E4u;
    {
        const bool branch_taken_0x33a7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        if (branch_taken_0x33a7e4) {
            ctx->pc = 0x33A7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A7E4u;
            // 0x33a7e8: 0x24620003  addiu       $v0, $v1, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A7F8u;
            goto label_33a7f8;
        }
    }
    ctx->pc = 0x33A7ECu;
    // 0x33a7ec: 0x544e0004  bnel        $v0, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x33A7ECu;
    {
        const bool branch_taken_0x33a7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        if (branch_taken_0x33a7ec) {
            ctx->pc = 0x33A7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A7ECu;
            // 0x33a7f0: 0x8d640004  lw          $a0, 0x4($t3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A800u;
            goto label_33a800;
        }
    }
    ctx->pc = 0x33A7F4u;
label_33a7f4:
    // 0x33a7f4: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x33a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_33a7f8:
    // 0x33a7f8: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x33a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x33a7fc: 0x462024  and         $a0, $v0, $a2
    ctx->pc = 0x33a7fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_33a800:
    // 0x33a800: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x33a800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x33a804: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x33a804u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x33a808: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x33a808u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x33a80c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x33a80cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x33a810: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x33a810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x33a814: 0x1851821  addu        $v1, $t4, $a1
    ctx->pc = 0x33a814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x33a818: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x33a818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x33a81c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x33a81cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x33a820: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x33a820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x33a824: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x33a824u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x33a828: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x33a828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x33a82c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x33a82cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x33a830: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x33a830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33a834: 0x11a000b6  beqz        $t5, . + 4 + (0xB6 << 2)
    ctx->pc = 0x33A834u;
    {
        const bool branch_taken_0x33a834 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A834u;
        // 0x33a838: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a834) {
            ctx->pc = 0x33AB10u;
            goto label_33ab10;
        }
    }
    ctx->pc = 0x33A83Cu;
label_33a83c:
    // 0x33a83c: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x33a83cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a840: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x33a840u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a844: 0x0  nop
    ctx->pc = 0x33a844u;
    // NOP
label_33a848:
    // 0x33a848: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x33a848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x33a84c: 0x1059000b  beq         $v0, $t9, . + 4 + (0xB << 2)
    ctx->pc = 0x33A84Cu;
    {
        const bool branch_taken_0x33a84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 25));
        ctx->pc = 0x33A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A84Cu;
        // 0x33a850: 0x8d630000  lw          $v1, 0x0($t3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a84c) {
            ctx->pc = 0x33A87Cu;
            goto label_33a87c;
        }
    }
    ctx->pc = 0x33A854u;
    // 0x33a854: 0x14580005  bne         $v0, $t8, . + 4 + (0x5 << 2)
    ctx->pc = 0x33A854u;
    {
        const bool branch_taken_0x33a854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 24));
        if (branch_taken_0x33a854) {
            ctx->pc = 0x33A86Cu;
            goto label_33a86c;
        }
    }
    ctx->pc = 0x33A85Cu;
    // 0x33a85c: 0x2462fffb  addiu       $v0, $v1, -0x5
    ctx->pc = 0x33a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x33a860: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x33a860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x33a864: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x33A864u;
    {
        const bool branch_taken_0x33a864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A864u;
        // 0x33a868: 0x462024  and         $a0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a864) {
            ctx->pc = 0x33A894u;
            goto label_33a894;
        }
    }
    ctx->pc = 0x33A86Cu;
label_33a86c:
    // 0x33a86c: 0x504f0004  beql        $v0, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x33A86Cu;
    {
        const bool branch_taken_0x33a86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        if (branch_taken_0x33a86c) {
            ctx->pc = 0x33A870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A86Cu;
            // 0x33a870: 0x24620003  addiu       $v0, $v1, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A880u;
            goto label_33a880;
        }
    }
    ctx->pc = 0x33A874u;
    // 0x33a874: 0x544e0005  bnel        $v0, $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x33A874u;
    {
        const bool branch_taken_0x33a874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        if (branch_taken_0x33a874) {
            ctx->pc = 0x33A878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A874u;
            // 0x33a878: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A88Cu;
            goto label_33a88c;
        }
    }
    ctx->pc = 0x33A87Cu;
label_33a87c:
    // 0x33a87c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x33a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_33a880:
    // 0x33a880: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x33a880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x33a884: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33A884u;
    {
        const bool branch_taken_0x33a884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A884u;
        // 0x33a888: 0x462024  and         $a0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a884) {
            ctx->pc = 0x33A894u;
            goto label_33a894;
        }
    }
    ctx->pc = 0x33A88Cu;
label_33a88c:
    // 0x33a88c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x33a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x33a890: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33a890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33a894:
    // 0x33a894: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x33a894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x33a898: 0x25880004  addiu       $t0, $t4, 0x4
    ctx->pc = 0x33a898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x33a89c: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x33a89cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x33a8a0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x33a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x33a8a4: 0x1851821  addu        $v1, $t4, $a1
    ctx->pc = 0x33a8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x33a8a8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x33a8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x33a8ac: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x33a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x33a8b0: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x33a8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x33a8b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x33a8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33a8b8: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x33a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x33a8bc: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x33a8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x33a8c0: 0x1059000b  beq         $v0, $t9, . + 4 + (0xB << 2)
    ctx->pc = 0x33A8C0u;
    {
        const bool branch_taken_0x33a8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 25));
        ctx->pc = 0x33A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8C0u;
        // 0x33a8c4: 0x8d630004  lw          $v1, 0x4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a8c0) {
            ctx->pc = 0x33A8F0u;
            goto label_33a8f0;
        }
    }
    ctx->pc = 0x33A8C8u;
    // 0x33a8c8: 0x14580005  bne         $v0, $t8, . + 4 + (0x5 << 2)
    ctx->pc = 0x33A8C8u;
    {
        const bool branch_taken_0x33a8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 24));
        if (branch_taken_0x33a8c8) {
            ctx->pc = 0x33A8E0u;
            goto label_33a8e0;
        }
    }
    ctx->pc = 0x33A8D0u;
    // 0x33a8d0: 0x2462fffb  addiu       $v0, $v1, -0x5
    ctx->pc = 0x33a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x33a8d4: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x33a8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x33a8d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x33A8D8u;
    {
        const bool branch_taken_0x33a8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8D8u;
        // 0x33a8dc: 0x462024  and         $a0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a8d8) {
            ctx->pc = 0x33A904u;
            goto label_33a904;
        }
    }
    ctx->pc = 0x33A8E0u;
label_33a8e0:
    // 0x33a8e0: 0x504f0004  beql        $v0, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x33A8E0u;
    {
        const bool branch_taken_0x33a8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        if (branch_taken_0x33a8e0) {
            ctx->pc = 0x33A8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A8E0u;
            // 0x33a8e4: 0x24620003  addiu       $v0, $v1, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A8F4u;
            goto label_33a8f4;
        }
    }
    ctx->pc = 0x33A8E8u;
    // 0x33a8e8: 0x144e0005  bne         $v0, $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x33A8E8u;
    {
        const bool branch_taken_0x33a8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        ctx->pc = 0x33A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8E8u;
        // 0x33a8ec: 0x1051021  addu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a8e8) {
            ctx->pc = 0x33A900u;
            goto label_33a900;
        }
    }
    ctx->pc = 0x33A8F0u;
label_33a8f0:
    // 0x33a8f0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x33a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_33a8f4:
    // 0x33a8f4: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x33a8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x33a8f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33A8F8u;
    {
        const bool branch_taken_0x33a8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8F8u;
        // 0x33a8fc: 0x462024  and         $a0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a8f8) {
            ctx->pc = 0x33A904u;
            goto label_33a904;
        }
    }
    ctx->pc = 0x33A900u;
label_33a900:
    // 0x33a900: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33a900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33a904:
    // 0x33a904: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x33a904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x33a908: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x33a908u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x33a90c: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x33a90cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x33a910: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x33a910u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x33a914: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x33a914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x33a918: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x33a918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x33a91c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x33a91cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x33a920: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x33a920u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x33a924: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x33a924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x33a928: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x33a928u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x33a92c: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x33a92cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x33a930: 0x25adfffe  addiu       $t5, $t5, -0x2
    ctx->pc = 0x33a930u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967294));
    // 0x33a934: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x33a934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33a938: 0x15a0ffc3  bnez        $t5, . + 4 + (-0x3D << 2)
    ctx->pc = 0x33A938u;
    {
        const bool branch_taken_0x33a938 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A938u;
        // 0x33a93c: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a938) {
            ctx->pc = 0x33A848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a848;
        }
    }
    ctx->pc = 0x33A940u;
    // 0x33a940: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x33A940u;
    {
        const bool branch_taken_0x33a940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A940u;
        // 0x33a944: 0x220682d  daddu       $t5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a940) {
            ctx->pc = 0x33AB14u;
            goto label_33ab14;
        }
    }
    ctx->pc = 0x33A948u;
label_33a948:
    // 0x33a948: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x33a948u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33a94c: 0x1b1102a  slt         $v0, $t5, $s1
    ctx->pc = 0x33a94cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x33a950: 0x50400071  beql        $v0, $zero, . + 4 + (0x71 << 2)
    ctx->pc = 0x33A950u;
    {
        const bool branch_taken_0x33a950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a950) {
            ctx->pc = 0x33A954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A950u;
            // 0x33a954: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AB18u;
            goto label_33ab18;
        }
    }
    ctx->pc = 0x33A958u;
    // 0x33a958: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x33a958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x33a95c: 0x3c180100  lui         $t8, 0x100
    ctx->pc = 0x33a95cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)256 << 16));
    // 0x33a960: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33a960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33a964: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x33a964u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x33a968: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x33a968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x33a96c: 0x3c0ffeff  lui         $t7, 0xFEFF
    ctx->pc = 0x33a96cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65279 << 16));
    // 0x33a970: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x33a970u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a974: 0x3c0e0100  lui         $t6, 0x100
    ctx->pc = 0x33a974u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)256 << 16));
    // 0x33a978: 0x262dffff  addiu       $t5, $s1, -0x1
    ctx->pc = 0x33a978u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x33a97c: 0x37180002  ori         $t8, $t8, 0x2
    ctx->pc = 0x33a97cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)2);
    // 0x33a980: 0x3508fff0  ori         $t0, $t0, 0xFFF0
    ctx->pc = 0x33a980u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65520);
    // 0x33a984: 0x35effffd  ori         $t7, $t7, 0xFFFD
    ctx->pc = 0x33a984u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65533);
    // 0x33a988: 0x35ce0005  ori         $t6, $t6, 0x5
    ctx->pc = 0x33a988u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)5);
    // 0x33a98c: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x33a98cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33a990: 0x246a0004  addiu       $t2, $v1, 0x4
    ctx->pc = 0x33a990u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x33a994: 0x31a20001  andi        $v0, $t5, 0x1
    ctx->pc = 0x33a994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x33a998: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x33A998u;
    {
        const bool branch_taken_0x33a998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A998u;
        // 0x33a99c: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a998) {
            ctx->pc = 0x33AA18u;
            goto label_33aa18;
        }
    }
    ctx->pc = 0x33A9A0u;
    // 0x33a9a0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x33a9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x33a9a4: 0x1098000a  beq         $a0, $t8, . + 4 + (0xA << 2)
    ctx->pc = 0x33A9A4u;
    {
        const bool branch_taken_0x33a9a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 24));
        ctx->pc = 0x33A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9A4u;
        // 0x33a9a8: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a9a4) {
            ctx->pc = 0x33A9D0u;
            goto label_33a9d0;
        }
    }
    ctx->pc = 0x33A9ACu;
    // 0x33a9ac: 0x8f1021  addu        $v0, $a0, $t7
    ctx->pc = 0x33a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x33a9b0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x33a9b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x33a9b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33A9B4u;
    {
        const bool branch_taken_0x33a9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9B4u;
        // 0x33a9b8: 0x24620023  addiu       $v0, $v1, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a9b4) {
            ctx->pc = 0x33A9C8u;
            goto label_33a9c8;
        }
    }
    ctx->pc = 0x33A9BCu;
    // 0x33a9bc: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x33a9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x33a9c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33A9C0u;
    {
        const bool branch_taken_0x33a9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9C0u;
        // 0x33a9c4: 0x482024  and         $a0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a9c0) {
            ctx->pc = 0x33A9DCu;
            goto label_33a9dc;
        }
    }
    ctx->pc = 0x33A9C8u;
label_33a9c8:
    // 0x33a9c8: 0x548e0004  bnel        $a0, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x33A9C8u;
    {
        const bool branch_taken_0x33a9c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 14));
        if (branch_taken_0x33a9c8) {
            ctx->pc = 0x33A9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A9C8u;
            // 0x33a9cc: 0x8d640004  lw          $a0, 0x4($t3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A9DCu;
            goto label_33a9dc;
        }
    }
    ctx->pc = 0x33A9D0u;
label_33a9d0:
    // 0x33a9d0: 0x2462001b  addiu       $v0, $v1, 0x1B
    ctx->pc = 0x33a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 27));
    // 0x33a9d4: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x33a9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x33a9d8: 0x482024  and         $a0, $v0, $t0
    ctx->pc = 0x33a9d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_33a9dc:
    // 0x33a9dc: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x33a9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x33a9e0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x33a9e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x33a9e4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x33a9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x33a9e8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x33a9e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x33a9ec: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x33a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x33a9f0: 0x1851821  addu        $v1, $t4, $a1
    ctx->pc = 0x33a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x33a9f4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x33a9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x33a9f8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x33a9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x33a9fc: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x33a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x33aa00: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x33aa00u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x33aa04: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x33aa04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x33aa08: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x33aa08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x33aa0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33aa10: 0x11a0003f  beqz        $t5, . + 4 + (0x3F << 2)
    ctx->pc = 0x33AA10u;
    {
        const bool branch_taken_0x33aa10 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA10u;
        // 0x33aa14: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aa10) {
            ctx->pc = 0x33AB10u;
            goto label_33ab10;
        }
    }
    ctx->pc = 0x33AA18u;
label_33aa18:
    // 0x33aa18: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x33aa18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aa1c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x33aa1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33aa20:
    // 0x33aa20: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x33aa20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x33aa24: 0x1098000a  beq         $a0, $t8, . + 4 + (0xA << 2)
    ctx->pc = 0x33AA24u;
    {
        const bool branch_taken_0x33aa24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 24));
        ctx->pc = 0x33AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA24u;
        // 0x33aa28: 0x8d630000  lw          $v1, 0x0($t3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aa24) {
            ctx->pc = 0x33AA50u;
            goto label_33aa50;
        }
    }
    ctx->pc = 0x33AA2Cu;
    // 0x33aa2c: 0x8f1021  addu        $v0, $a0, $t7
    ctx->pc = 0x33aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x33aa30: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x33aa30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x33aa34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AA34u;
    {
        const bool branch_taken_0x33aa34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA34u;
        // 0x33aa38: 0x24620023  addiu       $v0, $v1, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aa34) {
            ctx->pc = 0x33AA48u;
            goto label_33aa48;
        }
    }
    ctx->pc = 0x33AA3Cu;
    // 0x33aa3c: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x33aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x33aa40: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33AA40u;
    {
        const bool branch_taken_0x33aa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA40u;
        // 0x33aa44: 0x482024  and         $a0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aa40) {
            ctx->pc = 0x33AA68u;
            goto label_33aa68;
        }
    }
    ctx->pc = 0x33AA48u;
label_33aa48:
    // 0x33aa48: 0x548e0005  bnel        $a0, $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x33AA48u;
    {
        const bool branch_taken_0x33aa48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 14));
        if (branch_taken_0x33aa48) {
            ctx->pc = 0x33AA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AA48u;
            // 0x33aa4c: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AA60u;
            goto label_33aa60;
        }
    }
    ctx->pc = 0x33AA50u;
label_33aa50:
    // 0x33aa50: 0x2462001b  addiu       $v0, $v1, 0x1B
    ctx->pc = 0x33aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 27));
    // 0x33aa54: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x33aa54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x33aa58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33AA58u;
    {
        const bool branch_taken_0x33aa58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA58u;
        // 0x33aa5c: 0x482024  and         $a0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aa58) {
            ctx->pc = 0x33AA68u;
            goto label_33aa68;
        }
    }
    ctx->pc = 0x33AA60u;
label_33aa60:
    // 0x33aa60: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x33aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x33aa64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33aa64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33aa68:
    // 0x33aa68: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x33aa68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x33aa6c: 0x25860004  addiu       $a2, $t4, 0x4
    ctx->pc = 0x33aa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x33aa70: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x33aa70u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x33aa74: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x33aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x33aa78: 0x1851821  addu        $v1, $t4, $a1
    ctx->pc = 0x33aa78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x33aa7c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x33aa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x33aa80: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x33aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x33aa84: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x33aa84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x33aa88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33aa8c: 0x8d440004  lw          $a0, 0x4($t2)
    ctx->pc = 0x33aa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x33aa90: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x33aa90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x33aa94: 0x1098000a  beq         $a0, $t8, . + 4 + (0xA << 2)
    ctx->pc = 0x33AA94u;
    {
        const bool branch_taken_0x33aa94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 24));
        ctx->pc = 0x33AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA94u;
        // 0x33aa98: 0x8d630004  lw          $v1, 0x4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aa94) {
            ctx->pc = 0x33AAC0u;
            goto label_33aac0;
        }
    }
    ctx->pc = 0x33AA9Cu;
    // 0x33aa9c: 0x8f1021  addu        $v0, $a0, $t7
    ctx->pc = 0x33aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x33aaa0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x33aaa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x33aaa4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AAA4u;
    {
        const bool branch_taken_0x33aaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AAA4u;
        // 0x33aaa8: 0x24620023  addiu       $v0, $v1, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aaa4) {
            ctx->pc = 0x33AAB8u;
            goto label_33aab8;
        }
    }
    ctx->pc = 0x33AAACu;
    // 0x33aaac: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x33aaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x33aab0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33AAB0u;
    {
        const bool branch_taken_0x33aab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AAB0u;
        // 0x33aab4: 0x482024  and         $a0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aab0) {
            ctx->pc = 0x33AAD4u;
            goto label_33aad4;
        }
    }
    ctx->pc = 0x33AAB8u;
label_33aab8:
    // 0x33aab8: 0x148e0005  bne         $a0, $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x33AAB8u;
    {
        const bool branch_taken_0x33aab8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 14));
        ctx->pc = 0x33AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AAB8u;
        // 0x33aabc: 0xc51021  addu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aab8) {
            ctx->pc = 0x33AAD0u;
            goto label_33aad0;
        }
    }
    ctx->pc = 0x33AAC0u;
label_33aac0:
    // 0x33aac0: 0x2462001b  addiu       $v0, $v1, 0x1B
    ctx->pc = 0x33aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 27));
    // 0x33aac4: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x33aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x33aac8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33AAC8u;
    {
        const bool branch_taken_0x33aac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AAC8u;
        // 0x33aacc: 0x482024  and         $a0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aac8) {
            ctx->pc = 0x33AAD4u;
            goto label_33aad4;
        }
    }
    ctx->pc = 0x33AAD0u;
label_33aad0:
    // 0x33aad0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33aad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33aad4:
    // 0x33aad4: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x33aad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x33aad8: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x33aad8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x33aadc: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x33aadcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x33aae0: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x33aae0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x33aae4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x33aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x33aae8: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x33aae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x33aaec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x33aaecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x33aaf0: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x33aaf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x33aaf4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x33aaf8: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x33aaf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x33aafc: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x33aafcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x33ab00: 0x25adfffe  addiu       $t5, $t5, -0x2
    ctx->pc = 0x33ab00u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967294));
    // 0x33ab04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33ab08: 0x15a0ffc5  bnez        $t5, . + 4 + (-0x3B << 2)
    ctx->pc = 0x33AB08u;
    {
        const bool branch_taken_0x33ab08 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x33AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB08u;
        // 0x33ab0c: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ab08) {
            ctx->pc = 0x33AA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33aa20;
        }
    }
    ctx->pc = 0x33AB10u;
label_33ab10:
    // 0x33ab10: 0x220682d  daddu       $t5, $s1, $zero
    ctx->pc = 0x33ab10u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33ab14:
    // 0x33ab14: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x33ab14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_33ab18:
    // 0x33ab18: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x33ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x33ab1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ab20: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x33ab20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
label_33ab24:
    // 0x33ab24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33ab24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ab28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33ab28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ab2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x33ab2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33ab30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33ab30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ab34: 0x3e00008  jr          $ra
    ctx->pc = 0x33AB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB34u;
        // 0x33ab38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AB3Cu;
    // 0x33ab3c: 0x0  nop
    ctx->pc = 0x33ab3cu;
    // NOP
    ctx->pc = 0x33ab40u;
}
