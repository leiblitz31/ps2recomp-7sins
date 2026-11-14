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

// Function: sub_0010D070
// Address: 0x10d070 - 0x10d0b0
void sub_0010D070_0x10d070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D070_0x10d070");
#endif

    switch (ctx->pc) {
        case 0x10d08cu: goto label_10d08c;
        case 0x10d09cu: goto label_10d09c;
        default: break;
    }

    ctx->pc = 0x10d070u;

    // 0x10d070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10d070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10d074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d078: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10d078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10d07c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10d07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10d080: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10d080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d084: 0xc04342c  jal         func_10D0B0
    ctx->pc = 0x10D084u;
    SET_GPR_U32(ctx, 31, 0x10D08Cu);
    ctx->pc = 0x10D0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D0B0u, 0x10D084u, 0x10D08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D08Cu;
label_10d08c:
    // 0x10d08c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10d08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d090: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x10d090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d094: 0xc0433c0  jal         func_10CF00
    ctx->pc = 0x10D094u;
    SET_GPR_U32(ctx, 31, 0x10D09Cu);
    ctx->pc = 0x10CF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF00u, 0x10D094u, 0x10D09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D09Cu;
label_10d09c:
    // 0x10d09c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d0a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10d0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10d0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x10D0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D0ACu;
    // 0x10d0ac: 0x0  nop
    ctx->pc = 0x10d0acu;
    // NOP
    ctx->pc = 0x10d0b0u;
}
