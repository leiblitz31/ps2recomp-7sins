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

// Function: sub_0041E7A8
// Address: 0x41e7a8 - 0x41eb38
void sub_0041E7A8_0x41e7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E7A8_0x41e7a8");
#endif

    switch (ctx->pc) {
        case 0x41e800u: goto label_41e800;
        case 0x41e820u: goto label_41e820;
        case 0x41e8a4u: goto label_41e8a4;
        case 0x41e8b4u: goto label_41e8b4;
        case 0x41e900u: goto label_41e900;
        case 0x41e91cu: goto label_41e91c;
        case 0x41e938u: goto label_41e938;
        case 0x41e944u: goto label_41e944;
        case 0x41e958u: goto label_41e958;
        case 0x41e96cu: goto label_41e96c;
        case 0x41e980u: goto label_41e980;
        case 0x41e998u: goto label_41e998;
        case 0x41e9b4u: goto label_41e9b4;
        case 0x41e9e4u: goto label_41e9e4;
        case 0x41e9f8u: goto label_41e9f8;
        case 0x41ea14u: goto label_41ea14;
        case 0x41ea28u: goto label_41ea28;
        case 0x41ea40u: goto label_41ea40;
        case 0x41ea54u: goto label_41ea54;
        case 0x41ea68u: goto label_41ea68;
        case 0x41ea84u: goto label_41ea84;
        case 0x41ea98u: goto label_41ea98;
        case 0x41eaacu: goto label_41eaac;
        case 0x41eac0u: goto label_41eac0;
        case 0x41eadcu: goto label_41eadc;
        case 0x41eaf0u: goto label_41eaf0;
        case 0x41eb08u: goto label_41eb08;
        default: break;
    }

    ctx->pc = 0x41e7a8u;

    // 0x41e7a8: 0x27bdbf60  addiu       $sp, $sp, -0x40A0
    ctx->pc = 0x41e7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294950752));
    // 0x41e7ac: 0x7fb24070  sq          $s2, 0x4070($sp)
    ctx->pc = 0x41e7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16496), GPR_VEC(ctx, 18));
    // 0x41e7b0: 0x7fb44050  sq          $s4, 0x4050($sp)
    ctx->pc = 0x41e7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16464), GPR_VEC(ctx, 20));
    // 0x41e7b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x41e7b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e7b8: 0x7fb54040  sq          $s5, 0x4040($sp)
    ctx->pc = 0x41e7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16448), GPR_VEC(ctx, 21));
    // 0x41e7bc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x41e7bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e7c0: 0x7fb64030  sq          $s6, 0x4030($sp)
    ctx->pc = 0x41e7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16432), GPR_VEC(ctx, 22));
    // 0x41e7c4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x41e7c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e7c8: 0x7fb74020  sq          $s7, 0x4020($sp)
    ctx->pc = 0x41e7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16416), GPR_VEC(ctx, 23));
    // 0x41e7cc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x41e7ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e7d0: 0x7fb04090  sq          $s0, 0x4090($sp)
    ctx->pc = 0x41e7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16528), GPR_VEC(ctx, 16));
    // 0x41e7d4: 0x7fb14080  sq          $s1, 0x4080($sp)
    ctx->pc = 0x41e7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16512), GPR_VEC(ctx, 17));
    // 0x41e7d8: 0x7fb34060  sq          $s3, 0x4060($sp)
    ctx->pc = 0x41e7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16480), GPR_VEC(ctx, 19));
    // 0x41e7dc: 0xffbf4010  sd          $ra, 0x4010($sp)
    ctx->pc = 0x41e7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16400), GPR_U64(ctx, 31));
    // 0x41e7e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x41e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x41e7e4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x41e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x41e7e8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x41E7E8u;
    {
        const bool branch_taken_0x41e7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E7E8u;
        // 0x41e7ec: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e7e8) {
            ctx->pc = 0x41E8ACu;
            goto label_41e8ac;
        }
    }
    ctx->pc = 0x41E7F0u;
    // 0x41e7f0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x41e7f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41e7f4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x41E7F4u;
    {
        const bool branch_taken_0x41e7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E7F4u;
        // 0x41e7f8: 0x2b14804  sllv        $t1, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 21) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e7f4) {
            ctx->pc = 0x41E84Cu;
            goto label_41e84c;
        }
    }
    ctx->pc = 0x41E7FCu;
    // 0x41e7fc: 0x0  nop
    ctx->pc = 0x41e7fcu;
    // NOP
