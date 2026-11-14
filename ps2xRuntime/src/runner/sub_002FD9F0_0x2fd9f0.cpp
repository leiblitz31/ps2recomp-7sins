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

// Function: sub_002FD9F0
// Address: 0x2fd9f0 - 0x2fda10
void sub_002FD9F0_0x2fd9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD9F0_0x2fd9f0");
#endif

    switch (ctx->pc) {
        case 0x2fd9f8u: goto label_2fd9f8;
        case 0x2fda08u: goto label_2fda08;
        default: break;
    }

    ctx->pc = 0x2fd9f0u;

    // 0x2fd9f0: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x2fd9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2fd9f4: 0xc  syscall     0
    ctx->pc = 0x2fd9f4u;
    ctx->pc = 0x2FD9F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd9f8:
    // 0x2fd9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDA00u;
    // 0x2fda00: 0x2403ffd6  addiu       $v1, $zero, -0x2A
    ctx->pc = 0x2fda00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967254));
    // 0x2fda04: 0xc  syscall     0
    ctx->pc = 0x2fda04u;
    ctx->pc = 0x2FDA08u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fda08:
    // 0x2fda08: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDA10u;
}
