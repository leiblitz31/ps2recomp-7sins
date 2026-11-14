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

// Function: sub_0041C558
// Address: 0x41c558 - 0x41c670
void sub_0041C558_0x41c558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041C558_0x41c558");
#endif

    switch (ctx->pc) {
        case 0x41c558u: goto label_41c558;
        case 0x41c55cu: goto label_41c55c;
        case 0x41c560u: goto label_41c560;
        case 0x41c564u: goto label_41c564;
        case 0x41c568u: goto label_41c568;
        case 0x41c56cu: goto label_41c56c;
        case 0x41c570u: goto label_41c570;
        case 0x41c574u: goto label_41c574;
        case 0x41c578u: goto label_41c578;
        case 0x41c57cu: goto label_41c57c;
        case 0x41c580u: goto label_41c580;
        case 0x41c584u: goto label_41c584;
        case 0x41c588u: goto label_41c588;
        case 0x41c58cu: goto label_41c58c;
        case 0x41c590u: goto label_41c590;
        case 0x41c594u: goto label_41c594;
        case 0x41c598u: goto label_41c598;
        case 0x41c59cu: goto label_41c59c;
        case 0x41c5a0u: goto label_41c5a0;
        case 0x41c5a4u: goto label_41c5a4;
        case 0x41c5a8u: goto label_41c5a8;
        case 0x41c5acu: goto label_41c5ac;
        case 0x41c5b0u: goto label_41c5b0;
        case 0x41c5b4u: goto label_41c5b4;
        case 0x41c5b8u: goto label_41c5b8;
        case 0x41c5bcu: goto label_41c5bc;
        case 0x41c5c0u: goto label_41c5c0;
        case 0x41c5c4u: goto label_41c5c4;
        case 0x41c5c8u: goto label_41c5c8;
        case 0x41c5ccu: goto label_41c5cc;
        case 0x41c5d0u: goto label_41c5d0;
        case 0x41c5d4u: goto label_41c5d4;
        case 0x41c5d8u: goto label_41c5d8;
        case 0x41c5dcu: goto label_41c5dc;
        case 0x41c5e0u: goto label_41c5e0;
        case 0x41c5e4u: goto label_41c5e4;
        case 0x41c5e8u: goto label_41c5e8;
        case 0x41c5ecu: goto label_41c5ec;
        case 0x41c5f0u: goto label_41c5f0;
        case 0x41c5f4u: goto label_41c5f4;
        case 0x41c5f8u: goto label_41c5f8;
        case 0x41c5fcu: goto label_41c5fc;
        case 0x41c600u: goto label_41c600;
        case 0x41c604u: goto label_41c604;
        case 0x41c608u: goto label_41c608;
        case 0x41c60cu: goto label_41c60c;
        case 0x41c610u: goto label_41c610;
        case 0x41c614u: goto label_41c614;
        case 0x41c618u: goto label_41c618;
        case 0x41c61cu: goto label_41c61c;
        case 0x41c620u: goto label_41c620;
        case 0x41c624u: goto label_41c624;
        case 0x41c628u: goto label_41c628;
        case 0x41c62cu: goto label_41c62c;
        case 0x41c630u: goto label_41c630;
        case 0x41c634u: goto label_41c634;
        case 0x41c638u: goto label_41c638;
        case 0x41c63cu: goto label_41c63c;
        case 0x41c640u: goto label_41c640;
        case 0x41c644u: goto label_41c644;
        case 0x41c648u: goto label_41c648;
        case 0x41c64cu: goto label_41c64c;
        case 0x41c650u: goto label_41c650;
        case 0x41c654u: goto label_41c654;
        case 0x41c658u: goto label_41c658;
        case 0x41c65cu: goto label_41c65c;
        case 0x41c660u: goto label_41c660;
        case 0x41c664u: goto label_41c664;
        case 0x41c668u: goto label_41c668;
        case 0x41c66cu: goto label_41c66c;
        default: break;
    }

    ctx->pc = 0x41c558u;

