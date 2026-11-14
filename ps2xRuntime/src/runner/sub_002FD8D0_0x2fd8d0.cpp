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

// Function: sub_002FD8D0
// Address: 0x2fd8d0 - 0x2fd900
void sub_002FD8D0_0x2fd8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD8D0_0x2fd8d0");
#endif

    switch (ctx->pc) {
        case 0x2fd8d8u: goto label_2fd8d8;
        case 0x2fd8e8u: goto label_2fd8e8;
        case 0x2fd8f8u: goto label_2fd8f8;
        default: break;
    }

    ctx->pc = 0x2fd8d0u;

    // 0x2fd8d0: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x2fd8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2fd8d4: 0xc  syscall     0
    ctx->pc = 0x2fd8d4u;
    ctx->pc = 0x2FD8D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd8d8:
    // 0x2fd8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD8E0u;
    // 0x2fd8e0: 0x240300fc  addiu       $v1, $zero, 0xFC
    ctx->pc = 0x2fd8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x2fd8e4: 0xc  syscall     0
    ctx->pc = 0x2fd8e4u;
    ctx->pc = 0x2FD8E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd8e8:
    // 0x2fd8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD8F0u;
    // 0x2fd8f0: 0x240300fd  addiu       $v1, $zero, 0xFD
    ctx->pc = 0x2fd8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x2fd8f4: 0xc  syscall     0
    ctx->pc = 0x2fd8f4u;
    ctx->pc = 0x2FD8F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd8f8:
    // 0x2fd8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD900u;
}
