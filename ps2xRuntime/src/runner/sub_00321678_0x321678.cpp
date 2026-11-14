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

// Function: sub_00321678
// Address: 0x321678 - 0x321690
void sub_00321678_0x321678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321678_0x321678");
#endif

    ctx->pc = 0x321678u;

    // 0x321678: 0x8f83bce0  lw          $v1, -0x4320($gp)
    ctx->pc = 0x321678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950112)));
    // 0x32167c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32167cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321680: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x321680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x321684: 0x3e00008  jr          $ra
    ctx->pc = 0x321684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321684u;
        // 0x321688: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32168Cu;
    // 0x32168c: 0x0  nop
    ctx->pc = 0x32168cu;
    // NOP
    ctx->pc = 0x321690u;
}
