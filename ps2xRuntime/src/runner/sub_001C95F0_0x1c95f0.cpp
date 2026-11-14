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

// Function: sub_001C95F0
// Address: 0x1c95f0 - 0x1c9690
void sub_001C95F0_0x1c95f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C95F0_0x1c95f0");
#endif

    switch (ctx->pc) {
        case 0x1c95f0u: goto label_1c95f0;
        case 0x1c95f4u: goto label_1c95f4;
        case 0x1c95f8u: goto label_1c95f8;
        case 0x1c95fcu: goto label_1c95fc;
        case 0x1c9600u: goto label_1c9600;
        case 0x1c9604u: goto label_1c9604;
        case 0x1c9608u: goto label_1c9608;
        case 0x1c960cu: goto label_1c960c;
        case 0x1c9610u: goto label_1c9610;
        case 0x1c9614u: goto label_1c9614;
        case 0x1c9618u: goto label_1c9618;
        case 0x1c961cu: goto label_1c961c;
        case 0x1c9620u: goto label_1c9620;
        case 0x1c9624u: goto label_1c9624;
        case 0x1c9628u: goto label_1c9628;
        case 0x1c962cu: goto label_1c962c;
        case 0x1c9630u: goto label_1c9630;
        case 0x1c9634u: goto label_1c9634;
        case 0x1c9638u: goto label_1c9638;
        case 0x1c963cu: goto label_1c963c;
        case 0x1c9640u: goto label_1c9640;
        case 0x1c9644u: goto label_1c9644;
        case 0x1c9648u: goto label_1c9648;
        case 0x1c964cu: goto label_1c964c;
        case 0x1c9650u: goto label_1c9650;
        case 0x1c9654u: goto label_1c9654;
        case 0x1c9658u: goto label_1c9658;
        case 0x1c965cu: goto label_1c965c;
        case 0x1c9660u: goto label_1c9660;
        case 0x1c9664u: goto label_1c9664;
        case 0x1c9668u: goto label_1c9668;
        case 0x1c966cu: goto label_1c966c;
        case 0x1c9670u: goto label_1c9670;
        case 0x1c9674u: goto label_1c9674;
        case 0x1c9678u: goto label_1c9678;
        case 0x1c967cu: goto label_1c967c;
        case 0x1c9680u: goto label_1c9680;
        case 0x1c9684u: goto label_1c9684;
        case 0x1c9688u: goto label_1c9688;
        case 0x1c968cu: goto label_1c968c;
        default: break;
    }

    ctx->pc = 0x1c95f0u;

label_1c95f0:
    // 0x1c95f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c95f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c95f4:
    // 0x1c95f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c95f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c95f8:
    // 0x1c95f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c95f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c95fc:
    // 0x1c95fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c95fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c9600:
    // 0x1c9600: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1c9600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1c9604:
    // 0x1c9604: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c9604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c9608:
    // 0x1c9608: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c960c:
    if (ctx->pc == 0x1C960Cu) {
        ctx->pc = 0x1C9610u;
        goto label_1c9610;
    }
    ctx->pc = 0x1C9608u;
    {
        const bool branch_taken_0x1c9608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9608) {
            ctx->pc = 0x1C9618u;
            goto label_1c9618;
        }
    }
    ctx->pc = 0x1C9610u;
label_1c9610:
    // 0x1c9610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9614:
    // 0x1c9614: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1c9614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1c9618:
    // 0x1c9618: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c9618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c961c:
    // 0x1c961c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1c961cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1c9620:
    // 0x1c9620: 0xc119b68  jal         func_466DA0
