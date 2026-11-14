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

// Function: sub_0048F450
// Address: 0x48f450 - 0x48f490
void sub_0048F450_0x48f450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F450_0x48f450");
#endif

    ctx->pc = 0x48f450u;

    // 0x48f450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48f450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48f454: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x48f454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x48f458: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x48f458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x48f45c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48f460: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48f460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48f464: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48f464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48f468: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48f468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x48f46c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48f470: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x48f470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48f474: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48f474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48f478: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x48f478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x48f47c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48f480: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x48f480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48f484: 0x3e00008  jr          $ra
    ctx->pc = 0x48F484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48F48Cu;
    // 0x48f48c: 0x0  nop
    ctx->pc = 0x48f48cu;
    // NOP
    ctx->pc = 0x48f490u;
}
