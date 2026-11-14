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

// Function: sub_002CF700
// Address: 0x2cf700 - 0x2cf730
void sub_002CF700_0x2cf700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF700_0x2cf700");
#endif

    ctx->pc = 0x2cf700u;

    // 0x2cf700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cf700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cf704: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2cf704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2cf708: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2cf708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf70c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cf70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf710: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x2cf710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2cf714: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2cf714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf718: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2cf718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2cf71c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2cf71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf720: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2cf720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cf724: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF72Cu;
    // 0x2cf72c: 0x0  nop
    ctx->pc = 0x2cf72cu;
    // NOP
    ctx->pc = 0x2cf730u;
}
