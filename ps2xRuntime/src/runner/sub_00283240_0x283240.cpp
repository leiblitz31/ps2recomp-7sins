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

// Function: sub_00283240
// Address: 0x283240 - 0x283260
void sub_00283240_0x283240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283240_0x283240");
#endif

    ctx->pc = 0x283240u;

    // 0x283240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x283240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x283244: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x283244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x283248: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x283248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28324c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x28324cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x283250: 0x3e00008  jr          $ra
    ctx->pc = 0x283250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283258u;
    // 0x283258: 0x0  nop
    ctx->pc = 0x283258u;
    // NOP
    // 0x28325c: 0x0  nop
    ctx->pc = 0x28325cu;
    // NOP
    ctx->pc = 0x283260u;
}
