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

// Function: sub_003A0340
// Address: 0x3a0340 - 0x3a0628
void sub_003A0340_0x3a0340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0340_0x3a0340");
#endif

    switch (ctx->pc) {
        case 0x3a0370u: goto label_3a0370;
        case 0x3a03d4u: goto label_3a03d4;
        case 0x3a03e4u: goto label_3a03e4;
        case 0x3a03f8u: goto label_3a03f8;
        case 0x3a0400u: goto label_3a0400;
        case 0x3a0408u: goto label_3a0408;
        case 0x3a0410u: goto label_3a0410;
        case 0x3a0420u: goto label_3a0420;
        case 0x3a0434u: goto label_3a0434;
        case 0x3a0450u: goto label_3a0450;
        case 0x3a0464u: goto label_3a0464;
        case 0x3a046cu: goto label_3a046c;
        case 0x3a0480u: goto label_3a0480;
        case 0x3a04b0u: goto label_3a04b0;
        case 0x3a04c8u: goto label_3a04c8;
        case 0x3a0548u: goto label_3a0548;
        case 0x3a055cu: goto label_3a055c;
        case 0x3a0570u: goto label_3a0570;
        case 0x3a05f0u: goto label_3a05f0;
        default: break;
    }

    ctx->pc = 0x3a0340u;

    // 0x3a0340: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3a0340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3a0344: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3a0344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3a0348: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3a0348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3a034c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3a034cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0350: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3a0350u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0354: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3a0354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3a0358: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3a0358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3a035c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3a035cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3a0360: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3a0360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3a0364: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a0364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a0368: 0xc0e69e4  jal         func_39A790
    ctx->pc = 0x3A0368u;
    SET_GPR_U32(ctx, 31, 0x3A0370u);
    ctx->pc = 0x3A036Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0368u;
    // 0x3a036c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A790u, 0x3A0368u, 0x3A0370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0370u;
label_3a0370:
    // 0x3a0370: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3a0370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3a0374: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3a0374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3a0378: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a0378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a037c: 0x106000a0  beqz        $v1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x3A037Cu;
    {
        const bool branch_taken_0x3a037c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A037Cu;
        // 0x3a0380: 0x8f82bd80  lw          $v0, -0x4280($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a037c) {
            ctx->pc = 0x3A0600u;
            goto label_3a0600;
        }
    }
    ctx->pc = 0x3A0384u;
    // 0x3a0384: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x3a0384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x3a0388: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x3a0388u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a038c: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x3a038cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3a0390: 0x12400026  beqz        $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x3A0390u;
    {
        const bool branch_taken_0x3a0390 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0390u;
        // 0x3a0394: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0390) {
            ctx->pc = 0x3A042Cu;
            goto label_3a042c;
        }
    }
    ctx->pc = 0x3A0398u;
    // 0x3a0398: 0x26700004  addiu       $s0, $s3, 0x4
    ctx->pc = 0x3a0398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x3a039c: 0x1a400011  blez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A039Cu;
    {
        const bool branch_taken_0x3a039c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3A03A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A039Cu;
        // 0x3a03a0: 0x32430003  andi        $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a039c) {
            ctx->pc = 0x3A03E4u;
            goto label_3a03e4;
        }
    }
    ctx->pc = 0x3A03A4u;
    // 0x3a03a4: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A03A4u;
    {
        const bool branch_taken_0x3a03a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a03a4) {
            ctx->pc = 0x3A03A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A03A4u;
            // 0x3a03a8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A03F8u;
            goto label_3a03f8;
        }
    }
    ctx->pc = 0x3A03ACu;
    // 0x3a03ac: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3a03acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a03b0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3A03B0u;
    {
        const bool branch_taken_0x3a03b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a03b0) {
            ctx->pc = 0x3A03B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A03B0u;
            // 0x3a03b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A03E8u;
            goto label_3a03e8;
        }
    }
    ctx->pc = 0x3A03B8u;
    // 0x3a03b8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3a03b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3a03bc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A03BCu;
    {
        const bool branch_taken_0x3a03bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a03bc) {
            ctx->pc = 0x3A03C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A03BCu;
            // 0x3a03c0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A03D8u;
            goto label_3a03d8;
        }
    }
    ctx->pc = 0x3A03C4u;
    // 0x3a03c4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3a03c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3a03c8: 0x26700008  addiu       $s0, $s3, 0x8
    ctx->pc = 0x3a03c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3a03cc: 0xc0e7ee0  jal         func_39FB80
    ctx->pc = 0x3A03CCu;
    SET_GPR_U32(ctx, 31, 0x3A03D4u);
    ctx->pc = 0x3A03D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A03CCu;
    // 0x3a03d0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FB80u, 0x3A03CCu, 0x3A03D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A03D4u;
