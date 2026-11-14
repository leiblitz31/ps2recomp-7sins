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

// Function: sub_002FDDE0
// Address: 0x2fdde0 - 0x2fde30
void sub_002FDDE0_0x2fdde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDDE0_0x2fdde0");
#endif

    switch (ctx->pc) {
        case 0x2fdde8u: goto label_2fdde8;
        case 0x2fddf8u: goto label_2fddf8;
        case 0x2fde08u: goto label_2fde08;
        case 0x2fde18u: goto label_2fde18;
        case 0x2fde28u: goto label_2fde28;
        default: break;
    }

    ctx->pc = 0x2fdde0u;

    // 0x2fdde0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2fdde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2fdde4: 0xc  syscall     0
    ctx->pc = 0x2fdde4u;
    ctx->pc = 0x2FDDE8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdde8:
    // 0x2fdde8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDDF0u;
    // 0x2fddf0: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x2fddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x2fddf4: 0xc  syscall     0
    ctx->pc = 0x2fddf4u;
    ctx->pc = 0x2FDDF8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fddf8:
    // 0x2fddf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDE00u;
    // 0x2fde00: 0x2403ff99  addiu       $v1, $zero, -0x67
    ctx->pc = 0x2fde00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967193));
    // 0x2fde04: 0xc  syscall     0
    ctx->pc = 0x2fde04u;
    ctx->pc = 0x2FDE08u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fde08:
    // 0x2fde08: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDE10u;
    // 0x2fde10: 0x2403ff98  addiu       $v1, $zero, -0x68
    ctx->pc = 0x2fde10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967192));
    // 0x2fde14: 0xc  syscall     0
    ctx->pc = 0x2fde14u;
    ctx->pc = 0x2FDE18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fde18:
    // 0x2fde18: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDE20u;
    // 0x2fde20: 0x2403ff96  addiu       $v1, $zero, -0x6A
    ctx->pc = 0x2fde20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
    // 0x2fde24: 0xc  syscall     0
    ctx->pc = 0x2fde24u;
    ctx->pc = 0x2FDE28u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fde28:
    // 0x2fde28: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDE30u;
}
