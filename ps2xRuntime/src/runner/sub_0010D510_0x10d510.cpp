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

// Function: sub_0010D510
// Address: 0x10d510 - 0x10d540
void sub_0010D510_0x10d510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D510_0x10d510");
#endif

    ctx->pc = 0x10d510u;

    // 0x10d510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10d510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10d514: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10d514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10d518: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x10d518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x10d51c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d520: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10d520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d524: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10d524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d528: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10d528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10d52c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10d52cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10d530: 0x3e00008  jr          $ra
    ctx->pc = 0x10D530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D538u;
    // 0x10d538: 0x0  nop
    ctx->pc = 0x10d538u;
    // NOP
    // 0x10d53c: 0x0  nop
    ctx->pc = 0x10d53cu;
    // NOP
    ctx->pc = 0x10d540u;
}
