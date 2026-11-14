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

// Function: sub_001813E0
// Address: 0x1813e0 - 0x181430
void sub_001813E0_0x1813e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001813E0_0x1813e0");
#endif

    ctx->pc = 0x1813e0u;

    // 0x1813e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1813e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1813e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1813e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1813e8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1813e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1813ec: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1813ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1813f0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x1813f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x1813f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1813f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1813f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1813f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1813fc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1813fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x181400: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x181400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181404: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x181404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181408: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x181408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x18140c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x18140cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181410: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x181410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181414: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x181414u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x181418: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x181418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18141c: 0x3e00008  jr          $ra
    ctx->pc = 0x18141Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18141Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181424u;
    // 0x181424: 0x0  nop
    ctx->pc = 0x181424u;
    // NOP
    // 0x181428: 0x0  nop
    ctx->pc = 0x181428u;
    // NOP
    // 0x18142c: 0x0  nop
    ctx->pc = 0x18142cu;
    // NOP
    ctx->pc = 0x181430u;
}
