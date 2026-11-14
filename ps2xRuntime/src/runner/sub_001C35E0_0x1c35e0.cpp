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

// Function: sub_001C35E0
// Address: 0x1c35e0 - 0x1c3680
void sub_001C35E0_0x1c35e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C35E0_0x1c35e0");
#endif

    switch (ctx->pc) {
        case 0x1c35e0u: goto label_1c35e0;
        case 0x1c35e4u: goto label_1c35e4;
        case 0x1c35e8u: goto label_1c35e8;
        case 0x1c35ecu: goto label_1c35ec;
        case 0x1c35f0u: goto label_1c35f0;
        case 0x1c35f4u: goto label_1c35f4;
        case 0x1c35f8u: goto label_1c35f8;
        case 0x1c35fcu: goto label_1c35fc;
        case 0x1c3600u: goto label_1c3600;
        case 0x1c3604u: goto label_1c3604;
        case 0x1c3608u: goto label_1c3608;
        case 0x1c360cu: goto label_1c360c;
        case 0x1c3610u: goto label_1c3610;
        case 0x1c3614u: goto label_1c3614;
        case 0x1c3618u: goto label_1c3618;
        case 0x1c361cu: goto label_1c361c;
        case 0x1c3620u: goto label_1c3620;
        case 0x1c3624u: goto label_1c3624;
        case 0x1c3628u: goto label_1c3628;
        case 0x1c362cu: goto label_1c362c;
        case 0x1c3630u: goto label_1c3630;
        case 0x1c3634u: goto label_1c3634;
        case 0x1c3638u: goto label_1c3638;
        case 0x1c363cu: goto label_1c363c;
        case 0x1c3640u: goto label_1c3640;
        case 0x1c3644u: goto label_1c3644;
        case 0x1c3648u: goto label_1c3648;
        case 0x1c364cu: goto label_1c364c;
        case 0x1c3650u: goto label_1c3650;
        case 0x1c3654u: goto label_1c3654;
        case 0x1c3658u: goto label_1c3658;
        case 0x1c365cu: goto label_1c365c;
        case 0x1c3660u: goto label_1c3660;
        case 0x1c3664u: goto label_1c3664;
        case 0x1c3668u: goto label_1c3668;
        case 0x1c366cu: goto label_1c366c;
        case 0x1c3670u: goto label_1c3670;
        case 0x1c3674u: goto label_1c3674;
        case 0x1c3678u: goto label_1c3678;
        case 0x1c367cu: goto label_1c367c;
        default: break;
    }

    ctx->pc = 0x1c35e0u;

label_1c35e0:
    // 0x1c35e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c35e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c35e4:
    // 0x1c35e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c35e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c35e8:
    // 0x1c35e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c35e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c35ec:
    // 0x1c35ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c35ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c35f0:
    // 0x1c35f0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1c35f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1c35f4:
    // 0x1c35f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c35f8:
    // 0x1c35f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c35fc:
    if (ctx->pc == 0x1C35FCu) {
        ctx->pc = 0x1C3600u;
        goto label_1c3600;
    }
    ctx->pc = 0x1C35F8u;
    {
        const bool branch_taken_0x1c35f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c35f8) {
            ctx->pc = 0x1C3608u;
            goto label_1c3608;
        }
    }
    ctx->pc = 0x1C3600u;
label_1c3600:
    // 0x1c3600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c3604:
    // 0x1c3604: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1c3604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1c3608:
    // 0x1c3608: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c3608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c360c:
    // 0x1c360c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1c360cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c3610:
    // 0x1c3610: 0xc119b68  jal         func_466DA0
