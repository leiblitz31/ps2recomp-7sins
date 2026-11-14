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

// Function: sub_0026F750
// Address: 0x26f750 - 0x26f910
void sub_0026F750_0x26f750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F750_0x26f750");
#endif

    switch (ctx->pc) {
        case 0x26f788u: goto label_26f788;
        case 0x26f798u: goto label_26f798;
        case 0x26f7c4u: goto label_26f7c4;
        case 0x26f7d4u: goto label_26f7d4;
        case 0x26f808u: goto label_26f808;
        case 0x26f83cu: goto label_26f83c;
        case 0x26f854u: goto label_26f854;
        case 0x26f868u: goto label_26f868;
        case 0x26f898u: goto label_26f898;
        case 0x26f8a4u: goto label_26f8a4;
        case 0x26f8d4u: goto label_26f8d4;
        default: break;
    }

    ctx->pc = 0x26f750u;

    // 0x26f750: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26f750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26f754: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26f754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26f758: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26f758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26f75c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26f75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26f760: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26f760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26f764: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x26f764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x26f768: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x26f768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x26f76c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x26f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26f770: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26f770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f774: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x26F774u;
    {
        const bool branch_taken_0x26f774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f774) {
            ctx->pc = 0x26F8ECu;
            goto label_26f8ec;
        }
    }
    ctx->pc = 0x26F77Cu;
    // 0x26f77c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x26f77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26f780: 0xc0683d8  jal         func_1A0F60
    ctx->pc = 0x26F780u;
    SET_GPR_U32(ctx, 31, 0x26F788u);
    ctx->pc = 0x1A0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0F60u, 0x26F780u, 0x26F788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F788u;
label_26f788:
    // 0x26f788: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26f788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f78c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x26f78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f790: 0xc09beac  jal         func_26FAB0
    ctx->pc = 0x26F790u;
    SET_GPR_U32(ctx, 31, 0x26F798u);
    ctx->pc = 0x26FAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FAB0u, 0x26F790u, 0x26F798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F798u;
label_26f798:
    // 0x26f798: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x26f798u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x26f79c: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x26F79Cu;
    {
        const bool branch_taken_0x26f79c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f79c) {
            ctx->pc = 0x26F7FCu;
            goto label_26f7fc;
        }
    }
    ctx->pc = 0x26F7A4u;
    // 0x26f7a4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x26f7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26f7a8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x26f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26f7ac: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x26f7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f7b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26f7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f7b4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x26f7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26f7b8: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x26f7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26f7bc: 0xc09be90  jal         func_26FA40
    ctx->pc = 0x26F7BCu;
    SET_GPR_U32(ctx, 31, 0x26F7C4u);
    ctx->pc = 0x26FA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FA40u, 0x26F7BCu, 0x26F7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F7C4u;
label_26f7c4:
    // 0x26f7c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26f7c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f7c8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x26f7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f7cc: 0xc0685c8  jal         func_1A1720
    ctx->pc = 0x26F7CCu;
    SET_GPR_U32(ctx, 31, 0x26F7D4u);
    ctx->pc = 0x1A1720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1720u, 0x26F7CCu, 0x26F7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F7D4u;
label_26f7d4:
    // 0x26f7d4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f7d8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x26f7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x26f7dc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f7e0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x26f7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x26f7e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f7e8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x26f7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26f7ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f7f0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x26f7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x26f7f4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x26F7F4u;
    {
        const bool branch_taken_0x26f7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f7f4) {
            ctx->pc = 0x26F8D4u;
            goto label_26f8d4;
        }
    }
    ctx->pc = 0x26F7FCu;
label_26f7fc:
    // 0x26f7fc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x26f7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f800: 0xc0683d8  jal         func_1A0F60
    ctx->pc = 0x26F800u;
    SET_GPR_U32(ctx, 31, 0x26F808u);
    ctx->pc = 0x1A0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0F60u, 0x26F800u, 0x26F808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F808u;
label_26f808:
    // 0x26f808: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x26f808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x26f80c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26F80Cu;
    {
        const bool branch_taken_0x26f80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f80c) {
            ctx->pc = 0x26F85Cu;
            goto label_26f85c;
        }
    }
    ctx->pc = 0x26F814u;
    // 0x26f814: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x26f814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26f818: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x26f818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26f81c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f820: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x26f820u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x26f824: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x26f824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26f828: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x26f828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26f82c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x26f82cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f830: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x26f830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x26f834: 0xc09be80  jal         func_26FA00
    ctx->pc = 0x26F834u;
    SET_GPR_U32(ctx, 31, 0x26F83Cu);
    ctx->pc = 0x26FA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FA00u, 0x26F834u, 0x26F83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F83Cu;
label_26f83c:
    // 0x26f83c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26f83cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f840: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26f840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f844: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26f844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f848: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x26f848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26f84c: 0xc048068  jal         func_1201A0
    ctx->pc = 0x26F84Cu;
    SET_GPR_U32(ctx, 31, 0x26F854u);
    ctx->pc = 0x1201A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1201A0u, 0x26F84Cu, 0x26F854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F854u;
label_26f854:
    // 0x26f854: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x26F854u;
    {
        const bool branch_taken_0x26f854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f854) {
            ctx->pc = 0x26F8D4u;
            goto label_26f8d4;
        }
    }
    ctx->pc = 0x26F85Cu;
label_26f85c:
    // 0x26f85c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x26f85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f860: 0xc0683d8  jal         func_1A0F60
    ctx->pc = 0x26F860u;
    SET_GPR_U32(ctx, 31, 0x26F868u);
    ctx->pc = 0x1A0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0F60u, 0x26F860u, 0x26F868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F868u;
label_26f868:
    // 0x26f868: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x26f868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26f86c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x26f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26f870: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26f870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f874: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x26f874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26f878: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x26f878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26f87c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f880: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x26f880u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x26f884: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26f884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26f888: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x26f888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f88c: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x26f88cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x26f890: 0xc09be80  jal         func_26FA00
    ctx->pc = 0x26F890u;
    SET_GPR_U32(ctx, 31, 0x26F898u);
    ctx->pc = 0x26FA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FA00u, 0x26F890u, 0x26F898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F898u;
label_26f898:
    // 0x26f898: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x26f898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f89c: 0xc0683d8  jal         func_1A0F60
    ctx->pc = 0x26F89Cu;
    SET_GPR_U32(ctx, 31, 0x26F8A4u);
    ctx->pc = 0x1A0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0F60u, 0x26F89Cu, 0x26F8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F8A4u;
label_26f8a4:
    // 0x26f8a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x26f8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26f8a8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x26f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26f8ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f8b0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x26f8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26f8b4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x26f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26f8b8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f8bc: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x26f8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x26f8c0: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x26f8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26f8c4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x26f8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26f8c8: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x26f8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x26f8cc: 0xc09be44  jal         func_26F910
    ctx->pc = 0x26F8CCu;
    SET_GPR_U32(ctx, 31, 0x26F8D4u);
    ctx->pc = 0x26F910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F910u, 0x26F8CCu, 0x26F8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F8D4u;
label_26f8d4:
    // 0x26f8d4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f8d8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x26f8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x26f8dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f8e0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x26f8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26f8e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f8e8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x26f8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_26f8ec:
    // 0x26f8ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f8f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26f8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f8f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26f8f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26f8f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26f8f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f8fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26f8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f900: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x26f900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26f904: 0x3e00008  jr          $ra
    ctx->pc = 0x26F904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F90Cu;
    // 0x26f90c: 0x0  nop
    ctx->pc = 0x26f90cu;
    // NOP
    ctx->pc = 0x26f910u;
}
