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

// Function: sub_00457EE0
// Address: 0x457ee0 - 0x457f00
void sub_00457EE0_0x457ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00457EE0_0x457ee0");
#endif

    ctx->pc = 0x457ee0u;

    // 0x457ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x457ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x457ee4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x457ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x457ee8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x457ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457eec: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x457eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x457ef0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x457ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x457ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x457EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x457EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x457EFCu;
    // 0x457efc: 0x0  nop
    ctx->pc = 0x457efcu;
    // NOP
    ctx->pc = 0x457f00u;
}
