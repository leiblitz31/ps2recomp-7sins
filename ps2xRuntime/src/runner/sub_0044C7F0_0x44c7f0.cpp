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

// Function: sub_0044C7F0
// Address: 0x44c7f0 - 0x44c890
void sub_0044C7F0_0x44c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044C7F0_0x44c7f0");
#endif

    switch (ctx->pc) {
        case 0x44c7f0u: goto label_44c7f0;
        case 0x44c7f4u: goto label_44c7f4;
        case 0x44c7f8u: goto label_44c7f8;
        case 0x44c7fcu: goto label_44c7fc;
        case 0x44c800u: goto label_44c800;
        case 0x44c804u: goto label_44c804;
        case 0x44c808u: goto label_44c808;
        case 0x44c80cu: goto label_44c80c;
        case 0x44c810u: goto label_44c810;
        case 0x44c814u: goto label_44c814;
        case 0x44c818u: goto label_44c818;
        case 0x44c81cu: goto label_44c81c;
        case 0x44c820u: goto label_44c820;
        case 0x44c824u: goto label_44c824;
        case 0x44c828u: goto label_44c828;
        case 0x44c82cu: goto label_44c82c;
        case 0x44c830u: goto label_44c830;
        case 0x44c834u: goto label_44c834;
        case 0x44c838u: goto label_44c838;
        case 0x44c83cu: goto label_44c83c;
        case 0x44c840u: goto label_44c840;
        case 0x44c844u: goto label_44c844;
        case 0x44c848u: goto label_44c848;
        case 0x44c84cu: goto label_44c84c;
        case 0x44c850u: goto label_44c850;
        case 0x44c854u: goto label_44c854;
        case 0x44c858u: goto label_44c858;
        case 0x44c85cu: goto label_44c85c;
        case 0x44c860u: goto label_44c860;
        case 0x44c864u: goto label_44c864;
        case 0x44c868u: goto label_44c868;
        case 0x44c86cu: goto label_44c86c;
        case 0x44c870u: goto label_44c870;
        case 0x44c874u: goto label_44c874;
        case 0x44c878u: goto label_44c878;
        case 0x44c87cu: goto label_44c87c;
        case 0x44c880u: goto label_44c880;
        case 0x44c884u: goto label_44c884;
        case 0x44c888u: goto label_44c888;
        case 0x44c88cu: goto label_44c88c;
        default: break;
    }

    ctx->pc = 0x44c7f0u;

label_44c7f0:
    // 0x44c7f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x44c7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_44c7f4:
    // 0x44c7f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x44c7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_44c7f8:
    // 0x44c7f8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x44c7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_44c7fc:
    // 0x44c7fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44c7fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44c800:
    // 0x44c800: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44c800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44c804:
    // 0x44c804: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x44c804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_44c808:
    // 0x44c808: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_44c80c:
    if (ctx->pc == 0x44C80Cu) {
        ctx->pc = 0x44C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C808u;
        // 0x44c80c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C810u;
        goto label_44c810;
    }
    ctx->pc = 0x44C808u;
    {
        const bool branch_taken_0x44c808 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C808u;
        // 0x44c80c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c808) {
            ctx->pc = 0x44C870u;
            goto label_44c870;
        }
    }
    ctx->pc = 0x44C810u;
label_44c810:
    // 0x44c810: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x44c810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_44c814:
    // 0x44c814: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_44c818:
    if (ctx->pc == 0x44C818u) {
        ctx->pc = 0x44C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C814u;
        // 0x44c818: 0x3c130062  lui         $s3, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C81Cu;
        goto label_44c81c;
    }
    ctx->pc = 0x44C814u;
    {
        const bool branch_taken_0x44c814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C814u;
        // 0x44c818: 0x3c130062  lui         $s3, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c814) {
            ctx->pc = 0x44C830u;
            goto label_44c830;
        }
    }
    ctx->pc = 0x44C81Cu;
