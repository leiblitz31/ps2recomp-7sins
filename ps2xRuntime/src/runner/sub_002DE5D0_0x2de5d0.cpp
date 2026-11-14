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

// Function: sub_002DE5D0
// Address: 0x2de5d0 - 0x2de670
void sub_002DE5D0_0x2de5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE5D0_0x2de5d0");
#endif

    switch (ctx->pc) {
        case 0x2de5d0u: goto label_2de5d0;
        case 0x2de5d4u: goto label_2de5d4;
        case 0x2de5d8u: goto label_2de5d8;
        case 0x2de5dcu: goto label_2de5dc;
        case 0x2de5e0u: goto label_2de5e0;
        case 0x2de5e4u: goto label_2de5e4;
        case 0x2de5e8u: goto label_2de5e8;
        case 0x2de5ecu: goto label_2de5ec;
        case 0x2de5f0u: goto label_2de5f0;
        case 0x2de5f4u: goto label_2de5f4;
        case 0x2de5f8u: goto label_2de5f8;
        case 0x2de5fcu: goto label_2de5fc;
        case 0x2de600u: goto label_2de600;
        case 0x2de604u: goto label_2de604;
        case 0x2de608u: goto label_2de608;
        case 0x2de60cu: goto label_2de60c;
        case 0x2de610u: goto label_2de610;
        case 0x2de614u: goto label_2de614;
        case 0x2de618u: goto label_2de618;
        case 0x2de61cu: goto label_2de61c;
        case 0x2de620u: goto label_2de620;
        case 0x2de624u: goto label_2de624;
        case 0x2de628u: goto label_2de628;
        case 0x2de62cu: goto label_2de62c;
        case 0x2de630u: goto label_2de630;
        case 0x2de634u: goto label_2de634;
        case 0x2de638u: goto label_2de638;
        case 0x2de63cu: goto label_2de63c;
        case 0x2de640u: goto label_2de640;
        case 0x2de644u: goto label_2de644;
        case 0x2de648u: goto label_2de648;
        case 0x2de64cu: goto label_2de64c;
        case 0x2de650u: goto label_2de650;
        case 0x2de654u: goto label_2de654;
        case 0x2de658u: goto label_2de658;
        case 0x2de65cu: goto label_2de65c;
        case 0x2de660u: goto label_2de660;
        case 0x2de664u: goto label_2de664;
        case 0x2de668u: goto label_2de668;
        case 0x2de66cu: goto label_2de66c;
        default: break;
    }

    ctx->pc = 0x2de5d0u;

label_2de5d0:
    // 0x2de5d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2de5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2de5d4:
    // 0x2de5d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2de5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2de5d8:
    // 0x2de5d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2de5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2de5dc:
    // 0x2de5dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2de5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2de5e0:
    // 0x2de5e0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2de5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2de5e4:
    // 0x2de5e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2de5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2de5e8:
    // 0x2de5e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2de5ec:
    if (ctx->pc == 0x2DE5ECu) {
        ctx->pc = 0x2DE5F0u;
        goto label_2de5f0;
    }
    ctx->pc = 0x2DE5E8u;
    {
        const bool branch_taken_0x2de5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de5e8) {
            ctx->pc = 0x2DE5F8u;
            goto label_2de5f8;
        }
    }
    ctx->pc = 0x2DE5F0u;
label_2de5f0:
    // 0x2de5f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2de5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de5f4:
    // 0x2de5f4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2de5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2de5f8:
    // 0x2de5f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2de5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2de5fc:
    // 0x2de5fc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2de5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2de600:
    // 0x2de600: 0xc119b68  jal         func_466DA0
