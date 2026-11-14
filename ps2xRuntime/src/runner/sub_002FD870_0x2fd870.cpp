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

// Function: sub_002FD870
// Address: 0x2fd870 - 0x2fd890
void sub_002FD870_0x2fd870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD870_0x2fd870");
#endif

    switch (ctx->pc) {
        case 0x2fd878u: goto label_2fd878;
        case 0x2fd888u: goto label_2fd888;
        default: break;
    }

    ctx->pc = 0x2fd870u;

    // 0x2fd870: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2fd870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2fd874: 0xc  syscall     0
    ctx->pc = 0x2fd874u;
    ctx->pc = 0x2FD878u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd878:
    // 0x2fd878: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD880u;
    // 0x2fd880: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2fd880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2fd884: 0xc  syscall     0
    ctx->pc = 0x2fd884u;
    ctx->pc = 0x2FD888u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fd888:
    // 0x2fd888: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD890u;
}
