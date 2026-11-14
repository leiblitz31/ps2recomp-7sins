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

// Function: sub_0041D5F0
// Address: 0x41d5f0 - 0x41d698
void sub_0041D5F0_0x41d5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D5F0_0x41d5f0");
#endif

    switch (ctx->pc) {
        case 0x41d5f0u: goto label_41d5f0;
        case 0x41d5f4u: goto label_41d5f4;
        case 0x41d5f8u: goto label_41d5f8;
        case 0x41d5fcu: goto label_41d5fc;
        case 0x41d600u: goto label_41d600;
        case 0x41d604u: goto label_41d604;
        case 0x41d608u: goto label_41d608;
        case 0x41d60cu: goto label_41d60c;
        case 0x41d610u: goto label_41d610;
        case 0x41d614u: goto label_41d614;
        case 0x41d618u: goto label_41d618;
        case 0x41d61cu: goto label_41d61c;
        case 0x41d620u: goto label_41d620;
        case 0x41d624u: goto label_41d624;
        case 0x41d628u: goto label_41d628;
        case 0x41d62cu: goto label_41d62c;
        case 0x41d630u: goto label_41d630;
        case 0x41d634u: goto label_41d634;
        case 0x41d638u: goto label_41d638;
        case 0x41d63cu: goto label_41d63c;
        case 0x41d640u: goto label_41d640;
        case 0x41d644u: goto label_41d644;
        case 0x41d648u: goto label_41d648;
        case 0x41d64cu: goto label_41d64c;
        case 0x41d650u: goto label_41d650;
        case 0x41d654u: goto label_41d654;
        case 0x41d658u: goto label_41d658;
        case 0x41d65cu: goto label_41d65c;
        case 0x41d660u: goto label_41d660;
        case 0x41d664u: goto label_41d664;
        case 0x41d668u: goto label_41d668;
        case 0x41d66cu: goto label_41d66c;
        case 0x41d670u: goto label_41d670;
        case 0x41d674u: goto label_41d674;
        case 0x41d678u: goto label_41d678;
        case 0x41d67cu: goto label_41d67c;
        case 0x41d680u: goto label_41d680;
        case 0x41d684u: goto label_41d684;
        case 0x41d688u: goto label_41d688;
        case 0x41d68cu: goto label_41d68c;
        case 0x41d690u: goto label_41d690;
        case 0x41d694u: goto label_41d694;
        default: break;
    }

    ctx->pc = 0x41d5f0u;

label_41d5f0:
    // 0x41d5f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41d5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41d5f4:
    // 0x41d5f4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41d5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41d5f8:
    // 0x41d5f8: 0x8f82be10  lw          $v0, -0x41F0($gp)
    ctx->pc = 0x41d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950416)));
label_41d5fc:
    // 0x41d5fc: 0x2465e880  addiu       $a1, $v1, -0x1780
    ctx->pc = 0x41d5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_41d600:
    // 0x41d600: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41d600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_41d604:
    // 0x41d604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41d604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41d608:
    // 0x41d608: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x41d608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_41d60c:
    // 0x41d60c: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x41d60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_41d610:
    // 0x41d610: 0x3802a  slt         $s0, $zero, $v1
    ctx->pc = 0x41d610u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_41d614:
    // 0x41d614: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_41d618:
    if (ctx->pc == 0x41D618u) {
        ctx->pc = 0x41D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D614u;
        // 0x41d618: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D61Cu;
        goto label_41d61c;
    }
    ctx->pc = 0x41D614u;
    {
        const bool branch_taken_0x41d614 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D614u;
        // 0x41d618: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d614) {
            ctx->pc = 0x41D634u;
            goto label_41d634;
        }
    }
    ctx->pc = 0x41D61Cu;
label_41d61c:
    // 0x41d61c: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x41d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_41d620:
    // 0x41d620: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x41d620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41d624:
    // 0x41d624: 0x40f809  jalr        $v0
