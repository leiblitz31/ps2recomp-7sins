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

// Function: sub_004692D0
// Address: 0x4692d0 - 0x469330
void sub_004692D0_0x4692d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004692D0_0x4692d0");
#endif

    switch (ctx->pc) {
        case 0x4692f0u: goto label_4692f0;
        case 0x469308u: goto label_469308;
        default: break;
    }

    ctx->pc = 0x4692d0u;

    // 0x4692d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4692d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4692d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4692d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4692d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4692d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4692dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4692dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4692e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4692e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4692e4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x4692e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4692e8: 0xc11b054  jal         func_46C150
    ctx->pc = 0x4692E8u;
    SET_GPR_U32(ctx, 31, 0x4692F0u);
    ctx->pc = 0x46C150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C150u, 0x4692E8u, 0x4692F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4692F0u;
label_4692f0:
    // 0x4692f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4692F0u;
    {
        const bool branch_taken_0x4692f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4692f0) {
            ctx->pc = 0x469314u;
            goto label_469314;
        }
    }
    ctx->pc = 0x4692F8u;
    // 0x4692f8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4692f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4692fc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x4692fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469300: 0xc11a3f0  jal         func_468FC0
    ctx->pc = 0x469300u;
    SET_GPR_U32(ctx, 31, 0x469308u);
    ctx->pc = 0x468FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x468FC0u, 0x469300u, 0x469308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469308u;
label_469308:
    // 0x469308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x469308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46930c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x46930Cu;
    {
        const bool branch_taken_0x46930c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46930c) {
            ctx->pc = 0x469318u;
            goto label_469318;
        }
    }
    ctx->pc = 0x469314u;
label_469314:
    // 0x469314: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x469314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469318:
    // 0x469318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x469318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46931c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46931cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x469320: 0x3e00008  jr          $ra
    ctx->pc = 0x469320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469328u;
    // 0x469328: 0x0  nop
    ctx->pc = 0x469328u;
    // NOP
    // 0x46932c: 0x0  nop
    ctx->pc = 0x46932cu;
    // NOP
    ctx->pc = 0x469330u;
}
