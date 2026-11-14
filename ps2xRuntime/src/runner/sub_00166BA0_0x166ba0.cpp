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

// Function: sub_00166BA0
// Address: 0x166ba0 - 0x166be0
void sub_00166BA0_0x166ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166BA0_0x166ba0");
#endif

    switch (ctx->pc) {
        case 0x166bc0u: goto label_166bc0;
        default: break;
    }

    ctx->pc = 0x166ba0u;

    // 0x166ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x166ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x166ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166ba8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x166ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x166bac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x166bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x166bb0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x166bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166bb4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x166bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166bb8: 0xc059af8  jal         func_166BE0
    ctx->pc = 0x166BB8u;
    SET_GPR_U32(ctx, 31, 0x166BC0u);
    ctx->pc = 0x166BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166BE0u, 0x166BB8u, 0x166BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166BC0u;
label_166bc0:
    // 0x166bc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x166bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166bc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166bc8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x166bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x166bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x166BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166BD4u;
    // 0x166bd4: 0x0  nop
    ctx->pc = 0x166bd4u;
    // NOP
    // 0x166bd8: 0x0  nop
    ctx->pc = 0x166bd8u;
    // NOP
    // 0x166bdc: 0x0  nop
    ctx->pc = 0x166bdcu;
    // NOP
    ctx->pc = 0x166be0u;
}
