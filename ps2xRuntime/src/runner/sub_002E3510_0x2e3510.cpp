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

// Function: sub_002E3510
// Address: 0x2e3510 - 0x2e3540
void sub_002E3510_0x2e3510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3510_0x2e3510");
#endif

    ctx->pc = 0x2e3510u;

    // 0x2e3510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e3510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e3514: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e3514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e3518: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2e3518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2e351c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2e351cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3520: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e3520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3524: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2e3524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2e3528: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e3528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e352c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e352cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e3530: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3538u;
    // 0x2e3538: 0x0  nop
    ctx->pc = 0x2e3538u;
    // NOP
    // 0x2e353c: 0x0  nop
    ctx->pc = 0x2e353cu;
    // NOP
    ctx->pc = 0x2e3540u;
}
