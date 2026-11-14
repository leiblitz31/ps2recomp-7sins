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

// Function: sub_001624D0
// Address: 0x1624d0 - 0x162520
void sub_001624D0_0x1624d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001624D0_0x1624d0");
#endif

    switch (ctx->pc) {
        case 0x1624f0u: goto label_1624f0;
        case 0x162508u: goto label_162508;
        default: break;
    }

    ctx->pc = 0x1624d0u;

    // 0x1624d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1624d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1624d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1624d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1624d8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1624d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1624dc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1624dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1624e0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1624e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1624e4: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1624e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1624e8: 0xc058980  jal         func_162600
    ctx->pc = 0x1624E8u;
    SET_GPR_U32(ctx, 31, 0x1624F0u);
    ctx->pc = 0x162600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162600u, 0x1624E8u, 0x1624F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1624F0u;
label_1624f0:
    // 0x1624f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1624f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1624f4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1624f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1624f8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1624f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1624fc: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1624fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x162500: 0xc058948  jal         func_162520
    ctx->pc = 0x162500u;
    SET_GPR_U32(ctx, 31, 0x162508u);
    ctx->pc = 0x162520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162520u, 0x162500u, 0x162508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162508u;
label_162508:
    // 0x162508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16250c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x16250cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x162510: 0x3e00008  jr          $ra
    ctx->pc = 0x162510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162518u;
    // 0x162518: 0x0  nop
    ctx->pc = 0x162518u;
    // NOP
    // 0x16251c: 0x0  nop
    ctx->pc = 0x16251cu;
    // NOP
    ctx->pc = 0x162520u;
}
