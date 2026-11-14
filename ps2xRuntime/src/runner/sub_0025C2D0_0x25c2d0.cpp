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

// Function: sub_0025C2D0
// Address: 0x25c2d0 - 0x25c300
void sub_0025C2D0_0x25c2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C2D0_0x25c2d0");
#endif

    ctx->pc = 0x25c2d0u;

    // 0x25c2d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25c2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25c2d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25c2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25c2d8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x25c2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25c2dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25c2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c2e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25c2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c2e4: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x25c2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
    // 0x25c2e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25c2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25c2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x25C2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C2F4u;
    // 0x25c2f4: 0x0  nop
    ctx->pc = 0x25c2f4u;
    // NOP
    // 0x25c2f8: 0x0  nop
    ctx->pc = 0x25c2f8u;
    // NOP
    // 0x25c2fc: 0x0  nop
    ctx->pc = 0x25c2fcu;
    // NOP
    ctx->pc = 0x25c300u;
}
