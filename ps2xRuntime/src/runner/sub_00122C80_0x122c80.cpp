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

// Function: sub_00122C80
// Address: 0x122c80 - 0x122cb0
void sub_00122C80_0x122c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122C80_0x122c80");
#endif

    ctx->pc = 0x122c80u;

    // 0x122c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x122c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x122c84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x122c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x122c88: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x122c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122c8c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x122c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122c90: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x122c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x122c94: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x122c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x122c98: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x122c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x122c9c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x122c9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x122ca0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x122ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x122ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x122CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122CACu;
    // 0x122cac: 0x0  nop
    ctx->pc = 0x122cacu;
    // NOP
    ctx->pc = 0x122cb0u;
}
