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

// Function: sub_00307F88
// Address: 0x307f88 - 0x307f98
void sub_00307F88_0x307f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307F88_0x307f88");
#endif

    switch (ctx->pc) {
        case 0x307f90u: goto label_307f90;
        default: break;
    }

    ctx->pc = 0x307f88u;

    // 0x307f88: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x307f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x307f8c: 0xc  syscall     0
    ctx->pc = 0x307f8cu;
    ctx->pc = 0x307F90u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_307f90:
    // 0x307f90: 0x3e00008  jr          $ra
    ctx->pc = 0x307F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307F98u;
}
