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

// Function: sub_003B5508
// Address: 0x3b5508 - 0x3b5b90
void sub_003B5508_0x3b5508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5508_0x3b5508");
#endif

    switch (ctx->pc) {
        case 0x3b5548u: goto label_3b5548;
        case 0x3b5554u: goto label_3b5554;
        case 0x3b55a4u: goto label_3b55a4;
        case 0x3b55b8u: goto label_3b55b8;
        case 0x3b55c0u: goto label_3b55c0;
        case 0x3b55dcu: goto label_3b55dc;
        case 0x3b55f0u: goto label_3b55f0;
        case 0x3b55f8u: goto label_3b55f8;
        case 0x3b5610u: goto label_3b5610;
        case 0x3b5624u: goto label_3b5624;
        case 0x3b562cu: goto label_3b562c;
        case 0x3b5638u: goto label_3b5638;
        case 0x3b5648u: goto label_3b5648;
        case 0x3b565cu: goto label_3b565c;
        case 0x3b5664u: goto label_3b5664;
        case 0x3b5674u: goto label_3b5674;
        case 0x3b5688u: goto label_3b5688;
        case 0x3b5690u: goto label_3b5690;
        case 0x3b56a0u: goto label_3b56a0;
        case 0x3b56b4u: goto label_3b56b4;
        case 0x3b56bcu: goto label_3b56bc;
        case 0x3b56ccu: goto label_3b56cc;
        case 0x3b56e0u: goto label_3b56e0;
        case 0x3b56e8u: goto label_3b56e8;
        case 0x3b56fcu: goto label_3b56fc;
        case 0x3b5720u: goto label_3b5720;
        case 0x3b573cu: goto label_3b573c;
        case 0x3b5744u: goto label_3b5744;
        case 0x3b5750u: goto label_3b5750;
        case 0x3b57d8u: goto label_3b57d8;
        case 0x3b580cu: goto label_3b580c;
        case 0x3b58a8u: goto label_3b58a8;
        case 0x3b5900u: goto label_3b5900;
        case 0x3b5a38u: goto label_3b5a38;
        default: break;
    }

    ctx->pc = 0x3b5508u;

    // 0x3b5508: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3b5508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3b550c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b550cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3b5510: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3b5510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3b5514: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3b5514u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5518: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3b5518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3b551c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3b551cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3b5520: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3b5520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3b5524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b5524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b5528: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3b5528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3b552c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b552cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b5530: 0x1040018f  beqz        $v0, . + 4 + (0x18F << 2)
    ctx->pc = 0x3B5530u;
    {
        const bool branch_taken_0x3b5530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5530u;
        // 0x3b5534: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5530) {
            ctx->pc = 0x3B5B70u;
            goto label_3b5b70;
        }
    }
    ctx->pc = 0x3B5538u;
    // 0x3b5538: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b5538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3b553c: 0x24040110  addiu       $a0, $zero, 0x110
    ctx->pc = 0x3b553cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x3b5540: 0xc103642  jal         func_40D908
    ctx->pc = 0x3B5540u;
    SET_GPR_U32(ctx, 31, 0x3B5548u);
    ctx->pc = 0x3B5544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5540u;
    // 0x3b5544: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3B5540u, 0x3B5548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5548u;
label_3b5548:
    // 0x3b5548: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x3b5548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x3b554c: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3B554Cu;
    SET_GPR_U32(ctx, 31, 0x3B5554u);
    ctx->pc = 0x3B5550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B554Cu;
    // 0x3b5550: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B554Cu, 0x3B5554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5554u;
label_3b5554:
    // 0x3b5554: 0x8e6300b4  lw          $v1, 0xB4($s3)
    ctx->pc = 0x3b5554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x3b5558: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b5558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b555c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b555cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b5560: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x3b5560u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b5564: 0x12340063  beq         $s1, $s4, . + 4 + (0x63 << 2)
    ctx->pc = 0x3B5564u;
    {
        const bool branch_taken_0x3b5564 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x3B5568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5564u;
        // 0x3b5568: 0x2911023  subu        $v0, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5564) {
            ctx->pc = 0x3B56F4u;
            goto label_3b56f4;
        }
    }
    ctx->pc = 0x3B556Cu;
    // 0x3b556c: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x3b556cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3b5570: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x3B5570u;
    {
        const bool branch_taken_0x3b5570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5570u;
        // 0x3b5574: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5570) {
            ctx->pc = 0x3B5638u;
            goto label_3b5638;
        }
    }
    ctx->pc = 0x3B5578u;
    // 0x3b5578: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x3b5578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3b557c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3B557Cu;
    {
        const bool branch_taken_0x3b557c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B557Cu;
        // 0x3b5580: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b557c) {
            ctx->pc = 0x3B5604u;
            goto label_3b5604;
        }
    }
    ctx->pc = 0x3B5584u;
    // 0x3b5584: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x3b5584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3b5588: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3B5588u;
    {
        const bool branch_taken_0x3b5588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5588u;
        // 0x3b558c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5588) {
            ctx->pc = 0x3B55D4u;
            goto label_3b55d4;
        }
    }
    ctx->pc = 0x3B5590u;
    // 0x3b5590: 0x2862000d  slti        $v0, $v1, 0xD
    ctx->pc = 0x3b5590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x3b5594: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3B5594u;
    {
        const bool branch_taken_0x3b5594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5594) {
            ctx->pc = 0x3B5638u;
            goto label_3b5638;
        }
    }
    ctx->pc = 0x3B559Cu;
    // 0x3b559c: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3B559Cu;
    SET_GPR_U32(ctx, 31, 0x3B55A4u);
    ctx->pc = 0x3B55A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B559Cu;
    // 0x3b55a0: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3B559Cu, 0x3B55A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B55A4u;
