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

// Function: sub_003BA4B0
// Address: 0x3ba4b0 - 0x3ba720
void sub_003BA4B0_0x3ba4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BA4B0_0x3ba4b0");
#endif

    switch (ctx->pc) {
        case 0x3ba4ecu: goto label_3ba4ec;
        case 0x3ba4fcu: goto label_3ba4fc;
        case 0x3ba51cu: goto label_3ba51c;
        case 0x3ba564u: goto label_3ba564;
        case 0x3ba584u: goto label_3ba584;
        case 0x3ba590u: goto label_3ba590;
        case 0x3ba5acu: goto label_3ba5ac;
        case 0x3ba5e0u: goto label_3ba5e0;
        case 0x3ba604u: goto label_3ba604;
        case 0x3ba624u: goto label_3ba624;
        case 0x3ba630u: goto label_3ba630;
        case 0x3ba64cu: goto label_3ba64c;
        case 0x3ba67cu: goto label_3ba67c;
        case 0x3ba69cu: goto label_3ba69c;
        case 0x3ba6a8u: goto label_3ba6a8;
        case 0x3ba6c4u: goto label_3ba6c4;
        default: break;
    }

    ctx->pc = 0x3ba4b0u;

    // 0x3ba4b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3ba4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3ba4b4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3ba4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x3ba4b8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3ba4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x3ba4bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ba4bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba4c0: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3ba4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x3ba4c4: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x3ba4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x3ba4c8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3ba4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x3ba4cc: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3ba4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x3ba4d0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3ba4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x3ba4d4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3ba4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3ba4d8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3ba4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x3ba4dc: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3ba4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x3ba4e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ba4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3ba4e4: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3BA4E4u;
    SET_GPR_U32(ctx, 31, 0x3BA4ECu);
    ctx->pc = 0x3BA4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA4E4u;
    // 0x3ba4e8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3BA4E4u, 0x3BA4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA4ECu;
label_3ba4ec:
    // 0x3ba4ec: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3ba4ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba4f0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x3ba4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3ba4f4: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3BA4F4u;
    SET_GPR_U32(ctx, 31, 0x3BA4FCu);
    ctx->pc = 0x3BA4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA4F4u;
    // 0x3ba4f8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3BA4F4u, 0x3BA4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA4FCu;
label_3ba4fc:
    // 0x3ba4fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ba4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ba500: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3ba500u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba504: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3ba504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3ba508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ba508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba50c: 0xafbe0004  sw          $fp, 0x4($sp)
    ctx->pc = 0x3ba50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 30));
    // 0x3ba510: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ba510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba514: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3BA514u;
    SET_GPR_U32(ctx, 31, 0x3BA51Cu);
    ctx->pc = 0x3BA518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA514u;
    // 0x3ba518: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3BA514u, 0x3BA51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA51Cu;
label_3ba51c:
    // 0x3ba51c: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x3BA51Cu;
    {
        const bool branch_taken_0x3ba51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA51Cu;
        // 0x3ba520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba51c) {
            ctx->pc = 0x3BA6F0u;
            goto label_3ba6f0;
        }
    }
    ctx->pc = 0x3BA524u;
    // 0x3ba524: 0x1bc00071  blez        $fp, . + 4 + (0x71 << 2)
    ctx->pc = 0x3BA524u;
    {
        const bool branch_taken_0x3ba524 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x3BA528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA524u;
        // 0x3ba528: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba524) {
            ctx->pc = 0x3BA6ECu;
            goto label_3ba6ec;
        }
    }
    ctx->pc = 0x3BA52Cu;
    // 0x3ba52c: 0x26710008  addiu       $s1, $s3, 0x8
    ctx->pc = 0x3ba52cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3ba530: 0x1bc00003  blez        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BA530u;
    {
        const bool branch_taken_0x3ba530 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x3BA534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA530u;
        // 0x3ba534: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba530) {
            ctx->pc = 0x3BA540u;
            goto label_3ba540;
        }
    }
    ctx->pc = 0x3BA538u;
    // 0x3ba538: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3BA538u;
    {
        const bool branch_taken_0x3ba538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA538u;
        // 0x3ba53c: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba538) {
            ctx->pc = 0x3BA5CCu;
            goto label_3ba5cc;
        }
    }
    ctx->pc = 0x3BA540u;
