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

// Function: sub_00278980
// Address: 0x278980 - 0x2789c0
void sub_00278980_0x278980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278980_0x278980");
#endif

    ctx->pc = 0x278980u;

    // 0x278980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278984: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x278984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x278988: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x278988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27898c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x27898cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x278990: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278994: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x278994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x278998: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x278998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27899c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x27899cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2789a0: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x2789a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2789a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2789a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2789a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2789a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2789ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2789acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2789b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2789B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2789B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2789B8u;
    // 0x2789b8: 0x0  nop
    ctx->pc = 0x2789b8u;
    // NOP
    // 0x2789bc: 0x0  nop
    ctx->pc = 0x2789bcu;
    // NOP
    ctx->pc = 0x2789c0u;
}
