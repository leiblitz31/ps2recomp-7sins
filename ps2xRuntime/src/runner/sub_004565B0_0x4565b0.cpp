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

// Function: sub_004565B0
// Address: 0x4565b0 - 0x4566e0
void sub_004565B0_0x4565b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004565B0_0x4565b0");
#endif

    switch (ctx->pc) {
        case 0x4565e4u: goto label_4565e4;
        case 0x4565f4u: goto label_4565f4;
        case 0x456608u: goto label_456608;
        case 0x456628u: goto label_456628;
        case 0x456634u: goto label_456634;
        case 0x456648u: goto label_456648;
        case 0x456654u: goto label_456654;
        case 0x456668u: goto label_456668;
        case 0x456690u: goto label_456690;
        case 0x4566a0u: goto label_4566a0;
        case 0x4566c0u: goto label_4566c0;
        default: break;
    }

    ctx->pc = 0x4565b0u;

    // 0x4565b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4565b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4565b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4565b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4565b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4565b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4565bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4565bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4565c0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x4565c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x4565c4: 0xa7a50040  sh          $a1, 0x40($sp)
    ctx->pc = 0x4565c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 5));
    // 0x4565c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4565c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4565cc: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x4565CCu;
    {
        const bool branch_taken_0x4565cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4565cc) {
            ctx->pc = 0x4566C0u;
            goto label_4566c0;
        }
    }
    ctx->pc = 0x4565D4u;
    // 0x4565d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4565d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4565d8: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x4565d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4565dc: 0xc114338  jal         func_450CE0
    ctx->pc = 0x4565DCu;
    SET_GPR_U32(ctx, 31, 0x4565E4u);
    ctx->pc = 0x450CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450CE0u, 0x4565DCu, 0x4565E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4565E4u;
label_4565e4:
    // 0x4565e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4565e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4565e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4565e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4565ec: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x4565ECu;
    {
        const bool branch_taken_0x4565ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4565ec) {
            ctx->pc = 0x456670u;
            goto label_456670;
        }
    }
    ctx->pc = 0x4565F4u;
label_4565f4:
    // 0x4565f4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4565f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4565f8: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x4565f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4565fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4565fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456600: 0xc11451c  jal         func_451470
    ctx->pc = 0x456600u;
    SET_GPR_U32(ctx, 31, 0x456608u);
    ctx->pc = 0x451470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x451470u, 0x456600u, 0x456608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456608u;
label_456608:
    // 0x456608: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x456608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45660c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x45660Cu;
    {
        const bool branch_taken_0x45660c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45660c) {
            ctx->pc = 0x45666Cu;
            goto label_45666c;
        }
    }
    ctx->pc = 0x456614u;
    // 0x456614: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x456614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x456618: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x456618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x45661c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x45661cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456620: 0xc11451c  jal         func_451470
    ctx->pc = 0x456620u;
    SET_GPR_U32(ctx, 31, 0x456628u);
    ctx->pc = 0x451470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x451470u, 0x456620u, 0x456628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456628u;
label_456628:
    // 0x456628: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x456628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45662c: 0xc1159b8  jal         func_4566E0
    ctx->pc = 0x45662Cu;
    SET_GPR_U32(ctx, 31, 0x456634u);
    ctx->pc = 0x4566E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4566E0u, 0x45662Cu, 0x456634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456634u;
label_456634:
    // 0x456634: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x456634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x456638: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x456638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x45663c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x45663cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456640: 0xc11451c  jal         func_451470
    ctx->pc = 0x456640u;
    SET_GPR_U32(ctx, 31, 0x456648u);
    ctx->pc = 0x451470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x451470u, 0x456640u, 0x456648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456648u;
label_456648:
    // 0x456648: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x456648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45664c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x45664Cu;
    SET_GPR_U32(ctx, 31, 0x456654u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x45664Cu, 0x456654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456654u;
label_456654:
    // 0x456654: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x456654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x456658: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x456658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x45665c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x45665cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456660: 0xc11451c  jal         func_451470
    ctx->pc = 0x456660u;
    SET_GPR_U32(ctx, 31, 0x456668u);
    ctx->pc = 0x451470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x451470u, 0x456660u, 0x456668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456668u;
label_456668:
    // 0x456668: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x456668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_45666c:
    // 0x45666c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x45666cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_456670:
    // 0x456670: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x456670u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x456674: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x456674u;
    {
        const bool branch_taken_0x456674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x456674) {
            ctx->pc = 0x4565F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4565f4;
        }
    }
    ctx->pc = 0x45667Cu;
    // 0x45667c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x45667cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x456680: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x456680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x456684: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x456684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x456688: 0xc113d28  jal         func_44F4A0
    ctx->pc = 0x456688u;
    SET_GPR_U32(ctx, 31, 0x456690u);
    ctx->pc = 0x44F4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F4A0u, 0x456688u, 0x456690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456690u;
label_456690:
    // 0x456690: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x456690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x456694: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x456694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x456698: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x456698u;
    SET_GPR_U32(ctx, 31, 0x4566A0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x456698u, 0x4566A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4566A0u;
label_4566a0:
    // 0x4566a0: 0x87a20040  lh          $v0, 0x40($sp)
    ctx->pc = 0x4566a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4566a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4566a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x4566a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4566a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4566ac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4566ACu;
    {
        const bool branch_taken_0x4566ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4566ac) {
            ctx->pc = 0x4566C0u;
            goto label_4566c0;
        }
    }
    ctx->pc = 0x4566B4u;
    // 0x4566b4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x4566b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4566b8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x4566B8u;
    SET_GPR_U32(ctx, 31, 0x4566C0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x4566B8u, 0x4566C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4566C0u;
label_4566c0:
    // 0x4566c0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4566c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4566c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4566c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4566c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4566c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4566cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4566ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4566d0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4566d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4566d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4566D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4566D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4566DCu;
    // 0x4566dc: 0x0  nop
    ctx->pc = 0x4566dcu;
    // NOP
    ctx->pc = 0x4566e0u;
}
