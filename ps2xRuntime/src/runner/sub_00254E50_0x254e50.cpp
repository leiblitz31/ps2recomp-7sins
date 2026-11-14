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

// Function: sub_00254E50
// Address: 0x254e50 - 0x254e80
void sub_00254E50_0x254e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254E50_0x254e50");
#endif

    switch (ctx->pc) {
        case 0x254e68u: goto label_254e68;
        default: break;
    }

    ctx->pc = 0x254e50u;

    // 0x254e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x254e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254e58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x254e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x254e5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x254e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254e60: 0xc095108  jal         func_254420
    ctx->pc = 0x254E60u;
    SET_GPR_U32(ctx, 31, 0x254E68u);
    ctx->pc = 0x254420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254420u, 0x254E60u, 0x254E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254E68u;
label_254e68:
    // 0x254e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254e6c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x254e6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x254e70: 0x3e00008  jr          $ra
    ctx->pc = 0x254E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254E78u;
    // 0x254e78: 0x0  nop
    ctx->pc = 0x254e78u;
    // NOP
    // 0x254e7c: 0x0  nop
    ctx->pc = 0x254e7cu;
    // NOP
    ctx->pc = 0x254e80u;
}
