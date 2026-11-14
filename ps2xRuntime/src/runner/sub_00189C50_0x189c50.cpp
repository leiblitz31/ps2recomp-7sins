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

// Function: sub_00189C50
// Address: 0x189c50 - 0x189c80
void sub_00189C50_0x189c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189C50_0x189c50");
#endif

    ctx->pc = 0x189c50u;

    // 0x189c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x189c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x189c54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189c58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x189c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x189c5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189c60: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x189c60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189c64: 0x2610ffec  addiu       $s0, $s0, -0x14
    ctx->pc = 0x189c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x189c68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x189c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189c70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x189c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x189c74: 0x3e00008  jr          $ra
    ctx->pc = 0x189C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189C7Cu;
    // 0x189c7c: 0x0  nop
    ctx->pc = 0x189c7cu;
    // NOP
    ctx->pc = 0x189c80u;
}
