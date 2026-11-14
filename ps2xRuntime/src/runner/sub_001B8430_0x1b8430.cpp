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

// Function: sub_001B8430
// Address: 0x1b8430 - 0x1b8480
void sub_001B8430_0x1b8430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8430_0x1b8430");
#endif

    switch (ctx->pc) {
        case 0x1b8450u: goto label_1b8450;
        case 0x1b8468u: goto label_1b8468;
        default: break;
    }

    ctx->pc = 0x1b8430u;

    // 0x1b8430: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b8430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b8434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8438: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b8438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1b843c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1b843cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1b8440: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1b8440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1b8444: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1b8444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1b8448: 0xc06e148  jal         func_1B8520
    ctx->pc = 0x1B8448u;
    SET_GPR_U32(ctx, 31, 0x1B8450u);
    ctx->pc = 0x1B8520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8520u, 0x1B8448u, 0x1B8450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8450u;
label_1b8450:
    // 0x1b8450: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b8450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8454: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1b8454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8458: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1b8458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b845c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1b845cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1b8460: 0xc06e120  jal         func_1B8480
    ctx->pc = 0x1B8460u;
    SET_GPR_U32(ctx, 31, 0x1B8468u);
    ctx->pc = 0x1B8480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8480u, 0x1B8460u, 0x1B8468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8468u;
label_1b8468:
    // 0x1b8468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b846c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1b846cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b8470: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8478u;
    // 0x1b8478: 0x0  nop
    ctx->pc = 0x1b8478u;
    // NOP
    // 0x1b847c: 0x0  nop
    ctx->pc = 0x1b847cu;
    // NOP
    ctx->pc = 0x1b8480u;
}
