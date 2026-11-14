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

// Function: sub_00493420
// Address: 0x493420 - 0x493460
void sub_00493420_0x493420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00493420_0x493420");
#endif

    switch (ctx->pc) {
        case 0x49344cu: goto label_49344c;
        default: break;
    }

    ctx->pc = 0x493420u;

    // 0x493420: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x493420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x493424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x493424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x493428: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x493428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x49342c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x49342cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x493430: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x493430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x493434: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x493434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x493438: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x493438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49343c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x49343cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x493440: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x493440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x493444: 0xc124d18  jal         func_493460
    ctx->pc = 0x493444u;
    SET_GPR_U32(ctx, 31, 0x49344Cu);
    ctx->pc = 0x493460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493460u, 0x493444u, 0x49344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49344Cu;
label_49344c:
    // 0x49344c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49344cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x493450: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x493450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x493454: 0x3e00008  jr          $ra
    ctx->pc = 0x493454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49345Cu;
    // 0x49345c: 0x0  nop
    ctx->pc = 0x49345cu;
    // NOP
    ctx->pc = 0x493460u;
}