label_3b55a4:
    // 0x3b55a4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3b55a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b55a8: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B55A8u;
    {
        const bool branch_taken_0x3b55a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b55a8) {
            ctx->pc = 0x3B55ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B55A8u;
            // 0x3b55ac: 0x26220004  addiu       $v0, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B55C4u;
            goto label_3b55c4;
        }
    }
    ctx->pc = 0x3B55B0u;
    // 0x3b55b0: 0xc0ed2f2  jal         func_3B4BC8
    ctx->pc = 0x3B55B0u;
    SET_GPR_U32(ctx, 31, 0x3B55B8u);
    ctx->pc = 0x3B55B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B55B0u;
    // 0x3b55b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4BC8u, 0x3B55B0u, 0x3B55B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B55B8u;
label_3b55b8:
    // 0x3b55b8: 0xc0ed2fe  jal         func_3B4BF8
    ctx->pc = 0x3B55B8u;
    SET_GPR_U32(ctx, 31, 0x3B55C0u);
    ctx->pc = 0x3B55BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B55B8u;
    // 0x3b55bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4BF8u, 0x3B55B8u, 0x3B55C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B55C0u;
label_3b55c0:
    // 0x3b55c0: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x3b55c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3b55c4:
    // 0x3b55c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b55c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b55c8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3b55c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b55cc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b55ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3b55d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b55d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b55d4:
    // 0x3b55d4: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3B55D4u;
    SET_GPR_U32(ctx, 31, 0x3B55DCu);
    ctx->pc = 0x3B55D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B55D4u;
    // 0x3b55d8: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3B55D4u, 0x3B55DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B55DCu;
label_3b55dc:
    // 0x3b55dc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3b55dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b55e0: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B55E0u;
    {
        const bool branch_taken_0x3b55e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b55e0) {
            ctx->pc = 0x3B55E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B55E0u;
            // 0x3b55e4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B55FCu;
            goto label_3b55fc;
        }
    }
    ctx->pc = 0x3B55E8u;
    // 0x3b55e8: 0xc0ed2f2  jal         func_3B4BC8
    ctx->pc = 0x3B55E8u;
    SET_GPR_U32(ctx, 31, 0x3B55F0u);
    ctx->pc = 0x3B55ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B55E8u;
    // 0x3b55ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4BC8u, 0x3B55E8u, 0x3B55F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B55F0u;
label_3b55f0:
    // 0x3b55f0: 0xc0ed2fe  jal         func_3B4BF8
    ctx->pc = 0x3B55F0u;
    SET_GPR_U32(ctx, 31, 0x3B55F8u);
    ctx->pc = 0x3B55F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B55F0u;
    // 0x3b55f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4BF8u, 0x3B55F0u, 0x3B55F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B55F8u;
label_3b55f8:
    // 0x3b55f8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3b55f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3b55fc:
    // 0x3b55fc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3b55fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3b5600: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b5600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b5604:
    // 0x3b5604: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b5604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5608: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3B5608u;
    SET_GPR_U32(ctx, 31, 0x3B5610u);
    ctx->pc = 0x3B560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5608u;
    // 0x3b560c: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3B5608u, 0x3B5610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5610u;
label_3b5610:
    // 0x3b5610: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3b5610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b5614: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B5614u;
    {
        const bool branch_taken_0x3b5614 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5614) {
            ctx->pc = 0x3B5618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5614u;
            // 0x3b5618: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5630u;
            goto label_3b5630;
        }
    }
    ctx->pc = 0x3B561Cu;
    // 0x3b561c: 0xc0ed2f2  jal         func_3B4BC8
    ctx->pc = 0x3B561Cu;
    SET_GPR_U32(ctx, 31, 0x3B5624u);
    ctx->pc = 0x3B5620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B561Cu;
    // 0x3b5620: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4BC8u, 0x3B561Cu, 0x3B5624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5624u;
label_3b5624:
    // 0x3b5624: 0xc0ed2fe  jal         func_3B4BF8
    ctx->pc = 0x3B5624u;
    SET_GPR_U32(ctx, 31, 0x3B562Cu);
    ctx->pc = 0x3B5628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5624u;
    // 0x3b5628: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4BF8u, 0x3B5624u, 0x3B562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B562Cu;
label_3b562c:
    // 0x3b562c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3b562cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3b5630:
    // 0x3b5630: 0x12340030  beq         $s1, $s4, . + 4 + (0x30 << 2)
    ctx->pc = 0x3B5630u;
    {
        const bool branch_taken_0x3b5630 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x3B5634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5630u;
        // 0x3b5634: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5630) {
            ctx->pc = 0x3B56F4u;
            goto label_3b56f4;
        }
    }
    ctx->pc = 0x3B5638u;
label_3b5638:
    // 0x3b5638: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b5638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3b563c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b563cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5640: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3B5640u;
    SET_GPR_U32(ctx, 31, 0x3B5648u);
    ctx->pc = 0x3B5644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5640u;
    // 0x3b5644: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3B5640u, 0x3B5648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5648u;
label_3b5648:
    // 0x3b5648: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3b5648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b564c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B564Cu;
    {
        const bool branch_taken_0x3b564c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b564c) {
            ctx->pc = 0x3B5650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B564Cu;
            // 0x3b5650: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5668u;
            goto label_3b5668;
        }
    }
    ctx->pc = 0x3B5654u;
    // 0x3b5654: 0xc0ed2f2  jal         func_3B4BC8
    ctx->pc = 0x3B5654u;
    SET_GPR_U32(ctx, 31, 0x3B565Cu);
    ctx->pc = 0x3B5658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5654u;
    // 0x3b5658: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4BC8u, 0x3B5654u, 0x3B565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B565Cu;
