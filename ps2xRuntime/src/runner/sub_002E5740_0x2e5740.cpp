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

// Function: sub_002E5740
// Address: 0x2e5740 - 0x2e5770
void sub_002E5740_0x2e5740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5740_0x2e5740");
#endif

    ctx->pc = 0x2e5740u;

    // 0x2e5740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e5740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e5744: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e5744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e5748: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2e5748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2e574c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e574cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5750: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e5750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5754: 0xac640070  sw          $a0, 0x70($v1)
    ctx->pc = 0x2e5754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 4));
    // 0x2e5758: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e5758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e575c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E575Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E575Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5764u;
    // 0x2e5764: 0x0  nop
    ctx->pc = 0x2e5764u;
    // NOP
    // 0x2e5768: 0x0  nop
    ctx->pc = 0x2e5768u;
    // NOP
    // 0x2e576c: 0x0  nop
    ctx->pc = 0x2e576cu;
    // NOP
    ctx->pc = 0x2e5770u;
}
