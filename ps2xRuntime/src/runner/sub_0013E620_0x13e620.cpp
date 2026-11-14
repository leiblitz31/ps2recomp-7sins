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

// Function: sub_0013E620
// Address: 0x13e620 - 0x13e740
void sub_0013E620_0x13e620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E620_0x13e620");
#endif

    switch (ctx->pc) {
        case 0x13e620u: goto label_13e620;
        case 0x13e624u: goto label_13e624;
        case 0x13e628u: goto label_13e628;
        case 0x13e62cu: goto label_13e62c;
        case 0x13e630u: goto label_13e630;
        case 0x13e634u: goto label_13e634;
        case 0x13e638u: goto label_13e638;
        case 0x13e63cu: goto label_13e63c;
        case 0x13e640u: goto label_13e640;
        case 0x13e644u: goto label_13e644;
        case 0x13e648u: goto label_13e648;
        case 0x13e64cu: goto label_13e64c;
        case 0x13e650u: goto label_13e650;
        case 0x13e654u: goto label_13e654;
        case 0x13e658u: goto label_13e658;
        case 0x13e65cu: goto label_13e65c;
        case 0x13e660u: goto label_13e660;
        case 0x13e664u: goto label_13e664;
        case 0x13e668u: goto label_13e668;
        case 0x13e66cu: goto label_13e66c;
        case 0x13e670u: goto label_13e670;
        case 0x13e674u: goto label_13e674;
        case 0x13e678u: goto label_13e678;
        case 0x13e67cu: goto label_13e67c;
        case 0x13e680u: goto label_13e680;
        case 0x13e684u: goto label_13e684;
        case 0x13e688u: goto label_13e688;
        case 0x13e68cu: goto label_13e68c;
        case 0x13e690u: goto label_13e690;
        case 0x13e694u: goto label_13e694;
        case 0x13e698u: goto label_13e698;
        case 0x13e69cu: goto label_13e69c;
        case 0x13e6a0u: goto label_13e6a0;
        case 0x13e6a4u: goto label_13e6a4;
        case 0x13e6a8u: goto label_13e6a8;
        case 0x13e6acu: goto label_13e6ac;
        case 0x13e6b0u: goto label_13e6b0;
        case 0x13e6b4u: goto label_13e6b4;
        case 0x13e6b8u: goto label_13e6b8;
        case 0x13e6bcu: goto label_13e6bc;
        case 0x13e6c0u: goto label_13e6c0;
        case 0x13e6c4u: goto label_13e6c4;
        case 0x13e6c8u: goto label_13e6c8;
        case 0x13e6ccu: goto label_13e6cc;
        case 0x13e6d0u: goto label_13e6d0;
        case 0x13e6d4u: goto label_13e6d4;
        case 0x13e6d8u: goto label_13e6d8;
        case 0x13e6dcu: goto label_13e6dc;
        case 0x13e6e0u: goto label_13e6e0;
        case 0x13e6e4u: goto label_13e6e4;
        case 0x13e6e8u: goto label_13e6e8;
        case 0x13e6ecu: goto label_13e6ec;
        case 0x13e6f0u: goto label_13e6f0;
        case 0x13e6f4u: goto label_13e6f4;
        case 0x13e6f8u: goto label_13e6f8;
        case 0x13e6fcu: goto label_13e6fc;
        case 0x13e700u: goto label_13e700;
        case 0x13e704u: goto label_13e704;
        case 0x13e708u: goto label_13e708;
        case 0x13e70cu: goto label_13e70c;
        case 0x13e710u: goto label_13e710;
        case 0x13e714u: goto label_13e714;
        case 0x13e718u: goto label_13e718;
        case 0x13e71cu: goto label_13e71c;
        case 0x13e720u: goto label_13e720;
        case 0x13e724u: goto label_13e724;
        case 0x13e728u: goto label_13e728;
        case 0x13e72cu: goto label_13e72c;
        case 0x13e730u: goto label_13e730;
        case 0x13e734u: goto label_13e734;
        case 0x13e738u: goto label_13e738;
        case 0x13e73cu: goto label_13e73c;
        default: break;
    }

    ctx->pc = 0x13e620u;

