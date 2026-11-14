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

// Function: sub_002E0460
// Address: 0x2e0460 - 0x2e0490
void sub_002E0460_0x2e0460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0460_0x2e0460");
#endif

    ctx->pc = 0x2e0460u;

    // 0x2e0460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0464: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e0464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e0468: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2e0468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2e046c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e046cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0470: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e0470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0474: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e0474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0478: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2e0478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2e047c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e047cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0480: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e0480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e0484: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E048Cu;
    // 0x2e048c: 0x0  nop
    ctx->pc = 0x2e048cu;
    // NOP
    ctx->pc = 0x2e0490u;
}
