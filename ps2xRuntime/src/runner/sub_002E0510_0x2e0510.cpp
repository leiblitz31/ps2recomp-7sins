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

// Function: sub_002E0510
// Address: 0x2e0510 - 0x2e0540
void sub_002E0510_0x2e0510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0510_0x2e0510");
#endif

    ctx->pc = 0x2e0510u;

    // 0x2e0510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0514: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e0514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e0518: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2e0518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2e051c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2e051cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0520: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e0520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0524: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2e0524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2e0528: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e0528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e052c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e052cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e0530: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0538u;
    // 0x2e0538: 0x0  nop
    ctx->pc = 0x2e0538u;
    // NOP
    // 0x2e053c: 0x0  nop
    ctx->pc = 0x2e053cu;
    // NOP
    ctx->pc = 0x2e0540u;
}
