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

// Function: sub_001E9FD0
// Address: 0x1e9fd0 - 0x1ea010
void sub_001E9FD0_0x1e9fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9FD0_0x1e9fd0");
#endif

    switch (ctx->pc) {
        case 0x1e9ff4u: goto label_1e9ff4;
        default: break;
    }

    ctx->pc = 0x1e9fd0u;

    // 0x1e9fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e9fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e9fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9fd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e9fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e9fdc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e9fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e9fe0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e9fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9fe4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e9fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9fe8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e9fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9fec: 0xc07a804  jal         func_1EA010
    ctx->pc = 0x1E9FECu;
    SET_GPR_U32(ctx, 31, 0x1E9FF4u);
    ctx->pc = 0x1EA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA010u, 0x1E9FECu, 0x1E9FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9FF4u;
label_1e9ff4:
    // 0x1e9ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9ff8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e9ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e9ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA004u;
    // 0x1ea004: 0x0  nop
    ctx->pc = 0x1ea004u;
    // NOP
    // 0x1ea008: 0x0  nop
    ctx->pc = 0x1ea008u;
    // NOP
    // 0x1ea00c: 0x0  nop
    ctx->pc = 0x1ea00cu;
    // NOP
    ctx->pc = 0x1ea010u;
}
