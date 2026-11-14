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

// Function: sub_00112F50
// Address: 0x112f50 - 0x112f70
void sub_00112F50_0x112f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112F50_0x112f50");
#endif

    ctx->pc = 0x112f50u;

    // 0x112f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112f54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x112f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x112f58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x112f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112f5c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x112f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x112f60: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x112f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x112f64: 0x3e00008  jr          $ra
    ctx->pc = 0x112F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112F6Cu;
    // 0x112f6c: 0x0  nop
    ctx->pc = 0x112f6cu;
    // NOP
    ctx->pc = 0x112f70u;
}
