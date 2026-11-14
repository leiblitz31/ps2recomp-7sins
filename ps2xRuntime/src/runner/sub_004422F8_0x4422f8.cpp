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

// Function: sub_004422F8
// Address: 0x4422f8 - 0x442818
void sub_004422F8_0x4422f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004422F8_0x4422f8");
#endif

    switch (ctx->pc) {
        case 0x442378u: goto label_442378;
        case 0x442388u: goto label_442388;
        case 0x4423a4u: goto label_4423a4;
        case 0x442568u: goto label_442568;
        case 0x442588u: goto label_442588;
        case 0x442618u: goto label_442618;
        case 0x442728u: goto label_442728;
        case 0x442744u: goto label_442744;
        case 0x44275cu: goto label_44275c;
        default: break;
    }

    ctx->pc = 0x4422f8u;

    // 0x4422f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4422f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4422fc: 0x8f83beb8  lw          $v1, -0x4148($gp)
    ctx->pc = 0x4422fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x442300: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x442300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x442304: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x442304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x442308: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x442308u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44230c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x44230cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x442310: 0x2638021  addu        $s0, $s3, $v1
    ctx->pc = 0x442310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x442314: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x442314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x442318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x442318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44231c: 0x92020036  lbu         $v0, 0x36($s0)
    ctx->pc = 0x44231cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x442320: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x442320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x442324: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x442324u;
    {
        const bool branch_taken_0x442324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x442328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442324u;
        // 0x442328: 0xa0682d  daddu       $t5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442324) {
            ctx->pc = 0x442334u;
            goto label_442334;
        }
    }
    ctx->pc = 0x44232Cu;
    // 0x44232c: 0x55a00134  bnel        $t5, $zero, . + 4 + (0x134 << 2)
    ctx->pc = 0x44232Cu;
    {
        const bool branch_taken_0x44232c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x44232c) {
            ctx->pc = 0x442330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44232Cu;
            // 0x442330: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x442800u;
            goto label_442800;
        }
    }
    ctx->pc = 0x442334u;
label_442334:
    // 0x442334: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x442334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x442338: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x442338u;
    {
        const bool branch_taken_0x442338 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x44233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442338u;
        // 0x44233c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442338) {
            ctx->pc = 0x4423ACu;
            goto label_4423ac;
        }
    }
    ctx->pc = 0x442340u;
    // 0x442340: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x442340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
    // 0x442344: 0x2451d7c0  addiu       $s1, $v0, -0x2840
    ctx->pc = 0x442344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956992));
    // 0x442348: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x442348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x44234c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x44234cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x442350: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x442350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x442354: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x442354u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x442358: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x442358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x44235c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x44235cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x442360: 0x54820013  bnel        $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x442360u;
    {
        const bool branch_taken_0x442360 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x442360) {
            ctx->pc = 0x442364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x442360u;
            // 0x442364: 0x92020017  lbu         $v0, 0x17($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4423B0u;
            goto label_4423b0;
        }
    }
    ctx->pc = 0x442368u;
    // 0x442368: 0x55a00125  bnel        $t5, $zero, . + 4 + (0x125 << 2)
    ctx->pc = 0x442368u;
    {
        const bool branch_taken_0x442368 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x442368) {
            ctx->pc = 0x44236Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x442368u;
            // 0x44236c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x442800u;
            goto label_442800;
        }
    }
    ctx->pc = 0x442370u;
    // 0x442370: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x442370u;
    SET_GPR_U32(ctx, 31, 0x442378u);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x442370u, 0x442378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x442378u;
label_442378:
    // 0x442378: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x442378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x44237c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x44237cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x442380: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x442380u;
    SET_GPR_U32(ctx, 31, 0x442388u);
    ctx->pc = 0x442384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x442380u;
    // 0x442384: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x442380u, 0x442388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x442388u;
label_442388:
    // 0x442388: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x442388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x44238c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44238cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x442390: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x442390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x442394: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x442394u;
    {
        const bool branch_taken_0x442394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x442398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442394u;
        // 0x442398: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442394) {
            ctx->pc = 0x4423A4u;
            goto label_4423a4;
        }
    }
    ctx->pc = 0x44239Cu;
    // 0x44239c: 0xc10a762  jal         func_429D88
    ctx->pc = 0x44239Cu;
    SET_GPR_U32(ctx, 31, 0x4423A4u);
    ctx->pc = 0x4423A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44239Cu;
    // 0x4423a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D88u, 0x44239Cu, 0x4423A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4423A4u;