label_41e800:
    // 0x41e800: 0x19200011  blez        $t1, . + 4 + (0x11 << 2)
    ctx->pc = 0x41E800u;
    {
        const bool branch_taken_0x41e800 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x41E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E800u;
        // 0x41e804: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e800) {
            ctx->pc = 0x41E848u;
            goto label_41e848;
        }
    }
    ctx->pc = 0x41E808u;
    // 0x41e808: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x41e808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x41e80c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x41e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x41e810: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x41E810u;
    {
        const bool branch_taken_0x41e810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x41e810) {
            ctx->pc = 0x41E814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41E810u;
            // 0x41e814: 0x24110040  addiu       $s1, $zero, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41E848u;
            goto label_41e848;
        }
    }
    ctx->pc = 0x41E818u;
    // 0x41e818: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x41e818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x41e81c: 0x0  nop
    ctx->pc = 0x41e81cu;
    // NOP
label_41e820:
    // 0x41e820: 0xc9102a  slt         $v0, $a2, $t1
    ctx->pc = 0x41e820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x41e824: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x41E824u;
    {
        const bool branch_taken_0x41e824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E824u;
        // 0x41e828: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e824) {
            ctx->pc = 0x41E848u;
            goto label_41e848;
        }
    }
    ctx->pc = 0x41E82Cu;
    // 0x41e82c: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x41e82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x41e830: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x41e830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x41e834: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x41e834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x41e838: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x41e838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x41e83c: 0x5083fff8  beql        $a0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x41E83Cu;
    {
        const bool branch_taken_0x41e83c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x41e83c) {
            ctx->pc = 0x41E840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41E83Cu;
            // 0x41e840: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41E820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41e820;
        }
    }
    ctx->pc = 0x41E844u;
    // 0x41e844: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x41e844u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_41e848:
    // 0x41e848: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x41e848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_41e84c:
    // 0x41e84c: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x41e84cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x41e850: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x41E850u;
    {
        const bool branch_taken_0x41e850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E850u;
        // 0x41e854: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e850) {
            ctx->pc = 0x41E87Cu;
            goto label_41e87c;
        }
    }
    ctx->pc = 0x41E858u;
    // 0x41e858: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x41e858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x41e85c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x41e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x41e860: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x41e860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x41e864: 0x8c880018  lw          $t0, 0x18($a0)
    ctx->pc = 0x41e864u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x41e868: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41E868u;
    {
        const bool branch_taken_0x41e868 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E868u;
        // 0x41e86c: 0x8c670018  lw          $a3, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e868) {
            ctx->pc = 0x41E878u;
            goto label_41e878;
        }
    }
    ctx->pc = 0x41E870u;
    // 0x41e870: 0x14e0ffe3  bnez        $a3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x41E870u;
    {
        const bool branch_taken_0x41e870 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x41e870) {
            ctx->pc = 0x41E800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41e800;
        }
    }
    ctx->pc = 0x41E878u;
label_41e878:
    // 0x41e878: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x41e878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_41e87c:
    // 0x41e87c: 0x1634000b  bne         $s1, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x41E87Cu;
    {
        const bool branch_taken_0x41e87c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x41E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E87Cu;
        // 0x41e880: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e87c) {
            ctx->pc = 0x41E8ACu;
            goto label_41e8ac;
        }
    }
    ctx->pc = 0x41E884u;
    // 0x41e884: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x41e884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x41e888: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x41e888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e88c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x41e88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x41e890: 0x663014  dsllv       $a2, $a2, $v1
    ctx->pc = 0x41e890u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x41e894: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x41e894u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x41e898: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x41e898u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x41e89c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x41E89Cu;
    SET_GPR_U32(ctx, 31, 0x41E8A4u);
    ctx->pc = 0x41E8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E89Cu;
    // 0x41e8a0: 0x8c450018  lw          $a1, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x41E89Cu, 0x41E8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E8A4u;
label_41e8a4:
    // 0x41e8a4: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x41E8A4u;
    {
        const bool branch_taken_0x41e8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E8A4u;
        // 0x41e8a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e8a4) {
            ctx->pc = 0x41EB0Cu;
            goto label_41eb0c;
        }
    }
    ctx->pc = 0x41E8ACu;
label_41e8ac:
    // 0x41e8ac: 0xc109b1a  jal         func_426C68
    ctx->pc = 0x41E8ACu;
    SET_GPR_U32(ctx, 31, 0x41E8B4u);
    ctx->pc = 0x41E8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E8ACu;
    // 0x41e8b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x426C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x426C68u, 0x41E8ACu, 0x41E8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E8B4u;