label_3b565c:
    // 0x3b565c: 0xc0ed2fe  jal         func_3B4BF8
    ctx->pc = 0x3B565Cu;
    SET_GPR_U32(ctx, 31, 0x3B5664u);
    ctx->pc = 0x3B5660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B565Cu;
    // 0x3b5660: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4BF8u, 0x3B565Cu, 0x3B5664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5664u;
label_3b5664:
    // 0x3b5664: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b5664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b5668:
    // 0x3b5668: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b5668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b566c: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3B566Cu;
    SET_GPR_U32(ctx, 31, 0x3B5674u);
    ctx->pc = 0x3B5670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B566Cu;
    // 0x3b5670: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3B566Cu, 0x3B5674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5674u;
label_3b5674:
    // 0x3b5674: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3b5674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3b5678: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B5678u;
    {
        const bool branch_taken_0x3b5678 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5678) {
            ctx->pc = 0x3B567Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5678u;
            // 0x3b567c: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5694u;
            goto label_3b5694;
        }
    }
    ctx->pc = 0x3B5680u;
    // 0x3b5680: 0xc0ed2f2  jal         func_3B4BC8
    ctx->pc = 0x3B5680u;
    SET_GPR_U32(ctx, 31, 0x3B5688u);
    ctx->pc = 0x3B5684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5680u;
    // 0x3b5684: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4BC8u, 0x3B5680u, 0x3B5688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5688u;
label_3b5688:
    // 0x3b5688: 0xc0ed2fe  jal         func_3B4BF8
    ctx->pc = 0x3B5688u;
    SET_GPR_U32(ctx, 31, 0x3B5690u);
    ctx->pc = 0x3B568Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5688u;
    // 0x3b568c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4BF8u, 0x3B5688u, 0x3B5690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5690u;
label_3b5690:
    // 0x3b5690: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b5690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b5694:
    // 0x3b5694: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b5694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5698: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3B5698u;
    SET_GPR_U32(ctx, 31, 0x3B56A0u);
    ctx->pc = 0x3B569Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5698u;
    // 0x3b569c: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3B5698u, 0x3B56A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B56A0u;
label_3b56a0:
    // 0x3b56a0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3b56a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b56a4: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B56A4u;
    {
        const bool branch_taken_0x3b56a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b56a4) {
            ctx->pc = 0x3B56A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B56A4u;
            // 0x3b56a8: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B56C0u;
            goto label_3b56c0;
        }
    }
    ctx->pc = 0x3B56ACu;
    // 0x3b56ac: 0xc0ed2f2  jal         func_3B4BC8
    ctx->pc = 0x3B56ACu;
    SET_GPR_U32(ctx, 31, 0x3B56B4u);
    ctx->pc = 0x3B56B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B56ACu;
    // 0x3b56b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4BC8u, 0x3B56ACu, 0x3B56B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B56B4u;
label_3b56b4:
    // 0x3b56b4: 0xc0ed2fe  jal         func_3B4BF8
    ctx->pc = 0x3B56B4u;
    SET_GPR_U32(ctx, 31, 0x3B56BCu);
    ctx->pc = 0x3B56B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B56B4u;
    // 0x3b56b8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4BF8u, 0x3B56B4u, 0x3B56BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B56BCu;
label_3b56bc:
    // 0x3b56bc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b56bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b56c0:
    // 0x3b56c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b56c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b56c4: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3B56C4u;
    SET_GPR_U32(ctx, 31, 0x3B56CCu);
    ctx->pc = 0x3B56C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B56C4u;
    // 0x3b56c8: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3B56C4u, 0x3B56CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B56CCu;
label_3b56cc:
    // 0x3b56cc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3b56ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3b56d0: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B56D0u;
    {
        const bool branch_taken_0x3b56d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b56d0) {
            ctx->pc = 0x3B56D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B56D0u;
            // 0x3b56d4: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B56ECu;
            goto label_3b56ec;
        }
    }
    ctx->pc = 0x3B56D8u;
    // 0x3b56d8: 0xc0ed2f2  jal         func_3B4BC8
    ctx->pc = 0x3B56D8u;
    SET_GPR_U32(ctx, 31, 0x3B56E0u);
    ctx->pc = 0x3B56DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B56D8u;
    // 0x3b56dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4BC8u, 0x3B56D8u, 0x3B56E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B56E0u;
label_3b56e0:
    // 0x3b56e0: 0xc0ed2fe  jal         func_3B4BF8
    ctx->pc = 0x3B56E0u;
    SET_GPR_U32(ctx, 31, 0x3B56E8u);
    ctx->pc = 0x3B56E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B56E0u;
    // 0x3b56e4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4BF8u, 0x3B56E0u, 0x3B56E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B56E8u;
label_3b56e8:
    // 0x3b56e8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x3b56e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3b56ec:
    // 0x3b56ec: 0x1634ffd2  bne         $s1, $s4, . + 4 + (-0x2E << 2)
    ctx->pc = 0x3B56ECu;
    {
        const bool branch_taken_0x3b56ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x3B56F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B56ECu;
        // 0x3b56f0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b56ec) {
            ctx->pc = 0x3B5638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b5638;
        }
    }
    ctx->pc = 0x3B56F4u;
label_3b56f4:
    // 0x3b56f4: 0xc103684  jal         func_40DA10
    ctx->pc = 0x3B56F4u;
    SET_GPR_U32(ctx, 31, 0x3B56FCu);
    ctx->pc = 0x3B56F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B56F4u;
    // 0x3b56f8: 0x8e6400b0  lw          $a0, 0xB0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3B56F4u, 0x3B56FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B56FCu;
