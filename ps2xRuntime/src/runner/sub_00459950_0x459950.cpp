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

// Function: sub_00459950
// Address: 0x459950 - 0x459960
void sub_00459950_0x459950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459950_0x459950");
#endif

    ctx->pc = 0x459950u;

    // 0x459950: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x459950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x459954: 0xdc4243d0  ld          $v0, 0x43D0($v0)
    ctx->pc = 0x459954u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6243D0u));
    // 0x459958: 0x3e00008  jr          $ra
    ctx->pc = 0x459958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x459958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x459960u;
}
