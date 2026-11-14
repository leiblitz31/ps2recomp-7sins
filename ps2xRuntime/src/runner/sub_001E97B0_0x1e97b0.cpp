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

// Function: sub_001E97B0
// Address: 0x1e97b0 - 0x1e9970
void sub_001E97B0_0x1e97b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E97B0_0x1e97b0");
#endif

    switch (ctx->pc) {
        case 0x1e97e8u: goto label_1e97e8;
        case 0x1e97f8u: goto label_1e97f8;
        case 0x1e9824u: goto label_1e9824;
        case 0x1e9834u: goto label_1e9834;
        case 0x1e9868u: goto label_1e9868;
        case 0x1e989cu: goto label_1e989c;
        case 0x1e98b4u: goto label_1e98b4;
        case 0x1e98c8u: goto label_1e98c8;
        case 0x1e98f8u: goto label_1e98f8;
        case 0x1e9904u: goto label_1e9904;
        case 0x1e9934u: goto label_1e9934;
        default: break;
    }

    ctx->pc = 0x1e97b0u;

    // 0x1e97b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e97b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e97b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e97b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e97b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e97b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e97bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e97bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e97c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e97c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e97c4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1e97c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1e97c8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1e97c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1e97cc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e97ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e97d0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e97d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e97d4: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1E97D4u;
    {
        const bool branch_taken_0x1e97d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e97d4) {
            ctx->pc = 0x1E994Cu;
            goto label_1e994c;
        }
    }
    ctx->pc = 0x1E97DCu;
    // 0x1e97dc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e97dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e97e0: 0xc078618  jal         func_1E1860
    ctx->pc = 0x1E97E0u;
    SET_GPR_U32(ctx, 31, 0x1E97E8u);
    ctx->pc = 0x1E1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1860u, 0x1E97E0u, 0x1E97E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E97E8u;
label_1e97e8:
    // 0x1e97e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e97e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e97ec: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e97ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e97f0: 0xc07a6ac  jal         func_1E9AB0
    ctx->pc = 0x1E97F0u;
    SET_GPR_U32(ctx, 31, 0x1E97F8u);
    ctx->pc = 0x1E9AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9AB0u, 0x1E97F0u, 0x1E97F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E97F8u;
label_1e97f8:
    // 0x1e97f8: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x1e97f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1e97fc: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E97FCu;
    {
        const bool branch_taken_0x1e97fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e97fc) {
            ctx->pc = 0x1E985Cu;
            goto label_1e985c;
        }
    }
    ctx->pc = 0x1E9804u;
    // 0x1e9804: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e9804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e9808: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e9808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e980c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e980cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9810: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e9810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9814: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1e9814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e9818: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x1e9818u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e981c: 0xc07a690  jal         func_1E9A40
    ctx->pc = 0x1E981Cu;
    SET_GPR_U32(ctx, 31, 0x1E9824u);
    ctx->pc = 0x1E9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9A40u, 0x1E981Cu, 0x1E9824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9824u;
label_1e9824:
    // 0x1e9824: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e9824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9828: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e9828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e982c: 0xc07a530  jal         func_1E94C0
    ctx->pc = 0x1E982Cu;
    SET_GPR_U32(ctx, 31, 0x1E9834u);
    ctx->pc = 0x1E94C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E94C0u, 0x1E982Cu, 0x1E9834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9834u;
label_1e9834:
    // 0x1e9834: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e9834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9838: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1e9838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1e983c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e983cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9840: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1e9840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e9844: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e9844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9848: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e9848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e984c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e984cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9850: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1e9850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1e9854: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1E9854u;
    {
        const bool branch_taken_0x1e9854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9854) {
            ctx->pc = 0x1E9934u;
            goto label_1e9934;
        }
    }
    ctx->pc = 0x1E985Cu;
