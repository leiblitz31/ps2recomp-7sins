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

// Function: sub_002E0760
// Address: 0x2e0760 - 0x2e0780
void sub_002E0760_0x2e0760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0760_0x2e0760");
#endif

    ctx->pc = 0x2e0760u;

    // 0x2e0760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0764: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2e0764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2e0768: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e0768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e076c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e076cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e0770: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0778u;
    // 0x2e0778: 0x0  nop
    ctx->pc = 0x2e0778u;
    // NOP
    // 0x2e077c: 0x0  nop
    ctx->pc = 0x2e077cu;
    // NOP
    ctx->pc = 0x2e0780u;
}
