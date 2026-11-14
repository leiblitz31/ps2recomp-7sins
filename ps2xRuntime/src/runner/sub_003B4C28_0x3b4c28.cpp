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

// Function: sub_003B4C28
// Address: 0x3b4c28 - 0x3b4c48
void sub_003B4C28_0x3b4c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4C28_0x3b4c28");
#endif

    switch (ctx->pc) {
        case 0x3b4c38u: goto label_3b4c38;
        default: break;
    }

    ctx->pc = 0x3b4c28u;

    // 0x3b4c28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b4c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b4c2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b4c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b4c30: 0xc1035b0  jal         func_40D6C0
    ctx->pc = 0x3B4C30u;
    SET_GPR_U32(ctx, 31, 0x3B4C38u);
    ctx->pc = 0x3B4C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4C30u;
    // 0x3b4c34: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D6C0u, 0x3B4C30u, 0x3B4C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4C38u;
label_3b4c38:
    // 0x3b4c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b4c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b4c3c: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x3b4c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x3b4c40: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4C40u;
        // 0x3b4c44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4C48u;
}
