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

// Function: sub_00429508
// Address: 0x429508 - 0x429700
void sub_00429508_0x429508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00429508_0x429508");
#endif

    switch (ctx->pc) {
        case 0x42952cu: goto label_42952c;
        case 0x429564u: goto label_429564;
        case 0x42965cu: goto label_42965c;
        default: break;
    }

    ctx->pc = 0x429508u;

    // 0x429508: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x429508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x42950c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x42950cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x429510: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x429510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x429514: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x429514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x429518: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x429518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42951c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42951cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x429520: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x429520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x429524: 0xc10a322  jal         func_428C88
    ctx->pc = 0x429524u;
    SET_GPR_U32(ctx, 31, 0x42952Cu);
    ctx->pc = 0x429528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429524u;
    // 0x429528: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x429524u, 0x42952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42952Cu;
label_42952c:
    // 0x42952c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x42952Cu;
    {
        const bool branch_taken_0x42952c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x429530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42952Cu;
        // 0x429530: 0x8f84be24  lw          $a0, -0x41DC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42952c) {
            ctx->pc = 0x429570u;
            goto label_429570;
        }
    }
    ctx->pc = 0x429534u;
    // 0x429534: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x429534u;
    {
        const bool branch_taken_0x429534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x429538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429534u;
        // 0x429538: 0x8f83be6c  lw          $v1, -0x4194($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429534) {
            ctx->pc = 0x429554u;
            goto label_429554;
        }
    }
    ctx->pc = 0x42953Cu;
    // 0x42953c: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x42953cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x429540: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x429540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x429544: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x429544u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x429548: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x429548u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x42954c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x42954Cu;
    {
        const bool branch_taken_0x42954c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x429550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42954Cu;
        // 0x429550: 0x24830010  addiu       $v1, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42954c) {
            ctx->pc = 0x429588u;
            goto label_429588;
        }
    }
    ctx->pc = 0x429554u;
label_429554:
    // 0x429554: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x429554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x429558: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x429558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42955c: 0xc10a4a8  jal         func_4292A0
    ctx->pc = 0x42955Cu;
    SET_GPR_U32(ctx, 31, 0x429564u);
    ctx->pc = 0x429560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42955Cu;
    // 0x429560: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4292A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4292A0u, 0x42955Cu, 0x429564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429564u;
label_429564:
    // 0x429564: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x429564u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x429568: 0x15400003  bnez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x429568u;
    {
        const bool branch_taken_0x429568 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x42956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429568u;
        // 0x42956c: 0x8f82be68  lw          $v0, -0x4198($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429568) {
            ctx->pc = 0x429578u;
            goto label_429578;
        }
    }
    ctx->pc = 0x429570u;
label_429570:
    // 0x429570: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x429570u;
    {
        const bool branch_taken_0x429570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x429574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429570u;
        // 0x429574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429570) {
            ctx->pc = 0x4296ECu;
            goto label_4296ec;
        }
    }
    ctx->pc = 0x429578u;
label_429578:
    // 0x429578: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x429578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x42957c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x42957cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x429580: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x429580u;
    {
        const bool branch_taken_0x429580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x429584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429580u;
        // 0x429584: 0xaf82be6c  sw          $v0, -0x4194($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950508), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429580) {
            ctx->pc = 0x429594u;
            goto label_429594;
        }
    }
    ctx->pc = 0x429588u;
label_429588:
    // 0x429588: 0x3c02cfff  lui         $v0, 0xCFFF
    ctx->pc = 0x429588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53247 << 16));
    // 0x42958c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x42958cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x429590: 0x625024  and         $t2, $v1, $v0
    ctx->pc = 0x429590u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_429594:
    // 0x429594: 0x8f89be24  lw          $t1, -0x41DC($gp)
    ctx->pc = 0x429594u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950436)));
    // 0x429598: 0x11200019  beqz        $t1, . + 4 + (0x19 << 2)
    ctx->pc = 0x429598u;
    {
        const bool branch_taken_0x429598 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x42959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429598u;
        // 0x42959c: 0x8f82addc  lw          $v0, -0x5224($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429598) {
            ctx->pc = 0x429600u;
            goto label_429600;
        }
    }
    ctx->pc = 0x4295A0u;
    // 0x4295a0: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x4295a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    // 0x4295a4: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x4295a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x4295a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4295a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4295ac: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x4295acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4295b0: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x4295b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x4295b4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x4295b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x4295b8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x4295b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4295bc: 0x34c60040  ori         $a2, $a2, 0x40
    ctx->pc = 0x4295bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x4295c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4295c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4295c4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x4295c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x4295c8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4295c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4295cc: 0xa203c  dsll32      $a0, $t2, 0
    ctx->pc = 0x4295ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 0));
    // 0x4295d0: 0x70e22b89  pcpyld      $a1, $a3, $v0
    ctx->pc = 0x4295d0u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x4295d4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4295d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4295d8: 0x7d25ffd0  sq          $a1, -0x30($t1)
    ctx->pc = 0x4295d8u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 4294967248), GPR_VEC(ctx, 5));
    // 0x4295dc: 0x25220010  addiu       $v0, $t1, 0x10
    ctx->pc = 0x4295dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x4295e0: 0x71062b89  pcpyld      $a1, $t0, $a2
    ctx->pc = 0x4295e0u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x4295e4: 0x25230020  addiu       $v1, $t1, 0x20
    ctx->pc = 0x4295e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x4295e8: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x4295e8u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x4295ec: 0xaf82be24  sw          $v0, -0x41DC($gp)
    ctx->pc = 0x4295ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950436), GPR_U32(ctx, 2));
    // 0x4295f0: 0x70e42b89  pcpyld      $a1, $a3, $a0
    ctx->pc = 0x4295f0u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x4295f4: 0x7d250010  sq          $a1, 0x10($t1)
    ctx->pc = 0x4295f4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), GPR_VEC(ctx, 5));
    // 0x4295f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4295F8u;
    {
        const bool branch_taken_0x4295f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4295FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4295F8u;
        // 0x4295fc: 0xaf83be24  sw          $v1, -0x41DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4295f8) {
            ctx->pc = 0x429604u;
            goto label_429604;
        }
    }
    ctx->pc = 0x429600u;
