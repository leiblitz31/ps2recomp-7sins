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

// Function: sub_002C4CF0
// Address: 0x2c4cf0 - 0x2c4d30
void sub_002C4CF0_0x2c4cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4CF0_0x2c4cf0");
#endif

    ctx->pc = 0x2c4cf0u;

    // 0x2c4cf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c4cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c4cf4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2c4cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2c4cf8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2c4cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2c4cfc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2c4cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x2c4d00: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2c4d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4d04: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c4d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4d08: 0xac64004c  sw          $a0, 0x4C($v1)
    ctx->pc = 0x2c4d08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 4));
    // 0x2c4d0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2c4d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4d10: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c4d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4d14: 0xac640050  sw          $a0, 0x50($v1)
    ctx->pc = 0x2c4d14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 4));
    // 0x2c4d18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2c4d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c4d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4D24u;
    // 0x2c4d24: 0x0  nop
    ctx->pc = 0x2c4d24u;
    // NOP
    // 0x2c4d28: 0x0  nop
    ctx->pc = 0x2c4d28u;
    // NOP
    // 0x2c4d2c: 0x0  nop
    ctx->pc = 0x2c4d2cu;
    // NOP
    ctx->pc = 0x2c4d30u;
}
