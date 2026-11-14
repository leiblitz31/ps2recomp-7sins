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

// Function: sub_002FDBE0
// Address: 0x2fdbe0 - 0x2fdc00
void sub_002FDBE0_0x2fdbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDBE0_0x2fdbe0");
#endif

    switch (ctx->pc) {
        case 0x2fdbe8u: goto label_2fdbe8;
        case 0x2fdbf8u: goto label_2fdbf8;
        default: break;
    }

    ctx->pc = 0x2fdbe0u;

    // 0x2fdbe0: 0x2403ffb8  addiu       $v1, $zero, -0x48
    ctx->pc = 0x2fdbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967224));
    // 0x2fdbe4: 0xc  syscall     0
    ctx->pc = 0x2fdbe4u;
    ctx->pc = 0x2FDBE8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdbe8:
    // 0x2fdbe8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDBE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDBE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDBF0u;
    // 0x2fdbf0: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x2fdbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x2fdbf4: 0xc  syscall     0
    ctx->pc = 0x2fdbf4u;
    ctx->pc = 0x2FDBF8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdbf8:
    // 0x2fdbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDC00u;
}
