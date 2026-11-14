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

// Function: sub_0013D4B0
// Address: 0x13d4b0 - 0x13d4f0
void sub_0013D4B0_0x13d4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D4B0_0x13d4b0");
#endif

    ctx->pc = 0x13d4b0u;

    // 0x13d4b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d4b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d4b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13d4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13d4bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13d4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x13d4c0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d4c4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x13d4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13d4c8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x13d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d4cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13d4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13d4d0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d4d4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x13d4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x13d4d8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x13d4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d4dc: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x13d4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x13d4e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d4e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d4e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13d4e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13d4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x13D4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D4F0u;
}