label_1c9624:
    if (ctx->pc == 0x1C9624u) {
        ctx->pc = 0x1C9628u;
        goto label_1c9628;
    }
    ctx->pc = 0x1C9620u;
    SET_GPR_U32(ctx, 31, 0x1C9628u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1C9620u, 0x1C9628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9628u;
label_1c9628:
    // 0x1c9628: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c9628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c962c:
    // 0x1c962c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1c9630:
    if (ctx->pc == 0x1C9630u) {
        ctx->pc = 0x1C9634u;
        goto label_1c9634;
    }
    ctx->pc = 0x1C962Cu;
    {
        const bool branch_taken_0x1c962c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c962c) {
            ctx->pc = 0x1C9640u;
            goto label_1c9640;
        }
    }
    ctx->pc = 0x1C9634u;
label_1c9634:
    // 0x1c9634: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c9634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c9638:
    // 0x1c9638: 0x1000000e  b           . + 4 + (0xE << 2)
label_1c963c:
    if (ctx->pc == 0x1C963Cu) {
        ctx->pc = 0x1C9640u;
        goto label_1c9640;
    }
    ctx->pc = 0x1C9638u;
    {
        const bool branch_taken_0x1c9638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9638) {
            ctx->pc = 0x1C9674u;
            goto label_1c9674;
        }
    }
    ctx->pc = 0x1C9640u;
label_1c9640:
    // 0x1c9640: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c9640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9644:
    // 0x1c9644: 0xc0ba088  jal         func_2E8220
label_1c9648:
    if (ctx->pc == 0x1C9648u) {
        ctx->pc = 0x1C964Cu;
        goto label_1c964c;
    }
    ctx->pc = 0x1C9644u;
    SET_GPR_U32(ctx, 31, 0x1C964Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1C9644u, 0x1C964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C964Cu;
label_1c964c:
    // 0x1c964c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c964cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c9650:
    // 0x1c9650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9654:
    // 0x1c9654: 0xc0ba088  jal         func_2E8220
label_1c9658:
    if (ctx->pc == 0x1C9658u) {
        ctx->pc = 0x1C965Cu;
        goto label_1c965c;
    }
    ctx->pc = 0x1C9654u;
    SET_GPR_U32(ctx, 31, 0x1C965Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1C9654u, 0x1C965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C965Cu;
label_1c965c:
    // 0x1c965c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_1c9660:
    if (ctx->pc == 0x1C9660u) {
        ctx->pc = 0x1C9664u;
        goto label_1c9664;
    }
    ctx->pc = 0x1C965Cu;
    {
        const bool branch_taken_0x1c965c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c965c) {
            ctx->pc = 0x1C9618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9618;
        }
    }
    ctx->pc = 0x1C9664u;
label_1c9664:
    // 0x1c9664: 0x200f809  jalr        $s0
label_1c9668:
    if (ctx->pc == 0x1C9668u) {
        ctx->pc = 0x1C966Cu;
        goto label_1c966c;
    }
    ctx->pc = 0x1C9664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1C966Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9664u, 0x1C966Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C966Cu;
label_1c966c:
    // 0x1c966c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_1c9670:
    if (ctx->pc == 0x1C9670u) {
        ctx->pc = 0x1C9674u;
        goto label_1c9674;
    }
    ctx->pc = 0x1C966Cu;
    {
        const bool branch_taken_0x1c966c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c966c) {
            ctx->pc = 0x1C9618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9618;
        }
    }
    ctx->pc = 0x1C9674u;
label_1c9674:
    // 0x1c9674: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c9674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c9678:
    // 0x1c9678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c9678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c967c:
    // 0x1c967c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c967cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c9680:
    // 0x1c9680: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1c9680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c9684:
    // 0x1c9684: 0x3e00008  jr          $ra
label_1c9688:
    if (ctx->pc == 0x1C9688u) {
        ctx->pc = 0x1C968Cu;
        goto label_1c968c;
    }
    ctx->pc = 0x1C9684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C968Cu;
label_1c968c:
    // 0x1c968c: 0x0  nop
    ctx->pc = 0x1c968cu;
    // NOP
    ctx->pc = 0x1c9690u;
}
