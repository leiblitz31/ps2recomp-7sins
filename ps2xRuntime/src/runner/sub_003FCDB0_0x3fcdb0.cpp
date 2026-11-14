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

// Function: sub_003FCDB0
// Address: 0x3fcdb0 - 0x3fcdc8
void sub_003FCDB0_0x3fcdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FCDB0_0x3fcdb0");
#endif

    ctx->pc = 0x3fcdb0u;

    // 0x3fcdb0: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3fcdb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x3fcdb4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x3fcdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x3fcdb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fcdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fcdbc: 0x3e00008  jr          $ra
    ctx->pc = 0x3FCDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FCDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCDBCu;
        // 0x3fcdc0: 0xfc820108  sd          $v0, 0x108($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 264), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FCDC4u;
    // 0x3fcdc4: 0x0  nop
    ctx->pc = 0x3fcdc4u;
    // NOP
    ctx->pc = 0x3fcdc8u;
}
