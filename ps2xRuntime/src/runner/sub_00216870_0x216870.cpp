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

// Function: sub_00216870
// Address: 0x216870 - 0x2168b0
void sub_00216870_0x216870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216870_0x216870");
#endif

    switch (ctx->pc) {
        case 0x216890u: goto label_216890;
        default: break;
    }

    ctx->pc = 0x216870u;

    // 0x216870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x216870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x216874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216878: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x216878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21687c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x21687cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x216880: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x216880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216884: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x216884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216888: 0xc085a2c  jal         func_2168B0
    ctx->pc = 0x216888u;
    SET_GPR_U32(ctx, 31, 0x216890u);
    ctx->pc = 0x2168B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2168B0u, 0x216888u, 0x216890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216890u;
label_216890:
    // 0x216890: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x216890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216898: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x216898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21689c: 0x3e00008  jr          $ra
    ctx->pc = 0x21689Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21689Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2168A4u;
    // 0x2168a4: 0x0  nop
    ctx->pc = 0x2168a4u;
    // NOP
    // 0x2168a8: 0x0  nop
    ctx->pc = 0x2168a8u;
    // NOP
    // 0x2168ac: 0x0  nop
    ctx->pc = 0x2168acu;
    // NOP
    ctx->pc = 0x2168b0u;
}
