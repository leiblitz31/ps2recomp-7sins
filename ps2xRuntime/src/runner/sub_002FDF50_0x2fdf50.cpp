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

// Function: sub_002FDF50
// Address: 0x2fdf50 - 0x2fdf60
void sub_002FDF50_0x2fdf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDF50_0x2fdf50");
#endif

    switch (ctx->pc) {
        case 0x2fdf58u: goto label_2fdf58;
        default: break;
    }

    ctx->pc = 0x2fdf50u;

    // 0x2fdf50: 0x2403ff88  addiu       $v1, $zero, -0x78
    ctx->pc = 0x2fdf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
    // 0x2fdf54: 0xc  syscall     0
    ctx->pc = 0x2fdf54u;
    ctx->pc = 0x2FDF58u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdf58:
    // 0x2fdf58: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDF60u;
}