label_13e620:
    // 0x13e620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13e620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13e624:
    // 0x13e624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13e628:
    // 0x13e628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13e62c:
    // 0x13e62c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13e62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_13e630:
    // 0x13e630: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13e630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13e634:
    // 0x13e634: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x13e634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_13e638:
    // 0x13e638: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13e638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13e63c:
    // 0x13e63c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_13e640:
    if (ctx->pc == 0x13E640u) {
        ctx->pc = 0x13E644u;
        goto label_13e644;
    }
    ctx->pc = 0x13E63Cu;
    {
        const bool branch_taken_0x13e63c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13e63c) {
            ctx->pc = 0x13E678u;
            goto label_13e678;
        }
    }
    ctx->pc = 0x13E644u;
label_13e644:
    // 0x13e644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e648:
    // 0x13e648: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_13e64c:
    if (ctx->pc == 0x13E64Cu) {
        ctx->pc = 0x13E650u;
        goto label_13e650;
    }
    ctx->pc = 0x13E648u;
    {
        const bool branch_taken_0x13e648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13e648) {
            ctx->pc = 0x13E658u;
            goto label_13e658;
        }
    }
    ctx->pc = 0x13E650u;
label_13e650:
    // 0x13e650: 0x10000027  b           . + 4 + (0x27 << 2)
label_13e654:
    if (ctx->pc == 0x13E654u) {
        ctx->pc = 0x13E658u;
        goto label_13e658;
    }
    ctx->pc = 0x13E650u;
    {
        const bool branch_taken_0x13e650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e650) {
            ctx->pc = 0x13E6F0u;
            goto label_13e6f0;
        }
    }
    ctx->pc = 0x13E658u;
label_13e658:
    // 0x13e658: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13e658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13e65c:
    // 0x13e65c: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x13e65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_13e660:
    // 0x13e660: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13e660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e664:
    // 0x13e664: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x13e664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_13e668:
    // 0x13e668: 0x320f809  jalr        $t9
label_13e66c:
    if (ctx->pc == 0x13E66Cu) {
        ctx->pc = 0x13E670u;
        goto label_13e670;
    }
    ctx->pc = 0x13E668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E670u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E668u, 0x13E670u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E670u;
label_13e670:
    // 0x13e670: 0x1000001f  b           . + 4 + (0x1F << 2)
label_13e674:
    if (ctx->pc == 0x13E674u) {
        ctx->pc = 0x13E678u;
        goto label_13e678;
    }
    ctx->pc = 0x13E670u;
    {
        const bool branch_taken_0x13e670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e670) {
            ctx->pc = 0x13E6F0u;
            goto label_13e6f0;
        }
    }
    ctx->pc = 0x13E678u;
label_13e678:
    // 0x13e678: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13e678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13e67c:
    // 0x13e67c: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x13e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_13e680:
    // 0x13e680: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_13e684:
    if (ctx->pc == 0x13E684u) {
        ctx->pc = 0x13E688u;
        goto label_13e688;
    }
    ctx->pc = 0x13E680u;
    {
        const bool branch_taken_0x13e680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e680) {
            ctx->pc = 0x13E6F0u;
            goto label_13e6f0;
        }
    }
    ctx->pc = 0x13E688u;
label_13e688:
    // 0x13e688: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13e688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13e68c:
    // 0x13e68c: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x13e68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_13e690:
    // 0x13e690: 0xc04e308  jal         func_138C20
label_13e694:
    if (ctx->pc == 0x13E694u) {
        ctx->pc = 0x13E698u;
        goto label_13e698;
    }
    ctx->pc = 0x13E690u;
    SET_GPR_U32(ctx, 31, 0x13E698u);
    ctx->pc = 0x138C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138C20u, 0x13E690u, 0x13E698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E698u;
label_13e698:
    // 0x13e698: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_13e69c:
    if (ctx->pc == 0x13E69Cu) {
        ctx->pc = 0x13E6A0u;
        goto label_13e6a0;
    }
    ctx->pc = 0x13E698u;
    {
        const bool branch_taken_0x13e698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e698) {
            ctx->pc = 0x13E6F0u;
            goto label_13e6f0;
        }
    }
    ctx->pc = 0x13E6A0u;
