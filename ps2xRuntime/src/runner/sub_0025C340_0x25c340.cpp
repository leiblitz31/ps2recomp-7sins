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

// Function: sub_0025C340
// Address: 0x25c340 - 0x25c370
void sub_0025C340_0x25c340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C340_0x25c340");
#endif

    ctx->pc = 0x25c340u;

    // 0x25c340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25c340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25c344: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25c344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25c348: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25c348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c34c: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x25c34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x25c350: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25c350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c354: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x25c354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
    // 0x25c358: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x25c358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25c35c: 0x3e00008  jr          $ra
    ctx->pc = 0x25C35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C364u;
    // 0x25c364: 0x0  nop
    ctx->pc = 0x25c364u;
    // NOP
    // 0x25c368: 0x0  nop
    ctx->pc = 0x25c368u;
    // NOP
    // 0x25c36c: 0x0  nop
    ctx->pc = 0x25c36cu;
    // NOP
    ctx->pc = 0x25c370u;
}
