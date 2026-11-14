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

// Function: sub_00411638
// Address: 0x411638 - 0x411658
void sub_00411638_0x411638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00411638_0x411638");
#endif

    switch (ctx->pc) {
        case 0x411648u: goto label_411648;
        default: break;
    }

    ctx->pc = 0x411638u;

    // 0x411638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x411638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41163c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41163cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x411640: 0xc0ba8b0  jal         func_2EA2C0
    ctx->pc = 0x411640u;
    SET_GPR_U32(ctx, 31, 0x411648u);
    ctx->pc = 0x2EA2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA2C0u, 0x411640u, 0x411648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411648u;
label_411648:
    // 0x411648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x411648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41164c: 0x3e00008  jr          $ra
    ctx->pc = 0x41164Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41164Cu;
        // 0x411650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41164Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x411654u;
    // 0x411654: 0x0  nop
    ctx->pc = 0x411654u;
    // NOP
    ctx->pc = 0x411658u;
}
