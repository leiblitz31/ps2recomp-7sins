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

// Function: sub_00457910
// Address: 0x457910 - 0x457950
void sub_00457910_0x457910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00457910_0x457910");
#endif

    ctx->pc = 0x457910u;

    // 0x457910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x457910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x457914: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x457914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x457918: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x457918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x45791c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x45791cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x457920: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x457920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457924: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x457924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457928: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x457928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x45792c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x45792cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x457930: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x457930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457934: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x457934u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x457938: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x457938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45793c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x45793cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x457940: 0x3e00008  jr          $ra
    ctx->pc = 0x457940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x457940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x457948u;
    // 0x457948: 0x0  nop
    ctx->pc = 0x457948u;
    // NOP
    // 0x45794c: 0x0  nop
    ctx->pc = 0x45794cu;
    // NOP
    ctx->pc = 0x457950u;
}
