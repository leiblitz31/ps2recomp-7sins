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

// Function: sub_003C3158
// Address: 0x3c3158 - 0x3c3160
void sub_003C3158_0x3c3158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3158_0x3c3158");
#endif

    ctx->pc = 0x3c3158u;

    // 0x3c3158: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3158u;
        // 0x3c315c: 0xaf84bd8c  sw          $a0, -0x4274($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950284), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C3160u;
}
