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

// Function: sub_002D1CB0
// Address: 0x2d1cb0 - 0x2d1cf0
void sub_002D1CB0_0x2d1cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1CB0_0x2d1cb0");
#endif

    switch (ctx->pc) {
        case 0x2d1cc8u: goto label_2d1cc8;
        case 0x2d1cd8u: goto label_2d1cd8;
        default: break;
    }

    ctx->pc = 0x2d1cb0u;

    // 0x2d1cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d1cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d1cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1cb8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2d1cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2d1cbc: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2d1cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2d1cc0: 0xc0b477c  jal         func_2D1DF0
    ctx->pc = 0x2D1CC0u;
    SET_GPR_U32(ctx, 31, 0x2D1CC8u);
    ctx->pc = 0x2D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1DF0u, 0x2D1CC0u, 0x2D1CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1CC8u;
label_2d1cc8:
    // 0x2d1cc8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d1cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1ccc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d1cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1cd0: 0xc0b473c  jal         func_2D1CF0
    ctx->pc = 0x2D1CD0u;
    SET_GPR_U32(ctx, 31, 0x2D1CD8u);
    ctx->pc = 0x2D1CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1CF0u, 0x2D1CD0u, 0x2D1CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1CD8u;
label_2d1cd8:
    // 0x2d1cd8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1cdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1ce0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d1ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d1ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1CECu;
    // 0x2d1cec: 0x0  nop
    ctx->pc = 0x2d1cecu;
    // NOP
    ctx->pc = 0x2d1cf0u;
}
