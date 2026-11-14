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

// Function: sub_00494D80
// Address: 0x494d80 - 0x494d90
void sub_00494D80_0x494d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494D80_0x494d80");
#endif

    ctx->pc = 0x494d80u;

    // 0x494d80: 0xaf80c148  sw          $zero, -0x3EB8($gp)
    ctx->pc = 0x494d80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951240), GPR_U32(ctx, 0));
    // 0x494d84: 0x3e00008  jr          $ra
    ctx->pc = 0x494D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x494D8Cu;
    // 0x494d8c: 0x0  nop
    ctx->pc = 0x494d8cu;
    // NOP
    ctx->pc = 0x494d90u;
}
