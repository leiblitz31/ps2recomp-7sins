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

// Function: sub_001565D0
// Address: 0x1565d0 - 0x1566b0
void sub_001565D0_0x1565d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001565D0_0x1565d0");
#endif

    switch (ctx->pc) {
        case 0x1565d0u: goto label_1565d0;
        case 0x1565d4u: goto label_1565d4;
        case 0x1565d8u: goto label_1565d8;
        case 0x1565dcu: goto label_1565dc;
        case 0x1565e0u: goto label_1565e0;
        case 0x1565e4u: goto label_1565e4;
        case 0x1565e8u: goto label_1565e8;
        case 0x1565ecu: goto label_1565ec;
        case 0x1565f0u: goto label_1565f0;
        case 0x1565f4u: goto label_1565f4;
        case 0x1565f8u: goto label_1565f8;
        case 0x1565fcu: goto label_1565fc;
        case 0x156600u: goto label_156600;
        case 0x156604u: goto label_156604;
        case 0x156608u: goto label_156608;
        case 0x15660cu: goto label_15660c;
        case 0x156610u: goto label_156610;
        case 0x156614u: goto label_156614;
        case 0x156618u: goto label_156618;
        case 0x15661cu: goto label_15661c;
        case 0x156620u: goto label_156620;
        case 0x156624u: goto label_156624;
        case 0x156628u: goto label_156628;
        case 0x15662cu: goto label_15662c;
        case 0x156630u: goto label_156630;
        case 0x156634u: goto label_156634;
        case 0x156638u: goto label_156638;
        case 0x15663cu: goto label_15663c;
        case 0x156640u: goto label_156640;
        case 0x156644u: goto label_156644;
        case 0x156648u: goto label_156648;
        case 0x15664cu: goto label_15664c;
        case 0x156650u: goto label_156650;
        case 0x156654u: goto label_156654;
        case 0x156658u: goto label_156658;
        case 0x15665cu: goto label_15665c;
        case 0x156660u: goto label_156660;
        case 0x156664u: goto label_156664;
        case 0x156668u: goto label_156668;
        case 0x15666cu: goto label_15666c;
        case 0x156670u: goto label_156670;
        case 0x156674u: goto label_156674;
        case 0x156678u: goto label_156678;
        case 0x15667cu: goto label_15667c;
        case 0x156680u: goto label_156680;
        case 0x156684u: goto label_156684;
        case 0x156688u: goto label_156688;
        case 0x15668cu: goto label_15668c;
        case 0x156690u: goto label_156690;
        case 0x156694u: goto label_156694;
        case 0x156698u: goto label_156698;
        case 0x15669cu: goto label_15669c;
        case 0x1566a0u: goto label_1566a0;
        case 0x1566a4u: goto label_1566a4;
        case 0x1566a8u: goto label_1566a8;
        case 0x1566acu: goto label_1566ac;
        default: break;
    }

    ctx->pc = 0x1565d0u;

label_1565d0:
    // 0x1565d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1565d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1565d4:
    // 0x1565d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1565d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1565d8:
    // 0x1565d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1565d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1565dc:
    // 0x1565dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1565dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1565e0:
    // 0x1565e0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1565e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_1565e4:
    // 0x1565e4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1565e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1565e8:
    // 0x1565e8: 0xc08ec3c  jal         func_23B0F0
label_1565ec:
    if (ctx->pc == 0x1565ECu) {
        ctx->pc = 0x1565F0u;
        goto label_1565f0;
    }
    ctx->pc = 0x1565E8u;
    SET_GPR_U32(ctx, 31, 0x1565F0u);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x1565E8u, 0x1565F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1565F0u;
label_1565f0:
    // 0x1565f0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1565f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1565f4:
    // 0x1565f4: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1565f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_1565f8:
    // 0x1565f8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1565f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1565fc:
    // 0x1565fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1565fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_156600:
    // 0x156600: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x156600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_156604:
    // 0x156604: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x156604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_156608:
    // 0x156608: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x156608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_15660c:
    // 0x15660c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x15660cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_156610:
    // 0x156610: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x156610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_156614:
    // 0x156614: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x156614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_156618:
    // 0x156618: 0xc119b68  jal         func_466DA0
