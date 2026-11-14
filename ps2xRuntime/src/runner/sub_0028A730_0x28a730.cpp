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

// Function: sub_0028A730
// Address: 0x28a730 - 0x28a790
void sub_0028A730_0x28a730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A730_0x28a730");
#endif

    switch (ctx->pc) {
        case 0x28a750u: goto label_28a750;
        case 0x28a760u: goto label_28a760;
        case 0x28a778u: goto label_28a778;
        default: break;
    }

    ctx->pc = 0x28a730u;

    // 0x28a730: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28a730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28a734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28a734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28a738: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28a738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28a73c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x28a73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x28a740: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x28a740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x28a744: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x28a744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a748: 0xc0a29e4  jal         func_28A790
    ctx->pc = 0x28A748u;
    SET_GPR_U32(ctx, 31, 0x28A750u);
    ctx->pc = 0x28A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A790u, 0x28A748u, 0x28A750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A750u;
label_28a750:
    // 0x28a750: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x28a750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a754: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28a754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a758: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x28A758u;
    SET_GPR_U32(ctx, 31, 0x28A760u);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x28A758u, 0x28A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A760u;
label_28a760:
    // 0x28a760: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x28a760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a764: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28a764u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28a768: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28a768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a76c: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x28a76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x28a770: 0xc0a29e4  jal         func_28A790
    ctx->pc = 0x28A770u;
    SET_GPR_U32(ctx, 31, 0x28A778u);
    ctx->pc = 0x28A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A790u, 0x28A770u, 0x28A778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A778u;
label_28a778:
    // 0x28a778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28a778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a77c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x28a77cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x28a780: 0x3e00008  jr          $ra
    ctx->pc = 0x28A780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A788u;
    // 0x28a788: 0x0  nop
    ctx->pc = 0x28a788u;
    // NOP
    // 0x28a78c: 0x0  nop
    ctx->pc = 0x28a78cu;
    // NOP
    ctx->pc = 0x28a790u;
}