label_3b56fc:
    // 0x3b56fc: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x3b56fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3b5700: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3b5700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3b5704: 0xae7200b0  sw          $s2, 0xB0($s3)
    ctx->pc = 0x3b5704u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 18));
    // 0x3b5708: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b5708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3b570c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3b570cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b5710: 0x34a50190  ori         $a1, $a1, 0x190
    ctx->pc = 0x3b5710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
    // 0x3b5714: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3b5714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b5718: 0xc103642  jal         func_40D908
    ctx->pc = 0x3B5718u;
    SET_GPR_U32(ctx, 31, 0x3B5720u);
    ctx->pc = 0x3B571Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5718u;
    // 0x3b571c: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3B5718u, 0x3B5720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5720u;
label_3b5720:
    // 0x3b5720: 0x8e6500b4  lw          $a1, 0xB4($s3)
    ctx->pc = 0x3b5720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x3b5724: 0x10a00111  beqz        $a1, . + 4 + (0x111 << 2)
    ctx->pc = 0x3B5724u;
    {
        const bool branch_taken_0x3b5724 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5724u;
        // 0x3b5728: 0xae6200b8  sw          $v0, 0xB8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5724) {
            ctx->pc = 0x3B5B6Cu;
            goto label_3b5b6c;
        }
    }
    ctx->pc = 0x3B572Cu;
    // 0x3b572c: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x3b572cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x3b5730: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b5730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5734: 0xc103722  jal         func_40DC88
    ctx->pc = 0x3B5734u;
    SET_GPR_U32(ctx, 31, 0x3B573Cu);
    ctx->pc = 0x3B5738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5734u;
    // 0x3b5738: 0x34c60190  ori         $a2, $a2, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DC88u, 0x3B5734u, 0x3B573Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B573Cu;
label_3b573c:
    // 0x3b573c: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3B573Cu;
    SET_GPR_U32(ctx, 31, 0x3B5744u);
    ctx->pc = 0x3B5740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B573Cu;
    // 0x3b5740: 0x8e6400b8  lw          $a0, 0xB8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B573Cu, 0x3B5744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5744u;
label_3b5744:
    // 0x3b5744: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x3b5744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x3b5748: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3B5748u;
    SET_GPR_U32(ctx, 31, 0x3B5750u);
    ctx->pc = 0x3B574Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5748u;
    // 0x3b574c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B5748u, 0x3B5750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5750u;
label_3b5750:
    // 0x3b5750: 0x8e6300b4  lw          $v1, 0xB4($s3)
    ctx->pc = 0x3b5750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x3b5754: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3b5754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5758: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3b5758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3b575c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3b575cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3b5760: 0x10f00028  beq         $a3, $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3B5760u;
    {
        const bool branch_taken_0x3b5760 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 16));
        ctx->pc = 0x3B5764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5760u;
        // 0x3b5764: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5760) {
            ctx->pc = 0x3B5804u;
            goto label_3b5804;
        }
    }
    ctx->pc = 0x3B5768u;
    // 0x3b5768: 0x2071023  subu        $v0, $s0, $a3
    ctx->pc = 0x3b5768u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x3b576c: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x3b576cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x3b5770: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3B5770u;
    {
        const bool branch_taken_0x3b5770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5770u;
        // 0x3b5774: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5770) {
            ctx->pc = 0x3B57D0u;
            goto label_3b57d0;
        }
    }
    ctx->pc = 0x3B5778u;
    // 0x3b5778: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x3b5778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3b577c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3B577Cu;
    {
        const bool branch_taken_0x3b577c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b577c) {
            ctx->pc = 0x3B5780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B577Cu;
            // 0x3b5780: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B57C0u;
            goto label_3b57c0;
        }
    }
    ctx->pc = 0x3B5784u;
    // 0x3b5784: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x3b5784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3b5788: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B5788u;
    {
        const bool branch_taken_0x3b5788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b5788) {
            ctx->pc = 0x3B578Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5788u;
            // 0x3b578c: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B57B0u;
            goto label_3b57b0;
        }
    }
    ctx->pc = 0x3B5790u;
    // 0x3b5790: 0x28620019  slti        $v0, $v1, 0x19
    ctx->pc = 0x3b5790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x3b5794: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3B5794u;
    {
        const bool branch_taken_0x3b5794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5794u;
        // 0x3b5798: 0x24e20008  addiu       $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5794) {
            ctx->pc = 0x3B57D0u;
            goto label_3b57d0;
        }
    }
    ctx->pc = 0x3B579Cu;
    // 0x3b579c: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x3b579cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x3b57a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b57a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b57a4: 0x24c60110  addiu       $a2, $a2, 0x110
    ctx->pc = 0x3b57a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
    // 0x3b57a8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3b57a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b57ac: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x3b57acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_3b57b0:
    // 0x3b57b0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x3b57b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3b57b4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3b57b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3b57b8: 0x24c60110  addiu       $a2, $a2, 0x110
    ctx->pc = 0x3b57b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
    // 0x3b57bc: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x3b57bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_3b57c0:
    // 0x3b57c0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x3b57c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3b57c4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3b57c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3b57c8: 0x10f0000e  beq         $a3, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x3B57C8u;
    {
        const bool branch_taken_0x3b57c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 16));
        ctx->pc = 0x3B57CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B57C8u;
        // 0x3b57cc: 0x24c60110  addiu       $a2, $a2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b57c8) {
            ctx->pc = 0x3B5804u;
            goto label_3b5804;
        }
    }
    ctx->pc = 0x3B57D0u;
