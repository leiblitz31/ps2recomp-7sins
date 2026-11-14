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

// Function: sub_004695A0
// Address: 0x4695a0 - 0x4695d0
void sub_004695A0_0x4695a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004695A0_0x4695a0");
#endif

    switch (ctx->pc) {
        case 0x4695b8u: goto label_4695b8;
        default: break;
    }

    ctx->pc = 0x4695a0u;

    // 0x4695a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4695a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4695a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4695a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4695a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4695a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4695ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4695acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4695b0: 0xc11a574  jal         func_4695D0
    ctx->pc = 0x4695B0u;
    SET_GPR_U32(ctx, 31, 0x4695B8u);
    ctx->pc = 0x4695D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4695D0u, 0x4695B0u, 0x4695B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4695B8u;
label_4695b8:
    // 0x4695b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4695b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4695bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4695bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4695c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4695C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4695C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4695C8u;
    // 0x4695c8: 0x0  nop
    ctx->pc = 0x4695c8u;
    // NOP
    // 0x4695cc: 0x0  nop
    ctx->pc = 0x4695ccu;
    // NOP
    ctx->pc = 0x4695d0u;
}
