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

// Function: sub_0018F630
// Address: 0x18f630 - 0x18f6d0
void sub_0018F630_0x18f630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F630_0x18f630");
#endif

    switch (ctx->pc) {
        case 0x18f630u: goto label_18f630;
        case 0x18f634u: goto label_18f634;
        case 0x18f638u: goto label_18f638;
        case 0x18f63cu: goto label_18f63c;
        case 0x18f640u: goto label_18f640;
        case 0x18f644u: goto label_18f644;
        case 0x18f648u: goto label_18f648;
        case 0x18f64cu: goto label_18f64c;
        case 0x18f650u: goto label_18f650;
        case 0x18f654u: goto label_18f654;
        case 0x18f658u: goto label_18f658;
        case 0x18f65cu: goto label_18f65c;
        case 0x18f660u: goto label_18f660;
        case 0x18f664u: goto label_18f664;
        case 0x18f668u: goto label_18f668;
        case 0x18f66cu: goto label_18f66c;
        case 0x18f670u: goto label_18f670;
        case 0x18f674u: goto label_18f674;
        case 0x18f678u: goto label_18f678;
        case 0x18f67cu: goto label_18f67c;
        case 0x18f680u: goto label_18f680;
        case 0x18f684u: goto label_18f684;
        case 0x18f688u: goto label_18f688;
        case 0x18f68cu: goto label_18f68c;
        case 0x18f690u: goto label_18f690;
        case 0x18f694u: goto label_18f694;
        case 0x18f698u: goto label_18f698;
        case 0x18f69cu: goto label_18f69c;
        case 0x18f6a0u: goto label_18f6a0;
        case 0x18f6a4u: goto label_18f6a4;
        case 0x18f6a8u: goto label_18f6a8;
        case 0x18f6acu: goto label_18f6ac;
        case 0x18f6b0u: goto label_18f6b0;
        case 0x18f6b4u: goto label_18f6b4;
        case 0x18f6b8u: goto label_18f6b8;
        case 0x18f6bcu: goto label_18f6bc;
        case 0x18f6c0u: goto label_18f6c0;
        case 0x18f6c4u: goto label_18f6c4;
        case 0x18f6c8u: goto label_18f6c8;
        case 0x18f6ccu: goto label_18f6cc;
        default: break;
    }

    ctx->pc = 0x18f630u;

label_18f630:
    // 0x18f630: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18f630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_18f634:
    // 0x18f634: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18f634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18f638:
    // 0x18f638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18f63c:
    // 0x18f63c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18f640:
    // 0x18f640: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x18f640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_18f644:
    // 0x18f644: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18f644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18f648:
    // 0x18f648: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_18f64c:
    if (ctx->pc == 0x18F64Cu) {
        ctx->pc = 0x18F650u;
        goto label_18f650;
    }
    ctx->pc = 0x18F648u;
    {
        const bool branch_taken_0x18f648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f648) {
            ctx->pc = 0x18F658u;
            goto label_18f658;
        }
    }
    ctx->pc = 0x18F650u;
label_18f650:
    // 0x18f650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18f654:
    // 0x18f654: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x18f654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_18f658:
    // 0x18f658: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18f658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18f65c:
    // 0x18f65c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x18f65cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18f660:
    // 0x18f660: 0xc119b68  jal         func_466DA0
label_18f664:
    if (ctx->pc == 0x18F664u) {
        ctx->pc = 0x18F668u;
        goto label_18f668;
    }
    ctx->pc = 0x18F660u;
    SET_GPR_U32(ctx, 31, 0x18F668u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x18F660u, 0x18F668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F668u;
label_18f668:
    // 0x18f668: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18f668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f66c:
    // 0x18f66c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_18f670:
    if (ctx->pc == 0x18F670u) {
        ctx->pc = 0x18F674u;
        goto label_18f674;
    }
    ctx->pc = 0x18F66Cu;
    {
        const bool branch_taken_0x18f66c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f66c) {
            ctx->pc = 0x18F680u;
            goto label_18f680;
        }
    }
    ctx->pc = 0x18F674u;
label_18f674:
    // 0x18f674: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18f674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f678:
    // 0x18f678: 0x1000000e  b           . + 4 + (0xE << 2)
label_18f67c:
    if (ctx->pc == 0x18F67Cu) {
        ctx->pc = 0x18F680u;
        goto label_18f680;
    }
    ctx->pc = 0x18F678u;
    {
        const bool branch_taken_0x18f678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f678) {
            ctx->pc = 0x18F6B4u;
            goto label_18f6b4;
        }
    }
    ctx->pc = 0x18F680u;
label_18f680:
    // 0x18f680: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18f680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f684:
    // 0x18f684: 0xc0ba088  jal         func_2E8220
label_18f688:
    if (ctx->pc == 0x18F688u) {
        ctx->pc = 0x18F68Cu;
        goto label_18f68c;
    }
    ctx->pc = 0x18F684u;
    SET_GPR_U32(ctx, 31, 0x18F68Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x18F684u, 0x18F68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F68Cu;
label_18f68c:
    // 0x18f68c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18f68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f690:
    // 0x18f690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f694:
    // 0x18f694: 0xc0ba088  jal         func_2E8220
label_18f698:
    if (ctx->pc == 0x18F698u) {
        ctx->pc = 0x18F69Cu;
        goto label_18f69c;
    }
    ctx->pc = 0x18F694u;
    SET_GPR_U32(ctx, 31, 0x18F69Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x18F694u, 0x18F69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F69Cu;
label_18f69c:
    // 0x18f69c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_18f6a0:
    if (ctx->pc == 0x18F6A0u) {
        ctx->pc = 0x18F6A4u;
        goto label_18f6a4;
    }
    ctx->pc = 0x18F69Cu;
    {
        const bool branch_taken_0x18f69c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f69c) {
            ctx->pc = 0x18F658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f658;
        }
    }
    ctx->pc = 0x18F6A4u;
label_18f6a4:
    // 0x18f6a4: 0x200f809  jalr        $s0
label_18f6a8:
    if (ctx->pc == 0x18F6A8u) {
        ctx->pc = 0x18F6ACu;
        goto label_18f6ac;
    }
    ctx->pc = 0x18F6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x18F6ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F6A4u, 0x18F6ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F6ACu;
label_18f6ac:
    // 0x18f6ac: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_18f6b0:
    if (ctx->pc == 0x18F6B0u) {
        ctx->pc = 0x18F6B4u;
        goto label_18f6b4;
    }
    ctx->pc = 0x18F6ACu;
    {
        const bool branch_taken_0x18f6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f6ac) {
            ctx->pc = 0x18F658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f658;
        }
    }
    ctx->pc = 0x18F6B4u;
label_18f6b4:
    // 0x18f6b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18f6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18f6b8:
    // 0x18f6b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f6b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18f6bc:
    // 0x18f6bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f6bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18f6c0:
    // 0x18f6c0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x18f6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_18f6c4:
    // 0x18f6c4: 0x3e00008  jr          $ra
label_18f6c8:
    if (ctx->pc == 0x18F6C8u) {
        ctx->pc = 0x18F6CCu;
        goto label_18f6cc;
    }
    ctx->pc = 0x18F6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F6CCu;
label_18f6cc:
    // 0x18f6cc: 0x0  nop
    ctx->pc = 0x18f6ccu;
    // NOP
    ctx->pc = 0x18f6d0u;
}
