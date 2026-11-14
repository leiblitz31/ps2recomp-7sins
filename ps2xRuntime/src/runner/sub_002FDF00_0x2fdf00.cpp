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

// Function: sub_002FDF00
// Address: 0x2fdf00 - 0x2fdf20
void sub_002FDF00_0x2fdf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDF00_0x2fdf00");
#endif

    switch (ctx->pc) {
        case 0x2fdf08u: goto label_2fdf08;
        case 0x2fdf18u: goto label_2fdf18;
        default: break;
    }

    ctx->pc = 0x2fdf00u;

    // 0x2fdf00: 0x24030076  addiu       $v1, $zero, 0x76
    ctx->pc = 0x2fdf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x2fdf04: 0xc  syscall     0
    ctx->pc = 0x2fdf04u;
    ctx->pc = 0x2FDF08u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdf08:
    // 0x2fdf08: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDF10u;
    // 0x2fdf10: 0x2403ff8a  addiu       $v1, $zero, -0x76
    ctx->pc = 0x2fdf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967178));
    // 0x2fdf14: 0xc  syscall     0
    ctx->pc = 0x2fdf14u;
    ctx->pc = 0x2FDF18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdf18:
    // 0x2fdf18: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDF20u;
}
