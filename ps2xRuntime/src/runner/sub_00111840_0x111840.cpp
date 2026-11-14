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

// Function: sub_00111840
// Address: 0x111840 - 0x111870
void sub_00111840_0x111840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111840_0x111840");
#endif

    ctx->pc = 0x111840u;

    // 0x111840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x111840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x111844: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x111844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x111848: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x111848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x11184c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11184cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111850: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x111850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111854: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x111854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111858: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x111858u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11185c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11185cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111860: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x111860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x111864: 0x3e00008  jr          $ra
    ctx->pc = 0x111864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11186Cu;
    // 0x11186c: 0x0  nop
    ctx->pc = 0x11186cu;
    // NOP
    ctx->pc = 0x111870u;
}
