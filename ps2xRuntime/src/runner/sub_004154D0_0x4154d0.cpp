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

// Function: sub_004154D0
// Address: 0x4154d0 - 0x4157c0
void sub_004154D0_0x4154d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004154D0_0x4154d0");
#endif

    switch (ctx->pc) {
        case 0x415518u: goto label_415518;
        case 0x415534u: goto label_415534;
        case 0x415564u: goto label_415564;
        case 0x415590u: goto label_415590;
        case 0x415598u: goto label_415598;
        case 0x4155b4u: goto label_4155b4;
        case 0x4155d0u: goto label_4155d0;
        case 0x4156c0u: goto label_4156c0;
        case 0x415704u: goto label_415704;
        case 0x41573cu: goto label_41573c;
        case 0x415768u: goto label_415768;
        case 0x415780u: goto label_415780;
        default: break;
    }

    ctx->pc = 0x4154d0u;

    // 0x4154d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4154d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x4154d4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x4154d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x4154d8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x4154d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x4154dc: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x4154dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x4154e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4154e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4154e4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x4154e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x4154e8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x4154e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x4154ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4154ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4154f0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x4154f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x4154f4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4154f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4154f8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4154f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x4154fc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4154fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x415500: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x415500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x415504: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x415504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x415508: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x415508u;
    {
        const bool branch_taken_0x415508 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x41550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415508u;
        // 0x41550c: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415508) {
            ctx->pc = 0x415548u;
            goto label_415548;
        }
    }
    ctx->pc = 0x415510u;
    // 0x415510: 0x3c15005e  lui         $s5, 0x5E
    ctx->pc = 0x415510u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)94 << 16));
    // 0x415514: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x415514u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415518:
    // 0x415518: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x415518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x41551c: 0x26a4c9c8  addiu       $a0, $s5, -0x3638
    ctx->pc = 0x41551cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953416));
    // 0x415520: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x415520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x415524: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x415524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x415528: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x415528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x41552c: 0xc104aec  jal         func_412BB0
    ctx->pc = 0x41552Cu;
    SET_GPR_U32(ctx, 31, 0x415534u);
    ctx->pc = 0x415530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41552Cu;
    // 0x415530: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BB0u, 0x41552Cu, 0x415534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415534u;
label_415534:
    // 0x415534: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x415534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x415538: 0x2623000c  addiu       $v1, $s1, 0xC
    ctx->pc = 0x415538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x41553c: 0x204202a  slt         $a0, $s0, $a0
    ctx->pc = 0x41553cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x415540: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x415540u;
    {
        const bool branch_taken_0x415540 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x415544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415540u;
        // 0x415544: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415540) {
            ctx->pc = 0x415518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415518;
        }
    }
    ctx->pc = 0x415548u;
label_415548:
    // 0x415548: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x415548u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x41554c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x41554cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415550: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x415550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415554: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x415554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x415558: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x415558u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x41555c: 0xc103404  jal         func_40D010
    ctx->pc = 0x41555Cu;
    SET_GPR_U32(ctx, 31, 0x415564u);
    ctx->pc = 0x415560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41555Cu;
    // 0x415560: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x41555Cu, 0x415564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415564u;
label_415564:
    // 0x415564: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x415564u;
    {
        const bool branch_taken_0x415564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x415568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415564u;
        // 0x415568: 0x24020038  addiu       $v0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415564) {
            ctx->pc = 0x415598u;
            goto label_415598;
        }
    }
    ctx->pc = 0x41556Cu;
    // 0x41556c: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x41556cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x415570: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x415570u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x415574: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x415574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415578: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x415578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x41557c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x41557cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x415580: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x415580u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x415584: 0x2408002d  addiu       $t0, $zero, 0x2D
    ctx->pc = 0x415584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x415588: 0xc103404  jal         func_40D010
    ctx->pc = 0x415588u;
    SET_GPR_U32(ctx, 31, 0x415590u);
    ctx->pc = 0x41558Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415588u;
    // 0x41558c: 0x34c60004  ori         $a2, $a2, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x415588u, 0x415590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415590u;
label_415590:
    // 0x415590: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x415590u;
    {
        const bool branch_taken_0x415590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x415590) {
            ctx->pc = 0x415594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x415590u;
            // 0x415594: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4155A0u;
            goto label_4155a0;
        }
    }
    ctx->pc = 0x415598u;
