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

// Function: sub_002FDB80
// Address: 0x2fdb80 - 0x2fdb90
void sub_002FDB80_0x2fdb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDB80_0x2fdb80");
#endif

    switch (ctx->pc) {
        case 0x2fdb88u: goto label_2fdb88;
        default: break;
    }

    ctx->pc = 0x2fdb80u;

    // 0x2fdb80: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x2fdb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2fdb84: 0xc  syscall     0
    ctx->pc = 0x2fdb84u;
    ctx->pc = 0x2FDB88u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2fdb88:
    // 0x2fdb88: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDB90u;
}
