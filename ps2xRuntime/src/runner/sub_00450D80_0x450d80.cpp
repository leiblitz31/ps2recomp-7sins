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

// Function: sub_00450D80
// Address: 0x450d80 - 0x450db0
void sub_00450D80_0x450d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00450D80_0x450d80");
#endif

    ctx->pc = 0x450d80u;

    // 0x450d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x450d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x450d84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x450d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x450d88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x450d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x450d8c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x450d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x450d90: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x450d90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x450d94: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x450d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x450d98: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x450d98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x450d9c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x450d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x450da0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x450da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x450da4: 0x3e00008  jr          $ra
    ctx->pc = 0x450DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x450DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x450DACu;
    // 0x450dac: 0x0  nop
    ctx->pc = 0x450dacu;
    // NOP
    ctx->pc = 0x450db0u;
}
