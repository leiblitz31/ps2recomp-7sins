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

// Function: sub_002813C0
// Address: 0x2813c0 - 0x281400
void sub_002813C0_0x2813c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002813C0_0x2813c0");
#endif

    switch (ctx->pc) {
        case 0x2813e0u: goto label_2813e0;
        default: break;
    }

    ctx->pc = 0x2813c0u;

    // 0x2813c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2813c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2813c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2813c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2813c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2813c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2813cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2813ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2813d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2813d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2813d4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2813d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2813d8: 0xc0a0500  jal         func_281400
    ctx->pc = 0x2813D8u;
    SET_GPR_U32(ctx, 31, 0x2813E0u);
    ctx->pc = 0x281400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281400u, 0x2813D8u, 0x2813E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2813E0u;
label_2813e0:
    // 0x2813e0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2813e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2813e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2813e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2813e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2813e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2813ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2813ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2813ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2813F4u;
    // 0x2813f4: 0x0  nop
    ctx->pc = 0x2813f4u;
    // NOP
    // 0x2813f8: 0x0  nop
    ctx->pc = 0x2813f8u;
    // NOP
    // 0x2813fc: 0x0  nop
    ctx->pc = 0x2813fcu;
    // NOP
    ctx->pc = 0x281400u;
}