label_3a03d4:
    // 0x3a03d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3a03d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a03d8:
    // 0x3a03d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a03d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3a03dc: 0xc0e7ee0  jal         func_39FB80
    ctx->pc = 0x3A03DCu;
    SET_GPR_U32(ctx, 31, 0x3A03E4u);
    ctx->pc = 0x3A03E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A03DCu;
    // 0x3a03e0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FB80u, 0x3A03DCu, 0x3A03E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A03E4u;
label_3a03e4:
    // 0x3a03e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3a03e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a03e8:
    // 0x3a03e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a03e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3a03ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3A03ECu;
    {
        const bool branch_taken_0x3a03ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A03F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A03ECu;
        // 0x3a03f0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a03ec) {
            ctx->pc = 0x3A0418u;
            goto label_3a0418;
        }
    }
    ctx->pc = 0x3A03F4u;
    // 0x3a03f4: 0x0  nop
    ctx->pc = 0x3a03f4u;
    // NOP
label_3a03f8:
    // 0x3a03f8: 0xc0e7ee0  jal         func_39FB80
    ctx->pc = 0x3A03F8u;
    SET_GPR_U32(ctx, 31, 0x3A0400u);
    ctx->pc = 0x3A03FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A03F8u;
    // 0x3a03fc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FB80u, 0x3A03F8u, 0x3A0400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0400u;
label_3a0400:
    // 0x3a0400: 0xc0e7ee0  jal         func_39FB80
    ctx->pc = 0x3A0400u;
    SET_GPR_U32(ctx, 31, 0x3A0408u);
    ctx->pc = 0x3A0404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0400u;
    // 0x3a0404: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FB80u, 0x3A0400u, 0x3A0408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0408u;
label_3a0408:
    // 0x3a0408: 0xc0e7ee0  jal         func_39FB80
    ctx->pc = 0x3A0408u;
    SET_GPR_U32(ctx, 31, 0x3A0410u);
    ctx->pc = 0x3A040Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0408u;
    // 0x3a040c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FB80u, 0x3A0408u, 0x3A0410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0410u;
label_3a0410:
    // 0x3a0410: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3a0410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3a0414: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3a0414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3a0418:
    // 0x3a0418: 0xc0e7ee0  jal         func_39FB80
    ctx->pc = 0x3A0418u;
    SET_GPR_U32(ctx, 31, 0x3A0420u);
    ctx->pc = 0x39FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FB80u, 0x3A0418u, 0x3A0420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0420u;
label_3a0420:
    // 0x3a0420: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x3a0420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3a0424: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3A0424u;
    {
        const bool branch_taken_0x3a0424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a0424) {
            ctx->pc = 0x3A0428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0424u;
            // 0x3a0428: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A03F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a03f8;
        }
    }
    ctx->pc = 0x3A042Cu;
label_3a042c:
    // 0x3a042c: 0xc0e82f0  jal         func_3A0BC0
    ctx->pc = 0x3A042Cu;
    SET_GPR_U32(ctx, 31, 0x3A0434u);
    ctx->pc = 0x3A0430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A042Cu;
    // 0x3a0430: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0BC0u, 0x3A042Cu, 0x3A0434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0434u;
label_3a0434:
    // 0x3a0434: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x3a0434u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x3a0438: 0x2446fff4  addiu       $a2, $v0, -0xC
    ctx->pc = 0x3a0438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x3a043c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a043cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0440: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a0440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0444: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x3a0444u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x3a0448: 0xc103404  jal         func_40D010
    ctx->pc = 0x3A0448u;
    SET_GPR_U32(ctx, 31, 0x3A0450u);
    ctx->pc = 0x3A044Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0448u;
    // 0x3a044c: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x3A0448u, 0x3A0450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0450u;
label_3a0450:
    // 0x3a0450: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A0450u;
    {
        const bool branch_taken_0x3a0450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0450u;
        // 0x3a0454: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0450) {
            ctx->pc = 0x3A046Cu;
            goto label_3a046c;
        }
    }
    ctx->pc = 0x3A0458u;
    // 0x3a0458: 0x2785aa0c  addiu       $a1, $gp, -0x55F4
    ctx->pc = 0x3a0458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945292));
    // 0x3a045c: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3A045Cu;
    SET_GPR_U32(ctx, 31, 0x3A0464u);
    ctx->pc = 0x3A0460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A045Cu;
    // 0x3a0460: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3A045Cu, 0x3A0464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0464u;
