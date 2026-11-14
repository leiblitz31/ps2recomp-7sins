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

// Function: sub_003E1758
// Address: 0x3e1758 - 0x3e1778
void sub_003E1758_0x3e1758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1758_0x3e1758");
#endif

    switch (ctx->pc) {
        case 0x3e1768u: goto label_3e1768;
        default: break;
    }

    ctx->pc = 0x3e1758u;

    // 0x3e1758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e1758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e175c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e175cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e1760: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E1760u;
    SET_GPR_U32(ctx, 31, 0x3E1768u);
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E1760u, 0x3E1768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1768u;
label_3e1768:
    // 0x3e1768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e1768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e176c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E176Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E176Cu;
        // 0x3e1770: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E176Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1774u;
    // 0x3e1774: 0x0  nop
    ctx->pc = 0x3e1774u;
    // NOP
    ctx->pc = 0x3e1778u;
}
