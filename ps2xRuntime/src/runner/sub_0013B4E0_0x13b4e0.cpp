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

// Function: sub_0013B4E0
// Address: 0x13b4e0 - 0x13b5b0
void sub_0013B4E0_0x13b4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B4E0_0x13b4e0");
#endif

    switch (ctx->pc) {
        case 0x13b50cu: goto label_13b50c;
        case 0x13b520u: goto label_13b520;
        case 0x13b53cu: goto label_13b53c;
        case 0x13b548u: goto label_13b548;
        case 0x13b568u: goto label_13b568;
        case 0x13b580u: goto label_13b580;
        default: break;
    }

    ctx->pc = 0x13b4e0u;

    // 0x13b4e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13b4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13b4e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13b4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13b4e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13b4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13b4ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13b4f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13b4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13b4f4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x13b4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x13b4f8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x13b4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x13b4fc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x13b4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b500: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x13b500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13b504: 0xc04eda8  jal         func_13B6A0
    ctx->pc = 0x13B504u;
    SET_GPR_U32(ctx, 31, 0x13B50Cu);
    ctx->pc = 0x13B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B6A0u, 0x13B504u, 0x13B50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B50Cu;
label_13b50c:
    // 0x13b50c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13b50cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b510: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13b510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b514: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x13b514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13b518: 0xc04e50c  jal         func_139430
    ctx->pc = 0x13B518u;
    SET_GPR_U32(ctx, 31, 0x13B520u);
    ctx->pc = 0x139430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139430u, 0x13B518u, 0x13B520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B520u;
label_13b520:
    // 0x13b520: 0x242001b  divu        $zero, $s2, $v0
    ctx->pc = 0x13b520u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
    // 0x13b524: 0x8810  mfhi        $s1
    ctx->pc = 0x13b524u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x13b528: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13b528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b52c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x13b52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13b530: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13b530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b534: 0xc04ed90  jal         func_13B640
    ctx->pc = 0x13B534u;
    SET_GPR_U32(ctx, 31, 0x13B53Cu);
    ctx->pc = 0x13B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B640u, 0x13B534u, 0x13B53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B53Cu;
label_13b53c:
    // 0x13b53c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x13b53cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b540: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13B540u;
    {
        const bool branch_taken_0x13b540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b540) {
            ctx->pc = 0x13B54Cu;
            goto label_13b54c;
        }
    }
    ctx->pc = 0x13B548u;
label_13b548:
    // 0x13b548: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x13b548u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13b54c:
    // 0x13b54c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x13B54Cu;
    {
        const bool branch_taken_0x13b54c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b54c) {
            ctx->pc = 0x13B588u;
            goto label_13b588;
        }
    }
    ctx->pc = 0x13B554u;
    // 0x13b554: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13b554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b558: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x13b558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x13b55c: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x13b55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x13b560: 0xc04ed88  jal         func_13B620
    ctx->pc = 0x13B560u;
    SET_GPR_U32(ctx, 31, 0x13B568u);
    ctx->pc = 0x13B620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B620u, 0x13B560u, 0x13B568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B568u;
label_13b568:
    // 0x13b568: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13b568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b56c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x13b56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13b570: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13b570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b574: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x13b574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13b578: 0xc04ed6c  jal         func_13B5B0
    ctx->pc = 0x13B578u;
    SET_GPR_U32(ctx, 31, 0x13B580u);
    ctx->pc = 0x13B5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B5B0u, 0x13B578u, 0x13B580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B580u;
label_13b580:
    // 0x13b580: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x13B580u;
    {
        const bool branch_taken_0x13b580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b580) {
            ctx->pc = 0x13B548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b548;
        }
    }
    ctx->pc = 0x13B588u;
label_13b588:
    // 0x13b588: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13b588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b58c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13b58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b590: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13b590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b594: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13b594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b598: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b59c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x13b59cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13b5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x13B5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B5A8u;
    // 0x13b5a8: 0x0  nop
    ctx->pc = 0x13b5a8u;
    // NOP
    // 0x13b5ac: 0x0  nop
    ctx->pc = 0x13b5acu;
    // NOP
    ctx->pc = 0x13b5b0u;
}
