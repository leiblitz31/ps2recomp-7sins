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

// Function: sub_0025A2C0
// Address: 0x25a2c0 - 0x25a2f0
void sub_0025A2C0_0x25a2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A2C0_0x25a2c0");
#endif

    ctx->pc = 0x25a2c0u;

    // 0x25a2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a2c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25a2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25a2c8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x25a2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25a2cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25a2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a2d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a2d4: 0xac640184  sw          $a0, 0x184($v1)
    ctx->pc = 0x25a2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 388), GPR_U32(ctx, 4));
    // 0x25a2d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25a2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25a2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x25A2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A2E4u;
    // 0x25a2e4: 0x0  nop
    ctx->pc = 0x25a2e4u;
    // NOP
    // 0x25a2e8: 0x0  nop
    ctx->pc = 0x25a2e8u;
    // NOP
    // 0x25a2ec: 0x0  nop
    ctx->pc = 0x25a2ecu;
    // NOP
    ctx->pc = 0x25a2f0u;
}
