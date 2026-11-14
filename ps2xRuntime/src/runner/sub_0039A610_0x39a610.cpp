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

// Function: sub_0039A610
// Address: 0x39a610 - 0x39a6b0
void sub_0039A610_0x39a610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A610_0x39a610");
#endif

    switch (ctx->pc) {
        case 0x39a610u: goto label_39a610;
        case 0x39a614u: goto label_39a614;
        case 0x39a618u: goto label_39a618;
        case 0x39a61cu: goto label_39a61c;
        case 0x39a620u: goto label_39a620;
        case 0x39a624u: goto label_39a624;
        case 0x39a628u: goto label_39a628;
        case 0x39a62cu: goto label_39a62c;
        case 0x39a630u: goto label_39a630;
        case 0x39a634u: goto label_39a634;
        case 0x39a638u: goto label_39a638;
        case 0x39a63cu: goto label_39a63c;
        case 0x39a640u: goto label_39a640;
        case 0x39a644u: goto label_39a644;
        case 0x39a648u: goto label_39a648;
        case 0x39a64cu: goto label_39a64c;
        case 0x39a650u: goto label_39a650;
        case 0x39a654u: goto label_39a654;
        case 0x39a658u: goto label_39a658;
        case 0x39a65cu: goto label_39a65c;
        case 0x39a660u: goto label_39a660;
        case 0x39a664u: goto label_39a664;
        case 0x39a668u: goto label_39a668;
        case 0x39a66cu: goto label_39a66c;
        case 0x39a670u: goto label_39a670;
        case 0x39a674u: goto label_39a674;
        case 0x39a678u: goto label_39a678;
        case 0x39a67cu: goto label_39a67c;
        case 0x39a680u: goto label_39a680;
        case 0x39a684u: goto label_39a684;
        case 0x39a688u: goto label_39a688;
        case 0x39a68cu: goto label_39a68c;
        case 0x39a690u: goto label_39a690;
        case 0x39a694u: goto label_39a694;
        case 0x39a698u: goto label_39a698;
        case 0x39a69cu: goto label_39a69c;
        case 0x39a6a0u: goto label_39a6a0;
        case 0x39a6a4u: goto label_39a6a4;
        case 0x39a6a8u: goto label_39a6a8;
        case 0x39a6acu: goto label_39a6ac;
        default: break;
    }

    ctx->pc = 0x39a610u;

label_39a610:
    // 0x39a610: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x39a610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_39a614:
    // 0x39a614: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x39a614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
label_39a618:
    // 0x39a618: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x39a618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_39a61c:
    // 0x39a61c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x39a61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39a620:
    // 0x39a620: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x39a620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
label_39a624:
    // 0x39a624: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39a624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a628:
    // 0x39a628: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x39a628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
label_39a62c:
    // 0x39a62c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39a62cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39a630:
    // 0x39a630: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x39a630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
label_39a634:
    // 0x39a634: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x39a634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39a638:
    // 0x39a638: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x39a638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_39a63c:
    // 0x39a63c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x39a63cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39a640:
    // 0x39a640: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x39a640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_39a644:
    // 0x39a644: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x39a644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39a648:
    // 0x39a648: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_39a64c:
    if (ctx->pc == 0x39A64Cu) {
        ctx->pc = 0x39A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A648u;
        // 0x39a64c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A650u;
        goto label_39a650;
    }
    ctx->pc = 0x39A648u;
    {
        const bool branch_taken_0x39a648 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x39A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A648u;
        // 0x39a64c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a648) {
            ctx->pc = 0x39A66Cu;
            goto label_39a66c;
        }
    }
    ctx->pc = 0x39A650u;
label_39a650:
    // 0x39a650: 0x280f809  jalr        $s4
label_39a654:
    if (ctx->pc == 0x39A654u) {
        ctx->pc = 0x39A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A650u;
        // 0x39a654: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A658u;
        goto label_39a658;
    }
    ctx->pc = 0x39A650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x39A658u);
        ctx->pc = 0x39A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A650u;
        // 0x39a654: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A650u, 0x39A658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A658u;
label_39a658:
    // 0x39a658: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_39a65c:
    if (ctx->pc == 0x39A65Cu) {
        ctx->pc = 0x39A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A658u;
        // 0x39a65c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A660u;
        goto label_39a660;
    }
    ctx->pc = 0x39A658u;
    {
        const bool branch_taken_0x39a658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A658u;
        // 0x39a65c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a658) {
            ctx->pc = 0x39A688u;
            goto label_39a688;
        }
    }
    ctx->pc = 0x39A660u;
label_39a660:
    // 0x39a660: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x39a660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39a664:
    // 0x39a664: 0x10000006  b           . + 4 + (0x6 << 2)
label_39a668:
    if (ctx->pc == 0x39A668u) {
        ctx->pc = 0x39A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A664u;
        // 0x39a668: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A66Cu;
        goto label_39a66c;
    }
    ctx->pc = 0x39A664u;
    {
        const bool branch_taken_0x39a664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A664u;
        // 0x39a668: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a664) {
            ctx->pc = 0x39A680u;
            goto label_39a680;
        }
    }
    ctx->pc = 0x39A66Cu;
label_39a66c:
    // 0x39a66c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x39a66cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_39a670:
    // 0x39a670: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x39a670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_39a674:
    // 0x39a674: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x39a674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_39a678:
    // 0x39a678: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x39a678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_39a67c:
    // 0x39a67c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x39a67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_39a680:
    // 0x39a680: 0x623fff1  bgezl       $s1, . + 4 + (-0xF << 2)
label_39a684:
    if (ctx->pc == 0x39A684u) {
        ctx->pc = 0x39A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A680u;
        // 0x39a684: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A688u;
        goto label_39a688;
    }
    ctx->pc = 0x39A680u;
    {
        const bool branch_taken_0x39a680 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x39a680) {
            ctx->pc = 0x39A684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A680u;
            // 0x39a684: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39a648;
        }
    }
    ctx->pc = 0x39A688u;
label_39a688:
    // 0x39a688: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x39a688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39a68c:
    // 0x39a68c: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x39a68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_39a690:
    // 0x39a690: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x39a690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_39a694:
    // 0x39a694: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x39a694u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_39a698:
    // 0x39a698: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x39a698u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_39a69c:
    // 0x39a69c: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x39a69cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_39a6a0:
    // 0x39a6a0: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x39a6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_39a6a4:
    // 0x39a6a4: 0x3e00008  jr          $ra
label_39a6a8:
    if (ctx->pc == 0x39A6A8u) {
        ctx->pc = 0x39A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A6A4u;
        // 0x39a6a8: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A6ACu;
        goto label_39a6ac;
    }
    ctx->pc = 0x39A6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A6A4u;
        // 0x39a6a8: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A6ACu;
label_39a6ac:
    // 0x39a6ac: 0x0  nop
    ctx->pc = 0x39a6acu;
    // NOP
    ctx->pc = 0x39a6b0u;
}
