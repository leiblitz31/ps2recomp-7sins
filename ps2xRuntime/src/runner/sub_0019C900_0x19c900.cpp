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

// Function: sub_0019C900
// Address: 0x19c900 - 0x19c960
void sub_0019C900_0x19c900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C900_0x19c900");
#endif

    ctx->pc = 0x19c900u;

    // 0x19c900: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19c900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19c904: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x19c904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x19c908: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x19c908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x19c90c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x19c90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x19c910: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x19c910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x19c914: 0xafa80040  sw          $t0, 0x40($sp)
    ctx->pc = 0x19c914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 8));
    // 0x19c918: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19c918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c91c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19c91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c920: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x19c920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x19c924: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19c924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c928: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19c928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c92c: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x19c92cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x19c930: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x19c930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c934: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19c934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c938: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x19c938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
    // 0x19c93c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19c93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19c940: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19c940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c944: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x19c944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
    // 0x19c948: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x19c948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19c94c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C954u;
    // 0x19c954: 0x0  nop
    ctx->pc = 0x19c954u;
    // NOP
    // 0x19c958: 0x0  nop
    ctx->pc = 0x19c958u;
    // NOP
    // 0x19c95c: 0x0  nop
    ctx->pc = 0x19c95cu;
    // NOP
    ctx->pc = 0x19c960u;
}
