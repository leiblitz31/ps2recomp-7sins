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

// Function: sub_0048DEC0
// Address: 0x48dec0 - 0x48def0
void sub_0048DEC0_0x48dec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048DEC0_0x48dec0");
#endif

    switch (ctx->pc) {
        case 0x48ded8u: goto label_48ded8;
        default: break;
    }

    ctx->pc = 0x48dec0u;

    // 0x48dec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48dec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48dec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48dec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48dec8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48dec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48decc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48deccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48ded0: 0xc1237bc  jal         func_48DEF0
    ctx->pc = 0x48DED0u;
    SET_GPR_U32(ctx, 31, 0x48DED8u);
    ctx->pc = 0x48DEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DEF0u, 0x48DED0u, 0x48DED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DED8u;
label_48ded8:
    // 0x48ded8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48dedc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48dedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48dee0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x48dee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48dee4: 0x3e00008  jr          $ra
    ctx->pc = 0x48DEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48DEECu;
    // 0x48deec: 0x0  nop
    ctx->pc = 0x48deecu;
    // NOP
    ctx->pc = 0x48def0u;
}
