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

// Function: sub_00243510
// Address: 0x243510 - 0x243550
void sub_00243510_0x243510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243510_0x243510");
#endif

    switch (ctx->pc) {
        case 0x243540u: goto label_243540;
        default: break;
    }

    ctx->pc = 0x243510u;

    // 0x243510: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x243510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x243514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243518: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x243518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x24351c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x24351cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x243520: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x243520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x243524: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x243524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243528: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x243528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24352c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x24352cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x243530: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x243530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x243534: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x243534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243538: 0xc090d54  jal         func_243550
    ctx->pc = 0x243538u;
    SET_GPR_U32(ctx, 31, 0x243540u);
    ctx->pc = 0x243550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243550u, 0x243538u, 0x243540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243540u;
label_243540:
    // 0x243540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243544: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x243544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x243548: 0x3e00008  jr          $ra
    ctx->pc = 0x243548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243550u;
}
