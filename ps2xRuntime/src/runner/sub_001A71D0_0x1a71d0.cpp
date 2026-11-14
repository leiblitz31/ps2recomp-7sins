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

// Function: sub_001A71D0
// Address: 0x1a71d0 - 0x1a7220
void sub_001A71D0_0x1a71d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A71D0_0x1a71d0");
#endif

    ctx->pc = 0x1a71d0u;

    // 0x1a71d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a71d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a71d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a71d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1a71d8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1a71d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1a71dc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1a71dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1a71e0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x1a71e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x1a71e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a71e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a71e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a71e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a71ec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a71ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a71f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a71f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a71f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a71f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a71f8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1a71f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1a71fc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1a71fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a7200: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a7200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7204: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1a7204u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x1a7208: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a7208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a720c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A720Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A720Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7214u;
    // 0x1a7214: 0x0  nop
    ctx->pc = 0x1a7214u;
    // NOP
    // 0x1a7218: 0x0  nop
    ctx->pc = 0x1a7218u;
    // NOP
    // 0x1a721c: 0x0  nop
    ctx->pc = 0x1a721cu;
    // NOP
    ctx->pc = 0x1a7220u;
}
