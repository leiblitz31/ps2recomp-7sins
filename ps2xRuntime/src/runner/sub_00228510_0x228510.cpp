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

// Function: sub_00228510
// Address: 0x228510 - 0x228550
void sub_00228510_0x228510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228510_0x228510");
#endif

    switch (ctx->pc) {
        case 0x228540u: goto label_228540;
        default: break;
    }

    ctx->pc = 0x228510u;

    // 0x228510: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x228510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x228514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228518: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x228518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22851c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x22851cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x228520: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x228520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x228524: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228528: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x228528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22852c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x22852cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228530: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x228530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x228534: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x228534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228538: 0xc08a154  jal         func_228550
    ctx->pc = 0x228538u;
    SET_GPR_U32(ctx, 31, 0x228540u);
    ctx->pc = 0x228550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228550u, 0x228538u, 0x228540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228540u;
label_228540:
    // 0x228540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228544: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x228544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x228548: 0x3e00008  jr          $ra
    ctx->pc = 0x228548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228550u;
}
