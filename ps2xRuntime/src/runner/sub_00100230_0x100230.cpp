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

// Function: sub_00100230
// Address: 0x100230 - 0x100260
void sub_00100230_0x100230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100230_0x100230");
#endif

    ctx->pc = 0x100230u;

    // 0x100230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100234: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x100234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x100238: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x100238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x10023c: 0x246331f0  addiu       $v1, $v1, 0x31F0
    ctx->pc = 0x10023cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12784));
    // 0x100240: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x100240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100244: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x100244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x100248: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x100248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10024c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x10024cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x100250: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x100250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100254: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x100254u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x100258: 0x3e00008  jr          $ra
    ctx->pc = 0x100258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100260u;
}
