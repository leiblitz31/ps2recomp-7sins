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

// Function: sub_0014D520
// Address: 0x14d520 - 0x14d550
void sub_0014D520_0x14d520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D520_0x14d520");
#endif

    ctx->pc = 0x14d520u;

    // 0x14d520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d524: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x14d524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x14d528: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14d528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d52c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d530: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14d530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14d534: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14d534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14d538: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x14d538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x14d53c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x14d53cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x14d540: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x14d540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14d544: 0x3e00008  jr          $ra
    ctx->pc = 0x14D544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D54Cu;
    // 0x14d54c: 0x0  nop
    ctx->pc = 0x14d54cu;
    // NOP
    ctx->pc = 0x14d550u;
}
