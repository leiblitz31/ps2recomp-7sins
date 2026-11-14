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

// Function: sub_001625D0
// Address: 0x1625d0 - 0x162600
void sub_001625D0_0x1625d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001625D0_0x1625d0");
#endif

    ctx->pc = 0x1625d0u;

    // 0x1625d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1625d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1625d4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1625d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1625d8: 0xa3a0000c  sb          $zero, 0xC($sp)
    ctx->pc = 0x1625d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x1625dc: 0x27a3000c  addiu       $v1, $sp, 0xC
    ctx->pc = 0x1625dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1625e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1625e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1625e4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1625e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1625e8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1625e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1625ec: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1625ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1625f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1625F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1625F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1625F8u;
    // 0x1625f8: 0x0  nop
    ctx->pc = 0x1625f8u;
    // NOP
    // 0x1625fc: 0x0  nop
    ctx->pc = 0x1625fcu;
    // NOP
    ctx->pc = 0x162600u;
}
