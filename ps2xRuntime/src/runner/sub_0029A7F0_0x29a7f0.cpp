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

// Function: sub_0029A7F0
// Address: 0x29a7f0 - 0x29a8f0
void sub_0029A7F0_0x29a7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A7F0_0x29a7f0");
#endif

    switch (ctx->pc) {
        case 0x29a830u: goto label_29a830;
        case 0x29a858u: goto label_29a858;
        case 0x29a86cu: goto label_29a86c;
        case 0x29a894u: goto label_29a894;
        case 0x29a8c4u: goto label_29a8c4;
        default: break;
    }

    ctx->pc = 0x29a7f0u;

    // 0x29a7f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29a7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29a7f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29a7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29a7f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29a7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29a7fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29a7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29a800: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x29a800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x29a804: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x29a804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x29a808: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x29a808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x29a80c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x29a80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29a810: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x29a810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x29a814: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a818: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29a818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a81c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a820: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a824: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x29a824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x29a828: 0xc0a69a8  jal         func_29A6A0
    ctx->pc = 0x29A828u;
    SET_GPR_U32(ctx, 31, 0x29A830u);
    ctx->pc = 0x29A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6A0u, 0x29A828u, 0x29A830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A830u;
label_29a830:
    // 0x29a830: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29a830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a834: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x29a834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29a838: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x29a838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x29a83c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a840: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29a840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a844: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29a844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a848: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a84c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x29a84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x29a850: 0xc0a6990  jal         func_29A640
    ctx->pc = 0x29A850u;
    SET_GPR_U32(ctx, 31, 0x29A858u);
    ctx->pc = 0x29A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A640u, 0x29A850u, 0x29A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A858u;
label_29a858:
    // 0x29a858: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29a858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a85c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29a85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a860: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x29a860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29a864: 0xc0a6d50  jal         func_29B540
    ctx->pc = 0x29A864u;
    SET_GPR_U32(ctx, 31, 0x29A86Cu);
    ctx->pc = 0x29B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B540u, 0x29A864u, 0x29A86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A86Cu;
label_29a86c:
    // 0x29a86c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29a86cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a870: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x29a870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29a874: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x29a874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x29a878: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a87c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29a87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a880: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29a880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a884: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a888: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x29a888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x29a88c: 0xc0a6990  jal         func_29A640
    ctx->pc = 0x29A88Cu;
    SET_GPR_U32(ctx, 31, 0x29A894u);
    ctx->pc = 0x29A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A640u, 0x29A88Cu, 0x29A894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A894u;
label_29a894:
    // 0x29a894: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29A894u;
    {
        const bool branch_taken_0x29a894 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x29a894) {
            ctx->pc = 0x29A8D0u;
            goto label_29a8d0;
        }
    }
    ctx->pc = 0x29A89Cu;
    // 0x29a89c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x29a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29a8a0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x29a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x29a8a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a8a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29a8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a8ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a8b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a8b4: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x29a8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x29a8b8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x29a8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29a8bc: 0xc0a6a3c  jal         func_29A8F0
    ctx->pc = 0x29A8BCu;
    SET_GPR_U32(ctx, 31, 0x29A8C4u);
    ctx->pc = 0x29A8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A8F0u, 0x29A8BCu, 0x29A8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A8C4u;
label_29a8c4:
    // 0x29a8c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29a8c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29A8C8u;
    {
        const bool branch_taken_0x29a8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a8c8) {
            ctx->pc = 0x29A8D4u;
            goto label_29a8d4;
        }
    }
    ctx->pc = 0x29A8D0u;
label_29a8d0:
    // 0x29a8d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29a8d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a8d4:
    // 0x29a8d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29a8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a8d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29a8d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a8dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29a8dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a8e0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x29a8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29a8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x29A8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A8ECu;
    // 0x29a8ec: 0x0  nop
    ctx->pc = 0x29a8ecu;
    // NOP
    ctx->pc = 0x29a8f0u;
}
