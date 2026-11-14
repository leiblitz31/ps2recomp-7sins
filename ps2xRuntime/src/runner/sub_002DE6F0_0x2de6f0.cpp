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

// Function: sub_002DE6F0
// Address: 0x2de6f0 - 0x2de7e0
void sub_002DE6F0_0x2de6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE6F0_0x2de6f0");
#endif

    switch (ctx->pc) {
        case 0x2de714u: goto label_2de714;
        case 0x2de730u: goto label_2de730;
        case 0x2de764u: goto label_2de764;
        case 0x2de774u: goto label_2de774;
        case 0x2de794u: goto label_2de794;
        case 0x2de7bcu: goto label_2de7bc;
        default: break;
    }

    ctx->pc = 0x2de6f0u;

    // 0x2de6f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2de6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2de6f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2de6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2de6f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2de6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2de6fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2de6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2de700: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2de700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2de704: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2de704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2de708: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2de708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de70c: 0xc0b7a6c  jal         func_2DE9B0
    ctx->pc = 0x2DE70Cu;
    SET_GPR_U32(ctx, 31, 0x2DE714u);
    ctx->pc = 0x2DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE9B0u, 0x2DE70Cu, 0x2DE714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE714u;
label_2de714:
    // 0x2de714: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2de714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2de718: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2de718u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2de71c: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x2DE71Cu;
    {
        const bool branch_taken_0x2de71c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de71c) {
            ctx->pc = 0x2DE7BCu;
            goto label_2de7bc;
        }
    }
    ctx->pc = 0x2DE724u;
    // 0x2de724: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2de724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de728: 0xc0b77fc  jal         func_2DDFF0
    ctx->pc = 0x2DE728u;
    SET_GPR_U32(ctx, 31, 0x2DE730u);
    ctx->pc = 0x2DDFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDFF0u, 0x2DE728u, 0x2DE730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE730u;
label_2de730:
    // 0x2de730: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2de730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de734: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2de734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de738: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2de738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2de73c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2DE73Cu;
    {
        const bool branch_taken_0x2de73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de73c) {
            ctx->pc = 0x2DE77Cu;
            goto label_2de77c;
        }
    }
    ctx->pc = 0x2DE744u;
    // 0x2de744: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2de744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de748: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2de748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de74c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2de74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de750: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2de750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2de754: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2de754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2de758: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2de758u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2de75c: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x2DE75Cu;
    SET_GPR_U32(ctx, 31, 0x2DE764u);
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x2DE75Cu, 0x2DE764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE764u;
label_2de764:
    // 0x2de764: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2de764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de768: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2de768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de76c: 0xc0b7894  jal         func_2DE250
    ctx->pc = 0x2DE76Cu;
    SET_GPR_U32(ctx, 31, 0x2DE774u);
    ctx->pc = 0x2DE250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE250u, 0x2DE76Cu, 0x2DE774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE774u;
label_2de774:
    // 0x2de774: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DE774u;
    {
        const bool branch_taken_0x2de774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de774) {
            ctx->pc = 0x2DE798u;
            goto label_2de798;
        }
    }
    ctx->pc = 0x2DE77Cu;
label_2de77c:
    // 0x2de77c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2de77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de780: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2de780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2de784: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2de784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2de788: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2de788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de78c: 0xc0b7974  jal         func_2DE5D0
    ctx->pc = 0x2DE78Cu;
    SET_GPR_U32(ctx, 31, 0x2DE794u);
    ctx->pc = 0x2DE5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE5D0u, 0x2DE78Cu, 0x2DE794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE794u;
label_2de794:
    // 0x2de794: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2de794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de798:
    // 0x2de798: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2de798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2de79c: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x2de79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2de7a0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2de7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2de7a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2de7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2de7a8: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x2de7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2de7ac: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2de7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de7b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2de7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de7b4: 0xc0b7880  jal         func_2DE200
    ctx->pc = 0x2DE7B4u;
    SET_GPR_U32(ctx, 31, 0x2DE7BCu);
    ctx->pc = 0x2DE200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE200u, 0x2DE7B4u, 0x2DE7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE7BCu;
label_2de7bc:
    // 0x2de7bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2de7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de7c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2de7c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de7c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2de7c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de7c8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2de7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2de7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE7D4u;
    // 0x2de7d4: 0x0  nop
    ctx->pc = 0x2de7d4u;
    // NOP
    // 0x2de7d8: 0x0  nop
    ctx->pc = 0x2de7d8u;
    // NOP
    // 0x2de7dc: 0x0  nop
    ctx->pc = 0x2de7dcu;
    // NOP
    ctx->pc = 0x2de7e0u;
}