label_4423a4:
    // 0x4423a4: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x4423A4u;
    {
        const bool branch_taken_0x4423a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4423A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4423A4u;
        // 0x4423a8: 0xae330024  sw          $s3, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4423a4) {
            ctx->pc = 0x4427FCu;
            goto label_4427fc;
        }
    }
    ctx->pc = 0x4423ACu;
label_4423ac:
    // 0x4423ac: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x4423acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
label_4423b0:
    // 0x4423b0: 0x54400113  bnel        $v0, $zero, . + 4 + (0x113 << 2)
    ctx->pc = 0x4423B0u;
    {
        const bool branch_taken_0x4423b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4423b0) {
            ctx->pc = 0x4423B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4423B0u;
            // 0x4423b4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x442800u;
            goto label_442800;
        }
    }
    ctx->pc = 0x4423B8u;
    // 0x4423b8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x4423b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x4423bc: 0x2444d7c0  addiu       $a0, $v0, -0x2840
    ctx->pc = 0x4423bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956992));
    // 0x4423c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4423c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4423c4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x4423c4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5DD7D0u));
    // 0x4423c8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4423c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5DD7CCu));
    // 0x4423cc: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4423CCu;
    {
        const bool branch_taken_0x4423cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4423D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4423CCu;
        // 0x4423d0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4423cc) {
            ctx->pc = 0x4423E8u;
            goto label_4423e8;
        }
    }
    ctx->pc = 0x4423D4u;
    // 0x4423d4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x4423d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4423d8: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x4423d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4423dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4423dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4423e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4423E0u;
    {
        const bool branch_taken_0x4423e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4423E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4423E0u;
        // 0x4423e4: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4423e0) {
            ctx->pc = 0x4423F4u;
            goto label_4423f4;
        }
    }
    ctx->pc = 0x4423E8u;
label_4423e8:
    // 0x4423e8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4423e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x4423ec: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x4423ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4423f0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x4423f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4423f4:
    // 0x4423f4: 0x2643d7c0  addiu       $v1, $s2, -0x2840
    ctx->pc = 0x4423f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
    // 0x4423f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4423f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4423fc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4423fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x442400: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x442400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x442404: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x442404u;
    {
        const bool branch_taken_0x442404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x442408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442404u;
        // 0x442408: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442404) {
            ctx->pc = 0x442438u;
            goto label_442438;
        }
    }
    ctx->pc = 0x44240Cu;
    // 0x44240c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x44240cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x442410: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x442410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x442414: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x442414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x442418: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x442418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x44241c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x44241cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x442420: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x442420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x442424: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x442424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x442428: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x442428u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x44242c: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x44242cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x442430: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x442430u;
    {
        const bool branch_taken_0x442430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x442434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442430u;
        // 0x442434: 0x2643d7c0  addiu       $v1, $s2, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442430) {
            ctx->pc = 0x44244Cu;
            goto label_44244c;
        }
    }
    ctx->pc = 0x442438u;
label_442438:
    // 0x442438: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x442438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x44243c: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x44243cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x442440: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x442440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x442444: 0x544000ee  bnel        $v0, $zero, . + 4 + (0xEE << 2)
    ctx->pc = 0x442444u;
    {
        const bool branch_taken_0x442444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x442444) {
            ctx->pc = 0x442448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x442444u;
            // 0x442448: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x442800u;
            goto label_442800;
        }
    }
    ctx->pc = 0x44244Cu;