label_3ba540:
    // 0x3ba540: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x3ba540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x3ba544: 0x8e22fffc  lw          $v0, -0x4($s1)
    ctx->pc = 0x3ba544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x3ba548: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3BA548u;
    {
        const bool branch_taken_0x3ba548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA548u;
        // 0x3ba54c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba548) {
            ctx->pc = 0x3BA554u;
            goto label_3ba554;
        }
    }
    ctx->pc = 0x3BA550u;
    // 0x3ba550: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3ba550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_3ba554:
    // 0x3ba554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ba554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba558: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3ba558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ba55c: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3BA55Cu;
    SET_GPR_U32(ctx, 31, 0x3BA564u);
    ctx->pc = 0x3BA560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA55Cu;
    // 0x3ba560: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3BA55Cu, 0x3BA564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA564u;
label_3ba564:
    // 0x3ba564: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x3BA564u;
    {
        const bool branch_taken_0x3ba564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA564u;
        // 0x3ba568: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba564) {
            ctx->pc = 0x3BA6F0u;
            goto label_3ba6f0;
        }
    }
    ctx->pc = 0x3BA56Cu;
    // 0x3ba56c: 0x8e22fffc  lw          $v0, -0x4($s1)
    ctx->pc = 0x3ba56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x3ba570: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3BA570u;
    {
        const bool branch_taken_0x3ba570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA570u;
        // 0x3ba574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba570) {
            ctx->pc = 0x3BA5B4u;
            goto label_3ba5b4;
        }
    }
    ctx->pc = 0x3BA578u;
    // 0x3ba578: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ba578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba57c: 0xc103440  jal         func_40D100
    ctx->pc = 0x3BA57Cu;
    SET_GPR_U32(ctx, 31, 0x3BA584u);
    ctx->pc = 0x3BA580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA57Cu;
    // 0x3ba580: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3BA57Cu, 0x3BA584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA584u;
label_3ba584:
    // 0x3ba584: 0x8e24fffc  lw          $a0, -0x4($s1)
    ctx->pc = 0x3ba584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x3ba588: 0xc0ec322  jal         func_3B0C88
    ctx->pc = 0x3BA588u;
    SET_GPR_U32(ctx, 31, 0x3BA590u);
    ctx->pc = 0x3BA58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA588u;
    // 0x3ba58c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0C88u, 0x3BA588u, 0x3BA590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA590u;
label_3ba590:
    // 0x3ba590: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x3BA590u;
    {
        const bool branch_taken_0x3ba590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA590u;
        // 0x3ba594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba590) {
            ctx->pc = 0x3BA6F0u;
            goto label_3ba6f0;
        }
    }
    ctx->pc = 0x3BA598u;
    // 0x3ba598: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x3ba598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3ba59c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BA59Cu;
    {
        const bool branch_taken_0x3ba59c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba59c) {
            ctx->pc = 0x3BA5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA59Cu;
            // 0x3ba5a0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA5B8u;
            goto label_3ba5b8;
        }
    }
    ctx->pc = 0x3BA5A4u;
    // 0x3ba5a4: 0xc0e9cd8  jal         func_3A7360
    ctx->pc = 0x3BA5A4u;
    SET_GPR_U32(ctx, 31, 0x3BA5ACu);
    ctx->pc = 0x3BA5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA5A4u;
    // 0x3ba5a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7360u, 0x3BA5A4u, 0x3BA5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA5ACu;
label_3ba5ac:
    // 0x3ba5ac: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x3BA5ACu;
    {
        const bool branch_taken_0x3ba5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA5ACu;
        // 0x3ba5b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba5ac) {
            ctx->pc = 0x3BA6F0u;
            goto label_3ba6f0;
        }
    }
    ctx->pc = 0x3BA5B4u;
label_3ba5b4:
    // 0x3ba5b4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3ba5b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3ba5b8:
    // 0x3ba5b8: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x3ba5b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3ba5bc: 0x2fe102a  slt         $v0, $s7, $fp
    ctx->pc = 0x3ba5bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x3ba5c0: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x3BA5C0u;
    {
        const bool branch_taken_0x3ba5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA5C0u;
        // 0x3ba5c4: 0x2673000c  addiu       $s3, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba5c0) {
            ctx->pc = 0x3BA6ECu;
            goto label_3ba6ec;
        }
    }
    ctx->pc = 0x3BA5C8u;
    // 0x3ba5c8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x3ba5c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ba5cc:
    // 0x3ba5cc: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x3ba5ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba5d0: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x3ba5d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba5d4: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x3ba5d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba5d8: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x3ba5d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba5dc: 0x0  nop
    ctx->pc = 0x3ba5dcu;
    // NOP
