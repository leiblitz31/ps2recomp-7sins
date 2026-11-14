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

// Function: sub_001E2C20
// Address: 0x1e2c20 - 0x1e2c60
void sub_001E2C20_0x1e2c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2C20_0x1e2c20");
#endif

    switch (ctx->pc) {
        case 0x1e2c48u: goto label_1e2c48;
        default: break;
    }

    ctx->pc = 0x1e2c20u;

    // 0x1e2c20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e2c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e2c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2c28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e2c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e2c2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e2c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e2c30: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1e2c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1e2c34: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e2c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2c38: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e2c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2c3c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1e2c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2c40: 0xc078b18  jal         func_1E2C60
    ctx->pc = 0x1E2C40u;
    SET_GPR_U32(ctx, 31, 0x1E2C48u);
    ctx->pc = 0x1E2C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2C60u, 0x1E2C40u, 0x1E2C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2C48u;
label_1e2c48:
    // 0x1e2c48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e2c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2c50: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e2c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e2c54: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2C5Cu;
    // 0x1e2c5c: 0x0  nop
    ctx->pc = 0x1e2c5cu;
    // NOP
    ctx->pc = 0x1e2c60u;
}
