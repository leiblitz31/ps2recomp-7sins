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

// Function: sub_002FD970
// Address: 0x2fd970 - 0x2fd980
void sub_002FD970_0x2fd970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD970_0x2fd970");
#endif

    switch (ctx->pc) {
        case 0x2fd978u: goto label_2fd978;
        default: break;
    }

    ctx->pc = 0x2fd970u;

    // 0x2fd970: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x2fd970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2fd974: 0xc  syscall     0
    ctx->pc = 0x2fd974u;
    ctx->pc = 0x2FD978u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd978:
    // 0x2fd978: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD980u;
}
