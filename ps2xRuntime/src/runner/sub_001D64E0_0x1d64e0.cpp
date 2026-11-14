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

// Function: sub_001D64E0
// Address: 0x1d64e0 - 0x1d6510
void sub_001D64E0_0x1d64e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D64E0_0x1d64e0");
#endif

    switch (ctx->pc) {
        case 0x1d64fcu: goto label_1d64fc;
        default: break;
    }

    ctx->pc = 0x1d64e0u;

    // 0x1d64e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d64e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d64e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d64e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d64e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d64e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d64ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d64ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d64f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d64f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d64f4: 0xc058c38  jal         func_1630E0
    ctx->pc = 0x1D64F4u;
    SET_GPR_U32(ctx, 31, 0x1D64FCu);
    ctx->pc = 0x1630E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1630E0u, 0x1D64F4u, 0x1D64FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D64FCu;
label_1d64fc:
    // 0x1d64fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d64fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6500: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d6500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d6504: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D650Cu;
    // 0x1d650c: 0x0  nop
    ctx->pc = 0x1d650cu;
    // NOP
    ctx->pc = 0x1d6510u;
}