label_41c558:
    // 0x41c558: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x41c558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_41c55c:
    // 0x41c55c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_41c560:
    // 0x41c560: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x41c560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_41c564:
    // 0x41c564: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x41c564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_41c568:
    // 0x41c568: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x41c568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_41c56c:
    // 0x41c56c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x41c56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_41c570:
    // 0x41c570: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x41c570u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_41c574:
    // 0x41c574: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41c574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41c578:
    // 0x41c578: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x41c578u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41c57c:
    // 0x41c57c: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x41c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_41c580:
    // 0x41c580: 0x40f809  jalr        $v0
label_41c584:
    if (ctx->pc == 0x41C584u) {
        ctx->pc = 0x41C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C580u;
        // 0x41c584: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C588u;
        goto label_41c588;
    }
    ctx->pc = 0x41C580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41C588u);
        ctx->pc = 0x41C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C580u;
        // 0x41c584: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C580u, 0x41C588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41C588u;
label_41c588:
    // 0x41c588: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41c588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41c58c:
    // 0x41c58c: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x41c58cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_41c590:
    // 0x41c590: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x41c590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_41c594:
    // 0x41c594: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x41c594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_41c598:
    // 0x41c598: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x41c598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_41c59c:
    // 0x41c59c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_41c5a0:
    if (ctx->pc == 0x41C5A0u) {
        ctx->pc = 0x41C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C59Cu;
        // 0x41c5a0: 0x3c060104  lui         $a2, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)260 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C5A4u;
        goto label_41c5a4;
    }
    ctx->pc = 0x41C59Cu;
    {
        const bool branch_taken_0x41c59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C59Cu;
        // 0x41c5a0: 0x3c060104  lui         $a2, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)260 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c59c) {
            ctx->pc = 0x41C5FCu;
            goto label_41c5fc;
        }
    }
    ctx->pc = 0x41C5A4u;
label_41c5a4:
    // 0x41c5a4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x41c5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_41c5a8:
    // 0x41c5a8: 0x8e420110  lw          $v0, 0x110($s2)
    ctx->pc = 0x41c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
label_41c5ac:
    // 0x41c5ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41c5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41c5b0:
    // 0x41c5b0: 0x40f809  jalr        $v0
label_41c5b4:
    if (ctx->pc == 0x41C5B4u) {
        ctx->pc = 0x41C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C5B0u;
        // 0x41c5b4: 0x34c60406  ori         $a2, $a2, 0x406 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1030);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C5B8u;
        goto label_41c5b8;
    }
    ctx->pc = 0x41C5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41C5B8u);
        ctx->pc = 0x41C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C5B0u;
        // 0x41c5b4: 0x34c60406  ori         $a2, $a2, 0x406 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1030);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C5B0u, 0x41C5B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41C5B8u;
label_41c5b8:
    // 0x41c5b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x41c5b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41c5bc:
    // 0x41c5bc: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
label_41c5c0:
    if (ctx->pc == 0x41C5C0u) {
        ctx->pc = 0x41C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C5BCu;
        // 0x41c5c0: 0x8f82be08  lw          $v0, -0x41F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C5C4u;
        goto label_41c5c4;
    }
    ctx->pc = 0x41C5BCu;
    {
        const bool branch_taken_0x41c5bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x41c5bc) {
            ctx->pc = 0x41C5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41C5BCu;
            // 0x41c5c0: 0x8f82be08  lw          $v0, -0x41F8($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41C5F0u;
            goto label_41c5f0;
        }
    }
    ctx->pc = 0x41C5C4u;
label_41c5c4:
    // 0x41c5c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41c5c8:
    // 0x41c5c8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41c5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_41c5cc:
    // 0x41c5cc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x41c5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_41c5d0:
    // 0x41c5d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41c5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41c5d4:
    // 0x41c5d4: 0xc1035f6  jal         func_40D7D8
label_41c5d8:
    if (ctx->pc == 0x41C5D8u) {
        ctx->pc = 0x41C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C5D4u;
        // 0x41c5d8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C5DCu;
        goto label_41c5dc;
    }
    ctx->pc = 0x41C5D4u;
    SET_GPR_U32(ctx, 31, 0x41C5DCu);
    ctx->pc = 0x41C5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C5D4u;
    // 0x41c5d8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41C5D4u, 0x41C5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C5DCu;
label_41c5dc:
    // 0x41c5dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41c5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41c5e0:
    // 0x41c5e0: 0xc103628  jal         func_40D8A0
