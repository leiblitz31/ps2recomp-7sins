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

// Function: sub_00218650
// Address: 0x218650 - 0x218680
void sub_00218650_0x218650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218650_0x218650");
#endif

    ctx->pc = 0x218650u;

    // 0x218650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x218650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x218654: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x218654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x218658: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x218658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x21865c: 0x24635250  addiu       $v1, $v1, 0x5250
    ctx->pc = 0x21865cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21072));
    // 0x218660: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x218660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218664: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x218664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x218668: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x218668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21866c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x21866cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x218670: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x218670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218674: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x218674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x218678: 0x3e00008  jr          $ra
    ctx->pc = 0x218678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218680u;
}