label_3b57d0:
    // 0x3b57d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b57d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b57d4: 0x0  nop
    ctx->pc = 0x3b57d4u;
    // NOP
label_3b57d8:
    // 0x3b57d8: 0x24c20110  addiu       $v0, $a2, 0x110
    ctx->pc = 0x3b57d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
    // 0x3b57dc: 0x24c30220  addiu       $v1, $a2, 0x220
    ctx->pc = 0x3b57dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 544));
    // 0x3b57e0: 0x24c40330  addiu       $a0, $a2, 0x330
    ctx->pc = 0x3b57e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 816));
    // 0x3b57e4: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x3b57e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x3b57e8: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x3b57e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x3b57ec: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x3b57ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x3b57f0: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x3b57f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x3b57f4: 0x24c60440  addiu       $a2, $a2, 0x440
    ctx->pc = 0x3b57f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1088));
    // 0x3b57f8: 0xaca40018  sw          $a0, 0x18($a1)
    ctx->pc = 0x3b57f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
    // 0x3b57fc: 0x14f0fff6  bne         $a3, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3B57FCu;
    {
        const bool branch_taken_0x3b57fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 16));
        ctx->pc = 0x3B5800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B57FCu;
        // 0x3b5800: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b57fc) {
            ctx->pc = 0x3B57D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b57d8;
        }
    }
    ctx->pc = 0x3B5804u;
label_3b5804:
    // 0x3b5804: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3B5804u;
    SET_GPR_U32(ctx, 31, 0x3B580Cu);
    ctx->pc = 0x3B5808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5804u;
    // 0x3b5808: 0x8e6400b8  lw          $a0, 0xB8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B5804u, 0x3B580Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B580Cu;
label_3b580c:
    // 0x3b580c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3b580cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5810: 0x8e6200b4  lw          $v0, 0xB4($s3)
    ctx->pc = 0x3b5810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x3b5814: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3b5814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3b5818: 0x1625021  addu        $t2, $t3, $v0
    ctx->pc = 0x3b5818u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x3b581c: 0x116a00d2  beq         $t3, $t2, . + 4 + (0xD2 << 2)
    ctx->pc = 0x3B581Cu;
    {
        const bool branch_taken_0x3b581c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 10));
        ctx->pc = 0x3B5820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B581Cu;
        // 0x3b5820: 0x254cfff8  addiu       $t4, $t2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b581c) {
            ctx->pc = 0x3B5B68u;
            goto label_3b5b68;
        }
    }
    ctx->pc = 0x3B5824u;
    // 0x3b5824: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x3b5824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5828: 0x1471023  subu        $v0, $t2, $a3
    ctx->pc = 0x3b5828u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x3b582c: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x3b582cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x3b5830: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3B5830u;
    {
        const bool branch_taken_0x3b5830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5830u;
        // 0x3b5834: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5830) {
            ctx->pc = 0x3B589Cu;
            goto label_3b589c;
        }
    }
    ctx->pc = 0x3B5838u;
    // 0x3b5838: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x3b5838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3b583c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3B583Cu;
    {
        const bool branch_taken_0x3b583c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b583c) {
            ctx->pc = 0x3B5840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B583Cu;
            // 0x3b5840: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5888u;
            goto label_3b5888;
        }
    }
    ctx->pc = 0x3B5844u;
    // 0x3b5844: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x3b5844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3b5848: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3B5848u;
    {
        const bool branch_taken_0x3b5848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b5848) {
            ctx->pc = 0x3B584Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5848u;
            // 0x3b584c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5874u;
            goto label_3b5874;
        }
    }
    ctx->pc = 0x3B5850u;
    // 0x3b5850: 0x28620019  slti        $v0, $v1, 0x19
    ctx->pc = 0x3b5850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x3b5854: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3B5854u;
    {
        const bool branch_taken_0x3b5854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5854u;
        // 0x3b5858: 0x24e30008  addiu       $v1, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5854) {
            ctx->pc = 0x3B589Cu;
            goto label_3b589c;
        }
    }
    ctx->pc = 0x3B585Cu;
    // 0x3b585c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3b585cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3b5860: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3b5860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5864: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3b5864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3b5868: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x3b5868u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x3b586c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3b586cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5870: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3b5870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3b5874:
    // 0x3b5874: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x3b5874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3b5878: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3b5878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3b587c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3b587cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3b5880: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3b5880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3b5884: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3b5884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3b5888:
    // 0x3b5888: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x3b5888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3b588c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3b588cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3b5890: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3b5890u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3b5894: 0x10ea0014  beq         $a3, $t2, . + 4 + (0x14 << 2)
    ctx->pc = 0x3B5894u;
    {
        const bool branch_taken_0x3b5894 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        ctx->pc = 0x3B5898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5894u;
        // 0x3b5898: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5894) {
            ctx->pc = 0x3B58E8u;
            goto label_3b58e8;
        }
    }
    ctx->pc = 0x3B589Cu;
label_3b589c:
    // 0x3b589c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3b589cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b58a0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x3b58a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b58a4: 0x0  nop
    ctx->pc = 0x3b58a4u;
    // NOP
