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

// Function: sub_001B83F0
// Address: 0x1b83f0 - 0x1b8430
void sub_001B83F0_0x1b83f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B83F0_0x1b83f0");
#endif

    switch (ctx->pc) {
        case 0x1b8418u: goto label_1b8418;
        default: break;
    }

    ctx->pc = 0x1b83f0u;

    // 0x1b83f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b83f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b83f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b83f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b83f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b83f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b83fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1b83fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1b8400: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1b8400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1b8404: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b8404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8408: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1b8408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b840c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1b840cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8410: 0xc04f1e8  jal         func_13C7A0
    ctx->pc = 0x1B8410u;
    SET_GPR_U32(ctx, 31, 0x1B8418u);
    ctx->pc = 0x13C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C7A0u, 0x1B8410u, 0x1B8418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8418u;
label_1b8418:
    // 0x1b8418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b841c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1b841cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b8420: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8428u;
    // 0x1b8428: 0x0  nop
    ctx->pc = 0x1b8428u;
    // NOP
    // 0x1b842c: 0x0  nop
    ctx->pc = 0x1b842cu;
    // NOP
    ctx->pc = 0x1b8430u;
}
