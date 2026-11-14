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

// Function: sub_00101B90
// Address: 0x101b90 - 0x101bc0
void sub_00101B90_0x101b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101B90_0x101b90");
#endif

    ctx->pc = 0x101b90u;

    // 0x101b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x101b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x101b94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x101b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x101b98: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x101b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101b9c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x101b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x101ba0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x101ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101ba4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101ba8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x101ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101bac: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x101bacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x101bb0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x101bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x101bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x101BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101BBCu;
    // 0x101bbc: 0x0  nop
    ctx->pc = 0x101bbcu;
    // NOP
    ctx->pc = 0x101bc0u;
}