label_3a0464:
    // 0x3a0464: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A0464u;
    {
        const bool branch_taken_0x3a0464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a0464) {
            ctx->pc = 0x3A0468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0464u;
            // 0x3a0468: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0474u;
            goto label_3a0474;
        }
    }
    ctx->pc = 0x3A046Cu;
label_3a046c:
    // 0x3a046c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x3A046Cu;
    {
        const bool branch_taken_0x3a046c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A046Cu;
        // 0x3a0470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a046c) {
            ctx->pc = 0x3A0604u;
            goto label_3a0604;
        }
    }
    ctx->pc = 0x3A0474u;
label_3a0474:
    // 0x3a0474: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x3A0474u;
    {
        const bool branch_taken_0x3a0474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0474u;
        // 0x3a0478: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0474) {
            ctx->pc = 0x3A0600u;
            goto label_3a0600;
        }
    }
    ctx->pc = 0x3A047Cu;
    // 0x3a047c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x3a047cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3a0480:
    // 0x3a0480: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a0480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0484: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3a0484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3a0488: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a0488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a048c: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x3a048cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3a0490: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3a0490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a0494: 0x26500018  addiu       $s0, $s2, 0x18
    ctx->pc = 0x3a0494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x3a0498: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3a0498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3a049c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3a049cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3a04a0: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x3a04a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3a04a4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3a04a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a04a8: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3A04A8u;
    SET_GPR_U32(ctx, 31, 0x3A04B0u);
    ctx->pc = 0x3A04ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A04A8u;
    // 0x3a04ac: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3A04A8u, 0x3A04B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A04B0u;
label_3a04b0:
    // 0x3a04b0: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3A04B0u;
    {
        const bool branch_taken_0x3a04b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A04B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A04B0u;
        // 0x3a04b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a04b0) {
            ctx->pc = 0x3A046Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a046c;
        }
    }
    ctx->pc = 0x3A04B8u;
    // 0x3a04b8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x3a04b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3a04bc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3a04bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a04c0: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x3a04c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x3a04c4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3a04c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a04c8:
    // 0x3a04c8: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x3a04c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3a04cc: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x3a04ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x3a04d0: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x3a04d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3a04d4: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x3a04d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3a04d8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A04D8u;
    {
        const bool branch_taken_0x3a04d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A04DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A04D8u;
        // 0x3a04dc: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a04d8) {
            ctx->pc = 0x3A0530u;
            goto label_3a0530;
        }
    }
    ctx->pc = 0x3A04E0u;
    // 0x3a04e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3a04e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a04e4: 0x2442bbc0  addiu       $v0, $v0, -0x4440
    ctx->pc = 0x3a04e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949824));
    // 0x3a04e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a04e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a04ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a04ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a04f0: 0x800008  jr          $a0
    ctx->pc = 0x3A04F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A04F8u: goto label_3a04f8;
            case 0x3A0508u: goto label_3a0508;
            case 0x3A052Cu: goto label_3a052c;
            case 0x3A0530u: goto label_3a0530;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A04F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A04F8u;
label_3a04f8:
    // 0x3a04f8: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x3a04f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3a04fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a04fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a0500: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3A0500u;
    {
        const bool branch_taken_0x3a0500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0500u;
        // 0x3a0504: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0500) {
            ctx->pc = 0x3A0530u;
            goto label_3a0530;
        }
    }
    ctx->pc = 0x3A0508u;
label_3a0508:
    // 0x3a0508: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3a0508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3a050c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3a050cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3a0510: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3a0510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a0514: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a0514u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0518: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3a0518u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a051c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3a051cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3a0520: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3a0520u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x3a0524: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A0524u;
    {
        const bool branch_taken_0x3a0524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0524u;
        // 0x3a0528: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0524) {
            ctx->pc = 0x3A0530u;
            goto label_3a0530;
        }
    }
    ctx->pc = 0x3A052Cu;
label_3a052c:
    // 0x3a052c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3a052cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a0530:
    // 0x3a0530: 0x5100ffe5  beql        $t0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x3A0530u;
    {
        const bool branch_taken_0x3a0530 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0530) {
            ctx->pc = 0x3A0534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0530u;
            // 0x3a0534: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A04C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a04c8;
        }
    }
    ctx->pc = 0x3A0538u;
    // 0x3a0538: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x3a0538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x3a053c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a053cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0540: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3A0540u;
    SET_GPR_U32(ctx, 31, 0x3A0548u);
    ctx->pc = 0x3A0544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0540u;
    // 0x3a0544: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3A0540u, 0x3A0548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0548u;
