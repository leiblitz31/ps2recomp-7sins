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

// Function: sub_0027E4C0
// Address: 0x27e4c0 - 0x27e500
void sub_0027E4C0_0x27e4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E4C0_0x27e4c0");
#endif

    switch (ctx->pc) {
        case 0x27e4e4u: goto label_27e4e4;
        default: break;
    }

    ctx->pc = 0x27e4c0u;

    // 0x27e4c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27e4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27e4c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27e4c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x27e4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27e4cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x27e4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x27e4d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e4d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27e4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e4d8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x27e4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e4dc: 0xc09f940  jal         func_27E500
    ctx->pc = 0x27E4DCu;
    SET_GPR_U32(ctx, 31, 0x27E4E4u);
    ctx->pc = 0x27E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E500u, 0x27E4DCu, 0x27E4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E4E4u;
label_27e4e4:
    // 0x27e4e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e4e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27e4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27e4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x27E4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E4F4u;
    // 0x27e4f4: 0x0  nop
    ctx->pc = 0x27e4f4u;
    // NOP
    // 0x27e4f8: 0x0  nop
    ctx->pc = 0x27e4f8u;
    // NOP
    // 0x27e4fc: 0x0  nop
    ctx->pc = 0x27e4fcu;
    // NOP
    ctx->pc = 0x27e500u;
}