label_44244c:
    // 0x44244c: 0x11a0006a  beqz        $t5, . + 4 + (0x6A << 2)
    ctx->pc = 0x44244Cu;
    {
        const bool branch_taken_0x44244c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x442450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44244Cu;
        // 0x442450: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44244c) {
            ctx->pc = 0x4425F8u;
            goto label_4425f8;
        }
    }
    ctx->pc = 0x442454u;
    // 0x442454: 0x2646d7c0  addiu       $a2, $s2, -0x2840
    ctx->pc = 0x442454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
    // 0x442458: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x442458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x44245c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x44245cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x442460: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x442460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x442464: 0x50450065  beql        $v0, $a1, . + 4 + (0x65 << 2)
    ctx->pc = 0x442464u;
    {
        const bool branch_taken_0x442464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x442464) {
            ctx->pc = 0x442468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x442464u;
            // 0x442468: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4425FCu;
            goto label_4425fc;
        }
    }
    ctx->pc = 0x44246Cu;
    // 0x44246c: 0x8cc3002c  lw          $v1, 0x2C($a2)
    ctx->pc = 0x44246cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x442470: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x442470u;
    {
        const bool branch_taken_0x442470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x442474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442470u;
        // 0x442474: 0x8cc70008  lw          $a3, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442470) {
            ctx->pc = 0x442498u;
            goto label_442498;
        }
    }
    ctx->pc = 0x442478u;
    // 0x442478: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x442478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x44247c: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x44247cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x442480: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x442480u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x442484: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x442484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x442488: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x442488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44248c: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x44248Cu;
    {
        const bool branch_taken_0x44248c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44248c) {
            ctx->pc = 0x442490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44248Cu;
            // 0x442490: 0xacc5002c  sw          $a1, 0x2C($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x442498u;
            goto label_442498;
        }
    }
    ctx->pc = 0x442494u;
    // 0x442494: 0x2646d7c0  addiu       $a2, $s2, -0x2840
    ctx->pc = 0x442494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
label_442498:
    // 0x442498: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x442498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x44249c: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x44249cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x4424a0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4424a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4424a4: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4424A4u;
    {
        const bool branch_taken_0x4424a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x4424A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4424A4u;
        // 0x4424a8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4424a4) {
            ctx->pc = 0x4424C4u;
            goto label_4424c4;
        }
    }
    ctx->pc = 0x4424ACu;
    // 0x4424ac: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x4424acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x4424b0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x4424b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4424b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4424b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4424b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4424b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4424bc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4424BCu;
    {
        const bool branch_taken_0x4424bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4424bc) {
            ctx->pc = 0x4424C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4424BCu;
            // 0x4424c0: 0xacc50030  sw          $a1, 0x30($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4424C4u;
            goto label_4424c4;
        }
    }
    ctx->pc = 0x4424C4u;
label_4424c4:
    // 0x4424c4: 0x2649d7c0  addiu       $t1, $s2, -0x2840
    ctx->pc = 0x4424c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
    // 0x4424c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4424c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4424cc: 0x8d240004  lw          $a0, 0x4($t1)
    ctx->pc = 0x4424ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x4424d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4424d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4424d4: 0x10820048  beq         $a0, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x4424D4u;
    {
        const bool branch_taken_0x4424d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4424D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4424D4u;
        // 0x4424d8: 0x24880001  addiu       $t0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4424d4) {
            ctx->pc = 0x4425F8u;
            goto label_4425f8;
        }
    }
    ctx->pc = 0x4424DCu;
    // 0x4424dc: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x4424dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x4424e0: 0x1031026  xor         $v0, $t0, $v1
    ctx->pc = 0x4424e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
    // 0x4424e4: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x4424e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
    // 0x4424e8: 0x5507000a  bnel        $t0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x4424E8u;
    {
        const bool branch_taken_0x4424e8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x4424e8) {
            ctx->pc = 0x4424ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4424E8u;
            // 0x4424ec: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x442514u;
            goto label_442514;
        }
    }
    ctx->pc = 0x4424F0u;
    // 0x4424f0: 0x8d22002c  lw          $v0, 0x2C($t1)
    ctx->pc = 0x4424f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x4424f4: 0x510200c2  beql        $t0, $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x4424F4u;
    {
        const bool branch_taken_0x4424f4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x4424f4) {
            ctx->pc = 0x4424F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4424F4u;
            // 0x4424f8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x442800u;
            goto label_442800;
        }
    }
    ctx->pc = 0x4424FCu;
    // 0x4424fc: 0x8d220030  lw          $v0, 0x30($t1)
    ctx->pc = 0x4424fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x442500: 0x110200be  beq         $t0, $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x442500u;
    {
        const bool branch_taken_0x442500 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x442504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442500u;
        // 0x442504: 0x25070001  addiu       $a3, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442500) {
            ctx->pc = 0x4427FCu;
            goto label_4427fc;
        }
    }
    ctx->pc = 0x442508u;
    // 0x442508: 0xe31026  xor         $v0, $a3, $v1
    ctx->pc = 0x442508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 3));
    // 0x44250c: 0x2380a  movz        $a3, $zero, $v0
    ctx->pc = 0x44250cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x442510: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x442510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_442514:
    // 0x442514: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x442514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x442518: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x442518u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x44251c: 0xe55018  mult        $t2, $a3, $a1
    ctx->pc = 0x44251cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x442520: 0x8d260014  lw          $a2, 0x14($t1)
    ctx->pc = 0x442520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x442524: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x442524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x442528: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x442528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x44252c: 0x246307ff  addiu       $v1, $v1, 0x7FF
    ctx->pc = 0x44252cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x442530: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x442530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x442534: 0x240782d  daddu       $t7, $s2, $zero
    ctx->pc = 0x442534u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442538: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x442538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x44253c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x44253cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x442540: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x442540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x442544: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x442544u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442548: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x442548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44254c: 0x2234821  addu        $t1, $s1, $v1
    ctx->pc = 0x44254cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x442550: 0x240e000c  addiu       $t6, $zero, 0xC
    ctx->pc = 0x442550u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x442554: 0xd1602b  sltu        $t4, $a2, $s1
    ctx->pc = 0x442554u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x442558: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x442558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x44255c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x44255Cu;
    {
        const bool branch_taken_0x44255c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x442560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44255Cu;
        // 0x442560: 0x222582b  sltu        $t3, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44255c) {
            ctx->pc = 0x4425A4u;
            goto label_4425a4;
        }
    }
    ctx->pc = 0x442564u;
    // 0x442564: 0x0  nop
    ctx->pc = 0x442564u;
    // NOP
