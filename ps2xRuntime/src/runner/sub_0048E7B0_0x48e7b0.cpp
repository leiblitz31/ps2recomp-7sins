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

// Function: sub_0048E7B0
// Address: 0x48e7b0 - 0x48e880
void sub_0048E7B0_0x48e7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E7B0_0x48e7b0");
#endif

    switch (ctx->pc) {
        case 0x48e7dcu: goto label_48e7dc;
        case 0x48e7f0u: goto label_48e7f0;
        case 0x48e80cu: goto label_48e80c;
        case 0x48e818u: goto label_48e818;
        case 0x48e838u: goto label_48e838;
        case 0x48e850u: goto label_48e850;
        default: break;
    }

    ctx->pc = 0x48e7b0u;

    // 0x48e7b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x48e7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x48e7b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x48e7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x48e7b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48e7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x48e7bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48e7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48e7c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48e7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48e7c4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x48e7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x48e7c8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x48e7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x48e7cc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x48e7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48e7d0: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x48e7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48e7d4: 0xc04eda8  jal         func_13B6A0
    ctx->pc = 0x48E7D4u;
    SET_GPR_U32(ctx, 31, 0x48E7DCu);
    ctx->pc = 0x13B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B6A0u, 0x48E7D4u, 0x48E7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E7DCu;
label_48e7dc:
    // 0x48e7dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x48e7dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e7e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48e7e4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x48e7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x48e7e8: 0xc04e50c  jal         func_139430
    ctx->pc = 0x48E7E8u;
    SET_GPR_U32(ctx, 31, 0x48E7F0u);
    ctx->pc = 0x139430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139430u, 0x48E7E8u, 0x48E7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E7F0u;
label_48e7f0:
    // 0x48e7f0: 0x242001b  divu        $zero, $s2, $v0
    ctx->pc = 0x48e7f0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
    // 0x48e7f4: 0x8810  mfhi        $s1
    ctx->pc = 0x48e7f4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x48e7f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48e7fc: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x48e7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x48e800: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x48e800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e804: 0xc04ed90  jal         func_13B640
    ctx->pc = 0x48E804u;
    SET_GPR_U32(ctx, 31, 0x48E80Cu);
    ctx->pc = 0x13B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B640u, 0x48E804u, 0x48E80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E80Cu;
label_48e80c:
    // 0x48e80c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x48e80cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48e810: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48E810u;
    {
        const bool branch_taken_0x48e810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e810) {
            ctx->pc = 0x48E81Cu;
            goto label_48e81c;
        }
    }
    ctx->pc = 0x48E818u;
label_48e818:
    // 0x48e818: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x48e818u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_48e81c:
    // 0x48e81c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x48E81Cu;
    {
        const bool branch_taken_0x48e81c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e81c) {
            ctx->pc = 0x48E858u;
            goto label_48e858;
        }
    }
    ctx->pc = 0x48E824u;
    // 0x48e824: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48e824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48e828: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x48e828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x48e82c: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x48e82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x48e830: 0xc123a20  jal         func_48E880
    ctx->pc = 0x48E830u;
    SET_GPR_U32(ctx, 31, 0x48E838u);
    ctx->pc = 0x48E880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E880u, 0x48E830u, 0x48E838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E838u;
label_48e838:
    // 0x48e838: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x48e838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48e83c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x48e83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x48e840: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48e840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e844: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x48e844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48e848: 0xc04ed6c  jal         func_13B5B0
    ctx->pc = 0x48E848u;
    SET_GPR_U32(ctx, 31, 0x48E850u);
    ctx->pc = 0x13B5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B5B0u, 0x48E848u, 0x48E850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E850u;
label_48e850:
    // 0x48e850: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x48E850u;
    {
        const bool branch_taken_0x48e850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e850) {
            ctx->pc = 0x48E818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48e818;
        }
    }
    ctx->pc = 0x48E858u;
label_48e858:
    // 0x48e858: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x48e858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e85c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x48e85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48e860: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48e860u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48e864: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48e864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e868: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48e868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e86c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x48e86cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x48e870: 0x3e00008  jr          $ra
    ctx->pc = 0x48E870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E878u;
    // 0x48e878: 0x0  nop
    ctx->pc = 0x48e878u;
    // NOP
    // 0x48e87c: 0x0  nop
    ctx->pc = 0x48e87cu;
    // NOP
    ctx->pc = 0x48e880u;
}
