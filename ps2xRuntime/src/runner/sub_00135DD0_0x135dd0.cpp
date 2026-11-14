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

// Function: sub_00135DD0
// Address: 0x135dd0 - 0x135e20
void sub_00135DD0_0x135dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135DD0_0x135dd0");
#endif

    ctx->pc = 0x135dd0u;

    // 0x135dd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x135dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x135dd4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x135dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x135dd8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x135dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x135ddc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x135ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x135de0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x135de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x135de4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x135de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135de8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x135de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135dec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x135decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x135df0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x135df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135df4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x135df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135df8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x135df8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x135dfc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x135dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135e00: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x135e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135e04: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x135e04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x135e08: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x135e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x135e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x135E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135E14u;
    // 0x135e14: 0x0  nop
    ctx->pc = 0x135e14u;
    // NOP
    // 0x135e18: 0x0  nop
    ctx->pc = 0x135e18u;
    // NOP
    // 0x135e1c: 0x0  nop
    ctx->pc = 0x135e1cu;
    // NOP
    ctx->pc = 0x135e20u;
}
