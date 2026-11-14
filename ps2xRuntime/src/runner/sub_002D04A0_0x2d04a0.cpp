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

// Function: sub_002D04A0
// Address: 0x2d04a0 - 0x2d04e0
void sub_002D04A0_0x2d04a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D04A0_0x2d04a0");
#endif

    switch (ctx->pc) {
        case 0x2d04c4u: goto label_2d04c4;
        default: break;
    }

    ctx->pc = 0x2d04a0u;

    // 0x2d04a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d04a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d04a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d04a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d04a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d04a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d04ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2d04acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2d04b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d04b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d04b4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2d04b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d04b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d04b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d04bc: 0xc0b4138  jal         func_2D04E0
    ctx->pc = 0x2D04BCu;
    SET_GPR_U32(ctx, 31, 0x2D04C4u);
    ctx->pc = 0x2D04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D04E0u, 0x2D04BCu, 0x2D04C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D04C4u;
label_2d04c4:
    // 0x2d04c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d04c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d04c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d04c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d04cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D04CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D04CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D04D4u;
    // 0x2d04d4: 0x0  nop
    ctx->pc = 0x2d04d4u;
    // NOP
    // 0x2d04d8: 0x0  nop
    ctx->pc = 0x2d04d8u;
    // NOP
    // 0x2d04dc: 0x0  nop
    ctx->pc = 0x2d04dcu;
    // NOP
    ctx->pc = 0x2d04e0u;
}
