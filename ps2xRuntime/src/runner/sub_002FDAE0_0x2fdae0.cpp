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

// Function: sub_002FDAE0
// Address: 0x2fdae0 - 0x2fdb40
void sub_002FDAE0_0x2fdae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDAE0_0x2fdae0");
#endif

    switch (ctx->pc) {
        case 0x2fdae8u: goto label_2fdae8;
        case 0x2fdaf8u: goto label_2fdaf8;
        case 0x2fdb08u: goto label_2fdb08;
        case 0x2fdb18u: goto label_2fdb18;
        case 0x2fdb28u: goto label_2fdb28;
        case 0x2fdb38u: goto label_2fdb38;
        default: break;
    }

    ctx->pc = 0x2fdae0u;

    // 0x2fdae0: 0x2403ffc8  addiu       $v1, $zero, -0x38
    ctx->pc = 0x2fdae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967240));
    // 0x2fdae4: 0xc  syscall     0
    ctx->pc = 0x2fdae4u;
    ctx->pc = 0x2FDAE8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdae8:
    // 0x2fdae8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDAF0u;
    // 0x2fdaf0: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x2fdaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2fdaf4: 0xc  syscall     0
    ctx->pc = 0x2fdaf4u;
    ctx->pc = 0x2FDAF8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdaf8:
    // 0x2fdaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDB00u;
    // 0x2fdb00: 0x2403ffc6  addiu       $v1, $zero, -0x3A
    ctx->pc = 0x2fdb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967238));
    // 0x2fdb04: 0xc  syscall     0
    ctx->pc = 0x2fdb04u;
    ctx->pc = 0x2FDB08u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdb08:
    // 0x2fdb08: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDB10u;
    // 0x2fdb10: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x2fdb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2fdb14: 0xc  syscall     0
    ctx->pc = 0x2fdb14u;
    ctx->pc = 0x2FDB18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdb18:
    // 0x2fdb18: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDB20u;
    // 0x2fdb20: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2fdb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2fdb24: 0xc  syscall     0
    ctx->pc = 0x2fdb24u;
    ctx->pc = 0x2FDB28u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdb28:
    // 0x2fdb28: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDB30u;
    // 0x2fdb30: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x2fdb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x2fdb34: 0xc  syscall     0
    ctx->pc = 0x2fdb34u;
    ctx->pc = 0x2FDB38u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdb38:
    // 0x2fdb38: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDB40u;
}
