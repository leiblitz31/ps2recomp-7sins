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

// Function: sub_002E3F50
// Address: 0x2e3f50 - 0x2e3f90
void sub_002E3F50_0x2e3f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3F50_0x2e3f50");
#endif

    switch (ctx->pc) {
        case 0x2e3f74u: goto label_2e3f74;
        default: break;
    }

    ctx->pc = 0x2e3f50u;

    // 0x2e3f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e3f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e3f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e3f58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e3f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e3f5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2e3f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2e3f60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e3f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3f64: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2e3f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2e3f68: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2e3f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e3f6c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x2E3F6Cu;
    SET_GPR_U32(ctx, 31, 0x2E3F74u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x2E3F6Cu, 0x2E3F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3F74u;
label_2e3f74:
    // 0x2e3f74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3f78: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e3f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e3f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3F84u;
    // 0x2e3f84: 0x0  nop
    ctx->pc = 0x2e3f84u;
    // NOP
    // 0x2e3f88: 0x0  nop
    ctx->pc = 0x2e3f88u;
    // NOP
    // 0x2e3f8c: 0x0  nop
    ctx->pc = 0x2e3f8cu;
    // NOP
    ctx->pc = 0x2e3f90u;
}
