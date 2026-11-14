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

// Function: sub_004AE760
// Address: 0x4ae760 - 0x4ae770
void sub_004AE760_0x4ae760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE760_0x4ae760");
#endif

    ctx->pc = 0x4ae760u;

    // 0x4ae760: 0x40024800  mfc0        $v0, Count
    ctx->pc = 0x4ae760u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_count);
    // 0x4ae764: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE76Cu;
    // 0x4ae76c: 0x0  nop
    ctx->pc = 0x4ae76cu;
    // NOP
    ctx->pc = 0x4ae770u;
}
