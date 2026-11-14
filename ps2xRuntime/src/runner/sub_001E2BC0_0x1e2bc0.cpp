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

// Function: sub_001E2BC0
// Address: 0x1e2bc0 - 0x1e2bf0
void sub_001E2BC0_0x1e2bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2BC0_0x1e2bc0");
#endif

    switch (ctx->pc) {
        case 0x1e2be0u: goto label_1e2be0;
        default: break;
    }

    ctx->pc = 0x1e2bc0u;

    // 0x1e2bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2bc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e2bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e2bcc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e2bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e2bd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e2bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2bd4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e2bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2bd8: 0xc077f4c  jal         func_1DFD30
    ctx->pc = 0x1E2BD8u;
    SET_GPR_U32(ctx, 31, 0x1E2BE0u);
    ctx->pc = 0x1DFD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFD30u, 0x1E2BD8u, 0x1E2BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2BE0u;
label_1e2be0:
    // 0x1e2be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2be4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e2be4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e2be8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2BF0u;
}
