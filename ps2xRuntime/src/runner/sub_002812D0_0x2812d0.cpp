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

// Function: sub_002812D0
// Address: 0x2812d0 - 0x281320
void sub_002812D0_0x2812d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002812D0_0x2812d0");
#endif

    switch (ctx->pc) {
        case 0x2812f8u: goto label_2812f8;
        case 0x28130cu: goto label_28130c;
        default: break;
    }

    ctx->pc = 0x2812d0u;

    // 0x2812d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2812d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2812d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2812d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2812d8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2812d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2812dc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2812dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2812e0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2812e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2812e4: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x2812e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2812e8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2812e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2812ec: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2812ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2812f0: 0xc0a0c98  jal         func_283260
    ctx->pc = 0x2812F0u;
    SET_GPR_U32(ctx, 31, 0x2812F8u);
    ctx->pc = 0x283260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283260u, 0x2812F0u, 0x2812F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2812F8u;
label_2812f8:
    // 0x2812f8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2812f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2812fc: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x2812fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x281300: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x281300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x281304: 0xc0a04c8  jal         func_281320
    ctx->pc = 0x281304u;
    SET_GPR_U32(ctx, 31, 0x28130Cu);
    ctx->pc = 0x281320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281320u, 0x281304u, 0x28130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28130Cu;
label_28130c:
    // 0x28130c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28130cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281310: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x281310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x281314: 0x3e00008  jr          $ra
    ctx->pc = 0x281314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28131Cu;
    // 0x28131c: 0x0  nop
    ctx->pc = 0x28131cu;
    // NOP
    ctx->pc = 0x281320u;
}
