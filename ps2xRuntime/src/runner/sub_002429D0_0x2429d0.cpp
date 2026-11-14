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

// Function: sub_002429D0
// Address: 0x2429d0 - 0x242a10
void sub_002429D0_0x2429d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002429D0_0x2429d0");
#endif

    switch (ctx->pc) {
        case 0x2429f0u: goto label_2429f0;
        default: break;
    }

    ctx->pc = 0x2429d0u;

    // 0x2429d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2429d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2429d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2429d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2429d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2429d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2429dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2429dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2429e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2429e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2429e4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2429e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2429e8: 0xc090a84  jal         func_242A10
    ctx->pc = 0x2429E8u;
    SET_GPR_U32(ctx, 31, 0x2429F0u);
    ctx->pc = 0x242A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242A10u, 0x2429E8u, 0x2429F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2429F0u;
label_2429f0:
    // 0x2429f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2429f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2429f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2429f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2429f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2429f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2429fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2429FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2429FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242A04u;
    // 0x242a04: 0x0  nop
    ctx->pc = 0x242a04u;
    // NOP
    // 0x242a08: 0x0  nop
    ctx->pc = 0x242a08u;
    // NOP
    // 0x242a0c: 0x0  nop
    ctx->pc = 0x242a0cu;
    // NOP
    ctx->pc = 0x242a10u;
}
