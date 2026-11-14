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

// Function: sub_0031EB68
// Address: 0x31eb68 - 0x31eb88
void sub_0031EB68_0x31eb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EB68_0x31eb68");
#endif

    switch (ctx->pc) {
        case 0x31eb78u: goto label_31eb78;
        default: break;
    }

    ctx->pc = 0x31eb68u;

    // 0x31eb68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31eb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31eb6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31eb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31eb70: 0xc0c79a2  jal         func_31E688
    ctx->pc = 0x31EB70u;
    SET_GPR_U32(ctx, 31, 0x31EB78u);
    ctx->pc = 0x31EB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EB70u;
    // 0x31eb74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E688u, 0x31EB70u, 0x31EB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EB78u;
label_31eb78:
    // 0x31eb78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31eb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31eb7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31eb80: 0x3e00008  jr          $ra
    ctx->pc = 0x31EB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB80u;
        // 0x31eb84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EB88u;
}