label_3ba5e0:
    // 0x3ba5e0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x3ba5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x3ba5e4: 0x8e62fffc  lw          $v0, -0x4($s3)
    ctx->pc = 0x3ba5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967292)));
    // 0x3ba5e8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3BA5E8u;
    {
        const bool branch_taken_0x3ba5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA5E8u;
        // 0x3ba5ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba5e8) {
            ctx->pc = 0x3BA5F4u;
            goto label_3ba5f4;
        }
    }
    ctx->pc = 0x3BA5F0u;
    // 0x3ba5f0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3ba5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_3ba5f4:
    // 0x3ba5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ba5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba5f8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3ba5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ba5fc: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3BA5FCu;
    SET_GPR_U32(ctx, 31, 0x3BA604u);
    ctx->pc = 0x3BA600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA5FCu;
    // 0x3ba600: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3BA5FCu, 0x3BA604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA604u;
label_3ba604:
    // 0x3ba604: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3BA604u;
    {
        const bool branch_taken_0x3ba604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA604u;
        // 0x3ba608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba604) {
            ctx->pc = 0x3BA6F0u;
            goto label_3ba6f0;
        }
    }
    ctx->pc = 0x3BA60Cu;
    // 0x3ba60c: 0x8e82fffc  lw          $v0, -0x4($s4)
    ctx->pc = 0x3ba60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967292)));
    // 0x3ba610: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3BA610u;
    {
        const bool branch_taken_0x3ba610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA610u;
        // 0x3ba614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba610) {
            ctx->pc = 0x3BA654u;
            goto label_3ba654;
        }
    }
    ctx->pc = 0x3BA618u;
    // 0x3ba618: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3ba618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba61c: 0xc103440  jal         func_40D100
    ctx->pc = 0x3BA61Cu;
    SET_GPR_U32(ctx, 31, 0x3BA624u);
    ctx->pc = 0x3BA620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA61Cu;
    // 0x3ba620: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3BA61Cu, 0x3BA624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA624u;
label_3ba624:
    // 0x3ba624: 0x8ea4fffc  lw          $a0, -0x4($s5)
    ctx->pc = 0x3ba624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967292)));
    // 0x3ba628: 0xc0ec322  jal         func_3B0C88
    ctx->pc = 0x3BA628u;
    SET_GPR_U32(ctx, 31, 0x3BA630u);
    ctx->pc = 0x3BA62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA628u;
    // 0x3ba62c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0C88u, 0x3BA628u, 0x3BA630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA630u;
label_3ba630:
    // 0x3ba630: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3BA630u;
    {
        const bool branch_taken_0x3ba630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA630u;
        // 0x3ba634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba630) {
            ctx->pc = 0x3BA6F0u;
            goto label_3ba6f0;
        }
    }
    ctx->pc = 0x3BA638u;
    // 0x3ba638: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3ba638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ba63c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BA63Cu;
    {
        const bool branch_taken_0x3ba63c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba63c) {
            ctx->pc = 0x3BA640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA63Cu;
            // 0x3ba640: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA658u;
            goto label_3ba658;
        }
    }
    ctx->pc = 0x3BA644u;
    // 0x3ba644: 0xc0e9cd8  jal         func_3A7360
    ctx->pc = 0x3BA644u;
    SET_GPR_U32(ctx, 31, 0x3BA64Cu);
    ctx->pc = 0x3BA648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA644u;
    // 0x3ba648: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7360u, 0x3BA644u, 0x3BA64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA64Cu;
label_3ba64c:
    // 0x3ba64c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3BA64Cu;
    {
        const bool branch_taken_0x3ba64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA64Cu;
        // 0x3ba650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba64c) {
            ctx->pc = 0x3BA6F0u;
            goto label_3ba6f0;
        }
    }
    ctx->pc = 0x3BA654u;
label_3ba654:
    // 0x3ba654: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x3ba654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_3ba658:
    // 0x3ba658: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3ba658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3ba65c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BA65Cu;
    {
        const bool branch_taken_0x3ba65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA65Cu;
        // 0x3ba660: 0x26d1000c  addiu       $s1, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba65c) {
            ctx->pc = 0x3BA66Cu;
            goto label_3ba66c;
        }
    }
    ctx->pc = 0x3BA664u;
    // 0x3ba664: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ba664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ba668: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3ba668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_3ba66c:
    // 0x3ba66c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ba66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba670: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3ba670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ba674: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3BA674u;
    SET_GPR_U32(ctx, 31, 0x3BA67Cu);
    ctx->pc = 0x3BA678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA674u;
    // 0x3ba678: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3BA674u, 0x3BA67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA67Cu;
