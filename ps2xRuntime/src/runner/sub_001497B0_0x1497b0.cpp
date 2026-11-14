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

// Function: sub_001497B0
// Address: 0x1497b0 - 0x149800
void sub_001497B0_0x1497b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001497B0_0x1497b0");
#endif

    ctx->pc = 0x1497b0u;

    // 0x1497b0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1497b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1497b4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1497b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1497b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1497b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1497bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1497bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1497c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1497c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1497c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1497c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1497c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1497c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1497cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1497ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1497d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1497d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1497d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1497d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1497d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1497d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1497dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1497dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1497e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1497e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1497e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1497e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1497e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1497e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1497ec: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x1497ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1497f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1497F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1497F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1497F8u;
    // 0x1497f8: 0x0  nop
    ctx->pc = 0x1497f8u;
    // NOP
    // 0x1497fc: 0x0  nop
    ctx->pc = 0x1497fcu;
    // NOP
    ctx->pc = 0x149800u;
}
