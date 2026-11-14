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

// Function: sub_003FCD98
// Address: 0x3fcd98 - 0x3fcdb0
void sub_003FCD98_0x3fcd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FCD98_0x3fcd98");
#endif

    ctx->pc = 0x3fcd98u;

    // 0x3fcd98: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3fcd98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x3fcd9c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3fcd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3fcda0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fcda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fcda4: 0x3e00008  jr          $ra
    ctx->pc = 0x3FCDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FCDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCDA4u;
        // 0x3fcda8: 0xfc820108  sd          $v0, 0x108($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 264), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCDA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FCDACu;
    // 0x3fcdac: 0x0  nop
    ctx->pc = 0x3fcdacu;
    // NOP
    ctx->pc = 0x3fcdb0u;
}
