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

// Function: sub_001368D0
// Address: 0x1368d0 - 0x136910
void sub_001368D0_0x1368d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001368D0_0x1368d0");
#endif

    switch (ctx->pc) {
        case 0x136900u: goto label_136900;
        default: break;
    }

    ctx->pc = 0x1368d0u;

    // 0x1368d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1368d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1368d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1368d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1368d8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1368d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1368dc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1368dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1368e0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1368e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1368e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1368e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1368e8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1368e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1368ec: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1368ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1368f0: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1368f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1368f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1368f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1368f8: 0xc04da44  jal         func_136910
    ctx->pc = 0x1368F8u;
    SET_GPR_U32(ctx, 31, 0x136900u);
    ctx->pc = 0x136910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136910u, 0x1368F8u, 0x136900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136900u;
label_136900:
    // 0x136900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x136900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136904: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x136904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x136908: 0x3e00008  jr          $ra
    ctx->pc = 0x136908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136910u;
}
