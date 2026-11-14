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

// Function: sub_002275A0
// Address: 0x2275a0 - 0x2275e0
void sub_002275A0_0x2275a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002275A0_0x2275a0");
#endif

    ctx->pc = 0x2275a0u;

    // 0x2275a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2275a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2275a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2275a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2275a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2275a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2275ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2275acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2275b0: 0x8fb00020  lw          $s0, 0x20($sp)
    ctx->pc = 0x2275b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2275b4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2275b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2275b8: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x2275b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x2275bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2275bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2275c0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2275c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2275c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2275c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2275c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2275c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2275cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2275ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2275d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2275d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2275d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2275D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2275D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2275DCu;
    // 0x2275dc: 0x0  nop
    ctx->pc = 0x2275dcu;
    // NOP
    ctx->pc = 0x2275e0u;
}
