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

// Function: sub_002A3A00
// Address: 0x2a3a00 - 0x2a3a30
void sub_002A3A00_0x2a3a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3A00_0x2a3a00");
#endif

    ctx->pc = 0x2a3a00u;

    // 0x2a3a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a3a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a3a04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a3a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a3a08: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2a3a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2a3a0c: 0x8fb00020  lw          $s0, 0x20($sp)
    ctx->pc = 0x2a3a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3a10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a3a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3a14: 0xa2020078  sb          $v0, 0x78($s0)
    ctx->pc = 0x2a3a14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a3a18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a3a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3a1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a3a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3a20: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a3a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a3a24: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3A2Cu;
    // 0x2a3a2c: 0x0  nop
    ctx->pc = 0x2a3a2cu;
    // NOP
    ctx->pc = 0x2a3a30u;
}
