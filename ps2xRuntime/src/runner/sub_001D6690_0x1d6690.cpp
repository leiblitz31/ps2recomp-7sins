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

// Function: sub_001D6690
// Address: 0x1d6690 - 0x1d66d0
void sub_001D6690_0x1d6690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6690_0x1d6690");
#endif

    switch (ctx->pc) {
        case 0x1d66b4u: goto label_1d66b4;
        default: break;
    }

    ctx->pc = 0x1d6690u;

    // 0x1d6690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6698: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d6698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d669c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1d669cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1d66a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d66a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d66a4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1d66a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d66a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d66a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d66ac: 0xc0759b4  jal         func_1D66D0
    ctx->pc = 0x1D66ACu;
    SET_GPR_U32(ctx, 31, 0x1D66B4u);
    ctx->pc = 0x1D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66D0u, 0x1D66ACu, 0x1D66B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D66B4u;
label_1d66b4:
    // 0x1d66b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d66b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d66b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d66b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d66bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D66BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D66BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D66C4u;
    // 0x1d66c4: 0x0  nop
    ctx->pc = 0x1d66c4u;
    // NOP
    // 0x1d66c8: 0x0  nop
    ctx->pc = 0x1d66c8u;
    // NOP
    // 0x1d66cc: 0x0  nop
    ctx->pc = 0x1d66ccu;
    // NOP
    ctx->pc = 0x1d66d0u;
}
