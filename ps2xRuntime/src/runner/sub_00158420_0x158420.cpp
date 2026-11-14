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

// Function: sub_00158420
// Address: 0x158420 - 0x158460
void sub_00158420_0x158420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158420_0x158420");
#endif

    switch (ctx->pc) {
        case 0x158448u: goto label_158448;
        default: break;
    }

    ctx->pc = 0x158420u;

    // 0x158420: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x158420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x158424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x158428: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x158428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x15842c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x15842cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x158430: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x158430u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x158434: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x158434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158438: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x158438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15843c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x15843cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x158440: 0xc056118  jal         func_158460
    ctx->pc = 0x158440u;
    SET_GPR_U32(ctx, 31, 0x158448u);
    ctx->pc = 0x158460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158460u, 0x158440u, 0x158448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158448u;
label_158448:
    // 0x158448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x158448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15844c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15844cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x158450: 0x3e00008  jr          $ra
    ctx->pc = 0x158450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158458u;
    // 0x158458: 0x0  nop
    ctx->pc = 0x158458u;
    // NOP
    // 0x15845c: 0x0  nop
    ctx->pc = 0x15845cu;
    // NOP
    ctx->pc = 0x158460u;
}
