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

// Function: sub_001C5310
// Address: 0x1c5310 - 0x1c5340
void sub_001C5310_0x1c5310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5310_0x1c5310");
#endif

    ctx->pc = 0x1c5310u;

    // 0x1c5310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c5310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c5314: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1c5314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1c5318: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c5318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c531c: 0x24430007  addiu       $v1, $v0, 0x7
    ctx->pc = 0x1c531cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x1c5320: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x1c5320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1c5324: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c5324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c5328: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1c5328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c532c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C532Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C532Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5334u;
    // 0x1c5334: 0x0  nop
    ctx->pc = 0x1c5334u;
    // NOP
    // 0x1c5338: 0x0  nop
    ctx->pc = 0x1c5338u;
    // NOP
    // 0x1c533c: 0x0  nop
    ctx->pc = 0x1c533cu;
    // NOP
    ctx->pc = 0x1c5340u;
}
