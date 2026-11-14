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

// Function: sub_002BBA80
// Address: 0x2bba80 - 0x2bbaa0
void sub_002BBA80_0x2bba80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBA80_0x2bba80");
#endif

    ctx->pc = 0x2bba80u;

    // 0x2bba80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bba80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bba84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2bba84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2bba88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2bba88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bba8c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x2bba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2bba90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2bba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bba94: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBA9Cu;
    // 0x2bba9c: 0x0  nop
    ctx->pc = 0x2bba9cu;
    // NOP
    ctx->pc = 0x2bbaa0u;
}
