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

// Function: sub_00115FC0
// Address: 0x115fc0 - 0x115ff0
void sub_00115FC0_0x115fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115FC0_0x115fc0");
#endif

    ctx->pc = 0x115fc0u;

    // 0x115fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115fc4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x115fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x115fc8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x115fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115fcc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x115fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115fd0: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x115fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x115fd4: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x115fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x115fd8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x115fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x115fdc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x115fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x115fe0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x115fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x115fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x115FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115FECu;
    // 0x115fec: 0x0  nop
    ctx->pc = 0x115fecu;
    // NOP
    ctx->pc = 0x115ff0u;
}
