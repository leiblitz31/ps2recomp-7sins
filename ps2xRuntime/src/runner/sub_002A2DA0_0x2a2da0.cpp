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

// Function: sub_002A2DA0
// Address: 0x2a2da0 - 0x2a2de0
void sub_002A2DA0_0x2a2da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2DA0_0x2a2da0");
#endif

    switch (ctx->pc) {
        case 0x2a2db8u: goto label_2a2db8;
        case 0x2a2dd0u: goto label_2a2dd0;
        default: break;
    }

    ctx->pc = 0x2a2da0u;

    // 0x2a2da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a2da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a2da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a2da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a2da8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a2da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a2dac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2a2dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2a2db0: 0xc122434  jal         func_4890D0
    ctx->pc = 0x2A2DB0u;
    SET_GPR_U32(ctx, 31, 0x2A2DB8u);
    ctx->pc = 0x4890D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890D0u, 0x2A2DB0u, 0x2A2DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2DB8u;
label_2a2db8:
    // 0x2a2db8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2a2db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2dbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2dc0: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x2a2dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2a2dc4: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2a2dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2dc8: 0xc11eea4  jal         func_47BA90
    ctx->pc = 0x2A2DC8u;
    SET_GPR_U32(ctx, 31, 0x2A2DD0u);
    ctx->pc = 0x47BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BA90u, 0x2A2DC8u, 0x2A2DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2DD0u;
label_2a2dd0:
    // 0x2a2dd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a2dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2dd4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a2dd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a2dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2DE0u;
}
