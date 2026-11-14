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

// Function: sub_002D0690
// Address: 0x2d0690 - 0x2d06d0
void sub_002D0690_0x2d0690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0690_0x2d0690");
#endif

    switch (ctx->pc) {
        case 0x2d06a8u: goto label_2d06a8;
        case 0x2d06b8u: goto label_2d06b8;
        default: break;
    }

    ctx->pc = 0x2d0690u;

    // 0x2d0690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d0694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0698: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2d0698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2d069c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2d069cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2d06a0: 0xc0b41f4  jal         func_2D07D0
    ctx->pc = 0x2D06A0u;
    SET_GPR_U32(ctx, 31, 0x2D06A8u);
    ctx->pc = 0x2D07D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D07D0u, 0x2D06A0u, 0x2D06A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D06A8u;
label_2d06a8:
    // 0x2d06a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d06a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d06ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d06acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d06b0: 0xc0b41b4  jal         func_2D06D0
    ctx->pc = 0x2D06B0u;
    SET_GPR_U32(ctx, 31, 0x2D06B8u);
    ctx->pc = 0x2D06D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D06D0u, 0x2D06B0u, 0x2D06B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D06B8u;
label_2d06b8:
    // 0x2d06b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d06b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d06bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d06bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d06c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d06c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d06c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D06C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D06C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D06CCu;
    // 0x2d06cc: 0x0  nop
    ctx->pc = 0x2d06ccu;
    // NOP
    ctx->pc = 0x2d06d0u;
}
