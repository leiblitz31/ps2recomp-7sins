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

// Function: sub_002FD910
// Address: 0x2fd910 - 0x2fd920
void sub_002FD910_0x2fd910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD910_0x2fd910");
#endif

    switch (ctx->pc) {
        case 0x2fd918u: goto label_2fd918;
        default: break;
    }

    ctx->pc = 0x2fd910u;

    // 0x2fd910: 0x2403ffe5  addiu       $v1, $zero, -0x1B
    ctx->pc = 0x2fd910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
    // 0x2fd914: 0xc  syscall     0
    ctx->pc = 0x2fd914u;
    ctx->pc = 0x2FD918u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd918:
    // 0x2fd918: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD920u;
}
