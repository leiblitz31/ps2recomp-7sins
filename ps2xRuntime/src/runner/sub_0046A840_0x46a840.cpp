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

// Function: sub_0046A840
// Address: 0x46a840 - 0x46a920
void sub_0046A840_0x46a840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A840_0x46a840");
#endif

    switch (ctx->pc) {
        case 0x46a868u: goto label_46a868;
        case 0x46a874u: goto label_46a874;
        case 0x46a88cu: goto label_46a88c;
        case 0x46a8a0u: goto label_46a8a0;
        case 0x46a8b0u: goto label_46a8b0;
        case 0x46a8c4u: goto label_46a8c4;
        case 0x46a8d8u: goto label_46a8d8;
        case 0x46a8f8u: goto label_46a8f8;
        default: break;
    }

    ctx->pc = 0x46a840u;

    // 0x46a840: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x46a840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x46a844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x46a844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x46a848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46a848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46a84c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46a84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46a850: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x46a850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x46a854: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x46a854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x46a858: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x46a858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46a85c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x46a85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46a860: 0xc042844  jal         func_10A110
    ctx->pc = 0x46A860u;
    SET_GPR_U32(ctx, 31, 0x46A868u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x46A860u, 0x46A868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A868u;
label_46a868:
    // 0x46a868: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x46a868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46a86c: 0xc11931c  jal         func_464C70
    ctx->pc = 0x46A86Cu;
    SET_GPR_U32(ctx, 31, 0x46A874u);
    ctx->pc = 0x464C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464C70u, 0x46A86Cu, 0x46A874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A874u;
label_46a874:
    // 0x46a874: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x46a874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46a878: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x46a878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x46a87c: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x46a87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46a880: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x46a880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46a884: 0xc11aa00  jal         func_46A800
    ctx->pc = 0x46A884u;
    SET_GPR_U32(ctx, 31, 0x46A88Cu);
    ctx->pc = 0x46A800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A800u, 0x46A884u, 0x46A88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A88Cu;
label_46a88c:
    // 0x46a88c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x46a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46a890: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x46a890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46a894: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x46a894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46a898: 0xc11a4d8  jal         func_469360
    ctx->pc = 0x46A898u;
    SET_GPR_U32(ctx, 31, 0x46A8A0u);
    ctx->pc = 0x469360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469360u, 0x46A898u, 0x46A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A8A0u;
label_46a8a0:
    // 0x46a8a0: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x46a8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x46a8a4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x46a8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46a8a8: 0xc11a4cc  jal         func_469330
    ctx->pc = 0x46A8A8u;
    SET_GPR_U32(ctx, 31, 0x46A8B0u);
    ctx->pc = 0x469330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469330u, 0x46A8A8u, 0x46A8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A8B0u;
label_46a8b0:
    // 0x46a8b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x46A8B0u;
    {
        const bool branch_taken_0x46a8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a8b0) {
            ctx->pc = 0x46A8E4u;
            goto label_46a8e4;
        }
    }
    ctx->pc = 0x46A8B8u;
    // 0x46a8b8: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x46a8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x46a8bc: 0xc11a568  jal         func_4695A0
    ctx->pc = 0x46A8BCu;
    SET_GPR_U32(ctx, 31, 0x46A8C4u);
    ctx->pc = 0x4695A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4695A0u, 0x46A8BCu, 0x46A8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A8C4u;
label_46a8c4:
    // 0x46a8c4: 0x2451000c  addiu       $s1, $v0, 0xC
    ctx->pc = 0x46a8c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x46a8c8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x46a8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46a8cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46a8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46a8d0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46A8D0u;
    SET_GPR_U32(ctx, 31, 0x46A8D8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46A8D0u, 0x46A8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A8D8u;
label_46a8d8:
    // 0x46a8d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x46a8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a8dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x46A8DCu;
    {
        const bool branch_taken_0x46a8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a8dc) {
            ctx->pc = 0x46A8FCu;
            goto label_46a8fc;
        }
    }
    ctx->pc = 0x46A8E4u;
label_46a8e4:
    // 0x46a8e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x46a8e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a8e8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x46a8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46a8ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46a8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46a8f0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46A8F0u;
    SET_GPR_U32(ctx, 31, 0x46A8F8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46A8F0u, 0x46A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A8F8u;
label_46a8f8:
    // 0x46a8f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46a8f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46a8fc:
    // 0x46a8fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x46a8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46a900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46a904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a908: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x46a908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x46a90c: 0x3e00008  jr          $ra
    ctx->pc = 0x46A90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A914u;
    // 0x46a914: 0x0  nop
    ctx->pc = 0x46a914u;
    // NOP
    // 0x46a918: 0x0  nop
    ctx->pc = 0x46a918u;
    // NOP
    // 0x46a91c: 0x0  nop
    ctx->pc = 0x46a91cu;
    // NOP
    ctx->pc = 0x46a920u;
}
