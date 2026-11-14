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

// Function: sub_002F3788
// Address: 0x2f3788 - 0x2f3910
void sub_002F3788_0x2f3788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3788_0x2f3788");
#endif

    switch (ctx->pc) {
        case 0x2f37d8u: goto label_2f37d8;
        case 0x2f380cu: goto label_2f380c;
        case 0x2f385cu: goto label_2f385c;
        default: break;
    }

    ctx->pc = 0x2f3788u;

    // 0x2f3788: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f3788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f378c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f378cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f3790: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f3790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f3794: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f3794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3798: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f3798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f379c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f379cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f37a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f37a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f37a4: 0x12230055  beq         $s1, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x2F37A4u;
    {
        const bool branch_taken_0x2f37a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F37A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F37A4u;
        // 0x2f37a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f37a4) {
            ctx->pc = 0x2F38FCu;
            goto label_2f38fc;
        }
    }
    ctx->pc = 0x2F37ACu;
    // 0x2f37ac: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2f37acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2f37b0: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F37B0u;
    {
        const bool branch_taken_0x2f37b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f37b0) {
            ctx->pc = 0x2F37B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F37B0u;
            // 0x2f37b4: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F37C8u;
            goto label_2f37c8;
        }
    }
    ctx->pc = 0x2F37B8u;
    // 0x2f37b8: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f37b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f37bc: 0x8c43ea90  lw          $v1, -0x1570($v0)
    ctx->pc = 0x2f37bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4EEA90u));
    // 0x2f37c0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2f37c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x2f37c4: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2f37c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2f37c8:
    // 0x2f37c8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F37C8u;
    {
        const bool branch_taken_0x2f37c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f37c8) {
            ctx->pc = 0x2F37CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F37C8u;
            // 0x2f37cc: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F37DCu;
            goto label_2f37dc;
        }
    }
    ctx->pc = 0x2F37D0u;
    // 0x2f37d0: 0xc0baf6e  jal         func_2EBDB8
    ctx->pc = 0x2F37D0u;
    SET_GPR_U32(ctx, 31, 0x2F37D8u);
    ctx->pc = 0x2F37D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F37D0u;
    // 0x2f37d4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBDB8u, 0x2F37D0u, 0x2F37D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F37D8u;
label_2f37d8:
    // 0x2f37d8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2f37d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2f37dc:
    // 0x2f37dc: 0x3044ffdf  andi        $a0, $v0, 0xFFDF
    ctx->pc = 0x2f37dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65503);
    // 0x2f37e0: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x2f37e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2f37e4: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F37E4u;
    {
        const bool branch_taken_0x2f37e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F37E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F37E4u;
        // 0x2f37e8: 0xa604000c  sh          $a0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f37e4) {
            ctx->pc = 0x2F3834u;
            goto label_2f3834;
        }
    }
    ctx->pc = 0x2F37ECu;
    // 0x2f37ec: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x2f37ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x2f37f0: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x2F37F0u;
    {
        const bool branch_taken_0x2f37f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F37F0u;
        // 0x2f37f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f37f0) {
            ctx->pc = 0x2F38FCu;
            goto label_2f38fc;
        }
    }
    ctx->pc = 0x2F37F8u;
    // 0x2f37f8: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x2f37f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x2f37fc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2F37FCu;
    {
        const bool branch_taken_0x2f37fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f37fc) {
            ctx->pc = 0x2F3800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F37FCu;
            // 0x2f3800: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F382Cu;
            goto label_2f382c;
        }
    }
    ctx->pc = 0x2F3804u;
    // 0x2f3804: 0xc0baea4  jal         func_2EBA90
    ctx->pc = 0x2F3804u;
    SET_GPR_U32(ctx, 31, 0x2F380Cu);
    ctx->pc = 0x2F3808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3804u;
    // 0x2f3808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBA90u, 0x2F3804u, 0x2F380Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F380Cu;
label_2f380c:
    // 0x2f380c: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2F380Cu;
    {
        const bool branch_taken_0x2f380c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F380Cu;
        // 0x2f3810: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f380c) {
            ctx->pc = 0x2F38FCu;
            goto label_2f38fc;
        }
    }
    ctx->pc = 0x2F3814u;
    // 0x2f3814: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2f3814u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f3818: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2f3818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2f381c: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2f381cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2f3820: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2f3820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2f3824: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2f3824u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f3828: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2f3828u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2f382c:
    // 0x2f382c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2f382cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2f3830: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2f3830u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_2f3834:
    // 0x2f3834: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2f3834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2f3838: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F3838u;
    {
        const bool branch_taken_0x2f3838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3838u;
        // 0x2f383c: 0x323100ff  andi        $s1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3838) {
            ctx->pc = 0x2F3888u;
            goto label_2f3888;
        }
    }
    ctx->pc = 0x2F3840u;
    // 0x2f3840: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f3840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f3844: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x2f3844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2f3848: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2f3848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f384c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F384Cu;
    {
        const bool branch_taken_0x2f384c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f384c) {
            ctx->pc = 0x2F3850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F384Cu;
            // 0x2f3850: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3870u;
            goto label_2f3870;
        }
    }
    ctx->pc = 0x2F3854u;
    // 0x2f3854: 0xc0bcda8  jal         func_2F36A0
    ctx->pc = 0x2F3854u;
    SET_GPR_U32(ctx, 31, 0x2F385Cu);
    ctx->pc = 0x2F3858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3854u;
    // 0x2f3858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F36A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F36A0u, 0x2F3854u, 0x2F385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F385Cu;