label_15661c:
    if (ctx->pc == 0x15661Cu) {
        ctx->pc = 0x156620u;
        goto label_156620;
    }
    ctx->pc = 0x156618u;
    SET_GPR_U32(ctx, 31, 0x156620u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x156618u, 0x156620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156620u;
label_156620:
    // 0x156620: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x156620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_156624:
    // 0x156624: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x156624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_156628:
    // 0x156628: 0xc0400e0  jal         func_100380
label_15662c:
    if (ctx->pc == 0x15662Cu) {
        ctx->pc = 0x156630u;
        goto label_156630;
    }
    ctx->pc = 0x156628u;
    SET_GPR_U32(ctx, 31, 0x156630u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x156628u, 0x156630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156630u;
label_156630:
    // 0x156630: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x156630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_156634:
    // 0x156634: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_156638:
    if (ctx->pc == 0x156638u) {
        ctx->pc = 0x15663Cu;
        goto label_15663c;
    }
    ctx->pc = 0x156634u;
    {
        const bool branch_taken_0x156634 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x156634) {
            ctx->pc = 0x15664Cu;
            goto label_15664c;
        }
    }
    ctx->pc = 0x15663Cu;
label_15663c:
    // 0x15663c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15663cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_156640:
    // 0x156640: 0xc08aef8  jal         func_22BBE0
label_156644:
    if (ctx->pc == 0x156644u) {
        ctx->pc = 0x156648u;
        goto label_156648;
    }
    ctx->pc = 0x156640u;
    SET_GPR_U32(ctx, 31, 0x156648u);
    ctx->pc = 0x22BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BBE0u, 0x156640u, 0x156648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156648u;
label_156648:
    // 0x156648: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x156648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15664c:
    // 0x15664c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x15664cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_156650:
    // 0x156650: 0xac500034  sw          $s0, 0x34($v0)
    ctx->pc = 0x156650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 16));
label_156654:
    // 0x156654: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x156654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_156658:
    // 0x156658: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x156658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15665c:
    // 0x15665c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x15665cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_156660:
    // 0x156660: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x156660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_156664:
    // 0x156664: 0x320f809  jalr        $t9
label_156668:
    if (ctx->pc == 0x156668u) {
        ctx->pc = 0x15666Cu;
        goto label_15666c;
    }
    ctx->pc = 0x156664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15666Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156664u, 0x15666Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15666Cu;
label_15666c:
    // 0x15666c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x15666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_156670:
    // 0x156670: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x156670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_156674:
    // 0x156674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156678:
    // 0x156678: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x156678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15667c:
    // 0x15667c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x15667cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_156680:
    // 0x156680: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x156680u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_156684:
    // 0x156684: 0x320f809  jalr        $t9
label_156688:
    if (ctx->pc == 0x156688u) {
        ctx->pc = 0x15668Cu;
        goto label_15668c;
    }
    ctx->pc = 0x156684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15668Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156684u, 0x15668Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15668Cu;
label_15668c:
    // 0x15668c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15668cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_156690:
    // 0x156690: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x156690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_156694:
    // 0x156694: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x156694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_156698:
    // 0x156698: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x156698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15669c:
    // 0x15669c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x15669cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1566a0:
    // 0x1566a0: 0x3e00008  jr          $ra
label_1566a4:
    if (ctx->pc == 0x1566A4u) {
        ctx->pc = 0x1566A8u;
        goto label_1566a8;
    }
    ctx->pc = 0x1566A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1566A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1566A8u;
label_1566a8:
    // 0x1566a8: 0x0  nop
    ctx->pc = 0x1566a8u;
    // NOP
label_1566ac:
    // 0x1566ac: 0x0  nop
    ctx->pc = 0x1566acu;
    // NOP
    ctx->pc = 0x1566b0u;
}
