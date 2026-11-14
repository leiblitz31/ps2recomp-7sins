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

// Function: sub_003F1A28
// Address: 0x3f1a28 - 0x3f1a40
void sub_003F1A28_0x3f1a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1A28_0x3f1a28");
#endif

    ctx->pc = 0x3f1a28u;

    // 0x3f1a28: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3f1a28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x3f1a2c: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x3f1a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x3f1a30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f1a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3f1a34: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1A34u;
        // 0x3f1a38: 0xfc820108  sd          $v0, 0x108($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 264), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1A3Cu;
    // 0x3f1a3c: 0x0  nop
    ctx->pc = 0x3f1a3cu;
    // NOP
    ctx->pc = 0x3f1a40u;
}
