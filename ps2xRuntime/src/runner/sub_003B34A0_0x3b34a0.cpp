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

// Function: sub_003B34A0
// Address: 0x3b34a0 - 0x3b34c0
void sub_003B34A0_0x3b34a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B34A0_0x3b34a0");
#endif

    switch (ctx->pc) {
        case 0x3b34b0u: goto label_3b34b0;
        default: break;
    }

    ctx->pc = 0x3b34a0u;

    // 0x3b34a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b34a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b34a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b34a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b34a8: 0xc0cb03e  jal         func_32C0F8
    ctx->pc = 0x3B34A8u;
    SET_GPR_U32(ctx, 31, 0x3B34B0u);
    ctx->pc = 0x32C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C0F8u, 0x3B34A8u, 0x3B34B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B34B0u;
label_3b34b0:
    // 0x3b34b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b34b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b34b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B34B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B34B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B34B4u;
        // 0x3b34b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B34B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B34BCu;
    // 0x3b34bc: 0x0  nop
    ctx->pc = 0x3b34bcu;
    // NOP
    ctx->pc = 0x3b34c0u;
}