label_44c81c:
    // 0x44c81c: 0x2662e880  addiu       $v0, $s3, -0x1780
    ctx->pc = 0x44c81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_44c820:
    // 0x44c820: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x44c820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_44c824:
    // 0x44c824: 0x60f809  jalr        $v1
label_44c828:
    if (ctx->pc == 0x44C828u) {
        ctx->pc = 0x44C82Cu;
        goto label_44c82c;
    }
    ctx->pc = 0x44C824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x44C82Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C824u, 0x44C82Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44C82Cu;
label_44c82c:
    // 0x44c82c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x44c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_44c830:
    // 0x44c830: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x44c830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_44c834:
    // 0x44c834: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_44c838:
    if (ctx->pc == 0x44C838u) {
        ctx->pc = 0x44C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C834u;
        // 0x44c838: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C83Cu;
        goto label_44c83c;
    }
    ctx->pc = 0x44C834u;
    {
        const bool branch_taken_0x44c834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C834u;
        // 0x44c838: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c834) {
            ctx->pc = 0x44C860u;
            goto label_44c860;
        }
    }
    ctx->pc = 0x44C83Cu;
label_44c83c:
    // 0x44c83c: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x44c83cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_44c840:
    // 0x44c840: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_44c844:
    if (ctx->pc == 0x44C844u) {
        ctx->pc = 0x44C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C840u;
        // 0x44c844: 0x8c900008  lw          $s0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C848u;
        goto label_44c848;
    }
    ctx->pc = 0x44C840u;
    {
        const bool branch_taken_0x44c840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C840u;
        // 0x44c844: 0x8c900008  lw          $s0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c840) {
            ctx->pc = 0x44C854u;
            goto label_44c854;
        }
    }
    ctx->pc = 0x44C848u;
label_44c848:
    // 0x44c848: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x44c848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_44c84c:
    // 0x44c84c: 0x40f809  jalr        $v0
label_44c850:
    if (ctx->pc == 0x44C850u) {
        ctx->pc = 0x44C854u;
        goto label_44c854;
    }
    ctx->pc = 0x44C84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44C854u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C84Cu, 0x44C854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44C854u;
label_44c854:
    // 0x44c854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44c858:
    // 0x44c858: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_44c85c:
    if (ctx->pc == 0x44C85Cu) {
        ctx->pc = 0x44C860u;
        goto label_44c860;
    }
    ctx->pc = 0x44C858u;
    {
        const bool branch_taken_0x44c858 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x44c858) {
            ctx->pc = 0x44C840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44c840;
        }
    }
    ctx->pc = 0x44C860u;
label_44c860:
    // 0x44c860: 0x2663e880  addiu       $v1, $s3, -0x1780
    ctx->pc = 0x44c860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_44c864:
    // 0x44c864: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x44c864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_44c868:
    // 0x44c868: 0x40f809  jalr        $v0
label_44c86c:
    if (ctx->pc == 0x44C86Cu) {
        ctx->pc = 0x44C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C868u;
        // 0x44c86c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C870u;
        goto label_44c870;
    }
    ctx->pc = 0x44C868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44C870u);
        ctx->pc = 0x44C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C868u;
        // 0x44c86c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C868u, 0x44C870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44C870u;
label_44c870:
    // 0x44c870: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x44c870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44c874:
    // 0x44c874: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x44c874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44c878:
    // 0x44c878: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44c878u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44c87c:
    // 0x44c87c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x44c87cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44c880:
    // 0x44c880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44c880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44c884:
    // 0x44c884: 0x3e00008  jr          $ra
label_44c888:
    if (ctx->pc == 0x44C888u) {
        ctx->pc = 0x44C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C884u;
        // 0x44c888: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C88Cu;
        goto label_44c88c;
    }
    ctx->pc = 0x44C884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C884u;
        // 0x44c888: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44C88Cu;
label_44c88c:
    // 0x44c88c: 0x0  nop
    ctx->pc = 0x44c88cu;
    // NOP
    ctx->pc = 0x44c890u;
}