label_442568:
    // 0x442568: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x442568u;
    {
        const bool branch_taken_0x442568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442568u;
        // 0x44256c: 0x25e3d7c0  addiu       $v1, $t7, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442568) {
            ctx->pc = 0x442588u;
            goto label_442588;
        }
    }
    ctx->pc = 0x442570u;
    // 0x442570: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x442570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x442574: 0x50e200a2  beql        $a3, $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x442574u;
    {
        const bool branch_taken_0x442574 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x442574) {
            ctx->pc = 0x442578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x442574u;
            // 0x442578: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x442800u;
            goto label_442800;
        }
    }
    ctx->pc = 0x44257Cu;
    // 0x44257c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x44257cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x442580: 0x50e2009f  beql        $a3, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x442580u;
    {
        const bool branch_taken_0x442580 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x442580) {
            ctx->pc = 0x442584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x442580u;
            // 0x442584: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x442800u;
            goto label_442800;
        }
    }
    ctx->pc = 0x442588u;
label_442588:
    // 0x442588: 0x8d430010  lw          $v1, 0x10($t2)
    ctx->pc = 0x442588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x44258c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x44258cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x442590: 0x8d440014  lw          $a0, 0x14($t2)
    ctx->pc = 0x442590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x442594: 0xe31826  xor         $v1, $a3, $v1
    ctx->pc = 0x442594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 3));
    // 0x442598: 0x3380a  movz        $a3, $zero, $v1
    ctx->pc = 0x442598u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x44259c: 0xee1018  mult        $v0, $a3, $t6
    ctx->pc = 0x44259cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4425a0: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x4425a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4425a4:
    // 0x4425a4: 0x51070015  beql        $t0, $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x4425A4u;
    {
        const bool branch_taken_0x4425a4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x4425a4) {
            ctx->pc = 0x4425A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4425A4u;
            // 0x4425a8: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4425FCu;
            goto label_4425fc;
        }
    }
    ctx->pc = 0x4425ACu;
    // 0x4425ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4425acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4425b0: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x4425B0u;
    {
        const bool branch_taken_0x4425b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4425B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4425B0u;
        // 0x4425b4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4425b0) {
            ctx->pc = 0x442588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_442588;
        }
    }
    ctx->pc = 0x4425B8u;
    // 0x4425b8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x4425b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4425bc: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x4425bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4425c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4425C0u;
    {
        const bool branch_taken_0x4425c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4425C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4425C0u;
        // 0x4425c4: 0x89102b  sltu        $v0, $a0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4425c0) {
            ctx->pc = 0x4425E0u;
            goto label_4425e0;
        }
    }
    ctx->pc = 0x4425C8u;
    // 0x4425c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4425C8u;
    {
        const bool branch_taken_0x4425c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4425CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4425C8u;
        // 0x4425cc: 0x91102b  sltu        $v0, $a0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4425c8) {
            ctx->pc = 0x4425F8u;
            goto label_4425f8;
        }
    }
    ctx->pc = 0x4425D0u;
    // 0x4425d0: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x4425D0u;
    {
        const bool branch_taken_0x4425d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4425d0) {
            ctx->pc = 0x442568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_442568;
        }
    }
    ctx->pc = 0x4425D8u;
    // 0x4425d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4425D8u;
    {
        const bool branch_taken_0x4425d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4425DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4425D8u;
        // 0x4425dc: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4425d8) {
            ctx->pc = 0x4425FCu;
            goto label_4425fc;
        }
    }
    ctx->pc = 0x4425E0u;
