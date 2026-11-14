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

// Function: sub_0049A638
// Address: 0x49a638 - 0x49a6a8
void sub_0049A638_0x49a638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A638_0x49a638");
#endif

    switch (ctx->pc) {
        case 0x49a638u: goto label_49a638;
        case 0x49a63cu: goto label_49a63c;
        case 0x49a640u: goto label_49a640;
        case 0x49a644u: goto label_49a644;
        case 0x49a648u: goto label_49a648;
        case 0x49a64cu: goto label_49a64c;
        case 0x49a650u: goto label_49a650;
        case 0x49a654u: goto label_49a654;
        case 0x49a658u: goto label_49a658;
        case 0x49a65cu: goto label_49a65c;
        case 0x49a660u: goto label_49a660;
        case 0x49a664u: goto label_49a664;
        case 0x49a668u: goto label_49a668;
        case 0x49a66cu: goto label_49a66c;
        case 0x49a670u: goto label_49a670;
        case 0x49a674u: goto label_49a674;
        case 0x49a678u: goto label_49a678;
        case 0x49a67cu: goto label_49a67c;
        case 0x49a680u: goto label_49a680;
        case 0x49a684u: goto label_49a684;
        case 0x49a688u: goto label_49a688;
        case 0x49a68cu: goto label_49a68c;
        case 0x49a690u: goto label_49a690;
        case 0x49a694u: goto label_49a694;
        case 0x49a698u: goto label_49a698;
        case 0x49a69cu: goto label_49a69c;
        case 0x49a6a0u: goto label_49a6a0;
        case 0x49a6a4u: goto label_49a6a4;
        default: break;
    }

    ctx->pc = 0x49a638u;

label_49a638:
    // 0x49a638: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x49a638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_49a63c:
    // 0x49a63c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x49a63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_49a640:
    // 0x49a640: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x49a640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_49a644:
    // 0x49a644: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x49a644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49a648:
    // 0x49a648: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x49a648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_49a64c:
    // 0x49a64c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x49a64cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49a650:
    // 0x49a650: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_49a654:
    if (ctx->pc == 0x49A654u) {
        ctx->pc = 0x49A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A650u;
        // 0x49a654: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A658u;
        goto label_49a658;
    }
    ctx->pc = 0x49A650u;
    {
        const bool branch_taken_0x49a650 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A650u;
        // 0x49a654: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a650) {
            ctx->pc = 0x49A688u;
            goto label_49a688;
        }
    }
    ctx->pc = 0x49A658u;
label_49a658:
    // 0x49a658: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49a658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49a65c:
    // 0x49a65c: 0x0  nop
    ctx->pc = 0x49a65cu;
    // NOP
label_49a660:
    // 0x49a660: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x49a660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_49a664:
    // 0x49a664: 0x40f809  jalr        $v0
label_49a668:
    if (ctx->pc == 0x49A668u) {
        ctx->pc = 0x49A66Cu;
        goto label_49a66c;
    }
    ctx->pc = 0x49A664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49A66Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A664u, 0x49A66Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49A66Cu;
label_49a66c:
    // 0x49a66c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_49a670:
    if (ctx->pc == 0x49A670u) {
        ctx->pc = 0x49A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A66Cu;
        // 0x49a670: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A674u;
        goto label_49a674;
    }
    ctx->pc = 0x49A66Cu;
    {
        const bool branch_taken_0x49a66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A66Cu;
        // 0x49a670: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a66c) {
            ctx->pc = 0x49A67Cu;
            goto label_49a67c;
        }
    }
    ctx->pc = 0x49A674u;
label_49a674:
    // 0x49a674: 0x10000005  b           . + 4 + (0x5 << 2)
label_49a678:
    if (ctx->pc == 0x49A678u) {
        ctx->pc = 0x49A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A674u;
        // 0x49a678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A67Cu;
        goto label_49a67c;
    }
    ctx->pc = 0x49A674u;
    {
        const bool branch_taken_0x49a674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A674u;
        // 0x49a678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a674) {
            ctx->pc = 0x49A68Cu;
            goto label_49a68c;
        }
    }
    ctx->pc = 0x49A67Cu;
label_49a67c:
    // 0x49a67c: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x49a67cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_49a680:
    // 0x49a680: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_49a684:
    if (ctx->pc == 0x49A684u) {
        ctx->pc = 0x49A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A680u;
        // 0x49a684: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A688u;
        goto label_49a688;
    }
    ctx->pc = 0x49A680u;
    {
        const bool branch_taken_0x49a680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A680u;
        // 0x49a684: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a680) {
            ctx->pc = 0x49A660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49a660;
        }
    }
    ctx->pc = 0x49A688u;
label_49a688:
    // 0x49a688: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49a688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49a68c:
    // 0x49a68c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x49a68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49a690:
    // 0x49a690: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x49a690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49a694:
    // 0x49a694: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x49a694u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49a698:
    // 0x49a698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49a698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49a69c:
    // 0x49a69c: 0x3e00008  jr          $ra
label_49a6a0:
    if (ctx->pc == 0x49A6A0u) {
        ctx->pc = 0x49A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A69Cu;
        // 0x49a6a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A6A4u;
        goto label_49a6a4;
    }
    ctx->pc = 0x49A69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A69Cu;
        // 0x49a6a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A6A4u;
label_49a6a4:
    // 0x49a6a4: 0x0  nop
    ctx->pc = 0x49a6a4u;
    // NOP
    ctx->pc = 0x49a6a8u;
}
