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

// Function: sub_00108450
// Address: 0x108450 - 0x108490
void sub_00108450_0x108450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108450_0x108450");
#endif

    switch (ctx->pc) {
        case 0x108478u: goto label_108478;
        default: break;
    }

    ctx->pc = 0x108450u;

    // 0x108450: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x108450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x108454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x108458: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x108458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10845c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x10845cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x108460: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x108460u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x108464: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x108464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108468: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x108468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10846c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x10846cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x108470: 0xc042124  jal         func_108490
    ctx->pc = 0x108470u;
    SET_GPR_U32(ctx, 31, 0x108478u);
    ctx->pc = 0x108490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108490u, 0x108470u, 0x108478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108478u;
label_108478:
    // 0x108478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10847c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x10847cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x108480: 0x3e00008  jr          $ra
    ctx->pc = 0x108480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108488u;
    // 0x108488: 0x0  nop
    ctx->pc = 0x108488u;
    // NOP
    // 0x10848c: 0x0  nop
    ctx->pc = 0x10848cu;
    // NOP
    ctx->pc = 0x108490u;
}
