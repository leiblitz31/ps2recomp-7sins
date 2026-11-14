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

// Function: sub_00325EC0
// Address: 0x325ec0 - 0x325ee0
void sub_00325EC0_0x325ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325EC0_0x325ec0");
#endif

    ctx->pc = 0x325ec0u;

    // 0x325ec0: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x325ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x325ec4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x325ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x325ec8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x325ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x325ecc: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x325ECCu;
    {
        const bool branch_taken_0x325ecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x325ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325ECCu;
        // 0x325ed0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325ecc) {
            ctx->pc = 0x325ED8u;
            goto label_325ed8;
        }
    }
    ctx->pc = 0x325ED4u;
    // 0x325ed4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x325ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_325ed8:
    // 0x325ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x325ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325EE0u;
}
