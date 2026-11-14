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

// Function: sub_002D9100
// Address: 0x2d9100 - 0x2d9130
void sub_002D9100_0x2d9100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9100_0x2d9100");
#endif

    ctx->pc = 0x2d9100u;

    // 0x2d9100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d9100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d9104: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d9104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d9108: 0xa3a0000c  sb          $zero, 0xC($sp)
    ctx->pc = 0x2d9108u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d910c: 0x27a3000c  addiu       $v1, $sp, 0xC
    ctx->pc = 0x2d910cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x2d9110: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d9110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9114: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2d9114u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d9118: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2d9118u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d911c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d911cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d9120: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9128u;
    // 0x2d9128: 0x0  nop
    ctx->pc = 0x2d9128u;
    // NOP
    // 0x2d912c: 0x0  nop
    ctx->pc = 0x2d912cu;
    // NOP
    ctx->pc = 0x2d9130u;
}
