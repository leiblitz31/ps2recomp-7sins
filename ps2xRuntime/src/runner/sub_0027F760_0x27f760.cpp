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

// Function: sub_0027F760
// Address: 0x27f760 - 0x27f840
void sub_0027F760_0x27f760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F760_0x27f760");
#endif

    switch (ctx->pc) {
        case 0x27f760u: goto label_27f760;
        case 0x27f764u: goto label_27f764;
        case 0x27f768u: goto label_27f768;
        case 0x27f76cu: goto label_27f76c;
        case 0x27f770u: goto label_27f770;
        case 0x27f774u: goto label_27f774;
        case 0x27f778u: goto label_27f778;
        case 0x27f77cu: goto label_27f77c;
        case 0x27f780u: goto label_27f780;
        case 0x27f784u: goto label_27f784;
        case 0x27f788u: goto label_27f788;
        case 0x27f78cu: goto label_27f78c;
        case 0x27f790u: goto label_27f790;
        case 0x27f794u: goto label_27f794;
        case 0x27f798u: goto label_27f798;
        case 0x27f79cu: goto label_27f79c;
        case 0x27f7a0u: goto label_27f7a0;
        case 0x27f7a4u: goto label_27f7a4;
        case 0x27f7a8u: goto label_27f7a8;
        case 0x27f7acu: goto label_27f7ac;
        case 0x27f7b0u: goto label_27f7b0;
        case 0x27f7b4u: goto label_27f7b4;
        case 0x27f7b8u: goto label_27f7b8;
        case 0x27f7bcu: goto label_27f7bc;
        case 0x27f7c0u: goto label_27f7c0;
        case 0x27f7c4u: goto label_27f7c4;
        case 0x27f7c8u: goto label_27f7c8;
        case 0x27f7ccu: goto label_27f7cc;
        case 0x27f7d0u: goto label_27f7d0;
        case 0x27f7d4u: goto label_27f7d4;
        case 0x27f7d8u: goto label_27f7d8;
        case 0x27f7dcu: goto label_27f7dc;
        case 0x27f7e0u: goto label_27f7e0;
        case 0x27f7e4u: goto label_27f7e4;
        case 0x27f7e8u: goto label_27f7e8;
        case 0x27f7ecu: goto label_27f7ec;
        case 0x27f7f0u: goto label_27f7f0;
        case 0x27f7f4u: goto label_27f7f4;
        case 0x27f7f8u: goto label_27f7f8;
        case 0x27f7fcu: goto label_27f7fc;
        case 0x27f800u: goto label_27f800;
        case 0x27f804u: goto label_27f804;
        case 0x27f808u: goto label_27f808;
        case 0x27f80cu: goto label_27f80c;
        case 0x27f810u: goto label_27f810;
        case 0x27f814u: goto label_27f814;
        case 0x27f818u: goto label_27f818;
        case 0x27f81cu: goto label_27f81c;
        case 0x27f820u: goto label_27f820;
        case 0x27f824u: goto label_27f824;
        case 0x27f828u: goto label_27f828;
        case 0x27f82cu: goto label_27f82c;
        case 0x27f830u: goto label_27f830;
        case 0x27f834u: goto label_27f834;
        case 0x27f838u: goto label_27f838;
        case 0x27f83cu: goto label_27f83c;
        default: break;
    }

    ctx->pc = 0x27f760u;

label_27f760:
    // 0x27f760: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27f760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_27f764:
    // 0x27f764: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x27f764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_27f768:
    // 0x27f768: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27f768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_27f76c:
    // 0x27f76c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27f76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27f770:
    // 0x27f770: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27f770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27f774:
    // 0x27f774: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27f774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27f778:
    // 0x27f778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27f778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27f77c:
    // 0x27f77c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x27f77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_27f780:
    // 0x27f780: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x27f780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_27f784:
    // 0x27f784: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27f784u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27f788:
    // 0x27f788: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x27f788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_27f78c:
    // 0x27f78c: 0x320f809  jalr        $t9
label_27f790:
    if (ctx->pc == 0x27F790u) {
        ctx->pc = 0x27F794u;
        goto label_27f794;
    }
    ctx->pc = 0x27F78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27F794u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F78Cu, 0x27F794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27F794u;
label_27f794:
    // 0x27f794: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27f794u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f798:
    // 0x27f798: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27f798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27f79c:
    // 0x27f79c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x27f79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_27f7a0:
    // 0x27f7a0: 0xc085538  jal         func_2154E0
