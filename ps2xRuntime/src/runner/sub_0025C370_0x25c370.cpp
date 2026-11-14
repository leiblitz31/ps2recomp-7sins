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

// Function: sub_0025C370
// Address: 0x25c370 - 0x25c3a0
void sub_0025C370_0x25c370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C370_0x25c370");
#endif

    ctx->pc = 0x25c370u;

    // 0x25c370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25c370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25c374: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25c374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25c378: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25c378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c37c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x25c37cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x25c380: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25c380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c384: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x25c384u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x25c388: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25c388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c38c: 0xa0400021  sb          $zero, 0x21($v0)
    ctx->pc = 0x25c38cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x25c390: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25c390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c394: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x25c394u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25c398: 0x3e00008  jr          $ra
    ctx->pc = 0x25C398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C3A0u;
}
