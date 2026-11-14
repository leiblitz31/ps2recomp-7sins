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

// Function: sub_0027E5D0
// Address: 0x27e5d0 - 0x27e610
void sub_0027E5D0_0x27e5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E5D0_0x27e5d0");
#endif

    switch (ctx->pc) {
        case 0x27e5ecu: goto label_27e5ec;
        case 0x27e5fcu: goto label_27e5fc;
        default: break;
    }

    ctx->pc = 0x27e5d0u;

    // 0x27e5d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27e5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27e5d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27e5d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x27e5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27e5dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x27e5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x27e5e0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x27e5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e5e4: 0xc09e5a8  jal         func_2796A0
    ctx->pc = 0x27E5E4u;
    SET_GPR_U32(ctx, 31, 0x27E5ECu);
    ctx->pc = 0x2796A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2796A0u, 0x27E5E4u, 0x27E5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E5ECu;
label_27e5ec:
    // 0x27e5ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27e5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e5f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x27e5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e5f4: 0xc09f940  jal         func_27E500
    ctx->pc = 0x27E5F4u;
    SET_GPR_U32(ctx, 31, 0x27E5FCu);
    ctx->pc = 0x27E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E500u, 0x27E5F4u, 0x27E5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E5FCu;
label_27e5fc:
    // 0x27e5fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e600: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27e600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27e604: 0x3e00008  jr          $ra
    ctx->pc = 0x27E604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E60Cu;
    // 0x27e60c: 0x0  nop
    ctx->pc = 0x27e60cu;
    // NOP
    ctx->pc = 0x27e610u;
}