label_2de604:
    if (ctx->pc == 0x2DE604u) {
        ctx->pc = 0x2DE608u;
        goto label_2de608;
    }
    ctx->pc = 0x2DE600u;
    SET_GPR_U32(ctx, 31, 0x2DE608u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2DE600u, 0x2DE608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE608u;
label_2de608:
    // 0x2de608: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2de608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de60c:
    // 0x2de60c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2de610:
    if (ctx->pc == 0x2DE610u) {
        ctx->pc = 0x2DE614u;
        goto label_2de614;
    }
    ctx->pc = 0x2DE60Cu;
    {
        const bool branch_taken_0x2de60c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de60c) {
            ctx->pc = 0x2DE620u;
            goto label_2de620;
        }
    }
    ctx->pc = 0x2DE614u;
label_2de614:
    // 0x2de614: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2de614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2de618:
    // 0x2de618: 0x1000000e  b           . + 4 + (0xE << 2)
label_2de61c:
    if (ctx->pc == 0x2DE61Cu) {
        ctx->pc = 0x2DE620u;
        goto label_2de620;
    }
    ctx->pc = 0x2DE618u;
    {
        const bool branch_taken_0x2de618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de618) {
            ctx->pc = 0x2DE654u;
            goto label_2de654;
        }
    }
    ctx->pc = 0x2DE620u;
label_2de620:
    // 0x2de620: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2de620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de624:
    // 0x2de624: 0xc0ba088  jal         func_2E8220
label_2de628:
    if (ctx->pc == 0x2DE628u) {
        ctx->pc = 0x2DE62Cu;
        goto label_2de62c;
    }
    ctx->pc = 0x2DE624u;
    SET_GPR_U32(ctx, 31, 0x2DE62Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2DE624u, 0x2DE62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE62Cu;
label_2de62c:
    // 0x2de62c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2de62cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de630:
    // 0x2de630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de634:
    // 0x2de634: 0xc0ba088  jal         func_2E8220
label_2de638:
    if (ctx->pc == 0x2DE638u) {
        ctx->pc = 0x2DE63Cu;
        goto label_2de63c;
    }
    ctx->pc = 0x2DE634u;
    SET_GPR_U32(ctx, 31, 0x2DE63Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2DE634u, 0x2DE63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE63Cu;
label_2de63c:
    // 0x2de63c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2de640:
    if (ctx->pc == 0x2DE640u) {
        ctx->pc = 0x2DE644u;
        goto label_2de644;
    }
    ctx->pc = 0x2DE63Cu;
    {
        const bool branch_taken_0x2de63c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de63c) {
            ctx->pc = 0x2DE5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de5f8;
        }
    }
    ctx->pc = 0x2DE644u;
label_2de644:
    // 0x2de644: 0x200f809  jalr        $s0
label_2de648:
    if (ctx->pc == 0x2DE648u) {
        ctx->pc = 0x2DE64Cu;
        goto label_2de64c;
    }
    ctx->pc = 0x2DE644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2DE64Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE644u, 0x2DE64Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DE64Cu;
label_2de64c:
    // 0x2de64c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2de650:
    if (ctx->pc == 0x2DE650u) {
        ctx->pc = 0x2DE654u;
        goto label_2de654;
    }
    ctx->pc = 0x2DE64Cu;
    {
        const bool branch_taken_0x2de64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de64c) {
            ctx->pc = 0x2DE5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de5f8;
        }
    }
    ctx->pc = 0x2DE654u;
label_2de654:
    // 0x2de654: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2de654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2de658:
    // 0x2de658: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2de658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2de65c:
    // 0x2de65c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2de65cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2de660:
    // 0x2de660: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2de660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2de664:
    // 0x2de664: 0x3e00008  jr          $ra
label_2de668:
    if (ctx->pc == 0x2DE668u) {
        ctx->pc = 0x2DE66Cu;
        goto label_2de66c;
    }
    ctx->pc = 0x2DE664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE66Cu;
label_2de66c:
    // 0x2de66c: 0x0  nop
    ctx->pc = 0x2de66cu;
    // NOP
    ctx->pc = 0x2de670u;
}
