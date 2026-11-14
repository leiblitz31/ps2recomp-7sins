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

// Function: sub_001E31A0
// Address: 0x1e31a0 - 0x1e31e0
void sub_001E31A0_0x1e31a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E31A0_0x1e31a0");
#endif

    switch (ctx->pc) {
        case 0x1e31d0u: goto label_1e31d0;
        default: break;
    }

    ctx->pc = 0x1e31a0u;

    // 0x1e31a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e31a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e31a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e31a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e31a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e31a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e31ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e31acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e31b0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1e31b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1e31b4: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x1e31b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x1e31b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e31b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e31bc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e31bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e31c0: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1e31c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e31c4: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x1e31c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e31c8: 0xc079d78  jal         func_1E75E0
    ctx->pc = 0x1E31C8u;
    SET_GPR_U32(ctx, 31, 0x1E31D0u);
    ctx->pc = 0x1E75E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E75E0u, 0x1E31C8u, 0x1E31D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E31D0u;
label_1e31d0:
    // 0x1e31d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e31d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e31d4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e31d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e31d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E31D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E31D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E31E0u;
}
