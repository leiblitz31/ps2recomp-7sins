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

// Function: sub_0049EFC8
// Address: 0x49efc8 - 0x49efe0
void sub_0049EFC8_0x49efc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049EFC8_0x49efc8");
#endif

    ctx->pc = 0x49efc8u;

    // 0x49efc8: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x49efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x49efcc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x49efccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x49efd0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x49efd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x49efd4: 0x3e00008  jr          $ra
    ctx->pc = 0x49EFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EFD4u;
        // 0x49efd8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49EFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49EFDCu;
    // 0x49efdc: 0x0  nop
    ctx->pc = 0x49efdcu;
    // NOP
    ctx->pc = 0x49efe0u;
}