label_4425e0:
    // 0x4425e0: 0x15600003  bnez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x4425E0u;
    {
        const bool branch_taken_0x4425e0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x4425e0) {
            ctx->pc = 0x4425F0u;
            goto label_4425f0;
        }
    }
    ctx->pc = 0x4425E8u;
    // 0x4425e8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x4425E8u;
    {
        const bool branch_taken_0x4425e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4425e8) {
            ctx->pc = 0x442568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_442568;
        }
    }
    ctx->pc = 0x4425F0u;
label_4425f0:
    // 0x4425f0: 0x1180ffdd  beqz        $t4, . + 4 + (-0x23 << 2)
    ctx->pc = 0x4425F0u;
    {
        const bool branch_taken_0x4425f0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x4425f0) {
            ctx->pc = 0x442568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_442568;
        }
    }
    ctx->pc = 0x4425F8u;
label_4425f8:
    // 0x4425f8: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x4425f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4425fc:
    // 0x4425fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4425FCu;
    {
        const bool branch_taken_0x4425fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x442600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4425FCu;
        // 0x442600: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4425fc) {
            ctx->pc = 0x44260Cu;
            goto label_44260c;
        }
    }
    ctx->pc = 0x442604u;
    // 0x442604: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x442604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x442608: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x442608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_44260c:
    // 0x44260c: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x44260cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442610: 0xc11067a  jal         func_4419E8
    ctx->pc = 0x442610u;
    SET_GPR_U32(ctx, 31, 0x442618u);
    ctx->pc = 0x442614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x442610u;
    // 0x442614: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4419E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4419E8u, 0x442610u, 0x442618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x442618u;
