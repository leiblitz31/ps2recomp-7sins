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

// Function: sub_001FC060
// Address: 0x1fc060 - 0x1fc0a0
void sub_001FC060_0x1fc060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC060_0x1fc060");
#endif

    switch (ctx->pc) {
        case 0x1fc080u: goto label_1fc080;
        default: break;
    }

    ctx->pc = 0x1fc060u;

    // 0x1fc060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fc060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fc064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fc068: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1fc068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1fc06c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1fc06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1fc070: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1fc070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc074: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1fc074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc078: 0xc07f028  jal         func_1FC0A0
    ctx->pc = 0x1FC078u;
    SET_GPR_U32(ctx, 31, 0x1FC080u);
    ctx->pc = 0x1FC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A0u, 0x1FC078u, 0x1FC080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC080u;
label_1fc080:
    // 0x1fc080: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fc080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc088: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1fc088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc08c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC094u;
    // 0x1fc094: 0x0  nop
    ctx->pc = 0x1fc094u;
    // NOP
    // 0x1fc098: 0x0  nop
    ctx->pc = 0x1fc098u;
    // NOP
    // 0x1fc09c: 0x0  nop
    ctx->pc = 0x1fc09cu;
    // NOP
    ctx->pc = 0x1fc0a0u;
}