label_3a0548:
    // 0x3a0548: 0x1040ffc8  beqz        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x3A0548u;
    {
        const bool branch_taken_0x3a0548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0548u;
        // 0x3a054c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0548) {
            ctx->pc = 0x3A046Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a046c;
        }
    }
    ctx->pc = 0x3A0550u;
    // 0x3a0550: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3a0550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3a0554: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3A0554u;
    SET_GPR_U32(ctx, 31, 0x3A055Cu);
    ctx->pc = 0x3A0558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0554u;
    // 0x3a0558: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3A0554u, 0x3A055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A055Cu;
label_3a055c:
    // 0x3a055c: 0x1040ffc3  beqz        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x3A055Cu;
    {
        const bool branch_taken_0x3a055c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A055Cu;
        // 0x3a0560: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a055c) {
            ctx->pc = 0x3A046Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a046c;
        }
    }
    ctx->pc = 0x3A0564u;
    // 0x3a0564: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3a0564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3a0568: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a0568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a056c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a056cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3a0570:
    // 0x3a0570: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x3a0570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3a0574: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x3a0574u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x3a0578: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x3a0578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3a057c: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x3a057cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3a0580: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A0580u;
    {
        const bool branch_taken_0x3a0580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0580u;
        // 0x3a0584: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0580) {
            ctx->pc = 0x3A05D4u;
            goto label_3a05d4;
        }
    }
    ctx->pc = 0x3A0588u;
    // 0x3a0588: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3a0588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a058c: 0x2442bbe0  addiu       $v0, $v0, -0x4420
    ctx->pc = 0x3a058cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949856));
    // 0x3a0590: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a0590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a0594: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a0594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a0598: 0x800008  jr          $a0
    ctx->pc = 0x3A0598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A05A0u: goto label_3a05a0;
            case 0x3A05B0u: goto label_3a05b0;
            case 0x3A05D0u: goto label_3a05d0;
            case 0x3A05D4u: goto label_3a05d4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0598u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A05A0u;
label_3a05a0:
    // 0x3a05a0: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x3a05a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a05a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a05a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a05a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3A05A8u;
    {
        const bool branch_taken_0x3a05a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A05ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A05A8u;
        // 0x3a05ac: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a05a8) {
            ctx->pc = 0x3A05D4u;
            goto label_3a05d4;
        }
    }
    ctx->pc = 0x3A05B0u;
label_3a05b0:
    // 0x3a05b0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3a05b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3a05b4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3a05b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3a05b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a05b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a05bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a05bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a05c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a05c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a05c4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3a05c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3a05c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A05C8u;
    {
        const bool branch_taken_0x3a05c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A05CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A05C8u;
        // 0x3a05cc: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a05c8) {
            ctx->pc = 0x3A05D4u;
            goto label_3a05d4;
        }
    }
    ctx->pc = 0x3A05D0u;
label_3a05d0:
    // 0x3a05d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a05d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a05d4:
    // 0x3a05d4: 0x50e0ffe6  beql        $a3, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3A05D4u;
    {
        const bool branch_taken_0x3a05d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a05d4) {
            ctx->pc = 0x3A05D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A05D4u;
            // 0x3a05d8: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0570;
        }
    }
    ctx->pc = 0x3A05DCu;
    // 0x3a05dc: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x3a05dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3a05e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a05e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a05e4: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x3a05e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x3a05e8: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x3A05E8u;
    SET_GPR_U32(ctx, 31, 0x3A05F0u);
    ctx->pc = 0x3A05ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A05E8u;
    // 0x3a05ec: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x3A05E8u, 0x3A05F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A05F0u;
label_3a05f0:
    // 0x3a05f0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3a05f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3a05f4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3a05f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3a05f8: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x3A05F8u;
    {
        const bool branch_taken_0x3a05f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A05FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A05F8u;
        // 0x3a05fc: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a05f8) {
            ctx->pc = 0x3A0480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0480;
        }
    }
    ctx->pc = 0x3A0600u;
label_3a0600:
    // 0x3a0600: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3a0600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a0604:
    // 0x3a0604: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3a0604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a0608: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3a0608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a060c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3a060cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a0610: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3a0610u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a0614: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3a0614u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a0618: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3a0618u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a061c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a061cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0620: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0620u;
        // 0x3a0624: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0628u;
}
