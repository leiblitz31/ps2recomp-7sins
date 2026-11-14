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

// Function: sub_002905E0
// Address: 0x2905e0 - 0x290620
void sub_002905E0_0x2905e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002905E0_0x2905e0");
#endif

    switch (ctx->pc) {
        case 0x290608u: goto label_290608;
        default: break;
    }

    ctx->pc = 0x2905e0u;

    // 0x2905e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2905e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2905e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2905e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2905e8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2905e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2905ec: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2905ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2905f0: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2905f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2905f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2905f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2905f8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2905f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2905fc: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x2905fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x290600: 0xc0a4188  jal         func_290620
    ctx->pc = 0x290600u;
    SET_GPR_U32(ctx, 31, 0x290608u);
    ctx->pc = 0x290620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290620u, 0x290600u, 0x290608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290608u;
label_290608:
    // 0x290608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29060c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x29060cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x290610: 0x3e00008  jr          $ra
    ctx->pc = 0x290610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290618u;
    // 0x290618: 0x0  nop
    ctx->pc = 0x290618u;
    // NOP
    // 0x29061c: 0x0  nop
    ctx->pc = 0x29061cu;
    // NOP
    ctx->pc = 0x290620u;
}
