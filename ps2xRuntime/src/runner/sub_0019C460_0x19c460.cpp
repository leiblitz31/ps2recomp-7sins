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

// Function: sub_0019C460
// Address: 0x19c460 - 0x19c490
void sub_0019C460_0x19c460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C460_0x19c460");
#endif

    ctx->pc = 0x19c460u;

    // 0x19c460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c464: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x19c464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x19c468: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x19c468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x19c46c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19c46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c470: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19c470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c474: 0xac640034  sw          $a0, 0x34($v1)
    ctx->pc = 0x19c474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 4));
    // 0x19c478: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19c478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19c47c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C484u;
    // 0x19c484: 0x0  nop
    ctx->pc = 0x19c484u;
    // NOP
    // 0x19c488: 0x0  nop
    ctx->pc = 0x19c488u;
    // NOP
    // 0x19c48c: 0x0  nop
    ctx->pc = 0x19c48cu;
    // NOP
    ctx->pc = 0x19c490u;
}
