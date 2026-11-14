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

// Function: sub_0049F6E8
// Address: 0x49f6e8 - 0x49f718
void sub_0049F6E8_0x49f6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F6E8_0x49f6e8");
#endif

    switch (ctx->pc) {
        case 0x49f6f8u: goto label_49f6f8;
        case 0x49f700u: goto label_49f700;
        default: break;
    }

    ctx->pc = 0x49f6e8u;

    // 0x49f6e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49f6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49f6ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49f6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49f6f0: 0xc127d9c  jal         func_49F670
    ctx->pc = 0x49F6F0u;
    SET_GPR_U32(ctx, 31, 0x49F6F8u);
    ctx->pc = 0x49F670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F670u, 0x49F6F0u, 0x49F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F6F8u;
label_49f6f8:
    // 0x49f6f8: 0xc127dac  jal         func_49F6B0
    ctx->pc = 0x49F6F8u;
    SET_GPR_U32(ctx, 31, 0x49F700u);
    ctx->pc = 0x49F6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F6B0u, 0x49F6F8u, 0x49F700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F700u;
label_49f700:
    // 0x49f700: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49f700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49f704: 0x3e00008  jr          $ra
    ctx->pc = 0x49F704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F704u;
        // 0x49f708: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F70Cu;
    // 0x49f70c: 0x0  nop
    ctx->pc = 0x49f70cu;
    // NOP
    // 0x49f710: 0x3e00008  jr          $ra
    ctx->pc = 0x49F710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F710u;
        // 0x49f714: 0x8f82b824  lw          $v0, -0x47DC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948900)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F718u;
}
