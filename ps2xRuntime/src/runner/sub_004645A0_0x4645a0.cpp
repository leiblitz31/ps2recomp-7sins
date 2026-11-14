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

// Function: sub_004645A0
// Address: 0x4645a0 - 0x464670
void sub_004645A0_0x4645a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004645A0_0x4645a0");
#endif

    switch (ctx->pc) {
        case 0x4645c8u: goto label_4645c8;
        case 0x4645dcu: goto label_4645dc;
        case 0x4645f0u: goto label_4645f0;
        case 0x464604u: goto label_464604;
        case 0x464624u: goto label_464624;
        case 0x464638u: goto label_464638;
        case 0x464650u: goto label_464650;
        default: break;
    }

    ctx->pc = 0x4645a0u;

    // 0x4645a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4645a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4645a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4645a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4645a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4645a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4645ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4645acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4645b0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x4645b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x4645b4: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x4645b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x4645b8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x4645b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4645bc: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x4645bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x4645c0: 0xc047874  jal         func_11E1D0
    ctx->pc = 0x4645C0u;
    SET_GPR_U32(ctx, 31, 0x4645C8u);
    ctx->pc = 0x11E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1D0u, 0x4645C0u, 0x4645C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4645C8u;
label_4645c8:
    // 0x4645c8: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x4645c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x4645cc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x4645ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4645d0: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x4645d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x4645d4: 0xc047874  jal         func_11E1D0
    ctx->pc = 0x4645D4u;
    SET_GPR_U32(ctx, 31, 0x4645DCu);
    ctx->pc = 0x11E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1D0u, 0x4645D4u, 0x4645DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4645DCu;
label_4645dc:
    // 0x4645dc: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x4645dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x4645e0: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x4645e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x4645e4: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x4645e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x4645e8: 0xc119124  jal         func_464490
    ctx->pc = 0x4645E8u;
    SET_GPR_U32(ctx, 31, 0x4645F0u);
    ctx->pc = 0x464490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464490u, 0x4645E8u, 0x4645F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4645F0u;
label_4645f0:
    // 0x4645f0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x4645f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4645f4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x4645f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4645f8: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x4645f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x4645fc: 0xc047874  jal         func_11E1D0
    ctx->pc = 0x4645FCu;
    SET_GPR_U32(ctx, 31, 0x464604u);
    ctx->pc = 0x11E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1D0u, 0x4645FCu, 0x464604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464604u;
label_464604:
    // 0x464604: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x464604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464608: 0x230082a  slt         $at, $s1, $s0
    ctx->pc = 0x464608u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x46460c: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x46460Cu;
    {
        const bool branch_taken_0x46460c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x46460c) {
            ctx->pc = 0x46462Cu;
            goto label_46462c;
        }
    }
    ctx->pc = 0x464614u;
    // 0x464614: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x464614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x464618: 0x2785b294  addiu       $a1, $gp, -0x4D6C
    ctx->pc = 0x464618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947476));
    // 0x46461c: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x46461Cu;
    SET_GPR_U32(ctx, 31, 0x464624u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x46461Cu, 0x464624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464624u;
label_464624:
    // 0x464624: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x464624u;
    {
        const bool branch_taken_0x464624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x464624) {
            ctx->pc = 0x464650u;
            goto label_464650;
        }
    }
    ctx->pc = 0x46462Cu;
label_46462c:
    // 0x46462c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x46462cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x464630: 0xc042514  jal         func_109450
    ctx->pc = 0x464630u;
    SET_GPR_U32(ctx, 31, 0x464638u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x464630u, 0x464638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464638u;
label_464638:
    // 0x464638: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x464638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x46463c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x46463cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x464640: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x464640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x464644: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x464644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464648: 0xc043764  jal         func_10DD90
    ctx->pc = 0x464648u;
    SET_GPR_U32(ctx, 31, 0x464650u);
    ctx->pc = 0x10DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD90u, 0x464648u, 0x464650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464650u;
label_464650:
    // 0x464650: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x464650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x464654: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x464654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x464658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x464658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46465c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x46465cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x464660: 0x3e00008  jr          $ra
    ctx->pc = 0x464660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464668u;
    // 0x464668: 0x0  nop
    ctx->pc = 0x464668u;
    // NOP
    // 0x46466c: 0x0  nop
    ctx->pc = 0x46466cu;
    // NOP
    ctx->pc = 0x464670u;
}
