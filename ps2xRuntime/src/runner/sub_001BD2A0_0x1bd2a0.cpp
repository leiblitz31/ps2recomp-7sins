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

// Function: sub_001BD2A0
// Address: 0x1bd2a0 - 0x1bd2f0
void sub_001BD2A0_0x1bd2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD2A0_0x1bd2a0");
#endif

    ctx->pc = 0x1bd2a0u;

    // 0x1bd2a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bd2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bd2a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1bd2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1bd2a8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1bd2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1bd2ac: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1bd2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1bd2b0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x1bd2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x1bd2b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1bd2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd2b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1bd2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd2bc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1bd2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1bd2c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1bd2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd2c4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1bd2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd2c8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1bd2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1bd2cc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1bd2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bd2d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1bd2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd2d4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1bd2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x1bd2d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1bd2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bd2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD2E4u;
    // 0x1bd2e4: 0x0  nop
    ctx->pc = 0x1bd2e4u;
    // NOP
    // 0x1bd2e8: 0x0  nop
    ctx->pc = 0x1bd2e8u;
    // NOP
    // 0x1bd2ec: 0x0  nop
    ctx->pc = 0x1bd2ecu;
    // NOP
    ctx->pc = 0x1bd2f0u;
}