label_415598:
    // 0x415598: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x415598u;
    {
        const bool branch_taken_0x415598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415598u;
        // 0x41559c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415598) {
            ctx->pc = 0x41579Cu;
            goto label_41579c;
        }
    }
    ctx->pc = 0x4155A0u;
label_4155a0:
    // 0x4155a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4155a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4155a4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4155a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4155a8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4155a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4155ac: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x4155ACu;
    SET_GPR_U32(ctx, 31, 0x4155B4u);
    ctx->pc = 0x4155B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4155ACu;
    // 0x4155b0: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x4155ACu, 0x4155B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4155B4u;
label_4155b4:
    // 0x4155b4: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4155B4u;
    {
        const bool branch_taken_0x4155b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4155B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4155B4u;
        // 0x4155b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4155b4) {
            ctx->pc = 0x415598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415598;
        }
    }
    ctx->pc = 0x4155BCu;
    // 0x4155bc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4155bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4155c0: 0x18800065  blez        $a0, . + 4 + (0x65 << 2)
    ctx->pc = 0x4155C0u;
    {
        const bool branch_taken_0x4155c0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x4155C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4155C0u;
        // 0x4155c4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4155c0) {
            ctx->pc = 0x415758u;
            goto label_415758;
        }
    }
    ctx->pc = 0x4155C8u;
    // 0x4155c8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x4155c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4155cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4155ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4155d0:
    // 0x4155d0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4155d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4155d4: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x4155d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x4155d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4155d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4155dc: 0x68620017  ldl         $v0, 0x17($v1)
    ctx->pc = 0x4155dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4155e0: 0x6c620010  ldr         $v0, 0x10($v1)
    ctx->pc = 0x4155e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4155e4: 0x8c660018  lw          $a2, 0x18($v1)
    ctx->pc = 0x4155e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x4155e8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x4155e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4155ec: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x4155ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4155f0: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x4155f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x4155f4: 0x68620027  ldl         $v0, 0x27($v1)
    ctx->pc = 0x4155f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4155f8: 0x6c620020  ldr         $v0, 0x20($v1)
    ctx->pc = 0x4155f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4155fc: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x4155fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x415600: 0xb3a20013  sdl         $v0, 0x13($sp)
    ctx->pc = 0x415600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x415604: 0xb7a2000c  sdr         $v0, 0xC($sp)
    ctx->pc = 0x415604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x415608: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x415608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x41560c: 0x68620037  ldl         $v0, 0x37($v1)
    ctx->pc = 0x41560cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x415610: 0x6c620030  ldr         $v0, 0x30($v1)
    ctx->pc = 0x415610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x415614: 0x8c660038  lw          $a2, 0x38($v1)
    ctx->pc = 0x415614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x415618: 0xb3a2001f  sdl         $v0, 0x1F($sp)
    ctx->pc = 0x415618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x41561c: 0xb7a20018  sdr         $v0, 0x18($sp)
    ctx->pc = 0x41561cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x415620: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x415620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x415624: 0x68620047  ldl         $v0, 0x47($v1)
    ctx->pc = 0x415624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x415628: 0x6c620040  ldr         $v0, 0x40($v1)
    ctx->pc = 0x415628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x41562c: 0x8c660048  lw          $a2, 0x48($v1)
    ctx->pc = 0x41562cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x415630: 0xb3a2002b  sdl         $v0, 0x2B($sp)
    ctx->pc = 0x415630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x415634: 0xb7a20024  sdr         $v0, 0x24($sp)
    ctx->pc = 0x415634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x415638: 0xafa6002c  sw          $a2, 0x2C($sp)
    ctx->pc = 0x415638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 6));
    // 0x41563c: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x41563cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x415640: 0x10c00037  beqz        $a2, . + 4 + (0x37 << 2)
    ctx->pc = 0x415640u;
    {
        const bool branch_taken_0x415640 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x415644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415640u;
        // 0x415644: 0x24690010  addiu       $t1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415640) {
            ctx->pc = 0x415720u;
            goto label_415720;
        }
    }
    ctx->pc = 0x415648u;
    // 0x415648: 0x1880002d  blez        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x415648u;
    {
        const bool branch_taken_0x415648 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x41564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415648u;
        // 0x41564c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415648) {
            ctx->pc = 0x415700u;
            goto label_415700;
        }
    }
    ctx->pc = 0x415650u;
    // 0x415650: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x415650u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x415654: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x415654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415658: 0x19000010  blez        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x415658u;
    {
        const bool branch_taken_0x415658 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x41565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415658u;
        // 0x41565c: 0x31040003  andi        $a0, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x415658) {
            ctx->pc = 0x41569Cu;
            goto label_41569c;
        }
    }
    ctx->pc = 0x415660u;
    // 0x415660: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x415660u;
    {
        const bool branch_taken_0x415660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x415664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415660u;
        // 0x415664: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x415660) {
            ctx->pc = 0x4156B8u;
            goto label_4156b8;
        }
    }
    ctx->pc = 0x415668u;
    // 0x415668: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x415668u;
    {
        const bool branch_taken_0x415668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x415668) {
            ctx->pc = 0x41566Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x415668u;
            // 0x41566c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4156A0u;
            goto label_4156a0;
        }
    }
    ctx->pc = 0x415670u;
    // 0x415670: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x415670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x415674: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x415674u;
    {
        const bool branch_taken_0x415674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x415674) {
            ctx->pc = 0x415678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x415674u;
            // 0x415678: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x415690u;
            goto label_415690;
        }
    }
    ctx->pc = 0x41567Cu;
    // 0x41567c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x41567cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x415680: 0x10460024  beq         $v0, $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x415680u;
    {
        const bool branch_taken_0x415680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x415684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415680u;
        // 0x415684: 0x24e50004  addiu       $a1, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415680) {
            ctx->pc = 0x415714u;
            goto label_415714;
        }
    }
    ctx->pc = 0x415688u;
    // 0x415688: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x415688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41568c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x41568cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_415690:
    // 0x415690: 0x10460020  beq         $v0, $a2, . + 4 + (0x20 << 2)
    ctx->pc = 0x415690u;
    {
        const bool branch_taken_0x415690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x415694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415690u;
        // 0x415694: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415690) {
            ctx->pc = 0x415714u;
            goto label_415714;
        }
    }
    ctx->pc = 0x415698u;
    // 0x415698: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x415698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_41569c:
    // 0x41569c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x41569cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4156a0:
    // 0x4156a0: 0x5046001d  beql        $v0, $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x4156A0u;
    {
        const bool branch_taken_0x4156a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x4156a0) {
            ctx->pc = 0x4156A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4156A0u;
            // 0x4156a4: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x415718u;
            goto label_415718;
        }
    }
    ctx->pc = 0x4156A8u;
    // 0x4156a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4156a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4156ac: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x4156acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x4156b0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4156B0u;
    {
        const bool branch_taken_0x4156b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4156B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4156B0u;
        // 0x4156b4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4156b0) {
            ctx->pc = 0x415700u;
            goto label_415700;
        }
    }
    ctx->pc = 0x4156B8u;
