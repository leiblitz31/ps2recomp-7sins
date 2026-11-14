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

// Function: sub_004665A0
// Address: 0x4665a0 - 0x4665e0
void sub_004665A0_0x4665a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004665A0_0x4665a0");
#endif

    switch (ctx->pc) {
        case 0x4665c0u: goto label_4665c0;
        default: break;
    }

    ctx->pc = 0x4665a0u;

    // 0x4665a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4665a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4665a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4665a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4665a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4665a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4665ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4665acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4665b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4665b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4665b4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x4665b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4665b8: 0xc1199a4  jal         func_466690
    ctx->pc = 0x4665B8u;
    SET_GPR_U32(ctx, 31, 0x4665C0u);
    ctx->pc = 0x466690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466690u, 0x4665B8u, 0x4665C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4665C0u;
label_4665c0:
    // 0x4665c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4665c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4665c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4665c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4665c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4665c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4665cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4665CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4665CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4665D4u;
    // 0x4665d4: 0x0  nop
    ctx->pc = 0x4665d4u;
    // NOP
    // 0x4665d8: 0x0  nop
    ctx->pc = 0x4665d8u;
    // NOP
    // 0x4665dc: 0x0  nop
    ctx->pc = 0x4665dcu;
    // NOP
    ctx->pc = 0x4665e0u;
}
