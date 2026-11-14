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

// Function: sub_00254EC0
// Address: 0x254ec0 - 0x254f00
void sub_00254EC0_0x254ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254EC0_0x254ec0");
#endif

    switch (ctx->pc) {
        case 0x254ee4u: goto label_254ee4;
        default: break;
    }

    ctx->pc = 0x254ec0u;

    // 0x254ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254ec8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x254ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x254ecc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x254eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x254ed0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x254ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254ed4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x254ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254ed8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x254ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254edc: 0xc0953c0  jal         func_254F00
    ctx->pc = 0x254EDCu;
    SET_GPR_U32(ctx, 31, 0x254EE4u);
    ctx->pc = 0x254F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254F00u, 0x254EDCu, 0x254EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254EE4u;
label_254ee4:
    // 0x254ee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254ee8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x254ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x254eec: 0x3e00008  jr          $ra
    ctx->pc = 0x254EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254EF4u;
    // 0x254ef4: 0x0  nop
    ctx->pc = 0x254ef4u;
    // NOP
    // 0x254ef8: 0x0  nop
    ctx->pc = 0x254ef8u;
    // NOP
    // 0x254efc: 0x0  nop
    ctx->pc = 0x254efcu;
    // NOP
    ctx->pc = 0x254f00u;
}
