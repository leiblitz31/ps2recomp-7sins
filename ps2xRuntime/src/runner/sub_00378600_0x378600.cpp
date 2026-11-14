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

// Function: sub_00378600
// Address: 0x378600 - 0x378688
void sub_00378600_0x378600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378600_0x378600");
#endif

    switch (ctx->pc) {
        case 0x378600u: goto label_378600;
        case 0x378604u: goto label_378604;
        case 0x378608u: goto label_378608;
        case 0x37860cu: goto label_37860c;
        case 0x378610u: goto label_378610;
        case 0x378614u: goto label_378614;
        case 0x378618u: goto label_378618;
        case 0x37861cu: goto label_37861c;
        case 0x378620u: goto label_378620;
        case 0x378624u: goto label_378624;
        case 0x378628u: goto label_378628;
        case 0x37862cu: goto label_37862c;
        case 0x378630u: goto label_378630;
        case 0x378634u: goto label_378634;
        case 0x378638u: goto label_378638;
        case 0x37863cu: goto label_37863c;
        case 0x378640u: goto label_378640;
        case 0x378644u: goto label_378644;
        case 0x378648u: goto label_378648;
        case 0x37864cu: goto label_37864c;
        case 0x378650u: goto label_378650;
        case 0x378654u: goto label_378654;
        case 0x378658u: goto label_378658;
        case 0x37865cu: goto label_37865c;
        case 0x378660u: goto label_378660;
        case 0x378664u: goto label_378664;
        case 0x378668u: goto label_378668;
        case 0x37866cu: goto label_37866c;
        case 0x378670u: goto label_378670;
        case 0x378674u: goto label_378674;
        case 0x378678u: goto label_378678;
        case 0x37867cu: goto label_37867c;
        case 0x378680u: goto label_378680;
        case 0x378684u: goto label_378684;
        default: break;
    }

    ctx->pc = 0x378600u;

label_378600:
    // 0x378600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x378600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_378604:
    // 0x378604: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x378604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_378608:
    // 0x378608: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x378608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_37860c:
    // 0x37860c: 0x34a5010c  ori         $a1, $a1, 0x10C
    ctx->pc = 0x37860cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)268);
label_378610:
    // 0x378610: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x378610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_378614:
    // 0x378614: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x378614u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_378618:
    // 0x378618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x378618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_37861c:
    // 0x37861c: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x37861cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_378620:
    // 0x378620: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x378620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_378624:
    // 0x378624: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x378624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_378628:
    // 0x378628: 0x40f809  jalr        $v0
label_37862c:
    if (ctx->pc == 0x37862Cu) {
        ctx->pc = 0x37862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378628u;
        // 0x37862c: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378630u;
        goto label_378630;
    }
    ctx->pc = 0x378628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x378630u);
        ctx->pc = 0x37862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378628u;
        // 0x37862c: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378628u, 0x378630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x378630u;
label_378630:
    // 0x378630: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x378630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_378634:
    // 0x378634: 0x8f82a8a0  lw          $v0, -0x5760($gp)
    ctx->pc = 0x378634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944928)));
label_378638:
    // 0x378638: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x378638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_37863c:
    // 0x37863c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_378640:
    if (ctx->pc == 0x378640u) {
        ctx->pc = 0x378640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37863Cu;
        // 0x378640: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378644u;
        goto label_378644;
    }
    ctx->pc = 0x37863Cu;
    {
        const bool branch_taken_0x37863c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x378640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37863Cu;
        // 0x378640: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37863c) {
            ctx->pc = 0x37866Cu;
            goto label_37866c;
        }
    }
    ctx->pc = 0x378644u;
label_378644:
    // 0x378644: 0x24a2007c  addiu       $v0, $a1, 0x7C
    ctx->pc = 0x378644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 124));
label_378648:
    // 0x378648: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x378648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_37864c:
    // 0x37864c: 0x3c049a31  lui         $a0, 0x9A31
    ctx->pc = 0x37864cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39473 << 16));
label_378650:
    // 0x378650: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x378650u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_378654:
    // 0x378654: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x378654u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_378658:
    // 0x378658: 0x34849039  ori         $a0, $a0, 0x9039
    ctx->pc = 0x378658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36921);
label_37865c:
    // 0x37865c: 0xc0de106  jal         func_378418
label_378660:
    if (ctx->pc == 0x378660u) {
        ctx->pc = 0x378660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37865Cu;
        // 0x378660: 0xacc50008  sw          $a1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378664u;
        goto label_378664;
    }
    ctx->pc = 0x37865Cu;
    SET_GPR_U32(ctx, 31, 0x378664u);
    ctx->pc = 0x378660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37865Cu;
    // 0x378660: 0xacc50008  sw          $a1, 0x8($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378418u, 0x37865Cu, 0x378664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378664u;
label_378664:
    // 0x378664: 0x10000002  b           . + 4 + (0x2 << 2)
label_378668:
    if (ctx->pc == 0x378668u) {
        ctx->pc = 0x378668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378664u;
        // 0x378668: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37866Cu;
        goto label_37866c;
    }
    ctx->pc = 0x378664u;
    {
        const bool branch_taken_0x378664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378664u;
        // 0x378668: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378664) {
            ctx->pc = 0x378670u;
            goto label_378670;
        }
    }
    ctx->pc = 0x37866Cu;
label_37866c:
    // 0x37866c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37866cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378670:
    // 0x378670: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x378670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_378674:
    // 0x378674: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x378674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_378678:
    // 0x378678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x378678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37867c:
    // 0x37867c: 0x3e00008  jr          $ra
label_378680:
    if (ctx->pc == 0x378680u) {
        ctx->pc = 0x378680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37867Cu;
        // 0x378680: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378684u;
        goto label_378684;
    }
    ctx->pc = 0x37867Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37867Cu;
        // 0x378680: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37867Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378684u;
label_378684:
    // 0x378684: 0x0  nop
    ctx->pc = 0x378684u;
    // NOP
    ctx->pc = 0x378688u;
}
