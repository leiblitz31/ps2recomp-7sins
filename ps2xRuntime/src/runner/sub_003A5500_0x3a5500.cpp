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

// Function: sub_003A5500
// Address: 0x3a5500 - 0x3a5628
void sub_003A5500_0x3a5500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5500_0x3a5500");
#endif

    switch (ctx->pc) {
        case 0x3a5550u: goto label_3a5550;
        case 0x3a557cu: goto label_3a557c;
        case 0x3a55e4u: goto label_3a55e4;
        default: break;
    }

    ctx->pc = 0x3a5500u;

    // 0x3a5500: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a5500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3a5504: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3a5504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3a5508: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3a5508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3a550c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a550cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5510: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a5510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3a5514: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a5514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5518: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3a5518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3a551c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3a551cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5520: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a5520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a5524: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A5524u;
    {
        const bool branch_taken_0x3a5524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5524u;
        // 0x3a5528: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5524) {
            ctx->pc = 0x3A556Cu;
            goto label_3a556c;
        }
    }
    ctx->pc = 0x3A552Cu;
    // 0x3a552c: 0x1a200037  blez        $s1, . + 4 + (0x37 << 2)
    ctx->pc = 0x3A552Cu;
    {
        const bool branch_taken_0x3a552c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3A5530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A552Cu;
        // 0x3a5530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a552c) {
            ctx->pc = 0x3A560Cu;
            goto label_3a560c;
        }
    }
    ctx->pc = 0x3A5534u;
    // 0x3a5534: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x3a5534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a5538: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3A5538u;
    {
        const bool branch_taken_0x3a5538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5538u;
        // 0x3a553c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5538) {
            ctx->pc = 0x3A560Cu;
            goto label_3a560c;
        }
    }
    ctx->pc = 0x3A5540u;
    // 0x3a5540: 0x5a600033  blezl       $s3, . + 4 + (0x33 << 2)
    ctx->pc = 0x3A5540u;
    {
        const bool branch_taken_0x3a5540 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x3a5540) {
            ctx->pc = 0x3A5544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5540u;
            // 0x3a5544: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5610u;
            goto label_3a5610;
        }
    }
    ctx->pc = 0x3A5548u;
    // 0x3a5548: 0xc112582  jal         func_449608
    ctx->pc = 0x3A5548u;
    SET_GPR_U32(ctx, 31, 0x3A5550u);
    ctx->pc = 0x3A554Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5548u;
    // 0x3a554c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449608u, 0x3A5548u, 0x3A5550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5550u;
label_3a5550:
    // 0x3a5550: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a5550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5554: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A5554u;
    {
        const bool branch_taken_0x3a5554 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5554) {
            ctx->pc = 0x3A5558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5554u;
            // 0x3a5558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5574u;
            goto label_3a5574;
        }
    }
    ctx->pc = 0x3A555Cu;
    // 0x3a555c: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x3a555cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x3a5560: 0x30420013  andi        $v0, $v0, 0x13
    ctx->pc = 0x3a5560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)19);
    // 0x3a5564: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3A5564u;
    {
        const bool branch_taken_0x3a5564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5564u;
        // 0x3a5568: 0x111840  sll         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5564) {
            ctx->pc = 0x3A55ECu;
            goto label_3a55ec;
        }
    }
    ctx->pc = 0x3A556Cu;
label_3a556c:
    // 0x3a556c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3A556Cu;
    {
        const bool branch_taken_0x3a556c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A556Cu;
        // 0x3a5570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a556c) {
            ctx->pc = 0x3A560Cu;
            goto label_3a560c;
        }
    }
    ctx->pc = 0x3A5574u;
label_3a5574:
    // 0x3a5574: 0xc112584  jal         func_449610
    ctx->pc = 0x3A5574u;
    SET_GPR_U32(ctx, 31, 0x3A557Cu);
    ctx->pc = 0x3A5578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5574u;
    // 0x3a5578: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449610u, 0x3A5574u, 0x3A557Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A557Cu;
label_3a557c:
    // 0x3a557c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a557cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5580: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A5580u;
    {
        const bool branch_taken_0x3a5580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5580u;
        // 0x3a5584: 0x24030114  addiu       $v1, $zero, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5580) {
            ctx->pc = 0x3A55D0u;
            goto label_3a55d0;
        }
    }
    ctx->pc = 0x3A5588u;
    // 0x3a5588: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3a5588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3a558c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3a558cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3a5590: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x3a5590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x3a5594: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3a5594u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x3a5598: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3a5598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x3a559c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x3a559cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x3a55a0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x3a55a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x3a55a4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x3a55a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x3a55a8: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x3a55a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x3a55ac: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x3a55acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x3a55b0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x3a55b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x3a55b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a55b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a55b8: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x3a55b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x3a55bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a55bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a55c0: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x3a55c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x3a55c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A55C4u;
    {
        const bool branch_taken_0x3a55c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A55C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A55C4u;
        // 0x3a55c8: 0xac830034  sw          $v1, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a55c4) {
            ctx->pc = 0x3A55D4u;
            goto label_3a55d4;
        }
    }
    ctx->pc = 0x3A55CCu;
    // 0x3a55cc: 0x0  nop
    ctx->pc = 0x3a55ccu;
    // NOP
label_3a55d0:
    // 0x3a55d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a55d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a55d4:
    // 0x3a55d4: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x3A55D4u;
    {
        const bool branch_taken_0x3a55d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A55D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A55D4u;
        // 0x3a55d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a55d4) {
            ctx->pc = 0x3A560Cu;
            goto label_3a560c;
        }
    }
    ctx->pc = 0x3A55DCu;
    // 0x3a55dc: 0xc112582  jal         func_449608
    ctx->pc = 0x3A55DCu;
    SET_GPR_U32(ctx, 31, 0x3A55E4u);
    ctx->pc = 0x3A55E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A55DCu;
    // 0x3a55e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449608u, 0x3A55DCu, 0x3A55E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A55E4u;
label_3a55e4:
    // 0x3a55e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a55e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a55e8: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x3a55e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_3a55ec:
    // 0x3a55ec: 0x2512018  mult        $a0, $s2, $s1
    ctx->pc = 0x3a55ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3a55f0: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x3a55f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3a55f4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3a55f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3a55f8: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x3a55f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
    // 0x3a55fc: 0xacb10038  sw          $s1, 0x38($a1)
    ctx->pc = 0x3a55fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 17));
    // 0x3a5600: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a5600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5604: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x3a5604u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
    // 0x3a5608: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x3a5608u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
label_3a560c:
    // 0x3a560c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3a560cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a5610:
    // 0x3a5610: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3a5610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a5614: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a5614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a5618: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3a5618u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a561c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a561cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a5620: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5620u;
        // 0x3a5624: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5628u;
}
