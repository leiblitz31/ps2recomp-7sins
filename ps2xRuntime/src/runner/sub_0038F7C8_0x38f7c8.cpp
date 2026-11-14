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

// Function: sub_0038F7C8
// Address: 0x38f7c8 - 0x38f8a8
void sub_0038F7C8_0x38f7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F7C8_0x38f7c8");
#endif

    switch (ctx->pc) {
        case 0x38f7c8u: goto label_38f7c8;
        case 0x38f7ccu: goto label_38f7cc;
        case 0x38f7d0u: goto label_38f7d0;
        case 0x38f7d4u: goto label_38f7d4;
        case 0x38f7d8u: goto label_38f7d8;
        case 0x38f7dcu: goto label_38f7dc;
        case 0x38f7e0u: goto label_38f7e0;
        case 0x38f7e4u: goto label_38f7e4;
        case 0x38f7e8u: goto label_38f7e8;
        case 0x38f7ecu: goto label_38f7ec;
        case 0x38f7f0u: goto label_38f7f0;
        case 0x38f7f4u: goto label_38f7f4;
        case 0x38f7f8u: goto label_38f7f8;
        case 0x38f7fcu: goto label_38f7fc;
        case 0x38f800u: goto label_38f800;
        case 0x38f804u: goto label_38f804;
        case 0x38f808u: goto label_38f808;
        case 0x38f80cu: goto label_38f80c;
        case 0x38f810u: goto label_38f810;
        case 0x38f814u: goto label_38f814;
        case 0x38f818u: goto label_38f818;
        case 0x38f81cu: goto label_38f81c;
        case 0x38f820u: goto label_38f820;
        case 0x38f824u: goto label_38f824;
        case 0x38f828u: goto label_38f828;
        case 0x38f82cu: goto label_38f82c;
        case 0x38f830u: goto label_38f830;
        case 0x38f834u: goto label_38f834;
        case 0x38f838u: goto label_38f838;
        case 0x38f83cu: goto label_38f83c;
        case 0x38f840u: goto label_38f840;
        case 0x38f844u: goto label_38f844;
        case 0x38f848u: goto label_38f848;
        case 0x38f84cu: goto label_38f84c;
        case 0x38f850u: goto label_38f850;
        case 0x38f854u: goto label_38f854;
        case 0x38f858u: goto label_38f858;
        case 0x38f85cu: goto label_38f85c;
        case 0x38f860u: goto label_38f860;
        case 0x38f864u: goto label_38f864;
        case 0x38f868u: goto label_38f868;
        case 0x38f86cu: goto label_38f86c;
        case 0x38f870u: goto label_38f870;
        case 0x38f874u: goto label_38f874;
        case 0x38f878u: goto label_38f878;
        case 0x38f87cu: goto label_38f87c;
        case 0x38f880u: goto label_38f880;
        case 0x38f884u: goto label_38f884;
        case 0x38f888u: goto label_38f888;
        case 0x38f88cu: goto label_38f88c;
        case 0x38f890u: goto label_38f890;
        case 0x38f894u: goto label_38f894;
        case 0x38f898u: goto label_38f898;
        case 0x38f89cu: goto label_38f89c;
        case 0x38f8a0u: goto label_38f8a0;
        case 0x38f8a4u: goto label_38f8a4;
        default: break;
    }

    ctx->pc = 0x38f7c8u;

label_38f7c8:
    // 0x38f7c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x38f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38f7cc:
    // 0x38f7cc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x38f7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_38f7d0:
    // 0x38f7d0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x38f7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_38f7d4:
    // 0x38f7d4: 0x3e00008  jr          $ra
label_38f7d8:
    if (ctx->pc == 0x38F7D8u) {
        ctx->pc = 0x38F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F7D4u;
        // 0x38f7d8: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F7DCu;
        goto label_38f7dc;
    }
    ctx->pc = 0x38F7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F7D4u;
        // 0x38f7d8: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F7DCu;
label_38f7dc:
    // 0x38f7dc: 0x0  nop
    ctx->pc = 0x38f7dcu;
    // NOP
label_38f7e0:
    // 0x38f7e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38f7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_38f7e4:
    // 0x38f7e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x38f7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_38f7e8:
    // 0x38f7e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38f7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38f7ec:
    // 0x38f7ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38f7ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38f7f0:
    // 0x38f7f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x38f7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_38f7f4:
    // 0x38f7f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38f7f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38f7f8:
    // 0x38f7f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38f7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38f7fc:
    // 0x38f7fc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x38f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_38f800:
    // 0x38f800: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x38f800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_38f804:
    // 0x38f804: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_38f808:
    if (ctx->pc == 0x38F808u) {
        ctx->pc = 0x38F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F804u;
        // 0x38f808: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F80Cu;
        goto label_38f80c;
    }
    ctx->pc = 0x38F804u;
    {
        const bool branch_taken_0x38f804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F804u;
        // 0x38f808: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f804) {
            ctx->pc = 0x38F890u;
            goto label_38f890;
        }
    }
    ctx->pc = 0x38F80Cu;
label_38f80c:
    // 0x38f80c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x38f80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38f810:
    // 0x38f810: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_38f814:
    if (ctx->pc == 0x38F814u) {
        ctx->pc = 0x38F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F810u;
        // 0x38f814: 0x128080  sll         $s0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F818u;
        goto label_38f818;
    }
    ctx->pc = 0x38F810u;
    {
        const bool branch_taken_0x38f810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F810u;
        // 0x38f814: 0x128080  sll         $s0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f810) {
            ctx->pc = 0x38F838u;
            goto label_38f838;
        }
    }
    ctx->pc = 0x38F818u;
