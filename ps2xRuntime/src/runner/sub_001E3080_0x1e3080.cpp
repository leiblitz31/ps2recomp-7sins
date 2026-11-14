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

// Function: sub_001E3080
// Address: 0x1e3080 - 0x1e30d0
void sub_001E3080_0x1e3080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3080_0x1e3080");
#endif

    switch (ctx->pc) {
        case 0x1e309cu: goto label_1e309c;
        case 0x1e30b0u: goto label_1e30b0;
        case 0x1e30c0u: goto label_1e30c0;
        default: break;
    }

    ctx->pc = 0x1e3080u;

    // 0x1e3080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e3080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e3084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3088: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e3088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e308c: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e308cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1e3090: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1e3090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e3094: 0xc078de8  jal         func_1E37A0
    ctx->pc = 0x1E3094u;
    SET_GPR_U32(ctx, 31, 0x1E309Cu);
    ctx->pc = 0x1E37A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E37A0u, 0x1E3094u, 0x1E309Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E309Cu;
label_1e309c:
    // 0x1e309c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1e309cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e30a0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1e30a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e30a4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1e30a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e30a8: 0xc078c34  jal         func_1E30D0
    ctx->pc = 0x1E30A8u;
    SET_GPR_U32(ctx, 31, 0x1E30B0u);
    ctx->pc = 0x1E30D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E30D0u, 0x1E30A8u, 0x1E30B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E30B0u;
label_1e30b0:
    // 0x1e30b0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1e30b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e30b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1e30b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e30b8: 0xc075840  jal         func_1D6100
    ctx->pc = 0x1E30B8u;
    SET_GPR_U32(ctx, 31, 0x1E30C0u);
    ctx->pc = 0x1D6100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6100u, 0x1E30B8u, 0x1E30C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E30C0u;
label_1e30c0:
    // 0x1e30c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e30c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e30c4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e30c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e30c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E30C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E30C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E30D0u;
}