label_429600:
    // 0x429600: 0xaf8abe84  sw          $t2, -0x417C($gp)
    ctx->pc = 0x429600u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950532), GPR_U32(ctx, 10));
label_429604:
    // 0x429604: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x429604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x429608: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x429608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x42960c: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x42960Cu;
    {
        const bool branch_taken_0x42960c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x429610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42960Cu;
        // 0x429610: 0xaf82be24  sw          $v0, -0x41DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42960c) {
            ctx->pc = 0x4296ACu;
            goto label_4296ac;
        }
    }
    ctx->pc = 0x429614u;
    // 0x429614: 0x8f84be28  lw          $a0, -0x41D8($gp)
    ctx->pc = 0x429614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950440)));
    // 0x429618: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x429618u;
    {
        const bool branch_taken_0x429618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x42961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429618u;
        // 0x42961c: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429618) {
            ctx->pc = 0x4296ACu;
            goto label_4296ac;
        }
    }
    ctx->pc = 0x429620u;
    // 0x429620: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x429620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x429624: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x429624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x429628: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x429628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x42962c: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x42962Cu;
    {
        const bool branch_taken_0x42962c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x429630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42962Cu;
        // 0x429630: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42962c) {
            ctx->pc = 0x429678u;
            goto label_429678;
        }
    }
    ctx->pc = 0x429634u;
    // 0x429634: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x429634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x429638: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x429638u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x42963c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x42963cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x429640: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x429640u;
    {
        const bool branch_taken_0x429640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x429644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429640u;
        // 0x429644: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429640) {
            ctx->pc = 0x429678u;
            goto label_429678;
        }
    }
    ctx->pc = 0x429648u;
    // 0x429648: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x429648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x42964c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x42964cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x429650: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x429650u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x429654: 0xf  sync
    ctx->pc = 0x429654u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x429658: 0x40f  sync.p
    ctx->pc = 0x429658u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_42965c:
    // 0x42965c: 0x0  nop
    ctx->pc = 0x42965cu;
    // NOP
    // 0x429660: 0x0  nop
    ctx->pc = 0x429660u;
    // NOP
    // 0x429664: 0x0  nop
    ctx->pc = 0x429664u;
    // NOP
    // 0x429668: 0x0  nop
    ctx->pc = 0x429668u;
    // NOP
    // 0x42966c: 0x0  nop
    ctx->pc = 0x42966cu;
    // NOP
    // 0x429670: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x429670u;
    {
        const bool branch_taken_0x429670 = (false);
        if (branch_taken_0x429670) {
            ctx->pc = 0x42965Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42965c;
        }
    }
    ctx->pc = 0x429678u;
label_429678:
    // 0x429678: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x429678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x42967c: 0x8f86be28  lw          $a2, -0x41D8($gp)
    ctx->pc = 0x42967cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950440)));
    // 0x429680: 0x24423540  addiu       $v0, $v0, 0x3540
    ctx->pc = 0x429680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13632));
    // 0x429684: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x429684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x429688: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x429688u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x623540u));
    // 0x42968c: 0x24633550  addiu       $v1, $v1, 0x3550
    ctx->pc = 0x42968cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13648));
    // 0x429690: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x429690u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x429694: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x429694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x429698: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x429698u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x623550u));
    // 0x42969c: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x42969cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x4296a0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4296a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4296a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4296A4u;
    {
        const bool branch_taken_0x4296a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4296A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4296A4u;
        // 0x4296a8: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4296a4) {
            ctx->pc = 0x4296C8u;
            goto label_4296c8;
        }
    }
    ctx->pc = 0x4296ACu;
label_4296ac:
    // 0x4296ac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4296acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x4296b0: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x4296b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x4296b4: 0x24423560  addiu       $v0, $v0, 0x3560
    ctx->pc = 0x4296b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13664));
    // 0x4296b8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x4296b8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x623560u));
    // 0x4296bc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x4296bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x4296c0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4296c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4296c4: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x4296c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_4296c8:
    // 0x4296c8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4296c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x4296cc: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x4296ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x4296d0: 0x24633570  addiu       $v1, $v1, 0x3570
    ctx->pc = 0x4296d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13680));
    // 0x4296d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4296d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4296d8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x4296d8u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x623570u));
    // 0x4296dc: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x4296dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4296e0: 0xaf84be28  sw          $a0, -0x41D8($gp)
    ctx->pc = 0x4296e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950440), GPR_U32(ctx, 4));
    // 0x4296e4: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x4296e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x4296e8: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x4296e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
label_4296ec:
    // 0x4296ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4296ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4296f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4296f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4296f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4296f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4296f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4296F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4296FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4296F8u;
        // 0x4296fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4296F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x429700u;
}