label_3b58a8:
    // 0x3b58a8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x3b58a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3b58ac: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x3b58acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x3b58b0: 0x8d240008  lw          $a0, 0x8($t1)
    ctx->pc = 0x3b58b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x3b58b4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3b58b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3b58b8: 0x8d250010  lw          $a1, 0x10($t1)
    ctx->pc = 0x3b58b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x3b58bc: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x3b58bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x3b58c0: 0x8d260018  lw          $a2, 0x18($t1)
    ctx->pc = 0x3b58c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x3b58c4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3b58c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3b58c8: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x3b58c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x3b58cc: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x3b58ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x3b58d0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3b58d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3b58d4: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x3b58d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
    // 0x3b58d8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3b58d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3b58dc: 0xad03001c  sw          $v1, 0x1C($t0)
    ctx->pc = 0x3b58dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 3));
    // 0x3b58e0: 0x14eafff1  bne         $a3, $t2, . + 4 + (-0xF << 2)
    ctx->pc = 0x3B58E0u;
    {
        const bool branch_taken_0x3b58e0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x3B58E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B58E0u;
        // 0x3b58e4: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b58e0) {
            ctx->pc = 0x3B58A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b58a8;
        }
    }
    ctx->pc = 0x3B58E8u;
label_3b58e8:
    // 0x3b58e8: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x3b58e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b58ec: 0xec102b  sltu        $v0, $a3, $t4
    ctx->pc = 0x3b58ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x3b58f0: 0x5040009e  beql        $v0, $zero, . + 4 + (0x9E << 2)
    ctx->pc = 0x3B58F0u;
    {
        const bool branch_taken_0x3b58f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b58f0) {
            ctx->pc = 0x3B58F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B58F0u;
            // 0x3b58f4: 0xae6000bc  sw          $zero, 0xBC($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5B6Cu;
            goto label_3b5b6c;
        }
    }
    ctx->pc = 0x3B58F8u;
    // 0x3b58f8: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x3b58f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b58fc: 0x24e60008  addiu       $a2, $a3, 0x8
    ctx->pc = 0x3b58fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_3b5900:
    // 0x3b5900: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x3b5900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3b5904: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x3B5904u;
    {
        const bool branch_taken_0x3b5904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5904u;
        // 0x3b5908: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5904) {
            ctx->pc = 0x3B5B58u;
            goto label_3b5b58;
        }
    }
    ctx->pc = 0x3B590Cu;
    // 0x3b590c: 0x1481823  subu        $v1, $t2, $t0
    ctx->pc = 0x3b590cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x3b5910: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x3b5910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5914: 0x10a102a  slt         $v0, $t0, $t2
    ctx->pc = 0x3b5914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3b5918: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3B5918u;
    {
        const bool branch_taken_0x3b5918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5918u;
        // 0x3b591c: 0x3063001f  andi        $v1, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5918) {
            ctx->pc = 0x3B59E4u;
            goto label_3b59e4;
        }
    }
    ctx->pc = 0x3B5920u;
    // 0x3b5920: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x3B5920u;
    {
        const bool branch_taken_0x3b5920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5920u;
        // 0x3b5924: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5920) {
            ctx->pc = 0x3B5A34u;
            goto label_3b5a34;
        }
    }
    ctx->pc = 0x3B5928u;
    // 0x3b5928: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x3B5928u;
    {
        const bool branch_taken_0x3b5928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b5928) {
            ctx->pc = 0x3B592Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5928u;
            // 0x3b592c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B59E8u;
            goto label_3b59e8;
        }
    }
    ctx->pc = 0x3B5930u;
    // 0x3b5930: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x3b5930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3b5934: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3B5934u;
    {
        const bool branch_taken_0x3b5934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b5934) {
            ctx->pc = 0x3B5938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5934u;
            // 0x3b5938: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B599Cu;
            goto label_3b599c;
        }
    }
    ctx->pc = 0x3B593Cu;
    // 0x3b593c: 0x28620019  slti        $v0, $v1, 0x19
    ctx->pc = 0x3b593cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x3b5940: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3B5940u;
    {
        const bool branch_taken_0x3b5940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5940u;
        // 0x3b5944: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5940) {
            ctx->pc = 0x3B5A38u;
            goto label_3b5a38;
        }
    }
    ctx->pc = 0x3B5948u;
    // 0x3b5948: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3b5948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3b594c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x3b594cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3b5950: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3b5950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b5954: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3B5954u;
    {
        const bool branch_taken_0x3b5954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5954u;
        // 0x3b5958: 0x24e20010  addiu       $v0, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5954) {
            ctx->pc = 0x3B5990u;
            goto label_3b5990;
        }
    }
    ctx->pc = 0x3B595Cu;
    // 0x3b595c: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x3b595cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3b5960: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x3b5960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3b5964: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x3b5964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5968: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x3b5968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b596c: 0x68eb000f  ldl         $t3, 0xF($a3)
    ctx->pc = 0x3b596cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x3b5970: 0x6ceb0008  ldr         $t3, 0x8($a3)
    ctx->pc = 0x3b5970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x3b5974: 0xb0eb0007  sdl         $t3, 0x7($a3)
    ctx->pc = 0x3b5974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5978: 0xb4eb0000  sdr         $t3, 0x0($a3)
    ctx->pc = 0x3b5978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b597c: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x3b597cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3b5980: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x3b5980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3b5984: 0xb0e4000f  sdl         $a0, 0xF($a3)
    ctx->pc = 0x3b5984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5988: 0xb4e40008  sdr         $a0, 0x8($a3)
    ctx->pc = 0x3b5988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b598c: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x3b598cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_3b5990:
    // 0x3b5990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b5990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5994: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3b5994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5998: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3b5998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3b599c:
    // 0x3b599c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3b599cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3b59a0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3b59a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b59a4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3B59A4u;
    {
        const bool branch_taken_0x3b59a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b59a4) {
            ctx->pc = 0x3B59A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B59A4u;
            // 0x3b59a8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B59E0u;
            goto label_3b59e0;
        }
    }
    ctx->pc = 0x3B59ACu;
    // 0x3b59ac: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x3b59acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3b59b0: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x3b59b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3b59b4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x3b59b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b59b8: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x3b59b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b59bc: 0x688c0007  ldl         $t4, 0x7($a0)
    ctx->pc = 0x3b59bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b59c0: 0x6c8c0000  ldr         $t4, 0x0($a0)
    ctx->pc = 0x3b59c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b59c4: 0xb0ec0007  sdl         $t4, 0x7($a3)
    ctx->pc = 0x3b59c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b59c8: 0xb4ec0000  sdr         $t4, 0x0($a3)
    ctx->pc = 0x3b59c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b59cc: 0x6bab0007  ldl         $t3, 0x7($sp)
    ctx->pc = 0x3b59ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x3b59d0: 0x6fab0000  ldr         $t3, 0x0($sp)
    ctx->pc = 0x3b59d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x3b59d4: 0xb08b0007  sdl         $t3, 0x7($a0)
    ctx->pc = 0x3b59d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b59d8: 0xb48b0000  sdr         $t3, 0x0($a0)
    ctx->pc = 0x3b59d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b59dc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3b59dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3b59e0:
    // 0x3b59e0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3b59e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_3b59e4:
    // 0x3b59e4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3b59e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3b59e8:
    // 0x3b59e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3b59e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3b59ec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3b59ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b59f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3B59F0u;
    {
        const bool branch_taken_0x3b59f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B59F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B59F0u;
        // 0x3b59f4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b59f0) {
            ctx->pc = 0x3B5A28u;
            goto label_3b5a28;
        }
    }
    ctx->pc = 0x3B59F8u;
    // 0x3b59f8: 0x68e50007  ldl         $a1, 0x7($a3)
    ctx->pc = 0x3b59f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3b59fc: 0x6ce50000  ldr         $a1, 0x0($a3)
    ctx->pc = 0x3b59fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3b5a00: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x3b5a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5a04: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x3b5a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5a08: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x3b5a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3b5a0c: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x3b5a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3b5a10: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x3b5a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5a14: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x3b5a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5a18: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x3b5a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3b5a1c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x3b5a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3b5a20: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x3b5a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5a24: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x3b5a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b5a28:
    // 0x3b5a28: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x3b5a28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3b5a2c: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x3B5A2Cu;
    {
        const bool branch_taken_0x3b5a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5A2Cu;
        // 0x3b5a30: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5a2c) {
            ctx->pc = 0x3B5B58u;
            goto label_3b5b58;
        }
    }
    ctx->pc = 0x3B5A34u;