label_27f7a4:
    if (ctx->pc == 0x27F7A4u) {
        ctx->pc = 0x27F7A8u;
        goto label_27f7a8;
    }
    ctx->pc = 0x27F7A0u;
    SET_GPR_U32(ctx, 31, 0x27F7A8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27F7A0u, 0x27F7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F7A8u;
label_27f7a8:
    // 0x27f7a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27f7a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f7ac:
    // 0x27f7ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27f7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27f7b0:
    // 0x27f7b0: 0xc091aa8  jal         func_246AA0
label_27f7b4:
    if (ctx->pc == 0x27F7B4u) {
        ctx->pc = 0x27F7B8u;
        goto label_27f7b8;
    }
    ctx->pc = 0x27F7B0u;
    SET_GPR_U32(ctx, 31, 0x27F7B8u);
    ctx->pc = 0x246AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AA0u, 0x27F7B0u, 0x27F7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F7B8u;
label_27f7b8:
    // 0x27f7b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27f7b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f7bc:
    // 0x27f7bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27f7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27f7c0:
    // 0x27f7c0: 0xc040e7c  jal         func_1039F0
label_27f7c4:
    if (ctx->pc == 0x27F7C4u) {
        ctx->pc = 0x27F7C8u;
        goto label_27f7c8;
    }
    ctx->pc = 0x27F7C0u;
    SET_GPR_U32(ctx, 31, 0x27F7C8u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x27F7C0u, 0x27F7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F7C8u;
label_27f7c8:
    // 0x27f7c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27f7c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f7cc:
    // 0x27f7cc: 0x1000000d  b           . + 4 + (0xD << 2)
label_27f7d0:
    if (ctx->pc == 0x27F7D0u) {
        ctx->pc = 0x27F7D4u;
        goto label_27f7d4;
    }
    ctx->pc = 0x27F7CCu;
    {
        const bool branch_taken_0x27f7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f7cc) {
            ctx->pc = 0x27F804u;
            goto label_27f804;
        }
    }
    ctx->pc = 0x27F7D4u;
label_27f7d4:
    // 0x27f7d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27f7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27f7d8:
    // 0x27f7d8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x27f7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_27f7dc:
    // 0x27f7dc: 0xc085538  jal         func_2154E0
label_27f7e0:
    if (ctx->pc == 0x27F7E0u) {
        ctx->pc = 0x27F7E4u;
        goto label_27f7e4;
    }
    ctx->pc = 0x27F7DCu;
    SET_GPR_U32(ctx, 31, 0x27F7E4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27F7DCu, 0x27F7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F7E4u;
label_27f7e4:
    // 0x27f7e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27f7e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f7e8:
    // 0x27f7e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27f7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27f7ec:
    // 0x27f7ec: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27f7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_27f7f0:
    // 0x27f7f0: 0x24a58280  addiu       $a1, $a1, -0x7D80
    ctx->pc = 0x27f7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935168));
label_27f7f4:
    // 0x27f7f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27f7f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27f7f8:
    // 0x27f7f8: 0xc0a3674  jal         func_28D9D0
label_27f7fc:
    if (ctx->pc == 0x27F7FCu) {
        ctx->pc = 0x27F800u;
        goto label_27f800;
    }
    ctx->pc = 0x27F7F8u;
    SET_GPR_U32(ctx, 31, 0x27F800u);
    ctx->pc = 0x28D9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9D0u, 0x27F7F8u, 0x27F800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F800u;
label_27f800:
    // 0x27f800: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x27f800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_27f804:
    // 0x27f804: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27f804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27f808:
    // 0x27f808: 0xc04147c  jal         func_1051F0
label_27f80c:
    if (ctx->pc == 0x27F80Cu) {
        ctx->pc = 0x27F810u;
        goto label_27f810;
    }
    ctx->pc = 0x27F808u;
    SET_GPR_U32(ctx, 31, 0x27F810u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x27F808u, 0x27F810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F810u;
label_27f810:
    // 0x27f810: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
label_27f814:
    if (ctx->pc == 0x27F814u) {
        ctx->pc = 0x27F818u;
        goto label_27f818;
    }
    ctx->pc = 0x27F810u;
    {
        const bool branch_taken_0x27f810 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f810) {
            ctx->pc = 0x27F7D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f7d4;
        }
    }
    ctx->pc = 0x27F818u;
label_27f818:
    // 0x27f818: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27f818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_27f81c:
    // 0x27f81c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27f81cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27f820:
    // 0x27f820: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27f820u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27f824:
    // 0x27f824: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27f824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27f828:
    // 0x27f828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27f828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27f82c:
    // 0x27f82c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27f82cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27f830:
    // 0x27f830: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x27f830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_27f834:
    // 0x27f834: 0x3e00008  jr          $ra
label_27f838:
    if (ctx->pc == 0x27F838u) {
        ctx->pc = 0x27F83Cu;
        goto label_27f83c;
    }
    ctx->pc = 0x27F834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F83Cu;
label_27f83c:
    // 0x27f83c: 0x0  nop
    ctx->pc = 0x27f83cu;
    // NOP
    ctx->pc = 0x27f840u;
}
