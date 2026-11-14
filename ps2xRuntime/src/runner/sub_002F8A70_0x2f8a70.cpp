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

// Function: sub_002F8A70
// Address: 0x2f8a70 - 0x2f8a98
void sub_002F8A70_0x2f8a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8A70_0x2f8a70");
#endif

    ctx->pc = 0x2f8a70u;

    // 0x2f8a70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f8a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f8a74: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x2f8a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x2f8a78: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x2f8a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x2f8a7c: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x2f8a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
    // 0x2f8a80: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x2f8a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x2f8a84: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x2f8a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x2f8a88: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x2f8a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x2f8a8c: 0xffab0078  sd          $t3, 0x78($sp)
    ctx->pc = 0x2f8a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    // 0x2f8a90: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A90u;
        // 0x2f8a94: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8A98u;
}
