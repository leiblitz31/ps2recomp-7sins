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

// Function: sub_002E00E0
// Address: 0x2e00e0 - 0x2e0130
void sub_002E00E0_0x2e00e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E00E0_0x2e00e0");
#endif

    ctx->pc = 0x2e00e0u;

    // 0x2e00e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e00e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e00e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e00e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e00e8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2e00e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2e00ec: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2e00ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x2e00f0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x2e00f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x2e00f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e00f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e00f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e00f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e00fc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2e00fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2e0100: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e0100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0104: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e0104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0108: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2e0108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2e010c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2e010cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0110: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e0110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0114: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2e0114u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x2e0118: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e0118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e011c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E011Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E011Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0124u;
    // 0x2e0124: 0x0  nop
    ctx->pc = 0x2e0124u;
    // NOP
    // 0x2e0128: 0x0  nop
    ctx->pc = 0x2e0128u;
    // NOP
    // 0x2e012c: 0x0  nop
    ctx->pc = 0x2e012cu;
    // NOP
    ctx->pc = 0x2e0130u;
}
