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

// Function: sub_001E7BC0
// Address: 0x1e7bc0 - 0x1e7c00
void sub_001E7BC0_0x1e7bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7BC0_0x1e7bc0");
#endif

    switch (ctx->pc) {
        case 0x1e7bf0u: goto label_1e7bf0;
        default: break;
    }

    ctx->pc = 0x1e7bc0u;

    // 0x1e7bc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e7bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e7bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7bc8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e7bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e7bcc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e7bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e7bd0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e7bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e7bd4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e7bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7bd8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e7bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7bdc: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1e7bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7be0: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1e7be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1e7be4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e7be4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7be8: 0xc079f00  jal         func_1E7C00
    ctx->pc = 0x1E7BE8u;
    SET_GPR_U32(ctx, 31, 0x1E7BF0u);
    ctx->pc = 0x1E7C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7C00u, 0x1E7BE8u, 0x1E7BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7BF0u;
label_1e7bf0:
    // 0x1e7bf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7bf4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1e7bf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e7bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7C00u;
}