label_1c3614:
    if (ctx->pc == 0x1C3614u) {
        ctx->pc = 0x1C3618u;
        goto label_1c3618;
    }
    ctx->pc = 0x1C3610u;
    SET_GPR_U32(ctx, 31, 0x1C3618u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1C3610u, 0x1C3618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3618u;
label_1c3618:
    // 0x1c3618: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c3618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c361c:
    // 0x1c361c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1c3620:
    if (ctx->pc == 0x1C3620u) {
        ctx->pc = 0x1C3624u;
        goto label_1c3624;
    }
    ctx->pc = 0x1C361Cu;
    {
        const bool branch_taken_0x1c361c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c361c) {
            ctx->pc = 0x1C3630u;
            goto label_1c3630;
        }
    }
    ctx->pc = 0x1C3624u;
label_1c3624:
    // 0x1c3624: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c3624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c3628:
    // 0x1c3628: 0x1000000e  b           . + 4 + (0xE << 2)
label_1c362c:
    if (ctx->pc == 0x1C362Cu) {
        ctx->pc = 0x1C3630u;
        goto label_1c3630;
    }
    ctx->pc = 0x1C3628u;
    {
        const bool branch_taken_0x1c3628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3628) {
            ctx->pc = 0x1C3664u;
            goto label_1c3664;
        }
    }
    ctx->pc = 0x1C3630u;
label_1c3630:
    // 0x1c3630: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c3630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3634:
    // 0x1c3634: 0xc0ba088  jal         func_2E8220
label_1c3638:
    if (ctx->pc == 0x1C3638u) {
        ctx->pc = 0x1C363Cu;
        goto label_1c363c;
    }
    ctx->pc = 0x1C3634u;
    SET_GPR_U32(ctx, 31, 0x1C363Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1C3634u, 0x1C363Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C363Cu;
label_1c363c:
    // 0x1c363c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c363cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3640:
    // 0x1c3640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3644:
    // 0x1c3644: 0xc0ba088  jal         func_2E8220
label_1c3648:
    if (ctx->pc == 0x1C3648u) {
        ctx->pc = 0x1C364Cu;
        goto label_1c364c;
    }
    ctx->pc = 0x1C3644u;
    SET_GPR_U32(ctx, 31, 0x1C364Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1C3644u, 0x1C364Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C364Cu;
label_1c364c:
    // 0x1c364c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_1c3650:
    if (ctx->pc == 0x1C3650u) {
        ctx->pc = 0x1C3654u;
        goto label_1c3654;
    }
    ctx->pc = 0x1C364Cu;
    {
        const bool branch_taken_0x1c364c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c364c) {
            ctx->pc = 0x1C3608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3608;
        }
    }
    ctx->pc = 0x1C3654u;
label_1c3654:
    // 0x1c3654: 0x200f809  jalr        $s0
label_1c3658:
    if (ctx->pc == 0x1C3658u) {
        ctx->pc = 0x1C365Cu;
        goto label_1c365c;
    }
    ctx->pc = 0x1C3654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1C365Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3654u, 0x1C365Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C365Cu;
label_1c365c:
    // 0x1c365c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_1c3660:
    if (ctx->pc == 0x1C3660u) {
        ctx->pc = 0x1C3664u;
        goto label_1c3664;
    }
    ctx->pc = 0x1C365Cu;
    {
        const bool branch_taken_0x1c365c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c365c) {
            ctx->pc = 0x1C3608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3608;
        }
    }
    ctx->pc = 0x1C3664u;
label_1c3664:
    // 0x1c3664: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c3664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c3668:
    // 0x1c3668: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c3668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c366c:
    // 0x1c366c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c366cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3670:
    // 0x1c3670: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1c3670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c3674:
    // 0x1c3674: 0x3e00008  jr          $ra
label_1c3678:
    if (ctx->pc == 0x1C3678u) {
        ctx->pc = 0x1C367Cu;
        goto label_1c367c;
    }
    ctx->pc = 0x1C3674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C367Cu;
label_1c367c:
    // 0x1c367c: 0x0  nop
    ctx->pc = 0x1c367cu;
    // NOP
    ctx->pc = 0x1c3680u;
}