label_41d628:
    if (ctx->pc == 0x41D628u) {
        ctx->pc = 0x41D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D624u;
        // 0x41d628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D62Cu;
        goto label_41d62c;
    }
    ctx->pc = 0x41D624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41D62Cu);
        ctx->pc = 0x41D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D624u;
        // 0x41d628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D624u, 0x41D62Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41D62Cu;
label_41d62c:
    // 0x41d62c: 0x1000000a  b           . + 4 + (0xA << 2)
label_41d630:
    if (ctx->pc == 0x41D630u) {
        ctx->pc = 0x41D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D62Cu;
        // 0x41d630: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D634u;
        goto label_41d634;
    }
    ctx->pc = 0x41D62Cu;
    {
        const bool branch_taken_0x41d62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D62Cu;
        // 0x41d630: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d62c) {
            ctx->pc = 0x41D658u;
            goto label_41d658;
        }
    }
    ctx->pc = 0x41D634u;
label_41d634:
    // 0x41d634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41d634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41d638:
    // 0x41d638: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x41d638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_41d63c:
    // 0x41d63c: 0xc1035f6  jal         func_40D7D8
label_41d640:
    if (ctx->pc == 0x41D640u) {
        ctx->pc = 0x41D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D63Cu;
        // 0x41d640: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D644u;
        goto label_41d644;
    }
    ctx->pc = 0x41D63Cu;
    SET_GPR_U32(ctx, 31, 0x41D644u);
    ctx->pc = 0x41D640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D63Cu;
    // 0x41d640: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41D63Cu, 0x41D644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D644u;
label_41d644:
    // 0x41d644: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41d644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41d648:
    // 0x41d648: 0xc103628  jal         func_40D8A0
label_41d64c:
    if (ctx->pc == 0x41D64Cu) {
        ctx->pc = 0x41D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D648u;
        // 0x41d64c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D650u;
        goto label_41d650;
    }
    ctx->pc = 0x41D648u;
    SET_GPR_U32(ctx, 31, 0x41D650u);
    ctx->pc = 0x41D64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D648u;
    // 0x41d64c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41D648u, 0x41D650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D650u;
label_41d650:
    // 0x41d650: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41d650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d654:
    // 0x41d654: 0x0  nop
    ctx->pc = 0x41d654u;
    // NOP
label_41d658:
    // 0x41d658: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41d658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41d65c:
    // 0x41d65c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41d65cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41d660:
    // 0x41d660: 0x3e00008  jr          $ra
label_41d664:
    if (ctx->pc == 0x41D664u) {
        ctx->pc = 0x41D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D660u;
        // 0x41d664: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D668u;
        goto label_41d668;
    }
    ctx->pc = 0x41D660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D660u;
        // 0x41d664: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D668u;
label_41d668:
    // 0x41d668: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41d668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41d66c:
    // 0x41d66c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x41d66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41d670:
    // 0x41d670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41d670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_41d674:
    // 0x41d674: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x41d674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41d678:
    // 0x41d678: 0x8c62e8fc  lw          $v0, -0x1704($v1)
    ctx->pc = 0x41d678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961404)));
label_41d67c:
    // 0x41d67c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41d680:
    // 0x41d680: 0x40f809  jalr        $v0
label_41d684:
    if (ctx->pc == 0x41D684u) {
        ctx->pc = 0x41D684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D680u;
        // 0x41d684: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D688u;
        goto label_41d688;
    }
    ctx->pc = 0x41D680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41D688u);
        ctx->pc = 0x41D684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D680u;
        // 0x41d684: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D680u, 0x41D688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41D688u;
label_41d688:
    // 0x41d688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41d68c:
    // 0x41d68c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41d690:
    // 0x41d690: 0x3e00008  jr          $ra
label_41d694:
    if (ctx->pc == 0x41D694u) {
        ctx->pc = 0x41D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D690u;
        // 0x41d694: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D698u;
        goto label_fallthrough_0x41d690;
    }
    ctx->pc = 0x41D690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D690u;
        // 0x41d694: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41d690:
    ctx->pc = 0x41D698u;
}
