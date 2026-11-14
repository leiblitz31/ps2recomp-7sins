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

// Function: sub_002175F0
// Address: 0x2175f0 - 0x217690
void sub_002175F0_0x2175f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002175F0_0x2175f0");
#endif

    switch (ctx->pc) {
        case 0x2175f0u: goto label_2175f0;
        case 0x2175f4u: goto label_2175f4;
        case 0x2175f8u: goto label_2175f8;
        case 0x2175fcu: goto label_2175fc;
        case 0x217600u: goto label_217600;
        case 0x217604u: goto label_217604;
        case 0x217608u: goto label_217608;
        case 0x21760cu: goto label_21760c;
        case 0x217610u: goto label_217610;
        case 0x217614u: goto label_217614;
        case 0x217618u: goto label_217618;
        case 0x21761cu: goto label_21761c;
        case 0x217620u: goto label_217620;
        case 0x217624u: goto label_217624;
        case 0x217628u: goto label_217628;
        case 0x21762cu: goto label_21762c;
        case 0x217630u: goto label_217630;
        case 0x217634u: goto label_217634;
        case 0x217638u: goto label_217638;
        case 0x21763cu: goto label_21763c;
        case 0x217640u: goto label_217640;
        case 0x217644u: goto label_217644;
        case 0x217648u: goto label_217648;
        case 0x21764cu: goto label_21764c;
        case 0x217650u: goto label_217650;
        case 0x217654u: goto label_217654;
        case 0x217658u: goto label_217658;
        case 0x21765cu: goto label_21765c;
        case 0x217660u: goto label_217660;
        case 0x217664u: goto label_217664;
        case 0x217668u: goto label_217668;
        case 0x21766cu: goto label_21766c;
        case 0x217670u: goto label_217670;
        case 0x217674u: goto label_217674;
        case 0x217678u: goto label_217678;
        case 0x21767cu: goto label_21767c;
        case 0x217680u: goto label_217680;
        case 0x217684u: goto label_217684;
        case 0x217688u: goto label_217688;
        case 0x21768cu: goto label_21768c;
        default: break;
    }

    ctx->pc = 0x2175f0u;

label_2175f0:
    // 0x2175f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2175f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2175f4:
    // 0x2175f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2175f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2175f8:
    // 0x2175f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2175f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2175fc:
    // 0x2175fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2175fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_217600:
    // 0x217600: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x217600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_217604:
    // 0x217604: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x217604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_217608:
    // 0x217608: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_21760c:
    if (ctx->pc == 0x21760Cu) {
        ctx->pc = 0x217610u;
        goto label_217610;
    }
    ctx->pc = 0x217608u;
    {
        const bool branch_taken_0x217608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217608) {
            ctx->pc = 0x217618u;
            goto label_217618;
        }
    }
    ctx->pc = 0x217610u;
label_217610:
    // 0x217610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217614:
    // 0x217614: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x217614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_217618:
    // 0x217618: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x217618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_21761c:
    // 0x21761c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x21761cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_217620:
    // 0x217620: 0xc119b68  jal         func_466DA0
label_217624:
    if (ctx->pc == 0x217624u) {
        ctx->pc = 0x217628u;
        goto label_217628;
    }
    ctx->pc = 0x217620u;
    SET_GPR_U32(ctx, 31, 0x217628u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x217620u, 0x217628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217628u;
label_217628:
    // 0x217628: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x217628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21762c:
    // 0x21762c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_217630:
    if (ctx->pc == 0x217630u) {
        ctx->pc = 0x217634u;
        goto label_217634;
    }
    ctx->pc = 0x21762Cu;
    {
        const bool branch_taken_0x21762c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x21762c) {
            ctx->pc = 0x217640u;
            goto label_217640;
        }
    }
    ctx->pc = 0x217634u;
label_217634:
    // 0x217634: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x217634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_217638:
    // 0x217638: 0x1000000e  b           . + 4 + (0xE << 2)
label_21763c:
    if (ctx->pc == 0x21763Cu) {
        ctx->pc = 0x217640u;
        goto label_217640;
    }
    ctx->pc = 0x217638u;
    {
        const bool branch_taken_0x217638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217638) {
            ctx->pc = 0x217674u;
            goto label_217674;
        }
    }
    ctx->pc = 0x217640u;
label_217640:
    // 0x217640: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x217640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217644:
    // 0x217644: 0xc0ba088  jal         func_2E8220
label_217648:
    if (ctx->pc == 0x217648u) {
        ctx->pc = 0x21764Cu;
        goto label_21764c;
    }
    ctx->pc = 0x217644u;
    SET_GPR_U32(ctx, 31, 0x21764Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x217644u, 0x21764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21764Cu;
label_21764c:
    // 0x21764c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21764cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_217650:
    // 0x217650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217654:
    // 0x217654: 0xc0ba088  jal         func_2E8220
label_217658:
    if (ctx->pc == 0x217658u) {
        ctx->pc = 0x21765Cu;
        goto label_21765c;
    }
    ctx->pc = 0x217654u;
    SET_GPR_U32(ctx, 31, 0x21765Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x217654u, 0x21765Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21765Cu;
label_21765c:
    // 0x21765c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_217660:
    if (ctx->pc == 0x217660u) {
        ctx->pc = 0x217664u;
        goto label_217664;
    }
    ctx->pc = 0x21765Cu;
    {
        const bool branch_taken_0x21765c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21765c) {
            ctx->pc = 0x217618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217618;
        }
    }
    ctx->pc = 0x217664u;
label_217664:
    // 0x217664: 0x200f809  jalr        $s0
label_217668:
    if (ctx->pc == 0x217668u) {
        ctx->pc = 0x21766Cu;
        goto label_21766c;
    }
    ctx->pc = 0x217664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x21766Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217664u, 0x21766Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21766Cu;
label_21766c:
    // 0x21766c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_217670:
    if (ctx->pc == 0x217670u) {
        ctx->pc = 0x217674u;
        goto label_217674;
    }
    ctx->pc = 0x21766Cu;
    {
        const bool branch_taken_0x21766c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21766c) {
            ctx->pc = 0x217618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217618;
        }
    }
    ctx->pc = 0x217674u;
label_217674:
    // 0x217674: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x217674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_217678:
    // 0x217678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x217678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21767c:
    // 0x21767c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21767cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_217680:
    // 0x217680: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x217680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_217684:
    // 0x217684: 0x3e00008  jr          $ra
label_217688:
    if (ctx->pc == 0x217688u) {
        ctx->pc = 0x21768Cu;
        goto label_21768c;
    }
    ctx->pc = 0x217684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21768Cu;
label_21768c:
    // 0x21768c: 0x0  nop
    ctx->pc = 0x21768cu;
    // NOP
    ctx->pc = 0x217690u;
}
