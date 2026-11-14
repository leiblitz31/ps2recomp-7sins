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

// Function: sub_004644E0
// Address: 0x4644e0 - 0x4645a0
void sub_004644E0_0x4644e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004644E0_0x4644e0");
#endif

    switch (ctx->pc) {
        case 0x464508u: goto label_464508;
        case 0x46451cu: goto label_46451c;
        case 0x464530u: goto label_464530;
        case 0x464544u: goto label_464544;
        case 0x464564u: goto label_464564;
        case 0x464584u: goto label_464584;
        default: break;
    }

    ctx->pc = 0x4644e0u;

    // 0x4644e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4644e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4644e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4644e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4644e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4644e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4644ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4644ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4644f0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x4644f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x4644f4: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x4644f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x4644f8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x4644f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4644fc: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x4644fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x464500: 0xc047874  jal         func_11E1D0
    ctx->pc = 0x464500u;
    SET_GPR_U32(ctx, 31, 0x464508u);
    ctx->pc = 0x11E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1D0u, 0x464500u, 0x464508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464508u;
label_464508:
    // 0x464508: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x464508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x46450c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x46450cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x464510: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x464510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x464514: 0xc047874  jal         func_11E1D0
    ctx->pc = 0x464514u;
    SET_GPR_U32(ctx, 31, 0x46451Cu);
    ctx->pc = 0x11E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1D0u, 0x464514u, 0x46451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46451Cu;
label_46451c:
    // 0x46451c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x46451cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x464520: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x464520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x464524: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x464524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x464528: 0xc119124  jal         func_464490
    ctx->pc = 0x464528u;
    SET_GPR_U32(ctx, 31, 0x464530u);
    ctx->pc = 0x464490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464490u, 0x464528u, 0x464530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464530u;
label_464530:
    // 0x464530: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x464530u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x464534: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x464534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x464538: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x464538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x46453c: 0xc047874  jal         func_11E1D0
    ctx->pc = 0x46453Cu;
    SET_GPR_U32(ctx, 31, 0x464544u);
    ctx->pc = 0x11E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1D0u, 0x46453Cu, 0x464544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464544u;
label_464544:
    // 0x464544: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x464544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464548: 0x230082a  slt         $at, $s1, $s0
    ctx->pc = 0x464548u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x46454c: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x46454Cu;
    {
        const bool branch_taken_0x46454c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x46454c) {
            ctx->pc = 0x46456Cu;
            goto label_46456c;
        }
    }
    ctx->pc = 0x464554u;
    // 0x464554: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x464554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x464558: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x464558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46455c: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x46455Cu;
    SET_GPR_U32(ctx, 31, 0x464564u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x46455Cu, 0x464564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464564u;
label_464564:
    // 0x464564: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x464564u;
    {
        const bool branch_taken_0x464564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x464564) {
            ctx->pc = 0x464584u;
            goto label_464584;
        }
    }
    ctx->pc = 0x46456Cu;
label_46456c:
    // 0x46456c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x46456cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x464570: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x464570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x464574: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x464574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464578: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x464578u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46457c: 0xc043764  jal         func_10DD90
    ctx->pc = 0x46457Cu;
    SET_GPR_U32(ctx, 31, 0x464584u);
    ctx->pc = 0x10DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD90u, 0x46457Cu, 0x464584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464584u;
label_464584:
    // 0x464584: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x464584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x464588: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x464588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46458c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46458cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x464590: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x464590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x464594: 0x3e00008  jr          $ra
    ctx->pc = 0x464594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46459Cu;
    // 0x46459c: 0x0  nop
    ctx->pc = 0x46459cu;
    // NOP
    ctx->pc = 0x4645a0u;
}
