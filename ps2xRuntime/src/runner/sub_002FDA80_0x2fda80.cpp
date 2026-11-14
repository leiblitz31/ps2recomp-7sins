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

// Function: sub_002FDA80
// Address: 0x2fda80 - 0x2fda90
void sub_002FDA80_0x2fda80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDA80_0x2fda80");
#endif

    switch (ctx->pc) {
        case 0x2fda88u: goto label_2fda88;
        default: break;
    }

    ctx->pc = 0x2fda80u;

    // 0x2fda80: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x2fda80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2fda84: 0xc  syscall     0
    ctx->pc = 0x2fda84u;
    ctx->pc = 0x2FDA88u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fda88:
    // 0x2fda88: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDA90u;
}
