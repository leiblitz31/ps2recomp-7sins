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

// Function: sub_0044EC20
// Address: 0x44ec20 - 0x44ec50
void sub_0044EC20_0x44ec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044EC20_0x44ec20");
#endif

    ctx->pc = 0x44ec20u;

    // 0x44ec20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44ec20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x44ec24: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x44ec24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x44ec28: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x44ec28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x44ec2c: 0x24636b80  addiu       $v1, $v1, 0x6B80
    ctx->pc = 0x44ec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27520));
    // 0x44ec30: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x44ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44ec34: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44ec34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x44ec38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x44ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44ec3c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44ec3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x44ec40: 0x3e00008  jr          $ra
    ctx->pc = 0x44EC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44EC48u;
    // 0x44ec48: 0x0  nop
    ctx->pc = 0x44ec48u;
    // NOP
    // 0x44ec4c: 0x0  nop
    ctx->pc = 0x44ec4cu;
    // NOP
    ctx->pc = 0x44ec50u;
}
