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

// Function: sub_002FD930
// Address: 0x2fd930 - 0x2fd960
void sub_002FD930_0x2fd930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD930_0x2fd930");
#endif

    switch (ctx->pc) {
        case 0x2fd938u: goto label_2fd938;
        case 0x2fd948u: goto label_2fd948;
        case 0x2fd958u: goto label_2fd958;
        default: break;
    }

    ctx->pc = 0x2fd930u;

    // 0x2fd930: 0x2403ffe3  addiu       $v1, $zero, -0x1D
    ctx->pc = 0x2fd930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x2fd934: 0xc  syscall     0
    ctx->pc = 0x2fd934u;
    ctx->pc = 0x2FD938u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd938:
    // 0x2fd938: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD940u;
    // 0x2fd940: 0x2403ff02  addiu       $v1, $zero, -0xFE
    ctx->pc = 0x2fd940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967042));
    // 0x2fd944: 0xc  syscall     0
    ctx->pc = 0x2fd944u;
    ctx->pc = 0x2FD948u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd948:
    // 0x2fd948: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD950u;
    // 0x2fd950: 0x2403ff01  addiu       $v1, $zero, -0xFF
    ctx->pc = 0x2fd950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x2fd954: 0xc  syscall     0
    ctx->pc = 0x2fd954u;
    ctx->pc = 0x2FD958u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd958:
    // 0x2fd958: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD960u;
}
