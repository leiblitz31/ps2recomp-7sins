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

// Function: sub_002FD820
// Address: 0x2fd820 - 0x2fd840
void sub_002FD820_0x2fd820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD820_0x2fd820");
#endif

    switch (ctx->pc) {
        case 0x2fd828u: goto label_2fd828;
        case 0x2fd838u: goto label_2fd838;
        default: break;
    }

    ctx->pc = 0x2fd820u;

    // 0x2fd820: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2fd820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2fd824: 0xc  syscall     0
    ctx->pc = 0x2fd824u;
    ctx->pc = 0x2FD828u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd828:
    // 0x2fd828: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD830u;
    // 0x2fd830: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2fd830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2fd834: 0xc  syscall     0
    ctx->pc = 0x2fd834u;
    ctx->pc = 0x2FD838u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd838:
    // 0x2fd838: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD840u;
}
