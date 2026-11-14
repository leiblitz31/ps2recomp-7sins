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

// Function: sub_00288D40
// Address: 0x288d40 - 0x288d70
void sub_00288D40_0x288d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288D40_0x288d40");
#endif

    ctx->pc = 0x288d40u;

    // 0x288d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x288d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x288d44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x288d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x288d48: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x288d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x288d4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x288d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288d50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x288d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288d54: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x288d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288d58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x288d58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x288d5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x288d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288d60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x288d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x288d64: 0x3e00008  jr          $ra
    ctx->pc = 0x288D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288D6Cu;
    // 0x288d6c: 0x0  nop
    ctx->pc = 0x288d6cu;
    // NOP
    ctx->pc = 0x288d70u;
}
