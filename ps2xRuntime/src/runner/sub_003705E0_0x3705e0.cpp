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

// Function: sub_003705E0
// Address: 0x3705e0 - 0x3706a8
void sub_003705E0_0x3705e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003705E0_0x3705e0");
#endif

    switch (ctx->pc) {
        case 0x3705e0u: goto label_3705e0;
        case 0x3705e4u: goto label_3705e4;
        case 0x3705e8u: goto label_3705e8;
        case 0x3705ecu: goto label_3705ec;
        case 0x3705f0u: goto label_3705f0;
        case 0x3705f4u: goto label_3705f4;
        case 0x3705f8u: goto label_3705f8;
        case 0x3705fcu: goto label_3705fc;
        case 0x370600u: goto label_370600;
        case 0x370604u: goto label_370604;
        case 0x370608u: goto label_370608;
        case 0x37060cu: goto label_37060c;
        case 0x370610u: goto label_370610;
        case 0x370614u: goto label_370614;
        case 0x370618u: goto label_370618;
        case 0x37061cu: goto label_37061c;
        case 0x370620u: goto label_370620;
        case 0x370624u: goto label_370624;
        case 0x370628u: goto label_370628;
        case 0x37062cu: goto label_37062c;
        case 0x370630u: goto label_370630;
        case 0x370634u: goto label_370634;
        case 0x370638u: goto label_370638;
        case 0x37063cu: goto label_37063c;
        case 0x370640u: goto label_370640;
        case 0x370644u: goto label_370644;
        case 0x370648u: goto label_370648;
        case 0x37064cu: goto label_37064c;
        case 0x370650u: goto label_370650;
        case 0x370654u: goto label_370654;
        case 0x370658u: goto label_370658;
        case 0x37065cu: goto label_37065c;
        case 0x370660u: goto label_370660;
        case 0x370664u: goto label_370664;
        case 0x370668u: goto label_370668;
        case 0x37066cu: goto label_37066c;
        case 0x370670u: goto label_370670;
        case 0x370674u: goto label_370674;
        case 0x370678u: goto label_370678;
        case 0x37067cu: goto label_37067c;
        case 0x370680u: goto label_370680;
        case 0x370684u: goto label_370684;
        case 0x370688u: goto label_370688;
        case 0x37068cu: goto label_37068c;
        case 0x370690u: goto label_370690;
        case 0x370694u: goto label_370694;
        case 0x370698u: goto label_370698;
        case 0x37069cu: goto label_37069c;
        case 0x3706a0u: goto label_3706a0;
        case 0x3706a4u: goto label_3706a4;
        default: break;
    }

    ctx->pc = 0x3705e0u;

label_3705e0:
    // 0x3705e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3705e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3705e4:
    // 0x3705e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3705e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3705e8:
    // 0x3705e8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3705e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3705ec:
    // 0x3705ec: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3705ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3705f0:
    // 0x3705f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3705f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3705f4:
    // 0x3705f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3705f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3705f8:
    // 0x3705f8: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x3705f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3705fc:
    // 0x3705fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3705fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_370600:
    // 0x370600: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x370600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_370604:
    // 0x370604: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x370604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_370608:
    // 0x370608: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x370608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_37060c:
    // 0x37060c: 0x40f809  jalr        $v0
label_370610:
    if (ctx->pc == 0x370610u) {
        ctx->pc = 0x370610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37060Cu;
        // 0x370610: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x370614u;
        goto label_370614;
    }
    ctx->pc = 0x37060Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x370614u);
        ctx->pc = 0x370610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37060Cu;
        // 0x370610: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37060Cu, 0x370614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x370614u;
label_370614:
    // 0x370614: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x370614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_370618:
    // 0x370618: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x370618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_37061c:
    // 0x37061c: 0x40f809  jalr        $v0
label_370620:
    if (ctx->pc == 0x370620u) {
        ctx->pc = 0x370620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37061Cu;
        // 0x370620: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x370624u;
        goto label_370624;
    }
    ctx->pc = 0x37061Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x370624u);
        ctx->pc = 0x370620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37061Cu;
        // 0x370620: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37061Cu, 0x370624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x370624u;
