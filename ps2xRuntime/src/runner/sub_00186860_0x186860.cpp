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

// Function: sub_00186860
// Address: 0x186860 - 0x186890
void sub_00186860_0x186860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186860_0x186860");
#endif

    switch (ctx->pc) {
        case 0x186878u: goto label_186878;
        default: break;
    }

    ctx->pc = 0x186860u;

    // 0x186860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186868: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x186868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18686c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18686cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186870: 0xc061a24  jal         func_186890
    ctx->pc = 0x186870u;
    SET_GPR_U32(ctx, 31, 0x186878u);
    ctx->pc = 0x186890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186890u, 0x186870u, 0x186878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186878u;
label_186878:
    // 0x186878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18687c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18687cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x186880: 0x3e00008  jr          $ra
    ctx->pc = 0x186880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186888u;
    // 0x186888: 0x0  nop
    ctx->pc = 0x186888u;
    // NOP
    // 0x18688c: 0x0  nop
    ctx->pc = 0x18688cu;
    // NOP
    ctx->pc = 0x186890u;
}
