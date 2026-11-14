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

// Function: sub_00237780
// Address: 0x237780 - 0x237850
void sub_00237780_0x237780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237780_0x237780");
#endif

    switch (ctx->pc) {
        case 0x237780u: goto label_237780;
        case 0x237784u: goto label_237784;
        case 0x237788u: goto label_237788;
        case 0x23778cu: goto label_23778c;
        case 0x237790u: goto label_237790;
        case 0x237794u: goto label_237794;
        case 0x237798u: goto label_237798;
        case 0x23779cu: goto label_23779c;
        case 0x2377a0u: goto label_2377a0;
        case 0x2377a4u: goto label_2377a4;
        case 0x2377a8u: goto label_2377a8;
        case 0x2377acu: goto label_2377ac;
        case 0x2377b0u: goto label_2377b0;
        case 0x2377b4u: goto label_2377b4;
        case 0x2377b8u: goto label_2377b8;
        case 0x2377bcu: goto label_2377bc;
        case 0x2377c0u: goto label_2377c0;
        case 0x2377c4u: goto label_2377c4;
        case 0x2377c8u: goto label_2377c8;
        case 0x2377ccu: goto label_2377cc;
        case 0x2377d0u: goto label_2377d0;
        case 0x2377d4u: goto label_2377d4;
        case 0x2377d8u: goto label_2377d8;
        case 0x2377dcu: goto label_2377dc;
        case 0x2377e0u: goto label_2377e0;
        case 0x2377e4u: goto label_2377e4;
        case 0x2377e8u: goto label_2377e8;
        case 0x2377ecu: goto label_2377ec;
        case 0x2377f0u: goto label_2377f0;
        case 0x2377f4u: goto label_2377f4;
        case 0x2377f8u: goto label_2377f8;
        case 0x2377fcu: goto label_2377fc;
        case 0x237800u: goto label_237800;
        case 0x237804u: goto label_237804;
        case 0x237808u: goto label_237808;
        case 0x23780cu: goto label_23780c;
        case 0x237810u: goto label_237810;
        case 0x237814u: goto label_237814;
        case 0x237818u: goto label_237818;
        case 0x23781cu: goto label_23781c;
        case 0x237820u: goto label_237820;
        case 0x237824u: goto label_237824;
        case 0x237828u: goto label_237828;
        case 0x23782cu: goto label_23782c;
        case 0x237830u: goto label_237830;
        case 0x237834u: goto label_237834;
        case 0x237838u: goto label_237838;
        case 0x23783cu: goto label_23783c;
        case 0x237840u: goto label_237840;
        case 0x237844u: goto label_237844;
        case 0x237848u: goto label_237848;
        case 0x23784cu: goto label_23784c;
        default: break;
    }

    ctx->pc = 0x237780u;

label_237780:
    // 0x237780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x237780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_237784:
    // 0x237784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x237784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_237788:
    // 0x237788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x237788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23778c:
    // 0x23778c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23778cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_237790:
    // 0x237790: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x237790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_237794:
    // 0x237794: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x237794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_237798:
    // 0x237798: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x237798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_23779c:
    // 0x23779c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23779cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2377a0:
    // 0x2377a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2377a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2377a4:
    // 0x2377a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2377a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2377a8:
    // 0x2377a8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2377a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2377ac:
    // 0x2377ac: 0x320f809  jalr        $t9
label_2377b0:
    if (ctx->pc == 0x2377B0u) {
        ctx->pc = 0x2377B4u;
        goto label_2377b4;
    }
    ctx->pc = 0x2377ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2377B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2377ACu, 0x2377B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2377B4u;
label_2377b4:
    // 0x2377b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2377b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2377b8:
    // 0x2377b8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x2377b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2377bc:
    // 0x2377bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2377bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2377c0:
    // 0x2377c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2377c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2377c4:
    // 0x2377c4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2377c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2377c8:
    // 0x2377c8: 0x320f809  jalr        $t9
label_2377cc:
    if (ctx->pc == 0x2377CCu) {
        ctx->pc = 0x2377D0u;
        goto label_2377d0;
    }
    ctx->pc = 0x2377C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2377D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2377C8u, 0x2377D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2377D0u;
label_2377d0:
    // 0x2377d0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2377d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2377d4:
    // 0x2377d4: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x2377d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2377d8:
    // 0x2377d8: 0xc049394  jal         func_124E50
label_2377dc:
    if (ctx->pc == 0x2377DCu) {
        ctx->pc = 0x2377E0u;
        goto label_2377e0;
    }
    ctx->pc = 0x2377D8u;
    SET_GPR_U32(ctx, 31, 0x2377E0u);
    ctx->pc = 0x124E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E50u, 0x2377D8u, 0x2377E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2377E0u;
label_2377e0:
    // 0x2377e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2377e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2377e4:
    // 0x2377e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2377e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2377e8:
    // 0x2377e8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x2377e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2377ec:
    // 0x2377ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2377ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2377f0:
    // 0x2377f0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2377f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2377f4:
    // 0x2377f4: 0x320f809  jalr        $t9
label_2377f8:
    if (ctx->pc == 0x2377F8u) {
        ctx->pc = 0x2377FCu;
        goto label_2377fc;
    }
    ctx->pc = 0x2377F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2377FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2377F4u, 0x2377FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2377FCu;
label_2377fc:
    // 0x2377fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2377fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237800:
    // 0x237800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x237800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237804:
    // 0x237804: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x237804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237808:
    // 0x237808: 0xc0bb7e6  jal         func_2EDF98
label_23780c:
    if (ctx->pc == 0x23780Cu) {
        ctx->pc = 0x237810u;
        goto label_237810;
    }
    ctx->pc = 0x237808u;
    SET_GPR_U32(ctx, 31, 0x237810u);
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x237808u, 0x237810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237810u;
label_237810:
    // 0x237810: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x237810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_237814:
    // 0x237814: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x237814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_237818:
    // 0x237818: 0xc049394  jal         func_124E50
label_23781c:
    if (ctx->pc == 0x23781Cu) {
        ctx->pc = 0x237820u;
        goto label_237820;
    }
    ctx->pc = 0x237818u;
    SET_GPR_U32(ctx, 31, 0x237820u);
    ctx->pc = 0x124E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E50u, 0x237818u, 0x237820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237820u;
label_237820:
    // 0x237820: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x237820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237824:
    // 0x237824: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x237824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_237828:
    // 0x237828: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x237828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_23782c:
    // 0x23782c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23782cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_237830:
    // 0x237830: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x237830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_237834:
    // 0x237834: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x237834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_237838:
    // 0x237838: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x237838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_23783c:
    // 0x23783c: 0x3e00008  jr          $ra
label_237840:
    if (ctx->pc == 0x237840u) {
        ctx->pc = 0x237844u;
        goto label_237844;
    }
    ctx->pc = 0x23783Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23783Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237844u;
label_237844:
    // 0x237844: 0x0  nop
    ctx->pc = 0x237844u;
    // NOP
label_237848:
    // 0x237848: 0x0  nop
    ctx->pc = 0x237848u;
    // NOP
label_23784c:
    // 0x23784c: 0x0  nop
    ctx->pc = 0x23784cu;
    // NOP
    ctx->pc = 0x237850u;
}