label_13e6a0:
    // 0x13e6a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13e6a4:
    // 0x13e6a4: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x13e6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_13e6a8:
    // 0x13e6a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13e6a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e6ac:
    // 0x13e6ac: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x13e6acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_13e6b0:
    // 0x13e6b0: 0x320f809  jalr        $t9
label_13e6b4:
    if (ctx->pc == 0x13E6B4u) {
        ctx->pc = 0x13E6B8u;
        goto label_13e6b8;
    }
    ctx->pc = 0x13E6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E6B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E6B0u, 0x13E6B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E6B8u;
label_13e6b8:
    // 0x13e6b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13e6bc:
    // 0x13e6bc: 0x3c100014  lui         $s0, 0x14
    ctx->pc = 0x13e6bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20 << 16));
label_13e6c0:
    // 0x13e6c0: 0x2610bf00  addiu       $s0, $s0, -0x4100
    ctx->pc = 0x13e6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950656));
label_13e6c4:
    // 0x13e6c4: 0x200f809  jalr        $s0
label_13e6c8:
    if (ctx->pc == 0x13E6C8u) {
        ctx->pc = 0x13E6CCu;
        goto label_13e6cc;
    }
    ctx->pc = 0x13E6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x13E6CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E6C4u, 0x13E6CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E6CCu;
label_13e6cc:
    // 0x13e6cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13e6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e6d0:
    // 0x13e6d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_13e6d4:
    if (ctx->pc == 0x13E6D4u) {
        ctx->pc = 0x13E6D8u;
        goto label_13e6d8;
    }
    ctx->pc = 0x13E6D0u;
    {
        const bool branch_taken_0x13e6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e6d0) {
            ctx->pc = 0x13E6F0u;
            goto label_13e6f0;
        }
    }
    ctx->pc = 0x13E6D8u;
label_13e6d8:
    // 0x13e6d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13e6dc:
    // 0x13e6dc: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x13e6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_13e6e0:
    // 0x13e6e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13e6e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e6e4:
    // 0x13e6e4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x13e6e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_13e6e8:
    // 0x13e6e8: 0x320f809  jalr        $t9
label_13e6ec:
    if (ctx->pc == 0x13E6ECu) {
        ctx->pc = 0x13E6F0u;
        goto label_13e6f0;
    }
    ctx->pc = 0x13E6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E6F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E6E8u, 0x13E6F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E6F0u;
label_13e6f0:
    // 0x13e6f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13e6f4:
    // 0x13e6f4: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x13e6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_13e6f8:
    // 0x13e6f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13e6f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e6fc:
    // 0x13e6fc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x13e6fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_13e700:
    // 0x13e700: 0x320f809  jalr        $t9
label_13e704:
    if (ctx->pc == 0x13E704u) {
        ctx->pc = 0x13E708u;
        goto label_13e708;
    }
    ctx->pc = 0x13E700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E708u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E700u, 0x13E708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E708u;
label_13e708:
    // 0x13e708: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13e708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13e70c:
    // 0x13e70c: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x13e70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_13e710:
    // 0x13e710: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13e710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e714:
    // 0x13e714: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x13e714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_13e718:
    // 0x13e718: 0x320f809  jalr        $t9
label_13e71c:
    if (ctx->pc == 0x13E71Cu) {
        ctx->pc = 0x13E720u;
        goto label_13e720;
    }
    ctx->pc = 0x13E718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E720u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E718u, 0x13E720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E720u;
label_13e720:
    // 0x13e720: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13e720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13e724:
    // 0x13e724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13e728:
    // 0x13e728: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13e728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13e72c:
    // 0x13e72c: 0x3e00008  jr          $ra
label_13e730:
    if (ctx->pc == 0x13E730u) {
        ctx->pc = 0x13E734u;
        goto label_13e734;
    }
    ctx->pc = 0x13E72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E734u;
label_13e734:
    // 0x13e734: 0x0  nop
    ctx->pc = 0x13e734u;
    // NOP
label_13e738:
    // 0x13e738: 0x0  nop
    ctx->pc = 0x13e738u;
    // NOP
label_13e73c:
    // 0x13e73c: 0x0  nop
    ctx->pc = 0x13e73cu;
    // NOP
    ctx->pc = 0x13e740u;
}