label_41e8b4:
    // 0x41e8b4: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x41E8B4u;
    {
        const bool branch_taken_0x41e8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E8B4u;
        // 0x41e8b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e8b4) {
            ctx->pc = 0x41EB0Cu;
            goto label_41eb0c;
        }
    }
    ctx->pc = 0x41E8BCu;
    // 0x41e8bc: 0x1a800038  blez        $s4, . + 4 + (0x38 << 2)
    ctx->pc = 0x41E8BCu;
    {
        const bool branch_taken_0x41e8bc = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x41E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E8BCu;
        // 0x41e8c0: 0x141023  negu        $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e8bc) {
            ctx->pc = 0x41E9A0u;
            goto label_41e9a0;
        }
    }
    ctx->pc = 0x41E8C4u;
    // 0x41e8c4: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x41e8c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e8c8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x41e8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x41e8cc: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x41E8CCu;
    {
        const bool branch_taken_0x41e8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E8CCu;
        // 0x41e8d0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e8cc) {
            ctx->pc = 0x41E940u;
            goto label_41e940;
        }
    }
    ctx->pc = 0x41E8D4u;
    // 0x41e8d4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x41e8d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x41e8d8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x41E8D8u;
    {
        const bool branch_taken_0x41e8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E8D8u;
        // 0x41e8dc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e8d8) {
            ctx->pc = 0x41E91Cu;
            goto label_41e91c;
        }
    }
    ctx->pc = 0x41E8E0u;
    // 0x41e8e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x41E8E0u;
    {
        const bool branch_taken_0x41e8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E8E0u;
        // 0x41e8e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e8e0) {
            ctx->pc = 0x41E900u;
            goto label_41e900;
        }
    }
    ctx->pc = 0x41E8E8u;
    // 0x41e8e8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x41e8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x41e8ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x41e8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x41e8f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x41e8f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41e8f4: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x41e8f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x41e8f8: 0xc1092e8  jal         func_424BA0
    ctx->pc = 0x41E8F8u;
    SET_GPR_U32(ctx, 31, 0x41E900u);
    ctx->pc = 0x41E8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E8F8u;
    // 0x41e8fc: 0x2691ffff  addiu       $s1, $s4, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424BA0u, 0x41E8F8u, 0x41E900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E900u;
label_41e900:
    // 0x41e900: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x41e900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x41e904: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41e904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e908: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x41e908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x41e90c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x41e90cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41e910: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x41e910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x41e914: 0xc1092e8  jal         func_424BA0
    ctx->pc = 0x41E914u;
    SET_GPR_U32(ctx, 31, 0x41E91Cu);
    ctx->pc = 0x41E918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E914u;
    // 0x41e918: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424BA0u, 0x41E914u, 0x41E91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E91Cu;
label_41e91c:
    // 0x41e91c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x41e91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x41e920: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41e920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e924: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x41e924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x41e928: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x41e928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41e92c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x41e92cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x41e930: 0xc1092e8  jal         func_424BA0
    ctx->pc = 0x41E930u;
    SET_GPR_U32(ctx, 31, 0x41E938u);
    ctx->pc = 0x41E934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E930u;
    // 0x41e934: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424BA0u, 0x41E930u, 0x41E938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E938u;
label_41e938:
    // 0x41e938: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x41E938u;
    {
        const bool branch_taken_0x41e938 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E938u;
        // 0x41e93c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e938) {
            ctx->pc = 0x41E9A4u;
            goto label_41e9a4;
        }
    }
    ctx->pc = 0x41E940u;
label_41e940:
    // 0x41e940: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x41e940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41e944:
    // 0x41e944: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41e944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e948: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x41e948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x41e94c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x41e94cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41e950: 0xc1092e8  jal         func_424BA0
    ctx->pc = 0x41E950u;
    SET_GPR_U32(ctx, 31, 0x41E958u);
    ctx->pc = 0x41E954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E950u;
    // 0x41e954: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424BA0u, 0x41E950u, 0x41E958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E958u;
label_41e958:
    // 0x41e958: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x41e958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x41e95c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x41e95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x41e960: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x41e960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41e964: 0xc1092e8  jal         func_424BA0
    ctx->pc = 0x41E964u;
    SET_GPR_U32(ctx, 31, 0x41E96Cu);
    ctx->pc = 0x41E968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E964u;
    // 0x41e968: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424BA0u, 0x41E964u, 0x41E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E96Cu;