label_442618:
    // 0x442618: 0x2645d7c0  addiu       $a1, $s2, -0x2840
    ctx->pc = 0x442618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
    // 0x44261c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x44261cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x442620: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x442620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x442624: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x442624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x442628: 0x10620067  beq         $v1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x442628u;
    {
        const bool branch_taken_0x442628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x44262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442628u;
        // 0x44262c: 0x24680001  addiu       $t0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442628) {
            ctx->pc = 0x4427C8u;
            goto label_4427c8;
        }
    }
    ctx->pc = 0x442630u;
    // 0x442630: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x442630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x442634: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x442634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x442638: 0x1021026  xor         $v0, $t0, $v0
    ctx->pc = 0x442638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 2));
    // 0x44263c: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x44263cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
    // 0x442640: 0x15030013  bne         $t0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x442640u;
    {
        const bool branch_taken_0x442640 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x442644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442640u;
        // 0x442644: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442640) {
            ctx->pc = 0x442690u;
            goto label_442690;
        }
    }
    ctx->pc = 0x442648u;
    // 0x442648: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x442648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x44264c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x44264cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x442650: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x442650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x442654: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x442654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x442658: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x442658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44265c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x44265Cu;
    {
        const bool branch_taken_0x44265c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x442660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44265Cu;
        // 0x442660: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44265c) {
            ctx->pc = 0x442674u;
            goto label_442674;
        }
    }
    ctx->pc = 0x442664u;
    // 0x442664: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x442664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x442668: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x442668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x44266c: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x44266cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x442670: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x442670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_442674:
    // 0x442674: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x442674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x442678: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x442678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x44267c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x44267cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x442680: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x442680u;
    {
        const bool branch_taken_0x442680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x442684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442680u;
        // 0x442684: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442680) {
            ctx->pc = 0x44268Cu;
            goto label_44268c;
        }
    }
    ctx->pc = 0x442688u;
    // 0x442688: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x442688u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_44268c:
    // 0x44268c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x44268cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_442690:
    // 0x442690: 0x2646d7c0  addiu       $a2, $s2, -0x2840
    ctx->pc = 0x442690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
    // 0x442694: 0x1071818  mult        $v1, $t0, $a3
    ctx->pc = 0x442694u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x442698: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x442698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x44269c: 0x8f8dbeb8  lw          $t5, -0x4148($gp)
    ctx->pc = 0x44269cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x4426a0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4426a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4426a4: 0x34a5f800  ori         $a1, $a1, 0xF800
    ctx->pc = 0x4426a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63488);
    // 0x4426a8: 0xc0c02d  daddu       $t8, $a2, $zero
    ctx->pc = 0x4426a8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4426ac: 0x240782d  daddu       $t7, $s2, $zero
    ctx->pc = 0x4426acu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4426b0: 0x240e000c  addiu       $t6, $zero, 0xC
    ctx->pc = 0x4426b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4426b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4426b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4426b8: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x4426b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x4426bc: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x4426bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x4426c0: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x4426c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x4426c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4426c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4426c8: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x4426c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x4426cc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x4426ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x4426d0: 0x244207ff  addiu       $v0, $v0, 0x7FF
    ctx->pc = 0x4426d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x4426d4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4426d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4426d8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x4426d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x4426dc: 0x2225021  addu        $t2, $s1, $v0
    ctx->pc = 0x4426dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4426e0: 0x8cc90008  lw          $t1, 0x8($a2)
    ctx->pc = 0x4426e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4426e4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x4426e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4426e8: 0x1271018  mult        $v0, $t1, $a3
    ctx->pc = 0x4426e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4426ec: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x4426ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4426f0: 0x671018  mult        $v0, $v1, $a3
    ctx->pc = 0x4426f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4426f4: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4426f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4426f8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x4426f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4426fc: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x4426fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x442700: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x442700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x442704: 0xf1602b  sltu        $t4, $a3, $s1
    ctx->pc = 0x442704u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x442708: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x442708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x44270c: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x44270Cu;
    {
        const bool branch_taken_0x44270c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x442710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44270Cu;
        // 0x442710: 0x222582b  sltu        $t3, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44270c) {
            ctx->pc = 0x442758u;
            goto label_442758;
        }
    }
    ctx->pc = 0x442714u;
    // 0x442714: 0x1109002a  beq         $t0, $t1, . + 4 + (0x2A << 2)
    ctx->pc = 0x442714u;
    {
        const bool branch_taken_0x442714 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        ctx->pc = 0x442718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442714u;
        // 0x442718: 0x2642d7c0  addiu       $v0, $s2, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442714) {
            ctx->pc = 0x4427C0u;
            goto label_4427c0;
        }
    }
    ctx->pc = 0x44271Cu;
    // 0x44271c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x44271Cu;
    {
        const bool branch_taken_0x44271c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x442720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44271Cu;
        // 0x442720: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44271c) {
            ctx->pc = 0x4427A0u;
            goto label_4427a0;
        }
    }
    ctx->pc = 0x442724u;
    // 0x442724: 0x0  nop
    ctx->pc = 0x442724u;
    // NOP
label_442728:
    // 0x442728: 0x15600003  bnez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x442728u;
    {
        const bool branch_taken_0x442728 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x442728) {
            ctx->pc = 0x442738u;
            goto label_442738;
        }
    }
    ctx->pc = 0x442730u;
    // 0x442730: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x442730u;
    {
        const bool branch_taken_0x442730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x442730) {
            ctx->pc = 0x442734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x442730u;
            // 0x442734: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x442744u;
            goto label_442744;
        }
    }
    ctx->pc = 0x442738u;
label_442738:
    // 0x442738: 0x15800021  bnez        $t4, . + 4 + (0x21 << 2)
    ctx->pc = 0x442738u;
    {
        const bool branch_taken_0x442738 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x44273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442738u;
        // 0x44273c: 0x2642d7c0  addiu       $v0, $s2, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442738) {
            ctx->pc = 0x4427C0u;
            goto label_4427c0;
        }
    }
    ctx->pc = 0x442740u;
    // 0x442740: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x442740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_442744:
    // 0x442744: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x442744u;
    {
        const bool branch_taken_0x442744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x442748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442744u;
        // 0x442748: 0x4d2021  addu        $a0, $v0, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442744) {
            ctx->pc = 0x442758u;
            goto label_442758;
        }
    }
    ctx->pc = 0x44274Cu;
    // 0x44274c: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x44274cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x442750: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x442750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x442754: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x442754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_442758:
    // 0x442758: 0x25e4d7c0  addiu       $a0, $t7, -0x2840
    ctx->pc = 0x442758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956992));