label_4156b8:
    // 0x4156b8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4156b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4156bc: 0x0  nop
    ctx->pc = 0x4156bcu;
    // NOP
label_4156c0:
    // 0x4156c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4156c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4156c4: 0x50460014  beql        $v0, $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x4156C4u;
    {
        const bool branch_taken_0x4156c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x4156c4) {
            ctx->pc = 0x4156C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4156C4u;
            // 0x4156c8: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x415718u;
            goto label_415718;
        }
    }
    ctx->pc = 0x4156CCu;
    // 0x4156cc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4156ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4156d0: 0x10460010  beq         $v0, $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x4156D0u;
    {
        const bool branch_taken_0x4156d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x4156D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4156D0u;
        // 0x4156d4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4156d0) {
            ctx->pc = 0x415714u;
            goto label_415714;
        }
    }
    ctx->pc = 0x4156D8u;
    // 0x4156d8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4156d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4156dc: 0x1046000d  beq         $v0, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x4156DCu;
    {
        const bool branch_taken_0x4156dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x4156E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4156DCu;
        // 0x4156e0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4156dc) {
            ctx->pc = 0x415714u;
            goto label_415714;
        }
    }
    ctx->pc = 0x4156E4u;
    // 0x4156e4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4156e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4156e8: 0x1046000a  beq         $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x4156E8u;
    {
        const bool branch_taken_0x4156e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x4156ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4156E8u;
        // 0x4156ec: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4156e8) {
            ctx->pc = 0x415714u;
            goto label_415714;
        }
    }
    ctx->pc = 0x4156F0u;
    // 0x4156f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4156f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4156f4: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x4156f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x4156f8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x4156F8u;
    {
        const bool branch_taken_0x4156f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4156FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4156F8u;
        // 0x4156fc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4156f8) {
            ctx->pc = 0x4156C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4156c0;
        }
    }
    ctx->pc = 0x415700u;
