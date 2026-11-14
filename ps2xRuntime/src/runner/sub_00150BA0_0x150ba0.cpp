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

// Function: sub_00150BA0
// Address: 0x150ba0 - 0x150be0
void sub_00150BA0_0x150ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150BA0_0x150ba0");
#endif

    switch (ctx->pc) {
        case 0x150bbcu: goto label_150bbc;
        case 0x150bccu: goto label_150bcc;
        default: break;
    }

    ctx->pc = 0x150ba0u;

    // 0x150ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x150ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x150ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150ba8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x150ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x150bac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x150bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x150bb0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x150bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150bb4: 0xc0542f8  jal         func_150BE0
    ctx->pc = 0x150BB4u;
    SET_GPR_U32(ctx, 31, 0x150BBCu);
    ctx->pc = 0x150BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150BE0u, 0x150BB4u, 0x150BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150BBCu;
label_150bbc:
    // 0x150bbc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x150bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150bc0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x150bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150bc4: 0xc0542a8  jal         func_150AA0
    ctx->pc = 0x150BC4u;
    SET_GPR_U32(ctx, 31, 0x150BCCu);
    ctx->pc = 0x150AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150AA0u, 0x150BC4u, 0x150BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150BCCu;
label_150bcc:
    // 0x150bcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150bd0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x150bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x150bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x150BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150BDCu;
    // 0x150bdc: 0x0  nop
    ctx->pc = 0x150bdcu;
    // NOP
    ctx->pc = 0x150be0u;
}
