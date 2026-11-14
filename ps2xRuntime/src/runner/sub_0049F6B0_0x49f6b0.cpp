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

// Function: sub_0049F6B0
// Address: 0x49f6b0 - 0x49f6e8
void sub_0049F6B0_0x49f6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F6B0_0x49f6b0");
#endif

    switch (ctx->pc) {
        case 0x49f6c0u: goto label_49f6c0;
        case 0x49f6ccu: goto label_49f6cc;
        default: break;
    }

    ctx->pc = 0x49f6b0u;

    // 0x49f6b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49f6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49f6b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49f6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49f6b8: 0xc127114  jal         func_49C450
    ctx->pc = 0x49F6B8u;
    SET_GPR_U32(ctx, 31, 0x49F6C0u);
    ctx->pc = 0x49C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C450u, 0x49F6B8u, 0x49F6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F6C0u;
label_49f6c0:
    // 0x49f6c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49f6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f6c4: 0xc1270ee  jal         func_49C3B8
    ctx->pc = 0x49F6C4u;
    SET_GPR_U32(ctx, 31, 0x49F6CCu);
    ctx->pc = 0x49F6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F6C4u;
    // 0x49f6c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49C3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C3B8u, 0x49F6C4u, 0x49F6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F6CCu;
label_49f6cc:
    // 0x49f6cc: 0x8f83b820  lw          $v1, -0x47E0($gp)
    ctx->pc = 0x49f6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948896)));
    // 0x49f6d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49f6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49f6d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x49f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x49f6d8: 0xaf80b824  sw          $zero, -0x47DC($gp)
    ctx->pc = 0x49f6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948900), GPR_U32(ctx, 0));
    // 0x49f6dc: 0xaf83b820  sw          $v1, -0x47E0($gp)
    ctx->pc = 0x49f6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948896), GPR_U32(ctx, 3));
    // 0x49f6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x49F6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F6E0u;
        // 0x49f6e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F6E8u;
}