label_2f385c:
    // 0x2f385c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F385Cu;
    {
        const bool branch_taken_0x2f385c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f385c) {
            ctx->pc = 0x2F3860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F385Cu;
            // 0x2f3860: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3870u;
            goto label_2f3870;
        }
    }
    ctx->pc = 0x2F3864u;
    // 0x2f3864: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2F3864u;
    {
        const bool branch_taken_0x2f3864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3864u;
        // 0x2f3868: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3864) {
            ctx->pc = 0x2F38FCu;
            goto label_2f38fc;
        }
    }
    ctx->pc = 0x2F386Cu;
    // 0x2f386c: 0x0  nop
    ctx->pc = 0x2f386cu;
    // NOP
label_2f3870:
    // 0x2f3870: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f3870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3874: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2f3874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2f3878: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2f3878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2f387c: 0xa0910000  sb          $s1, 0x0($a0)
    ctx->pc = 0x2f387cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x2f3880: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2F3880u;
    {
        const bool branch_taken_0x2f3880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3880u;
        // 0x2f3884: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3880) {
            ctx->pc = 0x2F38B8u;
            goto label_2f38b8;
        }
    }
    ctx->pc = 0x2F3888u;
label_2f3888:
    // 0x2f3888: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2f3888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2f388c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F388Cu;
    {
        const bool branch_taken_0x2f388c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F388Cu;
        // 0x2f3890: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f388c) {
            ctx->pc = 0x2F38C8u;
            goto label_2f38c8;
        }
    }
    ctx->pc = 0x2F3894u;
    // 0x2f3894: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x2f3894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2f3898: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F3898u;
    {
        const bool branch_taken_0x2f3898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3898u;
        // 0x2f389c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3898) {
            ctx->pc = 0x2F38CCu;
            goto label_2f38cc;
        }
    }
    ctx->pc = 0x2F38A0u;
    // 0x2f38a0: 0x90e2ffff  lbu         $v0, -0x1($a3)
    ctx->pc = 0x2f38a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
    // 0x2f38a4: 0x14510009  bne         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F38A4u;
    {
        const bool branch_taken_0x2f38a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2f38a4) {
            ctx->pc = 0x2F38CCu;
            goto label_2f38cc;
        }
    }
    ctx->pc = 0x2F38ACu;
    // 0x2f38ac: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x2f38acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2f38b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2f38b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2f38b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f38b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f38b8:
    // 0x2f38b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f38b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f38bc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F38BCu;
    {
        const bool branch_taken_0x2f38bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F38C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F38BCu;
        // 0x2f38c0: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f38bc) {
            ctx->pc = 0x2F38FCu;
            goto label_2f38fc;
        }
    }
    ctx->pc = 0x2F38C4u;
    // 0x2f38c4: 0x0  nop
    ctx->pc = 0x2f38c4u;
    // NOP
label_2f38c8:
    // 0x2f38c8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2f38c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2f38cc:
    // 0x2f38cc: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2f38ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2f38d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f38d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f38d4: 0x26060042  addiu       $a2, $s0, 0x42
    ctx->pc = 0x2f38d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 66));
    // 0x2f38d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f38d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f38dc: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x2f38dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x2f38e0: 0xae070038  sw          $a3, 0x38($s0)
    ctx->pc = 0x2f38e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 7));
    // 0x2f38e4: 0xae040030  sw          $a0, 0x30($s0)
    ctx->pc = 0x2f38e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
    // 0x2f38e8: 0xae050034  sw          $a1, 0x34($s0)
    ctx->pc = 0x2f38e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
    // 0x2f38ec: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x2f38ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x2f38f0: 0xa2110042  sb          $s1, 0x42($s0)
    ctx->pc = 0x2f38f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 17));
    // 0x2f38f4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2f38f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2f38f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f38f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f38fc:
    // 0x2f38fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f38fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3900: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f3900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f3904: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f3904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3908: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3908u;
        // 0x2f390c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3910u;
}
