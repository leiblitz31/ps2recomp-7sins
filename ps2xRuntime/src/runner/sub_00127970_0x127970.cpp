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

// Function: sub_00127970
// Address: 0x127970 - 0x1279b0
void sub_00127970_0x127970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127970_0x127970");
#endif

    ctx->pc = 0x127970u;

    // 0x127970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x127970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x127974: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x127974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x127978: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x127978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12797c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12797cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127980: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x127980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x127984: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x127984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127988: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x127988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x12798c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12798cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127990: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x127990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x127994: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x127994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127998: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x127998u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x12799c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x12799cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1279a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1279A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1279A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1279A8u;
    // 0x1279a8: 0x0  nop
    ctx->pc = 0x1279a8u;
    // NOP
    // 0x1279ac: 0x0  nop
    ctx->pc = 0x1279acu;
    // NOP
    ctx->pc = 0x1279b0u;
}
