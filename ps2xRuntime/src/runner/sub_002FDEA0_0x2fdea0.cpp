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

// Function: sub_002FDEA0
// Address: 0x2fdea0 - 0x2fded0
void sub_002FDEA0_0x2fdea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDEA0_0x2fdea0");
#endif

    switch (ctx->pc) {
        case 0x2fdea8u: goto label_2fdea8;
        case 0x2fdeb8u: goto label_2fdeb8;
        case 0x2fdec8u: goto label_2fdec8;
        default: break;
    }

    ctx->pc = 0x2fdea0u;

    // 0x2fdea0: 0x24030071  addiu       $v1, $zero, 0x71
    ctx->pc = 0x2fdea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x2fdea4: 0xc  syscall     0
    ctx->pc = 0x2fdea4u;
    ctx->pc = 0x2FDEA8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdea8:
    // 0x2fdea8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDEB0u;
    // 0x2fdeb0: 0x2403ff8f  addiu       $v1, $zero, -0x71
    ctx->pc = 0x2fdeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x2fdeb4: 0xc  syscall     0
    ctx->pc = 0x2fdeb4u;
    ctx->pc = 0x2FDEB8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdeb8:
    // 0x2fdeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDEC0u;
    // 0x2fdec0: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x2fdec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x2fdec4: 0xc  syscall     0
    ctx->pc = 0x2fdec4u;
    ctx->pc = 0x2FDEC8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdec8:
    // 0x2fdec8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDED0u;
}