label_3ba67c:
    // 0x3ba67c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3BA67Cu;
    {
        const bool branch_taken_0x3ba67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA67Cu;
        // 0x3ba680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba67c) {
            ctx->pc = 0x3BA6F0u;
            goto label_3ba6f0;
        }
    }
    ctx->pc = 0x3BA684u;
    // 0x3ba684: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x3ba684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x3ba688: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3BA688u;
    {
        const bool branch_taken_0x3ba688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA688u;
        // 0x3ba68c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba688) {
            ctx->pc = 0x3BA6CCu;
            goto label_3ba6cc;
        }
    }
    ctx->pc = 0x3BA690u;
    // 0x3ba690: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ba690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba694: 0xc103440  jal         func_40D100
    ctx->pc = 0x3BA694u;
    SET_GPR_U32(ctx, 31, 0x3BA69Cu);
    ctx->pc = 0x3BA698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA694u;
    // 0x3ba698: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3BA694u, 0x3BA69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA69Cu;
label_3ba69c:
    // 0x3ba69c: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x3ba69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3ba6a0: 0xc0ec322  jal         func_3B0C88
    ctx->pc = 0x3BA6A0u;
    SET_GPR_U32(ctx, 31, 0x3BA6A8u);
    ctx->pc = 0x3BA6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA6A0u;
    // 0x3ba6a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0C88u, 0x3BA6A0u, 0x3BA6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA6A8u;
label_3ba6a8:
    // 0x3ba6a8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3BA6A8u;
    {
        const bool branch_taken_0x3ba6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA6A8u;
        // 0x3ba6ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba6a8) {
            ctx->pc = 0x3BA6F0u;
            goto label_3ba6f0;
        }
    }
    ctx->pc = 0x3BA6B0u;
    // 0x3ba6b0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x3ba6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3ba6b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BA6B4u;
    {
        const bool branch_taken_0x3ba6b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba6b4) {
            ctx->pc = 0x3BA6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA6B4u;
            // 0x3ba6b8: 0x26f70002  addiu       $s7, $s7, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA6D0u;
            goto label_3ba6d0;
        }
    }
    ctx->pc = 0x3BA6BCu;
    // 0x3ba6bc: 0xc0e9cd8  jal         func_3A7360
    ctx->pc = 0x3BA6BCu;
    SET_GPR_U32(ctx, 31, 0x3BA6C4u);
    ctx->pc = 0x3BA6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA6BCu;
    // 0x3ba6c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7360u, 0x3BA6BCu, 0x3BA6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA6C4u;
label_3ba6c4:
    // 0x3ba6c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3BA6C4u;
    {
        const bool branch_taken_0x3ba6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA6C4u;
        // 0x3ba6c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba6c4) {
            ctx->pc = 0x3BA6F0u;
            goto label_3ba6f0;
        }
    }
    ctx->pc = 0x3BA6CCu;
label_3ba6cc:
    // 0x3ba6cc: 0x26f70002  addiu       $s7, $s7, 0x2
    ctx->pc = 0x3ba6ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
label_3ba6d0:
    // 0x3ba6d0: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x3ba6d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x3ba6d4: 0x26b50018  addiu       $s5, $s5, 0x18
    ctx->pc = 0x3ba6d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x3ba6d8: 0x26940018  addiu       $s4, $s4, 0x18
    ctx->pc = 0x3ba6d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x3ba6dc: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x3ba6dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x3ba6e0: 0x2fe102a  slt         $v0, $s7, $fp
    ctx->pc = 0x3ba6e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x3ba6e4: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x3BA6E4u;
    {
        const bool branch_taken_0x3ba6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BA6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA6E4u;
        // 0x3ba6e8: 0x26d60018  addiu       $s6, $s6, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba6e4) {
            ctx->pc = 0x3BA5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ba5e0;
        }
    }
    ctx->pc = 0x3BA6ECu;
label_3ba6ec:
    // 0x3ba6ec: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x3ba6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3ba6f0:
    // 0x3ba6f0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3ba6f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3ba6f4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3ba6f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3ba6f8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3ba6f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3ba6fc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3ba6fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3ba700: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3ba700u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ba704: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3ba704u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ba708: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3ba708u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ba70c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x3ba70cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ba710: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x3ba710u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ba714: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ba714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ba718: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA718u;
        // 0x3ba71c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA720u;
}