label_38f818:
    // 0x38f818: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x38f818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_38f81c:
    // 0x38f81c: 0x3c060103  lui         $a2, 0x103
    ctx->pc = 0x38f81cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)259 << 16));
label_38f820:
    // 0x38f820: 0x8c62e990  lw          $v0, -0x1670($v1)
    ctx->pc = 0x38f820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961552)));
label_38f824:
    // 0x38f824: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38f824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f828:
    // 0x38f828: 0x40f809  jalr        $v0
label_38f82c:
    if (ctx->pc == 0x38F82Cu) {
        ctx->pc = 0x38F82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F828u;
        // 0x38f82c: 0x34c60008  ori         $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F830u;
        goto label_38f830;
    }
    ctx->pc = 0x38F828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F830u);
        ctx->pc = 0x38F82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F828u;
        // 0x38f82c: 0x34c60008  ori         $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F828u, 0x38F830u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F830u;
label_38f830:
    // 0x38f830: 0x10000007  b           . + 4 + (0x7 << 2)
label_38f834:
    if (ctx->pc == 0x38F834u) {
        ctx->pc = 0x38F838u;
        goto label_38f838;
    }
    ctx->pc = 0x38F830u;
    {
        const bool branch_taken_0x38f830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f830) {
            ctx->pc = 0x38F850u;
            goto label_38f850;
        }
    }
    ctx->pc = 0x38F838u;
label_38f838:
    // 0x38f838: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x38f838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_38f83c:
    // 0x38f83c: 0x3c050103  lui         $a1, 0x103
    ctx->pc = 0x38f83cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
label_38f840:
    // 0x38f840: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x38f840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_38f844:
    // 0x38f844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f848:
    // 0x38f848: 0x40f809  jalr        $v0
label_38f84c:
    if (ctx->pc == 0x38F84Cu) {
        ctx->pc = 0x38F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F848u;
        // 0x38f84c: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F850u;
        goto label_38f850;
    }
    ctx->pc = 0x38F848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F850u);
        ctx->pc = 0x38F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F848u;
        // 0x38f84c: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F848u, 0x38F850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F850u;
label_38f850:
    // 0x38f850: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_38f854:
    if (ctx->pc == 0x38F854u) {
        ctx->pc = 0x38F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F850u;
        // 0x38f854: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F858u;
        goto label_38f858;
    }
    ctx->pc = 0x38F850u;
    {
        const bool branch_taken_0x38f850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38f850) {
            ctx->pc = 0x38F854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F850u;
            // 0x38f854: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F888u;
            goto label_38f888;
        }
    }
    ctx->pc = 0x38F858u;
label_38f858:
    // 0x38f858: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38f858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38f85c:
    // 0x38f85c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x38f85cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_38f860:
    // 0x38f860: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x38f860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_38f864:
    // 0x38f864: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38f864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f868:
    // 0x38f868: 0xc1035f6  jal         func_40D7D8
label_38f86c:
    if (ctx->pc == 0x38F86Cu) {
        ctx->pc = 0x38F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F868u;
        // 0x38f86c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F870u;
        goto label_38f870;
    }
    ctx->pc = 0x38F868u;
    SET_GPR_U32(ctx, 31, 0x38F870u);
    ctx->pc = 0x38F86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F868u;
    // 0x38f86c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x38F868u, 0x38F870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F870u;
label_38f870:
    // 0x38f870: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38f870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38f874:
    // 0x38f874: 0xc103628  jal         func_40D8A0
label_38f878:
    if (ctx->pc == 0x38F878u) {
        ctx->pc = 0x38F878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F874u;
        // 0x38f878: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F87Cu;
        goto label_38f87c;
    }
    ctx->pc = 0x38F874u;
    SET_GPR_U32(ctx, 31, 0x38F87Cu);
    ctx->pc = 0x38F878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F874u;
    // 0x38f878: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x38F874u, 0x38F87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F87Cu;
label_38f87c:
    // 0x38f87c: 0x10000004  b           . + 4 + (0x4 << 2)
label_38f880:
    if (ctx->pc == 0x38F880u) {
        ctx->pc = 0x38F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F87Cu;
        // 0x38f880: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F884u;
        goto label_38f884;
    }
    ctx->pc = 0x38F87Cu;
    {
        const bool branch_taken_0x38f87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F87Cu;
        // 0x38f880: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f87c) {
            ctx->pc = 0x38F890u;
            goto label_38f890;
        }
    }
    ctx->pc = 0x38F884u;
label_38f884:
    // 0x38f884: 0x0  nop
    ctx->pc = 0x38f884u;
    // NOP
label_38f888:
    // 0x38f888: 0xae320008  sw          $s2, 0x8($s1)
    ctx->pc = 0x38f888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
label_38f88c:
    // 0x38f88c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38f88cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38f890:
    // 0x38f890: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x38f890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38f894:
    // 0x38f894: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x38f894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38f898:
    // 0x38f898: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38f898u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38f89c:
    // 0x38f89c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38f89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38f8a0:
    // 0x38f8a0: 0x3e00008  jr          $ra
label_38f8a4:
    if (ctx->pc == 0x38F8A4u) {
        ctx->pc = 0x38F8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F8A0u;
        // 0x38f8a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F8A8u;
        goto label_fallthrough_0x38f8a0;
    }
    ctx->pc = 0x38F8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F8A0u;
        // 0x38f8a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38f8a0:
    ctx->pc = 0x38F8A8u;
}
