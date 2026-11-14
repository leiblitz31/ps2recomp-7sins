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

// Function: sub_00192430
// Address: 0x192430 - 0x192460
void sub_00192430_0x192430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192430_0x192430");
#endif

    ctx->pc = 0x192430u;

    // 0x192430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x192430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x192434: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x192434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x192438: 0xa3a0000c  sb          $zero, 0xC($sp)
    ctx->pc = 0x192438u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x19243c: 0x27a3000c  addiu       $v1, $sp, 0xC
    ctx->pc = 0x19243cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x192440: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x192440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192444: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x192444u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192448: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x192448u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19244c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19244cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x192450: 0x3e00008  jr          $ra
    ctx->pc = 0x192450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192458u;
    // 0x192458: 0x0  nop
    ctx->pc = 0x192458u;
    // NOP
    // 0x19245c: 0x0  nop
    ctx->pc = 0x19245cu;
    // NOP
    ctx->pc = 0x192460u;
}
