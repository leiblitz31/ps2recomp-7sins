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

// Function: sub_0031D7C0
// Address: 0x31d7c0 - 0x31d880
void sub_0031D7C0_0x31d7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D7C0_0x31d7c0");
#endif

    switch (ctx->pc) {
        case 0x31d7c0u: goto label_31d7c0;
        case 0x31d7c4u: goto label_31d7c4;
        case 0x31d7c8u: goto label_31d7c8;
        case 0x31d7ccu: goto label_31d7cc;
        case 0x31d7d0u: goto label_31d7d0;
        case 0x31d7d4u: goto label_31d7d4;
        case 0x31d7d8u: goto label_31d7d8;
        case 0x31d7dcu: goto label_31d7dc;
        case 0x31d7e0u: goto label_31d7e0;
        case 0x31d7e4u: goto label_31d7e4;
        case 0x31d7e8u: goto label_31d7e8;
        case 0x31d7ecu: goto label_31d7ec;
        case 0x31d7f0u: goto label_31d7f0;
        case 0x31d7f4u: goto label_31d7f4;
        case 0x31d7f8u: goto label_31d7f8;
        case 0x31d7fcu: goto label_31d7fc;
        case 0x31d800u: goto label_31d800;
        case 0x31d804u: goto label_31d804;
        case 0x31d808u: goto label_31d808;
        case 0x31d80cu: goto label_31d80c;
        case 0x31d810u: goto label_31d810;
        case 0x31d814u: goto label_31d814;
        case 0x31d818u: goto label_31d818;
        case 0x31d81cu: goto label_31d81c;
        case 0x31d820u: goto label_31d820;
        case 0x31d824u: goto label_31d824;
        case 0x31d828u: goto label_31d828;
        case 0x31d82cu: goto label_31d82c;
        case 0x31d830u: goto label_31d830;
        case 0x31d834u: goto label_31d834;
        case 0x31d838u: goto label_31d838;
        case 0x31d83cu: goto label_31d83c;
        case 0x31d840u: goto label_31d840;
        case 0x31d844u: goto label_31d844;
        case 0x31d848u: goto label_31d848;
        case 0x31d84cu: goto label_31d84c;
        case 0x31d850u: goto label_31d850;
        case 0x31d854u: goto label_31d854;
        case 0x31d858u: goto label_31d858;
        case 0x31d85cu: goto label_31d85c;
        case 0x31d860u: goto label_31d860;
        case 0x31d864u: goto label_31d864;
        case 0x31d868u: goto label_31d868;
        case 0x31d86cu: goto label_31d86c;
        case 0x31d870u: goto label_31d870;
        case 0x31d874u: goto label_31d874;
        case 0x31d878u: goto label_31d878;
        case 0x31d87cu: goto label_31d87c;
        default: break;
    }

    ctx->pc = 0x31d7c0u;

label_31d7c0:
    // 0x31d7c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31d7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_31d7c4:
    // 0x31d7c4: 0x8f82a5c0  lw          $v0, -0x5A40($gp)
    ctx->pc = 0x31d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944192)));
label_31d7c8:
    // 0x31d7c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31d7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_31d7cc:
    // 0x31d7cc: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x31d7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_31d7d0:
    // 0x31d7d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31d7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_31d7d4:
    // 0x31d7d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31d7d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31d7d8:
    // 0x31d7d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31d7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31d7dc:
    // 0x31d7dc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x31d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_31d7e0:
    // 0x31d7e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31d7e4:
    // 0x31d7e4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x31d7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31d7e8:
    // 0x31d7e8: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x31d7e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_31d7ec:
    // 0x31d7ec: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31d7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31d7f0:
    // 0x31d7f0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_31d7f4:
    if (ctx->pc == 0x31D7F4u) {
        ctx->pc = 0x31D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7F0u;
        // 0x31d7f4: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D7F8u;
        goto label_31d7f8;
    }
    ctx->pc = 0x31D7F0u;
    {
        const bool branch_taken_0x31d7f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7F0u;
        // 0x31d7f4: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d7f0) {
            ctx->pc = 0x31D804u;
            goto label_31d804;
        }
    }
    ctx->pc = 0x31D7F8u;
label_31d7f8:
    // 0x31d7f8: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x31d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_31d7fc:
    // 0x31d7fc: 0x40f809  jalr        $v0