label_41e96c:
    // 0x41e96c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x41e96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x41e970: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x41e970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x41e974: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x41e974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41e978: 0xc1092e8  jal         func_424BA0
    ctx->pc = 0x41E978u;
    SET_GPR_U32(ctx, 31, 0x41E980u);
    ctx->pc = 0x41E97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E978u;
    // 0x41e97c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424BA0u, 0x41E978u, 0x41E980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E980u;
label_41e980:
    // 0x41e980: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x41e980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x41e984: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41e984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e988: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x41e988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x41e98c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x41e98cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41e990: 0xc1092e8  jal         func_424BA0
    ctx->pc = 0x41E990u;
    SET_GPR_U32(ctx, 31, 0x41E998u);
    ctx->pc = 0x41E994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E990u;
    // 0x41e994: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424BA0u, 0x41E990u, 0x41E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E998u;
label_41e998:
    // 0x41e998: 0x5620ffea  bnel        $s1, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x41E998u;
    {
        const bool branch_taken_0x41e998 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x41e998) {
            ctx->pc = 0x41E99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41E998u;
            // 0x41e99c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41E944u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41e944;
        }
    }
    ctx->pc = 0x41E9A0u;
label_41e9a0:
    // 0x41e9a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x41e9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41e9a4:
    // 0x41e9a4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x41e9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e9a8: 0x2a52804  sllv        $a1, $a1, $s5
    ctx->pc = 0x41e9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 21) & 0x1F));
    // 0x41e9ac: 0xc1096e4  jal         func_425B90
    ctx->pc = 0x41E9ACu;
    SET_GPR_U32(ctx, 31, 0x41E9B4u);
    ctx->pc = 0x41E9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E9ACu;
    // 0x41e9b0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x425B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x425B90u, 0x41E9ACu, 0x41E9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E9B4u;
label_41e9b4:
    // 0x41e9b4: 0x1a800052  blez        $s4, . + 4 + (0x52 << 2)
    ctx->pc = 0x41E9B4u;
    {
        const bool branch_taken_0x41e9b4 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x41E9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E9B4u;
        // 0x41e9b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e9b4) {
            ctx->pc = 0x41EB00u;
            goto label_41eb00;
        }
    }
    ctx->pc = 0x41E9BCu;
    // 0x41e9bc: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x41e9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x41e9c0: 0x1a800003  blez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x41E9C0u;
    {
        const bool branch_taken_0x41e9c0 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x41E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E9C0u;
        // 0x41e9c4: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e9c0) {
            ctx->pc = 0x41E9D0u;
            goto label_41e9d0;
        }
    }
    ctx->pc = 0x41E9C8u;
    // 0x41e9c8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x41E9C8u;
    {
        const bool branch_taken_0x41e9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E9C8u;
        // 0x41e9cc: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e9c8) {
            ctx->pc = 0x41EA3Cu;
            goto label_41ea3c;
        }
    }
    ctx->pc = 0x41E9D0u;
label_41e9d0:
    // 0x41e9d0: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x41e9d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x41e9d4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x41e9d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e9d8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x41e9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x41e9dc: 0xc107034  jal         func_41C0D0
    ctx->pc = 0x41E9DCu;
    SET_GPR_U32(ctx, 31, 0x41E9E4u);
    ctx->pc = 0x41E9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E9DCu;
    // 0x41e9e0: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x41E9DCu, 0x41E9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E9E4u;
label_41e9e4:
    // 0x41e9e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41e9e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e9e8: 0x12000048  beqz        $s0, . + 4 + (0x48 << 2)
    ctx->pc = 0x41E9E8u;
    {
        const bool branch_taken_0x41e9e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E9E8u;
        // 0x41e9ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e9e8) {
            ctx->pc = 0x41EB0Cu;
            goto label_41eb0c;
        }
    }
    ctx->pc = 0x41E9F0u;
    // 0x41e9f0: 0xc107078  jal         func_41C1E0
    ctx->pc = 0x41E9F0u;
    SET_GPR_U32(ctx, 31, 0x41E9F8u);
    ctx->pc = 0x41E9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E9F0u;
    // 0x41e9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x41E9F0u, 0x41E9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E9F8u;