label_3b5a34:
    // 0x3b5a34: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b5a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b5a38:
    // 0x3b5a38: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3b5a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3b5a3c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3b5a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3b5a40: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3b5a40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b5a44: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3B5A44u;
    {
        const bool branch_taken_0x3b5a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5a44) {
            ctx->pc = 0x3B5A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5A44u;
            // 0x3b5a48: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5A84u;
            goto label_3b5a84;
        }
    }
    ctx->pc = 0x3B5A4Cu;
    // 0x3b5a4c: 0x68ec0007  ldl         $t4, 0x7($a3)
    ctx->pc = 0x3b5a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b5a50: 0x6cec0000  ldr         $t4, 0x0($a3)
    ctx->pc = 0x3b5a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b5a54: 0xb3ac0007  sdl         $t4, 0x7($sp)
    ctx->pc = 0x3b5a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5a58: 0xb7ac0000  sdr         $t4, 0x0($sp)
    ctx->pc = 0x3b5a58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5a5c: 0x688c0007  ldl         $t4, 0x7($a0)
    ctx->pc = 0x3b5a5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b5a60: 0x6c8c0000  ldr         $t4, 0x0($a0)
    ctx->pc = 0x3b5a60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b5a64: 0xb0ec0007  sdl         $t4, 0x7($a3)
    ctx->pc = 0x3b5a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5a68: 0xb4ec0000  sdr         $t4, 0x0($a3)
    ctx->pc = 0x3b5a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5a6c: 0x6bac0007  ldl         $t4, 0x7($sp)
    ctx->pc = 0x3b5a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b5a70: 0x6fac0000  ldr         $t4, 0x0($sp)
    ctx->pc = 0x3b5a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b5a74: 0xb08c0007  sdl         $t4, 0x7($a0)
    ctx->pc = 0x3b5a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5a78: 0xb48c0000  sdr         $t4, 0x0($a0)
    ctx->pc = 0x3b5a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5a7c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3b5a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3b5a80: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x3b5a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3b5a84:
    // 0x3b5a84: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3b5a84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b5a88: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3B5A88u;
    {
        const bool branch_taken_0x3b5a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5a88) {
            ctx->pc = 0x3B5A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5A88u;
            // 0x3b5a8c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5AC4u;
            goto label_3b5ac4;
        }
    }
    ctx->pc = 0x3B5A90u;
    // 0x3b5a90: 0x68ec0007  ldl         $t4, 0x7($a3)
    ctx->pc = 0x3b5a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b5a94: 0x6cec0000  ldr         $t4, 0x0($a3)
    ctx->pc = 0x3b5a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b5a98: 0xb3ac0007  sdl         $t4, 0x7($sp)
    ctx->pc = 0x3b5a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5a9c: 0xb7ac0000  sdr         $t4, 0x0($sp)
    ctx->pc = 0x3b5a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5aa0: 0x688c000f  ldl         $t4, 0xF($a0)
    ctx->pc = 0x3b5aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b5aa4: 0x6c8c0008  ldr         $t4, 0x8($a0)
    ctx->pc = 0x3b5aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b5aa8: 0xb0ec0007  sdl         $t4, 0x7($a3)
    ctx->pc = 0x3b5aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5aac: 0xb4ec0000  sdr         $t4, 0x0($a3)
    ctx->pc = 0x3b5aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5ab0: 0x6bac0007  ldl         $t4, 0x7($sp)
    ctx->pc = 0x3b5ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b5ab4: 0x6fac0000  ldr         $t4, 0x0($sp)
    ctx->pc = 0x3b5ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b5ab8: 0xb08c000f  sdl         $t4, 0xF($a0)
    ctx->pc = 0x3b5ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5abc: 0xb48c0008  sdr         $t4, 0x8($a0)
    ctx->pc = 0x3b5abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5ac0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3b5ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3b5ac4:
    // 0x3b5ac4: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x3b5ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x3b5ac8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3b5ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b5acc: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3B5ACCu;
    {
        const bool branch_taken_0x3b5acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5acc) {
            ctx->pc = 0x3B5AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5ACCu;
            // 0x3b5ad0: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5B08u;
            goto label_3b5b08;
        }
    }
    ctx->pc = 0x3B5AD4u;
    // 0x3b5ad4: 0x68ec0007  ldl         $t4, 0x7($a3)
    ctx->pc = 0x3b5ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b5ad8: 0x6cec0000  ldr         $t4, 0x0($a3)
    ctx->pc = 0x3b5ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b5adc: 0xb3ac0007  sdl         $t4, 0x7($sp)
    ctx->pc = 0x3b5adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5ae0: 0xb7ac0000  sdr         $t4, 0x0($sp)
    ctx->pc = 0x3b5ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5ae4: 0x688c0017  ldl         $t4, 0x17($a0)
    ctx->pc = 0x3b5ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b5ae8: 0x6c8c0010  ldr         $t4, 0x10($a0)
    ctx->pc = 0x3b5ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b5aec: 0xb0ec0007  sdl         $t4, 0x7($a3)
    ctx->pc = 0x3b5aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5af0: 0xb4ec0000  sdr         $t4, 0x0($a3)
    ctx->pc = 0x3b5af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5af4: 0x6bac0007  ldl         $t4, 0x7($sp)
    ctx->pc = 0x3b5af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b5af8: 0x6fac0000  ldr         $t4, 0x0($sp)
    ctx->pc = 0x3b5af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b5afc: 0xb08c0017  sdl         $t4, 0x17($a0)
    ctx->pc = 0x3b5afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5b00: 0xb48c0010  sdr         $t4, 0x10($a0)
    ctx->pc = 0x3b5b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5b04: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3b5b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3b5b08:
    // 0x3b5b08: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x3b5b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x3b5b0c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3b5b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b5b10: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3B5B10u;
    {
        const bool branch_taken_0x3b5b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5B10u;
        // 0x3b5b14: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5b10) {
            ctx->pc = 0x3B5B48u;
            goto label_3b5b48;
        }
    }
    ctx->pc = 0x3B5B18u;
    // 0x3b5b18: 0x68ec0007  ldl         $t4, 0x7($a3)
    ctx->pc = 0x3b5b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b5b1c: 0x6cec0000  ldr         $t4, 0x0($a3)
    ctx->pc = 0x3b5b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b5b20: 0xb3ac0007  sdl         $t4, 0x7($sp)
    ctx->pc = 0x3b5b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5b24: 0xb7ac0000  sdr         $t4, 0x0($sp)
    ctx->pc = 0x3b5b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5b28: 0x688c001f  ldl         $t4, 0x1F($a0)
    ctx->pc = 0x3b5b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b5b2c: 0x6c8c0018  ldr         $t4, 0x18($a0)
    ctx->pc = 0x3b5b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b5b30: 0xb0ec0007  sdl         $t4, 0x7($a3)
    ctx->pc = 0x3b5b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5b34: 0xb4ec0000  sdr         $t4, 0x0($a3)
    ctx->pc = 0x3b5b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5b38: 0x6bac0007  ldl         $t4, 0x7($sp)
    ctx->pc = 0x3b5b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3b5b3c: 0x6fac0000  ldr         $t4, 0x0($sp)
    ctx->pc = 0x3b5b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3b5b40: 0xb08c001f  sdl         $t4, 0x1F($a0)
    ctx->pc = 0x3b5b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5b44: 0xb48c0018  sdr         $t4, 0x18($a0)
    ctx->pc = 0x3b5b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b5b48:
    // 0x3b5b48: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3b5b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3b5b4c: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x3b5b4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3b5b50: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x3B5B50u;
    {
        const bool branch_taken_0x3b5b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5B50u;
        // 0x3b5b54: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5b50) {
            ctx->pc = 0x3B5A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b5a38;
        }
    }
    ctx->pc = 0x3B5B58u;
label_3b5b58:
    // 0x3b5b58: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3b5b58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5b5c: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x3b5b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3b5b60: 0x5440ff67  bnel        $v0, $zero, . + 4 + (-0x99 << 2)
    ctx->pc = 0x3B5B60u;
    {
        const bool branch_taken_0x3b5b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b5b60) {
            ctx->pc = 0x3B5B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5B60u;
            // 0x3b5b64: 0x24e60008  addiu       $a2, $a3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b5900;
        }
    }
    ctx->pc = 0x3B5B68u;
label_3b5b68:
    // 0x3b5b68: 0xae6000bc  sw          $zero, 0xBC($s3)
    ctx->pc = 0x3b5b68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 0));
label_3b5b6c:
    // 0x3b5b6c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3b5b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b5b70:
    // 0x3b5b70: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3b5b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b5b74: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3b5b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b5b78: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3b5b78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b5b7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b5b7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b5b80: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3b5b80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b5b84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b5b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b5b88: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5B88u;
        // 0x3b5b8c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5B90u;
}
