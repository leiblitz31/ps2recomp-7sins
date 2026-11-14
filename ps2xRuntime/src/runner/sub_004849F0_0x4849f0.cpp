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

// Function: sub_004849F0
// Address: 0x4849f0 - 0x484a20
void sub_004849F0_0x4849f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004849F0_0x4849f0");
#endif

    ctx->pc = 0x4849f0u;

    // 0x4849f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4849f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4849f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4849f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4849f8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4849f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4849fc: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x4849fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x484a00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x484a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x484a04: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x484a04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x484a08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x484a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x484a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x484A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x484A14u;
    // 0x484a14: 0x0  nop
    ctx->pc = 0x484a14u;
    // NOP
    // 0x484a18: 0x0  nop
    ctx->pc = 0x484a18u;
    // NOP
    // 0x484a1c: 0x0  nop
    ctx->pc = 0x484a1cu;
    // NOP
    ctx->pc = 0x484a20u;
}
