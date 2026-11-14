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

// Function: sub_0022D400
// Address: 0x22d400 - 0x22d450
void sub_0022D400_0x22d400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D400_0x22d400");
#endif

    ctx->pc = 0x22d400u;

    // 0x22d400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22d400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22d404: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x22d404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x22d408: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x22d408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x22d40c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d410: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22d410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22d414: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22d414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d418: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22d418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x22d41c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d420: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x22d420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22d424: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22d424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d428: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x22d428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x22d42c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d430: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x22d430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22d434: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22d434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d438: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x22d438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x22d43c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d440: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x22d440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22d444: 0x3e00008  jr          $ra
    ctx->pc = 0x22D444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D44Cu;
    // 0x22d44c: 0x0  nop
    ctx->pc = 0x22d44cu;
    // NOP
    ctx->pc = 0x22d450u;
}