label_44275c:
    // 0x44275c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x44275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x442760: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x442760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x442764: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x442764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x442768: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x442768u;
    {
        const bool branch_taken_0x442768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x44276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442768u;
        // 0x44276c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442768) {
            ctx->pc = 0x442774u;
            goto label_442774;
        }
    }
    ctx->pc = 0x442770u;
    // 0x442770: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x442770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_442774:
    // 0x442774: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x442774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x442778: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x442778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44277c: 0x4e1018  mult        $v0, $v0, $t6
    ctx->pc = 0x44277cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x442780: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x442780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x442784: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x442784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x442788: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x442788u;
    {
        const bool branch_taken_0x442788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x442788) {
            ctx->pc = 0x44278Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x442788u;
            // 0x44278c: 0x25e4d7c0  addiu       $a0, $t7, -0x2840 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956992));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44275Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44275c;
        }
    }
    ctx->pc = 0x442790u;
    // 0x442790: 0x8f020008  lw          $v0, 0x8($t8)
    ctx->pc = 0x442790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x442794: 0x1102000a  beq         $t0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x442794u;
    {
        const bool branch_taken_0x442794 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x442798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442794u;
        // 0x442798: 0x2642d7c0  addiu       $v0, $s2, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442794) {
            ctx->pc = 0x4427C0u;
            goto label_4427c0;
        }
    }
    ctx->pc = 0x44279Cu;
    // 0x44279c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x44279cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_4427a0:
    // 0x4427a0: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x4427a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4427a4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x4427A4u;
    {
        const bool branch_taken_0x4427a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4427A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4427A4u;
        // 0x4427a8: 0x6a102b  sltu        $v0, $v1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4427a4) {
            ctx->pc = 0x442728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_442728;
        }
    }
    ctx->pc = 0x4427ACu;
    // 0x4427ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4427ACu;
    {
        const bool branch_taken_0x4427ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4427B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4427ACu;
        // 0x4427b0: 0x71102b  sltu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4427ac) {
            ctx->pc = 0x4427BCu;
            goto label_4427bc;
        }
    }
    ctx->pc = 0x4427B4u;
    // 0x4427b4: 0x5040ffe3  beql        $v0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x4427B4u;
    {
        const bool branch_taken_0x4427b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4427b4) {
            ctx->pc = 0x4427B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4427B4u;
            // 0x4427b8: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x442744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_442744;
        }
    }
    ctx->pc = 0x4427BCu;
label_4427bc:
    // 0x4427bc: 0x2642d7c0  addiu       $v0, $s2, -0x2840
    ctx->pc = 0x4427bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956992));
label_4427c0:
    // 0x4427c0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4427C0u;
    {
        const bool branch_taken_0x4427c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4427C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4427C0u;
        // 0x4427c4: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4427c0) {
            ctx->pc = 0x4427FCu;
            goto label_4427fc;
        }
    }
    ctx->pc = 0x4427C8u;
label_4427c8:
    // 0x4427c8: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x4427c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x4427cc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4427ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4427d0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x4427d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x4427d4: 0x3463f800  ori         $v1, $v1, 0xF800
    ctx->pc = 0x4427d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63488);
    // 0x4427d8: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x4427d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x4427dc: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x4427dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x4427e0: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x4427e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x4427e4: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x4427e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x4427e8: 0xac910004  sw          $s1, 0x4($a0)
    ctx->pc = 0x4427e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    // 0x4427ec: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x4427ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x4427f0: 0x244207ff  addiu       $v0, $v0, 0x7FF
    ctx->pc = 0x4427f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x4427f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4427f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4427f8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4427f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4427fc:
    // 0x4427fc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4427fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_442800:
    // 0x442800: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x442800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x442804: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x442804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x442808: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x442808u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44280c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44280cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x442810: 0x3e00008  jr          $ra
    ctx->pc = 0x442810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x442814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442810u;
        // 0x442814: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x442810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x442818u;
}