label_415700:
    // 0x415700: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x415700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415704:
    // 0x415704: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x415704u;
    {
        const bool branch_taken_0x415704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x415704) {
            ctx->pc = 0x415708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x415704u;
            // 0x415708: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x415728u;
            goto label_415728;
        }
    }
    ctx->pc = 0x41570Cu;
    // 0x41570c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x41570Cu;
    {
        const bool branch_taken_0x41570c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x415710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41570Cu;
        // 0x415710: 0xafb30030  sw          $s3, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41570c) {
            ctx->pc = 0x415724u;
            goto label_415724;
        }
    }
    ctx->pc = 0x415714u;
label_415714:
    // 0x415714: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x415714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_415718:
    // 0x415718: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x415718u;
    {
        const bool branch_taken_0x415718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415718u;
        // 0x41571c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415718) {
            ctx->pc = 0x415704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415704;
        }
    }
    ctx->pc = 0x415720u;
label_415720:
    // 0x415720: 0xafb30030  sw          $s3, 0x30($sp)
    ctx->pc = 0x415720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 19));
label_415724:
    // 0x415724: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x415724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_415728:
    // 0x415728: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x415728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41572c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x41572cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415730: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x415730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x415734: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x415734u;
    SET_GPR_U32(ctx, 31, 0x41573Cu);
    ctx->pc = 0x415738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415734u;
    // 0x415738: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x415734u, 0x41573Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41573Cu;
label_41573c:
    // 0x41573c: 0x1040ff96  beqz        $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x41573Cu;
    {
        const bool branch_taken_0x41573c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x415740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41573Cu;
        // 0x415740: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41573c) {
            ctx->pc = 0x415598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415598;
        }
    }
    ctx->pc = 0x415744u;
    // 0x415744: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x415744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x415748: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x415748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x41574c: 0x224102a  slt         $v0, $s1, $a0
    ctx->pc = 0x41574cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x415750: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x415750u;
    {
        const bool branch_taken_0x415750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x415754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415750u;
        // 0x415754: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415750) {
            ctx->pc = 0x4155D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4155d0;
        }
    }
    ctx->pc = 0x415758u;
label_415758:
    // 0x415758: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x415758u;
    {
        const bool branch_taken_0x415758 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x41575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415758u;
        // 0x41575c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415758) {
            ctx->pc = 0x415798u;
            goto label_415798;
        }
    }
    ctx->pc = 0x415760u;
    // 0x415760: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x415760u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
    // 0x415764: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x415764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415768:
    // 0x415768: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x415768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x41576c: 0x2664c9c8  addiu       $a0, $s3, -0x3638
    ctx->pc = 0x41576cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294953416));
    // 0x415770: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x415770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415774: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x415774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x415778: 0xc104a72  jal         func_4129C8
    ctx->pc = 0x415778u;
    SET_GPR_U32(ctx, 31, 0x415780u);
    ctx->pc = 0x41577Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415778u;
    // 0x41577c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4129C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4129C8u, 0x415778u, 0x415780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415780u;
label_415780:
    // 0x415780: 0x1040ff85  beqz        $v0, . + 4 + (-0x7B << 2)
    ctx->pc = 0x415780u;
    {
        const bool branch_taken_0x415780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x415784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415780u;
        // 0x415784: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415780) {
            ctx->pc = 0x415598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415598;
        }
    }
    ctx->pc = 0x415788u;
    // 0x415788: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x415788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x41578c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x41578cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x415790: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x415790u;
    {
        const bool branch_taken_0x415790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x415794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415790u;
        // 0x415794: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415790) {
            ctx->pc = 0x415768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415768;
        }
    }
    ctx->pc = 0x415798u;
label_415798:
    // 0x415798: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x415798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41579c:
    // 0x41579c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x41579cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4157a0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x4157a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4157a4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x4157a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4157a8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x4157a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4157ac: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x4157acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4157b0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4157b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4157b4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4157b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4157b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4157B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4157BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4157B8u;
        // 0x4157bc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4157B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4157C0u;
}