label_41e9f8:
    // 0x41e9f8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x41e9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x41e9fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x41e9fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ea00: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x41ea00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x41ea04: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x41ea04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ea08: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x41ea08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x41ea0c: 0xc10996e  jal         func_4265B8
    ctx->pc = 0x41EA0Cu;
    SET_GPR_U32(ctx, 31, 0x41EA14u);
    ctx->pc = 0x41EA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EA0Cu;
    // 0x41ea10: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4265B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4265B8u, 0x41EA0Cu, 0x41EA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EA14u;
label_41ea14:
    // 0x41ea14: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x41ea14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x41ea18: 0x12370003  beq         $s1, $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x41EA18u;
    {
        const bool branch_taken_0x41ea18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 23));
        ctx->pc = 0x41EA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EA18u;
        // 0x41ea1c: 0xae160018  sw          $s6, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ea18) {
            ctx->pc = 0x41EA28u;
            goto label_41ea28;
        }
    }
    ctx->pc = 0x41EA20u;
    // 0x41ea20: 0xc10705c  jal         func_41C170
    ctx->pc = 0x41EA20u;
    SET_GPR_U32(ctx, 31, 0x41EA28u);
    ctx->pc = 0x41EA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EA20u;
    // 0x41ea24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41EA20u, 0x41EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EA28u;
label_41ea28:
    // 0x41ea28: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x41ea28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41ea2c: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x41ea2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x41ea30: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x41EA30u;
    {
        const bool branch_taken_0x41ea30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EA30u;
        // 0x41ea34: 0x26430004  addiu       $v1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ea30) {
            ctx->pc = 0x41EB00u;
            goto label_41eb00;
        }
    }
    ctx->pc = 0x41EA38u;
    // 0x41ea38: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x41ea38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41ea3c:
    // 0x41ea3c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x41ea3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_41ea40:
    // 0x41ea40: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x41ea40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x41ea44: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x41ea44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ea48: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x41ea48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x41ea4c: 0xc107034  jal         func_41C0D0
    ctx->pc = 0x41EA4Cu;
    SET_GPR_U32(ctx, 31, 0x41EA54u);
    ctx->pc = 0x41EA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EA4Cu;
    // 0x41ea50: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x41EA4Cu, 0x41EA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EA54u;
label_41ea54:
    // 0x41ea54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41ea54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ea58: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x41EA58u;
    {
        const bool branch_taken_0x41ea58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EA58u;
        // 0x41ea5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ea58) {
            ctx->pc = 0x41EB0Cu;
            goto label_41eb0c;
        }
    }
    ctx->pc = 0x41EA60u;
    // 0x41ea60: 0xc107078  jal         func_41C1E0
    ctx->pc = 0x41EA60u;
    SET_GPR_U32(ctx, 31, 0x41EA68u);
    ctx->pc = 0x41EA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EA60u;
    // 0x41ea64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x41EA60u, 0x41EA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EA68u;
label_41ea68:
    // 0x41ea68: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x41ea68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x41ea6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x41ea6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ea70: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x41ea70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x41ea74: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x41ea74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ea78: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x41ea78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x41ea7c: 0xc10996e  jal         func_4265B8
    ctx->pc = 0x41EA7Cu;
    SET_GPR_U32(ctx, 31, 0x41EA84u);
    ctx->pc = 0x41EA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EA7Cu;
    // 0x41ea80: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4265B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4265B8u, 0x41EA7Cu, 0x41EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EA84u;
label_41ea84:
    // 0x41ea84: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x41ea84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x41ea88: 0x12370003  beq         $s1, $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x41EA88u;
    {
        const bool branch_taken_0x41ea88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 23));
        ctx->pc = 0x41EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EA88u;
        // 0x41ea8c: 0xae160018  sw          $s6, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ea88) {
            ctx->pc = 0x41EA98u;
            goto label_41ea98;
        }
    }
    ctx->pc = 0x41EA90u;
    // 0x41ea90: 0xc10705c  jal         func_41C170
    ctx->pc = 0x41EA90u;
    SET_GPR_U32(ctx, 31, 0x41EA98u);
    ctx->pc = 0x41EA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EA90u;
    // 0x41ea94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41EA90u, 0x41EA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EA98u;
label_41ea98:
    // 0x41ea98: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x41ea98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x41ea9c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x41ea9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41eaa0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x41eaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x41eaa4: 0xc107034  jal         func_41C0D0
    ctx->pc = 0x41EAA4u;
    SET_GPR_U32(ctx, 31, 0x41EAACu);
    ctx->pc = 0x41EAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EAA4u;
    // 0x41eaa8: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x41EAA4u, 0x41EAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EAACu;