label_370624:
    // 0x370624: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x370624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_370628:
    // 0x370628: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_37062c:
    if (ctx->pc == 0x37062Cu) {
        ctx->pc = 0x37062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370628u;
        // 0x37062c: 0x8e050060  lw          $a1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x370630u;
        goto label_370630;
    }
    ctx->pc = 0x370628u;
    {
        const bool branch_taken_0x370628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x370628) {
            ctx->pc = 0x37062Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x370628u;
            // 0x37062c: 0x8e050060  lw          $a1, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x370638u;
            goto label_370638;
        }
    }
    ctx->pc = 0x370630u;
label_370630:
    // 0x370630: 0x10000017  b           . + 4 + (0x17 << 2)
label_370634:
    if (ctx->pc == 0x370634u) {
        ctx->pc = 0x370634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370630u;
        // 0x370634: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x370638u;
        goto label_370638;
    }
    ctx->pc = 0x370630u;
    {
        const bool branch_taken_0x370630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370630u;
        // 0x370634: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370630) {
            ctx->pc = 0x370690u;
            goto label_370690;
        }
    }
    ctx->pc = 0x370638u;
label_370638:
    // 0x370638: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x370638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_37063c:
    // 0x37063c: 0x40f809  jalr        $v0
label_370640:
    if (ctx->pc == 0x370640u) {
        ctx->pc = 0x370640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37063Cu;
        // 0x370640: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x370644u;
        goto label_370644;
    }
    ctx->pc = 0x37063Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x370644u);
        ctx->pc = 0x370640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37063Cu;
        // 0x370640: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37063Cu, 0x370644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x370644u;
label_370644:
    // 0x370644: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x370644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_370648:
    // 0x370648: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x370648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_37064c:
    // 0x37064c: 0x40f809  jalr        $v0
label_370650:
    if (ctx->pc == 0x370650u) {
        ctx->pc = 0x370650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37064Cu;
        // 0x370650: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x370654u;
        goto label_370654;
    }
    ctx->pc = 0x37064Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x370654u);
        ctx->pc = 0x370650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37064Cu;
        // 0x370650: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37064Cu, 0x370654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x370654u;
label_370654:
    // 0x370654: 0x8f83a858  lw          $v1, -0x57A8($gp)
    ctx->pc = 0x370654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_370658:
    // 0x370658: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x370658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_37065c:
    // 0x37065c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x37065cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_370660:
    // 0x370660: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x370660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_370664:
    // 0x370664: 0x40f809  jalr        $v0
label_370668:
    if (ctx->pc == 0x370668u) {
        ctx->pc = 0x370668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370664u;
        // 0x370668: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37066Cu;
        goto label_37066c;
    }
    ctx->pc = 0x370664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37066Cu);
        ctx->pc = 0x370668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370664u;
        // 0x370668: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370664u, 0x37066Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37066Cu;
label_37066c:
    // 0x37066c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x37066cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_370670:
    // 0x370670: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x370670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_370674:
    // 0x370674: 0x40f809  jalr        $v0
label_370678:
    if (ctx->pc == 0x370678u) {
        ctx->pc = 0x370678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370674u;
        // 0x370678: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37067Cu;
        goto label_37067c;
    }
    ctx->pc = 0x370674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37067Cu);
        ctx->pc = 0x370678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370674u;
        // 0x370678: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370674u, 0x37067Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37067Cu;
label_37067c:
    // 0x37067c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x37067cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_370680:
    // 0x370680: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x370680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_370684:
    // 0x370684: 0x40f809  jalr        $v0
label_370688:
    if (ctx->pc == 0x370688u) {
        ctx->pc = 0x370688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370684u;
        // 0x370688: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37068Cu;
        goto label_37068c;
    }
    ctx->pc = 0x370684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37068Cu);
        ctx->pc = 0x370688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370684u;
        // 0x370688: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370684u, 0x37068Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37068Cu;
label_37068c:
    // 0x37068c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37068cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_370690:
    // 0x370690: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x370690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_370694:
    // 0x370694: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x370694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_370698:
    // 0x370698: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x370698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37069c:
    // 0x37069c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37069cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3706a0:
    // 0x3706a0: 0x3e00008  jr          $ra
label_3706a4:
    if (ctx->pc == 0x3706A4u) {
        ctx->pc = 0x3706A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3706A0u;
        // 0x3706a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3706A8u;
        goto label_fallthrough_0x3706a0;
    }
    ctx->pc = 0x3706A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3706A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3706A0u;
        // 0x3706a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3706A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3706a0:
    ctx->pc = 0x3706A8u;
}