label_1e985c:
    // 0x1e985c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e985cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9860: 0xc078618  jal         func_1E1860
    ctx->pc = 0x1E9860u;
    SET_GPR_U32(ctx, 31, 0x1E9868u);
    ctx->pc = 0x1E1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1860u, 0x1E9860u, 0x1E9868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9868u;
label_1e9868:
    // 0x1e9868: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x1e9868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1e986c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E986Cu;
    {
        const bool branch_taken_0x1e986c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e986c) {
            ctx->pc = 0x1E98BCu;
            goto label_1e98bc;
        }
    }
    ctx->pc = 0x1E9874u;
    // 0x1e9874: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e9874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e9878: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e9878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e987c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e987cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9880: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x1e9880u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9884: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1e9884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e9888: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1e9888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e988c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1e988cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9890: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x1e9890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1e9894: 0xc07a65c  jal         func_1E9970
    ctx->pc = 0x1E9894u;
    SET_GPR_U32(ctx, 31, 0x1E989Cu);
    ctx->pc = 0x1E9970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9970u, 0x1E9894u, 0x1E989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E989Cu;
label_1e989c:
    // 0x1e989c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e989cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e98a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e98a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e98a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e98a8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1e98a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e98ac: 0xc075a48  jal         func_1D6920
    ctx->pc = 0x1E98ACu;
    SET_GPR_U32(ctx, 31, 0x1E98B4u);
    ctx->pc = 0x1D6920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6920u, 0x1E98ACu, 0x1E98B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E98B4u;
label_1e98b4:
    // 0x1e98b4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1E98B4u;
    {
        const bool branch_taken_0x1e98b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e98b4) {
            ctx->pc = 0x1E9934u;
            goto label_1e9934;
        }
    }
    ctx->pc = 0x1E98BCu;
label_1e98bc:
    // 0x1e98bc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e98bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e98c0: 0xc078618  jal         func_1E1860
    ctx->pc = 0x1E98C0u;
    SET_GPR_U32(ctx, 31, 0x1E98C8u);
    ctx->pc = 0x1E1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1860u, 0x1E98C0u, 0x1E98C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E98C8u;
label_1e98c8:
    // 0x1e98c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e98c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e98cc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e98ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e98d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e98d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e98d4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1e98d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e98d8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e98d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e98dc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e98dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e98e0: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1e98e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e98e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e98e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e98e8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1e98e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e98ec: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1e98ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1e98f0: 0xc07a65c  jal         func_1E9970
    ctx->pc = 0x1E98F0u;
    SET_GPR_U32(ctx, 31, 0x1E98F8u);
    ctx->pc = 0x1E9970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9970u, 0x1E98F0u, 0x1E98F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E98F8u;
label_1e98f8:
    // 0x1e98f8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e98f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e98fc: 0xc078618  jal         func_1E1860
    ctx->pc = 0x1E98FCu;
    SET_GPR_U32(ctx, 31, 0x1E9904u);
    ctx->pc = 0x1E1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1860u, 0x1E98FCu, 0x1E9904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9904u;
label_1e9904:
    // 0x1e9904: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e9904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e9908: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e9908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e990c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e990cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9910: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1e9910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e9914: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e9914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e9918: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e9918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e991c: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1e991cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9920: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1e9920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e9924: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1e9924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e9928: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1e9928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1e992c: 0xc07a3c4  jal         func_1E8F10
    ctx->pc = 0x1E992Cu;
    SET_GPR_U32(ctx, 31, 0x1E9934u);
    ctx->pc = 0x1E8F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F10u, 0x1E992Cu, 0x1E9934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9934u;
label_1e9934:
    // 0x1e9934: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e9934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9938: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1e9938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e993c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e993cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9940: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e9940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e9944: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e9944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9948: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1e9948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_1e994c:
    // 0x1e994c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e994cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9950: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e9950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9954: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e9954u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9958: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e995c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e995cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9960: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e9960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e9964: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E996Cu;
    // 0x1e996c: 0x0  nop
    ctx->pc = 0x1e996cu;
    // NOP
    ctx->pc = 0x1e9970u;
}
