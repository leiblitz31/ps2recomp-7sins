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

// Function: sub_0019E610
// Address: 0x19e610 - 0x19e6b0
void sub_0019E610_0x19e610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E610_0x19e610");
#endif

    switch (ctx->pc) {
        case 0x19e610u: goto label_19e610;
        case 0x19e614u: goto label_19e614;
        case 0x19e618u: goto label_19e618;
        case 0x19e61cu: goto label_19e61c;
        case 0x19e620u: goto label_19e620;
        case 0x19e624u: goto label_19e624;
        case 0x19e628u: goto label_19e628;
        case 0x19e62cu: goto label_19e62c;
        case 0x19e630u: goto label_19e630;
        case 0x19e634u: goto label_19e634;
        case 0x19e638u: goto label_19e638;
        case 0x19e63cu: goto label_19e63c;
        case 0x19e640u: goto label_19e640;
        case 0x19e644u: goto label_19e644;
        case 0x19e648u: goto label_19e648;
        case 0x19e64cu: goto label_19e64c;
        case 0x19e650u: goto label_19e650;
        case 0x19e654u: goto label_19e654;
        case 0x19e658u: goto label_19e658;
        case 0x19e65cu: goto label_19e65c;
        case 0x19e660u: goto label_19e660;
        case 0x19e664u: goto label_19e664;
        case 0x19e668u: goto label_19e668;
        case 0x19e66cu: goto label_19e66c;
        case 0x19e670u: goto label_19e670;
        case 0x19e674u: goto label_19e674;
        case 0x19e678u: goto label_19e678;
        case 0x19e67cu: goto label_19e67c;
        case 0x19e680u: goto label_19e680;
        case 0x19e684u: goto label_19e684;
        case 0x19e688u: goto label_19e688;
        case 0x19e68cu: goto label_19e68c;
        case 0x19e690u: goto label_19e690;
        case 0x19e694u: goto label_19e694;
        case 0x19e698u: goto label_19e698;
        case 0x19e69cu: goto label_19e69c;
        case 0x19e6a0u: goto label_19e6a0;
        case 0x19e6a4u: goto label_19e6a4;
        case 0x19e6a8u: goto label_19e6a8;
        case 0x19e6acu: goto label_19e6ac;
        default: break;
    }

    ctx->pc = 0x19e610u;

label_19e610:
    // 0x19e610: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19e610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_19e614:
    // 0x19e614: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19e614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19e618:
    // 0x19e618: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19e61c:
    // 0x19e61c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19e61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19e620:
    // 0x19e620: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x19e620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_19e624:
    // 0x19e624: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19e624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_19e628:
    // 0x19e628: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_19e62c:
    if (ctx->pc == 0x19E62Cu) {
        ctx->pc = 0x19E630u;
        goto label_19e630;
    }
    ctx->pc = 0x19E628u;
    {
        const bool branch_taken_0x19e628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e628) {
            ctx->pc = 0x19E638u;
            goto label_19e638;
        }
    }
    ctx->pc = 0x19E630u;
label_19e630:
    // 0x19e630: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e634:
    // 0x19e634: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x19e634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_19e638:
    // 0x19e638: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19e638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_19e63c:
    // 0x19e63c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x19e63cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19e640:
    // 0x19e640: 0xc119b68  jal         func_466DA0
label_19e644:
    if (ctx->pc == 0x19E644u) {
        ctx->pc = 0x19E648u;
        goto label_19e648;
    }
    ctx->pc = 0x19E640u;
    SET_GPR_U32(ctx, 31, 0x19E648u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x19E640u, 0x19E648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E648u;
label_19e648:
    // 0x19e648: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19e648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e64c:
    // 0x19e64c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_19e650:
    if (ctx->pc == 0x19E650u) {
        ctx->pc = 0x19E654u;
        goto label_19e654;
    }
    ctx->pc = 0x19E64Cu;
    {
        const bool branch_taken_0x19e64c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e64c) {
            ctx->pc = 0x19E660u;
            goto label_19e660;
        }
    }
    ctx->pc = 0x19E654u;
label_19e654:
    // 0x19e654: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19e654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e658:
    // 0x19e658: 0x1000000e  b           . + 4 + (0xE << 2)
label_19e65c:
    if (ctx->pc == 0x19E65Cu) {
        ctx->pc = 0x19E660u;
        goto label_19e660;
    }
    ctx->pc = 0x19E658u;
    {
        const bool branch_taken_0x19e658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e658) {
            ctx->pc = 0x19E694u;
            goto label_19e694;
        }
    }
    ctx->pc = 0x19E660u;
label_19e660:
    // 0x19e660: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19e660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e664:
    // 0x19e664: 0xc0ba088  jal         func_2E8220
label_19e668:
    if (ctx->pc == 0x19E668u) {
        ctx->pc = 0x19E66Cu;
        goto label_19e66c;
    }
    ctx->pc = 0x19E664u;
    SET_GPR_U32(ctx, 31, 0x19E66Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x19E664u, 0x19E66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E66Cu;
label_19e66c:
    // 0x19e66c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e66cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e670:
    // 0x19e670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e674:
    // 0x19e674: 0xc0ba088  jal         func_2E8220
label_19e678:
    if (ctx->pc == 0x19E678u) {
        ctx->pc = 0x19E67Cu;
        goto label_19e67c;
    }
    ctx->pc = 0x19E674u;
    SET_GPR_U32(ctx, 31, 0x19E67Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x19E674u, 0x19E67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E67Cu;
label_19e67c:
    // 0x19e67c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_19e680:
    if (ctx->pc == 0x19E680u) {
        ctx->pc = 0x19E684u;
        goto label_19e684;
    }
    ctx->pc = 0x19E67Cu;
    {
        const bool branch_taken_0x19e67c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e67c) {
            ctx->pc = 0x19E638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e638;
        }
    }
    ctx->pc = 0x19E684u;
label_19e684:
    // 0x19e684: 0x200f809  jalr        $s0
label_19e688:
    if (ctx->pc == 0x19E688u) {
        ctx->pc = 0x19E68Cu;
        goto label_19e68c;
    }
    ctx->pc = 0x19E684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x19E68Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E684u, 0x19E68Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E68Cu;
label_19e68c:
    // 0x19e68c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_19e690:
    if (ctx->pc == 0x19E690u) {
        ctx->pc = 0x19E694u;
        goto label_19e694;
    }
    ctx->pc = 0x19E68Cu;
    {
        const bool branch_taken_0x19e68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e68c) {
            ctx->pc = 0x19E638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e638;
        }
    }
    ctx->pc = 0x19E694u;
label_19e694:
    // 0x19e694: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19e694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19e698:
    // 0x19e698: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19e69c:
    // 0x19e69c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19e69cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19e6a0:
    // 0x19e6a0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x19e6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_19e6a4:
    // 0x19e6a4: 0x3e00008  jr          $ra
label_19e6a8:
    if (ctx->pc == 0x19E6A8u) {
        ctx->pc = 0x19E6ACu;
        goto label_19e6ac;
    }
    ctx->pc = 0x19E6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E6ACu;
label_19e6ac:
    // 0x19e6ac: 0x0  nop
    ctx->pc = 0x19e6acu;
    // NOP
    ctx->pc = 0x19e6b0u;
}