label_41eaac:
    // 0x41eaac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41eaacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41eab0: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x41EAB0u;
    {
        const bool branch_taken_0x41eab0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EAB0u;
        // 0x41eab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41eab0) {
            ctx->pc = 0x41EB0Cu;
            goto label_41eb0c;
        }
    }
    ctx->pc = 0x41EAB8u;
    // 0x41eab8: 0xc107078  jal         func_41C1E0
    ctx->pc = 0x41EAB8u;
    SET_GPR_U32(ctx, 31, 0x41EAC0u);
    ctx->pc = 0x41EABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EAB8u;
    // 0x41eabc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x41EAB8u, 0x41EAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EAC0u;
label_41eac0:
    // 0x41eac0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x41eac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x41eac4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x41eac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41eac8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x41eac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x41eacc: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x41eaccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ead0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x41ead0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x41ead4: 0xc10996e  jal         func_4265B8
    ctx->pc = 0x41EAD4u;
    SET_GPR_U32(ctx, 31, 0x41EADCu);
    ctx->pc = 0x41EAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EAD4u;
    // 0x41ead8: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4265B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4265B8u, 0x41EAD4u, 0x41EADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EADCu;
label_41eadc:
    // 0x41eadc: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x41eadcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x41eae0: 0x12370003  beq         $s1, $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x41EAE0u;
    {
        const bool branch_taken_0x41eae0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 23));
        ctx->pc = 0x41EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EAE0u;
        // 0x41eae4: 0xae160018  sw          $s6, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41eae0) {
            ctx->pc = 0x41EAF0u;
            goto label_41eaf0;
        }
    }
    ctx->pc = 0x41EAE8u;
    // 0x41eae8: 0xc10705c  jal         func_41C170
    ctx->pc = 0x41EAE8u;
    SET_GPR_U32(ctx, 31, 0x41EAF0u);
    ctx->pc = 0x41EAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EAE8u;
    // 0x41eaec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41EAE8u, 0x41EAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EAF0u;
label_41eaf0:
    // 0x41eaf0: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x41eaf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x41eaf4: 0x274102a  slt         $v0, $s3, $s4
    ctx->pc = 0x41eaf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x41eaf8: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x41EAF8u;
    {
        const bool branch_taken_0x41eaf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EAF8u;
        // 0x41eafc: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41eaf8) {
            ctx->pc = 0x41EA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41ea40;
        }
    }
    ctx->pc = 0x41EB00u;
label_41eb00:
    // 0x41eb00: 0xc109b64  jal         func_426D90
    ctx->pc = 0x41EB00u;
    SET_GPR_U32(ctx, 31, 0x41EB08u);
    ctx->pc = 0x41EB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EB00u;
    // 0x41eb04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x426D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x426D90u, 0x41EB00u, 0x41EB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EB08u;
label_41eb08:
    // 0x41eb08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41eb0c:
    // 0x41eb0c: 0x7bb04090  lq          $s0, 0x4090($sp)
    ctx->pc = 0x41eb0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16528)));
    // 0x41eb10: 0x7bb14080  lq          $s1, 0x4080($sp)
    ctx->pc = 0x41eb10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16512)));
    // 0x41eb14: 0x7bb24070  lq          $s2, 0x4070($sp)
    ctx->pc = 0x41eb14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16496)));
    // 0x41eb18: 0x7bb34060  lq          $s3, 0x4060($sp)
    ctx->pc = 0x41eb18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16480)));
    // 0x41eb1c: 0x7bb44050  lq          $s4, 0x4050($sp)
    ctx->pc = 0x41eb1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16464)));
    // 0x41eb20: 0x7bb54040  lq          $s5, 0x4040($sp)
    ctx->pc = 0x41eb20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16448)));
    // 0x41eb24: 0x7bb64030  lq          $s6, 0x4030($sp)
    ctx->pc = 0x41eb24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16432)));
    // 0x41eb28: 0x7bb74020  lq          $s7, 0x4020($sp)
    ctx->pc = 0x41eb28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16416)));
    // 0x41eb2c: 0xdfbf4010  ld          $ra, 0x4010($sp)
    ctx->pc = 0x41eb2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16400)));
    // 0x41eb30: 0x3e00008  jr          $ra
    ctx->pc = 0x41EB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EB30u;
        // 0x41eb34: 0x27bd40a0  addiu       $sp, $sp, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41EB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41EB38u;
}
