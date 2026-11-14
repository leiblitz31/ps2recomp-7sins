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

// Function: sub_00469560
// Address: 0x469560 - 0x4695a0
void sub_00469560_0x469560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469560_0x469560");
#endif

    ctx->pc = 0x469560u;

    // 0x469560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x469560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x469564: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x469564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x469568: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x469568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x46956c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46956cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469570: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x469570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x469574: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x469574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469578: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x469578u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x46957c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46957cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469580: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x469580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x469584: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x469584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469588: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x469588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x46958c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x46958cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469590: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x469590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x469594: 0x3e00008  jr          $ra
    ctx->pc = 0x469594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46959Cu;
    // 0x46959c: 0x0  nop
    ctx->pc = 0x46959cu;
    // NOP
    ctx->pc = 0x4695a0u;
}