label_41c5e4:
    if (ctx->pc == 0x41C5E4u) {
        ctx->pc = 0x41C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C5E0u;
        // 0x41c5e4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C5E8u;
        goto label_41c5e8;
    }
    ctx->pc = 0x41C5E0u;
    SET_GPR_U32(ctx, 31, 0x41C5E8u);
    ctx->pc = 0x41C5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C5E0u;
    // 0x41c5e4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41C5E0u, 0x41C5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C5E8u;
label_41c5e8:
    // 0x41c5e8: 0x1000000c  b           . + 4 + (0xC << 2)
label_41c5ec:
    if (ctx->pc == 0x41C5ECu) {
        ctx->pc = 0x41C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C5E8u;
        // 0x41c5ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C5F0u;
        goto label_41c5f0;
    }
    ctx->pc = 0x41C5E8u;
    {
        const bool branch_taken_0x41c5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C5E8u;
        // 0x41c5ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c5e8) {
            ctx->pc = 0x41C61Cu;
            goto label_41c61c;
        }
    }
    ctx->pc = 0x41C5F0u;
label_41c5f0:
    // 0x41c5f0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x41c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_41c5f4:
    // 0x41c5f4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x41c5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_41c5f8:
    // 0x41c5f8: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x41c5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
label_41c5fc:
    // 0x41c5fc: 0x8f82be08  lw          $v0, -0x41F8($gp)
    ctx->pc = 0x41c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41c600:
    // 0x41c600: 0x2663e880  addiu       $v1, $s3, -0x1780
    ctx->pc = 0x41c600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_41c604:
    // 0x41c604: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x41c604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41c608:
    // 0x41c608: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41c608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41c60c:
    // 0x41c60c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_41c610:
    // 0x41c610: 0xc0bb778  jal         func_2EDDE0
label_41c614:
    if (ctx->pc == 0x41C614u) {
        ctx->pc = 0x41C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C610u;
        // 0x41c614: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C618u;
        goto label_41c618;
    }
    ctx->pc = 0x41C610u;
    SET_GPR_U32(ctx, 31, 0x41C618u);
    ctx->pc = 0x41C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C610u;
    // 0x41c614: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x41C610u, 0x41C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C618u;
label_41c618:
    // 0x41c618: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x41c618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41c61c:
    // 0x41c61c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x41c61cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41c620:
    // 0x41c620: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x41c620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41c624:
    // 0x41c624: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x41c624u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41c628:
    // 0x41c628: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x41c628u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41c62c:
    // 0x41c62c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41c62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41c630:
    // 0x41c630: 0x3e00008  jr          $ra
label_41c634:
    if (ctx->pc == 0x41C634u) {
        ctx->pc = 0x41C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C630u;
        // 0x41c634: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C638u;
        goto label_41c638;
    }
    ctx->pc = 0x41C630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C630u;
        // 0x41c634: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41C638u;
label_41c638:
    // 0x41c638: 0x8f82be08  lw          $v0, -0x41F8($gp)
    ctx->pc = 0x41c638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41c63c:
    // 0x41c63c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41c63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41c640:
    // 0x41c640: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x41c640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_41c644:
    // 0x41c644: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41c644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_41c648:
    // 0x41c648: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x41c648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_41c64c:
    // 0x41c64c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x41c64cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_41c650:
    // 0x41c650: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x41c650u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_41c654:
    // 0x41c654: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x41c654u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
label_41c658:
    // 0x41c658: 0x8f82be08  lw          $v0, -0x41F8($gp)
    ctx->pc = 0x41c658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41c65c:
    // 0x41c65c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_41c660:
    // 0x41c660: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x41c660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
label_41c664:
    // 0x41c664: 0x3e00008  jr          $ra
label_41c668:
    if (ctx->pc == 0x41C668u) {
        ctx->pc = 0x41C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C664u;
        // 0x41c668: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C66Cu;
        goto label_41c66c;
    }
    ctx->pc = 0x41C664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C664u;
        // 0x41c668: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41C66Cu;
label_41c66c:
    // 0x41c66c: 0x0  nop
    ctx->pc = 0x41c66cu;
    // NOP
    ctx->pc = 0x41c670u;
}
