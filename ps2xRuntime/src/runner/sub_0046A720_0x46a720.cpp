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

// Function: sub_0046A720
// Address: 0x46a720 - 0x46a800
void sub_0046A720_0x46a720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A720_0x46a720");
#endif

    switch (ctx->pc) {
        case 0x46a748u: goto label_46a748;
        case 0x46a754u: goto label_46a754;
        case 0x46a76cu: goto label_46a76c;
        case 0x46a780u: goto label_46a780;
        case 0x46a790u: goto label_46a790;
        case 0x46a7a4u: goto label_46a7a4;
        case 0x46a7b8u: goto label_46a7b8;
        case 0x46a7d8u: goto label_46a7d8;
        default: break;
    }

    ctx->pc = 0x46a720u;

    // 0x46a720: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x46a720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x46a724: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x46a724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x46a728: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46a728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46a72c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46a72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46a730: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x46a730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x46a734: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x46a734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x46a738: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x46a738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46a73c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x46a73cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46a740: 0xc1194c4  jal         func_465310
    ctx->pc = 0x46A740u;
    SET_GPR_U32(ctx, 31, 0x46A748u);
    ctx->pc = 0x465310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465310u, 0x46A740u, 0x46A748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A748u;
label_46a748:
    // 0x46a748: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x46a748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46a74c: 0xc11931c  jal         func_464C70
    ctx->pc = 0x46A74Cu;
    SET_GPR_U32(ctx, 31, 0x46A754u);
    ctx->pc = 0x464C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464C70u, 0x46A74Cu, 0x46A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A754u;
label_46a754:
    // 0x46a754: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x46a754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46a758: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x46a758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x46a75c: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x46a75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46a760: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x46a760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46a764: 0xc11aa00  jal         func_46A800
    ctx->pc = 0x46A764u;
    SET_GPR_U32(ctx, 31, 0x46A76Cu);
    ctx->pc = 0x46A800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A800u, 0x46A764u, 0x46A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A76Cu;
label_46a76c:
    // 0x46a76c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x46a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46a770: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x46a770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46a774: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x46a774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46a778: 0xc11a4d8  jal         func_469360
    ctx->pc = 0x46A778u;
    SET_GPR_U32(ctx, 31, 0x46A780u);
    ctx->pc = 0x469360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469360u, 0x46A778u, 0x46A780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A780u;
label_46a780:
    // 0x46a780: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x46a780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x46a784: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x46a784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46a788: 0xc11a4cc  jal         func_469330
    ctx->pc = 0x46A788u;
    SET_GPR_U32(ctx, 31, 0x46A790u);
    ctx->pc = 0x469330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469330u, 0x46A788u, 0x46A790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A790u;
label_46a790:
    // 0x46a790: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x46A790u;
    {
        const bool branch_taken_0x46a790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a790) {
            ctx->pc = 0x46A7C4u;
            goto label_46a7c4;
        }
    }
    ctx->pc = 0x46A798u;
    // 0x46a798: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x46a798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x46a79c: 0xc11a568  jal         func_4695A0
    ctx->pc = 0x46A79Cu;
    SET_GPR_U32(ctx, 31, 0x46A7A4u);
    ctx->pc = 0x4695A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4695A0u, 0x46A79Cu, 0x46A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A7A4u;
label_46a7a4:
    // 0x46a7a4: 0x2451000c  addiu       $s1, $v0, 0xC
    ctx->pc = 0x46a7a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x46a7a8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x46a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46a7ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46a7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46a7b0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46A7B0u;
    SET_GPR_U32(ctx, 31, 0x46A7B8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46A7B0u, 0x46A7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A7B8u;
label_46a7b8:
    // 0x46a7b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x46a7b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a7bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x46A7BCu;
    {
        const bool branch_taken_0x46a7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a7bc) {
            ctx->pc = 0x46A7DCu;
            goto label_46a7dc;
        }
    }
    ctx->pc = 0x46A7C4u;
label_46a7c4:
    // 0x46a7c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x46a7c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a7c8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x46a7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46a7cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46a7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46a7d0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46A7D0u;
    SET_GPR_U32(ctx, 31, 0x46A7D8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46A7D0u, 0x46A7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A7D8u;
label_46a7d8:
    // 0x46a7d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46a7d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46a7dc:
    // 0x46a7dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x46a7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a7e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46a7e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a7e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46a7e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a7e8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x46a7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x46a7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x46A7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A7F4u;
    // 0x46a7f4: 0x0  nop
    ctx->pc = 0x46a7f4u;
    // NOP
    // 0x46a7f8: 0x0  nop
    ctx->pc = 0x46a7f8u;
    // NOP
    // 0x46a7fc: 0x0  nop
    ctx->pc = 0x46a7fcu;
    // NOP
    ctx->pc = 0x46a800u;
}
