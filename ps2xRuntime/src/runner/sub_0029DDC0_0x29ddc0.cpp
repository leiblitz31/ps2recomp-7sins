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

// Function: sub_0029DDC0
// Address: 0x29ddc0 - 0x29de00
void sub_0029DDC0_0x29ddc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DDC0_0x29ddc0");
#endif

    switch (ctx->pc) {
        case 0x29ddf0u: goto label_29ddf0;
        default: break;
    }

    ctx->pc = 0x29ddc0u;

    // 0x29ddc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29ddc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29ddc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ddc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29ddc8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29ddc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x29ddcc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x29ddccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x29ddd0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x29ddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x29ddd4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x29ddd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ddd8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x29ddd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29dddc: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x29dddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29dde0: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x29dde0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x29dde4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29dde4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dde8: 0xc0a7780  jal         func_29DE00
    ctx->pc = 0x29DDE8u;
    SET_GPR_U32(ctx, 31, 0x29DDF0u);
    ctx->pc = 0x29DE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DE00u, 0x29DDE8u, 0x29DDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DDF0u;
label_29ddf0:
    // 0x29ddf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ddf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ddf4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x29ddf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29ddf8: 0x3e00008  jr          $ra
    ctx->pc = 0x29DDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DE00u;
}