label_31d800:
    if (ctx->pc == 0x31D800u) {
        ctx->pc = 0x31D804u;
        goto label_31d804;
    }
    ctx->pc = 0x31D7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31D804u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D7FCu, 0x31D804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D804u;
label_31d804:
    // 0x31d804: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x31d804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_31d808:
    // 0x31d808: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_31d80c:
    if (ctx->pc == 0x31D80Cu) {
        ctx->pc = 0x31D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D808u;
        // 0x31d80c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D810u;
        goto label_31d810;
    }
    ctx->pc = 0x31D808u;
    {
        const bool branch_taken_0x31d808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D808u;
        // 0x31d80c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d808) {
            ctx->pc = 0x31D81Cu;
            goto label_31d81c;
        }
    }
    ctx->pc = 0x31D810u;
label_31d810:
    // 0x31d810: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x31d810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_31d814:
    // 0x31d814: 0x40f809  jalr        $v0
label_31d818:
    if (ctx->pc == 0x31D818u) {
        ctx->pc = 0x31D81Cu;
        goto label_31d81c;
    }
    ctx->pc = 0x31D814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31D81Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D814u, 0x31D81Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D81Cu;
label_31d81c:
    // 0x31d81c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x31d81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31d820:
    // 0x31d820: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_31d824:
    if (ctx->pc == 0x31D824u) {
        ctx->pc = 0x31D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D820u;
        // 0x31d824: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D828u;
        goto label_31d828;
    }
    ctx->pc = 0x31D820u;
    {
        const bool branch_taken_0x31d820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D820u;
        // 0x31d824: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d820) {
            ctx->pc = 0x31D834u;
            goto label_31d834;
        }
    }
    ctx->pc = 0x31D828u;
label_31d828:
    // 0x31d828: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x31d828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_31d82c:
    // 0x31d82c: 0x40f809  jalr        $v0
label_31d830:
    if (ctx->pc == 0x31D830u) {
        ctx->pc = 0x31D834u;
        goto label_31d834;
    }
    ctx->pc = 0x31D82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31D834u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D82Cu, 0x31D834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D834u;
label_31d834:
    // 0x31d834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31d838:
    // 0x31d838: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31d838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d83c:
    // 0x31d83c: 0xc0bb7e6  jal         func_2EDF98
label_31d840:
    if (ctx->pc == 0x31D840u) {
        ctx->pc = 0x31D840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D83Cu;
        // 0x31d840: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D844u;
        goto label_31d844;
    }
    ctx->pc = 0x31D83Cu;
    SET_GPR_U32(ctx, 31, 0x31D844u);
    ctx->pc = 0x31D840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D83Cu;
    // 0x31d840: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x31D83Cu, 0x31D844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D844u;
label_31d844:
    // 0x31d844: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x31d844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31d848:
    // 0x31d848: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31d848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31d84c:
    // 0x31d84c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31d84cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31d850:
    // 0x31d850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31d850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31d854:
    // 0x31d854: 0x3e00008  jr          $ra
label_31d858:
    if (ctx->pc == 0x31D858u) {
        ctx->pc = 0x31D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D854u;
        // 0x31d858: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D85Cu;
        goto label_31d85c;
    }
    ctx->pc = 0x31D854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D854u;
        // 0x31d858: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D85Cu;
label_31d85c:
    // 0x31d85c: 0x0  nop
    ctx->pc = 0x31d85cu;
    // NOP
label_31d860:
    // 0x31d860: 0x8f82a5c0  lw          $v0, -0x5A40($gp)
    ctx->pc = 0x31d860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944192)));
label_31d864:
    // 0x31d864: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x31d864u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_31d868:
    // 0x31d868: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x31d868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_31d86c:
    // 0x31d86c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x31d86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31d870:
    // 0x31d870: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31d870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31d874:
    // 0x31d874: 0x3e00008  jr          $ra
label_31d878:
    if (ctx->pc == 0x31D878u) {
        ctx->pc = 0x31D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D874u;
        // 0x31d878: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D87Cu;
        goto label_31d87c;
    }
    ctx->pc = 0x31D874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D874u;
        // 0x31d878: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D87Cu;
label_31d87c:
    // 0x31d87c: 0x0  nop
    ctx->pc = 0x31d87cu;
    // NOP
    ctx->pc = 0x31d880u;
}
