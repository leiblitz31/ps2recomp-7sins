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

// Function: sub_002E5CE0
// Address: 0x2e5ce0 - 0x2e5d20
void sub_002E5CE0_0x2e5ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5CE0_0x2e5ce0");
#endif

    switch (ctx->pc) {
        case 0x2e5d00u: goto label_2e5d00;
        default: break;
    }

    ctx->pc = 0x2e5ce0u;

    // 0x2e5ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e5ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e5ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e5ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e5ce8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e5ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e5cec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2e5cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2e5cf0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e5cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5cf4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2e5cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5cf8: 0xc0b9748  jal         func_2E5D20
    ctx->pc = 0x2E5CF8u;
    SET_GPR_U32(ctx, 31, 0x2E5D00u);
    ctx->pc = 0x2E5D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5D20u, 0x2E5CF8u, 0x2E5D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5D00u;
label_2e5d00:
    // 0x2e5d00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5d04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e5d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5d08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e5d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e5d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5D14u;
    // 0x2e5d14: 0x0  nop
    ctx->pc = 0x2e5d14u;
    // NOP
    // 0x2e5d18: 0x0  nop
    ctx->pc = 0x2e5d18u;
    // NOP
    // 0x2e5d1c: 0x0  nop
    ctx->pc = 0x2e5d1cu;
    // NOP
    ctx->pc = 0x2e5d20u;
}
